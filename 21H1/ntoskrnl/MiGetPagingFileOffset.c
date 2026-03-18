/*
 * XREFs of MiGetPagingFileOffset @ 0x140344E64
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     MiFlowThroughInsertNode @ 0x14031FD1C (MiFlowThroughInsertNode.c)
 *     MiComputeFaultCluster @ 0x1403409B8 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiStoreUpdatePagefileHash @ 0x1403449A0 (MiStoreUpdatePagefileHash.c)
 *     MiExpandSharedZeroCluster @ 0x140344B4C (MiExpandSharedZeroCluster.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiComputePageHash @ 0x140386910 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1405401CC (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140541CD0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x140557C2C (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x1408CBE80 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C4DE80 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C4DE80;
  }
  return HIDWORD(v1);
}
