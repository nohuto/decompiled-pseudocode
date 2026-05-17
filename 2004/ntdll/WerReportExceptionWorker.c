/*
 * XREFs of WerReportExceptionWorker @ 0x1800DD6E0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18009CFB0 (NtSetInformationThread.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009D850 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009D870 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DCA20 (RtlReportExceptionEx.c)
 */

__int64 __fastcall WerReportExceptionWorker(__int64 a1)
{
  void *v1; // rbx

  RtlReportExceptionEx(a1 + 16, 2LL, *(_DWORD *)(a1 + 8) & 0x1F, (void *)0xFFFFFFFFFFFFFFFFLL, *(_QWORD *)a1);
  v1 = *(void **)a1;
  ZwFreeVirtualMemory();
  NtSetInformationThread();
  ZwResumeThread();
  LODWORD(v1) = NtClose(v1);
  NtTerminateThread();
  return (unsigned int)v1;
}
