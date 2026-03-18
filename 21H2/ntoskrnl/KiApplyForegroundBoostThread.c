/*
 * XREFs of KiApplyForegroundBoostThread @ 0x14035CAD8
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x14039EE50 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140210C14 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiIsForegroundThread @ 0x1402F8020 (KiIsForegroundThread.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  char v7; // r9
  char v8; // r14
  int v10; // r9d
  unsigned int v11; // edx
  char v12; // al
  struct _KPRCB *v13; // rbx
  int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdi
  _KPRIORITY_STATE **v19; // r15
  unsigned __int8 *v20; // r12
  char v21; // cl
  unsigned __int8 v22; // al
  void *v23; // rcx
  __int64 v24; // rdx
  _KPRIORITY_STATE *v25; // r8
  unsigned int v26; // edx
  char v27; // al
  char v28; // al
  _BYTE *v29; // rax
  bool v30; // cl
  _KTHREAD **p_NextThread; // r13
  _KTHREAD *NextThread; // r12
  __int64 ready; // rax
  __int64 v34; // r8
  __int64 v35; // rdi
  _KPRIORITY_STATE *v36; // r8
  unsigned int v37; // edx
  char v38; // al
  char v39; // al
  signed int v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rdx
  _KPRIORITY_STATE **p_PriorityState; // r15
  unsigned __int8 *PriorityState; // r12
  char v45; // cl
  __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  void *SchedulerAssist; // rcx
  __int64 v50; // rdx
  _BYTE *v51; // rax
  bool v52; // cl
  struct _KPRCB *v53; // [rsp+30h] [rbp-10h] BYREF
  volatile signed __int32 *v54; // [rsp+38h] [rbp-8h] BYREF
  char v55; // [rsp+90h] [rbp+50h]

  v53 = 0LL;
  v54 = 0LL;
  v7 = KiAcquireThreadStateLock(a1, (__int64)&v53, &v54, a4);
  v8 = 1;
  if ( (unsigned __int8)(v7 - 1) > 2u && v7 != 7 )
    goto LABEL_3;
  if ( !KiIsForegroundThread(a1) )
    goto LABEL_3;
  if ( *(_BYTE *)(a1 + 564) )
    goto LABEL_3;
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
    goto LABEL_3;
  v11 = *(char *)(a1 + 195);
  if ( *(char *)(a1 + 195) <= 0 )
    goto LABEL_3;
  v12 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
  v6 = (unsigned __int8)v12;
  if ( v12 >= 16 )
    v6 = 15LL;
  if ( (char)v6 <= (char)v11 )
  {
LABEL_3:
    KiReleaseThreadStateLock(v6, v53, v54);
    return 0;
  }
  v14 = (char)v6;
  v55 = 0;
  *(_BYTE *)(a1 + 564) = (v6 - v11) & 0xF;
  v40 = v11;
  if ( v10 == 1 )
  {
    v13 = v53;
    KiRemoveThreadFromAnyReadyQueue((__int64)v53, (__int64)v54, a1, v11);
    KiUpdateThreadPriority(0LL, a1, (PVOID *)(unsigned int)v14, 0);
    KiPrepareReadyThreadForRescheduling(a1, v14, a2);
    goto LABEL_15;
  }
  if ( v10 == 2 )
  {
    v13 = v53;
    p_NextThread = &v53->NextThread;
    NextThread = v53->NextThread;
    KiUpdateThreadPriority((__int64)v53, a1, (PVOID *)(unsigned int)(char)v6, NextThread == 0LL);
    if ( v14 >= v40 )
    {
      if ( v14 > v40 && !NextThread )
      {
        v13 = v53;
        if ( *(_BYTE *)(a1 + 388) == 2 )
          goto LABEL_16;
      }
      goto LABEL_15;
    }
    if ( NextThread )
      goto LABEL_15;
    v13 = v53;
    if ( *(_BYTE *)(a1 + 388) != 2 )
    {
      if ( v53->ReadySummary >> (v14 + 1) )
        *(_BYTE *)(a1 + 112) |= 0x10u;
      goto LABEL_15;
    }
    ready = KiSelectReadyThreadEx(v53, (_KTHREAD *)a1, 0LL);
    v35 = ready;
    if ( !ready )
    {
LABEL_15:
      v14 = 0;
      goto LABEL_16;
    }
    p_PriorityState = &v13->PriorityState;
    PriorityState = (unsigned __int8 *)v13->PriorityState;
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 )
    {
      v45 = *(_BYTE *)(ready + 195);
LABEL_78:
      v48 = v45 & 0x7F | (*(_BYTE *)(v35 + 119) << 7);
      *PriorityState = v48;
      SchedulerAssist = v13->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( (_KTHREAD *)v35 == v13->IdleThread )
          v50 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v50 = v48 & 0x7F;
        KiSetSchedulerAssistPriority(SchedulerAssist, v50, 0LL);
      }
      v36 = *p_PriorityState;
      if ( KeHeteroSystem )
      {
        v37 = *(_DWORD *)(v35 + 80);
        v38 = (v36[64].AllFields ^ *(_BYTE *)(v35 + 512)) & 7 ^ v36[64].AllFields;
        v39 = (v38 ^ (8 * *(_BYTE *)(v35 + 516))) & 0x38 ^ v38;
        if ( v37 <= *(_DWORD *)(v35 + 84) )
          v37 = *(_DWORD *)(v35 + 84);
        v36[64].AllFields = (v37 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v39 & 0xBF;
      }
      v51 = v13->SchedulerAssist;
      v52 = (_KTHREAD *)v35 == v13->IdleThread;
      *p_NextThread = (_KTHREAD *)v35;
      if ( v51 )
        v51[16] = v52;
      if ( *(_BYTE *)(v35 + 388) == 1 )
        *(_DWORD *)(v35 + 132) = *(_DWORD *)(v35 + 132) - *(_DWORD *)(v35 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v35 + 388) = 3;
      v55 = 1;
      goto LABEL_14;
    }
    if ( *(char *)(ready + 195) < 16 )
    {
      if ( *(_QWORD *)(ready + 104) && (v46 = *(_QWORD *)(ready + 104)) != 0 )
      {
        v13 = v53;
        v47 = v53->ScbOffset + v46;
        if ( v47 && (unsigned int)KiGetThreadEffectiveRankNonZero(ready, v47, v34, 0, 0LL) )
        {
          v45 = 1;
          goto LABEL_78;
        }
      }
      else
      {
        v13 = v53;
      }
    }
    v45 = *(_BYTE *)(v35 + 195);
    goto LABEL_78;
  }
  if ( v10 != 3 )
  {
    KiUpdateThreadPriority(0LL, a1, (PVOID *)(unsigned int)(char)v6, 0);
LABEL_14:
    v13 = v53;
    goto LABEL_15;
  }
  v13 = v53;
  KiUpdateThreadPriority((__int64)v53, a1, (PVOID *)(unsigned int)(char)v6, 1);
  if ( v14 < v40 )
  {
    v16 = KiSelectReadyThreadEx(v13, (_KTHREAD *)a1, 0LL);
    v18 = v16;
    if ( !v16 )
      goto LABEL_15;
    v19 = &v13->PriorityState;
    v20 = (unsigned __int8 *)v13->PriorityState;
    if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
    {
      if ( *(char *)(v16 + 195) < 16 )
      {
        if ( *(_QWORD *)(v16 + 104) && (v41 = *(_QWORD *)(v16 + 104)) != 0 )
        {
          v13 = v53;
          v42 = v53->ScbOffset + v41;
          if ( v42 && (unsigned int)KiGetThreadEffectiveRankNonZero(v16, v42, v17, 0, 0LL) )
          {
            v21 = 1;
            goto LABEL_25;
          }
        }
        else
        {
          v13 = v53;
        }
      }
      v21 = *(_BYTE *)(v18 + 195);
    }
    else
    {
      v21 = *(_BYTE *)(v16 + 195);
    }
LABEL_25:
    v22 = v21 & 0x7F | (*(_BYTE *)(v18 + 119) << 7);
    *v20 = v22;
    v23 = v13->SchedulerAssist;
    if ( v23 )
    {
      if ( (_KTHREAD *)v18 == v13->IdleThread )
        v24 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v24 = v22 & 0x7F;
      KiSetSchedulerAssistPriority(v23, v24, 0LL);
    }
    v25 = *v19;
    if ( KeHeteroSystem )
    {
      v26 = *(_DWORD *)(v18 + 80);
      v27 = (v25[64].AllFields ^ *(_BYTE *)(v18 + 512)) & 7 ^ v25[64].AllFields;
      v28 = (v27 ^ (8 * *(_BYTE *)(v18 + 516))) & 0x38 ^ v27;
      if ( v26 <= *(_DWORD *)(v18 + 84) )
        v26 = *(_DWORD *)(v18 + 84);
      v25[64].AllFields = (v26 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v28 & 0xBF;
    }
    v29 = v13->SchedulerAssist;
    v30 = (_KTHREAD *)v18 == v13->IdleThread;
    v13->NextThread = (_KTHREAD *)v18;
    if ( v29 )
      v29[16] = v30;
    if ( *(_BYTE *)(v18 + 388) == 1 )
      *(_DWORD *)(v18 + 132) = *(_DWORD *)(v18 + 132) - *(_DWORD *)(v18 + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(v18 + 388) = 3;
    KiInsertDeferredReadyList(a2, a1);
    goto LABEL_14;
  }
LABEL_16:
  KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
  KiReleaseThreadStateLock(v15, v13, v54);
  if ( v55 && KeGetPcr()->Prcb.Number != v53->Number )
    KiSendSoftwareInterrupt();
  if ( v14 > 0 )
    KiHvEnlightenedGuestPriorityKick((__int64)KeGetCurrentPrcb(), (__int64)v53, v14);
  return v8;
}
