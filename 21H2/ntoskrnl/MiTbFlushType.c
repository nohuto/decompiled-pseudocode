/*
 * XREFs of MiTbFlushType @ 0x140333AA0
 * Callers:
 *     MiEmptyWorkingSetInitiate @ 0x140256548 (MiEmptyWorkingSetInitiate.c)
 *     MiNoFaultFound @ 0x14027B0B8 (MiNoFaultFound.c)
 *     MiTrimSharedPageFromViews @ 0x14027B820 (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x140291FC0 (MiValidFault.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 *     MmProtectPool @ 0x140367190 (MmProtectPool.c)
 *     MiTrimWorkingSet @ 0x1403744D8 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140374864 (MiSimpleAging.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140374BBC (MiDeprioritizeVirtualAddresses.c)
 *     MiReplaceLockedPage @ 0x1403D0BD4 (MiReplaceLockedPage.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403D2280 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiClearPteAccessedBitRange @ 0x140419160 (MiClearPteAccessedBitRange.c)
 *     MmUpdateOldWorkingSetPages @ 0x14059774C (MmUpdateOldWorkingSetPages.c)
 *     MiEliminateZeroPages @ 0x1406F5BB0 (MiEliminateZeroPages.c)
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
