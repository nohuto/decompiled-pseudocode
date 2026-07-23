/*
 * XREFs of KxAcquireSpinLock @ 0x1402CDEB0
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     PspGetProperty @ 0x1402107BC (PspGetProperty.c)
 *     KiInsertTimer2 @ 0x140210C10 (KiInsertTimer2.c)
 *     PsRemoveVirtualizedTimer @ 0x140212064 (PsRemoveVirtualizedTimer.c)
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     FsRtlUninitializeFileLock @ 0x14021A970 (FsRtlUninitializeFileLock.c)
 *     KeSetSystemAllowedCpuSets @ 0x140228DBC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14022FFA4 (HalpPCIAcquireConfigSpaceLock.c)
 *     KiScheduleNextForegroundBoost @ 0x140235F3C (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140239384 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x14023EEC0 (PfSnTraceTimerRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x1402403B8 (PsInsertVirtualizedTimer.c)
 *     PspSetProcessFreezeStateCallback @ 0x140243CC0 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x140243F70 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140246288 (ExpTimerPause.c)
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 *     CmpLazyFlushDpcRoutine @ 0x140249710 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x140250AC0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     EtwpLockBufferList @ 0x1402542B8 (EtwpLockBufferList.c)
 *     EtwpLockUnlockBufferList @ 0x14025474C (EtwpLockUnlockBufferList.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14026E14C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14027349C (PspProcessUnbindVirtualizedTimers.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x14029B220 (KiProcessPendingForegroundBoosts.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x1402CF820 (PpmIdleSnapConcurrency.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402D0240 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x1402D0A50 (IopAllocateFileObjectExtension.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EE9E0 (ExpCancelTimer.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     PoNotifyMediaBuffering @ 0x14036CAA0 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x14038D3B0 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14038D5D0 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x14038D680 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x140398C8C (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039E7B0 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A5110 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B682C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403C06F8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403C16A8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C4640 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403CC184 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403CD9A0 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CFBA8 (KdDisableDebuggerWithLock.c)
 *     sub_1403EA330 @ 0x1403EA330 (sub_1403EA330.c)
 *     KeSynchronizeExecution @ 0x1403FF720 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404CE210 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404CE38C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404CE4CC (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CE6BC (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CE850 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404CEAC4 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404CECF4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404CEE50 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404CEFBC (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CF144 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CF2D8 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404CF440 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D7A70 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D7D50 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D81D0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D84E0 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D8A10 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D8D90 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D8ED0 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D90D0 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D94E0 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D9B80 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D9DA0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA620 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA830 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404DAD00 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EFCF0 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FFAB0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050D37C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050D3F4 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x140510A70 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x140510BE0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x140510D50 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x140510DC4 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x140510FBC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x1405168E0 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140516A50 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140517B20 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051916C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x14051921C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x140519E4C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x14051D1EC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x14051D930 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520D60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14052428C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1405243E8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524494 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140567040 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140567270 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x140567730 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056956C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140576340 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140577A50 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140578A20 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405ADD58 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405ADFDC (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AFE60 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B69C4 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x14099F1FC (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AC32C (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409E1DB0 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E1ECC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E2000 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140363010 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140516ACC (KiAcquireSpinLockInstrumented.c)
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
