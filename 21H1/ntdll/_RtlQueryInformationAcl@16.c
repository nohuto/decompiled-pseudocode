/*
 * XREFs of _RtlQueryInformationAcl@16 @ 0x4B2D9620
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __stdcall RtlQueryInformationAcl(unsigned __int8 *a1, _DWORD *a2, unsigned int a3, int a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v8; // [esp+4h] [ebp-4h] BYREF

  if ( (unsigned __int8)(*a1 - 2) <= 2u )
  {
    if ( a4 == 1 )
    {
      if ( a3 >= 4 )
      {
        *a2 = *a1;
        return 0;
      }
    }
    else
    {
      if ( a4 != 2 )
        return -1073741821;
      if ( a3 >= 0xC )
      {
        if ( RtlFirstFreeAce((int)a1, &v8) )
        {
          v4 = v8;
          *a2 = *((unsigned __int16 *)a1 + 2);
          if ( v4 )
          {
            v5 = v4 - (_DWORD)a1;
            a2[1] = v5;
            v6 = *((unsigned __int16 *)a1 + 1) - v5;
          }
          else
          {
            a2[1] = *((unsigned __int16 *)a1 + 1);
            v6 = 0;
          }
          a2[2] = v6;
          return 0;
        }
        return -1073741811;
      }
    }
    return -1073741789;
  }
  return -1073741811;
}
