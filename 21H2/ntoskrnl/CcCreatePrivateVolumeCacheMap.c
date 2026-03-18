/*
 * XREFs of CcCreatePrivateVolumeCacheMap @ 0x14053BE0C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     CcDecrementPrivateVolumeUseCount @ 0x140538C04 (CcDecrementPrivateVolumeUseCount.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcFindPrivateVolumeCacheMap @ 0x14053C304 (CcFindPrivateVolumeCacheMap.c)
 *     CcInitializePrivateVolumeCacheMap @ 0x14053C908 (CcInitializePrivateVolumeCacheMap.c)
 *     CcInsertPrivateVolumeCacheMap @ 0x14053CFF4 (CcInsertPrivateVolumeCacheMap.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcCreatePrivateVolumeCacheMap(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  __int64 v5; // r15
  __int64 PrivateVolumeCacheMap; // rax
  PVOID PoolWithTag; // r14
  PVOID v9; // rax
  void *v10; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 504) + 8LL);
  PrivateVolumeCacheMap = CcFindPrivateVolumeCacheMap(a1, v5);
  if ( PrivateVolumeCacheMap )
  {
    *(_QWORD *)(a2 + 592) = PrivateVolumeCacheMap;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 288LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
  if ( PoolWithTag )
  {
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x640uLL, 0x6D566343u);
    v10 = v9;
    if ( v9 )
    {
      if ( (unsigned __int8)CcInitializePrivateVolumeCacheMap(a1, v9, PoolWithTag, a2) )
      {
        if ( !(unsigned __int8)CcInsertPrivateVolumeCacheMap(a1, *(_QWORD *)(a2 + 504), v10) )
        {
          v4 = v10;
          v10 = (void *)CcFindPrivateVolumeCacheMap(a1, v5);
        }
        *(_QWORD *)(a2 + 592) = v10;
        if ( v4 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 704), &LockHandle);
          CcDecrementPrivateVolumeUseCount((__int64)v4);
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
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          CcDeletePrivateVolumeCacheMap(v4);
        }
        return 0LL;
      }
      CcDeletePrivateVolumeCacheMap(v10);
      ExFreePoolWithTag(PoolWithTag, 0x754E6343u);
    }
  }
  return 3221225626LL;
}
