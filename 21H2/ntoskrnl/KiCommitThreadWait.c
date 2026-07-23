/*
 * XREFs of KiCommitThreadWait @ 0x140350D00
 * Callers:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x14022A600 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1402788A0 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     KeRemovePriQueue @ 0x1402E6A20 (KeRemovePriQueue.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14021CA5C (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x14021CC24 (KiActivateWaiterPriQueue.c)
 *     KiIncrementConcurrencyCount @ 0x1402511CC (KiIncrementConcurrencyCount.c)
 *     KiExitThreadWait @ 0x1402662D0 (KiExitThreadWait.c)
 *     KiComputeDueTime @ 0x140281820 (KiComputeDueTime.c)
 *     KiDecrementProcessStackCount @ 0x1402AC380 (KiDecrementProcessStackCount.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // r8
  int v7; // r13d
  char v8; // r12
  __int64 v9; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  BOOL v12; // r15d
  struct _KPRCB *v13; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v15; // al
  int v16; // edx
  __int16 v17; // r12
  _BYTE *v18; // rdi
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rdi
  __int64 v23; // rcx
  char v24; // r14
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _QWORD *v27; // r15
  _BYTE *v28; // r14
  struct _KPRCB *v29; // rdi
  _DWORD *v30; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v32; // rcx
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdi
  unsigned __int64 v37; // rcx
  bool v38; // zf
  __int64 v39; // rcx
  char v40; // al
  __int64 v41; // r8
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rsi
  volatile signed __int32 *v51; // r15
  __int64 v52; // rcx
  _QWORD *v53; // rax
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  __int64 v56; // rax
  struct _KPRCB *v57; // rsi
  __int64 v58; // r15
  _DWORD *v59; // rcx
  _BYTE *v60; // rcx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  _DWORD *v72; // rcx
  int v73; // eax
  _DWORD *v74; // rcx
  int v75; // eax
  int v76; // [rsp+30h] [rbp-68h] BYREF
  int v77; // [rsp+34h] [rbp-64h] BYREF
  __int64 v78; // [rsp+38h] [rbp-60h]
  __int128 v79; // [rsp+40h] [rbp-58h]
  __int64 v80; // [rsp+50h] [rbp-48h]
  int v81; // [rsp+A0h] [rbp+8h] BYREF
  int v82; // [rsp+A8h] [rbp+10h] BYREF
  char v83; // [rsp+B0h] [rbp+18h]

  v78 = a4;
  v83 = 0;
  v6 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v7 = 0;
  v81 = 0;
  v8 = 0;
  v9 = a2;
  _m_prefetchw((const void *)(a1 + 112));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 116) |= 0x200u;
    *(_DWORD *)(a1 + 256) |= 0x40000080u;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  *(_QWORD *)(a1 + 208) = a2;
  v12 = *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
  v13 = KeGetCurrentPrcb();
  v82 = 0;
  SchedulerAssist = v13->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v61 = SchedulerAssist[6];
      SchedulerAssist[6] = v61 + 1;
      if ( v61 == -1 )
LABEL_112:
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v45 = v13->SchedulerAssist;
    if ( v45 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v62 = v45[6] - 1;
        v45[6] = v62;
        if ( !v62 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    do
      KeYieldProcessorEx(&v82, a2, v6, a4);
    while ( *(_QWORD *)(a1 + 64) );
    v46 = v13->SchedulerAssist;
    if ( v46 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v63 = v46[6];
        v46[6] = v63 + 1;
        if ( v63 == -1 )
          goto LABEL_112;
      }
    }
  }
  v15 = *(_BYTE *)(a1 + 112);
  if ( (v15 & 0xE7) == 0 )
  {
    *(_BYTE *)(a1 + 112) = v15 & 0xF8 | 1;
    if ( v12 )
    {
      v29 = KeGetCurrentPrcb();
      v76 = 0;
      v30 = v29->SchedulerAssist;
      if ( v30 )
      {
        if ( v29->NestingLevel <= 1u )
        {
          v64 = v30[6];
          v30[6] = v64 + 1;
          if ( v64 == -1 )
LABEL_121:
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        v54 = v29->SchedulerAssist;
        if ( v54 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v65 = v54[6] - 1;
            v54[6] = v65;
            if ( !v65 )
              KiRemoveSystemWorkPriorityKick(v29);
          }
        }
        do
          KeYieldProcessorEx(&v76, a2, v6, a4);
        while ( CurrentPrcb->WaitLock );
        v55 = v29->SchedulerAssist;
        if ( v55 )
        {
          if ( v29->NestingLevel <= 1u )
          {
            v66 = v55[6];
            v55[6] = v66 + 1;
            if ( v66 == -1 )
              goto LABEL_121;
          }
        }
      }
      Blink = CurrentPrcb->WaitListHead.Blink;
      v32 = (struct _LIST_ENTRY *)(a1 + 216);
      if ( Blink->Flink != &CurrentPrcb->WaitListHead )
        goto LABEL_87;
      v32->Flink = &CurrentPrcb->WaitListHead;
      *(_QWORD *)(a1 + 224) = Blink;
      Blink->Flink = v32;
      CurrentPrcb->WaitListHead.Blink = v32;
      *(_QWORD *)(a1 + 712) = CurrentPrcb;
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->WaitLock, 0LL);
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      if ( v34 )
      {
        if ( v33->NestingLevel <= 1u )
        {
          v67 = v34[6] - 1;
          v34[6] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 120);
    if ( (v16 & 0x1000) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
      v16 = *(_DWORD *)(a1 + 120);
    }
    v17 = 1;
    if ( (_bittest((const signed __int32 *)(a1 + 116), 0x13u) & ((v16 & 0x4000) != 0)) != 0
      && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
    {
      v7 = 1;
    }
    if ( a3 == 2 )
    {
      v35 = *(unsigned int *)(a1 + 952);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v83 = 1;
          if ( (_DWORD)v35 )
            v78 += v35;
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v18 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v70 = v20[6] - 1;
          v20[6] = v70;
          if ( !v70 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
LABEL_16:
      if ( v7 )
        KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
      *(_BYTE *)(a1 + 565) = 0;
      if ( !a3 )
        return KiSwapThread(a1, CurrentPrcb, a5);
      v36 = (volatile signed __int32 *)(a1 + 256);
      if ( a3 == 2 )
      {
        v37 = v78 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 280) = v37;
        v37 >>= 18;
        v81 = (unsigned __int8)v37;
        LODWORD(v79) = *v36;
        BYTE1(v79) &= ~1u;
        v38 = v83 == 0;
        BYTE2(v79) = v37;
        *v36 = v79;
        if ( !v38 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2432LL));
      }
      else if ( !(unsigned int)KiComputeDueTime((int *)(a1 + 256), v78, 0, &v81) )
      {
        goto LABEL_107;
      }
      if ( (KiVelocityFlags & 0x2000) == 0
        || ((v39 = *(_QWORD *)(a1 + 544), (*(_DWORD *)(v39 + 1124) & 0x1000) == 0)
         || (*(_DWORD *)(v39 + 2172) & 0x4000000) != 0
          ? (v40 = 0)
          : (v40 = 1),
            v40) )
      {
        v17 = 0;
      }
      *(_WORD *)(a1 + 314) = v17;
      if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (int)a1 + 256, 0, v81, 0LL) )
      {
        if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
        {
          LOBYTE(v41) = 1;
          KiTraceSetTimer(a1 + 256, 0LL, v41);
        }
        else
        {
          _InterlockedAnd(v36, 0xFFFFFF7F);
        }
        return KiSwapThread(a1, CurrentPrcb, a5);
      }
LABEL_107:
      KiTimerWaitTest((__int64)CurrentPrcb, a1 + 256, 0LL);
      return KiSwapThread(a1, CurrentPrcb, a5);
    }
    _m_prefetchw(v18);
    if ( (*v18 & 0x7F) == 0x15 )
    {
      v44 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v23 = 4 * v44 + 536;
      *(_DWORD *)(a1 + 540) = v44 | 0x100;
    }
    else
    {
      v23 = 40LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)&v18[v23]);
    if ( _interlockedbittestandset((volatile signed __int32 *)v18, 7u) )
      v24 = 0;
    else
      v24 = 1;
    *(_QWORD *)(a1 + 64) = 0LL;
    v25 = KeGetCurrentPrcb();
    v26 = v25->SchedulerAssist;
    if ( v26 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v68 = v26[6] - 1;
        v26[6] = v68;
        if ( !v68 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
    if ( !v24 )
    {
      KiActivateWaiterQueueWithNoLocks(a1, (unsigned __int64)v18, 0LL);
      goto LABEL_16;
    }
    if ( (*v18 & 0x7F) == 0x15 )
    {
      KiActivateWaiterPriQueue((ULONG_PTR)v18);
      goto LABEL_16;
    }
    if ( *((_DWORD *)v18 + 10) >= *((_DWORD *)v18 + 11)
      || (v27 = (_QWORD *)*((_QWORD *)v18 + 3), v28 = v18 + 24, v27 == (_QWORD *)(v18 + 24))
      || *((_BYTE **)v18 + 1) == v18 + 8 )
    {
LABEL_30:
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      goto LABEL_16;
    }
    v42 = *v27;
    v43 = (_QWORD *)v27[1];
    if ( *(_QWORD **)(*v27 + 8LL) == v27 && (_QWORD *)*v43 == v27 )
    {
      *v43 = v42;
      *(_QWORD *)(v42 + 8) = v43;
      *v27 = 0LL;
      if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v18, (__int64)v27, a4) )
      {
        --*((_DWORD *)v18 + 1);
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        goto LABEL_16;
      }
      v69 = *(_QWORD *)v28;
      if ( *(_BYTE **)(*(_QWORD *)v28 + 8LL) == v28 )
      {
        *v27 = v69;
        v27[1] = v28;
        *(_QWORD *)(v69 + 8) = v27;
        *(_QWORD *)v28 = v27;
        goto LABEL_30;
      }
    }
LABEL_87:
    __fastfail(3u);
  }
  if ( (v15 & 7) == 0 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      *(_QWORD *)(a1 + 200) = 256LL;
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    else
    {
      v8 = 1;
      if ( (v15 & 0x40) != 0 )
        v56 = 192LL;
      else
        v56 = 257LL;
      *(_QWORD *)(a1 + 200) = v56;
      *(_QWORD *)(a1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v60 = *(_BYTE **)(a1 + 232);
    if ( v60 )
      KiIncrementConcurrencyCount(v60, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v21 = *(_QWORD *)(a1 + 200);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 976);
  if ( v8 )
  {
    v57 = KeGetCurrentPrcb();
    v58 = *(char *)(a1 + 391);
    v77 = 0;
    v59 = v57->SchedulerAssist;
    if ( v59 )
    {
      if ( v57->NestingLevel <= 1u )
      {
        v71 = v59[6];
        v59[6] = v71 + 1;
        if ( v71 == -1 )
LABEL_145:
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v72 = v57->SchedulerAssist;
      if ( v72 )
      {
        if ( v57->NestingLevel <= 1u )
        {
          v73 = v72[6] - 1;
          v72[6] = v73;
          if ( !v73 )
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
      do
        KeYieldProcessorEx(&v77, v47, v48, v49);
      while ( *(_QWORD *)(a1 + 64) );
      v74 = v57->SchedulerAssist;
      if ( v74 )
      {
        if ( v57->NestingLevel <= 1u )
        {
          v75 = v74[6];
          v74[6] = v75 + 1;
          if ( v75 == -1 )
            goto LABEL_145;
        }
      }
    }
    if ( v21 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v58 + a1 + 114) )
        {
          *(_BYTE *)(v58 + a1 + 114) = 0;
        }
        else if ( (_BYTE)v58 )
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
  v50 = v9 + 48LL * *(unsigned __int8 *)(a1 + 587);
  do
  {
    if ( *(_BYTE *)(v9 + 17) < 5u )
    {
      v51 = *(volatile signed __int32 **)(v9 + 32);
      KiAcquireKobjectLockSafe(v51, v47, v48, v49);
      if ( *(_BYTE *)(v9 + 17) == 4 )
      {
        v52 = *(_QWORD *)v9;
        v53 = *(_QWORD **)(v9 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v53 != v9 )
          goto LABEL_87;
        *v53 = v52;
        *(_QWORD *)(v52 + 8) = v53;
      }
      _InterlockedAnd(v51, 0xFFFFFF7F);
    }
    v9 += 48LL;
  }
  while ( v9 != v50 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  LOBYTE(v48) = 1;
  KiExitThreadWait((__int64)CurrentPrcb, a1, v48);
  return v21;
}
