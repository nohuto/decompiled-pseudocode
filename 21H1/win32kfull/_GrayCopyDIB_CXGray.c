/*
 * XREFs of _GrayCopyDIB_CXGray @ 0x1C929E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl GrayCopyDIB_CXGray(int a1, unsigned __int8 *a2, _WORD *a3, _WORD *a4, int a5)
{
  unsigned __int8 *v5; // ecx
  int v7; // eax

  v5 = a2;
  if ( a2 )
  {
    do
    {
      v7 = *v5++;
      *a3 = GrayIdxWORD[v7];
      a3 = (_WORD *)((char *)a3 + a5);
    }
    while ( a3 != a4 );
  }
}
