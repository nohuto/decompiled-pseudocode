/*
 * XREFs of MiGetNodeStandbyPageCount @ 0x14045C7CC
 * Callers:
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiRebuildLargePages @ 0x140396D30 (MiRebuildLargePages.c)
 *     MiFreeZeroPagesNeeded @ 0x14045C75A (MiFreeZeroPagesNeeded.c)
 *     MiRebuildLargePage @ 0x14045CDD6 (MiRebuildLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNodeStandbyPageCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = (__int64 *)(704LL * a3 + 24512LL * a2 + *(_QWORD *)(a1 + 16) + 3256LL);
  v5 = 8LL;
  do
  {
    v6 = *v4;
    v4 += 11;
    v3 += v6;
    --v5;
  }
  while ( v5 );
  return v3;
}
