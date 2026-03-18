/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140221790
 * Callers:
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

int __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v7; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // r8
  unsigned __int64 v10; // rax
  _DWORD *v11; // r9
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  int v15; // eax
  char *v16; // rcx
  volatile signed __int64 *v17; // r8
  int v18; // r9d
  volatile signed __int64 *v19; // rax
  signed __int64 v20; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  __int64 v28; // rbx
  signed __int64 v29; // r9
  unsigned __int64 v30; // r10
  signed __int64 v31; // r11
  bool v32; // zf
  signed __int64 v33; // rax
  signed __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // edx
  __int64 v43; // r8
  unsigned __int64 v44; // rbp
  volatile signed __int64 *v45; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = LOBYTE(LockHandle.LockQueue.Next) - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((_DWORD)v7 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.OldIrql = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v27 = v9[6];
      v9[6] = v27 + 1;
      if ( v27 == -1 )
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
  if ( (a3 & 0x20) != 0 )
  {
    v10 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v11 = *(_DWORD **)(v10 + 808);
    v12 = *(_QWORD *)(v10 + 816);
  }
  else
  {
    v12 = PoolTrackTableExpansionSize;
    v11 = PoolTrackTableExpansion;
  }
  v13 = 0;
  if ( !v12 )
  {
LABEL_57:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v24 = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( (unsigned __int8)v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v24 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v24 = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
          v32 = ((unsigned int)v24 & v41[5]) == 0;
          v41[5] &= v24;
          if ( v32 )
            v24 = KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(OldIrql);
    if ( (a3 & 0x20) != 0 )
    {
      v42 = ExpSessionPoolTrackTableSize;
      v24 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
      v43 = *(_QWORD *)(v24 + 896);
    }
    else
    {
      LODWORD(v24) = KeGetPcr()->Prcb.Number;
      v42 = PoolTrackTableSize;
      v43 = (__int64)*(&ExPoolTagTables + v24);
    }
    v44 = -a2;
    v45 = (volatile signed __int64 *)(v43 + 80LL * (unsigned int)(v42 - 1));
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v45 + 6);
      _InterlockedExchangeAdd64(v45 + 4, v44);
    }
    else
    {
      _InterlockedIncrement64(v45 + 3);
      _InterlockedExchangeAdd64(v45 + 1, v44);
    }
    return v24;
  }
  v14 = 0LL;
  while ( 1 )
  {
    v15 = v11[20 * v14];
    if ( v15 == a1 )
      break;
    if ( v15 )
    {
      v14 = ++v13;
      if ( v13 < v12 )
        continue;
    }
    goto LABEL_57;
  }
  v16 = (char *)&v11[20 * v13];
  if ( (a3 & 1) != 0 )
  {
    v17 = (volatile signed __int64 *)(v16 + 32);
    v18 = 0;
    v19 = (volatile signed __int64 *)(v16 + 48);
  }
  else
  {
    v17 = (volatile signed __int64 *)(v16 + 8);
    v18 = 1;
    v19 = (volatile signed __int64 *)(v16 + 24);
  }
  _InterlockedIncrement64(v19);
  v20 = _InterlockedExchangeAdd64(v17, -a2);
  if ( *((_QWORD *)v16 + 9) )
  {
    v28 = v18;
    if ( (v16[8 * v18 + 56] & 1) == 0 )
    {
      v29 = *(_QWORD *)&v16[8 * v18 + 56];
      v30 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( v30 == 64 )
        v30 = 128LL;
      v31 = v30 + v20;
      if ( v20 < v29 )
      {
        while ( v31 < v29 )
        {
          v33 = _InterlockedCompareExchange64((volatile signed __int64 *)&v16[8 * v28 + 56], v31, v29);
          v32 = v29 == v33;
          v29 = v33;
          if ( v32 )
          {
            v34 = v31 - v33;
            v35 = *((_QWORD *)v16 + 9) + 24 * v28;
            if ( v33 - v31 >= 0 )
              v34 = v33 - v31;
            if ( *(_QWORD *)(v35 + 16) || *(_QWORD *)(v35 + 24) )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 32), -v34);
            break;
          }
          v31 = v30 + *v17;
          if ( *v17 >= v33 )
            break;
        }
      }
    }
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
        goto LABEL_20;
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_20:
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v36 = v23[6] - 1;
      v23[6] = v36;
      if ( !v36 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  LODWORD(v24) = KiIrqlFlags;
  v25 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LODWORD(v24) = KeGetCurrentIrql();
      if ( (unsigned __int8)v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v24 >= 2u )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        LODWORD(v24) = ~(unsigned __int16)(v7 << (LockHandle.OldIrql + 1));
        v32 = ((unsigned int)v24 & v38[5]) == 0;
        v38[5] &= v24;
        if ( v32 )
          LODWORD(v24) = KiRemoveSystemWorkPriorityKick(v37);
      }
    }
  }
  __writecr8(v25);
  return v24;
}
