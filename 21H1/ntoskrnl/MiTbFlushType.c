/*
 * XREFs of MiTbFlushType @ 0x14029ED94
 * Callers:
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiNoFaultFound @ 0x14022B5D8 (MiNoFaultFound.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiEmptyWorkingSetInitiate @ 0x14030C2FC (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x14030C770 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14030CAF8 (MiSimpleAging.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14039D428 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x140536ECC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x14063C5F0 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
