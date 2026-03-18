/*
 * XREFs of KiResumeThread @ 0x1402D7924
 * Callers:
 *     KeForceResumeThread @ 0x1402D7860 (KeForceResumeThread.c)
 *     KeResumeThread @ 0x1403106F4 (KeResumeThread.c)
 *     KiThawSingleThread @ 0x14036142C (KiThawSingleThread.c)
 *     KiAdjustThreadTimer @ 0x14051D4F4 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiTestForAlertPending @ 0x140206434 (KiTestForAlertPending.c)
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiInsertTimerTable @ 0x14021DDF0 (KiInsertTimerTable.c)
 *     KiComputeDueTime @ 0x140247860 (KiComputeDueTime.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiSignalThread @ 0x14028D1C0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KiTraceSetTimer @ 0x14052207C (KiTraceSetTimer.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KiResumeThread(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 result; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  unsigned __int8 v11; // r15
  unsigned __int8 i; // r14
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *v15; // rcx
  int v16; // edi
  struct _KPRCB *v17; // rsi
  _DWORD *v18; // rcx
  unsigned int v19; // edi
  char v20; // al
  __int64 v21; // rbx
  char v22; // al
  __int64 v23; // r8
  _DWORD *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  __int64 v31; // rdi
  _QWORD *v32; // r15
  unsigned __int8 CurrentIrql; // cl
  _DWORD *v34; // r9
  struct _KPRCB *v35; // r13
  _KTHREAD *CurrentThread; // rbp
  __int64 v37; // r8
  int v38; // ecx
  __int64 *v39; // rdx
  int v40; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v41; // [rsp+80h] [rbp+18h] BYREF
  int v42; // [rsp+88h] [rbp+20h] BYREF

  v41 = 0;
  *(_DWORD *)(a1 + 740) = 1;
  v3 = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  v40 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = SchedulerAssist[6];
        SchedulerAssist[6] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v24[6] - 1;
        v24[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v40);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *(_BYTE *)(a1 + 388) == 5 && (*(_BYTE *)(a1 + 112) & 7) == 4 )
  {
    if ( !v3 )
    {
      *(_BYTE *)(a1 + 112) = *(_BYTE *)(a1 + 112) & 0xF8 | 5;
      KiReleaseThreadLockSafe(a1);
      v11 = *(_BYTE *)(a1 + 587);
      for ( i = 0; i < v11; ++i )
      {
        v13 = *(_QWORD *)(a1 + 208) + 48LL * i;
        if ( *(_BYTE *)(v13 + 17) == 6 )
        {
          v14 = *(_QWORD *)(v13 + 32);
          *(_BYTE *)(v13 + 17) = 4;
          KiAcquireKobjectLockSafe(v14);
          if ( *(int *)(v14 + 4) > 0 || (*(_BYTE *)v14 & 0x7F) == 2 )
          {
            _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
            *(_BYTE *)(v13 + 17) = 5;
            v3 = 1;
            break;
          }
          v15 = *(__int64 **)(v14 + 16);
          if ( *v15 != v14 + 8 )
LABEL_84:
            __fastfail(3u);
          *(_QWORD *)v13 = v14 + 8;
          *(_QWORD *)(v13 + 8) = v15;
          *v15 = v13;
          *(_QWORD *)(v14 + 16) = v13;
          _InterlockedAnd((volatile signed __int32 *)v14, 0xFFFFFF7F);
        }
      }
      v16 = 0;
      if ( (*(_DWORD *)(a1 + 116) & 0x20000) != 0 && !v3 )
      {
        v25 = *(_QWORD *)(a1 + 280);
        *(_DWORD *)(a1 + 256) |= 0x40000080u;
        if ( (unsigned int)KiComputeDueTime((int *)(a1 + 256), v25, 0, &v41) )
        {
          if ( KiInsertTimerTable(a2, a1 + 256, 0LL, v41, 0LL) )
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
          v16 = 1;
        }
        else
        {
          v3 = 1;
          v16 = 0;
        }
      }
      v17 = KeGetCurrentPrcb();
      v42 = 0;
      while ( 1 )
      {
        v18 = v17->SchedulerAssist;
        if ( v18 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v28 = v18[6];
            v18[6] = v28 + 1;
            if ( v28 == -1 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v29 = v17->SchedulerAssist;
        if ( v29 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v30 = v29[6] - 1;
            v29[6] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v42);
        while ( *(_QWORD *)(a1 + 64) );
      }
      v19 = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | (v16 << 9) & 0xFFFDFFFF;
      v20 = *(_BYTE *)(a1 + 112) & 0xE7;
      *(_DWORD *)(a1 + 116) = v19;
      if ( v20 != 5 || (unsigned int)KiTestForAlertPending(a1, (v19 & 0x10) != 0, *(_BYTE *)(a1 + 391), 0) )
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
  v9 = (_QWORD *)(a1 + 744);
  v10 = *(_QWORD **)(a1 + 744);
  if ( v10 != (_QWORD *)(a1 + 744) )
  {
    while ( 1 )
    {
      v21 = (__int64)v10;
      v10 = (_QWORD *)*v10;
      v22 = *(_BYTE *)(v21 + 16);
      if ( v22 == 1 )
        break;
      if ( v22 != 2 )
      {
        v23 = 256LL;
        goto LABEL_31;
      }
      *(_BYTE *)(v21 + 17) = 5;
      v31 = *(_QWORD *)(v21 + 24);
      *(_QWORD *)v21 = 0LL;
      v32 = (_QWORD *)(v31 + 8);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v34 = KeGetCurrentPrcb()->SchedulerAssist;
        v34[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v35 = KeGetCurrentPrcb();
      CurrentThread = v35->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v37) = KeIsThreadRunning(v35->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v21, v37);
      }
      KiAcquireKobjectLockSafe(v31);
      if ( (_QWORD *)*v32 == v32
        || *(_DWORD *)(v31 + 40) >= *(_DWORD *)(v31 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v31 && CurrentThread->WaitReason == 15
        || (result = KiWakeQueueWaiter(v35, v31, v21), !(_BYTE)result) )
      {
        v38 = *(_DWORD *)(v31 + 4);
        *(_DWORD *)(v31 + 4) = v38 + 1;
        result = v31 + 24;
        v39 = *(__int64 **)(v31 + 32);
        if ( *v39 != v31 + 24 )
          goto LABEL_84;
        *(_QWORD *)v21 = result;
        *(_QWORD *)(v21 + 8) = v39;
        *v39 = v21;
        *(_QWORD *)(v31 + 32) = v21;
        if ( !v38 && (_QWORD *)*v32 != v32 )
          result = KiWakeOtherQueueWaiters((__int64)v35, v31);
      }
      _InterlockedAnd((volatile signed __int32 *)v31, 0xFFFFFF7F);
LABEL_32:
      if ( v10 == v9 )
        goto LABEL_9;
    }
    v23 = *(unsigned __int16 *)(v21 + 18);
LABEL_31:
    result = KiTryUnwaitThread(a2, v21, v23, 0LL);
    goto LABEL_32;
  }
LABEL_9:
  v9[1] = v9;
  *v9 = v9;
  return result;
}
