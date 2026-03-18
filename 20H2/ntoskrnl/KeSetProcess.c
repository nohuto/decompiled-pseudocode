/*
 * XREFs of KeSetProcess @ 0x14023D910
 * Callers:
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // r12
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r13
  _KTHREAD *CurrentThread; // r15
  int v15; // ecx
  __int64 *v16; // rdx
  _DWORD *v17; // r9
  __int64 v18; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v20; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v21; // [rsp+78h] [rbp+10h]
  unsigned __int8 v22; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = CurrentPrcb;
  KiAcquireKobjectLockSafe(a1);
  v4 = (_QWORD *)(a1 + 8);
  v5 = *(_QWORD **)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v5 != v4 )
  {
    v7 = (__int64)v5;
    v5 = (_QWORD *)*v5;
    v8 = *(_BYTE *)(v7 + 16);
    if ( v8 == 1 )
    {
      v9 = *(unsigned __int16 *)(v7 + 18);
      goto LABEL_7;
    }
    if ( v8 == 2 )
    {
      *(_BYTE *)(v7 + 17) = 5;
      v10 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)v7 = 0LL;
      v11 = (_QWORD *)(v10 + 8);
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
      {
        v17 = KeGetCurrentPrcb()->SchedulerAssist;
        v17[5] |= (-1 << (v12 + 1)) & 4;
      }
      v13 = KeGetCurrentPrcb();
      CurrentThread = v13->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v18) = KeIsThreadRunning(v13->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v7, v18);
      }
      KiAcquireKobjectLockSafe(v10);
      if ( (_QWORD *)*v11 == v11
        || *(_DWORD *)(v10 + 40) >= *(_DWORD *)(v10 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v10 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v13, v10, v7) )
      {
        v15 = *(_DWORD *)(v10 + 4);
        *(_DWORD *)(v10 + 4) = v15 + 1;
        v16 = *(__int64 **)(v10 + 32);
        if ( *v16 != v10 + 24 )
          __fastfail(3u);
        *(_QWORD *)v7 = v10 + 24;
        *(_QWORD *)(v7 + 8) = v16;
        *v16 = v7;
        *(_QWORD *)(v10 + 32) = v7;
        if ( !v15 && (_QWORD *)*v11 != v11 )
          KiWakeOtherQueueWaiters(v13, v10);
      }
      _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      CurrentPrcb = v21;
    }
    else
    {
      v9 = 256LL;
LABEL_7:
      KiTryUnwaitThread((__int64)CurrentPrcb, v7, v9, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v4 = v4;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, v22);
  return v20;
}
