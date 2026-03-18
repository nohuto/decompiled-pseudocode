/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140274BF8
 * Callers:
 *     IopReleaseFileObjectLock @ 0x140205FA0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseEofLock @ 0x140273750 (FsRtlReleaseEofLock.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriority @ 0x1405137F0 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140648F18 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KeAbPreWakeupThread @ 0x140274DB0 (KeAbPreWakeupThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, char a5, char a6)
{
  __int64 v7; // r13
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rdi
  int v12; // r14d
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  bool v18; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v20; // cl
  int v21; // r8d
  char v23; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // r13
  unsigned __int8 v28; // cl
  _DWORD *v29; // r9
  struct _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v32; // r8
  struct _KPRCB *v33; // r15
  int v34; // r8d
  _QWORD *v35; // rdx
  char v36; // [rsp+30h] [rbp-48h]
  _QWORD *v37; // [rsp+38h] [rbp-40h]
  struct _KPRCB *v38; // [rsp+80h] [rbp+8h]

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(a1);
  *(_DWORD *)(a1 + 4) = 1;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = 0;
  if ( v11 == (_QWORD *)(a1 + 8) )
    goto LABEL_10;
  while ( 1 )
  {
    v13 = (_QWORD *)*v11;
    v14 = v11;
    v11 = v13;
    v37 = v13;
    v15 = (_QWORD *)v14[1];
    if ( (_QWORD *)v13[1] != v14 || (_QWORD *)*v15 != v14 )
LABEL_4:
      __fastfail(3u);
    *v15 = v13;
    v13[1] = v15;
    v16 = *((_BYTE *)v14 + 16);
    if ( v16 != 1 )
    {
      v25 = 2LL;
      if ( v16 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL) )
          --v12;
        goto LABEL_54;
      }
      *((_BYTE *)v14 + 17) = 5;
      v26 = v14[3];
      *v14 = 0LL;
      v27 = (_QWORD *)(v26 + 8);
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
      {
        v29 = KeGetCurrentPrcb()->SchedulerAssist;
        v25 = (-1LL << (v28 + 1)) & 4;
        v29[5] |= v25;
      }
      v30 = KeGetCurrentPrcb();
      v38 = v30;
      CurrentThread = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread, v25);
        EtwTraceEnqueueWork(CurrentThread, v14, v32);
      }
      KiAcquireKobjectLockSafe(v26);
      if ( (_QWORD *)*v27 == v27
        || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v26 && CurrentThread->WaitReason == 15 )
      {
        v33 = v38;
      }
      else
      {
        v33 = v38;
        if ( (unsigned __int8)KiWakeQueueWaiter(v38, v26, v14) )
        {
LABEL_50:
          _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
          v17 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v17 )
            goto LABEL_9;
          v11 = v37;
          v7 = a2;
          goto LABEL_54;
        }
      }
      v34 = *(_DWORD *)(v26 + 4);
      *(_DWORD *)(v26 + 4) = v34 + 1;
      v35 = *(_QWORD **)(v26 + 32);
      if ( *v35 != v26 + 24 )
        goto LABEL_4;
      *v14 = v26 + 24;
      v14[1] = v35;
      *v35 = v14;
      *(_QWORD *)(v26 + 32) = v14;
      if ( !v34 && (_QWORD *)*v27 != v27 )
        KiWakeOtherQueueWaiters(v33, v26);
      goto LABEL_50;
    }
    if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *((unsigned __int16 *)v14 + 9), v7) )
    {
      v17 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v17 )
        break;
    }
LABEL_54:
    if ( v11 == (_QWORD *)(a1 + 8) )
      goto LABEL_9;
  }
  ++v12;
LABEL_9:
  CurrentIrql = v36;
LABEL_10:
  if ( a2 )
    v18 = v12 > 0;
  else
    v18 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    if ( *a3 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], a4);
    }
    v20 = a5;
    v21 = 1;
  }
  else
  {
    v23 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( a3 )
    {
      if ( *a3 )
      {
        if ( *(char *)a3 > v23 )
          v23 = *(_BYTE *)a3;
      }
      else
      {
        v18 = 0;
      }
    }
    v20 = v23;
    if ( !v18 )
      v20 = a5;
    v21 = v18 + 1;
  }
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v21, v20, CurrentIrql);
}
