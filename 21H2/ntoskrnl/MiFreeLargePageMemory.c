/*
 * XREFs of MiFreeLargePageMemory @ 0x1403093A4
 * Callers:
 *     MiFreeContiguousPages @ 0x140217D28 (MiFreeContiguousPages.c)
 *     MiFreeMdlPageRun @ 0x14030AA48 (MiFreeMdlPageRun.c)
 *     MiDecommitLargePoolVa @ 0x140370830 (MiDecommitLargePoolVa.c)
 *     MiFreeSlabEntry @ 0x140552E10 (MiFreeSlabEntry.c)
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 *     MiFreeBootDriverPages @ 0x140A51050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiUpdateLargePageBitMap @ 0x14030ADE0 (MiUpdateLargePageBitMap.c)
 *     MiReadyLargePageToFree @ 0x140334A80 (MiReadyLargePageToFree.c)
 *     MiSetPfnPageState @ 0x140334C50 (MiSetPfnPageState.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F6180 (MiConvertSmallPageRangeToLarge.c)
 *     MiFinishLargePageFree @ 0x1403F7A04 (MiFinishLargePageFree.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F7D58 (MiColdPageSizeSupported.c)
 */

__int64 __fastcall MiFreeLargePageMemory(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  BOOL v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int8 v14; // r10
  int v15; // r8d
  int v16; // edx

  v3 = a2;
  if ( (a3 & 2) != 0 )
    MiConvertSmallPageRangeToLarge(a1, a2);
  v6 = MiLargePageSizes[v3];
  v7 = 48 * a1 - 0x58000000000LL;
  v8 = (a3 & 1) == 0;
  if ( (a3 & 1) != 0 && (unsigned int)MiColdPageSizeSupported((unsigned int)v3) )
  {
    MiChangePageHeatImmediate(a1, (unsigned int)v3, 0LL);
    MiLockPageInline(48 * a1 - 0x58000000000LL);
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, (unsigned int)(v8 + 5), v9, *(_BYTE *)(v7 + 34) & 7);
    MiSetFreeZeroPfnCold(v10, (unsigned int)(v8 + 1));
    MiSetPfnPageState(48 * a1 - 0x58000000000LL, (unsigned int)v11, v12, v11);
    MiUnlockPage(v13, v14);
  }
  v15 = 512;
  v16 = a1;
  if ( (unsigned int)v3 > 1 )
    v16 = a1 & 0xFFFFFE00;
  else
    v15 = v6;
  MiUpdateLargePageBitMap(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL)), v16, v15, 0, 0);
  if ( (unsigned int)MiReadyLargePageToFree(a1, (unsigned int)v3, a3) )
    return MiFinishLargePageFree(48 * a1 - 0x58000000000LL, (a3 & 1) == 0);
  else
    return 0LL;
}
