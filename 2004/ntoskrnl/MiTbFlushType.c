/*
 * XREFs of MiTbFlushType @ 0x140245D64
 * Callers:
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiNoFaultFound @ 0x1402BE258 (MiNoFaultFound.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiEmptyWorkingSetInitiate @ 0x140311470 (MiEmptyWorkingSetInitiate.c)
 *     MiTrimWorkingSet @ 0x14031185C (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140311BE4 (MiSimpleAging.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14039DBB8 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403EF2E0 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405311FC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053751C (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14053829C (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x1406074A0 (MiEliminateZeroPages.c)
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
