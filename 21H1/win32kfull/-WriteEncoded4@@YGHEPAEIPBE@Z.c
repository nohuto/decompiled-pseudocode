/*
 * XREFs of ?WriteEncoded4@@YGHEPAEIPBE@Z @ 0x2321A7
 * Callers:
 *     _EncodeRLE8@20 @ 0x2332AE (_EncodeRLE8@20.c)
 *     _EncodeRLE4@20 @ 0x23486D (_EncodeRLE4@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __userpurge WriteEncoded4@<eax>(
        _BYTE *a1@<edx>,
        char a2@<cl>,
        char a3,
        unsigned __int8 *a4,
        unsigned int a5,
        const unsigned __int8 *a6)
{
  if ( !a1 )
    return 2;
  if ( a1 + 2 <= a4 )
  {
    *a1 = a3;
    a1[1] = a2;
    return 2;
  }
  return 0;
}
