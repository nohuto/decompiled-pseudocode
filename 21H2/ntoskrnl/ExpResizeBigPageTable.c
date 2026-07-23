/*
 * XREFs of ExpResizeBigPageTable @ 0x140374E10
 * Callers:
 *     ExpAddTagForBigPages @ 0x140346B10 (ExpAddTagForBigPages.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExGetHeapFromVA @ 0x1403059CC (ExGetHeapFromVA.c)
 *     RtlpHpFreeHeap @ 0x14034CE50 (RtlpHpFreeHeap.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExpResizeBigPageTable(char a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rcx
  int v5; // r13d
  _QWORD *v6; // r15
  int *v7; // r12
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  void *HeapPages; // rax
  ULONG_PTR v13; // rbx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  int v23; // r12d
  __int64 v24; // r8
  unsigned int v25; // esi
  __int64 v26; // rdi
  int v27; // r13d
  __int64 v28; // rbx
  int v29; // eax
  __int64 result; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // ecx
  unsigned __int64 OldIrql; // rbx
  __int64 HeapFromVA; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  bool v42; // zf
  __int64 v43; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v46; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0LL;
  v46 = 0LL;
  *a3 = 0LL;
  v5 = a1 & 0x20;
  if ( v5 )
  {
    v6 = *(_QWORD **)(qword_140C4DE20 + 992);
    v7 = (int *)(qword_140C4DE20 + 864);
    v8 = *(_QWORD *)(qword_140C4DE20 + 1000);
    if ( !PoolBigPageTableSize )
      return 0LL;
  }
  else
  {
    v6 = (_QWORD *)PoolBigPageTable;
    v7 = &ExpPoolBigEntriesInUse;
    v8 = PoolBigPageTableSize;
  }
  if ( v8 )
  {
    v9 = 2 * v8;
    if ( 2 * v8 <= v8 )
      return 0LL;
    v4 = 0xAAAAAAAAAAAAAAALL;
    if ( v9 > 0xAAAAAAAAAAAAAAALL )
      return 0LL;
    v10 = 48 * v8;
  }
  else
  {
    v9 = 512LL;
    v10 = 12288LL;
  }
  if ( v10 >= v10 + 4095 )
    return 0LL;
  v11 = (v10 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  HeapPages = (void *)ExAllocateHeapPages(v4, v11);
  v13 = (ULONG_PTR)HeapPages;
  if ( !HeapPages )
    return 0LL;
  memset(HeapPages, 0, v11);
  v14 = (_QWORD *)v13;
  do
  {
    *v14 = 1LL;
    v14 += 3;
  }
  while ( v14 != (_QWORD *)(v13 + 24 * v9) );
  v15 = v6;
  v16 = &v6[3 * v8];
  v17 = v9 - 1;
  if ( v6 != v16 )
  {
    do
    {
      if ( (*v15 & 1) == 0 )
      {
        v31 = v17 & (((40543 * (unsigned __int64)(unsigned int)(*v15 >> 12)) >> 32) ^ (40543 * (unsigned int)(*v15 >> 12)));
        if ( (*(_BYTE *)(v13 + 24 * v31) & 1) == 0 )
        {
          do
          {
            v33 = 0LL;
            if ( (int)v31 + 1 <= v17 )
              v33 = (unsigned int)(v31 + 1);
            LODWORD(v31) = v33;
          }
          while ( (*(_BYTE *)(v13 + 24 * v33) & 1) == 0 );
          LODWORD(v31) = v33;
        }
        v32 = 3LL * (unsigned int)v31;
        *(_OWORD *)(v13 + 8 * v32) = *(_OWORD *)v15;
        *(_QWORD *)(v13 + 8 * v32 + 16) = v15[2];
      }
      v15 += 3;
    }
    while ( v15 != v16 );
  }
  if ( v7 != &ExpPoolBigEntriesInUse )
  {
    if ( ExpPoolBigEntriesInUse != PoolBigPageTableSize || (unsigned int)ExpResizeBigPageTable(512LL, 1LL, &v46) )
    {
      v18 = PoolBigPageTable;
      v17 = PoolBigPageTableSize - 1;
      goto LABEL_16;
    }
    HeapFromVA = ExGetHeapFromVA(v13);
    RtlpHpFreeHeap(HeapFromVA, v13, 0);
    return 0LL;
  }
  v18 = v13;
LABEL_16:
  v19 = v17 & (((40543 * (unsigned __int64)(unsigned int)(v13 >> 12)) >> 32) ^ (40543 * (unsigned int)(v13 >> 12)));
  if ( (*(_QWORD *)(v18 + 24 * v19) & 1) == 0 )
  {
    do
    {
      v34 = 0LL;
      if ( (int)v19 + 1 <= v17 )
        v34 = (unsigned int)(v19 + 1);
      LODWORD(v19) = v34;
    }
    while ( (*(_QWORD *)(v18 + 24 * v34) & 1) == 0 );
  }
  v20 = 3LL * (unsigned int)v19;
  strcpy((char *)(v18 + 8 * v20 + 8), "Pool");
  *(_QWORD *)(v18 + 8 * v20) = v13;
  v21 = (unsigned __int8)*(_DWORD *)(v18 + 8 * v20 + 12) | 0x20000;
  *(_QWORD *)(v18 + 8 * v20 + 16) = v11;
  *(_DWORD *)(v18 + 8 * v20 + 12) = v21;
  _InterlockedIncrement(&ExpPoolBigEntriesInUse);
  if ( v5 )
  {
    *(_QWORD *)(qword_140C4DE20 + 992) = v13;
    *(_QWORD *)(qword_140C4DE20 + 1000) = v9;
  }
  else
  {
    PoolBigPageTable = v13;
    PoolBigPageTableSize = v9;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v22 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v22 = EtwTracePool(3616, 512, 1819242320, v13, v11);
  LODWORD(v22) = KeGetPcr()->Prcb.Number;
  v23 = PoolTrackTableMask;
  v24 = PoolTrackTableSize;
  v25 = PoolTrackTableMask & 0x40DEDA5;
  v43 = PoolTrackTableSize;
  v26 = (__int64)*(&ExPoolTagTables + v22);
  v27 = PoolTrackTableMask & 0x40DEDA5;
  do
  {
    while ( 1 )
    {
      v28 = 56LL * v25;
      v29 = *(_DWORD *)(v28 + v26);
      if ( v29 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v28 + v26 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + v26 + 8), v11);
        goto LABEL_26;
      }
      if ( v29 )
        break;
      v35 = *(_DWORD *)(v28 + PoolTrackTable);
      if ( v35 )
      {
        *(_DWORD *)(v28 + v26) = v35;
      }
      else
      {
        if ( v25 == v24 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
        if ( !*(_DWORD *)(v28 + PoolTrackTable) )
        {
          *(_DWORD *)(v28 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v28 + v26) = 1819242320;
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
              v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v42 = (v41 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v41;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        v24 = v43;
      }
    }
    v25 = v23 & (v25 + 1);
  }
  while ( v25 != v27 );
  ExpInsertPoolTrackerExpansion(0x6C6F6F50u, v11, 0x200u);
LABEL_26:
  if ( v6 )
    *v6 = v46;
  else
    v6 = v46;
  result = 1LL;
  *a3 = v6;
  return result;
}
