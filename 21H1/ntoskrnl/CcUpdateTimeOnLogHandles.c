/*
 * XREFs of CcUpdateTimeOnLogHandles @ 0x1403119C8
 * Callers:
 *     CcLazyWriteScan @ 0x140232E2C (CcLazyWriteScan.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateTimeOnLogHandles(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // rdi
  int v4; // eax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE v10; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v10, 0, sizeof(v10));
  v2 = MEMORY[0xFFFFF78000000320];
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = CcVolumeCacheMapList; (__int64 *)i != &CcVolumeCacheMapList; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 168) & 1) != 0 )
    {
      v10.LockQueue.Next = 0LL;
      v10.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 128);
      KxAcquireQueuedSpinLock((__int64)&v10, (volatile __int64 *)(a1 + 128));
      v4 = *(_DWORD *)(i + 168);
      if ( (v4 & 1) != 0 )
      {
        *(_QWORD *)(i + 160) = v2;
        *(_DWORD *)(i + 168) = v4 & 0xFFFFFFFE;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v10);
    }
  }
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
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
