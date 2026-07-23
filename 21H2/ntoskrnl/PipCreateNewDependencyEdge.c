/*
 * XREFs of PipCreateNewDependencyEdge @ 0x14050C7F0
 * Callers:
 *     PipAddDependencyEdgeBetweenNodes @ 0x14050C750 (PipAddDependencyEdgeBetweenNodes.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PipAddRequestToEdge @ 0x14089DABC (PipAddRequestToEdge.c)
 *     PipNotifyDependenciesChanged @ 0x14089E0CC (PipNotifyDependenciesChanged.c)
 *     PipReferenceDependencyNode @ 0x14089E148 (PipReferenceDependencyNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall PipCreateNewDependencyEdge(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x53706E50u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 12) = 0;
    PoolWithTag[8] = PoolWithTag + 7;
    PoolWithTag[7] = PoolWithTag + 7;
    PoolWithTag[5] = a1;
    PoolWithTag[4] = a2;
    *((_BYTE *)PoolWithTag + 72) = 0;
    if ( PipAddRequestToEdge(PoolWithTag, a3) )
    {
      PipReferenceDependencyNode(a1);
      PipReferenceDependencyNode(a2);
      v9 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
      v10 = v7 + 2;
      v11 = *(_QWORD **)(a2 + 40);
      if ( *v11 != a2 + 32
        || (*v10 = a2 + 32,
            v7[3] = v11,
            *v11 = v10,
            *(_QWORD *)(a2 + 40) = v10,
            v12 = *(_QWORD **)(a1 + 24),
            *v12 != a1 + 16) )
      {
        __fastfail(3u);
      }
      *v7 = a1 + 16;
      v7[1] = v12;
      *v12 = v7;
      *(_QWORD *)(a1 + 24) = v7;
      KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
            v17 = (v16 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      PipNotifyDependenciesChanged(a1, a2);
    }
    else
    {
      ExFreePoolWithTag(v7, 0x53706E50u);
      return 0LL;
    }
  }
  return v7;
}
