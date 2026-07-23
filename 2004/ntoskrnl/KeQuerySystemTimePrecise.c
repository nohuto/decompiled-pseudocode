/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1402F9570
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 *     PspUserThreadStartup @ 0x1406B5110 (PspUserThreadStartup.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpInitializeTimeStamp @ 0x1406CB0B0 (EtwpInitializeTimeStamp.c)
 *     EtwpInitLoggerContext @ 0x1406CB22C (EtwpInitLoggerContext.c)
 *     EtwpTraceSystemShutdown @ 0x140934484 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093C6A0 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x14093C9BC (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x1402F9590 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
