/*
 * XREFs of _RtlpProcessReflectionStartup@4 @ 0x4B3354D0
 * Callers:
 *     _RtlCreateProcessReflection@24 @ 0x4B335060 (_RtlCreateProcessReflection@24.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _ZwResumeProcess@4 @ 0x4B2F4130 (_ZwResumeProcess@4.c)
 *     _ZwSuspendThread@8 @ 0x4B2F4540 (_ZwSuspendThread@8.c)
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 */

NTSTATUS __stdcall RtlpProcessReflectionStartup(int a1)
{
  NTSTATUS Event; // ebx
  int v2; // ecx
  NTSTATUS v3; // eax
  HANDLE ProcessHandle; // ecx
  void *v5; // eax
  void *v6; // eax
  HANDLE v7; // esi
  HANDLE ThreadHandle; // edi
  void *v9; // ebx
  void (__thiscall *v10)(_DWORD, _DWORD); // esi
  void *v11; // eax
  void *v13; // [esp-18h] [ebp-8Ch]
  ULONG_PTR v14; // [esp-10h] [ebp-84h]
  ULONG v15; // [esp+0h] [ebp-74h]
  ULONG_PTR *v16; // [esp+0h] [ebp-74h]
  ULONG_PTR *v17; // [esp+0h] [ebp-74h]
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [esp+Ch] [ebp-68h] BYREF
  HANDLE Handle; // [esp+5Ch] [ebp-18h]
  ULONG_PTR RegionSize; // [esp+60h] [ebp-14h] BYREF
  HANDLE TargetHandle; // [esp+68h] [ebp-Ch] BYREF
  HANDLE Buffer; // [esp+6Ch] [ebp-8h] BYREF
  PVOID BaseAddress; // [esp+70h] [ebp-4h] BYREF

  HIDWORD(v14) = a1;
  LODWORD(v14) = 0;
  HIDWORD(RegionSize) = 0;
  BaseAddress = 0;
  Buffer = 0;
  TargetHandle = 0;
  Event = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v14, (PSIZE_T)0x3000, 4u, v15);
  if ( Event >= 0 )
  {
    qmemcpy(BaseAddress, (const void *)a1, 0x2Cu);
    Event = NtCreateEvent((PHANDLE)&RegionSize + 1, 0x1F0003u, 0, NotificationEvent, 0);
    if ( Event >= 0 )
    {
      v2 = *(_DWORD *)(a1 + 4) & 2;
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
        v2 |= 4u;
      v3 = RtlCloneUserProcess(v2 | 1, 0, 0, 0, &ProcessInformation);
      Event = v3;
      if ( v3 )
      {
        if ( v3 == 297 )
        {
          NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
          NtSetEvent(TargetHandle, 0);
          NtClose(TargetHandle);
          if ( Buffer )
          {
            ZwWaitForSingleObject(Buffer, 0, 0);
            NtClose(Buffer);
          }
          v10 = (void (__thiscall *)(_DWORD, _DWORD))*((_DWORD *)BaseAddress + 2);
          if ( v10 )
          {
            v10(*((_DWORD *)BaseAddress + 2), *((_DWORD *)BaseAddress + 3));
          }
          else if ( (*((_DWORD *)BaseAddress + 1) & 4) == 0 )
          {
            ZwSuspendThread((HANDLE)0xFFFFFFFE, 0);
          }
          LODWORD(RegionSize) = *(_DWORD *)BaseAddress;
          Event = NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
          ZwTerminateProcess((HANDLE)0xFFFFFFFF, Event);
        }
        else
        {
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 36) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          v11 = *(void **)(a1 + 16);
          if ( v11 )
            NtSetEvent(v11, 0);
        }
      }
      else
      {
        ProcessHandle = ProcessInformation.ProcessHandle;
        *(_DWORD *)(a1 + 32) = ProcessInformation.ThreadHandle;
        *(CLIENT_ID *)(a1 + 36) = ProcessInformation.ClientId;
        v13 = (void *)HIDWORD(RegionSize);
        *(_DWORD *)(a1 + 28) = ProcessHandle;
        Event = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v13, ProcessHandle, &TargetHandle, 0x1F0003u, 0, 2u);
        if ( Event < 0 )
          goto LABEL_8;
        Event = NtWriteVirtualMemory(ProcessInformation.ProcessHandle, &TargetHandle, &TargetHandle, 4uLL, v16);
        if ( Event < 0 )
          goto LABEL_8;
        v5 = *(void **)(a1 + 24);
        if ( !v5 )
          goto LABEL_16;
        Event = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v5, ProcessInformation.ProcessHandle, &Buffer, 0x1F0003u, 0, 2u);
        if ( Event < 0 )
          goto LABEL_8;
        if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
          NtClose(*(HANDLE *)(a1 + 24));
        Event = NtWriteVirtualMemory(ProcessInformation.ProcessHandle, &Buffer, &Buffer, 4uLL, v17);
        if ( Event < 0 )
        {
LABEL_8:
          ZwTerminateProcess(ProcessInformation.ProcessHandle, Event);
        }
        else
        {
LABEL_16:
          ZwResumeProcess(ProcessInformation.ProcessHandle);
          ZwWaitForSingleObject((HANDLE)HIDWORD(RegionSize), 0, 0);
          v6 = *(void **)(a1 + 16);
          Handle = v6;
          if ( v6 )
          {
            v7 = ProcessInformation.ProcessHandle;
            ThreadHandle = ProcessInformation.ThreadHandle;
            v9 = *(void **)(a1 + 20);
            ProcessInformation.ImageInformation.CheckSum = NtSetEvent(v6, 0);
            ZwWaitForSingleObject(v9, 0, 0);
            NtClose(v7);
            NtClose(ThreadHandle);
            NtClose(Handle);
            NtClose(v9);
            Event = ProcessInformation.ImageInformation.CheckSum;
          }
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  if ( HIDWORD(RegionSize) )
    NtClose((HANDLE)HIDWORD(RegionSize));
  if ( BaseAddress )
  {
    LODWORD(RegionSize) = *(_DWORD *)BaseAddress;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  }
  return Event;
}
