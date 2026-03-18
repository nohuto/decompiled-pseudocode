/*
 * XREFs of PsGetProcessServerSilo @ 0x14023F1B0
 * Callers:
 *     ObpDecrementHandleCount @ 0x1405E04F8 (ObpDecrementHandleCount.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     ObCloseHandleTableEntry @ 0x1406160E0 (ObCloseHandleTableEntry.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14062C78C (PspValidateJobAssignmentSiloPolicy.c)
 *     EtwpWriteProcessEvent @ 0x140632354 (EtwpWriteProcessEvent.c)
 *     ObQueryDeviceMapInformation @ 0x14063A950 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x14063AFA0 (ObpReferenceDeviceMap.c)
 *     EtwTraceThread @ 0x14063BD44 (EtwTraceThread.c)
 *     DbgkFlushErrorPort @ 0x14064EA20 (DbgkFlushErrorPort.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14064FECC (EtwpWriteAppStateChangeSummary.c)
 *     ObDereferenceDeviceMap @ 0x14065EC78 (ObDereferenceDeviceMap.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspEstimateNewProcessServerSilo @ 0x140690394 (PspEstimateNewProcessServerSilo.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406ACE1C (PspSetupUserProcessAddressSpace.c)
 *     PspMapSiloSharedDataView @ 0x1406AD308 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406AD340 (MmMapApiSetView.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpProcessEnumCallback @ 0x14078D390 (EtwpProcessEnumCallback.c)
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 *     ObSetProcessDeviceMap @ 0x1408E1ECC (ObSetProcessDeviceMap.c)
 *     EtwpLogProcessPerfCtrs @ 0x140939648 (EtwpLogProcessPerfCtrs.c)
 *     PerfInfoLogVirtualAlloc @ 0x14093A3B8 (PerfInfoLogVirtualAlloc.c)
 *     PerfInfoLogVirtualFree @ 0x14093A4C4 (PerfInfoLogVirtualFree.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140943AFC (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessServerSilo(__int64 a1)
{
  return *(_QWORD *)(a1 + 2160);
}
