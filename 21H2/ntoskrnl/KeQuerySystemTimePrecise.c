/*
 * XREFs of KeQuerySystemTimePrecise @ 0x140278F00
 * Callers:
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     PspUserThreadStartup @ 0x140646E40 (PspUserThreadStartup.c)
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     EtwpInitLoggerContext @ 0x1406DD980 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1406DDD64 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x140937A84 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x14093FC38 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x14093FF54 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140278F20 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RtlGetSystemTimePrecise(a1, a2, a3, a4);
  *a1 = result;
  return result;
}
