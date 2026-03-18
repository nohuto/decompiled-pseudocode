/*
 * XREFs of PsGetProcessServerSilo @ 0x140204560
 * Callers:
 *     EtwpWriteProcessEvent @ 0x1405D85C4 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x1405DF8B0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x140628AD0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     ObDereferenceDeviceMap @ 0x14065E844 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x140663500 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x1406649AC (EtwpWriteAppStateChangeSummary.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066BEE0 (PspEstimateNewProcessServerSilo.c)
 *     NtCreateUserProcess @ 0x14066BF50 (NtCreateUserProcess.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406746F4 (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     ObpDecrementHandleCount @ 0x14068AA54 (ObpDecrementHandleCount.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406F98FC (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1406F9DE8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406F9E20 (MmMapApiSetView.c)
 *     EtwTraceThread @ 0x140700C44 (EtwTraceThread.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408DAD1C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x14093256C (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x1409332E8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x1409333F4 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093CAC0 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
