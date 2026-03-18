/*
 * XREFs of MiFreeLargePageMemory @ 0x140345AB8
 * Callers:
 *     MiFreeContiguousPages @ 0x1402FA128 (MiFreeContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x1403468F8 (MiFreeMdlPageRun.c)
 *     MiDecommitLargePoolVa @ 0x14036DA70 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x14054D0E0 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x1405589A8 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140A42C14 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReadyLargePageToFree @ 0x140223170 (MiReadyLargePageToFree.c)
 *     MiSetPfnPageState @ 0x140223340 (MiSetPfnPageState.c)
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiUpdateLargePageBitMap @ 0x140346C18 (MiUpdateLargePageBitMap.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AEFC0 (MiSetFreeZeroPfnCold.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403EF170 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403F09F4 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x1403F0CA0 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F0D48 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  BOOL v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  char v11; // r9
  __int64 v12; // rcx
  unsigned __int8 v13; // r10
  int v14; // r8d
  int v15; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1, a2);
  v6 = MiLargePageSizes[v3];
  v7 = (a3 & 1) == 0;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v3) )
  {
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
    MiLockPageInline(48 * a1 - 0x58000000000LL, v8, v9);
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, v7 + 5);
    MiSetFreeZeroPfnCold(v10, (unsigned int)(v7 + 1));
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, v11);
    MiUnlockPage(v12, v13);
  }
  v14 = 512;
  v15 = a1;
  if ( (unsigned int)v3 > 1 )
    v15 = a1 & 0xFFFFFE00;
  else
    v14 = v6;
  MiUpdateLargePageBitMap(
    *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(48 * a1 - 0x58000000000LL + 40) >> 39) & 0x3FFLL)),
    v15,
    v14,
    0,
    0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x58000000000LL, (a3 & 1) == 0);
  else
    return 0LL;
}
