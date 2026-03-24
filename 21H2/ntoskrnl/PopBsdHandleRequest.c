/*
 * XREFs of PopBsdHandleRequest @ 0x1403F8020
 * Callers:
 *     PopSetSleepMarker @ 0x140773F34 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140774FB0 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x140776988 (PopRecordSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x140777220 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x1407772A4 (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14077A510 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14077A560 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FC1C (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x140781738 (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E10E4 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408E13A8 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408E1400 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E1480 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408E15D4 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408E16BC (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E16F8 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408EF9A0 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x140790690 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E1784 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    PopUpdateBsdPowerTransitionReferenceTime();
    return RtlSetSystemBootStatus(7LL, &PopBsdPowerTransition, 32LL);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
