/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140214DDC
 * Callers:
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x14021728C (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExAllocateHeapSpecialPool @ 0x1405B9FAC (ExAllocateHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140214DDC (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocateHeapPages @ 0x140375218 (ExAllocateHeapPages.c)
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwTracePool @ 0x1405A7EF4 (EtwTracePool.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  char v5; // bl
  __int64 Process; // rcx
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned int *v11; // r12
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 v18; // r14
  char *HeapPages; // rax
  char *v20; // rdi
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int64 v24; // rbx
  int v25; // ecx
  unsigned int v26; // r13d
  unsigned __int64 v27; // rbx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // r10
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v33; // zf
  unsigned __int64 v34; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  __int64 v50; // rdi
  unsigned __int64 v51; // r12
  struct _KPRCB *v52; // r9
  _DWORD *v53; // r8
  unsigned __int64 Size; // [rsp+30h] [rbp-50h]
  __int64 v55; // [rsp+38h] [rbp-48h]
  int v56; // [rsp+38h] [rbp-48h]
  __int64 v57; // [rsp+40h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v59; // [rsp+60h] [rbp-20h] BYREF
  int v62; // [rsp+D8h] [rbp+58h]
  int v63; // [rsp+D8h] [rbp+58h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a3;
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  v7 = 32LL;
  v62 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 )
  {
    v8 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableSize;
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v10 = *(_QWORD *)(Process + 1368);
    v11 = *(unsigned int **)(v10 + 976);
    v12 = *(_QWORD *)(v10 + 984);
  }
  else
  {
    v8 = PoolTrackTable;
    v9 = PoolTrackTableSize;
    v12 = PoolTrackTableExpansionSize;
    v11 = (unsigned int *)PoolTrackTableExpansion;
  }
  v13 = 0;
  if ( v12 )
  {
    v14 = 0LL;
    do
    {
      Process = v11[14 * v14];
      if ( (_DWORD)Process == a1 )
        break;
      if ( !(_DWORD)Process )
      {
        Process = 56LL * v13;
        *(unsigned int *)((char *)v11 + Process) = a1;
        break;
      }
      v14 = ++v13;
    }
    while ( v13 < v12 );
  }
  if ( v13 != v12 )
  {
    v15 = &v11[14 * v13];
    if ( (a3 & 1) != 0 )
    {
      ++*((_QWORD *)v15 + 5);
      *((_QWORD *)v15 + 4) += a2;
    }
    else
    {
      ++*((_QWORD *)v15 + 2);
      *((_QWORD *)v15 + 1) += a2;
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
          v33 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v33 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    return result;
  }
  if ( *(_DWORD *)(56 * v9 + v8 - 56) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v34 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v34);
    result = v8 + 56LL * (unsigned int)(v9 - 1);
    if ( (a3 & 1) != 0 )
    {
      v39 = 40LL;
    }
    else
    {
      v7 = 8LL;
      v39 = 16LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)(result + v39));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + v7), a2);
    return result;
  }
  v55 = 56 * v12;
  Size = (56 * v12 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v18 = Size + 4096;
  HeapPages = (char *)ExAllocateHeapPages(Process, Size + 4096);
  v20 = HeapPages;
  if ( !HeapPages )
  {
    v50 = 56LL * (unsigned int)(v9 - 1);
    *(_DWORD *)(v50 + v8) = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    v51 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v52 = KeGetCurrentPrcb();
          v53 = v52->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = ((unsigned int)result & v53[5]) == 0;
          v53[5] &= result;
          if ( v33 )
            result = KiRemoveSystemWorkPriorityKick(v52);
        }
      }
    }
    __writecr8(v51);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v50 + v8 + 40));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + v8 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v50 + v8 + 16));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v50 + v8 + 8), a2);
    }
    return result;
  }
  if ( v11 )
    memmove(HeapPages, v11, Size);
  memset(&v20[v55], 0, v18 - v55);
  if ( v62 )
  {
    v21 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    *(_QWORD *)(v21 + 976) = v20;
    *(_QWORD *)(v21 + 984) = (Size + 4096) / 0x38;
  }
  else
  {
    PoolTrackTableExpansion = v20;
    PoolTrackTableExpansionSize = (Size + 4096) / 0x38;
  }
  memset(&v59, 0, sizeof(v59));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v40 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v40 = EtwTracePool(3616, 512, 1819242320, (_DWORD)v20, v18);
  LODWORD(v40) = KeGetPcr()->Prcb.Number;
  v28 = PoolTrackTableMask;
  v30 = PoolTrackTableSize;
  v26 = PoolTrackTableMask & 0x40DEDA5;
  v56 = PoolTrackTableMask;
  v41 = (__int64)*(&ExPoolTagTables + v40);
  v29 = PoolTrackTableMask & 0x40DEDA5;
  v63 = PoolTrackTableMask & 0x40DEDA5;
  v57 = PoolTrackTableSize;
  do
  {
    while ( 1 )
    {
      v22 = 56LL * v26;
      v23 = *(_DWORD *)(v22 + v41);
      if ( v23 == 1819242320 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v22 + v41 + 16));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v41 + 8), Size + 4096);
        goto LABEL_26;
      }
      if ( v23 )
        break;
      v25 = *(_DWORD *)(v22 + PoolTrackTable);
      if ( v25 )
      {
        *(_DWORD *)(v22 + v41) = v25;
      }
      else
      {
        if ( v26 == v30 - 1 )
          break;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v59);
        if ( !*(_DWORD *)(v22 + PoolTrackTable) )
        {
          *(_DWORD *)(v22 + PoolTrackTable) = 1819242320;
          *(_DWORD *)(v22 + v41) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v59);
        v27 = v59.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v42 = KeGetCurrentIrql();
            if ( v42 <= 0xFu && v59.OldIrql <= 0xFu && v42 >= 2u )
            {
              v43 = KeGetCurrentPrcb();
              v44 = v43->SchedulerAssist;
              v45 = ~(unsigned __int16)(-1LL << (v59.OldIrql + 1));
              v33 = (v45 & v44[5]) == 0;
              v44[5] &= v45;
              if ( v33 )
                KiRemoveSystemWorkPriorityKick(v43);
            }
          }
        }
        __writecr8(v27);
        v28 = v56;
        v29 = v63;
        v30 = v57;
      }
    }
    v26 = v28 & (v26 + 1);
  }
  while ( v26 != v29 );
  ExpInsertPoolTrackerExpansion(1819242320LL, Size + 4096, 512LL);
LABEL_26:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v24 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v46 = KeGetCurrentIrql();
      if ( v46 <= 0xFu && LockHandle.OldIrql <= 0xFu && v46 >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v33 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(v47);
      }
    }
  }
  __writecr8(v24);
  if ( v11 )
    ExPoolCleanupExpansionTable((ULONG_PTR)v11);
  return ExpInsertPoolTrackerExpansion(a1, a2, a3);
}
