/*
 * XREFs of MiMakePartitionActive @ 0x1402970F8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     MiEnablePartitionMappedWrites @ 0x1406AA564 (MiEnablePartitionMappedWrites.c)
 *     MiInsertPageFileInList @ 0x1407B74F0 (MiInsertPageFileInList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSetSlabAllocatorPolicy @ 0x1403B75C8 (MiSetSlabAllocatorPolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r11
  int v19; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
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
  if ( (unsigned int)MiChargeCommit(a1, 160LL, 0LL) )
  {
    *(_DWORD *)(a1 + 4) &= ~0x20u;
    *(_QWORD *)(a1 + 6256) = 160LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v16 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && LockHandle.OldIrql <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v15 = v18->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v8 = (v19 & v15[5]) == 0;
          v14 = (unsigned int)v19 & v15[5];
          v15[5] = v14;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v16);
    MiReturnCommit(a1, 160LL, v14, v15);
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
