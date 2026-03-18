/*
 * XREFs of MiFreeLargePageMemory @ 0x14028CA70
 * Callers:
 *     MiFreeContiguousPages @ 0x140213FA8 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x140228464 (MiDecommitLargePoolVa.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiFreeSlabEntry @ 0x1405B0E30 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140B05620 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x14023073C (MiColdPageSizeSupported.c)
 *     MiFinishLargePageFree @ 0x14028CB64 (MiFinishLargePageFree.c)
 *     MiReadyLargePageToFree @ 0x14028CEE0 (MiReadyLargePageToFree.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiChangePageHeatImmediate @ 0x1405B766C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiFreeLargePageMemory(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // r12
  unsigned int v7; // r15d
  int v8; // r8d
  int v9; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1, a2);
  v6 = MiLargePageSizes[v3];
  v7 = 1;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported(v3) )
  {
    v7 = 0;
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
  }
  v8 = 512;
  v9 = a1;
  if ( (unsigned int)v3 > 1 )
    v9 = a1 & 0xFFFFFE00;
  else
    v8 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(48 * a1 - 0x220000000000LL + 40) >> 43) & 0x3FFLL)),
    v9,
    v8,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x220000000000LL, (a3 & 1) == 0, v7);
  else
    return 0LL;
}
