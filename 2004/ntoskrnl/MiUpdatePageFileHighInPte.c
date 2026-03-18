/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1402BB180
 * Callers:
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDecommitPages @ 0x1402AF9A0 (MiDecommitPages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402B6B40 (MiUnlinkNodeLargePageHelper.c)
 *     MiReservePageFileSpace @ 0x1402BA590 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiStoreWriteModifiedPages @ 0x1402D3334 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MiWriteComplete @ 0x1402F79F0 (MiWriteComplete.c)
 *     MiMapPageFileHash @ 0x1403129A0 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiConvertContiguousPages @ 0x14031600C (MiConvertContiguousPages.c)
 *     MiDrainZeroLookasides @ 0x140344FD0 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14034F9EC (MI_CLEAR_RESET_PTE.c)
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 *     MiClearPageFileHash @ 0x1403597D4 (MiClearPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403A8B34 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403A8BA0 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F0F18 (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x14069BFF8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DD40 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DD40 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DD40 )
  {
    if ( (qword_140C4DD40 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DD40 | result;
  }
  return result;
}
