/*
 * XREFs of _SkipDIB_CX @ 0x1CC120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl SkipDIB_CX(int a1, int a2, int a3, int a4, int a5)
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
      v5 += 3 * v8;
      *(_WORD *)a3 = *(_WORD *)(v5 - 3);
      *(_BYTE *)(a3 + 2) = *(_BYTE *)(v5 - 1);
      a3 += a5;
    }
    while ( a3 != a4 );
  }
}
