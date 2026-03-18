/*
 * XREFs of ExpInsertPoolTrackerExpansion @ 0x140212E00
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     ExAllocateHeapSpecialPool @ 0x140641F58 (ExAllocateHeapSpecialPool.c)
 *     ExInitializePoolTracker @ 0x140B0ABEC (ExInitializePoolTracker.c)
 * Callees:
 *     ExpInsertPoolTrackerExpansion @ 0x140212E00 (ExpInsertPoolTrackerExpansion.c)
 *     ExAllocateHeapPages @ 0x140213318 (ExAllocateHeapPages.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExpPlFindLimitEntry @ 0x1402501E8 (ExpPlFindLimitEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTracePool @ 0x14062DEE4 (EtwTracePool.c)
 *     ExpTrackTableGetMoreLimit @ 0x14063BDD0 (ExpTrackTableGetMoreLimit.c)
 */

__int64 __fastcall ExpInsertPoolTrackerExpansion(unsigned int a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  char v4; // si
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // r10
  __int64 v7; // r13
  __int64 CurrentPrcb; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rax
  _DWORD *v13; // rbx
  unsigned __int64 v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rax
  int v17; // eax
  char *v18; // rbx
  volatile signed __int64 *v19; // rdi
  int v20; // r14d
  volatile signed __int64 *v21; // rax
  signed __int64 v22; // rsi
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // r14
  size_t v30; // r12
  unsigned __int64 v31; // r13
  char *HeapPages; // rax
  char *v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r8d
  __int64 v37; // r10
  __int64 v38; // rsi
  __int64 v39; // r11
  int v40; // r9d
  __int64 v41; // r14
  int v42; // eax
  signed __int64 v43; // r12
  unsigned __int64 v44; // rsi
  int v45; // edx
  __int64 v46; // r15
  __int64 LimitEntry; // rax
  __int64 v48; // rcx
  int v49; // eax
  unsigned __int64 v50; // r10
  signed __int64 v51; // r12
  char *v52; // r13
  unsigned __int64 MoreLimit; // rax
  int v54; // eax
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  bool v57; // zf
  unsigned __int64 v58; // rbx
  unsigned __int8 v59; // al
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  __int64 v63; // rax
  volatile signed __int64 *v64; // rcx
  unsigned __int64 v65; // r14
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  signed __int64 v70; // rsi
  unsigned __int64 v71; // rax
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  __int64 v76; // rbx
  unsigned __int64 v77; // rdi
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r9
  _DWORD *v80; // r8
  int v81; // eax
  int v82; // [rsp+30h] [rbp-39h]
  __int64 v83; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int64 v85; // [rsp+50h] [rbp-19h]
  size_t v86; // [rsp+58h] [rbp-11h]
  __int64 v87; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE v88; // [rsp+68h] [rbp-1h] BYREF
  __int64 v89; // [rsp+80h] [rbp+17h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v93; // [rsp+E8h] [rbp+7Fh]
  int v94; // [rsp+E8h] [rbp+7Fh]

  v3 = a1;
  v4 = a3;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v7 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v9 = *(_QWORD *)(CurrentPrcb + 35000);
  if ( v9 )
  {
    if ( *(_BYTE *)(CurrentPrcb + 32) <= 1u )
    {
      v49 = *(_DWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 24) = v49 + 1;
      if ( v49 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, &ExpTaggedPoolLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  v93 = v4 & 0x20;
  if ( (v4 & 0x20) != 0 )
  {
    v10 = ExpSessionPoolTrackTableSize;
    v11 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 896);
    CurrentPrcb = (__int64)KeGetCurrentThread()->ApcState.Process;
    v12 = *(_QWORD *)(CurrentPrcb + 1368);
    v13 = *(_DWORD **)(v12 + 808);
    v14 = *(_QWORD *)(v12 + 816);
  }
  else
  {
    v11 = PoolTrackTable;
    v10 = PoolTrackTableSize;
    v14 = PoolTrackTableExpansionSize;
    v13 = PoolTrackTableExpansion;
  }
  v82 = v10;
  v15 = 0;
  v85 = v11;
  if ( v14 )
  {
    v16 = 0LL;
    do
    {
      CurrentPrcb = 10 * v16;
      v17 = v13[20 * v16];
      if ( v17 == (_DWORD)v3 )
        break;
      if ( !v17 )
      {
        v13[20 * v15] = v3;
        if ( (v4 & 0x20) == 0 )
        {
          v50 = v3 & (v7 << (dword_140CE1E44 & 0x1F));
          if ( (unsigned int)dword_140CE1E44 >> 5 )
          {
            v89 = v3 & (v7 << (dword_140CE1E44 & 0x1F));
            CurrentPrcb = qword_140CE1E48
                        + 8LL
                        * ((1874161
                          * ((unsigned int)(v50 >> 24)
                           + 37 * (BYTE2(v50) + 37 * (BYTE1(v50) + 37 * ((unsigned __int8)v50 + 11623883))))) & (((unsigned int)dword_140CE1E44 >> 5) - 1));
            while ( 1 )
            {
              CurrentPrcb = *(_QWORD *)CurrentPrcb;
              if ( (CurrentPrcb & 1) != 0 )
                break;
              if ( v50 == ((v7 << (dword_140CE1E44 & 0x1F)) & *(_QWORD *)(CurrentPrcb + 8)) )
                goto LABEL_68;
            }
          }
          CurrentPrcb = 0LL;
LABEL_68:
          v4 = a3;
          v5 = a2;
          v11 = v85;
          *(_QWORD *)&v13[20 * v15 + 18] = CurrentPrcb;
        }
        break;
      }
      v16 = ++v15;
    }
    while ( v15 < v14 );
  }
  if ( v15 != v14 )
  {
    v18 = (char *)&v13[20 * v15];
    if ( (v4 & 1) != 0 )
    {
      v19 = (volatile signed __int64 *)(v18 + 32);
      v20 = 0;
      v21 = (volatile signed __int64 *)(v18 + 40);
    }
    else
    {
      v19 = (volatile signed __int64 *)(v18 + 8);
      v20 = 1;
      v21 = (volatile signed __int64 *)(v18 + 16);
    }
    _InterlockedIncrement64(v21);
    v22 = _InterlockedExchangeAdd64(v19, v5);
    if ( *((_QWORD *)v18 + 9) )
    {
      v51 = *(_QWORD *)&v18[8 * v20 + 56];
      v52 = &v18[8 * v20];
      while ( (v51 & 1) == 0 )
      {
        if ( v51 >= v22 )
          break;
        MoreLimit = ExpTrackTableGetMoreLimit(*((_QWORD *)v18 + 9), a2, (unsigned int)v20);
        if ( !MoreLimit )
          break;
        if ( MoreLimit == 1 )
        {
          if ( v51 == _InterlockedCompareExchange64((volatile signed __int64 *)v52 + 7, 1LL, v51) )
            break;
          v51 = *((_QWORD *)v52 + 7);
        }
        else
        {
          v51 = _InterlockedExchangeAdd64((volatile signed __int64 *)v52 + 7, MoreLimit);
          v22 = *v19;
        }
      }
      v7 = -1LL;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    }
    else
    {
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_22;
        Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    }
LABEL_22:
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v54 = v25[6] - 1;
        v25[6] = v54;
        if ( !v54 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          result = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
          v57 = ((unsigned int)result & v56[5]) == 0;
          v56[5] &= result;
          if ( v57 )
            result = KiRemoveSystemWorkPriorityKick(v55);
        }
      }
    }
    __writecr8(OldIrql);
    return result;
  }
  if ( *(_DWORD *)(v11 + 80 * v10 - 80) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v58 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v59 = KeGetCurrentIrql();
        if ( v59 <= 0xFu && LockHandle.OldIrql <= 0xFu && v59 >= 2u )
        {
          v60 = KeGetCurrentPrcb();
          v61 = v60->SchedulerAssist;
          v62 = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
          v57 = (v62 & v61[5]) == 0;
          v61[5] &= v62;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v60);
        }
      }
    }
    __writecr8(v58);
    v63 = v11 + 80LL * (unsigned int)(v10 - 1);
    if ( (v4 & 1) != 0 )
    {
      v64 = (volatile signed __int64 *)(v63 + 32);
      result = v63 + 40;
    }
    else
    {
      v64 = (volatile signed __int64 *)(v63 + 8);
      result = v63 + 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)result);
    _InterlockedExchangeAdd64(v64, v5);
    return result;
  }
  v29 = 80 * v14;
  v30 = (80 * v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v86 = v30;
  v31 = v30 + 4096;
  HeapPages = (char *)ExAllocateHeapPages(CurrentPrcb, v30 + 4096);
  v33 = HeapPages;
  if ( !HeapPages )
  {
    v76 = v85 + 80LL * (unsigned int)(v82 - 1);
    *(_DWORD *)v76 = 1818654287;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v77 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v78 = KeGetCurrentIrql();
        if ( v78 <= 0xFu && LockHandle.OldIrql <= 0xFu && v78 >= 2u )
        {
          v79 = KeGetCurrentPrcb();
          v80 = v79->SchedulerAssist;
          v81 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v57 = (v81 & v80[5]) == 0;
          v80[5] &= v81;
          if ( v57 )
            KiRemoveSystemWorkPriorityKick(v79);
        }
      }
    }
    __writecr8(v77);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v76 + 40));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 32), a2);
    }
    else
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v76 + 16));
      return _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 8), a2);
    }
  }
  if ( v13 )
    memmove(HeapPages, v13, v30);
  memset(&v33[v29], 0, v31 - v29);
  if ( v93 )
  {
    v34 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    *(_QWORD *)(v34 + 808) = v33;
    *(_QWORD *)(v34 + 816) = (v30 + 4096) / 0x50;
  }
  else
  {
    PoolTrackTableExpansion = v33;
    PoolTrackTableExpansionSize = (v30 + 4096) / 0x50;
  }
  memset(&v88, 0, sizeof(v88));
  if ( PoolHitTag == 1819242320 )
    __debugbreak();
  v35 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    v35 = EtwTracePool(3616, 512, 1819242320, (_DWORD)v33, v30 + 4096);
  LODWORD(v35) = KeGetPcr()->Prcb.Number;
  v36 = PoolTrackTableMask;
  v37 = PoolTrackTableSize;
  v38 = PoolTrackTableMask & 0x40DEDA5;
  v85 = PoolTrackTableMask;
  v39 = (__int64)*(&ExPoolTagTables + v35);
  v40 = PoolTrackTableMask & 0x40DEDA5;
  v83 = v39;
  v94 = PoolTrackTableMask & 0x40DEDA5;
  v87 = PoolTrackTableSize;
  while ( 1 )
  {
    v41 = 10 * v38;
    v42 = *(_DWORD *)(v39 + 80 * v38);
    if ( v42 == 1819242320 )
      break;
    if ( v42 )
    {
LABEL_44:
      v38 = v36 & (unsigned int)(v38 + 1);
      if ( (_DWORD)v38 == v40 )
      {
        ExpInsertPoolTrackerExpansion(1819242320LL, v30 + 4096, 512LL);
        goto LABEL_47;
      }
    }
    else
    {
      v45 = *(_DWORD *)(PoolTrackTable + 80 * v38);
      if ( v45 )
      {
        *(_DWORD *)(v39 + 80 * v38) = v45;
        v48 = *(_QWORD *)(PoolTrackTable + 80 * v38 + 72);
        if ( v48 )
          *(_QWORD *)(v39 + 80 * v38 + 72) = v48;
      }
      else
      {
        if ( (unsigned int)v38 == v37 - 1 )
          goto LABEL_44;
        KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v88);
        v46 = PoolTrackTable;
        if ( !*(_DWORD *)(PoolTrackTable + 80 * v38) )
        {
          LimitEntry = ExpPlFindLimitEntry(1819242320LL);
          *(_QWORD *)(v46 + 80 * v38 + 72) = LimitEntry;
          *(_QWORD *)(v83 + 80 * v38 + 72) = LimitEntry;
          *(_DWORD *)(PoolTrackTable + 80 * v38) = 1819242320;
          *(_DWORD *)(v83 + 80 * v38) = 1819242320;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v88);
        v65 = v88.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && v88.OldIrql <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = v67->SchedulerAssist;
              v69 = ~(unsigned __int16)(-1LL << (v88.OldIrql + 1));
              v57 = (v69 & v68[5]) == 0;
              v68[5] &= v69;
              if ( v57 )
                KiRemoveSystemWorkPriorityKick(v67);
            }
          }
        }
        __writecr8(v65);
        v36 = v85;
        v40 = v94;
        v37 = v87;
        v39 = v83;
      }
    }
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v39 + 80 * v38 + 16));
  v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 80 * v38 + 8), v31);
  if ( *(_QWORD *)(v39 + 80 * v38 + 72) )
  {
    v70 = *(_QWORD *)(v39 + 80 * v38 + 64);
    while ( (v70 & 1) == 0 )
    {
      if ( v70 >= v43 )
        break;
      v71 = ExpTrackTableGetMoreLimit(*(_QWORD *)(v39 + 8 * v41 + 72), v31, 1LL);
      if ( !v71 )
        break;
      v39 = v83;
      if ( v71 == 1 )
      {
        if ( v70 == _InterlockedCompareExchange64((volatile signed __int64 *)(v83 + 8 * v41 + 64), 1LL, v70) )
          break;
        v70 = *(_QWORD *)(v83 + 8 * v41 + 64);
      }
      else
      {
        v70 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 8 * v41 + 64), v71);
        v43 = *(_QWORD *)(v83 + 8 * v41 + 8);
      }
    }
  }
LABEL_47:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v44 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && LockHandle.OldIrql <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = v73->SchedulerAssist;
        v75 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v57 = (v75 & v74[5]) == 0;
        v74[5] &= v75;
        if ( v57 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
  }
  __writecr8(v44);
  if ( v13 )
    ExPoolCleanupExpansionTable((ULONG_PTR)v13);
  return ExpInsertPoolTrackerExpansion((unsigned int)v3, a2, a3);
}
