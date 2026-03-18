/*
 * XREFs of _CopyDIB_CX @ 0x1C6901
 * Callers:
 *     _RepDIB_CY @ 0x1CACEC (_RepDIB_CY.c)
 * Callees:
 *     <none>
 */

void __cdecl CopyDIB_CX(int a1, _WORD *a2, int a3, int a4, int a5)
{
  _WORD *v5; // ecx
  __int16 v7; // ax

  v5 = a2;
  if ( a2 )
  {
    do
    {
      v7 = *v5;
      v5 = (_WORD *)((char *)v5 + 3);
      *(_WORD *)a3 = v7;
      *(_BYTE *)(a3 + 2) = *((_BYTE *)v5 - 1);
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
