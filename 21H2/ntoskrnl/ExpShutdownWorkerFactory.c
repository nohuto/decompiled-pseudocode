/*
 * XREFs of ExpShutdownWorkerFactory @ 0x1402D3E44
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1402D3310 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14074F4B0 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KiDeregisterObjectWaitBlock @ 0x140232968 (KiDeregisterObjectWaitBlock.c)
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D56F4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
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
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v2 = (KSPIN_LOCK *)*((_QWORD *)Object + 2);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  v3 = (PVOID *)(Object + 72);
  v4 = 4LL;
  *((_DWORD *)Object + 102) = *((_DWORD *)Object + 102) & 0xFFFFFFF8 | 4;
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
  if ( (*((_DWORD *)Object + 102) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( *((char **)Object + 74) == Object + 424
    && KiDeregisterObjectWaitBlock((volatile signed __int32 *)Object + 106, (__int64 *)Object + 70) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v5 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 95) = 0;
  *((_DWORD *)Object + 94) = 0;
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
  result = KeCancelTimer2(Object + 424, 0LL);
  if ( v6 )
    return IoSetIoCompletionEx3(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0LL,
             0LL,
             0LL,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0,
             0);
  return result;
}
