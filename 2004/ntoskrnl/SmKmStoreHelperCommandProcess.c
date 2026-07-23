/*
 * XREFs of SmKmStoreHelperCommandProcess @ 0x1403037A0
 * Callers:
 *     SmKmStoreHelperWorker @ 0x1403036C0 (SmKmStoreHelperWorker.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140598C44 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x1402D03CC (SmFpFree.c)
 *     ?SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z @ 0x140303648 (-SmKmProbeAndLockAddress@@YAJPEAX_KPEAU_MDL@@K@Z.c)
 *     SmFpAllocate @ 0x140304118 (SmFpAllocate.c)
 *     SmSetThreadPagePriority @ 0x140304620 (SmSetThreadPagePriority.c)
 *     SmKmUnlockMdl @ 0x14035DBEC (SmKmUnlockMdl.c)
 *     ZwUnlockVirtualMemory @ 0x1403F6F20 (ZwUnlockVirtualMemory.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140599390 (SmKmVirtualLockCtxLockMemory.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1405994B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 *     MmStoreFreeVirtualMemory @ 0x14070CACC (MmStoreFreeVirtualMemory.c)
 */

void __fastcall SmKmStoreHelperCommandProcess(__int64 a1, int a2, __int64 a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  struct _MDL *v8; // r14
  __int64 v9; // rdx
  unsigned int v10; // r15d
  int v11; // ebx
  PVOID v12; // rcx
  PVOID v13; // rcx
  int v14; // eax
  ULONG_PTR v15; // rcx
  int v16; // edx
  struct _MDL *v17; // r12
  int v18; // eax
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = a2 - 2;
  if ( !v5 )
  {
    RegionSize = *(_QWORD *)(a3 + 8);
    BaseAddress = (PVOID)MmStoreAllocateVirtualMemory();
    v12 = BaseAddress;
    if ( BaseAddress )
    {
      if ( *(_QWORD *)(a1 + 112) )
      {
        if ( (*(_DWORD *)(a3 + 32) & 1) == 0 )
        {
          v18 = SmKmVirtualLockCtxLockMemory(*(_QWORD *)(a1 + 112));
          v12 = BaseAddress;
          v11 = v18;
          if ( v18 < 0 )
          {
            MmStoreFreeVirtualMemory(BaseAddress);
            goto LABEL_12;
          }
        }
      }
      *(_QWORD *)(a3 + 24) = v12;
      goto LABEL_11;
    }
    goto LABEL_24;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v14 = *(_DWORD *)(a3 + 16);
    BaseAddress = v13;
    if ( (v14 & 1) == 0 )
    {
      MmStoreFreeVirtualMemory(v13);
      v15 = *(_QWORD *)(a1 + 112);
      if ( v15 )
        SmKmVirtualLockCtxMemoryUnlocked(v15);
    }
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    BaseAddress = *(PVOID *)a3;
    RegionSize = *(_QWORD *)(a3 + 8);
    v8 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), *(_DWORD *)(a3 + 20) & 1);
    if ( v8 )
    {
      v9 = *(unsigned int *)(a3 + 16);
      v19[0] = KeGetCurrentThread();
      v10 = SmSetThreadPagePriority(v19, v9);
      v11 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, RegionSize, v8);
      if ( v11 == -1073741395 && (*(_DWORD *)(a3 + 20) & 1) != 0 )
      {
        v17 = (struct _MDL *)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), 1);
        v11 = SmKmProbeAndLockAddress((unsigned __int64)BaseAddress, RegionSize, v8);
        if ( v11 >= 0 )
          v8->Next = v17;
        else
          SmFpFree(*(_QWORD *)(a1 + 120), 4, a1, v17);
      }
      if ( v10 != *(_DWORD *)(a3 + 16) )
        SmSetThreadPagePriority(v19, v10);
      if ( v11 >= 0 )
      {
        BaseAddress = (PVOID)SmFpAllocate(*(PEX_SPIN_LOCK *)(a1 + 120), *(_DWORD *)(a3 + 20) & 1);
        if ( BaseAddress )
        {
          *(_QWORD *)(a3 + 24) = v8;
          goto LABEL_11;
        }
        v11 = -1073741670;
        SmKmUnlockMdl(v8);
      }
      SmFpFree(*(_QWORD *)(a1 + 120), 2, a1, v8);
      goto LABEL_12;
    }
LABEL_24:
    v11 = -1073741670;
    goto LABEL_12;
  }
  v16 = v7 - 1;
  if ( !v16 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))a3)(a1, *(_QWORD *)(a3 + 8), 0LL);
    goto LABEL_12;
  }
  if ( v16 != 1 )
  {
    v11 = -1073741811;
    goto LABEL_12;
  }
  BaseAddress = *(PVOID *)a3;
  RegionSize = *(_QWORD *)(a3 + 8);
  ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
LABEL_11:
  v11 = 0;
LABEL_12:
  *(_DWORD *)(a3 + 40) = v11;
}
