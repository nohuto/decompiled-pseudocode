/*
 * XREFs of MmGetDefaultPagePriority @ 0x1402D47AC
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x1406BEDD4 (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406C62F0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x1406CB1FC (PfSnCheckActionsNeeded.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     PfpLogEventRequest @ 0x14077668C (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x140990448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
