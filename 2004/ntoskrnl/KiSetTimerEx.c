/*
 * XREFs of KiSetTimerEx @ 0x1402C90A0
 * Callers:
 *     MiInsertUnusedSegment @ 0x14024B300 (MiInsertUnusedSegment.c)
 *     PopSetWatchdog @ 0x140275C48 (PopSetWatchdog.c)
 *     CcScheduleLazyWriteScan @ 0x1402C46BC (CcScheduleLazyWriteScan.c)
 *     KeSetCoalescableTimer @ 0x1402C8FA0 (KeSetCoalescableTimer.c)
 *     KeSetTimer @ 0x1402C9080 (KeSetTimer.c)
 *     PfSnTraceTimerRoutine @ 0x14034E2B0 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x140356278 (PfSnStartTraceTimer.c)
 *     PopSetPowerActionWatchdogState @ 0x1403807F8 (PopSetPowerActionWatchdogState.c)
 *     PfpServiceMainThreadBoost @ 0x14038A588 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140395BDC (PopEnableIrpWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x1403A3F74 (PpmEndHighPerfRequest.c)
 *     HalpCmcStartPolling @ 0x1403C28C8 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403CB25C (HalpTimerSchedulePeriodicQueries.c)
 *     VslpSkFlushBufferCallback @ 0x1404F8C70 (VslpSkFlushBufferCallback.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x140524AE8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x140569824 (PopCoalescingSetTimer.c)
 *     CmpDelayFreeCmRm @ 0x14065306C (CmpDelayFreeCmRm.c)
 *     PiDrvDbUnloadNode @ 0x140697FB8 (PiDrvDbUnloadNode.c)
 *     PfSnPowerBoost @ 0x14070CE28 (PfSnPowerBoost.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x14077C770 (PopUserPresentSetWorker.c)
 *     PopQueueBatteryStatusTimeout @ 0x14077C84C (PopQueueBatteryStatusTimeout.c)
 *     CmpCmdInit @ 0x1407820A4 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407B3CD0 (PpmWmiDispatch.c)
 *     PopSetExecutionRequiredTimer @ 0x1407C0AFC (PopSetExecutionRequiredTimer.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407C19A8 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x14086ED48 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x14086F680 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14086F8F0 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140886190 (DbgkpWerDeferredWriteRoutine.c)
 *     VslpSkStartProfiling @ 0x14088D900 (VslpSkStartProfiling.c)
 *     IopDeviceRemovalForResetComplete @ 0x14089D610 (IopDeviceRemovalForResetComplete.c)
 *     PopSetSystemAwayMode @ 0x1408E43C0 (PopSetSystemAwayMode.c)
 *     TtmpResetEvaluationTimer @ 0x1408FABF4 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14098D800 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     PopHandleWakeSources @ 0x1409950C0 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x140997CC4 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x1409A4E38 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x1409B5FB0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x1409D2C68 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1409D7394 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x1409DDB94 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1409DDFF0 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140A662F0 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiInsertTimerTable @ 0x14020DC30 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x14020DF00 (KiCancelTimer.c)
 *     KiComputeDueTime @ 0x1402110D0 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTraceSetTimer @ 0x14051E6AC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
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
  if ( (unsigned int)KiComputeDueTime((int *)a1, a2, a4, &v21)
    && (v18 = v21, *(_DWORD *)(a1 + 4) = (_DWORD)v17, KiInsertTimerTable((__int64)CurrentPrcb, a1, v7, v18, v17)) )
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
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, a5);
  return v13;
}
