/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x18007AB70
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC330 (RtlWow64SuspendProcess.c)
 *     RtlWow64SuspendThread @ 0x1800DC4A0 (RtlWow64SuspendThread.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18009D920 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x18009DDE0 (ZwReadVirtualMemory.c)
 */

int __fastcall RtlWow64GetSharedInfoProcess(HANDLE ProcessHandle, _BYTE *a2, void *a3)
{
  int result; // eax
  void *v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = (void *)(v8 + 1152);
      *a2 = 1;
      return ZwReadVirtualMemory(ProcessHandle, v7, a3, 0x28uLL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
