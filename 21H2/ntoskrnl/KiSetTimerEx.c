/*
 * XREFs of KiSetTimerEx @ 0x1402814E0
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x14023EEC0 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x140246098 (PfSnStartTraceTimer.c)
 *     PopSetWatchdog @ 0x14026E7A8 (PopSetWatchdog.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x1402814C0 (KeSetTimer.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x1403622B0 (MiInsertUnusedSegment.c)
 *     PopSetPowerActionWatchdogState @ 0x140382D50 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x14038D098 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x14039865C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A6DB0 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C5BC8 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE9DC (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404FE020 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x14052A1D8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14056EEA4 (PopCoalescingSetTimer.c)
 *     CmpDelayFreeCmRm @ 0x1405E0FFC (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406741EC (PfSnPowerBoost.c)
 *     PiDrvDbUnloadNode @ 0x140693F2C (PiDrvDbUnloadNode.c)
 *     PoUserShutdownInitiated @ 0x1407757F0 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x14077771C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14078ED00 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EDDC (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x140790E60 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C6240 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407D38EC (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407D4748 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140872C90 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1408893E0 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408A0870 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E7930 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x1408FE124 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409917F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140999410 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x14099C284 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A8B98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409B9FB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D6C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DB3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409E1BA4 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E2000 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A6BA00 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiComputeDueTime @ 0x140281820 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
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
