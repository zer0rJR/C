
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,len=0,count=0;
    char a[200];
    gets(a);
    while(a[i]!='\0')
    {
        len++;
        i++;

    }
    for(i=0; i<len/2; i++)
    {
        if(a[i]!=a[len-1-i])
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("yes");
    else
        printf("no");

    return 0;
}
