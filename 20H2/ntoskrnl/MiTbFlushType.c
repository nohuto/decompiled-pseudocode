/*
 * XREFs of MiTbFlushType @ 0x1402BA458
 * Callers:
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiNoFaultFound @ 0x1402997A8 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     MiEmptyWorkingSetInitiate @ 0x14031AA80 (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x14031AEF4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14031B27C (MiSimpleAging.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     MiCrcStillIntact @ 0x1403678C4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A007C (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053AEEC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x14062A9D0 (MiEliminateZeroPages.c)
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
