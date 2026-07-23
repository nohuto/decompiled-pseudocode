/*
 * XREFs of CcIsThereDirtyLoggedPages @ 0x14022FB50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcIsThereDirtyLoggedPages(__int64 a1, _DWORD *a2)
{
  char v4; // si
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v17, 0, sizeof(v17));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  v7 = (__int64 *)CcVolumeCacheMapList;
  v8 = *((_QWORD *)PspSystemPartition + 1);
  if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
  {
    do
    {
      v9 = v7 - 2;
      if ( *(v7 - 1) == a1 )
        break;
      v7 = (__int64 *)*v7;
      v9 = 0LL;
    }
    while ( v7 != &CcVolumeCacheMapList );
    if ( v9 )
    {
      v17.LockQueue.Next = 0LL;
      v17.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 128);
      KxAcquireQueuedSpinLock(&v17, v8 + 128, v5, v6);
      if ( v9[8] || *((_DWORD *)v9 + 50) )
      {
        if ( a2 )
          *a2 = *((_DWORD *)v9 + 16) + *((_DWORD *)v9 + 50);
        v4 = 1;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v17);
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
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
