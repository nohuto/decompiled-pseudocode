/*
 * XREFs of MmGetDefaultPagePriority @ 0x1402C2300
 * Callers:
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PfSnCheckActionsNeeded @ 0x140650B2C (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x140651B10 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406E8A74 (PspApplyIFEOPerfOptions.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PfpLogEventRequest @ 0x1407627EC (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x14098C458 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099606C (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
