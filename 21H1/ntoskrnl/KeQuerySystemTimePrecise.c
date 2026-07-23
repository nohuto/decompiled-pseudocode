/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140355550
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     EtwpInitLoggerContext @ 0x1406790CC (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1406794A0 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     EtwpTraceSystemShutdown @ 0x1409331E4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093B424 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x14093B740 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140355570 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
