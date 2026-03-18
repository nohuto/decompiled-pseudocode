/*
 * XREFs of KeSetSchedulingGroupCpuRates @ 0x14035DD90
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x14035DE60 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x14035E0D0 (KiUpdateMinimumWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x14035E1F0 (KiUpdateCpuTargetByRate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetSchedulingGroupCpuRates(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v6 = *a2;
  v7 = *(_DWORD *)(*a2 + 4LL);
  if ( (v7 & 1) == 0 )
  {
    LOBYTE(v5) = 1;
    *(_DWORD *)(v6 + 4) = v7 | 1;
    KiUpdateMinimumWeight(0LL, v5, *(_QWORD *)(*a2 + 96LL));
    KiAssignSchedulingGroupWeights(0LL, 0LL, *(_QWORD *)(*a2 + 96LL));
    v6 = *a2;
  }
  LOBYTE(v5) = 1;
  *(_QWORD *)v6 = *a3;
  KiUpdateCpuTargetByRate(*a2, v5);
  LOBYTE(v8) = 1;
  if ( (unsigned __int8)KiUpdateMinimumWeight(1LL, v8, *(_QWORD *)(*a2 + 96LL)) )
    KiAssignSchedulingGroupWeights(1LL, 0LL, *(_QWORD *)(*a2 + 96LL));
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
        v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
