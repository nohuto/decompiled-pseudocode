/*
 * XREFs of _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165
 * Callers:
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpHpStackTraceConfig@4 @ 0x4B36E268 (_RtlpHpStackTraceConfig@4.c)
 *     _RtlpHpStackTraceSerializeRemote@4 @ 0x4B36E83D (_RtlpHpStackTraceSerializeRemote@4.c)
 *     _RtlpHpTagQueryHeapsRemote@12 @ 0x4B370210 (_RtlpHpTagQueryHeapsRemote@12.c)
 * Callees:
 *     _RtlpCreateUserThreadEx@44 @ 0x4B2F0524 (_RtlpCreateUserThreadEx@44.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     _ZwResumeThread@8 @ 0x4B2F2EA0 (_ZwResumeThread@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E (_RtlpCreateExecutionRequiredRequest@8.c)
 *     _RtlpDestroyExecutionRequiredRequest@4 @ 0x4B36FCC4 (_RtlpDestroyExecutionRequiredRequest@4.c)
 */

NTSTATUS __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *a2)
{
  HANDLE v2; // edi
  HANDLE v3; // ebx
  int v4; // ecx
  NTSTATUS VirtualMemory; // esi
  PHANDLE v6; // eax
  HANDLE v7; // edi
  int ExecutionRequiredRequest; // eax
  ULONG_PTR v10; // [esp-10h] [ebp-40h]
  SIZE_T v11; // [esp-8h] [ebp-38h]
  SIZE_T v12; // [esp-8h] [ebp-38h]
  ULONG v13; // [esp+0h] [ebp-30h]
  ULONG_PTR *v14; // [esp+0h] [ebp-30h]
  ULONG_PTR *v15; // [esp+0h] [ebp-30h]
  PVOID BaseAddress; // [esp+Ch] [ebp-24h] BYREF
  HANDLE ThreadHandle; // [esp+10h] [ebp-20h] BYREF
  HANDLE ProcessHandlea; // [esp+14h] [ebp-1Ch]
  PHANDLE TargetHandle; // [esp+18h] [ebp-18h]
  HANDLE Handle; // [esp+1Ch] [ebp-14h]
  int v21; // [esp+20h] [ebp-10h] BYREF
  ULONG_PTR RegionSize; // [esp+24h] [ebp-Ch] BYREF

  v2 = ProcessHandle;
  TargetHandle = a2;
  ProcessHandlea = ProcessHandle;
  BaseAddress = 0;
  HIDWORD(v10) = &RegionSize;
  LODWORD(v10) = 0;
  ThreadHandle = 0;
  v3 = 0;
  LODWORD(RegionSize) = 72;
  Handle = 0;
  VirtualMemory = NtAllocateVirtualMemory(ProcessHandle, &BaseAddress, v10, (PSIZE_T)0x3000, 4u, v13);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = RtlpCreateUserThreadEx(
                      v2,
                      0,
                      3,
                      0LL,
                      0,
                      v4,
                      (NTSTATUS (__cdecl *)(PVOID))RtlpExtendedHeapInformationWorkerThread,
                      BaseAddress,
                      &ThreadHandle,
                      (_DWORD *)&RegionSize + 1);
    if ( VirtualMemory >= 0 )
    {
      v6 = TargetHandle;
      if ( *TargetHandle )
      {
        VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, *TargetHandle, v2, TargetHandle, 0xF001Fu, 0, 0);
        if ( VirtualMemory < 0 )
          goto LABEL_9;
        v6 = TargetHandle;
      }
      HIDWORD(v11) = &v21;
      LODWORD(v11) = 72;
      VirtualMemory = NtWriteVirtualMemory(v2, BaseAddress, v6, v11, v14);
      if ( VirtualMemory >= 0 )
      {
        if ( v21 == 72 )
        {
          ExecutionRequiredRequest = RtlpCreateExecutionRequiredRequest(v2);
          v7 = ThreadHandle;
          VirtualMemory = ExecutionRequiredRequest;
          if ( ExecutionRequiredRequest < 0 || (VirtualMemory = ZwResumeThread(ThreadHandle, 0), VirtualMemory < 0) )
          {
            v3 = Handle;
          }
          else
          {
            ZwWaitForSingleObject(v7, 0, 0);
            v3 = Handle;
            if ( Handle )
            {
              RtlpDestroyExecutionRequiredRequest(Handle);
              v3 = 0;
            }
            NtClose(v7);
            v7 = 0;
            HIDWORD(v12) = &v21;
            LODWORD(v12) = 72;
            VirtualMemory = NtReadVirtualMemory(ProcessHandlea, BaseAddress, TargetHandle, v12, v15);
            if ( VirtualMemory < 0 )
              goto LABEL_12;
            if ( v21 != 72 )
            {
              VirtualMemory = -2147483635;
LABEL_12:
              v2 = ProcessHandlea;
              goto LABEL_13;
            }
            VirtualMemory = (NTSTATUS)TargetHandle[6];
          }
LABEL_10:
          if ( v7 )
          {
            ZwTerminateThread(v7, 0);
            NtClose(v7);
          }
          goto LABEL_12;
        }
        VirtualMemory = -2147483635;
      }
    }
LABEL_9:
    v7 = ThreadHandle;
    goto LABEL_10;
  }
LABEL_13:
  if ( BaseAddress )
    NtFreeVirtualMemory(v2, &BaseAddress, &RegionSize, 0x8000u);
  if ( v3 )
    RtlpDestroyExecutionRequiredRequest(v3);
  return VirtualMemory;
}
