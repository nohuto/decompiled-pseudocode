/*
 * XREFs of MiUpdatePartitionMemory @ 0x1405636B4
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408DB6E0 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiDereferencePageRunsEx @ 0x140241A18 (MiDereferencePageRunsEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputeNodeMemory @ 0x1407CD210 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  volatile LONG *v3; // r12
  KIRQL v7; // al
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = (volatile LONG *)(a1 + 200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  v11 = v7;
  *(_QWORD *)(a1 + 96) = v9;
  KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
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
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v21 = v19->SchedulerAssist;
        v17 = (v20 & v21[5]) == 0;
        v21[5] &= v20;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)v19);
      }
    }
  }
  __writecr8(v11);
  MiComputeNodeMemory(a1, a3);
  if ( v8 )
    MiDereferencePageRunsEx(v8, 0);
  if ( v10 )
    MiDereferencePageRunsEx(v10, 0);
}
