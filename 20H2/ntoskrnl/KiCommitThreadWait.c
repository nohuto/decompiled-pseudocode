/*
 * XREFs of KiCommitThreadWait @ 0x14021BDA0
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeRemovePriQueue @ 0x14028E810 (KeRemovePriQueue.c)
 *     KeWaitForAlertByThreadId @ 0x1402DA2F0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402F5424 (KiWaitForAllObjects.c)
 * Callees:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x14021DDF0 (KiInsertTimerTable.c)
 *     KiComputeDueTime @ 0x140247860 (KiComputeDueTime.c)
 *     KiDecrementProcessStackCount @ 0x140268DA0 (KiDecrementProcessStackCount.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiIncrementConcurrencyCount @ 0x14028D788 (KiIncrementConcurrencyCount.c)
 *     KiExitThreadWait @ 0x1402D8240 (KiExitThreadWait.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140303618 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1403037E0 (KiActivateWaiterPriQueue.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x14052207C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 *a2, int a3, __int64 a4, _QWORD *a5)
{
  int v6; // r13d
  char v7; // r12
  __int64 *v8; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  BOOL v11; // r15d
  struct _KPRCB *v12; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v14; // al
  int v15; // edx
  __int16 v16; // r12
  _BYTE *v17; // rdi
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rdi
  __int64 v22; // rcx
  char v23; // r14
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  _QWORD *v26; // r15
  _BYTE *v27; // r14
  struct _KPRCB *v28; // rdi
  _DWORD *v29; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v31; // rcx
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rax
  volatile signed __int32 *v35; // rdi
  unsigned __int64 v36; // rcx
  bool v37; // zf
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // r8
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // rcx
  _DWORD *v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rsi
  volatile signed __int32 *v48; // r15
  __int64 *v49; // rcx
  __int64 **v50; // rax
  _DWORD *v51; // rcx
  _DWORD *v52; // rcx
  __int64 v53; // rax
  struct _KPRCB *v54; // rsi
  __int64 v55; // r15
  _DWORD *v56; // rcx
  __int64 v57; // rcx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  _DWORD *v71; // rcx
  int v72; // eax
  int v73; // [rsp+30h] [rbp-68h] BYREF
  int v74; // [rsp+34h] [rbp-64h] BYREF
  __int64 v75; // [rsp+38h] [rbp-60h]
  __int128 v76; // [rsp+40h] [rbp-58h]
  __int64 v77; // [rsp+50h] [rbp-48h]
  int v78; // [rsp+A0h] [rbp+8h] BYREF
  int v79; // [rsp+A8h] [rbp+10h] BYREF
  char v80; // [rsp+B0h] [rbp+18h]

  v75 = a4;
  v80 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v6 = 0;
  v78 = 0;
  v7 = 0;
  v8 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)(a1 + 256) |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v11 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v12 = KeGetCurrentPrcb();
  v79 = 0;
  SchedulerAssist = v12->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v12->NestingLevel <= 1u )
    {
      v58 = SchedulerAssist[6];
      SchedulerAssist[6] = v58 + 1;
      if ( v58 == -1 )
LABEL_112:
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v44 = v12->SchedulerAssist;
    if ( v44 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v59 = v44[6] - 1;
        v44[6] = v59;
        if ( !v59 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    do
      KeYieldProcessorEx(&v79);
    while ( *(_QWORD *)(a1 + 64) );
    v45 = v12->SchedulerAssist;
    if ( v45 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v60 = v45[6];
        v45[6] = v60 + 1;
        if ( v60 == -1 )
          goto LABEL_112;
      }
    }
  }
  v14 = *(_BYTE *)(a1 + 112);
  if ( (v14 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v14 & 0xF8 | 1;
    if ( v11 )
    {
      v28 = KeGetCurrentPrcb();
      v73 = 0;
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v61 = v29[6];
          v29[6] = v61 + 1;
          if ( v61 == -1 )
LABEL_121:
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        v51 = v28->SchedulerAssist;
        if ( v51 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v62 = v51[6] - 1;
            v51[6] = v62;
            if ( !v62 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v73);
        while ( CurrentPrcb->WaitLock );
        v52 = v28->SchedulerAssist;
        if ( v52 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v63 = v52[6];
            v52[6] = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_121;
          }
        }
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v31 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        goto LABEL_87;
      v31->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v31;
      CurrentPrcb->WaitListHead.Blink = v31;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      if ( v33 )
      {
        if ( v32->NestingLevel <= 1u )
        {
          v64 = v33[6] - 1;
          v33[6] = v64;
          if ( !v64 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    v15 = *(_DWORD *)(a1 + 120);
    if ( (v15 & 0x1000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v15 = *(_DWORD *)(a1 + 120);
    }
    v16 = 1;
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & ((v15 & 0x4000) != 0)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v6 = 1;
    }
    if ( a3 == 2 )
    {
      v34 = *(unsigned int *)(a1 + 952);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v80 = 1;
          if ( (_DWORD)v34 )
            v75 += v34;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v17 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      if ( v19 )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v67 = v19[6] - 1;
          v19[6] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
LABEL_16:
      if ( v6 )
        KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
      *(_BYTE *)(a1 + 565) = 0;
      if ( !a3 )
        return KiSwapThread(a1, CurrentPrcb, a5);
      v35 = (volatile signed __int32 *)(a1 + 256);
      if ( a3 == 2 )
      {
        v36 = v75 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 280) = v36;
        v36 >>= 18;
        v78 = (unsigned __int8)v36;
        LODWORD(v76) = *v35;
        BYTE1(v76) &= ~1u;
        v37 = v80 == 0;
        BYTE2(v76) = v36;
        *v35 = v76;
        if ( !v37 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2432LL));
      }
      else if ( !(unsigned int)KiComputeDueTime(a1 + 256, v75, 0LL, &v78) )
      {
        goto LABEL_107;
      }
      if ( (KiVelocityFlags & 0x2000) == 0
        || ((v38 = *(_QWORD *)(a1 + 544), (*(_DWORD *)(v38 + 1124) & 0x1000) == 0)
         || (*(_DWORD *)(v38 + 2172) & 0x4000000) != 0
          ? (v39 = 0)
          : (v39 = 1),
            v39) )
      {
        v16 = 0;
      }
      *(_WORD *)(a1 + 314) = v16;
      if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (int)a1 + 256, 0, v78, 0LL) )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          LOBYTE(v40) = 1;
          KiTraceSetTimer(a1 + 256, 0LL, v40);
        }
        else
        {
          _InterlockedAnd(v35, 0xFFFFFF7F);
        }
        return KiSwapThread(a1, CurrentPrcb, a5);
      }
LABEL_107:
      KiTimerWaitTest(CurrentPrcb, a1 + 256, 0LL);
      return KiSwapThread(a1, CurrentPrcb, a5);
    }
    _m_prefetchw(v17);
    if ( (*v17 & 0x7F) == 0x15 )
    {
      v43 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v22 = 4 * v43 + 536;
      *(_DWORD *)(a1 + 540) = v43 | 0x100;
    }
    else
    {
      v22 = 40LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&v17[v22]);
    if ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
      v23 = 0;
    else
      v23 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    v24 = KeGetCurrentPrcb();
    v25 = v24->SchedulerAssist;
    if ( v25 )
    {
      if ( v24->NestingLevel <= 1u )
      {
        v65 = v25[6] - 1;
        v25[6] = v65;
        if ( !v65 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
    if ( !v23 )
    {
      KiActivateWaiterQueueWithNoLocks(a1, v17, 0LL);
      goto LABEL_16;
    }
    if ( (*v17 & 0x7F) == 0x15 )
    {
      KiActivateWaiterPriQueue(v17);
      goto LABEL_16;
    }
    if ( *((_DWORD *)v17 + 10) >= *((_DWORD *)v17 + 11)
      || (v26 = (_QWORD *)*((_QWORD *)v17 + 3), v27 = v17 + 24, v26 == (_QWORD *)(v17 + 24))
      || *((_BYTE **)v17 + 1) == v17 + 8 )
    {
LABEL_30:
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
      goto LABEL_16;
    }
    v41 = *v26;
    v42 = (_QWORD *)v26[1];
    if ( *(_QWORD **)(*v26 + 8LL) == v26 && (_QWORD *)*v42 == v26 )
    {
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      *v26 = 0LL;
      if ( (unsigned __int8)KiWakeQueueWaiter(KeGetCurrentPrcb(), v17, v26) )
      {
        --*((_DWORD *)v17 + 1);
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        goto LABEL_16;
      }
      v66 = *(_QWORD *)v27;
      if ( *(_BYTE **)(*(_QWORD *)v27 + 8LL) == v27 )
      {
        *v26 = v66;
        v26[1] = v27;
        *(_QWORD *)(v66 + 8) = v26;
        *(_QWORD *)v27 = v26;
        goto LABEL_30;
      }
    }
LABEL_87:
    __fastfail(3u);
  }
  if ( (v14 & 7) == 0 )
  {
    if ( (v14 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    else
    {
      v7 = 1;
      if ( (v14 & 0x40) != 0 )
        v53 = 192LL;
      else
        v53 = 257LL;
      *(_QWORD *)(a1 + 200) = v53;
      *(_QWORD *)(a1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v57 = *(_QWORD *)(a1 + 232);
    if ( v57 )
      KiIncrementConcurrencyCount(v57, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v20 = *(_QWORD *)(a1 + 200);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 976);
  if ( v7 )
  {
    v54 = KeGetCurrentPrcb();
    v55 = *(char *)(a1 + 391);
    v74 = 0;
    v56 = v54->SchedulerAssist;
    if ( v56 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v68 = v56[6];
        v56[6] = v68 + 1;
        if ( v68 == -1 )
LABEL_145:
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v69 = v54->SchedulerAssist;
      if ( v69 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v70 = v69[6] - 1;
          v69[6] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      do
        KeYieldProcessorEx(&v74);
      while ( *(_QWORD *)(a1 + 64) );
      v71 = v54->SchedulerAssist;
      if ( v71 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v72 = v71[6];
          v71[6] = v72 + 1;
          if ( v72 == -1 )
            goto LABEL_145;
        }
      }
    }
    if ( v20 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v55 + a1 + 114) )
        {
          *(_BYTE *)(v55 + a1 + 114) = 0;
        }
        else if ( (_BYTE)v55 )
        {
          *(_BYTE *)(a1 + 114) = 0;
        }
      }
      else
      {
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 4u);
      }
    }
    else if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
    {
      *(_BYTE *)(a1 + 194) |= 2u;
    }
    KiReleaseThreadLockSafe(a1);
  }
  v47 = &v8[6 * *(unsigned __int8 *)(a1 + 587)];
  do
  {
    if ( *((_BYTE *)v8 + 17) < 5u )
    {
      v48 = (volatile signed __int32 *)v8[4];
      KiAcquireKobjectLockSafe(v48);
      if ( *((_BYTE *)v8 + 17) == 4 )
      {
        v49 = (__int64 *)*v8;
        v50 = (__int64 **)v8[1];
        if ( *(__int64 **)(*v8 + 8) != v8 || *v50 != v8 )
          goto LABEL_87;
        *v50 = v49;
        v49[1] = (__int64)v50;
      }
      _InterlockedAnd(v48, 0xFFFFFF7F);
    }
    v8 += 6;
  }
  while ( v8 != v47 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL, 0LL);
  LOBYTE(v46) = 1;
  KiExitThreadWait(CurrentPrcb, a1, v46);
  return v20;
}
