/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408FAA78
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F7550 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F7850 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408F7A9C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408F7EFC (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408F9464 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408F95A8 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408F97F8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408F9854 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408F9980 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408F9A00 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FA2B0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FA728 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FAB70 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408FBB90 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408FC670 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
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
