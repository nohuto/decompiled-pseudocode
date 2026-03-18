/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408FBD68
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408F8840 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408F8B40 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408F8D8C (TtmiAssignDevice.c)
 *     TtmiSetInputWakeCapability @ 0x1408F91EC (TtmiSetInputWakeCapability.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408FA754 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408FA898 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408FAAE8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408FAB44 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408FAC70 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408FACF0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FB5A0 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408FBA18 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408FBE60 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408FCE80 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408FD960 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
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
