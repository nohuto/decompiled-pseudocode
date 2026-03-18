/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14033B6A0
 * Callers:
 *     MiDrainZeroLookasides @ 0x1402416A4 (MiDrainZeroLookasides.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140246160 (MiInitializeAllResidentPageBasePfns.c)
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiGetLargePageChain @ 0x140266158 (MiGetLargePageChain.c)
 *     MiGetLargePage @ 0x140267060 (MiGetLargePage.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiFinishLargePageFree @ 0x14028CB64 (MiFinishLargePageFree.c)
 *     MiInsertLargePageChain @ 0x1402C15F0 (MiInsertLargePageChain.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C8740 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDemoteLocalLargePage @ 0x1402CA210 (MiDemoteLocalLargePage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402CB2D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiLargePagePromote @ 0x1402CC9A0 (MiLargePagePromote.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiLargePageFreeToZero @ 0x1402E86F0 (MiLargePageFreeToZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140315EE0 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x14033AC90 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14033B190 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x14033E970 (MiActOnPte.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x140340078 (MiTransferSoftwarePte.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x14037E338 (MiMapPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14038E608 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiCreatePfnTemplate @ 0x1403B770C (MiCreatePfnTemplate.c)
 *     MiLargeFreePageToMdl @ 0x1403D5CF4 (MiLargeFreePageToMdl.c)
 *     MiEnableNewPfns @ 0x1405827E0 (MiEnableNewPfns.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 *     MiFreeReservationRun @ 0x1406EC2D4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C50780 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C50780 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C50780 )
  {
    if ( (qword_140C50780 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C50780 | result;
  }
  return result;
}
