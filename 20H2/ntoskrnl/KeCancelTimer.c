/*
 * XREFs of KeCancelTimer @ 0x1402479F0
 * Callers:
 *     PopFxProcessWork @ 0x140246294 (PopFxProcessWork.c)
 *     ExpDeleteTimer @ 0x140247950 (ExpDeleteTimer.c)
 *     PfSnCancelTraceTimer @ 0x14025C3FC (PfSnCancelTraceTimer.c)
 *     ExpSetTimerObject @ 0x1402897E0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x14028A550 (ExpCancelTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x14029F210 (MiUnlinkUnusedControlArea.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x14033EEA8 (PopFxDisableWorkOrderWatchdog.c)
 *     PopSetWatchdog @ 0x14033F820 (PopSetWatchdog.c)
 *     CmpArmLazyWriter @ 0x140343AF0 (CmpArmLazyWriter.c)
 *     EtwpResetFlushTimer @ 0x140360A68 (EtwpResetFlushTimer.c)
 *     PopSetPowerActionWatchdogState @ 0x1403825B8 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038D650 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140397CDC (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C78F4 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CE12C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404EA0F0 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404FC54C (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051FE8C (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x14056D1B4 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1405755A8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405CF794 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x140657654 (PiDrvDbLoadNode.c)
 *     PfSnPowerBoost @ 0x1406DF318 (PfSnPowerBoost.c)
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     CmSetLazyFlushState @ 0x1407736EC (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140775ED4 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14077BA30 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x140795154 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C1C20 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407CF2F0 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x140866840 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x1408793D0 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14088BCE0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E90B0 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F3A18 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x140900814 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1409586A4 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x140999FC8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D8C88 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409E3BB4 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F54C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F64CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F64EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F7784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x14021E0C0 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  BOOLEAN v2; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v2 = KiCancelTimer((__int64)a1, 1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v2;
}
