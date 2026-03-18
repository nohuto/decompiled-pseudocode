/*
 * XREFs of KeCancelTimer @ 0x1402364D0
 * Callers:
 *     ExpDeleteTimer @ 0x140236430 (ExpDeleteTimer.c)
 *     PopFxProcessWork @ 0x1402367FC (PopFxProcessWork.c)
 *     ExpSetTimerObject @ 0x14026A470 (ExpSetTimerObject.c)
 *     MiUnlinkUnusedControlArea @ 0x1402A5500 (MiUnlinkUnusedControlArea.c)
 *     PfSnCancelTraceTimer @ 0x1402C2CA8 (PfSnCancelTraceTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402D7C94 (PopFxDisableWorkOrderWatchdog.c)
 *     EtwpResetFlushTimer @ 0x1402DECFC (EtwpResetFlushTimer.c)
 *     CmpArmLazyWriter @ 0x1402E4550 (CmpArmLazyWriter.c)
 *     ExpCancelTimer @ 0x14033F390 (ExpCancelTimer.c)
 *     PopSetWatchdog @ 0x14035BDF8 (PopSetWatchdog.c)
 *     PopSetPowerActionWatchdogState @ 0x14037FFB8 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038A29C (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140394C4C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C3F94 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CA72C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404F866C (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051BE6C (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x140569134 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571528 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PiDrvDbLoadNode @ 0x1405EE954 (PiDrvDbLoadNode.c)
 *     PfSnPowerBoost @ 0x1406E8F88 (PfSnPowerBoost.c)
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     CmSetLazyFlushState @ 0x14075FF1C (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x1407654E4 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14076A860 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x140781AC0 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x140790534 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407B0B60 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407BD8F0 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x14085FAD0 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x14086D4C8 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x140872590 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140884E70 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E1FF0 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408ECB14 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x1408F9904 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140951544 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x140992828 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D2C08 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409DDB34 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  __int64 v1; // rdx
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v3; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v1;
  }
  LOBYTE(v1) = 1;
  v3 = KiCancelTimer(a1, v1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v6 = KeGetCurrentIrql();
      if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v3;
}
