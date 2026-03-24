/*
 * XREFs of MiGetHugePageToZero @ 0x14022FCB0
 * Callers:
 *     MiZeroLargePages @ 0x140232520 (MiZeroLargePages.c)
 *     MiGetPagesToZero @ 0x14054FD4C (MiGetPagesToZero.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140397CF0 (MiGetUltraHugeAlreadyActive.c)
 *     MiDecrementHugeContext @ 0x140397E18 (MiDecrementHugeContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14039A6C4 (MiInitializeNewUltraHugeContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  __int64 Pool; // rax
  void *v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // r15d
  unsigned __int64 v15; // rbp
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a2 + 260) >> byte_140C4DE8C;
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
    Pool = MiAllocatePool(64LL, 200LL, 1967679821LL, v8);
    v11 = (void *)Pool;
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
            v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v29 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v29;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      return 0LL;
    }
    v12 = MiUnlinkNodeLargePages(a1, 0, 1, v3, 4, 1, a2 + 248, 64, Pool);
    if ( !v12 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v13 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v23 = v22->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v20 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(v13);
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    v14 = MiInitializeNewUltraHugeContext(a2, v11, v12);
    if ( !v14 )
      MiDecrementHugeContext(v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v15 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v15);
    if ( v14 )
      return 1LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v9);
  return 1LL;
}
