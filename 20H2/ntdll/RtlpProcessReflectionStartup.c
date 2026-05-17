/*
 * XREFs of RtlpProcessReflectionStartup @ 0x1800D6390
 * Callers:
 *     RtlCreateProcessReflection @ 0x1800D5E00 (RtlCreateProcessReflection.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x18009D130 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x18009D270 (ZwSetEvent.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D3B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D470 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     NtWriteVirtualMemory @ 0x18009D7F0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009D830 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x18009D9B0 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x1800A0000 (ZwResumeProcess.c)
 *     NtSuspendThread @ 0x1800A0820 (NtSuspendThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlCloneUserProcess @ 0x1800D6700 (RtlCloneUserProcess.c)
 */

__int64 __fastcall RtlpProcessReflectionStartup(__int64 a1)
{
  int VirtualMemory; // r14d
  int v3; // ecx
  int v4; // eax
  HANDLE v5; // r8
  void *v6; // r15
  HANDLE v7; // rbx
  HANDLE v8; // rdi
  void *v9; // rsi
  _BYTE v11[8]; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v12; // [rsp+58h] [rbp-51h]
  HANDLE v13; // [rsp+60h] [rbp-49h]
  __int64 v14; // [rsp+68h] [rbp-41h]
  __int64 v15; // [rsp+70h] [rbp-39h]

  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    *(_OWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 72) = 0LL;
    return (unsigned int)VirtualMemory;
  }
  MEMORY[0] = *(_OWORD *)a1;
  MEMORY[0x10] = *(_OWORD *)(a1 + 16);
  MEMORY[0x20] = *(_OWORD *)(a1 + 32);
  MEMORY[0x30] = *(_OWORD *)(a1 + 48);
  MEMORY[0x40] = *(_OWORD *)(a1 + 64);
  MEMORY[0x50] = *(_QWORD *)(a1 + 80);
  VirtualMemory = ZwCreateEvent();
  if ( VirtualMemory < 0 )
    return (unsigned int)VirtualMemory;
  v3 = *(_DWORD *)(a1 + 8) & 2 | 4;
  if ( (*(_DWORD *)(a1 + 8) & 8) == 0 )
    v3 = *(_DWORD *)(a1 + 8) & 2;
  v4 = RtlCloneUserProcess(v3 | 1u, 0, 0, 0, (__int64)v11);
  VirtualMemory = v4;
  if ( !v4 )
  {
    v5 = v12;
    *(_QWORD *)(a1 + 64) = v13;
    *(_QWORD *)(a1 + 72) = v14;
    *(_QWORD *)(a1 + 80) = v15;
    *(_QWORD *)(a1 + 56) = v5;
    VirtualMemory = ZwDuplicateObject();
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = NtWriteVirtualMemory();
      if ( VirtualMemory >= 0 )
      {
        if ( !*(_QWORD *)(a1 + 48) )
          goto LABEL_16;
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory >= 0 )
        {
          if ( (*(_DWORD *)(a1 + 8) & 0x10) == 0 )
            NtClose(*(HANDLE *)(a1 + 48));
          VirtualMemory = NtWriteVirtualMemory();
          if ( VirtualMemory >= 0 )
          {
LABEL_16:
            ZwResumeProcess();
            NtWaitForSingleObject(0LL, 0, 0LL);
            v6 = *(void **)(a1 + 32);
            if ( v6 )
            {
              v7 = v12;
              v8 = v13;
              v9 = *(void **)(a1 + 40);
              VirtualMemory = ZwSetEvent();
              NtWaitForSingleObject(v9, 0, 0LL);
              NtClose(v7);
              NtClose(v8);
              NtClose(v6);
              NtClose(v9);
            }
            return (unsigned int)VirtualMemory;
          }
        }
      }
    }
LABEL_8:
    ZwTerminateProcess();
    return (unsigned int)VirtualMemory;
  }
  if ( v4 == 297 )
  {
    NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
    ZwSetEvent();
    NtClose(0LL);
    if ( MEMORY[0x10] )
    {
      MEMORY[0x10](MEMORY[0x18]);
    }
    else if ( (MEMORY[8] & 4) == 0 )
    {
      NtSuspendThread();
    }
    VirtualMemory = ZwFreeVirtualMemory();
    goto LABEL_8;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( *(_QWORD *)(a1 + 32) )
    ZwSetEvent();
  return (unsigned int)VirtualMemory;
}
