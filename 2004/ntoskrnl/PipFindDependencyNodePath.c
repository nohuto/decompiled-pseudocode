/*
 * XREFs of PipFindDependencyNodePath @ 0x1403885EC
 * Callers:
 *     IoTestDependency @ 0x140388590 (IoTestDependency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipDependencyGraphDepthFirstSearch @ 0x140388684 (PipDependencyGraphDepthFirstSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PipFindDependencyNodePath(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v5; // ebp
  unsigned __int64 v9; // r14
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  int v14[10]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0;
  v14[0] = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&PiDependencyEdgeWriteLock);
  PipDependencyGraphDepthFirstSearch(a1, a2, v14, a4);
  KxReleaseSpinLock(&PiDependencyEdgeWriteLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v14[0] )
  {
    LOBYTE(v5) = v14[0] != 1;
    ++v5;
  }
  *a3 = v5;
  return result;
}
