/*
 * XREFs of KxAcquireSpinLock @ 0x14021E680
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     IopBuildDeviceIoControlRequest @ 0x14020A0F0 (IopBuildDeviceIoControlRequest.c)
 *     PspSetProcessFreezeStateCallback @ 0x14023CA20 (PspSetProcessFreezeStateCallback.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14024423C (PspProcessUnbindVirtualizedTimers.c)
 *     CcPerformReadAhead @ 0x14024B924 (CcPerformReadAhead.c)
 *     EtwpLockBufferList @ 0x140267564 (EtwpLockBufferList.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x140287F00 (KeIntSteerPeriodic.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x14028A550 (ExpCancelTimer.c)
 *     KiTimer2Expiration @ 0x14028D7C0 (KiTimer2Expiration.c)
 *     IopAllocateFileObjectExtension @ 0x14029FD20 (IopAllocateFileObjectExtension.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiInsertTimer2 @ 0x1402DFE8C (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1402E0E8C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9570 (KiProcessPendingForegroundBoosts.c)
 *     PpmIdleSnapConcurrency @ 0x1402F0530 (PpmIdleSnapConcurrency.c)
 *     PspGetProperty @ 0x1402F6BCC (PspGetProperty.c)
 *     KeSetSystemAllowedCpuSets @ 0x1402F6F20 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     EtwpLockUnlockBufferList @ 0x140301080 (EtwpLockUnlockBufferList.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140311434 (HalpPCIAcquireConfigSpaceLock.c)
 *     KiScheduleNextForegroundBoost @ 0x140314968 (KiScheduleNextForegroundBoost.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x140318B84 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x14031F010 (PfSnTraceTimerRoutine.c)
 *     KeAcquireInterruptSpinLock @ 0x140324EE0 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140326A58 (ExpTimerPause.c)
 *     CmpLazyFlushDpcRoutine @ 0x140329930 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     FsRtlUninitializeFileLock @ 0x14032FC10 (FsRtlUninitializeFileLock.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1403305D0 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PsInsertVirtualizedTimer @ 0x14033F650 (PsInsertVirtualizedTimer.c)
 *     PsRemoveVirtualizedTimer @ 0x1403402DC (PsRemoveVirtualizedTimer.c)
 *     KiAddThreadToPrcbQueue @ 0x14035F310 (KiAddThreadToPrcbQueue.c)
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 *     PoNotifyMediaBuffering @ 0x14036C2C0 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140378A90 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x14038CB40 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14038CD60 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x14038CE10 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x1403986CC (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039EA20 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A4260 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A4700 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B50FC (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403BFA78 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403C0A28 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C3AB0 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403CB644 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403CCE50 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CF0C8 (KdDisableDebuggerWithLock.c)
 *     sub_1403E9850 @ 0x1403E9850 (sub_1403E9850.c)
 *     KeSynchronizeExecution @ 0x1403FD280 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404CC600 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404CC77C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404CC8BC (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404CCAAC (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404CCC40 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404CCEB4 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404CD0E4 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404CD240 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404CD3AC (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404CD534 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CD6C8 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404CD830 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D5E60 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D6140 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D65C0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D68D0 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D6E00 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D7180 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D72C0 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D74C0 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D7890 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D7F30 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D8150 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D89D0 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D8BE0 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404D90B0 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EE1D0 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FDF90 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14050B60C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050B684 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14050ED00 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14050EE70 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14050EFE0 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14050F054 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14050F24C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14050F490 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140514B60 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x140514CD0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140515DA0 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x1405173EC (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x14051749C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x1405180CC (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x14051B4CC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051F040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14052256C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x1405226C8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140522774 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140565330 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140565560 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x140565A20 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x14056785C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x14056CB4C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x14057338C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405746F0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x140575E00 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x140576DD0 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405AC128 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405AC3AC (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AE230 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B4D64 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x1409A060C (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409AE4FC (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409E3DC0 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409E3EDC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E4010 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140340590 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140514D4C (KiAcquireSpinLockInstrumented.c)
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
