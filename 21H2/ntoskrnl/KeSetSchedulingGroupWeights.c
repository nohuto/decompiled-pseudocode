/*
 * XREFs of KeSetSchedulingGroupWeights @ 0x14025D01C
 * Callers:
 *     PsSetCpuQuotaInformation @ 0x1405E00E4 (PsSetCpuQuotaInformation.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 * Callees:
 *     KiAssignSchedulingGroupWeights @ 0x140207880 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x14020794C (KiUpdateMinimumWeight.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetSchedulingGroupWeights(unsigned int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  if ( (_DWORD)v3 )
  {
    v6 = a2;
    v7 = a3 - a2;
    do
    {
      v8 = *(_DWORD *)(*(_QWORD *)v6 + 4LL);
      if ( (v8 & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v6 + 4LL) = v8 & 0xFFFFFFFE;
        if ( KiUpdateMinimumWeight(1, 0, *(_DWORD **)(*(_QWORD *)v6 + 96LL)) )
          KiAssignSchedulingGroupWeights(1, 0, *(_QWORD *)(*(_QWORD *)v6 + 96LL));
      }
      v9 = *(_QWORD **)v6;
      v10 = *(_QWORD *)(v7 + v6);
      v6 += 8LL;
      *v9 = v10;
      --v3;
    }
    while ( v3 );
  }
  KiUpdateMinimumWeight(0, 1, *(_DWORD **)(*(_QWORD *)a2 + 96LL));
  KiAssignSchedulingGroupWeights(0, 1, *(_QWORD *)(*(_QWORD *)a2 + 96LL));
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
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return result;
}
