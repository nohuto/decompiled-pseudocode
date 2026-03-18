/*
 * XREFs of IopInsertIrpInCompletionQueue @ 0x140294F40
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140294E84 (IopCompleteIrpInFileObjectList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     IopDropIrp @ 0x14038D720 (IopDropIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopInsertIrpInCompletionQueue(PIRP Irp, __int64 a2, char a3)
{
  unsigned int v3; // ebp
  __int64 *v4; // rax
  char v6; // si
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
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
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v6 )
    return IopDropIrp(Irp, (ULONG_PTR)Irp->Tail.Overlay.OriginalFileObject);
  return result;
}
