/*
 * XREFs of ?StringCchCopyA@@YGJPADIPBD@Z @ 0x10002000
 * Callers:
 *     ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x10002084 (-GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge StringCchCopyA@<eax>(int a1@<edx>, _BYTE *a2@<ecx>, char *a3, unsigned int a4, const char *a5)
{
  int v5; // esi
  int v6; // esi
  int v7; // edi
  char *v8; // edx
  char v9; // al

  v5 = 0;
  if ( a1 <= 0 )
    v5 = -2147024809;
  if ( v5 >= 0 )
  {
    v6 = a1;
    if ( !a1 )
      goto LABEL_10;
    v7 = 2147483646 - a1;
    v8 = (char *)(a3 - a2);
    do
    {
      if ( !(v7 + v6) )
        break;
      v9 = a2[(_DWORD)v8];
      if ( !v9 )
        break;
      *a2++ = v9;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
LABEL_10:
      --a2;
    v5 = v6 != 0 ? 0 : -2147024774;
    goto LABEL_13;
  }
  if ( a1 )
LABEL_13:
    *a2 = 0;
  return v5;
}
