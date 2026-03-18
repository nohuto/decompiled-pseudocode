/*
 * XREFs of MmGetDefaultPagePriority @ 0x14024422C
 * Callers:
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PfSnCheckActionsNeeded @ 0x14064C34C (PfSnCheckActionsNeeded.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1406DEF54 (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x1406E75F0 (PfSnAsyncPrefetchWorker.c)
 *     PfpLogEventRequest @ 0x1407726DC (PfpLogEventRequest.c)
 *     PfTAccessTracingStart @ 0x140993448 (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x14099D47C (PfTAccessTracingCleanup.c)
 *     ExpDebuggerWorker @ 0x1409B8030 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
