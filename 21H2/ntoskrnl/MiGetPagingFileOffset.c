/*
 * XREFs of MiGetPagingFileOffset @ 0x1402712A0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiStoreUpdatePagefileHash @ 0x14026E480 (MiStoreUpdatePagefileHash.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiExpandSharedZeroCluster @ 0x140270F88 (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x14028AF68 (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x14028DF24 (MiComputeFaultCluster.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiFlowThroughInsertNode @ 0x1402D006C (MiFlowThroughInsertNode.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14030E9B0 (MiIssueHardFault.c)
 *     MiPfnShareCountIsZero @ 0x140326190 (MiPfnShareCountIsZero.c)
 *     MiComputePageHash @ 0x14038A190 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x140545CEC (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405477F0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x14055D71C (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x1408D07D0 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C4DF40;
  }
  return HIDWORD(v1);
}
