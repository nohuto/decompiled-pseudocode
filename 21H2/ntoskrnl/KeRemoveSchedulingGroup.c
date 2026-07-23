/*
 * XREFs of KeRemoveSchedulingGroup @ 0x140204D04
 * Callers:
 *     PspRemoveCpuRateControl @ 0x1405D9F5C (PspRemoveCpuRateControl.c)
 *     PspEstablishJobHierarchy @ 0x1406F5948 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectDelete @ 0x1408C8D10 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x140908E88 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1402050A0 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x140205310 (KiUpdateMinimumWeight.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r12
  __int64 v5; // rbp
  unsigned int v6; // r13d
  __int64 v7; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v9; // r14
  __int64 v10; // r15
  _DWORD *SchedulerAssist; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rdx
  unsigned __int16 **v14; // rcx
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 OldIrql; // rbx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // edx
  bool v30; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    goto LABEL_45;
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0LL;
  v6 = KeNumberProcessors_0;
  v7 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = KiProcessorBlock[v5];
      v10 = 212LL * (unsigned int)v5;
      v32 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v22 = SchedulerAssist[6];
            SchedulerAssist[6] = v22 + 1;
            if ( v22 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
          break;
        v21 = CurrentPrcb->SchedulerAssist;
        if ( v21 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v21[6] - 1;
            v21[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v32);
        while ( *(_QWORD *)(v9 + 48) );
      }
      v12 = &a1[v10 + 100];
      v13 = *(_QWORD *)v12;
      v14 = (unsigned __int16 **)*((_QWORD *)v12 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v12 + 8LL) != v12 || *v14 != v12 )
        break;
      *v14 = (unsigned __int16 *)v13;
      *(_QWORD *)(v13 + 8) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v24 = v16[6] - 1;
          v16[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      v4 += *(_QWORD *)&a1[v10 + 92];
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        goto LABEL_11;
    }
LABEL_45:
    __fastfail(3u);
  }
LABEL_11:
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v25 = *a1;
    if ( v7 )
      *(_DWORD *)(v7 + 20) -= v25;
    else
      KiGroupSchedulingTotalWeight -= v25;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 80) == v7 + 80 )
    {
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      goto LABEL_17;
    }
    v17 = v7;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_17;
    }
    v17 = 0LL;
  }
  if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v17) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL, v18);
LABEL_17:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v30 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(OldIrql);
  return v4;
}
