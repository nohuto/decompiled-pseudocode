/*
 * XREFs of MiGetPagingFileOffset @ 0x140315B24
 * Callers:
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiComputeFaultCluster @ 0x140311F14 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiStoreUpdatePagefileHash @ 0x140315660 (MiStoreUpdatePagefileHash.c)
 *     MiExpandSharedZeroCluster @ 0x14031580C (MiExpandSharedZeroCluster.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MiTranslatePageForCopy @ 0x14033FBD4 (MiTranslatePageForCopy.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
 *     MiComputePageHash @ 0x140387880 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x14054081C (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140542320 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x14055827C (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x1408CD1D0 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C4DD40 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C4DD40;
  }
  return HIDWORD(v1);
}
