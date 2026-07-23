/*
 * XREFs of _WerReportExceptionWorker@4 @ 0x4B33AE10
 * Callers:
 *     <none>
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 */

NTSTATUS __stdcall WerReportExceptionWorker(int a1)
{
  void *v1; // esi
  NTSTATUS v2; // esi
  ULONG_PTR RegionSize; // [esp+4h] [ebp-8h] BYREF

  LODWORD(RegionSize) = 0;
  HIDWORD(RegionSize) = a1;
  RtlReportExceptionEx((PEXCEPTION_RECORD)(a1 + 8), (PCONTEXT)2, *(_DWORD *)(a1 + 4) & 0x1F, (PLARGE_INTEGER)0xFFFFFFFF);
  v1 = *(void **)a1;
  NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
  ZwSetInformationThread(v1, ThreadDbgkWerReportActive, &dword_4B294DCC, 4u);
  ZwResumeThread(v1, 0);
  v2 = NtClose(v1);
  ZwTerminateThread((HANDLE)0xFFFFFFFE, 0);
  return v2;
}
