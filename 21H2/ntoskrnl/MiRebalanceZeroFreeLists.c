/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x140551440
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1403239F4 (MiNodeFreeZeroPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetNodeStandbyPageCount @ 0x140550998 (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(4544LL * i + a1[2], j, 4096) < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount((__int64)a1, i, j) >= 0x1000
        && v5 != 1024 )
      {
        MiPruneStandbyPages((__int64)a1, i, v4, 1024 - v5);
      }
    }
  }
  v6 = a1[22];
  KeAcquireInStackQueuedSpinLock(&qword_140C4E640, &LockHandle);
  a1[790] = 0LL;
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
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PsDereferencePartition(v6);
}
