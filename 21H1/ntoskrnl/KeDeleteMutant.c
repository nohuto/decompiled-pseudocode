/*
 * XREFs of KeDeleteMutant @ 0x1402FBCA8
 * Callers:
 *     ExpDeleteMutant @ 0x1402FBC90 (ExpDeleteMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1402FBE64 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

unsigned __int8 __fastcall KeDeleteMutant(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
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
  unsigned __int8 result; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  volatile signed __int32 v19; // eax
  struct _KPRCB *v20; // rdi
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  _QWORD *v27; // rsi
  int v28; // eax
  _DWORD *v29; // rcx
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  char v34; // al
  bool v35; // zf
  __int64 v36; // rsi
  _QWORD *v37; // r12
  unsigned __int8 v38; // cl
  struct _KPRCB *v39; // r13
  _KTHREAD *v40; // r14
  __int64 v41; // r8
  struct _KPRCB *v42; // [rsp+30h] [rbp-88h]
  __int64 v43; // [rsp+38h] [rbp-80h] BYREF
  _QWORD *v44; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *v45; // [rsp+48h] [rbp-70h]
  __int128 v46; // [rsp+50h] [rbp-68h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  int v48; // [rsp+C0h] [rbp+8h] BYREF
  int v49; // [rsp+C8h] [rbp+10h]
  int v50; // [rsp+D0h] [rbp+18h]
  __int64 v51; // [rsp+D8h] [rbp+20h]

  v49 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  LOBYTE(v49) = 0;
  v6 = 0LL;
  v45 = CurrentThread;
  v7 = 0;
  v43 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v51 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v42 = CurrentPrcb;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)BugCheckParameter2, a2, a3, (__int64)SchedulerAssist);
  v14 = *(_DWORD *)(BugCheckParameter2 + 4);
  *(_BYTE *)(BugCheckParameter2 + 48) |= 1u;
  *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  if ( v14 <= 0 )
  {
    v47 = 0LL;
    v19 = *(_DWORD *)BugCheckParameter2;
    v46 = 0LL;
    LODWORD(v46) = v19;
    BYTE2(v46) = 0;
    *(_DWORD *)BugCheckParameter2 = v46;
    v20 = KeGetCurrentPrcb();
    v6 = *(volatile signed __int32 **)(BugCheckParameter2 + 40);
    v50 = *(unsigned __int8 *)(BugCheckParameter2 + 49);
    v48 = 0;
    while ( 1 )
    {
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v28 = v21[6];
          v21[6] = v28 + 1;
          if ( v28 == -1 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      if ( !_interlockedbittestandset64(v6 + 16, 0LL) )
        break;
      v29 = v20->SchedulerAssist;
      if ( v29 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v30 = v29[6] - 1;
          v29[6] = v30;
          if ( !v30 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v48, v11, v12, v13);
      while ( *((_QWORD *)v6 + 8) );
    }
    v22 = *(_QWORD *)(BugCheckParameter2 + 24);
    v23 = *(_QWORD **)(BugCheckParameter2 + 32);
    if ( *(_QWORD *)(v22 + 8) != BugCheckParameter2 + 24 || *v23 != BugCheckParameter2 + 24 )
LABEL_17:
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
    {
      LOBYTE(v49) = 1;
      if ( v6 != (volatile signed __int32 *)CurrentThread )
        ObfReferenceObjectWithTag((PVOID)v6, 0x746C6644u);
    }
    KiReleaseThreadLockSafe((__int64)v6);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    v27 = *(_QWORD **)(BugCheckParameter2 + 8);
    if ( v27 != (_QWORD *)(BugCheckParameter2 + 8) )
    {
      while ( 1 )
      {
        v31 = (_QWORD *)*v27;
        v32 = (__int64)v27;
        v27 = v31;
        v44 = v31;
        v33 = *(_QWORD **)(v32 + 8);
        if ( v31[1] != v32 || *v33 != v32 )
          goto LABEL_17;
        *v33 = v31;
        v31[1] = v33;
        v34 = *(_BYTE *)(v32 + 16);
        if ( v34 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v32, *(unsigned __int16 *)(v32 + 18), &v43) )
          {
            v35 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
            if ( v35 )
              goto LABEL_58;
          }
        }
        else if ( v34 == 2 )
        {
          *(_BYTE *)(v32 + 17) = 5;
          v36 = *(_QWORD *)(v32 + 24);
          *(_QWORD *)v32 = 0LL;
          v37 = (_QWORD *)(v36 + 8);
          v38 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
          {
            v26 = KeGetCurrentPrcb()->SchedulerAssist;
            v24 = (_QWORD *)((-1LL << (v38 + 1)) & 4);
            v25 = (unsigned int)v24 | v26[5];
            v26[5] = v25;
          }
          v39 = KeGetCurrentPrcb();
          v40 = v39->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v41) = KeIsThreadRunning(v39->CurrentThread, v24);
            EtwTraceEnqueueWork(v40, v32, v41);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v36, (__int64)v24, v25, (__int64)v26);
          if ( (_QWORD *)*v37 == v37
            || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
            || v40->Queue == (_DISPATCHER_HEADER *volatile)v36 && v40->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v39, v36, v32) )
          {
            v25 = *(unsigned int *)(v36 + 4);
            *(_DWORD *)(v36 + 4) = v25 + 1;
            v24 = *(_QWORD **)(v36 + 32);
            if ( *v24 != v36 + 24 )
              goto LABEL_17;
            *(_QWORD *)v32 = v36 + 24;
            *(_QWORD *)(v32 + 8) = v24;
            *v24 = v32;
            *(_QWORD *)(v36 + 32) = v32;
            if ( !(_DWORD)v25 && (_QWORD *)*v37 != v37 )
              KiWakeOtherQueueWaiters((__int64)v39, v36, v25, (__int64)v26);
          }
          _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
          v35 = (*(_DWORD *)(BugCheckParameter2 + 4))-- == 1;
          if ( v35 )
          {
LABEL_58:
            LOBYTE(CurrentIrql) = v51;
            break;
          }
          v27 = v44;
          CurrentPrcb = v42;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v32, 256LL, 0LL);
        }
        if ( v27 == (_QWORD *)(BugCheckParameter2 + 8) )
          goto LABEL_58;
      }
    }
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
    KiAcquireReleaseObjectRundownLockExclusive(BugCheckParameter2);
    CurrentThread = v45;
    CurrentPrcb = v42;
    v7 = v49;
    v5 = v50;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)BugCheckParameter2, 0xFFFFFF7F);
  }
  result = KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 1LL, CurrentIrql);
  if ( v7 )
  {
    if ( v6 == (volatile signed __int32 *)CurrentThread )
    {
      result = KeAbPostRelease(BugCheckParameter2);
    }
    else
    {
      KeAbCrossThreadDelete(BugCheckParameter2, v6);
      result = ObfDereferenceObjectWithTag((PVOID)v6, 0x746C6644u);
    }
  }
  if ( v6 == (volatile signed __int32 *)CurrentThread )
  {
    if ( v5 )
      return (unsigned __int8)KeLeaveCriticalRegionThread((__int64)CurrentThread, v16, v17, v18);
  }
  return result;
}
