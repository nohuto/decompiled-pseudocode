/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080
 * Callers:
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x14031DF20 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140381478 (CcAdjustWriteBehindThreadPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  unsigned __int64 result; // rax
  char v3; // si
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(_BYTE)dword_140CFB19C )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    if ( *(_DWORD *)(a1 + 356) )
    {
      if ( *(_DWORD *)(a1 + 960) < *(_DWORD *)(a1 + 200) )
      {
        v3 = 1;
        CcAdjustWriteBehindThreadPool(a1, 0LL);
      }
    }
    else if ( *(_QWORD *)(a1 + 640) > 0x2000uLL || a2 )
    {
      if ( *(_DWORD *)(a1 + 960) < *(_DWORD *)(a1 + 200) )
      {
        CcAdjustWriteBehindThreadPool(a1, 0LL);
        v3 = 1;
      }
    }
    else if ( !*(_DWORD *)(a1 + 368)
           && !*(_DWORD *)(a1 + 344)
           && *(_QWORD *)(a1 + 256) == a1 + 256
           && *(_QWORD *)(a1 + 288) == a1 + 288 )
    {
      *(_DWORD *)(a1 + 960) = 1;
      if ( *(_BYTE *)(a1 + 776) )
        *(_BYTE *)(a1 + 776) = 0;
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
    if ( v3 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result < 2u )
        return (unsigned __int64)CcBoostLowPriorityWorkerThread(a1, 0LL);
    }
  }
  return result;
}
