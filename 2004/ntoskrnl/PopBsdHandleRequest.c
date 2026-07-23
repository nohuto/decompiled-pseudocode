/*
 * XREFs of PopBsdHandleRequest @ 0x1403F21A4
 * Callers:
 *     PopSetSleepMarker @ 0x140761A54 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140762A00 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x1407643C8 (PopRecordSleepCheckpoint.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140767530 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140767580 (PopSetUserShutdownMarkerWorker.c)
 *     PopClearSystemShutdownMarker @ 0x140767CE0 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140767D64 (PopClearSleepMarker.c)
 *     PopRecordDisplayState @ 0x14076C29C (PopRecordDisplayState.c)
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408DDAE4 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408DDDA8 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408DDE00 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408DDE80 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408DDFD4 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408DE0BC (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408DE0F8 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408EC590 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x140783530 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DE184 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
