/*
 * XREFs of KeRundownQueueCommon @ 0x1402FBA2C
 * Callers:
 *     KeRundownQueueEx @ 0x1402FB948 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x14051E96C (KeRundownPriQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, __int64 **a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v5; // r14
  _DWORD *v6; // rsi
  __int64 *v9; // rax
  __int64 v10; // rax
  struct _KPRCB *v11; // r12
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rdi
  _QWORD *v18; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v20; // r13
  _KTHREAD *CurrentThread; // rbp
  int v22; // ecx
  __int64 *v23; // rdx
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  __int64 v29; // r8
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v5 = (unsigned int)a4;
  v6 = (_DWORD *)a3;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == (__int64 *)a2 )
        break;
      v24 = *v9;
      v25 = (__int64 *)v9[1];
      if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v25 != v9 )
LABEL_33:
        __fastfail(3u);
      *v25 = v24;
      v26 = (__int64)(v9 - 65);
      *(_QWORD *)(v24 + 8) = v25;
      CurrentPrcb = KeGetCurrentPrcb();
      v34 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[6];
            SchedulerAssist[6] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 64), 0LL) )
          break;
        v31 = CurrentPrcb->SchedulerAssist;
        if ( v31 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v32 = v31[6] - 1;
            v31[6] = v32;
            if ( !v32 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v34, v24, a3, (__int64)a4);
        while ( *(_QWORD *)(v26 + 64) );
      }
      *(_QWORD *)(v26 + 232) = 0LL;
      KiReleaseThreadLockSafe(v26);
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      do
      {
        *v6++ = 0;
        --v10;
      }
      while ( v10 );
    }
  }
  v11 = KeGetCurrentPrcb();
  v12 = (_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(a1 + 8);
  while ( v13 != v12 )
  {
    v14 = (__int64)v13;
    v15 = 2LL;
    v13 = (_QWORD *)*v13;
    v16 = *(_BYTE *)(v14 + 16);
    if ( v16 == 1 )
    {
      v33 = *(unsigned __int16 *)(v14 + 18);
      goto LABEL_45;
    }
    if ( v16 == 2 )
    {
      *(_BYTE *)(v14 + 17) = 5;
      v17 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)v14 = 0LL;
      v18 = (_QWORD *)(v17 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        a4 = KeGetCurrentPrcb()->SchedulerAssist;
        v15 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)v15 | a4[5];
        a4[5] = a3;
      }
      v20 = KeGetCurrentPrcb();
      CurrentThread = v20->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v29) = KeIsThreadRunning(v20->CurrentThread, v15);
        EtwTraceEnqueueWork(CurrentThread, v14, v29);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v17, v15, a3, (__int64)a4);
      if ( (_QWORD *)*v18 == v18
        || *(_DWORD *)(v17 + 40) >= *(_DWORD *)(v17 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v17 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v20, v17, v14) )
      {
        v22 = *(_DWORD *)(v17 + 4);
        *(_DWORD *)(v17 + 4) = v22 + 1;
        v23 = *(__int64 **)(v17 + 32);
        if ( *v23 != v17 + 24 )
          goto LABEL_33;
        *(_QWORD *)v14 = v17 + 24;
        *(_QWORD *)(v14 + 8) = v23;
        *v23 = v14;
        *(_QWORD *)(v17 + 32) = v14;
        if ( !v22 && (_QWORD *)*v18 != v18 )
          KiWakeOtherQueueWaiters((__int64)v20, v17, a3, (__int64)a4);
      }
      _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
    }
    else
    {
      v33 = 256LL;
LABEL_45:
      KiTryUnwaitThread((__int64)v11, v14, v33, 0LL);
    }
  }
  v12[1] = v12;
  *v12 = v12;
}
