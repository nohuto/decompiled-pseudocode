/*
 * XREFs of MiGetHugePageToZero @ 0x1402D4500
 * Callers:
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiGetPagesToZero @ 0x14054FF8C (MiGetPagesToZero.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140397E40 (MiGetUltraHugeAlreadyActive.c)
 *     MiDecrementHugeContext @ 0x140397F68 (MiDecrementHugeContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A814 (MiInitializeNewUltraHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  PVOID Pool; // rax
  void *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // r15d
  unsigned __int64 v14; // rbp
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a2 + 260) >> byte_140C4DECC;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_BYTE *)(a2 + 69) = 0;
    v5 = 4544LL * v3 + *(_QWORD *)(a1 + 16);
    if ( !*(_QWORD *)(a2 + 224)
      && *(_QWORD *)(*(_QWORD *)(a2 + 232) + 56LL) == *(_QWORD *)(a2 + 232) + 56LL
      && !*(_QWORD *)(v5 + 8) )
    {
      return 0LL;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 4304), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(v7, a2) )
      break;
    Pool = MiAllocatePool(64, 0xC8uLL, 0x7548694Du);
    v10 = Pool;
    if ( !Pool )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
    v11 = MiUnlinkNodeLargePages(a1, 0, 1, v3, 4, 1, a2 + 248, 64, (__int64)Pool);
    if ( !v11 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v12 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
          {
            v21 = KeGetCurrentPrcb();
            v22 = v21->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v21);
          }
        }
      }
      __writecr8(v12);
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v13 = MiInitializeNewUltraHugeContext(a2, v10, v11);
    if ( !v13 )
      MiDecrementHugeContext(v10);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v14 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && LockHandle.OldIrql <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(v14);
    if ( v13 )
      return 1LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v29 = KeGetCurrentIrql();
      if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v19 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v30);
      }
    }
  }
  __writecr8(v8);
  return 1LL;
}
