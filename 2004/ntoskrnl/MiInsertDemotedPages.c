/*
 * XREFs of MiInsertDemotedPages @ 0x1403164E0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x14023B280 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiDemoteLargeFreePage @ 0x140353CC8 (MiDemoteLargeFreePage.c)
 * Callees:
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 */

__int64 __fastcall MiInsertDemotedPages(int a1, int a2, int a3, int a4, __int64 a5)
{
  int v8; // ebx
  int v9; // edi
  __int64 result; // rax

  if ( a3 != a4 )
  {
    v8 = 0;
    do
    {
      v9 = a3 + 1;
      if ( a3 + 1 == a4 )
        v8 = 1;
      result = MiInsertLargePageChain(a1, a2, a5, a3, v8);
      a3 = v9;
    }
    while ( v9 != a4 );
  }
  return result;
}
