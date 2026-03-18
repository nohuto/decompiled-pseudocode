/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x14035A898
 * Callers:
 *     IopReleaseFileObjectLock @ 0x14025EEC0 (IopReleaseFileObjectLock.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     FsRtlReleaseEofLock @ 0x14035AE20 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x1405131A0 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KeAbPreWakeupThread @ 0x14035AA50 (KeAbPreWakeupThread.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeSetEventBoostPriorityEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        char a5,
        char a6)
{
  unsigned int *v6; // r12
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r15
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
  __int64 v21; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v23; // cl
  __int64 v24; // r8
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rdi
  _QWORD *v29; // r13
  unsigned __int8 v30; // cl
  struct _KPRCB *v31; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v33; // r8
  __int64 v34; // r15
  __int64 *v35; // rdx
  unsigned __int8 v36; // [rsp+30h] [rbp-48h]
  _QWORD *v37; // [rsp+38h] [rbp-40h]
  __int64 v38; // [rsp+80h] [rbp+8h]
  _QWORD *v39; // [rsp+88h] [rbp+10h]
  _DWORD *v40; // [rsp+98h] [rbp+20h]

  v40 = SchedulerAssist;
  v39 = (_QWORD *)a2;
  v6 = (unsigned int *)a3;
  v7 = (_QWORD *)a2;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
    v37 = v15;
    v17 = *(_QWORD **)(v16 + 8);
    if ( v15[1] != v16 || *v17 != v16 )
LABEL_4:
      __fastfail(3u);
    *v17 = v15;
    v15[1] = v17;
    v18 = *(_BYTE *)(v16 + 16);
    if ( v18 != 1 )
    {
      v27 = 2LL;
      if ( v18 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL) )
          --v14;
        goto LABEL_54;
      }
      *(_BYTE *)(v16 + 17) = 5;
      v28 = *(_QWORD *)(v16 + 24);
      *(_QWORD *)v16 = 0LL;
      v29 = (_QWORD *)(v28 + 8);
      v30 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v30 <= 0xFu )
      {
        v12 = KeGetCurrentPrcb()->SchedulerAssist;
        v27 = (-1LL << (v30 + 1)) & 4;
        v11 = (unsigned int)v27 | v12[5];
        v12[5] = v11;
      }
      v31 = KeGetCurrentPrcb();
      v38 = (__int64)v31;
      CurrentThread = v31->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v33) = KeIsThreadRunning(v31->CurrentThread, v27);
        EtwTraceEnqueueWork(CurrentThread, v16, v33);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v28, v27, v11, (__int64)v12);
      if ( (_QWORD *)*v29 == v29
        || *(_DWORD *)(v28 + 40) >= *(_DWORD *)(v28 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v28 && CurrentThread->WaitReason == 15 )
      {
        v34 = v38;
      }
      else
      {
        v34 = v38;
        if ( KiWakeQueueWaiter(v38, v28, v16) )
        {
LABEL_50:
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          v19 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v19 )
            goto LABEL_9;
          v13 = v37;
          v7 = v39;
          goto LABEL_54;
        }
      }
      v11 = *(unsigned int *)(v28 + 4);
      *(_DWORD *)(v28 + 4) = v11 + 1;
      v35 = *(__int64 **)(v28 + 32);
      if ( *v35 != v28 + 24 )
        goto LABEL_4;
      *(_QWORD *)v16 = v28 + 24;
      *(_QWORD *)(v16 + 8) = v35;
      *v35 = v16;
      *(_QWORD *)(v28 + 32) = v16;
      if ( !(_DWORD)v11 && (_QWORD *)*v29 != v29 )
        KiWakeOtherQueueWaiters(v34, v28, v11, (__int64)v12);
      goto LABEL_50;
    }
    if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), v7) )
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
  CurrentIrql = v36;
LABEL_10:
  if ( v39 )
    v20 = v14 > 0;
  else
    v20 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    v21 = *v6;
    if ( (_DWORD)v21 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], v40, v21);
    }
    v23 = a5;
    v24 = 1LL;
  }
  else
  {
    v26 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread, v11, (__int64)v12);
    if ( v6 )
    {
      if ( *v6 )
      {
        if ( *(char *)v6 > v26 )
          v26 = *(_BYTE *)v6;
      }
      else
      {
        v20 = 0;
      }
    }
    v23 = v26;
    if ( !v20 )
      v23 = a5;
    v24 = (unsigned int)v20 + 1;
  }
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, v24, (unsigned int)v23, CurrentIrql);
}
