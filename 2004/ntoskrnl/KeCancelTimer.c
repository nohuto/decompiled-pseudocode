/*
 * XREFs of KeCancelTimer @ 0x1402C9300
 * Callers:
 *     ExpSetTimerObject @ 0x140211420 (ExpSetTimerObject.c)
 *     MiUnlinkUnusedControlArea @ 0x14024C4D0 (MiUnlinkUnusedControlArea.c)
 *     PopSetWatchdog @ 0x140275C48 (PopSetWatchdog.c)
 *     ExpDeleteTimer @ 0x1402C9260 (ExpDeleteTimer.c)
 *     PopFxProcessWork @ 0x1402C962C (PopFxProcessWork.c)
 *     CmpArmLazyWriter @ 0x1402D7800 (CmpArmLazyWriter.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1402E3D9C (PopFxDisableWorkOrderWatchdog.c)
 *     EtwpResetFlushTimer @ 0x1402FF530 (EtwpResetFlushTimer.c)
 *     ExpCancelTimer @ 0x1403003F0 (ExpCancelTimer.c)
 *     PfSnCancelTraceTimer @ 0x140304F60 (PfSnCancelTraceTimer.c)
 *     PopSetPowerActionWatchdogState @ 0x1403807F8 (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14038B30C (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x14039581C (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C4F04 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1403CB50C (IopDisableTimer.c)
 *     CcDeletePartition @ 0x1404E6B60 (CcDeletePartition.c)
 *     VslpSkStopProfiling @ 0x1404F8CBC (VslpSkStopProfiling.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14051C4BC (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x140569784 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140571B78 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405C9798 (ExpTimeZoneCleanupSiloState.c)
 *     PiDrvDbLoadNode @ 0x140697E54 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x14070CE28 (PfSnPowerBoost.c)
 *     PopUserShutdownCancelled @ 0x140766EA4 (PopUserShutdownCancelled.c)
 *     CmSetLazyFlushState @ 0x14076801C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x14076D000 (PopBatteryWorker.c)
 *     KiStartDpcThread @ 0x140787444 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1407B3CD0 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1407C0A60 (PopExecutionRequiredSettingCallback.c)
 *     HalpCmcWorkerRoutine @ 0x140860E20 (HalpCmcWorkerRoutine.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
 *     CmpShutdownWorkers @ 0x140873880 (CmpShutdownWorkers.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140886190 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1408E3270 (PopCoalescingNotify.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408EDE08 (PopUpdatePdcSystemIdleState.c)
 *     TtmpResetEvaluationTimer @ 0x1408FABF4 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 *     PopBuildDeviceNotifyList @ 0x140993E68 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x1409D2C68 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1409DDB94 (VfWdCheckForSettingsChange.c)
 *     AnFwpFadeAnimationTimer @ 0x1409EF4C0 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1409F04CC (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1409F04EC (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1409F1784 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     KiCancelTimer @ 0x14020DF00 (KiCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
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
  v3 = KiCancelTimer((__int64)a1, (_DWORD *)v1);
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
