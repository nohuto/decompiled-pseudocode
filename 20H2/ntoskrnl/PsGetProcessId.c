/*
 * XREFs of PsGetProcessId @ 0x140262CB0
 * Callers:
 *     PsOpenProcess @ 0x1406023B0 (PsOpenProcess.c)
 *     WbDispatchOperation @ 0x14065F0D4 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406CA5A8 (PopEtAggregateKeyCopyFromProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x1406F07D8 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406F0F00 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     EtwpNotifyGuid @ 0x1407181E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C6AE4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408CDB00 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408CDF98 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408CE280 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408CE628 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408CE7FC (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x140900640 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1409007C0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409080D0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409081D0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14094095C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x14095FC94 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x14099BAF8 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
