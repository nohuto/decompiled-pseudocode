/*
 * XREFs of KeCancelTimer @ 0x1402819B0
 * Callers:
 *     EtwpResetFlushTimer @ 0x1402428B0 (EtwpResetFlushTimer.c)
 *     PopSetWatchdog @ 0x14026E7A8 (PopSetWatchdog.c)
 *     ExpDeleteTimer @ 0x140281910 (ExpDeleteTimer.c)
 *     PopFxProcessWork @ 0x140281D14 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140284C74 (PopFxDisableWorkOrderWatchdog.c)
 *     PfSnCancelTraceTimer @ 0x140290BFC (PfSnCancelTraceTimer.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EE9E0 (ExpCancelTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x140362218 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x140362D90 (CmpArmLazyWriter.c)
 *     PopSetPowerActionWatchdogState @ 0x140382D50 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038DEC0 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C8824 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CEC8C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404FE06C (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140521BAC (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x14056EE04 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1405771F8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406741EC (PfSnPowerBoost.c)
 *     PiDrvDbLoadNode @ 0x140694044 (PiDrvDbLoadNode.c)
 *     CmSetLazyFlushState @ 0x14077771C (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x14077A044 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14079F874 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C6240 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D3850 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x1408645A0 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x140876EB0 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1408893E0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E6A10 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1378 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x1408FE124 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x1409981B8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D6C78 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409E1BA4 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F34C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F44CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F44EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F5784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
