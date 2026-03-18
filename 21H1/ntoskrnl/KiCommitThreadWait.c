/*
 * XREFs of KiCommitThreadWait @ 0x140264C30
 * Callers:
 *     KeRemovePriQueue @ 0x140225BC0 (KeRemovePriQueue.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KiWaitForAllObjects @ 0x1402CD0F4 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x1402FC418 (KeWaitForAlertByThreadId.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KiDecrementProcessStackCount @ 0x14025E0F8 (KiDecrementProcessStackCount.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiInsertTimerTable @ 0x140266C80 (KiInsertTimerTable.c)
 *     KiComputeDueTime @ 0x14026A120 (KiComputeDueTime.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiIncrementConcurrencyCount @ 0x14032243C (KiIncrementConcurrencyCount.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403573EC (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1403588A4 (KiActivateWaiterPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x14051E05C (KiTraceSetTimer.c)
 */

__int64 __fastcall KiCommitThreadWait(__int64 a1, __int64 a2, int a3, _DWORD *a4, _QWORD *a5)
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
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v23; // rcx
  char v24; // r14
  struct _KPRCB *v25; // rcx
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
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  volatile signed __int32 *v50; // r15
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  __int64 v55; // rax
  struct _KPRCB *v56; // rsi
  __int64 v57; // r15
  _DWORD *v58; // rcx
  __int64 v59; // rcx
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rax
  int v69; // eax
  int v70; // eax
  _DWORD *v71; // rcx
  int v72; // eax
  _DWORD *v73; // rcx
  int v74; // eax
  int v75; // [rsp+30h] [rbp-68h] BYREF
  int v76; // [rsp+34h] [rbp-64h] BYREF
  _DWORD *v77; // [rsp+38h] [rbp-60h]
  __int128 v78; // [rsp+40h] [rbp-58h]
  __int64 v79; // [rsp+50h] [rbp-48h]
  int v80; // [rsp+A0h] [rbp+8h] BYREF
  int v81; // [rsp+A8h] [rbp+10h] BYREF
  char v82; // [rsp+B0h] [rbp+18h]

  v77 = a4;
  v82 = 0;
  v6 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v7 = 0;
  v80 = 0;
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
  v81 = 0;
  SchedulerAssist = v13->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v60 = SchedulerAssist[6];
      SchedulerAssist[6] = v60 + 1;
      if ( v60 == -1 )
