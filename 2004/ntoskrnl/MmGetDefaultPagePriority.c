/*
 * XREFs of MmGetDefaultPagePriority @ 0x1402FE7D4
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     PfSnCheckActionsNeeded @ 0x1406B8CBC (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406BB750 (PfSnAsyncPrefetchWorker.c)
 *     PspApplyIFEOPerfOptions @ 0x14070CA44 (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x1407640CC (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x14098D458 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099743C (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B2030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
