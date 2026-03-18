/*
 * XREFs of PopQueueWorkItem @ 0x1403316F4
 * Callers:
 *     PpmPerfTelemetryCallback @ 0x1403316D0 (PpmPerfTelemetryCallback.c)
 *     PopCheckForIdleness @ 0x140340000 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x1403F6650 (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x14056DD60 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x14056DDE0 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x14056DEC0 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x140574970 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140574FF0 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140576C70 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140576CA0 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140576DD0 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x140577144 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140775EA0 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14078C284 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407CEA28 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408E5994 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408E67E0 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408F2090 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408F4474 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
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
