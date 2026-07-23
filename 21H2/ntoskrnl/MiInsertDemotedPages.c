/*
 * XREFs of MiInsertDemotedPages @ 0x14020F840
 * Callers:
 *     MiDemoteLargeFreePage @ 0x14020F71C (MiDemoteLargeFreePage.c)
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 * Callees:
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
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
