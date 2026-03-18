/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14029E260
 * Callers:
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcChargeDirtyPagesInternal @ 0x14029E120 (CcChargeDirtyPagesInternal.c)
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     CcIsWriteBehindThreadpoolAtLowPriority @ 0x1402768B4 (CcIsWriteBehindThreadpoolAtLowPriority.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14029D344 (CcAdjustWriteBehindThreadPool.c)
 *     CcGetCurrentNumaNode @ 0x14029E3A0 (CcGetCurrentNumaNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  __int64 result; // rax
  char v3; // si
  __int64 v6; // rcx
  __int64 CurrentNumaNode; // rbp
  unsigned __int64 OldIrql; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  result = 0LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(_BYTE)dword_140D051DC && (unsigned int)CcNumberNumaNodes <= 1 && CcEnablePerVolumeLazyWriter != 1 )
  {
    CurrentNumaNode = CcGetCurrentNumaNode(a1, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 768), &LockHandle);
    if ( *(_DWORD *)(a1 + 808) )
    {
      if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) )
      {
        v3 = 1;
        CcAdjustWriteBehindThreadPool(v10);
      }
    }
    else if ( *(_QWORD *)(a1 + 992) > 0x2000uLL || a2 )
    {
      if ( CcIsWriteBehindThreadpoolAtLowPriority(a1) )
      {
        CcAdjustWriteBehindThreadPool(v9);
        v3 = 1;
      }
    }
    else if ( !*(_DWORD *)(CurrentNumaNode + 188)
           && !*(_DWORD *)(CurrentNumaNode + 176)
           && *(_QWORD *)(CurrentNumaNode + 104) == CurrentNumaNode + 104
           && *(_QWORD *)(CurrentNumaNode + 120) == CurrentNumaNode + 120 )
    {
      CcAdjustWriteBehindThreadPool(a1);
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
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v3 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result < 2u )
        return CcBoostLowPriorityWorkerThread(a1, 0LL);
    }
  }
  return result;
}
