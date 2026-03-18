/*
 * XREFs of KeRemoveSchedulingGroup @ 0x14035DAC4
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14062D6C4 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x14071113C (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x1408CB3F0 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x14090B578 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAssignSchedulingGroupWeights @ 0x14035DE60 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x14035E0D0 (KiUpdateMinimumWeight.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // rdi
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v11; // r14
  __int64 v12; // r15
  _DWORD *SchedulerAssist; // rcx
  unsigned __int16 *v14; // rax
  __int64 v15; // rdx
  unsigned __int16 **v16; // rcx
  struct _KPRCB *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 OldIrql; // rbx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r9
  int v30; // edx
  bool v31; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v33; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v4 = *((_QWORD *)a1 + 7);
  v5 = (__int64 *)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v4 + 8) != a1 + 28 || (unsigned __int16 *)*v5 != a1 + 28 )
    goto LABEL_45;
  *v5 = v4;
  v6 = 0LL;
  *(_QWORD *)(v4 + 8) = v5;
  v7 = 0LL;
  v8 = KeNumberProcessors_0;
  v9 = *((_QWORD *)a1 + 12);
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = KiProcessorBlock[v7];
      v12 = 212LL * (unsigned int)v7;
      v33 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = SchedulerAssist[6];
            SchedulerAssist[6] = v23 + 1;
            if ( v23 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 48), 0LL) )
          break;
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v24 = v22[6] - 1;
            v22[6] = v24;
            if ( !v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v33, v4, v2, v3);
        while ( *(_QWORD *)(v11 + 48) );
      }
      v14 = &a1[v12 + 100];
      v15 = *(_QWORD *)v14;
      v16 = (unsigned __int16 **)*((_QWORD *)v14 + 1);
      if ( *(unsigned __int16 **)(*(_QWORD *)v14 + 8LL) != v14 || *v16 != v14 )
        break;
      *v16 = (unsigned __int16 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 48), 0LL);
      v17 = KeGetCurrentPrcb();
      v4 = (__int64)v17->SchedulerAssist;
      if ( v4 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v25 = *(_DWORD *)(v4 + 24) - 1;
          *(_DWORD *)(v4 + 24) = v25;
          if ( !v25 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      v6 += *(_QWORD *)&a1[v12 + 92];
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v8 )
        goto LABEL_11;
    }
LABEL_45:
    __fastfail(3u);
  }
LABEL_11:
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v26 = *a1;
    if ( v9 )
      *(_DWORD *)(v9 + 20) -= v26;
    else
      KiGroupSchedulingTotalWeight -= v26;
  }
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 80) == v9 + 80 )
    {
      *(_DWORD *)(v9 + 16) = 0;
      *(_DWORD *)(v9 + 12) = 0;
      goto LABEL_17;
    }
    v18 = v9;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_17;
    }
    v18 = 0LL;
  }
  if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v18) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL, v19);
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
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
  }
  __writecr8(OldIrql);
  return v6;
}
