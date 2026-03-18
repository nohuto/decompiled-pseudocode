/*
 * XREFs of ExInitializePoolTracker @ 0x140B0ABEC
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403C3FA0 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     ExpPlFindLimitEntry @ 0x1402501E8 (ExpPlFindLimitEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406AD260 (MmGetNumberOfPhysicalPages.c)
 *     ExpSeedHotTags @ 0x140B0AEE8 (ExpSeedHotTags.c)
 */

__int64 ExInitializePoolTracker()
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // ecx
  void *HeapPages; // rax
  void *v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // r15d
  __int64 v16; // rbx
  int v17; // eax
  int v18; // edx
  __int64 v20; // rcx
  __int64 LimitEntry; // rax
  signed __int64 v22; // r14
  bool v23; // zf
  unsigned __int64 v24; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v27; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  signed __int64 v30; // rsi
  unsigned __int64 MoreLimit; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = ((unsigned int)ExGenRandom(0) | v2) ^ v1;
  v4 = 4096LL;
  if ( !v3 )
    v3 = 1LL;
  _BitScanReverse((unsigned int *)&v5, KeLargestCacheLine);
  ExpPoolQuotaCookie = v3;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 1 << v5;
  if ( (unsigned int)(1 << v5) < 0x10 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 16;
  }
  else if ( (unsigned int)(1 << v5) > 0x1000 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) = 4096;
  }
  if ( PoolTrackTableSize )
  {
    v4 = 64LL;
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v24, PoolTrackTableSize);
      v4 = 1LL << v24;
    }
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) > 0x10000 )
      goto LABEL_8;
    v4 = 512LL;
  }
  for ( PoolTrackTableSize = v4; ; PoolTrackTableSize = v4 )
  {
LABEL_8:
    if ( v4 + 1 > 0x333333333333333LL )
      goto LABEL_36;
    HeapPages = (void *)ExAllocateHeapPages();
    PoolTrackTable = (__int64)HeapPages;
    v7 = HeapPages;
    if ( HeapPages )
      break;
    v4 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 3221225626LL;
LABEL_36:
    v4 >>= 1;
  }
  ExPoolTagTables = HeapPages;
  v8 = PoolTrackTableSize++ - 1;
  PoolTrackTableMask = v8;
  memset(v7, 0, 80 * PoolTrackTableSize);
  ExpSeedHotTags();
  ExpTaggedPoolLock = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = (80 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v10 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (80 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v10) = KeGetPcr()->Prcb.Number;
  v11 = PoolTrackTableMask;
  v12 = PoolTrackTableSize;
  v13 = PoolTrackTableMask & 0x40DEDA5;
  v14 = (__int64)*(&ExPoolTagTables + v10);
  v15 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v16 = 10 * v13;
    v17 = *(_DWORD *)(v14 + 80 * v13);
    if ( v17 == 1819242320 )
      break;
    if ( !v17 )
    {
      v18 = *(_DWORD *)(PoolTrackTable + 80 * v13);
      if ( v18 )
      {
        *(_DWORD *)(v14 + 80 * v13) = v18;
        v20 = *(_QWORD *)(PoolTrackTable + 80 * v13 + 72);
        if ( v20 )
          *(_QWORD *)(v14 + 80 * v13 + 72) = v20;
        continue;
      }
      if ( (unsigned int)v13 != v12 - 1 )
      {
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v13) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320);
          *(_QWORD *)(PoolTrackTable + 80 * v13 + 72) = LimitEntry;
          *(_QWORD *)(v14 + 80 * v13 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v13) = 1819242320;
          *(_DWORD *)(v14 + 80 * v13) = 1819242320;
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
              v27 = KeGetCurrentPrcb();
              SchedulerAssist = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v23 = (v29 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v29;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick((__int64)v27);
            }
          }
        }
        __writecr8(OldIrql);
        continue;
      }
    }
    v13 = v11 & (unsigned int)(v13 + 1);
    if ( (_DWORD)v13 == v15 )
    {
      ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v9, 0x200u);
      return 0LL;
    }
  }
  _InterlockedAdd64((volatile signed __int64 *)(v14 + 80 * v13 + 16), 1uLL);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 80 * v13 + 8), v9);
  v23 = *(_QWORD *)(v14 + 80 * v13 + 72) == 0LL;
LABEL_27:
  if ( !v23 )
  {
    v30 = *(_QWORD *)(v14 + 8 * v16 + 64);
    while ( (v30 & 1) == 0 )
    {
      if ( v30 >= v22 )
        break;
      MoreLimit = ExpTrackTableGetMoreLimit(*(_QWORD *)(v14 + 8 * v16 + 72), v9, 1);
      if ( !MoreLimit )
        break;
      if ( MoreLimit == 1 )
      {
        v23 = v30 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8 * v16 + 64), 1LL, v30);
        goto LABEL_27;
      }
      v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8 * v16 + 64), MoreLimit);
      v22 = *(_QWORD *)(v14 + 8 * v16 + 8);
    }
  }
  return 0LL;
}
