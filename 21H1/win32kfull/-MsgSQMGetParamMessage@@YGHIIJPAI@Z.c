/*
 * XREFs of ?MsgSQMGetParamMessage@@YGHIIJPAI@Z @ 0x180F17
 * Callers:
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 * Callees:
 *     <none>
 */

int __userpurge MsgSQMGetParamMessage@<eax>(
        unsigned int a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        unsigned int *a4,
        int a5,
        unsigned int *a6)
{
  int result; // eax

  result = 0;
  *a4 = 0;
  if ( a2 >= 0x111 )
  {
    if ( a2 <= 0x112 || a2 == 281 || a2 == 528 )
    {
      *a4 = a1;
    }
    else
    {
      if ( a2 != 793 )
        return result;
      *a4 = HIWORD(a3) & 0xFFF;
    }
    return 1;
  }
  return result;
}
