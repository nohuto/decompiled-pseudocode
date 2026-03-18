/*
 * XREFs of PopQueueWorkItem @ 0x140360AC4
 * Callers:
 *     PopCheckForIdleness @ 0x1402DE700 (PopCheckForIdleness.c)
 *     PpmPerfTelemetryCallback @ 0x140360AA0 (PpmPerfTelemetryCallback.c)
 *     PopBsdHandleRequest @ 0x1403F21A4 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x14056A330 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056A3B0 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14056A490 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x140570F40 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x1405715C0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140573240 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140573270 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x1405733A0 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140573714 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140766E70 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14077ED40 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407C0198 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408DFB54 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408E09A0 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408EC480 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408EE864 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

char __fastcall PopQueueWorkItem(__int64 a1, WORK_QUEUE_TYPE a2)
{
  char v2; // r8

  v2 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 32)) == 1 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, a2);
    return 1;
  }
  return v2;
}
