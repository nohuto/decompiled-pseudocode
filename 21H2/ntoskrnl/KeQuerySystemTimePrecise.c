/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140266EA0
 * Callers:
 *     PspUserThreadStartup @ 0x14063BC30 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     EtwpInitLoggerContext @ 0x1406B4C60 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1406B5044 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x140937C54 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093FE08 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x140940124 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140266EC0 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
