/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1402E25D0
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14024020C (MI_CLEAR_RESET_PTE.c)
 *     MiClearPageFileHash @ 0x140249FA4 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x14024C338 (MiMapPageFileHash.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiConvertContiguousPages @ 0x140294F14 (MiConvertContiguousPages.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpace @ 0x1402E19E0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403B1594 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1600 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x14063AA94 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DF80 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DF80 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DF80 )
  {
    if ( (qword_140C4DF80 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DF80 | result;
  }
  return result;
}
