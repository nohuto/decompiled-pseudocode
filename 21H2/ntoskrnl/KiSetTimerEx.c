/*
 * XREFs of KiSetTimerEx @ 0x14025FD70
 * Callers:
 *     KeSetCoalescableTimer @ 0x14025FC70 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x14025FD50 (KeSetTimer.c)
 *     PopSetWatchdog @ 0x140280568 (PopSetWatchdog.c)
 *     PfSnTraceTimerRoutine @ 0x1402C0A50 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x1402C7958 (PfSnStartTraceTimer.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x140357560 (MiInsertUnusedSegment.c)
 *     PopSetPowerActionWatchdogState @ 0x140382BA0 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x14038CF48 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x14039850C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A6C60 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C5798 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CE86C (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404FE0A0 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14052196C (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x140529F98 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14056EC64 (PopCoalescingSetTimer.c)
 *     PiDrvDbUnloadNode @ 0x140629E58 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x1406BB61C (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406C58FC (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x140775630 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x14077755C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14078EB40 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078EC1C (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x14078F8B0 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C5F20 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407D377C (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407D45D8 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x140872B30 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140889280 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x140890A20 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408A0710 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E77D0 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x1408FDFC4 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409907F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x140998410 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x14099B284 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7C68 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409B8FB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D5C78 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DA3A4 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409E0BA4 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E1000 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A6AA00 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x1402600B0 (KiComputeDueTime.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140348000 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x1403482D0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x140523B5C (KiTraceSetTimer.c)
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
    KiTimerWaitTest((__int64)CurrentPrcb, a1, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, a5);
  return v13;
}
