/*
 * XREFs of MiFreeLargePageMemory @ 0x140316778
 * Callers:
 *     MiFreeMdlPageRun @ 0x1403175B8 (MiFreeMdlPageRun.c)
 *     MiFreeContiguousPages @ 0x140337158 (MiFreeContiguousPages.c)
 *     MiDecommitLargePoolVa @ 0x14036E6A0 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x14054D730 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x140558FF8 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140A48474 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReadyLargePageToFree @ 0x1402B5DF0 (MiReadyLargePageToFree.c)
 *     MiSetPfnPageState @ 0x1402B5FC0 (MiSetPfnPageState.c)
 *     MiUpdateLargePageBitMap @ 0x1403178D8 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x14033C33C (MiUnlockPage.c)
 *     MiSetFreeZeroPfnCold @ 0x1403A8BA0 (MiSetFreeZeroPfnCold.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F04D0 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403F1D54 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F20A8 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  BOOL v7; // edi
  __int64 v8; // rcx
  char v9; // r9
  char v10; // r10
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1, a2);
  v6 = MiLargePageSizes[v3];
  v7 = (a3 & 1) == 0;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v3) )
  {
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
    MiLockPageInline(48 * a1 - 0x58000000000LL);
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, v7 + 5);
    MiSetFreeZeroPfnCold(v8, (unsigned int)(v7 + 1));
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, v9);
    LOBYTE(v11) = v10;
    MiUnlockPage(v12, v11);
  }
  v13 = 512;
  v14 = a1;
  if ( (unsigned int)v3 > 1 )
    v14 = a1 & 0xFFFFFE00;
  else
    v13 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(48 * a1 - 0x58000000000LL + 40) >> 39) & 0x3FFLL)),
    v14,
    v13,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x58000000000LL, (a3 & 1) == 0);
  else
    return 0LL;
}
