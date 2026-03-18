/*
 * XREFs of PsGetProcessId @ 0x14026AB30
 * Callers:
 *     WbDispatchOperation @ 0x140619580 (WbDispatchOperation.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     PsOpenProcess @ 0x14067A820 (PsOpenProcess.c)
 *     EtwTraceWorkingSetSwap @ 0x1406D01E0 (EtwTraceWorkingSetSwap.c)
 *     EtwTraceWorkingSetInSwapStoreFail @ 0x1406D08A0 (EtwTraceWorkingSetInSwapStoreFail.c)
 *     PopEtAggregateKeyCopyFromProcess @ 0x1406F7608 (PopEtAggregateKeyCopyFromProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C0CA4 (MiForceCrashForInvalidAccess.c)
 *     MiLogHotPatchManagement @ 0x1408C7CC0 (MiLogHotPatchManagement.c)
 *     MiLogHotPatchOperation @ 0x1408C8158 (MiLogHotPatchOperation.c)
 *     MiLogHotPatchOperationStatus @ 0x1408C8440 (MiLogHotPatchOperationStatus.c)
 *     MiLogHotPatchPagesLocked @ 0x1408C87E8 (MiLogHotPatchPagesLocked.c)
 *     MiLogHotPatchRundown @ 0x1408C89BC (MiLogHotPatchRundown.c)
 *     TtmpCloseTerminalHandle @ 0x1408FAA20 (TtmpCloseTerminalHandle.c)
 *     TtmpOpenTerminalHandle @ 0x1408FABA0 (TtmpOpenTerminalHandle.c)
 *     TtmpCloseQueueHandle @ 0x1409024C0 (TtmpCloseQueueHandle.c)
 *     TtmpOpenQueueHandle @ 0x1409025C0 (TtmpOpenQueueHandle.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093AB2C (EtwpObjectHandleRundown.c)
 *     WheaTerminateProcess @ 0x140959ED4 (WheaTerminateProcess.c)
 *     EtwTraceSystemTimeChange @ 0x140995998 (EtwTraceSystemTimeChange.c)
 * Callees:
 *     <none>
 */

HANDLE __stdcall PsGetProcessId(PEPROCESS Process)
{
  return Process[1].Header.WaitListHead.Flink;
}
