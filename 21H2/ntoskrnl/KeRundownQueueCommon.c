/*
 * XREFs of KeRundownQueueCommon @ 0x140227F1C
 * Callers:
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x1405246AC (KeRundownPriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

void __fastcall KeRundownQueueCommon(__int64 a1, _QWORD **a2, _DWORD *a3, unsigned int a4, char a5)
{
  __int64 v5; // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  struct _KPRCB *v11; // r12
  _QWORD *v12; // rsi
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rdi
  _QWORD *v17; // r15
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v19; // r13
  _KTHREAD *CurrentThread; // rbp
  int v21; // ecx
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 v25; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp+8h] BYREF

  _interlockedbittestandset((volatile signed __int32 *)a1, 8u);
  v5 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( *a2 == a2 )
        break;
      v23 = *v9;
      v24 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v24 != v9 )
LABEL_33:
        __fastfail(3u);
      *v24 = v23;
      v25 = (__int64)(v9 - 65);
      *(_QWORD *)(v23 + 8) = v24;
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
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
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
          KeYieldProcessorEx(&v34);
        while ( *(_QWORD *)(v25 + 64) );
      }
      *(_QWORD *)(v25 + 232) = 0LL;
      KiReleaseThreadLockSafe(v25);
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      do
      {
        *a3++ = 0;
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
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = *((_BYTE *)v14 + 16);
    if ( v15 == 1 )
    {
      v33 = *((unsigned __int16 *)v14 + 9);
      goto LABEL_45;
    }
    if ( v15 == 2 )
    {
      *((_BYTE *)v14 + 17) = 5;
      v16 = v14[3];
      *v14 = 0LL;
      v17 = (_QWORD *)(v16 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v28 = KeGetCurrentPrcb()->SchedulerAssist;
        v28[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v19 = KeGetCurrentPrcb();
      CurrentThread = v19->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v29) = KeIsThreadRunning(v19->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v14, v29);
      }
      KiAcquireKobjectLockSafe(v16);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v19, v16, v14) )
      {
        v21 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v21 + 1;
        v22 = *(_QWORD **)(v16 + 32);
        if ( *v22 != v16 + 24 )
          goto LABEL_33;
        *v14 = v16 + 24;
        v14[1] = v22;
        *v22 = v14;
        *(_QWORD *)(v16 + 32) = v14;
        if ( !v21 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters(v19, v16);
      }
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
    }
    else
    {
      v33 = 256LL;
LABEL_45:
      KiTryUnwaitThread(v11, v14, v33, 0LL);
    }
  }
  v12[1] = v12;
  *v12 = v12;
}
