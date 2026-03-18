/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x140336A30
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140332C70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037B20C (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x1405193F4 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A148 (KiReadGuestSchedulerAssistPriority.c)
 */

__int64 __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int v5; // eax
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 result; // rax
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  __int64 v27; // rdx
  bool v28; // si
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(_DWORD *)(a2 + 120);
  v6 = a4;
  v7 = (int)a3;
  if ( (v5 & 0x400000) != 0 )
  {
    _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
    v5 = *(_DWORD *)(a2 + 120);
  }
  if ( (v5 & 0x400000) != 0 )
  {
    v28 = 0;
    GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
    if ( GuestSchedulerAssistPriority >= 16 )
      GuestSchedulerAssistPriority = 15;
    if ( GuestSchedulerAssistPriority != *(_DWORD *)(a2 + 1024) )
    {
      KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
      v30 = (_QWORD *)(a2 + 1008);
      if ( *(_QWORD *)(a2 + 1008) == 1LL )
      {
        v31 = (_QWORD *)qword_140C31F18;
        v28 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
        if ( *(__int64 **)qword_140C31F18 != &KiUpdateVpThreadPriorityListHead )
          goto LABEL_47;
        *v30 = &KiUpdateVpThreadPriorityListHead;
        *(_QWORD *)(a2 + 1016) = v31;
        *v31 = v30;
        qword_140C31F18 = a2 + 1008;
      }
      KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
      if ( v28 )
        KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
    }
  }
  v10 = *(_QWORD *)(a1 + 33856);
  if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0 || !v10 || a5 || (v10 & *(_QWORD *)(a2 + 576)) != v10 )
  {
    v20 = (_QWORD *)(a2 + 216);
    v21 = (_QWORD *)(a1 + 16 * (v7 + 1992));
    if ( v6 )
    {
      v27 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 )
        goto LABEL_47;
      *v20 = v27;
      *(_QWORD *)(a2 + 224) = v21;
      *(_QWORD *)(v27 + 8) = v20;
      *v21 = v20;
      _bittestandset((signed __int32 *)(a1 + 31772), v7);
    }
    else
    {
      v22 = (_QWORD *)v21[1];
      if ( (_QWORD *)*v22 != v21 )
        goto LABEL_47;
      *v20 = v21;
      *(_QWORD *)(a2 + 224) = v22;
      *v22 = v20;
      v21[1] = v20;
    }
    v23 = *(_DWORD *)(a1 + 31768);
    ++*(_DWORD *)(a1 + 32436);
    *(_DWORD *)(a1 + 31768) = v23 | (1 << v7);
    result = *(unsigned int *)(a2 + 84);
    *(_DWORD *)(a2 + 1568) = result;
    *(_QWORD *)(a1 + 32440) += result;
    return result;
  }
  v11 = *(_QWORD *)(a1 + 33864);
  v12 = (_QWORD *)(v11 + 16 * (v7 + 1));
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v32 = SchedulerAssist[6];
      SchedulerAssist[6] = v32 + 1;
      if ( v32 == -1 )
LABEL_37:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
  {
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = v25[6] - 1;
        v25[6] = v33;
        if ( !v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v35, a2, a3, a4);
    while ( *(_QWORD *)v11 );
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v34 = v26[6];
        v26[6] = v34 + 1;
        if ( v34 == -1 )
          goto LABEL_37;
      }
    }
  }
  v15 = (_QWORD *)(a2 + 216);
  if ( v6 )
  {
    v24 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) == v12 )
    {
      *v15 = v24;
      *(_QWORD *)(a2 + 224) = v12;
      *(_QWORD *)(v24 + 8) = v15;
      *v12 = v15;
      _bittestandreset((signed __int32 *)(a1 + 31772), v7);
      goto LABEL_13;
    }
LABEL_47:
    __fastfail(3u);
  }
  v16 = (_QWORD *)v12[1];
  if ( (_QWORD *)*v16 != v12 )
    goto LABEL_47;
  *v15 = v12;
  *(_QWORD *)(a2 + 224) = v16;
  *v16 = v15;
  v12[1] = v15;
LABEL_13:
  *(_DWORD *)(v11 + 8) |= 1 << v7;
  *(_DWORD *)(a2 + 536) |= 0x80000000;
  ++*(_DWORD *)(v11 + 608);
  result = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 1568) = result;
  *(_QWORD *)(v11 + 616) += result;
  _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 && v18->NestingLevel <= 1u )
  {
    result = (unsigned int)(v19[6] - 1);
    v19[6] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v18);
  }
  return result;
}
