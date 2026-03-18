/*
 * XREFs of KeShouldYieldProcessor @ 0x1402F80C0
 * Callers:
 *     MiSoftFaultMappedView @ 0x140202000 (MiSoftFaultMappedView.c)
 *     MiQueryAddressSpan @ 0x14022C1F0 (MiQueryAddressSpan.c)
 *     MiMoveDirtyBitsToPfns @ 0x14022F4F0 (MiMoveDirtyBitsToPfns.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiReplaceRotateWithDemandZero @ 0x14025E4B0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiFillPoolCommitPageTable @ 0x1402CA5C0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x1402CAD1C (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiProbePacketContended @ 0x1402D138C (MiProbePacketContended.c)
 *     MiInitializeMdlPages @ 0x140334444 (MiInitializeMdlPages.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F49E4 (MiConvertSmallPageRangeToLarge.c)
 *     MiUnlinkNodeLargePages @ 0x1403F594C (MiUnlinkNodeLargePages.c)
 *     MiUpdatePrivateDemandZeroView @ 0x14052B898 (MiUpdatePrivateDemandZeroView.c)
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1405324E8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetGraphicsPtes @ 0x140532B3C (MiSetGraphicsPtes.c)
 *     MiShouldYieldProcessor @ 0x140534ED8 (MiShouldYieldProcessor.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x140545754 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140547C84 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140547F28 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140549030 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x14054A444 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14054B5AC (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x14054C798 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405504A4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiDoGangAssignment @ 0x14055E6A0 (MiDoGangAssignment.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x140561FB8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  volatile int DpcRequestSummary; // edx
  unsigned int DpcWatchdogCount; // ebx
  unsigned int DpcTimeCount; // ebp
  unsigned int v5; // esi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1;
    if ( DpcTimeCount > 7 )
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
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
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
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v5 = 2;
  }
  else
  {
    if ( !CurrentPrcb->QuantumEnd )
    {
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v5 = 4;
        goto LABEL_8;
      }
      goto LABEL_5;
    }
    v5 = 3;
  }
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v5, DpcWatchdogCount, DpcTimeCount);
  LOBYTE(v1) = v5 != 0;
  return v1;
}
