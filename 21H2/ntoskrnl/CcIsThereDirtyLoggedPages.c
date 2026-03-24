/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x1402B19A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // si
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v16, 0, sizeof(v16));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v6 = (__int64 *)CcVolumeCacheMapList;
  v7 = *((_QWORD *)PspSystemPartition + 1);
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v8 = v6 - 2;
      if ( *(v6 - 1) == a1 )
        break;
      v6 = (__int64 *)*v6;
      v8 = 0LL;
    }
    while ( v6 != &CcVolumeCacheMapList );
    if ( v8 )
    {
      v16.LockQueue.Next = 0LL;
      v16.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 128);
      KxAcquireQueuedSpinLock(&v16, v7 + 128, v5);
      if ( v8[8] || *((_DWORD *)v8 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v8 + 16) + *((_DWORD *)v8 + 50);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v16);
    }
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
  return v4;
}
