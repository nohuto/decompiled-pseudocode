/*
 * XREFs of MiGetPagingFileOffset @ 0x14025F240
 * Callers:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x14020B0C4 (MiComputeFaultCluster.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     MiStoreUpdatePagefileHash @ 0x14025C420 (MiStoreUpdatePagefileHash.c)
 *     MiGetWorkingSetInfoList @ 0x14025C83C (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiExpandSharedZeroCluster @ 0x14025EF28 (MiExpandSharedZeroCluster.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiComputePageHash @ 0x14038A2E0 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x140545F2C (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140547A30 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x14055D95C (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x1408D0930 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C4DF80 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C4DF80;
  }
  return HIDWORD(v1);
}
