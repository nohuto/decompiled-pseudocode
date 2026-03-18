/*
 * XREFs of KeShouldYieldProcessor @ 0x140327BB0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressSpan @ 0x14024B6F0 (MiQueryAddressSpan.c)
 *     MiProbePacketContended @ 0x14024FEC8 (MiProbePacketContended.c)
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiCommitPoolMemory @ 0x1402586AC (MiCommitPoolMemory.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSoftFaultMappedView @ 0x14025AFC0 (MiSoftFaultMappedView.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiFillPoolCommitPageTable @ 0x1402B6940 (MiFillPoolCommitPageTable.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiInitializeMdlPages @ 0x14031390C (MiInitializeMdlPages.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiReplaceRotateWithDemandZero @ 0x140334CB0 (MiReplaceRotateWithDemandZero.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140337F84 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C3C68 (MiInsertViewOfPhysicalSection.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403F04D0 (MiConvertSmallPageRangeToLarge.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 *     MiUpdatePrivateDemandZeroView @ 0x140527EC8 (MiUpdatePrivateDemandZeroView.c)
 *     MiUnlinkBadPages @ 0x140529C28 (MiUnlinkBadPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052EB18 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSetGraphicsPtes @ 0x14052F16C (MiSetGraphicsPtes.c)
 *     MiShouldYieldProcessor @ 0x140531508 (MiShouldYieldProcessor.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiEnableLargeSubsection @ 0x14053B4DC (MiEnableLargeSubsection.c)
 *     MiQueryVaPhysicalContiguity @ 0x140541D84 (MiQueryVaPhysicalContiguity.c)
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiCommitEnclavePages @ 0x1405442B4 (MiCommitEnclavePages.c)
 *     MiDecommitHardwareEnclavePages @ 0x140544558 (MiDecommitHardwareEnclavePages.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiFreePhysicalPages @ 0x140546A74 (MiFreePhysicalPages.c)
 *     MiPreparePhysicalPagesMdlForFree @ 0x140547BDC (MiPreparePhysicalPagesMdlForFree.c)
 *     MiWriteAwePtes @ 0x140548DC8 (MiWriteAwePtes.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14054CAD4 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiDoGangAssignment @ 0x14055ACD0 (MiDoGangAssignment.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiScrubLargeMappedPage @ 0x14055E5E8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
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
