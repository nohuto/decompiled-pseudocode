/*
 * XREFs of KeShouldYieldProcessor @ 0x140222100
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140200D20 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140213398 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDereferenceIoPages @ 0x140215AA8 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140215E54 (MiReferenceIoPages.c)
 *     MiInitializeMdlBatchPages @ 0x1402655A0 (MiInitializeMdlBatchPages.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiProbePacketContended @ 0x140274818 (MiProbePacketContended.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     MiMoveDirtyBitsToPfns @ 0x14028E8E0 (MiMoveDirtyBitsToPfns.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiUnlinkNodeLargePages @ 0x1402CA5E0 (MiUnlinkNodeLargePages.c)
 *     NtUnlockVirtualMemory @ 0x1402CD9C0 (NtUnlockVirtualMemory.c)
 *     NtGetWriteWatch @ 0x1402CF630 (NtGetWriteWatch.c)
 *     MiFillPoolCommitPageTable @ 0x1402CFF00 (MiFillPoolCommitPageTable.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 *     MiQueryAddressSpan @ 0x14030EC70 (MiQueryAddressSpan.c)
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiDispatchFault @ 0x14031E200 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiUnlockMdlWritePages @ 0x140334830 (MiUnlockMdlWritePages.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 *     MiCommitPoolMemory @ 0x1403525F0 (MiCommitPoolMemory.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403D5614 (MiInsertViewOfPhysicalSection.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140589B90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetGraphicsPtes @ 0x14058C874 (MiSetGraphicsPtes.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MiShouldYieldProcessor @ 0x14059109C (MiShouldYieldProcessor.c)
 *     MiDeleteStaleCacheMaps @ 0x1405910C0 (MiDeleteStaleCacheMaps.c)
 *     MiMarkHugeRangeIoPfnDeleted @ 0x140591AD0 (MiMarkHugeRangeIoPfnDeleted.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140593E88 (MiUpdatePrivateDemandZeroView.c)
 *     MiVadRangeIsIoSpace @ 0x1405941C0 (MiVadRangeIsIoSpace.c)
 *     MiDecrementLargeSubsections @ 0x14059DF58 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14059E660 (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x1405A645C (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405A8748 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x1405A89EC (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x1405ABA64 (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x1405B99AC (MiCloneVads.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiDoGangAssignment @ 0x1405C00C0 (MiDoGangAssignment.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 *     MiScrubLargeMappedPage @ 0x1405C4FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140222280 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x14062E40C (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // ebx
  __int64 DpcRequestSummary; // rdx
  unsigned int DpcWatchdogCount; // r9d
  __int64 DpcTimeCount; // r8
  unsigned int v5; // edi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1;
    if ( (unsigned int)DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_8;
      goto LABEL_18;
    }
LABEL_5:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v5 )
    {
LABEL_15:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb, DpcRequestSummary, DpcTimeCount);
      _enable();
      v5 = 0;
      goto LABEL_8;
    }
LABEL_18:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v5 = 5;
      goto LABEL_8;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v5 = 6;
      goto LABEL_8;
    }
    goto LABEL_15;
  }
  v5 = 0;
  if ( (DpcRequestSummary & 0x1E) == 0 )
  {
    if ( CurrentPrcb->QuantumEnd )
    {
      v5 = 3;
      goto LABEL_8;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v5 = 4;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  v5 = 2;
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v5, DpcWatchdogCount, DpcTimeCount);
  LOBYTE(v1) = v5 != 0;
  return v1;
}
