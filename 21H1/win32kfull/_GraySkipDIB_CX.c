/*
 * XREFs of _GraySkipDIB_CX @ 0x1CAC5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GraySkipDIB_CX(int a1, int a2, _WORD *a3, _WORD *a4, int a5)
{
  int v5; // ecx
  unsigned __int16 *v7; // esi
  int v8; // eax

  v5 = a2;
  if ( a2 )
  {
    v7 = *(unsigned __int16 **)(a1 + 72);
    do
    {
      v8 = *v7++;
      v5 += v8;
      *a3 = GrayIdxWORD[*(unsigned __int8 *)(v5 - 1)];
      a3 = (_WORD *)((char *)a3 + a5);
    }
    while ( a3 != a4 );
  }
}
