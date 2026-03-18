/*
 * XREFs of IopInsertIrpInCompletionQueue @ 0x140311870
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1403117B0 (IopCompleteIrpInFileObjectList.c)
 * Callees:
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopInsertIrpInCompletionQueue(PIRP Irp, __int64 a2, char a3)
{
  unsigned int v3; // esi
  __int64 *v4; // rax
  char v6; // bp
  __int64 v7; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v4 = *(__int64 **)(a2 + 176);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = *v4;
  Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v4[1];
  Irp->Tail.Overlay.PacketType = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 64), &LockHandle);
  Irp->Flags |= 0x10000u;
  if ( *(_BYTE *)(v7 + 72) )
    v6 = 1;
  else
    KeInsertQueueEx(v7, &Irp->Tail.CompletionKey + 6, v3, 0LL);
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
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v6 )
    IopDropIrp(Irp, (ULONG_PTR)Irp->Tail.Overlay.OriginalFileObject);
}
