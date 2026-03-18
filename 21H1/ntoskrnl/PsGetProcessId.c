/*
 * XREFs of PsGetProcessId @ 0x1402D44D0
 * Callers:
 *     PsOpenProcess @ 0x140602740 (PsOpenProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x140655B80 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x140656240 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     WbDispatchOperation @ 0x14065ECA0 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     EtwpNotifyGuid @ 0x14067D410 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406D4818 (PopEtAggregateKeyCopyFromProcess.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408BF954 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408C6970 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408C6E08 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C70F0 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408C7498 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408C766C (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1408F9730 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408F98B0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409011D0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409012D0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093988C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140958B34 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140994358 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
