/*
 * XREFs of MiMakePartitionActive @ 0x140328410
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x140643794 (MiEnablePartitionMappedWrites.c)
 *     MmCreateProcessAddressSpace @ 0x1406F0E98 (MmCreateProcessAddressSpace.c)
 *     MiInsertPageFileInList @ 0x14079F050 (MiInsertPageFileInList.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B2658 (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiMakePartitionActive(__int64 a1)
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf
  unsigned __int64 v9; // rbx
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r11
  _DWORD *v17; // r9
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E540, &LockHandle);
  if ( (*(_DWORD *)(a1 + 4) & 0x20) == 0 )
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
          v7 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit(a1, 0xA0uLL, 0) )
  {
    *(_DWORD *)(a1 + 4) &= ~0x20u;
    *(_QWORD *)(a1 + 6256) = 160LL;
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
          v8 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(v14);
    MiReturnCommit(a1, 160LL);
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      MiSetSlabAllocatorPolicy(a1);
    return 1LL;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && LockHandle.OldIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  __writecr8(v9);
  return 0LL;
}
