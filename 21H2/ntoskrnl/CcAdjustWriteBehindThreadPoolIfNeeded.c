/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140336330
 * Callers:
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x140336210 (CcChargeDirtyPages.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B93A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x140381928 (CcAdjustWriteBehindThreadPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  int v2; // eax
  char v3; // si
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v2) = 0;
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
    LOBYTE(v2) = KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = KeGetCurrentIrql();
        if ( (unsigned __int8)v2 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v2 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v2 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v9 = (v2 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v2;
          if ( v9 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v3 )
    {
      LOBYTE(v2) = KeGetCurrentIrql();
      if ( (unsigned __int8)v2 < 2u )
        LOBYTE(v2) = CcBoostLowPriorityWorkerThread(a1, 0LL);
    }
  }
  return v2;
}
