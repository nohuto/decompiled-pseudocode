/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14023DD80
 * Callers:
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402363C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiReservePageFileSpace @ 0x14023D190 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x14029167C (MiLargeFreePageToMdl.c)
 *     MiDrainZeroLookasides @ 0x1402B93C0 (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x1402C1D6C (MI_CLEAR_RESET_PTE.c)
 *     MiClearPageFileHash @ 0x1402CB854 (MiClearPageFileHash.c)
 *     MiMapPageFileHash @ 0x1402CDE38 (MiMapPageFileHash.c)
 *     MiConvertContiguousPages @ 0x1402E3BC4 (MiConvertContiguousPages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140318F30 (MiUnlinkNodeLargePageHelper.c)
 *     MiOutSwapWorkingSetPte @ 0x14032CEB0 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x140334820 (MiDecommitPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiCreatePfnTemplate @ 0x1403B1424 (MiCreatePfnTemplate.c)
 *     MiSetFreeZeroPfnCold @ 0x1403B1490 (MiSetFreeZeroPfnCold.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6BC8 (MiInitializeAllResidentPageBasePfns.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiFreeReservationRun @ 0x140645CA8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140C4DF40 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140C4DF40 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140C4DF40 )
  {
    if ( (qword_140C4DF40 & result) != 0 )
      return result | 0x10;
    else
      return qword_140C4DF40 | result;
  }
  return result;
}
