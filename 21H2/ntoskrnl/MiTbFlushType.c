/*
 * XREFs of MiTbFlushType @ 0x140337208
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     MiNoFaultFound @ 0x1403121C8 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiTrimWorkingSet @ 0x140359EE4 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x14035A3D4 (MiEmptyWorkingSetInitiate.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiCrcStillIntact @ 0x140367B74 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368360 (MiSharePages.c)
 *     MiSimpleAging @ 0x14036C428 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0948 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053C9EC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x140646580 (MiEliminateZeroPages.c)
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
