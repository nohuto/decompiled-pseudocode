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

int __stdcall RtlpProcessReflectionStartup(int a1)
{
  int VirtualMemory; // ebx
  int v2; // ecx
  int v3; // eax
  HANDLE v4; // ecx
  int v5; // eax
  void *v6; // eax
  HANDLE v7; // esi
  HANDLE v8; // edi
  void *v9; // ebx
  void (__thiscall *v10)(int, int); // esi
  int v11; // eax
  HANDLE v13; // [esp-18h] [ebp-8Ch]
  _BYTE v14[4]; // [esp+Ch] [ebp-68h] BYREF
  HANDLE Handle; // [esp+10h] [ebp-64h]
  HANDLE v16; // [esp+14h] [ebp-60h]
  int v17; // [esp+18h] [ebp-5Ch]
  int v18; // [esp+1Ch] [ebp-58h]
  int v19; // [esp+58h] [ebp-1Ch]
  HANDLE v20; // [esp+5Ch] [ebp-18h]
  int v21; // [esp+60h] [ebp-14h] BYREF
  HANDLE v22; // [esp+64h] [ebp-10h] BYREF
  HANDLE v23; // [esp+68h] [ebp-Ch] BYREF
  HANDLE v24; // [esp+6Ch] [ebp-8h] BYREF
  int *v25; // [esp+70h] [ebp-4h] BYREF

  v22 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v25, 0, a1, 12288, 4);
  if ( VirtualMemory >= 0 )
  {
    qmemcpy(v25, (const void *)a1, 0x2Cu);
    VirtualMemory = NtCreateEvent((int)&v22, 2031619, 0, 0, 0);
    if ( VirtualMemory >= 0 )
    {
      v2 = *(_DWORD *)(a1 + 4) & 2;
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
        v2 |= 4u;
      v3 = RtlCloneUserProcess(v2 | 1, 0, 0, 0, v14);
      VirtualMemory = v3;
      if ( v3 )
      {
        if ( v3 == 297 )
        {
          NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
          NtSetEvent((int)v23, 0);
          NtClose(v23);
          if ( v24 )
          {
            ZwWaitForSingleObject((int)v24, 0, 0);
            NtClose(v24);
          }
          v10 = (void (__thiscall *)(int, int))v25[2];
          if ( v10 )
          {
            v10(v25[2], v25[3]);
          }
          else if ( (v25[1] & 4) == 0 )
          {
            ZwSuspendThread(-2, 0);
          }
          v21 = *v25;
          VirtualMemory = NtFreeVirtualMemory(-1, (int)&v25, (int)&v21, 0x8000);
          ZwTerminateProcess(-1, VirtualMemory);
        }
        else
        {
          *(_DWORD *)(a1 + 28) = 0;
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 36) = 0;
          *(_DWORD *)(a1 + 40) = 0;
          v11 = *(_DWORD *)(a1 + 16);
          if ( v11 )
            NtSetEvent(v11, 0);
        }
      }
      else
      {
        v4 = Handle;
        *(_DWORD *)(a1 + 32) = v16;
        *(_DWORD *)(a1 + 36) = v17;
        *(_DWORD *)(a1 + 40) = v18;
        v13 = v22;
        *(_DWORD *)(a1 + 28) = v4;
        VirtualMemory = ZwDuplicateObject(-1, (int)v13, (int)v4, (int)&v23, 2031619, 0, 2);
        if ( VirtualMemory < 0 )
          goto LABEL_8;
        VirtualMemory = NtWriteVirtualMemory((int)Handle, (int)&v23, (int)&v23, 4, 0);
        if ( VirtualMemory < 0 )
          goto LABEL_8;
        v5 = *(_DWORD *)(a1 + 24);
        if ( !v5 )
          goto LABEL_16;
        VirtualMemory = ZwDuplicateObject(-1, v5, (int)Handle, (int)&v24, 2031619, 0, 2);
        if ( VirtualMemory < 0 )
          goto LABEL_8;
        if ( (*(_DWORD *)(a1 + 4) & 0x10) == 0 )
          NtClose(*(HANDLE *)(a1 + 24));
        VirtualMemory = NtWriteVirtualMemory((int)Handle, (int)&v24, (int)&v24, 4, 0);
        if ( VirtualMemory < 0 )
        {
LABEL_8:
          ZwTerminateProcess((int)Handle, VirtualMemory);
        }
        else
        {
LABEL_16:
          ZwResumeProcess((int)Handle);
          ZwWaitForSingleObject((int)v22, 0, 0);
          v6 = *(void **)(a1 + 16);
          v20 = v6;
          if ( v6 )
          {
            v7 = Handle;
            v8 = v16;
            v9 = *(void **)(a1 + 20);
            v19 = NtSetEvent((int)v6, 0);
            ZwWaitForSingleObject((int)v9, 0, 0);
            NtClose(v7);
            NtClose(v8);
            NtClose(v20);
            NtClose(v9);
            VirtualMemory = v19;
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
  if ( v22 )
    NtClose(v22);
  if ( v25 )
  {
    v21 = *v25;
    NtFreeVirtualMemory(-1, (int)&v25, (int)&v21, 0x8000);
  }
  return VirtualMemory;
}
