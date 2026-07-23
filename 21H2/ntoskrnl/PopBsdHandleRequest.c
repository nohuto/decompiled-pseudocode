/*
 * XREFs of PopBsdHandleRequest @ 0x1403F8020
 * Callers:
 *     PopSetSleepMarker @ 0x1407740F4 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140775170 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x140776B48 (PopRecordSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x1407773E0 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140777464 (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x14077A6D0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x14077A720 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x1407818F8 (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408E1244 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408E1508 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408E1560 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E15E0 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408E1734 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408E181C (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408E1858 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408EFB00 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x140791C40 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408E18E4 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
