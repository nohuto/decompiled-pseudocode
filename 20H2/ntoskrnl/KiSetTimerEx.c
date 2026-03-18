/*
 * XREFs of KiSetTimerEx @ 0x140247520
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1402418E0 (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x140247500 (KeSetTimer.c)
 *     MiInsertUnusedSegment @ 0x14029E554 (MiInsertUnusedSegment.c)
 *     PfSnTraceTimerRoutine @ 0x14031F010 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x14032697C (PfSnStartTraceTimer.c)
 *     PopSetWatchdog @ 0x14033F820 (PopSetWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x1403825B8 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x14038C828 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x14039809C (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A63A0 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C5038 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CDE7C (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404FC500 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14056D254 (PopCoalescingSetTimer.c)
 *     PiDrvDbUnloadNode @ 0x1406577B8 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x1406A3C7C (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406DF318 (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x1407736EC (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14078AD70 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14078AE4C (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x1407901C0 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C1C20 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407CF38C (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407D01A8 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1408751D0 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x140875440 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14088BCE0 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x140893450 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408A3140 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x140900814 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1409937F0 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x14099B220 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x14099DD04 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409AAD98 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409BBFB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D8C88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409DD3B4 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409E3BB4 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409E4010 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A6D5C0 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x14021DDF0 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x14021E0C0 (KiCancelTimer.c)
 *     KiComputeDueTime @ 0x140247860 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14052207C (KiTraceSetTimer.c)
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
  char *v17; // r11
  unsigned int v18; // r9d
  _DWORD *SchedulerAssist; // r9
  unsigned int v21; // [rsp+70h] [rbp+18h] BYREF

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
  v13 = KiCancelTimer(a1, 0);
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
    && (v18 = v21, *(_DWORD *)(a1 + 4) = (_DWORD)v17, KiInsertTimerTable((__int64)CurrentPrcb, a1, v7, v18, v17)) )
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
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, a5);
  return v13;
}
