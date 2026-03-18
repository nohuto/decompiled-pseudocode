/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x1405B3D90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1403606C4 (PsDereferencePartition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeZeroPagesNeeded @ 0x14045C75A (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      v4 = MiFreeZeroPagesNeeded(a1, i, j);
      if ( v4 )
        MiPruneStandbyPages(a1, i, j, v4);
    }
  }
  v5 = *(_QWORD *)(a1 + 176);
  KeAcquireInStackQueuedSpinLock(&qword_140C51F00, &LockHandle);
  *(_QWORD *)(a1 + 16080) = 0LL;
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
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PsDereferencePartition(v5);
}
