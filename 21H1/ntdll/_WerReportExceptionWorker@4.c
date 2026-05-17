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
  HANDLE v1; // esi
  NTSTATUS v2; // esi
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v5 = a1;
  RtlReportExceptionEx((_DWORD *)(a1 + 8), (const void *)2, *(_DWORD *)(a1 + 4) & 0x1F, -1, *(HANDLE *)a1);
  v1 = *(HANDLE *)a1;
  NtFreeVirtualMemory(-1, (int)&v5, (int)&v4, 0x8000);
  ZwSetInformationThread((int)v1, 46, (int)&dword_4B294DCC, 4);
  ZwResumeThread((int)v1, 0);
  v2 = NtClose(v1);
  ZwTerminateThread(-2, 0);
  return v2;
}
