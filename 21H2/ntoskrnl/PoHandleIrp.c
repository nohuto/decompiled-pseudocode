/*
 * XREFs of PoHandleIrp @ 0x1403A379C
 * Callers:
 *     IopPoHandleIrp @ 0x1403A374C (IopPoHandleIrp.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDeviceReleaseIrp @ 0x1403A38BC (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1403A39B8 (PoDeviceAcquireIrp.c)
 *     PopDispatchQuerySetIrp @ 0x1403A3B18 (PopDispatchQuerySetIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PoHandleIrp(PIRP Irp, _DWORD *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _DWORD *v3; // r14
  PDEVICE_OBJECT DeviceObject; // rbp
  __int64 v6; // rax
  __int64 v7; // r8
  ULONG *p_Flags; // rdi
  ULONG Flags; // eax
  ULONG *v10; // rcx
  char v11; // si
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DeviceObject = CurrentStackLocation->DeviceObject;
  v6 = *((_QWORD *)&Irp->Tail.CompletionKey + 9 * Irp->StackCount + 10);
  v7 = *(_QWORD *)(v6 + 40);
  if ( v7 )
  {
    LOBYTE(a2) = *(_BYTE *)(v6 + 184);
    PoDeviceReleaseIrp(Irp, a2, v7);
    p_Flags = &DeviceObject->Flags;
    Flags = DeviceObject->Flags;
    v10 = &DeviceObject->Flags;
    if ( (Flags & 0x8000) == 0 && ((Flags & 0x2000) == 0 || KeGetCurrentIrql() != 2) )
    {
      v11 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = &DeviceObject->Flags;
  }
  p_Flags = v10;
  v11 = 1;
  if ( (*v10 & 0x8000) != 0 )
  {
LABEL_5:
    LOBYTE(a2) = CurrentStackLocation->MinorFunction;
    PoDeviceAcquireIrp(Irp, a2, DeviceObject);
    if ( !v11 )
      return v11;
  }
  if ( (*p_Flags & 0x8000) != 0 )
  {
    Irp->IoStatus.Status = 0;
    Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(Irp, 0);
    *v3 = 0;
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
    *v3 = 259;
  }
  return v11;
}
