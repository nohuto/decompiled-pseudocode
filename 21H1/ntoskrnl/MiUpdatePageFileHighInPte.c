/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x140228500
 * Callers:
 *     MiDecommitPages @ 0x14021CD20 (MiDecommitPages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140223EC0 (MiUnlinkNodeLargePageHelper.c)
 *     MiReservePageFileSpace @ 0x140227910 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDrainZeroLookasides @ 0x1403071D0 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x1403121FC (MI_CLEAR_RESET_PTE.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiClearPageFileHash @ 0x14031BC04 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x140341CD8 (MiMapPageFileHash.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     MiWriteComplete @ 0x1403539D0 (MiWriteComplete.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403AEF54 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403AEFC0 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403EFBB8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403EFD88 (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x1407048F4 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DE80 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DE80 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DE80 )
  {
    if ( (qword_140C4DE80 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DE80 | result;
  }
  return result;
}
