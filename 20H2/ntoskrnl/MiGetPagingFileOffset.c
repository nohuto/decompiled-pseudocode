/*
 * XREFs of MiGetPagingFileOffset @ 0x1402397FC
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x140239338 (MiStoreUpdatePagefileHash.c)
 *     MiExpandSharedZeroCluster @ 0x1402394E4 (MiExpandSharedZeroCluster.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1403177D4 (MiComputeFaultCluster.c)
 *     MiFlowThroughInsertNode @ 0x14032E38C (MiFlowThroughInsertNode.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiComputePageHash @ 0x140389A40 (MiComputePageHash.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiDbgMarkPfnModified @ 0x1405441EC (MiDbgMarkPfnModified.c)
 *     MiWorkingSetInfoCheckPageTable @ 0x140545CF0 (MiWorkingSetInfoCheckPageTable.c)
 *     MiValidatePagefilePageHash @ 0x14055BC4C (MiValidatePagefilePageHash.c)
 *     MiScanPagefileSpace @ 0x1408D3010 (MiScanPagefileSpace.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetPagingFileOffset(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v1 & 4) == 0 )
    return 0LL;
  if ( qword_140C4DDC0 )
  {
    if ( (v1 & 0x10) != 0 )
      v1 &= ~0x10uLL;
    else
      v1 &= ~qword_140C4DDC0;
  }
  return HIDWORD(v1);
}
