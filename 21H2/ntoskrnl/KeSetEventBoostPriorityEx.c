/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1402FC4D8
 * Callers:
 *     FsRtlReleaseEofLock @ 0x1402F99D0 (FsRtlReleaseEofLock.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     KeSetEventBoostPriority @ 0x140518EA0 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406FEF98 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KeAbPreWakeupThread @ 0x1402FC690 (KeAbPreWakeupThread.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        char a5,
        char a6)
{
  _DWORD *v6; // r12
  __int64 v7; // r13
  char CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  _DWORD *v12; // r9
  _QWORD *v13; // rdi
  int v14; // r14d
  _QWORD *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rcx
  char v18; // al
  bool v19; // zf
  bool v20; // bl
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v22; // cl
  int v23; // r8d
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // rdi
  _QWORD *v28; // r13
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v32; // r8
  __int64 v33; // r15
  __int64 *v34; // rdx
  char v35; // [rsp+30h] [rbp-48h]
  _QWORD *v36; // [rsp+38h] [rbp-40h]
  __int64 v37; // [rsp+80h] [rbp+8h]
  __int64 v38; // [rsp+88h] [rbp+10h]
  _DWORD *v39; // [rsp+98h] [rbp+20h]

  v39 = SchedulerAssist;
  v38 = a2;
  v6 = (_DWORD *)a3;
  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v35 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3, (__int64)SchedulerAssist);
  *(_DWORD *)(a1 + 4) = 1;
  v13 = *(_QWORD **)(a1 + 8);
  v14 = 0;
  if ( v13 == (_QWORD *)(a1 + 8) )
    goto LABEL_10;
  while ( 1 )
  {
    v15 = (_QWORD *)*v13;
    v16 = (__int64)v13;
    v13 = v15;
    v36 = v15;
    v17 = *(_QWORD **)(v16 + 8);
    if ( v15[1] != v16 || *v17 != v16 )
LABEL_4:
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    v18 = *(_BYTE *)(v16 + 16);
    if ( v18 != 1 )
    {
      v26 = 2LL;
      if ( v18 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL) )
          --v14;
        goto LABEL_54;
      }
      *(_BYTE *)(v16 + 17) = 5;
      v27 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)v16 = 0LL;
      v28 = (_QWORD *)(v27 + 8);
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
      {
        v12 = KeGetCurrentPrcb()->SchedulerAssist;
        v26 = (-1LL << (v29 + 1)) & 4;
        v11 = (unsigned int)v26 | v12[5];
        v12[5] = v11;
      }
      v30 = KeGetCurrentPrcb();
      v37 = (__int64)v30;
      CurrentThread = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v16, v32);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v27, v26, v11, (__int64)v12);
      if ( (_QWORD *)*v28 == v28
        || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15 )
      {
        v33 = v37;
      }
      else
      {
        v33 = v37;
        if ( KiWakeQueueWaiter(v37, v27, v16, (__int64)v12) )
        {
LABEL_50:
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          v19 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v19 )
            goto LABEL_9;
          v13 = v36;
          v7 = v38;
          goto LABEL_54;
        }
      }
      v11 = *(unsigned int *)(v27 + 4);
      *(_DWORD *)(v27 + 4) = v11 + 1;
      v34 = *(__int64 **)(v27 + 32);
      if ( *v34 != v27 + 24 )
        goto LABEL_4;
      *(_QWORD *)v16 = v27 + 24;
      *(_QWORD *)(v16 + 8) = v34;
      *v34 = v16;
      *(_QWORD *)(v27 + 32) = v16;
      if ( !(_DWORD)v11 && (_QWORD *)*v28 != v28 )
        KiWakeOtherQueueWaiters(v33, v27);
      goto LABEL_50;
    }
    if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), v7) )
    {
      v19 = (*(_DWORD *)(a1 + 4))-- == 1;
      if ( v19 )
        break;
    }
LABEL_54:
    if ( v13 == (_QWORD *)(a1 + 8) )
      goto LABEL_9;
  }
  ++v14;
LABEL_9:
  CurrentIrql = v35;
LABEL_10:
  if ( v38 )
    v20 = v14 > 0;
  else
    v20 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    if ( *v6 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], v39);
    }
    v22 = a5;
    v23 = 1;
  }
  else
  {
    v25 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    if ( v6 )
    {
      if ( *v6 )
      {
        if ( *(char *)v6 > v25 )
          v25 = *(_BYTE *)v6;
      }
      else
      {
        v20 = 0;
      }
    }
    v22 = v25;
    if ( !v20 )
      v22 = a5;
    v23 = v20 + 1;
  }
  return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v23, v22, CurrentIrql);
}
