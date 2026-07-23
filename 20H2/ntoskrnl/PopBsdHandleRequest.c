/*
 * XREFs of PopBsdHandleRequest @ 0x1403F6650
 * Callers:
 *     PopSetSleepMarker @ 0x140770064 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140771010 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x1407729D8 (PopRecordSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x1407733B0 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140773434 (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140776560 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1407765B0 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x14077D958 (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E3924 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408E3BE8 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408E3C40 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E3CC0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408E3E14 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408E3EFC (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E3F38 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408F21A0 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x140790F20 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E3FC4 (PopUpdateBsdPowerTransitionReferenceTime.c)
 */

char __fastcall PopBsdHandleRequest(int a1)
{
  if ( (a1 & 8) != 0 )
  {
    PopUpdateBsdPowerTransitionReferenceTime();
    return RtlSetSystemBootStatus(RtlBsdPowerTransition, &PopBsdPowerTransition, 0x20u, 0LL);
  }
  else
  {
    PopBsdUpdateRequests |= a1;
    return PopQueueWorkItem((__int64)&PopBsdUpdateWorkItem, DelayedWorkQueue);
  }
}
