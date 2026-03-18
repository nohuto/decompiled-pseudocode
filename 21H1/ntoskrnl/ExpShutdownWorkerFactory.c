/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14035B4F8
 * Callers:
 *     NtShutdownWorkerFactory @ 0x14031A910 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14070AFD0 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402E2740 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x1402E2798 (KeDeregisterObjectNotification.c)
 *     KeCancelTimer2 @ 0x14035B660 (KeCancelTimer2.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
{
  KSPIN_LOCK *v2; // rcx
  __int64 v3; // r8
  _DWORD *v4; // r9
  PVOID *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  char v8; // si
  unsigned __int64 OldIrql; // rbp
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)*((_QWORD *)Object + 2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v5 = (PVOID *)(Object + 72);
  v6 = 4LL;
  *((_DWORD *)Object + 78) = *((_DWORD *)Object + 78) & 0xFFFFFFF8 | 4;
  do
  {
    if ( *v5 )
    {
      ObfDereferenceObjectWithTag(*v5, 0x746C6644u);
      *v5 = 0LL;
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( (*((_DWORD *)Object + 78) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( *((char **)Object + 62) == Object + 328
    && KeDeregisterObjectNotification((volatile signed __int32 *)Object + 82, (__int64)(Object + 464), v3, v4) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v7 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 71) = 0;
  *((_DWORD *)Object + 70) = 0;
  if ( !*(_DWORD *)(v7 + 28) || *(_BYTE *)(v7 + 32) )
  {
    v8 = 0;
  }
  else
  {
    *(_BYTE *)(v7 + 32) = 1;
    v8 = 1;
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
        v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = KeCancelTimer2(Object + 328, 0LL);
  if ( v8 )
    return IoSetIoCompletionEx2(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0);
  return result;
}
