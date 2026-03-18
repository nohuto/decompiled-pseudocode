/*
 * XREFs of KiSetTimerEx @ 0x140236270
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x140236250 (KeSetTimer.c)
 *     MiInsertUnusedSegment @ 0x1402A4330 (MiInsertUnusedSegment.c)
 *     PfSnStartTraceTimer @ 0x1402C2A74 (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x140310C20 (PfSnTraceTimerRoutine.c)
 *     PopSetWatchdog @ 0x14035BDF8 (PopSetWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x14037FFB8 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x140389518 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x14039500C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A3814 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C1A08 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CA47C (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404F8620 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x1405691D4 (PopCoalescingSetTimer.c)
 *     PiDrvDbUnloadNode @ 0x1405EEAB8 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x140659228 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406E8F88 (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14077A360 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077A43C (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x140787AC4 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407B0B60 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407BD98C (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407BE728 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x14086DBC0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14086DE30 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140884E70 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x14088C5E0 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x14089C2F0 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E3140 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x1408F9904 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098CFE8 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140993A80 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x1409968F4 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A3FF8 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D2C08 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7334 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409DDB34 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409DDF90 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A66910 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140266C80 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KiComputeDueTime @ 0x14026A120 (KiComputeDueTime.c)
 *     KiTraceSetTimer @ 0x14051E05C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v10; // rsi
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 v13; // r15
  _KPROCESS *Process; // rdx
  char v15; // al
  __int16 v16; // ax
  __int64 v17; // r11
  int v18; // r9d
  _DWORD *SchedulerAssist; // r9
  int v21; // [rsp+70h] [rbp+18h] BYREF

  v7 = a5;
  v21 = 0;
  v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  a5 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer(a1, 0LL);
  v16 = 0;
  if ( (KiVelocityFlags & 0x2000) != 0 )
  {
    if ( CurrentPrcb->NestingLevel
      || ((Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
       || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0
        ? (v15 = 0)
        : (v15 = 1),
          !v15) )
    {
      v16 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v16;
  *(_QWORD *)(a1 + 48) = v10;
  *(_DWORD *)(a1 + 60) = a3;
  if ( (unsigned int)KiComputeDueTime(a1, a2, a4, &v21)
    && (v18 = v21, *(_DWORD *)(a1 + 4) = v17, (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v7, v18, v17)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(a1, v7, 0LL);
    else
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest(CurrentPrcb, a1, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, a5);
  return v13;
}
