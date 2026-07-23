/*
 * XREFs of KeSetProcess @ 0x1402F652C
 * Callers:
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  _QWORD *v10; // rsi
  _QWORD *v11; // r14
  __int64 v13; // rbx
  char v14; // al
  __int64 v15; // r8
  __int64 v16; // rdi
  _QWORD *v17; // r12
  unsigned __int8 v18; // cl
  struct _KPRCB *v19; // r13
  _KTHREAD *CurrentThread; // r15
  int v21; // ecx
  __int64 v22; // r8
  unsigned int v23; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v24; // [rsp+78h] [rbp+10h]
  char v25; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v25 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v24 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  v10 = (_QWORD *)(a1 + 8);
  v11 = *(_QWORD **)(a1 + 8);
  v23 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v11 != v10 )
  {
    v13 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    v14 = *(_BYTE *)(v13 + 16);
    if ( v14 == 1 )
    {
      v15 = *(unsigned __int16 *)(v13 + 18);
      goto LABEL_7;
    }
    if ( v14 == 2 )
    {
      *(_BYTE *)(v13 + 17) = 5;
      v16 = *(_QWORD *)(v13 + 24);
      *(_QWORD *)v13 = 0LL;
      v17 = (_QWORD *)(v16 + 8);
      v18 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
      {
        v9 = KeGetCurrentPrcb()->SchedulerAssist;
        v7 = (_QWORD *)((-1LL << (v18 + 1)) & 4);
        v8 = (unsigned int)v7 | v9[5];
        v9[5] = v8;
      }
      v19 = KeGetCurrentPrcb();
      CurrentThread = v19->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v22) = KeIsThreadRunning(v19->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v13, v22);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v16, (__int64)v7, v8, (__int64)v9);
      if ( (_QWORD *)*v17 == v17
        || *(_DWORD *)(v16 + 40) >= *(_DWORD *)(v16 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v16 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v19, v16, v13, (__int64)v9) )
      {
        v21 = *(_DWORD *)(v16 + 4);
        *(_DWORD *)(v16 + 4) = v21 + 1;
        v7 = *(_QWORD **)(v16 + 32);
        if ( *v7 != v16 + 24 )
          __fastfail(3u);
        *(_QWORD *)v13 = v16 + 24;
        *(_QWORD *)(v13 + 8) = v7;
        *v7 = v13;
        *(_QWORD *)(v16 + 32) = v13;
        if ( !v21 && (_QWORD *)*v17 != v17 )
          KiWakeOtherQueueWaiters((__int64)v19, v16);
      }
      _InterlockedAnd((volatile signed __int32 *)v16, 0xFFFFFF7F);
      CurrentPrcb = v24;
    }
    else
    {
      v15 = 256LL;
LABEL_7:
      KiTryUnwaitThread(CurrentPrcb, v13, v15, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v10 = v10;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v25);
  return v23;
}
