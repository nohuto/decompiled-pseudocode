/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x1402361C0
 * Callers:
 *     ExRemovePoolTag @ 0x1402187A8 (ExRemovePoolTag.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, char a3)
{
  unsigned __int64 v6; // rax
  _DWORD *v7; // r8
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rax
  int v11; // r9d
  _QWORD *v12; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v17; // zf
  __int64 CurrentIrql; // rax
  unsigned __int64 v19; // rdi
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r8
  int v22; // edx
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  volatile signed __int64 *v25; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
  if ( (a3 & 0x20) != 0 )
  {
    v6 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v7 = *(_DWORD **)(v6 + 976);
    v8 = *(_QWORD *)(v6 + 984);
  }
  else
  {
    v8 = PoolTrackTableExpansionSize;
    v7 = PoolTrackTableExpansion;
  }
  v9 = 0;
  if ( v8 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = v7[14 * v10];
      if ( v11 == a1 )
        break;
      if ( v11 )
      {
        v10 = ++v9;
        if ( v9 < v8 )
          continue;
      }
      goto LABEL_21;
    }
    v12 = &v7[14 * v9];
    if ( (a3 & 1) != 0 )
    {
      ++v12[6];
      v12[4] -= a2;
    }
    else
    {
      ++v12[3];
      v12[1] -= a2;
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
          v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v17 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  else
  {
LABEL_21:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    CurrentIrql = (unsigned int)KiIrqlFlags;
    v19 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (unsigned __int8)CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)CurrentIrql >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          CurrentIrql = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = ((unsigned int)CurrentIrql & v21[5]) == 0;
          v21[5] &= CurrentIrql;
          if ( v17 )
            CurrentIrql = KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(v19);
    if ( (a3 & 0x20) != 0 )
    {
      v23 = ExpSessionPoolTrackTable;
      v22 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v22 = PoolTrackTableSize;
      v23 = (__int64)*(&ExPoolTagTables + CurrentIrql);
    }
    v24 = -a2;
    result = (unsigned int)(v22 - 1);
    v25 = (volatile signed __int64 *)(v23 + 56 * result);
    if ( (a3 & 1) != 0 )
    {
      _InterlockedIncrement64(v25 + 6);
      _InterlockedExchangeAdd64(v25 + 4, v24);
    }
    else
    {
      _InterlockedIncrement64(v25 + 3);
      _InterlockedExchangeAdd64(v25 + 1, v24);
    }
  }
  return result;
}
