/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x140550758
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x140318D50 (MiCheckZeroFreeRebalance.c)
 *     MiRebuildLargePages @ 0x14038D6C0 (MiRebuildLargePages.c)
 *     MiRebalanceZeroFreeLists @ 0x140551200 (MiRebalanceZeroFreeLists.c)
 *     MiRebuildLargePage @ 0x1405526D8 (MiRebuildLargePage.c)
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
