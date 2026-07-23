/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x140550998
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x140323AA0 (MiCheckZeroFreeRebalance.c)
 *     MiRebuildLargePages @ 0x14038D810 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x140551440 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 8LL;
  v6 = (_QWORD *)(192LL * a3 + 4544LL * a2 + v4 + 3256);
  do
  {
    v3 += *v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  return v3;
}