LABEL_112:
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    v44 = v13->SchedulerAssist;
    if ( v44 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v61 = v44[6] - 1;
        v44[6] = v61;
        if ( !v61 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    do
      KeYieldProcessorEx(&v81, a2, v6, (__int64)a4);
    while ( *(_QWORD *)(a1 + 64) );
    v45 = v13->SchedulerAssist;
    if ( v45 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v62 = v45[6];
        v45[6] = v62 + 1;
        if ( v62 == -1 )
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
      v28 = KeGetCurrentPrcb();
      v75 = 0;
      v29 = v28->SchedulerAssist;
      if ( v29 )
      {
        if ( v28->NestingLevel <= 1u )
        {
          v63 = v29[6];
          v29[6] = v63 + 1;
          if ( v63 == -1 )
LABEL_121:
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->WaitLock, 0LL) )
      {
        v53 = v28->SchedulerAssist;
        if ( v53 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v64 = v53[6] - 1;
            v53[6] = v64;
            if ( !v64 )
              KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        do
          KeYieldProcessorEx(&v75, a2, v6, (__int64)a4);
        while ( CurrentPrcb->WaitLock );
        v54 = v28->SchedulerAssist;
        if ( v54 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            v65 = v54[6];
            v54[6] = v65 + 1;
            if ( v65 == -1 )
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
          v66 = v33[6] - 1;
          v33[6] = v66;
          if ( !v66 )
            KiRemoveSystemWorkPriorityKick(v32);
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
      v34 = *(unsigned int *)(a1 + 952);
      if ( *(_BYTE *)(a1 + 391) )
      {
        if ( !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
        {
          v82 = 1;
          if ( (_DWORD)v34 )
            v77 = (_DWORD *)((char *)v77 + v34);
        }
      }
    }
    if ( *(_BYTE *)(a1 + 643) == 15 || (v18 = *(_BYTE **)(a1 + 232)) == 0LL )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      v19 = KeGetCurrentPrcb();
      v20 = (__int64)v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v69 = *(_DWORD *)(v20 + 24) - 1;
          *(_DWORD *)(v20 + 24) = v69;
          if ( !v69 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
LABEL_16:
      if ( v7 )
        KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184), v20, v6, a4);
      *(_BYTE *)(a1 + 565) = 0;
      if ( !a3 )
        return KiSwapThread(a1, CurrentPrcb, a5);
      v35 = (volatile signed __int32 *)(a1 + 256);
      if ( a3 == 2 )
      {
        v36 = (unsigned __int64)v77 + MEMORY[0xFFFFF780000003B0] + *(_QWORD *)(a1 + 248);
        *(_QWORD *)(a1 + 280) = v36;
        v36 >>= 18;
        v80 = (unsigned __int8)v36;
        LODWORD(v78) = *v35;
        BYTE1(v78) &= ~1u;
        v37 = v82 == 0;
        BYTE2(v78) = v36;
        *v35 = v78;
        if ( !v37 )
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 544) + 2432LL));
      }
      else if ( !(unsigned int)KiComputeDueTime(a1 + 256, v77, 0LL, &v80) )
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
        v17 = 0;
      }
      *(_WORD *)(a1 + 314) = v17;
      if ( (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (int)a1 + 256, 0, v80, 0LL) )
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
      KiTimerWaitTest((__int64)CurrentPrcb, a1 + 256, 0LL);
      return KiSwapThread(a1, CurrentPrcb, a5);
    }
    _m_prefetchw(v18);
    if ( (*v18 & 0x7F) == 0x15 )
    {
      v43 = (unsigned __int8)*(_DWORD *)(a1 + 540);
      v23 = 4 * v43 + 536;
      *(_DWORD *)(a1 + 540) = v43 | 0x100;
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
    v6 = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    v25 = KeGetCurrentPrcb();
    v20 = (__int64)v25->SchedulerAssist;
    if ( v20 )
    {
      if ( v25->NestingLevel <= 1u )
      {
        v67 = *(_DWORD *)(v20 + 24) - 1;
        *(_DWORD *)(v20 + 24) = v67;
        if ( !v67 )
        {
          KiRemoveSystemWorkPriorityKick(v25);
          v6 = 0LL;
        }
      }
    }
    if ( !v24 )
    {
      KiActivateWaiterQueueWithNoLocks(a1, v18, 0LL);
      goto LABEL_16;
    }
    if ( (*v18 & 0x7F) == 0x15 )
    {
      KiActivateWaiterPriQueue(v18);
      goto LABEL_16;
    }
    if ( *((_DWORD *)v18 + 10) >= *((_DWORD *)v18 + 11)
      || (v26 = (_QWORD *)*((_QWORD *)v18 + 3), v27 = v18 + 24, v26 == (_QWORD *)(v18 + 24))
      || *((_BYTE **)v18 + 1) == v18 + 8 )
    {
LABEL_30:
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      goto LABEL_16;
    }
    v41 = *v26;
    v42 = (_QWORD *)v26[1];
    if ( *(_QWORD **)(*v26 + 8LL) == v26 && (_QWORD *)*v42 == v26 )
    {
      *v42 = v41;
      *(_QWORD *)(v41 + 8) = v42;
      *v26 = 0LL;
      if ( KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), (__int64)v18, (__int64)v26) )
      {
        --*((_DWORD *)v18 + 1);
        _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
        goto LABEL_16;
      }
      v68 = *(_QWORD *)v27;
      if ( *(_BYTE **)(*(_QWORD *)v27 + 8LL) == v27 )
      {
        *v26 = v68;
        v26[1] = v27;
        *(_QWORD *)(v68 + 8) = v26;
        *(_QWORD *)v27 = v26;
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
        v55 = 192LL;
      else
        v55 = 257LL;
      *(_QWORD *)(a1 + 200) = v55;
      *(_QWORD *)(a1 + 976) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 388) = 2;
  if ( *(_BYTE *)(a1 + 643) == 15 )
  {
    v59 = *(_QWORD *)(a1 + 232);
    if ( v59 )
      KiIncrementConcurrencyCount(v59, a1);
  }
  KiReleaseThreadLockSafe(a1);
  if ( a3 )
    *(_DWORD *)(a1 + 116) &= ~0x200u;
  v21 = *(_QWORD *)(a1 + 200);
  if ( a5 )
    *a5 = *(_QWORD *)(a1 + 976);
  if ( v8 )
  {
    v56 = KeGetCurrentPrcb();
    v57 = *(char *)(a1 + 391);
    v76 = 0;
    v58 = v56->SchedulerAssist;
    if ( v58 )
    {
      if ( v56->NestingLevel <= 1u )
      {
        v70 = v58[6];
        v58[6] = v70 + 1;
        if ( v70 == -1 )
LABEL_145:
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v71 = v56->SchedulerAssist;
      if ( v71 )
      {
        if ( v56->NestingLevel <= 1u )
        {
          v72 = v71[6] - 1;
          v71[6] = v72;
          if ( !v72 )
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
      do
        KeYieldProcessorEx(&v76, v46, v47, v48);
      while ( *(_QWORD *)(a1 + 64) );
      v73 = v56->SchedulerAssist;
      if ( v73 )
      {
        if ( v56->NestingLevel <= 1u )
        {
          v74 = v73[6];
          v73[6] = v74 + 1;
          if ( v74 == -1 )
            goto LABEL_145;
        }
      }
    }
    if ( v21 == 257 )
    {
      if ( (*(_DWORD *)(a1 + 116) & 0x10) != 0 )
      {
        if ( *(_BYTE *)(v57 + a1 + 114) )
        {
          *(_BYTE *)(v57 + a1 + 114) = 0;
        }
        else if ( (_BYTE)v57 )
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
  v49 = v9 + 48LL * *(unsigned __int8 *)(a1 + 587);
  do
  {
    if ( *(_BYTE *)(v9 + 17) < 5u )
    {
      v50 = *(volatile signed __int32 **)(v9 + 32);
      KiAcquireKobjectLockSafe(v50, v46, v47, v48);
      if ( *(_BYTE *)(v9 + 17) == 4 )
      {
        v51 = *(_QWORD *)v9;
        v52 = *(_QWORD **)(v9 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || *v52 != v9 )
          goto LABEL_87;
        *v52 = v51;
        *(_QWORD *)(v51 + 8) = v52;
      }
      _InterlockedAnd(v50, 0xFFFFFF7F);
    }
    v9 += 48LL;
  }
  while ( v9 != v49 );
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)CurrentPrcb, 1LL, 0LL, 0LL);
  LOBYTE(v47) = 1;
  KiExitThreadWait(CurrentPrcb, a1, v47);
  return v21;
}
