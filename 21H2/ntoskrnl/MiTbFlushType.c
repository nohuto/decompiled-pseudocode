/*
 * XREFs of MiTbFlushType @ 0x140341F58
 * Callers:
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiTrimWorkingSet @ 0x14029EC80 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     MiNoFaultFound @ 0x14031CF18 (MiNoFaultFound.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiSimpleAging @ 0x14036C5D8 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053690C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053CC2C (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x14063B370 (MiEliminateZeroPages.c)
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
