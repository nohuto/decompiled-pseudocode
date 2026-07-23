/*
 * XREFs of ExInitializePoolTracker @ 0x140A69AF4
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1403C3D54 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExGenRandom @ 0x1402D1110 (ExGenRandom.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 *     MmGetNumberOfPhysicalPages @ 0x140644560 (MmGetNumberOfPhysicalPages.c)
 *     ExpSeedHotTags @ 0x140A69D80 (ExpSeedHotTags.c)
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
  size_t v9; // r8
  unsigned __int64 v10; // rbp
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ecx
  unsigned int v14; // edi
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // r13
  __int64 v21; // rsi
  int v22; // r15d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v24; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v3 = ((unsigned int)ExGenRandom(0) | v2) ^ v1;
  v4 = 4096LL;
  if ( !v3 )
    v3 = 1LL;
  _BitScanReverse((unsigned int *)&v5, KeLargestCacheLine);
  ExpPoolQuotaCookie = v3;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 3) = 1 << v5;
  if ( (unsigned int)(1 << v5) < 0x10 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 3) = 16;
  }
  else if ( (unsigned int)(1 << v5) > 0x1000 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 3) = 4096;
  }
  if ( PoolTrackTableSize )
  {
    v4 = 64LL;
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v17, PoolTrackTableSize);
      v4 = 1LL << v17;
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
    if ( v4 + 1 > 0x492492492492492LL )
      goto LABEL_32;
    HeapPages = (void *)ExAllocateHeapPages();
    PoolTrackTable = (__int64)HeapPages;
    v7 = HeapPages;
    if ( HeapPages )
      break;
    v4 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 3221225626LL;
LABEL_32:
    v4 >>= 1;
  }
  ExPoolTagTables = HeapPages;
  v8 = PoolTrackTableSize - 1;
  v9 = 56 * ++PoolTrackTableSize;
  PoolTrackTableMask = v8;
  memset(v7, 0, v9);
  ExpSeedHotTags();
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExpTaggedPoolLock = 0LL;
  v10 = (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v18 = DWORD1(PerfGlobalGroupMask[0]);
  if ( (BYTE4(PerfGlobalGroupMask[0]) & 0x41) != 0 )
    EtwTracePool(0xE20u, 512, 0x6C6F6F50u, PoolTrackTable, (56 * PoolTrackTableSize + 4095) & 0xFFFFFFFFFFFFF000uLL);
  LODWORD(v18) = KeGetPcr()->Prcb.Number;
  v19 = PoolTrackTableMask;
  v20 = PoolTrackTableSize;
  v14 = PoolTrackTableMask & 0x40DEDA5;
  v21 = (__int64)*(&ExPoolTagTables + v18);
  v22 = PoolTrackTableMask & 0x40DEDA5;
  while ( 1 )
  {
    v11 = 56LL * v14;
    v12 = *(_DWORD *)(v11 + v21);
    if ( v12 == 1819242320 )
      break;
    if ( v12 )
      goto LABEL_16;
    v13 = *(_DWORD *)(v11 + PoolTrackTable);
    if ( v13 )
    {
      *(_DWORD *)(v11 + v21) = v13;
      continue;
    }
    if ( v14 == v20 - 1 )
    {
LABEL_16:
      v14 = v19 & (v14 + 1);
      if ( v14 == v22 )
      {
        ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v10, 0x200u);
        return 0LL;
      }
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
      if ( !*(_DWORD *)(v11 + PoolTrackTable) )
      {
        *(_DWORD *)(v11 + PoolTrackTable) = 1819242320;
        *(_DWORD *)(v11 + v21) = 1819242320;
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
            v24 = KeGetCurrentPrcb();
            SchedulerAssist = v24->SchedulerAssist;
            v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v27 = (v26 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v26;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v24);
          }
        }
      }
      __writecr8(OldIrql);
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v11 + v21 + 16));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + v21 + 8), v10);
  return 0LL;
}
