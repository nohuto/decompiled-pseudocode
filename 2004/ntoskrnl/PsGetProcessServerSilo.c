/*
 * XREFs of PsGetProcessServerSilo @ 0x14027D870
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1405F34B0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtCreateUserProcess @ 0x1406149A0 (NtCreateUserProcess.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406176C8 (PspEstimateNewProcessServerSilo.c)
 *     ObDereferenceDeviceMap @ 0x140619124 (ObDereferenceDeviceMap.c)
 *     DbgkFlushErrorPort @ 0x14061DDE0 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14061F28C (EtwpWriteAppStateChangeSummary.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     ObpDecrementHandleCount @ 0x14063D434 (ObpDecrementHandleCount.c)
 *     EtwTraceThread @ 0x14064E3B4 (EtwTraceThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14065828C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspSetupUserProcessAddressSpace @ 0x14065D2E4 (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x14065D7D0 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14065D808 (MmMapApiSetView.c)
 *     EtwpWriteProcessEvent @ 0x14065E8C4 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x140665BB0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x1406B369C (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x1406B3A40 (PspTerminateThreadByPointer.c)
 *     EtwpProcessEnumCallback @ 0x14077FA80 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408DC08C (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x140933818 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x140934588 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x140934694 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x14093DD3C (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
