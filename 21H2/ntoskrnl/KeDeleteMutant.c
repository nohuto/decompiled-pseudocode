/*
 * XREFs of KeDeleteMutant @ 0x140228198
 * Callers:
 *     ExpDeleteMutant @ 0x140228180 (ExpDeleteMutant.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140228354 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KeAbCrossThreadDelete @ 0x1405210B8 (KeAbCrossThreadDelete.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

LONG_PTR __fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v3; // edi
  volatile signed __int32 *v4; // rbp
  char v5; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r12
  int v9; // eax
  LONG_PTR result; // rax
  volatile signed __int32 v11; // eax
  struct _KPRCB *v12; // rdi
  _DWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rsi
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  _DWORD *v19; // rcx
  int v20; // eax
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  _QWORD *v23; // rcx
  char v24; // al
  bool v25; // zf
  __int64 v26; // rsi
  _QWORD *v27; // r12
  unsigned __int8 v28; // cl
  _DWORD *v29; // r9
  struct _KPRCB *v30; // r13
  _KTHREAD *v31; // r14
  __int64 v32; // r8
  int v33; // r8d
  _QWORD *v34; // rdx
  struct _KPRCB *v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v37; // [rsp+40h] [rbp-78h]
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
  KiAcquireKobjectLockSafe(BugCheckParameter2);
  v9 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v9 <= 0 )
  {
    v40 = 0LL;
    v11 = *(_DWORD *)BugCheckParameter2;
    v39 = 0LL;
    LODWORD(v39) = v11;
    BYTE2(v39) = 0;
    *(_DWORD *)BugCheckParameter2 = v39;
    v12 = KeGetCurrentPrcb();
    v4 = *(volatile signed __int32 **)(BugCheckParameter2 + 40);
    v43 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    v41 = 0;
    while ( 1 )
    {
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v18 = v13[6];
          v13[6] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( !_interlockedbittestandset64(v4 + 16, 0LL) )
        break;
      v19 = v12->SchedulerAssist;
      if ( v19 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v20 = v19[6] - 1;
          v19[6] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      do
        KeYieldProcessorEx(&v41);
      while ( *((_QWORD *)v4 + 8) );
    }
    v14 = *(_QWORD *)(BugCheckParameter2 + 24);
    v15 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v14 + 8) != BugCheckParameter2 + 24 || *v15 != BugCheckParameter2 + 24 )
LABEL_17:
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      LOBYTE(v42) = 1;
      if ( v4 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    KiReleaseThreadLockSafe((__int64)v4);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    v16 = *(_QWORD **)(BugCheckParameter2 + 8);
    if ( v16 != (_QWORD *)(BugCheckParameter2 + 8) )
    {
      while ( 1 )
      {
        v21 = (_QWORD *)*v16;
        v22 = v16;
        v16 = v21;
        v37 = v21;
        v23 = (_QWORD *)v22[1];
        if ( (_QWORD *)v21[1] != v22 || (_QWORD *)*v23 != v22 )
          goto LABEL_17;
        *v23 = v21;
        v21[1] = v23;
        v24 = *((_BYTE *)v22 + 16);
        if ( v24 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v22, *((unsigned __int16 *)v22 + 9), &v36) )
          {
            v25 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
            if ( v25 )
              goto LABEL_58;
          }
        }
        else if ( v24 == 2 )
        {
          *((_BYTE *)v22 + 17) = 5;
          v26 = v22[3];
          *v22 = 0LL;
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
            v34 = *(_QWORD **)(v26 + 32);
            if ( *v34 != v26 + 24 )
              goto LABEL_17;
            *v22 = v26 + 24;
            v22[1] = v34;
            *v34 = v22;
            *(_QWORD *)(v26 + 32) = v22;
            if ( !v33 && (_QWORD *)*v27 != v27 )
              KiWakeOtherQueueWaiters(v30, v26);
          }
          _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
          v25 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
          if ( v25 )
          {
LABEL_58:
            LOBYTE(CurrentIrql) = v44;
            break;
          }
          v16 = v37;
          CurrentPrcb = v35;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v22, 256LL, 0LL);
        }
        if ( v16 == (_QWORD *)(BugCheckParameter2 + 8) )
          goto LABEL_58;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
    CurrentThread = v38;
    LODWORD(CurrentPrcb) = (_DWORD)v35;
    v5 = v42;
    v3 = v43;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v5 )
  {
    if ( v4 == (volatile signed __int32 *)CurrentThread )
    {
      result = KeAbPostRelease(BugCheckParameter2);
    }
    else
    {
      KeAbCrossThreadDelete(BugCheckParameter2, v4);
      result = ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
  }
  if ( v4 == (volatile signed __int32 *)CurrentThread )
  {
    if ( v3 )
      return KeLeaveCriticalRegionThread(CurrentThread);
  }
  return result;
}
