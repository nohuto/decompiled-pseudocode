/*
 * XREFs of KeCancelTimer @ 0x140260240
 * Callers:
 *     ExpSetTimerObject @ 0x140249420 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x14024A190 (ExpCancelTimer.c)
 *     ExpDeleteTimer @ 0x1402601A0 (ExpDeleteTimer.c)
 *     PopFxProcessWork @ 0x140260844 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140262B58 (PopFxDisableWorkOrderWatchdog.c)
 *     PopSetWatchdog @ 0x140280568 (PopSetWatchdog.c)
 *     EtwpResetFlushTimer @ 0x1402C4330 (EtwpResetFlushTimer.c)
 *     PfSnCancelTraceTimer @ 0x1402DF8AC (PfSnCancelTraceTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x1403574C8 (MiUnlinkUnusedControlArea.c)
 *     CmpArmLazyWriter @ 0x140358040 (CmpArmLazyWriter.c)
 *     PopSetPowerActionWatchdogState @ 0x140382BA0 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038DD70 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x14039814C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C8684 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CEB1C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404EBC80 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404FE0EC (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14052196C (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x14056EBC4 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140576FB8 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x140629F74 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x1406C58FC (PfSnPowerBoost.c)
 *     CmSetLazyFlushState @ 0x14077755C (CmSetLazyFlushState.c)
 *     PopUserShutdownCancelled @ 0x140779E84 (PopUserShutdownCancelled.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x14079F674 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407C5F20 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407D36E0 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x140864440 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x140872330 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x140876D50 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140889280 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E68B0 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1218 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x1408FDFC4 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x140955E74 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x1409971B8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D5C78 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409E0BA4 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409F24C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F34CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F4784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x1403482D0 (KiCancelTimer.c)
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
