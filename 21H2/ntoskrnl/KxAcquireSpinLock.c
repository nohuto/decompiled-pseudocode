/*
 * XREFs of KxAcquireSpinLock @ 0x140211E00
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x14020E0AC (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140210BE8 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     PpmIdleSnapConcurrency @ 0x1402126A4 (PpmIdleSnapConcurrency.c)
 *     PspGetProperty @ 0x140223F8C (PspGetProperty.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14022CFE4 (IopCancelIrpsInCurrentThreadList.c)
 *     PsInsertVirtualizedTimer @ 0x140239F94 (PsInsertVirtualizedTimer.c)
 *     HalpPCIAcquireConfigSpaceLock @ 0x14023AE0C (HalpPCIAcquireConfigSpaceLock.c)
 *     PpmPerfApplyProcessorState @ 0x14023B798 (PpmPerfApplyProcessorState.c)
 *     KiDpcRuntimeHistoryHashTableCleanupDpcRoutine @ 0x14023C750 (KiDpcRuntimeHistoryHashTableCleanupDpcRoutine.c)
 *     PfSnTraceTimerRoutine @ 0x140244E70 (PfSnTraceTimerRoutine.c)
 *     KiIdealProcessorRebalancerTimerCallback @ 0x140247C90 (KiIdealProcessorRebalancerTimerCallback.c)
 *     KiInsertNewDpcRuntime @ 0x140248C84 (KiInsertNewDpcRuntime.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14024AE50 (KeRegisterBugCheckReasonCallback.c)
 *     PsRemoveVirtualizedTimer @ 0x14024CBF8 (PsRemoveVirtualizedTimer.c)
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     KeAcquireInterruptSpinLock @ 0x1402511A0 (KeAcquireInterruptSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     ExpTimerPause @ 0x14025298C (ExpTimerPause.c)
 *     PspSetProcessFreezeStateCallback @ 0x1402536E0 (PspSetProcessFreezeStateCallback.c)
 *     CmpLazyFlushDpcRoutine @ 0x140253FC0 (CmpLazyFlushDpcRoutine.c)
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     ExpTimerApcRoutine @ 0x140256D10 (ExpTimerApcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x140258980 (PoNotifyMediaBuffering.c)
 *     FsRtlUninitializeFileLock @ 0x140259FA0 (FsRtlUninitializeFileLock.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x14025B770 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     KeDeregisterBugCheckReasonCallback @ 0x14025C0E0 (KeDeregisterBugCheckReasonCallback.c)
 *     IopAllocateFileObjectExtension @ 0x1402A3A60 (IopAllocateFileObjectExtension.c)
 *     CmpArmLazyWriter @ 0x1402A4320 (CmpArmLazyWriter.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     EtwpLockBufferList @ 0x1402E1BD0 (EtwpLockBufferList.c)
 *     EtwpLockUnlockBufferList @ 0x1402E29C8 (EtwpLockUnlockBufferList.c)
 *     ExpSetTimerObject @ 0x1402E33D0 (ExpSetTimerObject.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F0B30 (NtAssociateWaitCompletionPacket.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KiInsertTimer2 @ 0x1402F332C (KiInsertTimer2.c)
 *     KeIntSteerPeriodic @ 0x140300190 (KeIntSteerPeriodic.c)
 *     KiUpdateTime @ 0x140304060 (KiUpdateTime.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     IopBuildDeviceIoControlRequest @ 0x1403428E0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403542DC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     NtCancelTimer @ 0x140356F50 (NtCancelTimer.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 *     PspProcessUnbindVirtualizedTimers @ 0x14035FE5C (PspProcessUnbindVirtualizedTimers.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     ExWakeTimersResume @ 0x1403982A0 (ExWakeTimersResume.c)
 *     ExWakeTimersPause @ 0x1403983A0 (ExWakeTimersPause.c)
 *     KeDeregisterBugCheckCallback @ 0x140398710 (KeDeregisterBugCheckCallback.c)
 *     PfpPowerActionDpcRoutine @ 0x140398E60 (PfpPowerActionDpcRoutine.c)
 *     KiProcessPendingForegroundBoosts @ 0x14039EE50 (KiProcessPendingForegroundBoosts.c)
 *     KiScheduleNextForegroundBoost @ 0x14039F200 (KiScheduleNextForegroundBoost.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     KeRegisterBugCheckCallback @ 0x1403B5E30 (KeRegisterBugCheckCallback.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403C1214 (KiConfigureCpuSetSchedulingInformation.c)
 *     BgfxGrowDirtyRect @ 0x1403CC174 (BgfxGrowDirtyRect.c)
 *     PpmInstallFeedbackCounters @ 0x1403CE4FC (PpmInstallFeedbackCounters.c)
 *     PpmInstallNewIdleStates @ 0x1403D1870 (PpmInstallNewIdleStates.c)
 *     PpmIdleUpdateConcurrency @ 0x1403D98F0 (PpmIdleUpdateConcurrency.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     IommupGetSystemContext @ 0x1403DB0A0 (IommupGetSystemContext.c)
 *     KdRegisterPowerHandler @ 0x1403DD310 (KdRegisterPowerHandler.c)
 *     KdAcquireDebuggerLock @ 0x1403DDD50 (KdAcquireDebuggerLock.c)
 *     sub_1403F93A0 @ 0x1403F93A0 (sub_1403F93A0.c)
 *     PopFxNextComponentChildRelationSafe @ 0x1404198CC (PopFxNextComponentChildRelationSafe.c)
 *     PopFxNextParentRelationSafe @ 0x1404199DC (PopFxNextParentRelationSafe.c)
 *     KeSynchronizeExecution @ 0x140420B90 (KeSynchronizeExecution.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x140459E52 (IopAcquireGlobalPassiveInterruptListLock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x140459EC8 (IopAcquirePassiveInterruptBlockLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14045A41A (KiAcquireSecondaryInterruptConnectLock.c)
 *     PoSetProcessorQoS @ 0x14045E06E (PoSetProcessorQoS.c)
 *     EtwpCovSampTryAcquireBufferLock @ 0x140460FAC (EtwpCovSampTryAcquireBufferLock.c)
 *     HalConfigureAdapterChannel @ 0x140518C60 (HalConfigureAdapterChannel.c)
 *     HalpAddAdapterToSystemList @ 0x140518DDC (HalpAddAdapterToSystemList.c)
 *     HalpAllocateDmaChannels @ 0x140518F1C (HalpAllocateDmaChannels.c)
 *     HalpDmaControllerCancelTransfer @ 0x14051910C (HalpDmaControllerCancelTransfer.c)
 *     HalpDmaControllerFlushChannel @ 0x1405192A0 (HalpDmaControllerFlushChannel.c)
 *     HalpDmaControllerProgramChannel @ 0x140519514 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x140519744 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerReadDmaCounter @ 0x1405198A0 (HalpDmaControllerReadDmaCounter.c)
 *     HalpDmaControllerValidateRequestLineBinding @ 0x140519A0C (HalpDmaControllerValidateRequestLineBinding.c)
 *     HalpDmaRemoveAdapterFromChannelQueue @ 0x140519B94 (HalpDmaRemoveAdapterFromChannelQueue.c)
 *     HalpFindAdapterByRequestLine @ 0x140519D28 (HalpFindAdapterByRequestLine.c)
 *     HalpFreeDmaChannels @ 0x140519E90 (HalpFreeDmaChannels.c)
 *     HalpReadWriteWheaPhysicalMemory @ 0x140524C30 (HalpReadWriteWheaPhysicalMemory.c)
 *     IommuBeginDeviceReset @ 0x140524EB0 (IommuBeginDeviceReset.c)
 *     IommuDisableDevicePasid @ 0x140525620 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x140525930 (IommuEnableDevicePasid.c)
 *     IommuFinalizeDeviceReset @ 0x140525E80 (IommuFinalizeDeviceReset.c)
 *     IommuFlushAllPasid @ 0x140526160 (IommuFlushAllPasid.c)
 *     IommuFlushTb @ 0x1405262A0 (IommuFlushTb.c)
 *     IommuMapDevice @ 0x1405264A0 (IommuMapDevice.c)
 *     IommuProcessPageRequestQueue @ 0x140526870 (IommuProcessPageRequestQueue.c)
 *     IommuSetAddressSpace @ 0x140526F10 (IommuSetAddressSpace.c)
 *     IommuUnmapDevice @ 0x140527130 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x140527CF0 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x140527F70 (IommuDomainAttachDeviceEx.c)
 *     IommuDomainDetachDevice @ 0x140528160 (IommuDomainDetachDevice.c)
 *     IommuSetDeviceFaultReporting @ 0x140528C60 (IommuSetDeviceFaultReporting.c)
 *     IommupFindAndPopCachedDevice @ 0x140529200 (IommupFindAndPopCachedDevice.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140541E40 (FsRtlPrivateCancelFileLockIrp.c)
 *     BvgaAcquireLock @ 0x1405517A0 (BvgaAcquireLock.c)
 *     KdDeregisterPowerHandler @ 0x140565030 (KdDeregisterPowerHandler.c)
 *     KdCallPowerHandlers @ 0x140565198 (KdCallPowerHandlers.c)
 *     KdDisableDebuggerWithLock @ 0x140565378 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1405655BC (KdEnableDebuggerWithLock.c)
 *     KeAcquireSpinLockForDpc @ 0x14056E780 (KeAcquireSpinLockForDpc.c)
 *     KeAcquireSpinLockRaiseToSynch @ 0x14056E850 (KeAcquireSpinLockRaiseToSynch.c)
 *     KiAcquireSecondarySignalListLock @ 0x14056EC64 (KiAcquireSecondarySignalListLock.c)
 *     KeEnumerateProcessorDpcs @ 0x14056F81C (KeEnumerateProcessorDpcs.c)
 *     KeSetTagCpuSets @ 0x140572EC0 (KeSetTagCpuSets.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1405777C0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KiEpfComplete @ 0x14057AFDC (KiEpfComplete.c)
 *     KiEpfDrainCompletionQueue @ 0x14057B0EC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14057B194 (KiEpfStart.c)
 *     PpmIdleSnapConcurrencyIdleTime @ 0x1405C850C (PpmIdleSnapConcurrencyIdleTime.c)
 *     PpmRemoveIdleStates @ 0x1405C8980 (PpmRemoveIdleStates.c)
 *     PopFxBeginDeviceIRPhaseAccounting @ 0x1405CADAC (PopFxBeginDeviceIRPhaseAccounting.c)
 *     PopPepInitializeVetoMasks @ 0x1405D5704 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1405D67D4 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1405D7930 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopPowerButtonTimerCallback @ 0x1405D8980 (PopPowerButtonTimerCallback.c)
 *     DifKeAcquireSpinLockAtDpcLevelWrapper @ 0x1406125C0 (DifKeAcquireSpinLockAtDpcLevelWrapper.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpStackRundown @ 0x140634044 (EtwpStackRundown.c)
 *     EtwpTraceStackKey @ 0x1406342C8 (EtwpTraceStackKey.c)
 *     ExpCancelTimer @ 0x14063DFAC (ExpCancelTimer.c)
 *     ExpTimerAdjust @ 0x14063E084 (ExpTimerAdjust.c)
 *     KiCreateCpuSetForProcessor @ 0x140A58F00 (KiCreateCpuSetForProcessor.c)
 *     IopLiveDumpBufferDumpData @ 0x140A6581C (IopLiveDumpBufferDumpData.c)
 *     ViWdBeforeCancelIrp @ 0x140A9D190 (ViWdBeforeCancelIrp.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140A9D2AC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140A9D3E0 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
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
