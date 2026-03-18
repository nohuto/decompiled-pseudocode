/*
 * XREFs of KxAcquireSpinLock @ 0x14021E350
 * Callers:
 *     ExpTimerApcRoutine @ 0x1402000B0 (ExpTimerApcRoutine.c)
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KeIntSteerPeriodic @ 0x14021E220 (KeIntSteerPeriodic.c)
 *     PpmIdleSnapConcurrency @ 0x14021FAA0 (PpmIdleSnapConcurrency.c)
 *     IopBuildDeviceIoControlRequest @ 0x140220620 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x140228D80 (IopAllocateFileObjectExtension.c)
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     CcPerformReadAhead @ 0x140264AD4 (CcPerformReadAhead.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14026BB78 (PspProcessUnbindVirtualizedTimers.c)
 *     PspSetProcessFreezeStateCallback @ 0x14027AFA0 (PspSetProcessFreezeStateCallback.c)
 *     EtwpLockBufferList @ 0x14027E49C (EtwpLockBufferList.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14027F15C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     PsInsertVirtualizedTimer @ 0x1402E1FD4 (PsInsertVirtualizedTimer.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1402EF6A4 (KiScheduleNextForegroundBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402F0C10 (KiProcessPendingForegroundBoosts.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F18F0 (KiAddThreadToPrcbQueue.c)
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 *     ExpCancelTimer @ 0x1403003F0 (ExpCancelTimer.c)
 *     PspGetProperty @ 0x1403274AC (PspGetProperty.c)
 *     PsRemoveVirtualizedTimer @ 0x140327D00 (PsRemoveVirtualizedTimer.c)
 *     KeSetSystemAllowedCpuSets @ 0x14032B394 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     FsRtlUninitializeFileLock @ 0x14032CFE0 (FsRtlUninitializeFileLock.c)
 *     EtwpLockUnlockBufferList @ 0x14032D380 (EtwpLockUnlockBufferList.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x140340404 (HalpPCIAcquireConfigSpaceLock.c)
 *     KiInsertTimer2 @ 0x1403421AC (KiInsertTimer2.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x1403474B4 (IopCancelIrpsInCurrentThreadList.c)
 *     PfSnTraceTimerRoutine @ 0x14034E2B0 (PfSnTraceTimerRoutine.c)
 *     KeAcquireInterruptSpinLock @ 0x140354220 (KeAcquireInterruptSpinLock.c)
 *     ExpTimerPause @ 0x140356354 (ExpTimerPause.c)
 *     CmpLazyFlushDpcRoutine @ 0x140359180 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x14035BC10 (ExpTimerDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14035F860 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x14036A2E0 (PoNotifyMediaBuffering.c)
 *     HalpAcquireHighLevelLock @ 0x140376B00 (HalpAcquireHighLevelLock.c)
 *     ExWakeTimersPause @ 0x14038A834 (ExWakeTimersPause.c)
 *     ExWakeTimersResume @ 0x14038AA54 (ExWakeTimersResume.c)
 *     PfpPowerActionDpcRoutine @ 0x14038AB10 (PfpPowerActionDpcRoutine.c)
 *     PpmPerfApplyProcessorState @ 0x14039620C (PpmPerfApplyProcessorState.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039B8D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeIpiGenericCall @ 0x1403A1D90 (KeIpiGenericCall.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x1403A2230 (KeDeregisterBugCheckReasonCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403B278C (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403BD5F8 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403BF3A8 (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403C1340 (PpmInstallNewIdleStates.c)
 *     IommupGetSystemContext @ 0x1403C8A04 (IommupGetSystemContext.c)
 *     KeRegisterBugCheckCallback @ 0x1403CA210 (KeRegisterBugCheckCallback.c)
 *     KdDisableDebuggerWithLock @ 0x1403CC4A8 (KdDisableDebuggerWithLock.c)
 *     sub_1403E6BC0 @ 0x1403E6BC0 (sub_1403E6BC0.c)
 *     KeSynchronizeExecution @ 0x1403F82F0 (KeSynchronizeExecution.c)
 *     HalConfigureAdapterChannel @ 0x1404C90A0 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x1404C921C (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x1404C935C (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x1404C954C (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1404C96E0 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x1404C9954 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x1404C9B84 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1404C9CE0 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x1404C9E4C (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x1404C9FD4 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x1404CA168 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x1404CA2D0 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x1404D28D0 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x1404D2BB0 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x1404D3030 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D3340 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x1404D3870 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x1404D3BF0 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1404D3D30 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1404D3F30 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x1404D4300 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x1404D49A0 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x1404D4BC0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404D5440 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404D5650 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x1404D5B20 (IommuSetDeviceFaultReporting.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1404EA940 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1404FA700 (BvgaAcquireLock.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140507CDC (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140507D54 (IopAcquirePassiveInterruptBlockLock.c)
 *     KdDeregisterPowerHandler @ 0x14050B3D0 (KdDeregisterPowerHandler.c)
 *     KdRegisterPowerHandler @ 0x14050B540 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x14050B6B0 (KdAcquireDebuggerLock.c)
 *     KdCallPowerHandlers @ 0x14050B724 (KdCallPowerHandlers.c)
 *     KdEnableDebuggerWithLock @ 0x14050B91C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransitionEx @ 0x14050BB60 (KdPowerTransitionEx.c)
 *     KeAcquireSpinLockForDpc @ 0x140511230 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x1405113A0 (KeAcquireSpinLockRaiseToSynch.c)
 *     KeDeregisterBugCheckCallback @ 0x140512470 (KeDeregisterBugCheckCallback.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140513ABC (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondarySignalListLock @ 0x140513B6C (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x14051479C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140517AFC (KeSetTagCpuSets.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B670 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14051EB9C (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14051ECF8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14051EDA4 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x140561950 (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmIdleUpdateConcurrency @ 0x140561B80 (PpmIdleUpdateConcurrency.c)
 *     PpmRemoveIdleStates @ 0x140562040 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x140563E7C (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PoSetProcessorQoS @ 0x14056911C (PoSetProcessorQoS.c)
 *     PopPepInitializeVetoMasks @ 0x14056F95C (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x140570CC0 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405723D0 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1405733A0 (PopPowerButtonTimerCallback.c)
 *     EtwpStackRundown @ 0x1405A85C8 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1405A884C (EtwpTraceStackKey.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x1405AA6D0 (EtwpCovSampTryAcquireBufferLock.c)
 *     ExpTimerAdjust @ 0x1405B1204 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x14099A500 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x1409A858C (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x1409DDDA0 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1409DDEBC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409DDFF0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1402D7A80 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14051141C (KiAcquireSpinLockInstrumented.c)
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
