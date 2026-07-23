/*
 * XREFs of PoHandleIrp @ 0x1403987D4
 * Callers:
 *     IopPoHandleIrp @ 0x140398784 (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     PoDeviceAcquireIrp @ 0x14037C3B4 (PoDeviceAcquireIrp.c)
 *     PoDeviceReleaseIrp @ 0x14037CAE4 (PoDeviceReleaseIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1403988F4 (PopDispatchQuerySetIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 DeviceObject; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  _DWORD *v8; // rdi
  int v9; // eax
  _DWORD *v10; // rcx
  char v11; // si
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DeviceObject = (__int64)CurrentStackLocation->DeviceObject;
  v6 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v7 = *(_QWORD *)(v6 + 40);
  if ( v7 )
  {
    PoDeviceReleaseIrp((__int64)Irp, *(_BYTE *)(v6 + 184), v7);
    v8 = (_DWORD *)(DeviceObject + 48);
    v9 = *(_DWORD *)(DeviceObject + 48);
    v10 = (_DWORD *)(DeviceObject + 48);
    if ( (v9 & 0x8000) == 0 && ((v9 & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = (_DWORD *)(DeviceObject + 48);
  }
  v8 = v10;
  v11 = 1;
  if ( (*v10 & 0x8000) != 0 )
  {
LABEL_5:
    PoDeviceAcquireIrp((__int64)Irp, CurrentStackLocation->MinorFunction, DeviceObject);
    if ( !v11 )
      return v11;
  }
  if ( (*v8 & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *a2 = 0;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
    PopDispatchQuerySetIrp(Irp);
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
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    *a2 = 259;
  }
  return v11;
}
