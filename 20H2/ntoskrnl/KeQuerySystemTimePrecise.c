/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1402D6A70
 * Callers:
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspUserThreadStartup @ 0x140692D10 (PspUserThreadStartup.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     EtwpInitLoggerContext @ 0x140713360 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140713744 (EtwpInitializeTimeStamp.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpTraceSystemShutdown @ 0x14093A2B4 (EtwpTraceSystemShutdown.c)
 *     EtwTraceAdminlessAccessFailure @ 0x140942468 (EtwTraceAdminlessAccessFailure.c)
 *     EtwTraceLpacAccessFailure @ 0x140942784 (EtwTraceLpacAccessFailure.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x1402D6A90 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RtlGetSystemTimePrecise(a1, a2, a3, a4);
  *a1 = result;
  return result;
}
