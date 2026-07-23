/*
 * XREFs of MmGetDefaultPagePriority @ 0x14027348C
 * Callers:
 *     PspApplyIFEOPerfOptions @ 0x14061DEC4 (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x140674BE0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     PfpLogEventRequest @ 0x14077684C (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x140991448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
