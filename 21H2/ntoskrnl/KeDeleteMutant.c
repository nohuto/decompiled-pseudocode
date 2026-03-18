/*
 * XREFs of KeDeleteMutant @ 0x140234B28
 * Callers:
 *     ExpDeleteMutant @ 0x140234B10 (ExpDeleteMutant.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140234D1C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     KeAbCrossThreadDelete @ 0x1405757C0 (KeAbCrossThreadDelete.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

LONG_PTR __fastcall KeDeleteMutant(_DWORD *SystemArgument1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  volatile signed __int32 *v4; // rbp
  char v5; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r15
  int v9; // eax
  LONG_PTR result; // rax
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  struct _KPRCB *v13; // rdi
  _DWORD *v14; // rcx
  _DWORD **v15; // rdx
  PVOID *v16; // rcx
  unsigned __int16 *v17; // rsi
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  unsigned __int16 *v22; // rdi
  void **v23; // rcx
  char v24; // al
  bool v25; // zf
  __int64 v26; // rsi
  _QWORD *v27; // r15
  unsigned __int8 v28; // cl
  _DWORD *v29; // r9
  struct _KPRCB *v30; // r13
  _KTHREAD *v31; // r14
  __int64 v32; // r8
  int v33; // r8d
  unsigned __int16 **v34; // rdx
  struct _KPRCB *v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v37; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v38; // [rsp+48h] [rbp-70h]
  __int128 v39; // [rsp+50h] [rbp-68h]
  __int64 v40; // [rsp+60h] [rbp-58h]
  int v41; // [rsp+C0h] [rbp+8h] BYREF
  int v42; // [rsp+C8h] [rbp+10h]
  int v43; // [rsp+D0h] [rbp+18h]
  __int64 v44; // [rsp+D8h] [rbp+20h]

  v42 = a2;
  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  LOBYTE(v42) = 0;
  v4 = 0LL;
  v38 = CurrentThread;
  v5 = 0;
  v36 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v44 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v35 = CurrentPrcb;
  KiAcquireKobjectLockSafe(SystemArgument1);
  v9 = SystemArgument1[1];
  *((_BYTE *)SystemArgument1 + 48) |= 1u;
  SystemArgument1[1] = 1;
  if ( v9 <= 0 )
  {
    v40 = 0LL;
    v12 = *SystemArgument1;
    v39 = 0LL;
    LODWORD(v39) = v12;
    BYTE2(v39) = 0;
    *SystemArgument1 = v39;
    v13 = KeGetCurrentPrcb();
    v4 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 5);
    v43 = *((unsigned __int8 *)SystemArgument1 + 49);
    v41 = 0;
    while ( 1 )
    {
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v18 = v14[6];
          v14[6] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( !_interlockedbittestandset64(v4 + 16, 0LL) )
        break;
      v19 = v13->SchedulerAssist;
      if ( v19 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v20 = v19[6] - 1;
          v19[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(&v41);
      while ( *((_QWORD *)v4 + 8) );
    }
    v15 = (_DWORD **)*((_QWORD *)SystemArgument1 + 3);
    v16 = (PVOID *)*((_QWORD *)SystemArgument1 + 4);
    if ( v15[1] != SystemArgument1 + 6 || *v16 != SystemArgument1 + 6 )
LABEL_61:
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    if ( (SystemArgument1[12] & 2) != 0 )
    {
      LOBYTE(v42) = 1;
      if ( v4 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    KiReleaseThreadLockSafe((__int64)v4);
    *((_QWORD *)SystemArgument1 + 5) = 0LL;
    v17 = (unsigned __int16 *)*((_QWORD *)SystemArgument1 + 1);
    if ( v17 != (unsigned __int16 *)(SystemArgument1 + 2) )
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)v17;
        v22 = v17;
        v17 = (unsigned __int16 *)v21;
        v37 = (unsigned __int16 *)v21;
        v23 = (void **)*((_QWORD *)v22 + 1);
        if ( *(unsigned __int16 **)(v21 + 8) != v22 || *v23 != v22 )
          goto LABEL_61;
        *v23 = (void *)v21;
        *(_QWORD *)(v21 + 8) = v23;
        v24 = *((_BYTE *)v22 + 16);
        switch ( v24 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v22, v22[9], &v36) )
            {
              v25 = SystemArgument1[1]-- == 1;
              if ( v25 )
                goto LABEL_60;
            }
            break;
          case 2:
            *((_BYTE *)v22 + 17) = 5;
            v26 = *((_QWORD *)v22 + 3);
            *(_QWORD *)v22 = 0LL;
            v27 = (_QWORD *)(v26 + 8);
            v28 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
            {
              v29 = KeGetCurrentPrcb()->SchedulerAssist;
              v29[5] |= (-1 << (v28 + 1)) & 4;
            }
            v30 = KeGetCurrentPrcb();
            v31 = v30->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread);
              EtwTraceEnqueueWork(v31, v22, v32);
            }
            KiAcquireKobjectLockSafe(v26);
            if ( (_QWORD *)*v27 == v27
              || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
              || v31->Queue == (_DISPATCHER_HEADER *volatile)v26 && v31->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(v30, v26, v22) )
            {
              v33 = *(_DWORD *)(v26 + 4);
              *(_DWORD *)(v26 + 4) = v33 + 1;
              v34 = *(unsigned __int16 ***)(v26 + 32);
              if ( *v34 != (unsigned __int16 *)(v26 + 24) )
                goto LABEL_61;
              *(_QWORD *)v22 = v26 + 24;
              *((_QWORD *)v22 + 1) = v34;
              *v34 = v22;
              *(_QWORD *)(v26 + 32) = v22;
              if ( !v33 && (_QWORD *)*v27 != v27 )
                KiWakeOtherQueueWaiters(v30, v26);
            }
            else
            {
              *(_QWORD *)v22 = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
            v25 = SystemArgument1[1]-- == 1;
            if ( v25 )
            {
LABEL_60:
              LOBYTE(CurrentIrql) = v44;
              goto LABEL_17;
            }
            v17 = v37;
            CurrentPrcb = v35;
            break;
          case 4:
            *((_BYTE *)v22 + 17) = 5;
            SystemArgument1[1] = 0;
            KeInsertQueueDpc(*((PRKDPC *)v22 + 3), SystemArgument1, v22);
            break;
          default:
            KiTryUnwaitThread(CurrentPrcb, v22, 256LL, 0LL);
            break;
        }
        if ( v17 == (unsigned __int16 *)(SystemArgument1 + 2) )
          goto LABEL_60;
      }
    }
LABEL_17:
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(SystemArgument1);
    CurrentThread = v38;
    LODWORD(CurrentPrcb) = (_DWORD)v35;
    v5 = v42;
    v3 = v43;
  }
  else
  {
    _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v5 )
  {
    if ( v4 != (volatile signed __int32 *)CurrentThread )
    {
      KeAbCrossThreadDelete(SystemArgument1, v4);
      return ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    result = KeAbPostRelease((ULONG_PTR)SystemArgument1);
  }
  else if ( v4 != (volatile signed __int32 *)CurrentThread )
  {
    return result;
  }
  if ( v3 )
    return KiLeaveCriticalRegionUnsafe(CurrentThread);
  return result;
}
