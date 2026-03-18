/*
 * XREFs of KiRundownMutants @ 0x1402F0604
 * Callers:
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  char result; // al
  _QWORD *v3; // r12
  unsigned int v4; // ebp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  struct _KPRCB *v7; // rbx
  _DWORD *v8; // rcx
  _QWORD *v9; // rsi
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rdx
  volatile signed __int32 **v12; // rcx
  unsigned __int16 *v13; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rax
  unsigned __int16 *v16; // rdi
  void **v17; // rcx
  char v18; // al
  bool v19; // zf
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // eax
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // rsi
  _QWORD *v29; // r15
  unsigned __int8 v30; // cl
  _DWORD *v31; // r9
  struct _KPRCB *v32; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v34; // r8
  int v35; // r8d
  unsigned __int16 **v36; // rdx
  __int64 v37; // rax
  ULONG_PTR *v38; // rbx
  __int64 v39; // rdi
  unsigned __int8 v40; // cl
  _DWORD *v41; // r9
  ULONG_PTR *v42; // rbx
  __int64 v43; // rdi
  unsigned int v44; // [rsp+30h] [rbp-168h]
  int v45; // [rsp+34h] [rbp-164h]
  __int64 v46; // [rsp+38h] [rbp-160h]
  int v47; // [rsp+40h] [rbp-158h] BYREF
  int v48; // [rsp+44h] [rbp-154h] BYREF
  __int64 v49; // [rsp+48h] [rbp-150h]
  __int64 v50; // [rsp+50h] [rbp-148h] BYREF
  _QWORD v51[32]; // [rsp+60h] [rbp-138h] BYREF

  result = (unsigned __int8)memset(v51, 0, sizeof(v51));
  v50 = 0LL;
  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 == v3 )
    return result;
  v4 = 0;
  v44 = 0;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v49 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  v46 = (__int64)CurrentPrcb;
  while ( 1 )
  {
    v7 = KeGetCurrentPrcb();
    v47 = 0;
    while ( 1 )
    {
      v8 = v7->SchedulerAssist;
      if ( v8 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v20 = v8[6];
          v8[6] = v20 + 1;
          if ( v20 == -1 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v21 = v7->SchedulerAssist;
      if ( v21 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v22 = v21[6] - 1;
          v21[6] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v47);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    v10 = (volatile signed __int32 *)(v9 - 3);
    if ( *((_BYTE *)v9 + 25) )
      KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v9 - 3), 0LL, 0LL);
    if ( !_interlockedbittestandset(v10, 7u) )
      goto LABEL_11;
    KiReleaseThreadLockSafe(BugCheckParameter1);
    ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    if ( v9 != (_QWORD *)*v3 )
      goto LABEL_45;
    KiAcquireKobjectLockSafe(v9 - 3);
    if ( *((_QWORD *)v10 + 5) != BugCheckParameter1 )
    {
      _InterlockedAnd(v10, 0xFFFFFF7F);
LABEL_45:
      v9 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * (((unsigned __int64)v10 >> 4) & 0x3F)]);
    if ( v9 )
    {
      v23 = KeGetCurrentPrcb();
      v48 = 0;
      while ( 1 )
      {
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v25 = v24[6];
            v24[6] = v25 + 1;
            if ( v25 == -1 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          break;
        v26 = v23->SchedulerAssist;
        if ( v26 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v27 = v26[6] - 1;
            v26[6] = v27;
            if ( !v27 )
              KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        do
          KeYieldProcessorEx(&v48);
        while ( *(_QWORD *)(BugCheckParameter1 + 64) );
      }
LABEL_11:
      v11 = *((_QWORD *)v10 + 3);
      v12 = (volatile signed __int32 **)*((_QWORD *)v10 + 4);
      if ( *(volatile signed __int32 **)(v11 + 8) != v10 + 6 || *v12 != v10 + 6 )
LABEL_24:
        __fastfail(3u);
      *v12 = (volatile signed __int32 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      KiReleaseThreadLockSafe(BugCheckParameter1);
      *((_BYTE *)v10 + 48) |= 1u;
      v13 = (unsigned __int16 *)*((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 5) = 0LL;
      *((_DWORD *)v10 + 1) = 1;
      if ( v13 != (unsigned __int16 *)(v10 + 2) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)v13;
          v16 = v13;
          v13 = (unsigned __int16 *)v15;
          v17 = (void **)*((_QWORD *)v16 + 1);
          if ( *(unsigned __int16 **)(v15 + 8) != v16 || *v17 != v16 )
            goto LABEL_24;
          *v17 = (void *)v15;
          *(_QWORD *)(v15 + 8) = v17;
          v18 = *((_BYTE *)v16 + 16);
          switch ( v18 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, v16[9], &v50) )
              {
                v19 = (*((_DWORD *)v10 + 1))-- == 1;
                if ( v19 )
                  goto LABEL_28;
              }
              break;
            case 2:
              *((_BYTE *)v16 + 17) = 5;
              v28 = *((_QWORD *)v16 + 3);
              *(_QWORD *)v16 = 0LL;
              v29 = (_QWORD *)(v28 + 8);
              v30 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
              {
                v31 = KeGetCurrentPrcb()->SchedulerAssist;
                v31[5] |= (-1 << (v30 + 1)) & 4;
              }
              v32 = KeGetCurrentPrcb();
              CurrentThread = v32->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                LOBYTE(v34) = KeIsThreadRunning(v32->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v16, v34);
              }
              KiAcquireKobjectLockSafe(v28);
              if ( (_QWORD *)*v29 == v29
                || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(v32, v28, v16) )
              {
                v35 = *(_DWORD *)(v28 + 4);
                *(_DWORD *)(v28 + 4) = v35 + 1;
                v36 = *(unsigned __int16 ***)(v28 + 32);
                if ( *v36 != (unsigned __int16 *)(v28 + 24) )
                  goto LABEL_24;
                *(_QWORD *)v16 = v28 + 24;
                *((_QWORD *)v16 + 1) = v36;
                *v36 = v16;
                *(_QWORD *)(v28 + 32) = v16;
                if ( !v35 && (_QWORD *)*v29 != v29 )
                  KiWakeOtherQueueWaiters(v32, v28);
              }
              else
              {
                *(_QWORD *)v16 = 0LL;
              }
              _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
              v19 = (*((_DWORD *)v10 + 1))-- == 1;
              if ( v19 )
              {
LABEL_28:
                v4 = v44;
                LOBYTE(CurrentIrql) = v49;
                goto LABEL_14;
              }
              CurrentPrcb = (struct _KPRCB *)v46;
              break;
            case 4:
              *((_BYTE *)v16 + 17) = 5;
              *((_DWORD *)v10 + 1) = 0;
              KeInsertQueueDpc(*((PRKDPC *)v16 + 3), (PVOID)v10, v16);
              break;
            default:
              KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL);
              break;
          }
          if ( v13 == (unsigned __int16 *)(v10 + 2) )
            goto LABEL_28;
        }
      }
LABEL_14:
      if ( (v10[12] & 2) != 0 )
      {
        v37 = v4++;
        v44 = v4;
        v51[v37] = v10;
      }
      _InterlockedAnd(v10, 0xFFFFFF7F);
      v3 = (_QWORD *)(BugCheckParameter1 + 776);
      CurrentPrcb = (struct _KPRCB *)v46;
      if ( ++v45 == 32 )
      {
        KiExitDispatcher(v46, 0, 1, 1, CurrentIrql);
        if ( v4 )
        {
          v38 = v51;
          v39 = v4;
          do
          {
            KeAbPostRelease(*v38++);
            --v39;
          }
          while ( v39 );
        }
        v4 = 0;
        v45 = 0;
        v44 = 0;
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v40 <= 0xFu )
        {
          v41 = KeGetCurrentPrcb()->SchedulerAssist;
          v41[5] |= (-1 << (v40 + 1)) & 4;
        }
        v3 = (_QWORD *)(BugCheckParameter1 + 776);
        goto LABEL_4;
      }
    }
  }
  KiReleaseThreadLockSafe(BugCheckParameter1);
  result = KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v4 )
  {
    v42 = v51;
    v43 = v4;
    do
    {
      result = KeAbPostRelease(*v42++);
      --v43;
    }
    while ( v43 );
  }
  return result;
}
