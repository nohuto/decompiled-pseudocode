/*
 * XREFs of MiGetPagingFileOffset @ 0x1402E76C0
 * Callers:
 *     MiComputeFaultCluster @ 0x140232BE4 (MiComputeFaultCluster.c)
 *     MiFlowThroughInsertNode @ 0x14025A2B4 (MiFlowThroughInsertNode.c)
 *     MiTranslatePageForCopy @ 0x14026C808 (MiTranslatePageForCopy.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiExpandSharedZeroCluster @ 0x1402E7400 (MiExpandSharedZeroCluster.c)
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     MiDemoteCombinedPte @ 0x1403336E0 (MiDemoteCombinedPte.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 *     MiStoreUpdatePagefileHash @ 0x14037E1B8 (MiStoreUpdatePagefileHash.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiComputePageHash @ 0x14045D34E (MiComputePageHash.c)
 *     MiValidatePagefilePageHash @ 0x14045D5EA (MiValidatePagefilePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x1405803C8 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1405A4940 (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x1405A6840 (MiWorkingSetInfoCheckPageTable.c)
 *     MiArePagefileContentsCorrupted @ 0x1405BC2C4 (MiArePagefileContentsCorrupted.c)
 *     MiScanPagefileSpace @ 0x14096F470 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C50780 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C50780;
  }
  return HIDWORD(v1);
}
