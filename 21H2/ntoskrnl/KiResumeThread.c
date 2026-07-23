/*
 * XREFs of KiResumeThread @ 0x140267870
 * Callers:
 *     KiThawSingleThread @ 0x14023A5D0 (KiThawSingleThread.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KeResumeThread @ 0x1402680E8 (KeResumeThread.c)
 *     KiAdjustThreadTimer @ 0x14051F214 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiComputeDueTime @ 0x140281820 (KiComputeDueTime.c)
 *     KiTestForAlertPending @ 0x1402A7A34 (KiTestForAlertPending.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  __int64 *v9; // rsi
  __int64 *v10; // r14
  __int64 v11; // rdx
  unsigned __int8 v12; // r15
  unsigned __int8 i; // r14
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 *v16; // rcx
  int v17; // edi
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  unsigned int v20; // edi
  char v21; // al
  __int64 *v22; // rbx
  char v23; // al
  __int64 v24; // r8
  _DWORD *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  _QWORD *v33; // r15
  unsigned __int8 CurrentIrql; // cl
  _DWORD *v35; // r9
  struct _KPRCB *v36; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v38; // r8
  int v39; // ecx
  __int64 **v40; // rdx
  int v41; // [rsp+70h] [rbp+8h] BYREF
  int v42; // [rsp+80h] [rbp+18h] BYREF
  int v43; // [rsp+88h] [rbp+20h] BYREF

  v42 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v3 = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = SchedulerAssist[6];
        SchedulerAssist[6] = v27 + 1;
        if ( v27 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v25[6] - 1;
        v25[6] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v41);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v12 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v12; ++i )
      {
        v14 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v14 + 17) == 6 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          *(_BYTE *)(v14 + 17) = 4;
          KiAcquireKobjectLockSafe(v15);
          if ( *(int *)(v15 + 4) > 0 || (*(_BYTE *)v15 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
            *(_BYTE *)(v14 + 17) = 5;
            v3 = 1;
            break;
          }
          v16 = *(__int64 **)(v15 + 16);
          if ( *v16 != v15 + 8 )
LABEL_84:
            __fastfail(3u);
          *(_QWORD *)v14 = v15 + 8;
          *(_QWORD *)(v14 + 8) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 16) = v14;
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        }
      }
      v17 = 0;
      if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v3 )
      {
        v26 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime(a1 + 256, v26, 0LL, &v42) )
        {
          if ( (unsigned __int8)KiInsertTimerTable(a2, (int)a1 + 256, 0, v42, 0LL) )
          {
            if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
            {
              LOBYTE(a3) = 1;
              KiTraceSetTimer(a1 + 256, 0LL, a3);
            }
            else
            {
              _InterlockedAnd((volatile signed __int32 *)(a1 + 256), 0xFFFFFF7F);
            }
          }
          else
          {
            KiTimerWaitTest(a2, a1 + 256, 0LL);
          }
          v17 = 1;
        }
        else
        {
          v3 = 1;
          v17 = 0;
        }
      }
      v18 = KeGetCurrentPrcb();
      v43 = 0;
      while ( 1 )
      {
        v19 = v18->SchedulerAssist;
        if ( v19 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v29 = v19[6];
            v19[6] = v29 + 1;
            if ( v29 == -1 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v30 = v18->SchedulerAssist;
        if ( v30 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v31 = v30[6] - 1;
            v30[6] = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v43);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v20 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v17 << 9) & 0xFFFDFFFF;
      v21 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v20;
      if ( v21 != 5
        || (LOBYTE(a3) = *(_BYTE *)(a1 + 391),
            LOBYTE(v11) = (v20 & 0x10) != 0,
            (unsigned int)KiTestForAlertPending(a1, v11, a3, 0LL)) )
      {
        v3 = 1;
      }
      else if ( *(_BYTE *)(a1 + 643) == 37 && (*(_BYTE *)(a1 + 120) & 0x10) != 0 )
      {
        v3 = 1;
      }
    }
    *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 1;
  }
  if ( v3 )
  {
    if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
    {
      if ( *(_BYTE *)(a1 + 388) == 5 )
        KiSignalThread(a2, a1, 256LL, 0LL);
    }
    else
    {
      LOBYTE(a3) = 2;
      KiSignalThreadForApc(a2, a1 + 648, a3);
    }
  }
  result = KiReleaseThreadLockSafe(a1);
  v9 = (__int64 *)(a1 + 744);
  v10 = *(__int64 **)(a1 + 744);
  if ( v10 != (__int64 *)(a1 + 744) )
  {
    while ( 1 )
    {
      v22 = v10;
      v10 = (__int64 *)*v10;
      v23 = *((_BYTE *)v22 + 16);
      if ( v23 == 1 )
        break;
      if ( v23 != 2 )
      {
        v24 = 256LL;
        goto LABEL_31;
      }
      *((_BYTE *)v22 + 17) = 5;
      v32 = v22[3];
      *v22 = 0LL;
      v33 = (_QWORD *)(v32 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v35 = KeGetCurrentPrcb()->SchedulerAssist;
        v35[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v36 = KeGetCurrentPrcb();
      CurrentThread = v36->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v38) = KeIsThreadRunning(v36->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v22, v38);
      }
      KiAcquireKobjectLockSafe(v32);
      if ( (_QWORD *)*v33 == v33
        || *(_DWORD *)(v32 + 40) >= *(_DWORD *)(v32 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v32 && CurrentThread->WaitReason == 15
        || (result = KiWakeQueueWaiter(v36, v32, v22), !(_BYTE)result) )
      {
        v39 = *(_DWORD *)(v32 + 4);
        *(_DWORD *)(v32 + 4) = v39 + 1;
        result = v32 + 24;
        v40 = *(__int64 ***)(v32 + 32);
        if ( *v40 != (__int64 *)(v32 + 24) )
          goto LABEL_84;
        *v22 = result;
        v22[1] = (__int64)v40;
        *v40 = v22;
        *(_QWORD *)(v32 + 32) = v22;
        if ( !v39 && (_QWORD *)*v33 != v33 )
          result = KiWakeOtherQueueWaiters(v36, v32);
      }
      _InterlockedAnd((volatile signed __int32 *)v32, 0xFFFFFF7F);
LABEL_32:
      if ( v10 == v9 )
        goto LABEL_9;
    }
    v24 = *((unsigned __int16 *)v22 + 9);
LABEL_31:
    result = KiTryUnwaitThread(a2, v22, v24, 0LL);
    goto LABEL_32;
  }
LABEL_9:
  v9[1] = (__int64)v9;
  *v9 = (__int64)v9;
  return result;
}
