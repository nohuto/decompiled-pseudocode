/*
 * XREFs of KeDeleteMutant @ 0x1402AA058
 * Callers:
 *     ExpDeleteMutant @ 0x1402AA040 (ExpDeleteMutant.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402AA214 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 */

_QWORD *__fastcall KeDeleteMutant(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rsi
  int v5; // edi
  volatile signed __int32 *v6; // rbp
  char v7; // r13
  __int64 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  _QWORD *result; // rax
  volatile signed __int32 v16; // eax
  struct _KPRCB *v17; // rdi
  _DWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  _QWORD *v24; // rsi
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rdi
  _QWORD *v30; // rcx
  char v31; // al
  bool v32; // zf
  __int64 v33; // rsi
  _QWORD *v34; // r12
  unsigned __int8 v35; // cl
  struct _KPRCB *v36; // r13
  _KTHREAD *v37; // r14
  __int64 v38; // r8
  struct _KPRCB *v39; // [rsp+30h] [rbp-88h]
  __int64 v40; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v42; // [rsp+48h] [rbp-70h]
  __int128 v43; // [rsp+50h] [rbp-68h]
  __int64 v44; // [rsp+60h] [rbp-58h]
  int v45; // [rsp+C0h] [rbp+8h] BYREF
  int v46; // [rsp+C8h] [rbp+10h]
  int v47; // [rsp+D0h] [rbp+18h]
  __int64 v48; // [rsp+D8h] [rbp+20h]

  v46 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  LOBYTE(v46) = 0;
  v6 = 0LL;
  v42 = CurrentThread;
  v7 = 0;
  v40 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v48 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v39 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter2, a2, a3, (__int64)SchedulerAssist);
  v14 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v14 <= 0 )
  {
    v44 = 0LL;
    v16 = *(_DWORD *)BugCheckParameter2;
    v43 = 0LL;
    LODWORD(v43) = v16;
    BYTE2(v43) = 0;
    *(_DWORD *)BugCheckParameter2 = v43;
    v17 = KeGetCurrentPrcb();
    v6 = *(volatile signed __int32 **)(BugCheckParameter2 + 40);
    v47 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    v45 = 0;
    while ( 1 )
    {
      v18 = v17->SchedulerAssist;
      if ( v18 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v25 = v18[6];
          v18[6] = v25 + 1;
          if ( v25 == -1 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      if ( !_interlockedbittestandset64(v6 + 16, 0LL) )
        break;
      v26 = v17->SchedulerAssist;
      if ( v26 )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v27 = v26[6] - 1;
          v26[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      do
        KeYieldProcessorEx(&v45, v11, v12, v13);
      while ( *((_QWORD *)v6 + 8) );
    }
    v19 = *(_QWORD *)(BugCheckParameter2 + 24);
    v20 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v19 + 8) != BugCheckParameter2 + 24 || *v20 != BugCheckParameter2 + 24 )
LABEL_17:
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      LOBYTE(v46) = 1;
      if ( v6 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v6, 0x746C6644u);
    }
    KiReleaseThreadLockSafe((__int64)v6);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    v24 = *(_QWORD **)(BugCheckParameter2 + 8);
    if ( v24 != (_QWORD *)(BugCheckParameter2 + 8) )
    {
      while ( 1 )
      {
        v28 = (_QWORD *)*v24;
        v29 = (__int64)v24;
        v24 = v28;
        v41 = v28;
        v30 = *(_QWORD **)(v29 + 8);
        if ( v28[1] != v29 || *v30 != v29 )
          goto LABEL_17;
        *v30 = v28;
        v28[1] = v30;
        v31 = *(_BYTE *)(v29 + 16);
        if ( v31 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v29, *(unsigned __int16 *)(v29 + 18), &v40) )
          {
            v32 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
            if ( v32 )
              goto LABEL_58;
          }
        }
        else if ( v31 == 2 )
        {
          *(_BYTE *)(v29 + 17) = 5;
          v33 = *(_QWORD *)(v29 + 24);
          *(_QWORD *)v29 = 0LL;
          v34 = (_QWORD *)(v33 + 8);
          v35 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
          {
            v23 = KeGetCurrentPrcb()->SchedulerAssist;
            v21 = (_QWORD *)((-1LL << (v35 + 1)) & 4);
            v22 = (unsigned int)v21 | v23[5];
            v23[5] = v22;
          }
          v36 = KeGetCurrentPrcb();
          v37 = v36->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v38) = KeIsThreadRunning(v36->CurrentThread);
            EtwTraceEnqueueWork(v37, v29, v38);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v33, (__int64)v21, v22, (__int64)v23);
          if ( (_QWORD *)*v34 == v34
            || *(_DWORD *)(v33 + 40) >= *(_DWORD *)(v33 + 44)
            || v37->Queue == (_DISPATCHER_HEADER *volatile)v33 && v37->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v36, v33, v29, (__int64)v23) )
          {
            v22 = *(unsigned int *)(v33 + 4);
            *(_DWORD *)(v33 + 4) = v22 + 1;
            v21 = *(_QWORD **)(v33 + 32);
            if ( *v21 != v33 + 24 )
              goto LABEL_17;
            *(_QWORD *)v29 = v33 + 24;
            *(_QWORD *)(v29 + 8) = v21;
            *v21 = v29;
            *(_QWORD *)(v33 + 32) = v29;
            if ( !(_DWORD)v22 && (_QWORD *)*v34 != v34 )
              KiWakeOtherQueueWaiters((__int64)v36, v33);
          }
          _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
          v32 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
          if ( v32 )
          {
LABEL_58:
            LOBYTE(CurrentIrql) = v48;
            break;
          }
          v24 = v41;
          CurrentPrcb = v39;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v29, 256LL, 0LL);
        }
        if ( v24 == (_QWORD *)(BugCheckParameter2 + 8) )
          goto LABEL_58;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
    CurrentThread = v42;
    LODWORD(CurrentPrcb) = (_DWORD)v39;
    v7 = v46;
    v5 = v47;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = (_QWORD *)KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  if ( v7 )
  {
    if ( v6 == (volatile signed __int32 *)CurrentThread )
    {
      result = (_QWORD *)KeAbPostRelease(BugCheckParameter2);
    }
    else
    {
      KeAbCrossThreadDelete(BugCheckParameter2, v6);
      result = (_QWORD *)ObfDereferenceObjectWithTag((PVOID)v6, 0x746C6644u);
    }
  }
  if ( v6 == (volatile signed __int32 *)CurrentThread )
  {
    if ( v5 )
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return result;
}
