/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14026DC18
 * Callers:
 *     NtShutdownWorkerFactory @ 0x140248750 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14066AD30 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeCancelTimer2 @ 0x14026DD80 (KeCancelTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x1402A77A0 (KeDeregisterObjectNotification.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(_QWORD *Object)
{
  KSPIN_LOCK *v2; // rcx
  PVOID *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  char v6; // si
  unsigned __int64 OldIrql; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)Object[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = (PVOID *)(Object + 9);
  v4 = 4LL;
  *((_DWORD *)Object + 78) = Object[39] & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v3 )
    {
      ObfDereferenceObjectWithTag(*v3, 0x746C6644u);
      *v3 = 0LL;
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (Object[39] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( (_QWORD *)Object[62] == Object + 41 && (unsigned __int8)KeDeregisterObjectNotification(Object + 41) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *(_BYTE *)(Object[2] + 33LL) = 1;
  v5 = Object[2];
  *((_DWORD *)Object + 71) = 0;
  *((_DWORD *)Object + 70) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
  {
    v6 = 0;
  }
  else
  {
    *(_BYTE *)(v5 + 32) = 1;
    v6 = 1;
  }
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
  result = KeCancelTimer2(Object + 41, 0LL);
  if ( v6 )
    return IoSetIoCompletionEx2(*(_QWORD *)(Object[2] + 8LL), 0, 0, 0, 0LL, 0, *(_QWORD *)(Object[2] + 16LL), 0);
  return result;
}
