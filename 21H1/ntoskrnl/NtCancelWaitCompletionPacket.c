/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1402E24E0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     IopCancelWaitCompletionPacket @ 0x1402E266C (IopCancelWaitCompletionPacket.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PVOID v3; // rsi
  KSPIN_LOCK *v4; // r14
  KIRQL v5; // al
  KSPIN_LOCK *v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r9
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  v2 = result;
  if ( result < 0 )
    return result;
  v3 = Object;
  v4 = (KSPIN_LOCK *)((char *)Object + 96);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v6 = (KSPIN_LOCK *)*((_QWORD *)v3 + 11);
  v7 = v5;
  if ( v6 )
    ObfReferenceObjectWithTag(*((PVOID *)v3 + 11), 0x746C6644u);
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v3 = Object;
      }
    }
  }
  __writecr8(v7);
  if ( !v6 )
    return -1073741536;
  KeAcquireInStackQueuedSpinLock(v6 + 8, &LockHandle);
  v8 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( !*((_BYTE *)v3 + 104) )
  {
    v2 = -1073741536;
LABEL_13:
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v15 = KeGetCurrentIrql();
        if ( v15 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v15 >= 2u )
        {
          v16 = KeGetCurrentPrcb();
          v17 = v16->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = (v18 & v17[5]) == 0;
          v17[5] &= v18;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
    }
    __writecr8(v8);
    goto LABEL_8;
  }
  if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
  {
    if ( *((_BYTE *)v3 + 104) )
      v2 = 259;
    goto LABEL_13;
  }
LABEL_8:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v14 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v2;
}
