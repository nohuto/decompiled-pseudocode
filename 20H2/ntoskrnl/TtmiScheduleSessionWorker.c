/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140901990
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408FE450 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408FE750 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408FE99C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408FEDFC (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x140900378 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409004BC (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x140900708 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x140900764 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140900890 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140900910 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409011C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140901640 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x140901A88 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x140902AB0 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1409035B4 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
