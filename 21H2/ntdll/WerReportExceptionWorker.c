/*
 * XREFs of WerReportExceptionWorker @ 0x1800DD830
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x18009D7E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwFreeVirtualMemory @ 0x18009DA00 (ZwFreeVirtualMemory.c)
 *     ZwResumeThread @ 0x18009E080 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009E0A0 (NtTerminateThread.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
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
