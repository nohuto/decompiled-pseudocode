/*
 * XREFs of PopQueueWorkItem @ 0x140322ED4
 * Callers:
 *     PpmPerfTelemetryCallback @ 0x140322EB0 (PpmPerfTelemetryCallback.c)
 *     PopCheckForIdleness @ 0x14035C8C0 (PopCheckForIdleness.c)
 *     PopBsdHandleRequest @ 0x1403F0DDC (PopBsdHandleRequest.c)
 *     PopThermalCsEntry @ 0x140569CE0 (PopThermalCsEntry.c)
 *     PopThermalCsExit @ 0x140569D60 (PopThermalCsExit.c)
 *     PopThermalTelemetryCallback @ 0x140569E40 (PopThermalTelemetryCallback.c)
 *     PopDripsWatchdogTimerCallback @ 0x1405708F0 (PopDripsWatchdogTimerCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerCallback @ 0x140570F70 (PopCheckPowerSourceAfterRtcWakeTimerCallback.c)
 *     PopNetEvaluationTimerCallback @ 0x140572BF0 (PopNetEvaluationTimerCallback.c)
 *     PopNetRefreshTimerCallback @ 0x140572C20 (PopNetRefreshTimerCallback.c)
 *     PopPowerButtonTimerCallback @ 0x140572D50 (PopPowerButtonTimerCallback.c)
 *     PopUpdatePowerButtonHoldState @ 0x1405730C4 (PopUpdatePowerButtonHoldState.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1407654B0 (PoUserShutdownCancelled.c)
 *     PopNetSetConnectivityConstraint @ 0x14077F550 (PopNetSetConnectivityConstraint.c)
 *     PopUpdateExternalDisplayState @ 0x1407BD028 (PopUpdateExternalDisplayState.c)
 *     PopDirectedDripsHandleResiliencyNotification @ 0x1408DE8F4 (PopDirectedDripsHandleResiliencyNotification.c)
 *     PopLidSwitchChangeCallback @ 0x1408DF740 (PopLidSwitchChangeCallback.c)
 *     PdcPoNetworkResiliency @ 0x1408EB200 (PdcPoNetworkResiliency.c)
 *     PopNetClearConnectivityConstraint @ 0x1408ED574 (PopNetClearConnectivityConstraint.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
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
