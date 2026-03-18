/*
 * XREFs of MiFreeLargePageMemory @ 0x1402F19BC
 * Callers:
 *     MiFreeContiguousPages @ 0x140261B18 (MiFreeContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x14034E304 (MiFreeMdlPageRun.c)
 *     MiDecommitLargePoolVa @ 0x1403705F0 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x140551100 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140A4E704 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReadyLargePageToFree @ 0x1402AD140 (MiReadyLargePageToFree.c)
 *     MiSetPfnPageState @ 0x1402AD310 (MiSetPfnPageState.c)
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     MiUpdateLargePageBitMap @ 0x14034A334 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AB590 (MiSetFreeZeroPfnCold.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F49E4 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403F6268 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x1403F6514 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
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
    *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(48 * a1 - 0x58000000000LL + 40) >> 39) & 0x3FFLL)),
    v14,
    v13,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x58000000000LL, (a3 & 1) == 0);
  else
    return 0LL;
}
