/*
 * XREFs of KeShouldYieldProcessor @ 0x1402EE280
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiFillPoolCommitPageTable @ 0x140223CC0 (MiFillPoolCommitPageTable.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x1402A4720 (MiQueryAddressSpan.c)
 *     MiProbePacketContended @ 0x1402A8EF8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiCommitPoolMemory @ 0x1402B16DC (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiSoftFaultMappedView @ 0x1402B3FF0 (MiSoftFaultMappedView.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x1402F7C80 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1402FAF54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInitializeMdlPages @ 0x140342C4C (MiInitializeMdlPages.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C2DA8 (MiInsertViewOfPhysicalSection.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403EF170 (MiConvertSmallPageRangeToLarge.c)
 *     MiUnlinkNodeLargePages @ 0x1403F00D8 (MiUnlinkNodeLargePages.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527878 (MiUpdatePrivateDemandZeroView.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052E4C8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetGraphicsPtes @ 0x14052EB1C (MiSetGraphicsPtes.c)
 *     MiShouldYieldProcessor @ 0x140530EB8 (MiShouldYieldProcessor.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541734 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x140543C64 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140543F08 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546424 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x14054758C (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054C484 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiDoGangAssignment @ 0x14055A680 (MiDoGangAssignment.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x14055DF98 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A255C (EtwTraceShouldYieldProcessor.c)
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
