/*
 * XREFs of MiInitializeHugePfnDatabase @ 0x1405335E0
 * Callers:
 *     MiHotAddHugeRange @ 0x1408C6B18 (MiHotAddHugeRange.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeHugePfnDatabase()
{
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v4; // edx
  bool v5; // zf
  __int64 v6; // rcx
  PVOID Pool; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  __int64 result; // rax
  PVOID v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C4E6C0, &LockHandle);
  if ( qword_140C4E6B0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_35;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_35;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( CurrentIrql < 2u )
      goto LABEL_35;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    v4 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v4 & SchedulerAssist[5]) == 0;
    SchedulerAssist[5] &= v4;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)CurrentPrcb;
LABEL_34:
    KiRemoveSystemWorkPriorityKick(v6);
LABEL_35:
    result = 1LL;
LABEL_36:
    __writecr8(OldIrql);
    return result;
  }
  Pool = MiAllocatePool(64, 0x8000uLL, 0x7048694Du);
  if ( !Pool )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = v9->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v5 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick((__int64)v9);
        }
      }
    }
    result = 0LL;
    goto LABEL_36;
  }
  v13 = MiAllocatePool(64, 0x200000uLL, 0x7048694Du);
  if ( v13 )
  {
    qword_140C4E6A0 = 0x40000LL;
    qword_140C4E6A8 = (__int64)Pool;
    qword_140C4E6B0 = (__int64)v13;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_35;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_35;
    v19 = KeGetCurrentIrql();
    if ( v19 > 0xFu )
      goto LABEL_35;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_35;
    if ( v19 < 2u )
      goto LABEL_35;
    v20 = KeGetCurrentPrcb();
    v21 = v20->SchedulerAssist;
    v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v5 = (v22 & v21[5]) == 0;
    v21[5] &= v22;
    if ( !v5 )
      goto LABEL_35;
    v6 = (__int64)v20;
    goto LABEL_34;
  }
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
        v5 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  __writecr8(v14);
  ExFreePoolWithTag(Pool, 0);
  return 0LL;
}
