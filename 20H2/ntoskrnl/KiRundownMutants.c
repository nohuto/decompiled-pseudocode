/*
 * XREFs of KiRundownMutants @ 0x1402D5C98
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402971C0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  _QWORD *v3; // r12
  unsigned int v4; // r14d
  int v5; // r13d
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  struct _KPRCB *v8; // rbx
  _DWORD *v9; // rcx
  _QWORD *v10; // rsi
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  volatile signed __int32 **v13; // rcx
  volatile signed __int32 *v14; // r12
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  struct _KPRCB *v19; // rdi
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  volatile signed __int32 *v24; // rax
  __int64 v25; // rdi
  volatile signed __int32 **v26; // rcx
  char v27; // al
  bool v28; // zf
  __int64 v29; // rsi
  _QWORD *v30; // r15
  unsigned __int8 v31; // cl
  _DWORD *v32; // r9
  struct _KPRCB *v33; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v35; // r8
  int v36; // r8d
  __int64 *v37; // rdx
  __int64 v38; // rax
  ULONG_PTR *v39; // rbx
  __int64 v40; // rdi
  unsigned __int8 v41; // cl
  _DWORD *v42; // r9
  ULONG_PTR *v43; // rbx
  __int64 v44; // rdi
  int v45; // [rsp+30h] [rbp-168h]
  unsigned int v46; // [rsp+34h] [rbp-164h]
  unsigned __int8 v47; // [rsp+38h] [rbp-160h]
  __int64 v48; // [rsp+40h] [rbp-158h]
  int v49; // [rsp+48h] [rbp-150h] BYREF
  int v50; // [rsp+4Ch] [rbp-14Ch] BYREF
  __int64 v51; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v52[32]; // [rsp+60h] [rbp-138h] BYREF

  result = (unsigned __int8)memset(v52, 0, sizeof(v52));
  v51 = 0LL;
  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 == v3 )
    return result;
  v4 = 0;
  v5 = 0;
  v46 = 0;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v47 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v48 = (__int64)CurrentPrcb;
  while ( 1 )
  {
    v8 = KeGetCurrentPrcb();
    v49 = 0;
    while ( 1 )
    {
      v9 = v8->SchedulerAssist;
      if ( v9 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v16 = v9[6];
          v9[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v17 = v8->SchedulerAssist;
      if ( v17 )
      {
        if ( v8->NestingLevel <= 1u )
        {
          v18 = v17[6] - 1;
          v17[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(v8);
        }
      }
      do
        KeYieldProcessorEx(&v49);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v10 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v11 = (volatile signed __int32 *)(v10 - 3);
    if ( *((_BYTE *)v10 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v10 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset(v11, 7u) )
      goto LABEL_11;
    KiReleaseThreadLockSafe(BugCheckParameter1);
    ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v11 >> 4) & 0x3F)]);
    if ( v10 != (_QWORD *)*v3 )
      goto LABEL_35;
    KiAcquireKobjectLockSafe(v10 - 3);
    if ( *((_QWORD *)v11 + 5) != BugCheckParameter1 )
    {
      _InterlockedAnd(v11, 0xFFFFFF7F);
LABEL_35:
      v10 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v11 >> 4) & 0x3F)]);
    CurrentIrql = v47;
    if ( v10 )
    {
      v19 = KeGetCurrentPrcb();
      v50 = 0;
      while ( 1 )
      {
        v20 = v19->SchedulerAssist;
        if ( v20 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v21 = v20[6];
            v20[6] = v21 + 1;
            if ( v21 == -1 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          break;
        v22 = v19->SchedulerAssist;
        if ( v22 )
        {
          if ( v19->NestingLevel <= 1u )
          {
            v23 = v22[6] - 1;
            v22[6] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
        do
          KeYieldProcessorEx(&v50);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_11:
      v12 = *((_QWORD *)v11 + 3);
      v13 = (volatile signed __int32 **)*((_QWORD *)v11 + 4);
      if ( *(volatile signed __int32 **)(v12 + 8) != v11 + 6 || *v13 != v11 + 6 )
LABEL_85:
        __fastfail(3u);
      *v13 = (volatile signed __int32 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      KiReleaseThreadLockSafe(BugCheckParameter1);
      *((_BYTE *)v11 + 48) |= 1u;
      v14 = (volatile signed __int32 *)*((_QWORD *)v11 + 1);
      *((_QWORD *)v11 + 5) = 0LL;
      *((_DWORD *)v11 + 1) = 1;
      if ( v14 != v11 + 2 )
      {
        while ( 1 )
        {
          v24 = *(volatile signed __int32 **)v14;
          v25 = (__int64)v14;
          v14 = v24;
          v26 = *(volatile signed __int32 ***)(v25 + 8);
          if ( *((_QWORD *)v24 + 1) != v25 || *v26 != (volatile signed __int32 *)v25 )
            goto LABEL_85;
          *v26 = v24;
          *((_QWORD *)v24 + 1) = v26;
          v27 = *(_BYTE *)(v25 + 16);
          if ( v27 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v25, *(unsigned __int16 *)(v25 + 18), &v51) )
            {
              v28 = (*((_DWORD *)v11 + 1))-- == 1;
              if ( v28 )
                goto LABEL_75;
            }
          }
          else if ( v27 == 2 )
          {
            *(_BYTE *)(v25 + 17) = 5;
            v29 = *(_QWORD *)(v25 + 24);
            *(_QWORD *)v25 = 0LL;
            v30 = (_QWORD *)(v29 + 8);
            v31 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 <= 0xFu )
            {
              v32 = KeGetCurrentPrcb()->SchedulerAssist;
              v32[5] |= (-1 << (v31 + 1)) & 4;
            }
            v33 = KeGetCurrentPrcb();
            CurrentThread = v33->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v35) = KeIsThreadRunning(v33->CurrentThread);
              EtwTraceEnqueueWork(CurrentThread, v25, v35);
            }
            KiAcquireKobjectLockSafe(v29);
            if ( (_QWORD *)*v30 == v30
              || *(_DWORD *)(v29 + 40) >= *(_DWORD *)(v29 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v29 && CurrentThread->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(v33, v29, v25) )
            {
              v36 = *(_DWORD *)(v29 + 4);
              *(_DWORD *)(v29 + 4) = v36 + 1;
              v37 = *(__int64 **)(v29 + 32);
              if ( *v37 != v29 + 24 )
                goto LABEL_85;
              *(_QWORD *)v25 = v29 + 24;
              *(_QWORD *)(v25 + 8) = v37;
              *v37 = v25;
              *(_QWORD *)(v29 + 32) = v25;
              if ( !v36 && (_QWORD *)*v30 != v30 )
                KiWakeOtherQueueWaiters((__int64)v33, v29);
            }
            _InterlockedAnd((volatile signed __int32 *)v29, 0xFFFFFF7F);
            v28 = (*((_DWORD *)v11 + 1))-- == 1;
            if ( v28 )
            {
LABEL_75:
              v4 = v46;
              v5 = v45;
              break;
            }
            CurrentPrcb = (struct _KPRCB *)v48;
          }
          else
          {
            KiTryUnwaitThread((__int64)CurrentPrcb, v25, 256LL, 0LL);
          }
          if ( v14 == v11 + 2 )
            goto LABEL_75;
        }
      }
      if ( (v11[12] & 2) != 0 )
      {
        v38 = v4++;
        v46 = v4;
        v52[v38] = v11;
      }
      _InterlockedAnd(v11, 0xFFFFFF7F);
      CurrentPrcb = (struct _KPRCB *)v48;
      v3 = (_QWORD *)(BugCheckParameter1 + 776);
      CurrentIrql = v47;
      v45 = ++v5;
      if ( v5 == 32 )
      {
        CurrentIrql = v47;
        KiExitDispatcher(v48, 0LL, 1u, 1u, v47);
        if ( v4 )
        {
          v39 = v52;
          v40 = v4;
          do
          {
            KeAbPostRelease(*v39++);
            --v40;
          }
          while ( v40 );
          CurrentIrql = v47;
        }
        v5 = 0;
        v4 = 0;
        v45 = 0;
        v46 = 0;
        v41 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v41 <= 0xFu )
        {
          v42 = KeGetCurrentPrcb()->SchedulerAssist;
          v42[5] |= (-1 << (v41 + 1)) & 4;
        }
        v3 = (_QWORD *)(BugCheckParameter1 + 776);
        goto LABEL_4;
      }
    }
  }
  KiReleaseThreadLockSafe(BugCheckParameter1);
  result = KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  if ( v4 )
  {
    v43 = v52;
    v44 = v4;
    do
    {
      result = KeAbPostRelease(*v43++);
      --v44;
    }
    while ( v44 );
  }
  return result;
}
