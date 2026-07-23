/*
 * XREFs of PopBsdHandleRequest @ 0x1403F0DDC
 * Callers:
 *     PopClearSystemShutdownMarker @ 0x14075FBE0 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x14075FC64 (PopClearSleepMarker.c)
 *     PopSetSleepMarker @ 0x140760174 (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x140761120 (NtInitiatePowerAction.c)
 *     PopRecordSleepCheckpoint @ 0x140762AE8 (PopRecordSleepCheckpoint.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140765B70 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140765BC0 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14076AC6C (PopBatteryApplyCompositeState.c)
 *     PopRecordDisplayState @ 0x14076D308 (PopRecordDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x1408DC774 (PopClearConnectedStandbyMarker.c)
 *     PopRecordAcDcState @ 0x1408DCA38 (PopRecordAcDcState.c)
 *     PopRecordLidStateWorker @ 0x1408DCA90 (PopRecordLidStateWorker.c)
 *     PopRecordPhysicalPowerButton @ 0x1408DCB10 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408DCC64 (PopRecordSleepCheckpointSource.c)
 *     PopSetCleanShutdownMarker @ 0x1408DCD4C (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408DCD88 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x1408EB310 (PdcPoRecordButton.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     RtlSetSystemBootStatus @ 0x14077AB30 (RtlSetSystemBootStatus.c)
 *     PopUpdateBsdPowerTransitionReferenceTime @ 0x1408DCE14 (PopUpdateBsdPowerTransitionReferenceTime.c)
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
