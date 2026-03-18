/*
 * XREFs of KeSetProcess @ 0x14027BE30
 * Callers:
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v8; // rbx
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r13
  _KTHREAD *CurrentThread; // r15
  int v16; // ecx
  _DWORD *v17; // r9
  __int64 v18; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned int v20; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v21; // [rsp+78h] [rbp+10h]
  char v22; // [rsp+80h] [rbp+18h]

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
  v5 = (_QWORD *)(a1 + 8);
  v6 = *(_QWORD **)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 1;
  while ( v6 != v5 )
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
    v9 = *((_BYTE *)v8 + 16);
    if ( v9 == 1 )
    {
      v10 = *((unsigned __int16 *)v8 + 9);
      goto LABEL_7;
    }
    if ( v9 == 2 )
    {
      *((_BYTE *)v8 + 17) = 5;
      v11 = v8[3];
      *v8 = 0LL;
      v12 = (_QWORD *)(v11 + 8);
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
      {
        v17 = KeGetCurrentPrcb()->SchedulerAssist;
        v4 = (-1LL << (v13 + 1)) & 4;
        v17[5] |= v4;
      }
      v14 = KeGetCurrentPrcb();
      CurrentThread = v14->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v18) = KeIsThreadRunning(v14->CurrentThread, v4);
        EtwTraceEnqueueWork(CurrentThread, v8, v18);
      }
      KiAcquireKobjectLockSafe(v11);
      if ( (_QWORD *)*v12 == v12
        || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v14, v11, v8) )
      {
        v16 = *(_DWORD *)(v11 + 4);
        *(_DWORD *)(v11 + 4) = v16 + 1;
        v4 = *(_QWORD *)(v11 + 32);
        if ( *(_QWORD *)v4 != v11 + 24 )
          __fastfail(3u);
        *v8 = v11 + 24;
        v8[1] = v4;
        *(_QWORD *)v4 = v8;
        *(_QWORD *)(v11 + 32) = v8;
        if ( !v16 && (_QWORD *)*v12 != v12 )
          KiWakeOtherQueueWaiters(v14, v11);
      }
      _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
      CurrentPrcb = v21;
    }
    else
    {
      v10 = 256LL;
LABEL_7:
      KiTryUnwaitThread(CurrentPrcb, v8, v10, 0LL);
    }
  }
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *v5 = v5;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v22);
  return v20;
}
