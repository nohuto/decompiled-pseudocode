/*
 * XREFs of KiRundownMutants @ 0x140356A08
 * Callers:
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  _QWORD *v3; // rdx
  __int64 v4; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v6; // r12
  unsigned int v7; // r14d
  int v8; // r13d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  struct _KPRCB *v11; // rbx
  _DWORD *v12; // rcx
  _QWORD *v13; // rsi
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rdx
  volatile signed __int32 **v16; // rcx
  volatile signed __int32 *v17; // r12
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  volatile signed __int32 *v29; // rax
  __int64 v30; // rdi
  volatile signed __int32 **v31; // rcx
  char v32; // al
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rsi
  _QWORD *v36; // r15
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v40; // r8
  __int64 v41; // rax
  ULONG_PTR *v42; // rbx
  __int64 v43; // rdi
  unsigned __int8 v44; // cl
  ULONG_PTR *v45; // rbx
  __int64 v46; // rdi
  int v47; // [rsp+30h] [rbp-168h]
  unsigned int v48; // [rsp+34h] [rbp-164h]
  unsigned __int8 v49; // [rsp+38h] [rbp-160h]
  __int64 v50; // [rsp+40h] [rbp-158h]
  int v51; // [rsp+48h] [rbp-150h] BYREF
  int v52; // [rsp+4Ch] [rbp-14Ch] BYREF
  __int64 v53; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v54[32]; // [rsp+60h] [rbp-138h] BYREF

  result = (unsigned __int8)memset(v54, 0, sizeof(v54));
  v53 = 0LL;
  v6 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v6 == v6 )
    return result;
  v7 = 0;
  v8 = 0;
  v48 = 0;
  v47 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = (_QWORD *)((-1LL << (CurrentIrql + 1)) & 4);
    v4 = (unsigned int)v3 | SchedulerAssist[5];
    SchedulerAssist[5] = v4;
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = (__int64)CurrentPrcb;
  while ( 1 )
  {
    v11 = KeGetCurrentPrcb();
    v51 = 0;
    while ( 1 )
    {
      v12 = v11->SchedulerAssist;
      if ( v12 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v18 = v12[6];
          v12[6] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v19 = v11->SchedulerAssist;
      if ( v19 )
      {
        if ( v11->NestingLevel <= 1u )
        {
          v20 = v19[6] - 1;
          v19[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v11);
        }
      }
      do
        KeYieldProcessorEx(&v51, (__int64)v3, v4, (__int64)SchedulerAssist);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v13 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v14 = (volatile signed __int32 *)(v13 - 3);
    if ( *((_BYTE *)v13 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v13 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset(v14, 7u) )
      goto LABEL_11;
    KiReleaseThreadLockSafe(BugCheckParameter1);
    ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v14 >> 4) & 0x3F)]);
    if ( v13 != (_QWORD *)*v6 )
      goto LABEL_35;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v13 - 6, v21, v22, v23);
    if ( *((_QWORD *)v14 + 5) != BugCheckParameter1 )
    {
      _InterlockedAnd(v14, 0xFFFFFF7F);
LABEL_35:
      v13 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v14 >> 4) & 0x3F)]);
    CurrentIrql = v49;
    if ( v13 )
    {
      v24 = KeGetCurrentPrcb();
      v52 = 0;
      while ( 1 )
      {
        v25 = v24->SchedulerAssist;
        if ( v25 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v26 = v25[6];
            v25[6] = v26 + 1;
            if ( v26 == -1 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          break;
        v27 = v24->SchedulerAssist;
        if ( v27 )
        {
          if ( v24->NestingLevel <= 1u )
          {
            v28 = v27[6] - 1;
            v27[6] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(v24);
          }
        }
        do
          KeYieldProcessorEx(&v52, (__int64)v3, v4, (__int64)SchedulerAssist);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_11:
      v15 = *((_QWORD *)v14 + 3);
      v16 = (volatile signed __int32 **)*((_QWORD *)v14 + 4);
      if ( *(volatile signed __int32 **)(v15 + 8) != v14 + 6 || *v16 != v14 + 6 )
LABEL_85:
        __fastfail(3u);
      *v16 = (volatile signed __int32 *)v15;
      *(_QWORD *)(v15 + 8) = v16;
      KiReleaseThreadLockSafe(BugCheckParameter1);
      *((_BYTE *)v14 + 48) |= 1u;
      v17 = (volatile signed __int32 *)*((_QWORD *)v14 + 1);
      *((_QWORD *)v14 + 5) = 0LL;
      *((_DWORD *)v14 + 1) = 1;
      if ( v17 != v14 + 2 )
      {
        while ( 1 )
        {
          v29 = *(volatile signed __int32 **)v17;
          v30 = (__int64)v17;
          v17 = v29;
          v31 = *(volatile signed __int32 ***)(v30 + 8);
          if ( *((_QWORD *)v29 + 1) != v30 || *v31 != (volatile signed __int32 *)v30 )
            goto LABEL_85;
          *v31 = v29;
          *((_QWORD *)v29 + 1) = v31;
          v32 = *(_BYTE *)(v30 + 16);
          if ( v32 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v30, *(unsigned __int16 *)(v30 + 18), &v53) )
            {
              v33 = (*((_DWORD *)v14 + 1))-- == 1;
              if ( v33 )
                goto LABEL_75;
            }
          }
          else
          {
            v34 = 2LL;
            if ( v32 == 2 )
            {
              *(_BYTE *)(v30 + 17) = 5;
              v35 = *(_QWORD *)(v30 + 24);
              *(_QWORD *)v30 = 0LL;
              v36 = (_QWORD *)(v35 + 8);
              v37 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
              {
                SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
                v34 = (-1LL << (v37 + 1)) & 4;
                v4 = (unsigned int)v34 | SchedulerAssist[5];
                SchedulerAssist[5] = v4;
              }
              v38 = KeGetCurrentPrcb();
              CurrentThread = v38->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                LOBYTE(v40) = KeIsThreadRunning(v38->CurrentThread, v34);
                EtwTraceEnqueueWork(CurrentThread, v30, v40);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v35, v34, v4, (__int64)SchedulerAssist);
              if ( (_QWORD *)*v36 == v36
                || *(_DWORD *)(v35 + 40) >= *(_DWORD *)(v35 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v35 && CurrentThread->WaitReason == 15
                || !KiWakeQueueWaiter((__int64)v38, v35, v30) )
              {
                v4 = *(unsigned int *)(v35 + 4);
                *(_DWORD *)(v35 + 4) = v4 + 1;
                v3 = *(_QWORD **)(v35 + 32);
                if ( *v3 != v35 + 24 )
                  goto LABEL_85;
                *(_QWORD *)v30 = v35 + 24;
                *(_QWORD *)(v30 + 8) = v3;
                *v3 = v30;
                *(_QWORD *)(v35 + 32) = v30;
                if ( !(_DWORD)v4 && (_QWORD *)*v36 != v36 )
                  KiWakeOtherQueueWaiters((__int64)v38, v35, v4, (__int64)SchedulerAssist);
              }
              _InterlockedAnd((volatile signed __int32 *)v35, 0xFFFFFF7F);
              v33 = (*((_DWORD *)v14 + 1))-- == 1;
              if ( v33 )
              {
LABEL_75:
                v7 = v48;
                v8 = v47;
                break;
              }
              CurrentPrcb = (struct _KPRCB *)v50;
            }
            else
            {
              KiTryUnwaitThread((__int64)CurrentPrcb, v30, 256LL, 0LL);
            }
          }
          if ( v17 == v14 + 2 )
            goto LABEL_75;
        }
      }
      if ( (v14[12] & 2) != 0 )
      {
        v41 = v7++;
        v48 = v7;
        v54[v41] = v14;
      }
      _InterlockedAnd(v14, 0xFFFFFF7F);
      CurrentPrcb = (struct _KPRCB *)v50;
      v6 = (_QWORD *)(BugCheckParameter1 + 776);
      CurrentIrql = v49;
      v47 = ++v8;
      if ( v8 == 32 )
      {
        CurrentIrql = v49;
        KiExitDispatcher(v50, 0LL, 1LL, 1LL, v49);
        if ( v7 )
        {
          v42 = v54;
          v43 = v7;
          do
          {
            KeAbPostRelease(*v42++);
            --v43;
          }
          while ( v43 );
          CurrentIrql = v49;
        }
        v8 = 0;
        v7 = 0;
        v47 = 0;
        v48 = 0;
        v44 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v3 = (_QWORD *)((-1LL << (v44 + 1)) & 4);
          v4 = (unsigned int)v3 | SchedulerAssist[5];
          SchedulerAssist[5] = v4;
        }
        v6 = (_QWORD *)(BugCheckParameter1 + 776);
        goto LABEL_4;
      }
    }
  }
  KiReleaseThreadLockSafe(BugCheckParameter1);
  result = KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 1LL, CurrentIrql);
  if ( v7 )
  {
    v45 = v54;
    v46 = v7;
    do
    {
      result = KeAbPostRelease(*v45++);
      --v46;
    }
    while ( v46 );
  }
  return result;
}
