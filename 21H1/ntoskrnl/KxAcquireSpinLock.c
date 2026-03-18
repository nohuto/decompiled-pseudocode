/*
 * XREFs of KxAcquireSpinLock @ 0x1402773A0
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     KeSetSystemAllowedCpuSets @ 0x14020233C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     EtwpLockBufferList @ 0x140241704 (EtwpLockBufferList.c)
 *     KiInsertTimer2 @ 0x140241CF8 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140242A5C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x140277270 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x140278AF0 (PpmIdleSnapConcurrency.c)
 *     IopBuildDeviceIoControlRequest @ 0x140279670 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x140281DD0 (IopAllocateFileObjectExtension.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     CcPerformReadAhead @ 0x1402BDB04 (CcPerformReadAhead.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x1402D5518 (PspProcessUnbindVirtualizedTimers.c)
 *     PspGetProperty @ 0x1402EDB7C (PspGetProperty.c)
 *     PsRemoveVirtualizedTimer @ 0x1402EE3D0 (PsRemoveVirtualizedTimer.c)
 *     FsRtlUninitializeFileLock @ 0x1402F1240 (FsRtlUninitializeFileLock.c)
 *     EtwpLockUnlockBufferList @ 0x1402F15E0 (EtwpLockUnlockBufferList.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14030362C (HalpPCIAcquireConfigSpaceLock.c)
 *     PsInsertVirtualizedTimer @ 0x140304690 (PsInsertVirtualizedTimer.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14030ABB4 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x140310C20 (PfSnTraceTimerRoutine.c)
 *     PspSetProcessFreezeStateCallback @ 0x140315E30 (PspSetProcessFreezeStateCallback.c)
 *     KeAcquireInterruptSpinLock @ 0x140316730 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140318758 (ExpTimerPause.c)
 *     CmpLazyFlushDpcRoutine @ 0x14031B5B0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x140321ED0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1403347E4 (KiScheduleNextForegroundBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x140335D50 (KiProcessPendingForegroundBoosts.c)
 *     KiAddThreadToPrcbQueue @ 0x140336A30 (KiAddThreadToPrcbQueue.c)
 *     ExpCancelTimer @ 0x14033F390 (ExpCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 *     PoNotifyMediaBuffering @ 0x140369920 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140375CF0 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x1403897C4 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x1403899E4 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x140389AA0 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x14039563C (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A1600 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A1AA0 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403ACB0C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403BC2D8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403BE418 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C0480 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403C7BF4 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403C9450 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CB6E8 (KdDisableDebuggerWithLock.c)
 *     sub_1403E5D80 @ 0x1403E5D80 (sub_1403E5D80.c)
 *     KeSynchronizeExecution @ 0x1403F7060 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404C8BF0 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404C8D6C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404C8EAC (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404C909C (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404C9230 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404C94A4 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404C96D4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404C9830 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404C999C (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404C9B24 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404C9CB8 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404C9E20 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D2420 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D2700 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D2B80 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D2E90 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D33C0 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D3740 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D3880 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D3A80 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D3E50 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D44F0 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D4710 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D4F90 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D51A0 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404D5650 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA310 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FA0B0 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050768C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140507704 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14050AD80 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14050AEF0 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14050B060 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14050B0D4 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14050B2CC (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14050B510 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140510BE0 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140510D50 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140511E20 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14051346C (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x14051351C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x14051414C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x1405174AC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B020 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14051E54C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14051E6A8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14051E754 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140561300 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140561530 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x1405619F0 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056382C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x140568ACC (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x14056F30C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570670 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140571D80 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140572D50 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405A7ED8 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405A815C (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405A9FE0 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B0AE4 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x1409994A0 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409A772C (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409DDD40 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409DDE5C (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409DDF90 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402E47D0 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140510DCC (KiAcquireSpinLockInstrumented.c)
 */

void __stdcall KxAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

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
        v7 = SchedulerAssist[6];
        SchedulerAssist[6] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 && CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v6[6] - 1;
        v6[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      KxWaitForSpinLockAndAcquire(SpinLock, v1, v2);
    }
  }
}
