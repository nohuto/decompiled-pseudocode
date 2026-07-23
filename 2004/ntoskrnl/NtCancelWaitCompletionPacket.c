/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1402D5790
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x1402D591C (IopCancelWaitCompletionPacket.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  PVOID v4; // rsi
  KSPIN_LOCK *v5; // r14
  KIRQL v6; // al
  KSPIN_LOCK *v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v3 = result;
  if ( result < 0 )
    return result;
  v4 = Object;
  v5 = (KSPIN_LOCK *)((char *)Object + 96);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v7 = (KSPIN_LOCK *)*((_QWORD *)v4 + 11);
  v8 = v6;
  if ( v7 )
    ObfReferenceObjectWithTag(*((PVOID *)v4 + 11), 0x746C6644u);
  KxReleaseSpinLock(v5);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v4 = Object;
      }
    }
  }
  __writecr8(v8);
  if ( !v7 )
    return -1073741536;
  KeAcquireInStackQueuedSpinLock(v7 + 8, &LockHandle);
  v9 = KeAcquireSpinLockRaiseToDpc(v5);
  if ( !*((_BYTE *)v4 + 104) )
  {
    v3 = -1073741536;
LABEL_13:
    KxReleaseSpinLock(v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = v17->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v15 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
    }
    __writecr8(v9);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
  {
    if ( *((_BYTE *)v4 + 104) )
      v3 = 259;
    goto LABEL_13;
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v7, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v3;
}
