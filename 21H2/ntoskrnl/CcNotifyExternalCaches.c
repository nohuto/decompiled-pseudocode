/*
 * XREFs of CcNotifyExternalCaches @ 0x140392674
 * Callers:
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     CcCalculatePagesToWrite @ 0x1403021B4 (CcCalculatePagesToWrite.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcNotifyExternalCaches(unsigned int a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rdi
  __int64 *i; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v2 = *((_QWORD *)PspSystemPartition + 1);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 128));
  v4 = (_QWORD *)(v2 + 640);
  v5 = CcCalculatePagesToWrite(v2, a1, v2 + 640, (unsigned __int64 *)(v2 + 664), 0);
  if ( v5 == 0xFFFFFFFFLL )
  {
    LODWORD(v6) = 100;
  }
  else if ( *v4 )
  {
    v6 = 100 * (unsigned __int64)v5 / *v4;
  }
  else
  {
    LODWORD(v6) = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (_DWORD)v6 )
  {
    for ( i = (__int64 *)CcExternalCacheList; i != &CcExternalCacheList; i = (__int64 *)*i )
    {
      v9 = *(i - 3);
      if ( v9 )
        ((void (__fastcall *)(__int64 *, unsigned __int64, _QWORD))*(i - 4))(
          i - 4,
          v9 * (unsigned __int64)(unsigned int)v6 / 0x64,
          a1);
    }
  }
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  return result;
}
