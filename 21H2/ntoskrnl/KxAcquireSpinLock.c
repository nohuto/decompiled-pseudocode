/*
 * XREFs of KxAcquireSpinLock @ 0x1402295B0
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x140229480 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x14022AF70 (PpmIdleSnapConcurrency.c)
 *     IopBuildDeviceIoControlRequest @ 0x14022B990 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
 *     KeSetTimer2 @ 0x14022C550 (KeSetTimer2.c)
 *     ExGenRandom @ 0x14022C890 (ExGenRandom.c)
 *     KiTimer2Expiration @ 0x1402487E0 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x14024A190 (ExpCancelTimer.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     EtwpLockBufferList @ 0x140266318 (EtwpLockBufferList.c)
 *     EtwpLockUnlockBufferList @ 0x1402667AC (EtwpLockUnlockBufferList.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14027FF0C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     PspGetProperty @ 0x14029284C (PspGetProperty.c)
 *     KiInsertTimer2 @ 0x140292CA0 (KiInsertTimer2.c)
 *     PsRemoveVirtualizedTimer @ 0x1402940F4 (PsRemoveVirtualizedTimer.c)
 *     KiAddThreadToPrcbQueue @ 0x14029C210 (KiAddThreadToPrcbQueue.c)
 *     FsRtlUninitializeFileLock @ 0x14029DDF0 (FsRtlUninitializeFileLock.c)
 *     KeSetSystemAllowedCpuSets @ 0x1402AAC7C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x1402B1DF4 (HalpPCIAcquireConfigSpaceLock.c)
 *     KiScheduleNextForegroundBoost @ 0x1402B7D5C (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1402BB174 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x1402C0A50 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x1402C1F18 (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x1402C5460 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x1402C5790 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x1402C7A34 (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x1402C8000 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x1402CAE20 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1402CDD60 (ExpTimerDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1402D26D0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402D47BC (PspProcessUnbindVirtualizedTimers.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9ED0 (KiProcessPendingForegroundBoosts.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     PoNotifyMediaBuffering @ 0x14036C8F0 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140378F20 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x14038D260 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14038D480 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x14038D530 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x140398B3C (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039E660 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A4B20 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A4FC0 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B66BC (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403C02C8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403C1278 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C4210 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403CC014 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403CD830 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CFA38 (KdDisableDebuggerWithLock.c)
 *     sub_1403EA1C0 @ 0x1403EA1C0 (sub_1403EA1C0.c)
 *     KeSynchronizeExecution @ 0x1403FF540 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404CDFD0 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404CE14C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404CE28C (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CE47C (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CE610 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404CE884 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404CEAB4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404CEC10 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404CED7C (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CEF04 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CF098 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404CF200 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D7830 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D7B10 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D7F90 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D82A0 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D87D0 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D8B50 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D8C90 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D8E90 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D92A0 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D9940 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D9B60 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA3E0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA5F0 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404DAAC0 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFD70 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FFB30 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050D13C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050D1B4 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x140510830 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x1405109A0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x140510B10 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x140510B84 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x140510D7C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x140510FC0 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x1405166A0 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140516810 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x1405178E0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140518F2C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x140518FDC (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x140519C0C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x14051CFAC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520B20 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14052404C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1405241A8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524254 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140566E00 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140567030 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1405674F0 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056932C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x14056E55C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x140574D9C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576100 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577810 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1405787E0 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405ADB28 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405ADDAC (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AFC30 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B6794 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x14099E2CC (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AB3FC (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409E0DB0 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E0ECC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E1000 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1403582C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051688C (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v4; // rcx
  int v5; // eax
  int v6; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(SpinLock);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v5 = SchedulerAssist[6];
        SchedulerAssist[6] = v5 + 1;
        if ( v5 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v4 = CurrentPrcb->SchedulerAssist;
      if ( v4 && CurrentPrcb->NestingLevel <= 1u )
      {
        v6 = v4[6] - 1;
        v4[6] = v6;
        if ( !v6 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      KxWaitForSpinLockAndAcquire(SpinLock);
    }
  }
}
