/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x140348DE0
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiMapPageFileHash @ 0x14023BDF8 (MiMapPageFileHash.c)
 *     MiOutSwapWorkingSetPte @ 0x1402B02C0 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x1402B7A70 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiDrainZeroLookasides @ 0x140315D30 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14032060C (MI_CLEAR_RESET_PTE.c)
 *     MiClearPageFileHash @ 0x14032A0D4 (MiClearPageFileHash.c)
 *     MiConvertContiguousPages @ 0x140334AA4 (MiConvertContiguousPages.c)
 *     MiStoreWriteModifiedPages @ 0x140342AB0 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpace @ 0x1403481F0 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403AB524 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AB590 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F542C (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x1406F0C14 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DDC0 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DDC0 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DDC0 )
  {
    if ( (qword_140C4DDC0 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DDC0 | result;
  }
  return result;
}
