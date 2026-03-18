/*
 * XREFs of MmGetDefaultPagePriority @ 0x140360698
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PfSnAsyncPrefetchWorker @ 0x1407DC0D0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1407F7128 (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x140986E88 (PfpLogEventRequest.c)
 *     PfTAccessTracingCleanup @ 0x140A483FC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x140A484F0 (PfTAccessTracingStart.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
