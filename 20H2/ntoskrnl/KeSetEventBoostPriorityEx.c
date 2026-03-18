/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140242D58
 * Callers:
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseEofLock @ 0x1402404B0 (FsRtlReleaseEofLock.c)
 *     ExpReleaseFastMutexContended @ 0x140242CEC (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriority @ 0x140517120 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KeAbPreWakeupThread @ 0x140242F10 (KeAbPreWakeupThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeSetEventBoostPriorityEx(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4, char a5, char a6)
{
  _QWORD *v7; // r13
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rdi
  int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  bool v18; // bl
  __int64 v19; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v21; // cl
  unsigned __int8 v22; // r8
  char v24; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v26; // rdi
  _QWORD *v27; // r13
  unsigned __int8 v28; // cl
  _DWORD *v29; // r9
  struct _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v32; // r8
  struct _KPRCB *v33; // r15
  int v34; // r8d
  __int64 *v35; // rdx
  unsigned __int8 v36; // [rsp+30h] [rbp-48h]
  _QWORD *v37; // [rsp+38h] [rbp-40h]
  struct _KPRCB *v38; // [rsp+80h] [rbp+8h]

  v7 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
    v14 = (__int64)v11;
    v11 = v13;
    v37 = v13;
    v15 = *(_QWORD **)(v14 + 8);
    if ( v13[1] != v14 || *v15 != v14 )
LABEL_4:
      __fastfail(3u);
    *v15 = v13;
    v13[1] = v15;
    v16 = *(_BYTE *)(v14 + 16);
    if ( v16 != 1 )
    {
      if ( v16 != 2 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL) )
          --v12;
        goto LABEL_54;
      }
      *(_BYTE *)(v14 + 17) = 5;
      v26 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)v14 = 0LL;
      v27 = (_QWORD *)(v26 + 8);
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
      {
        v29 = KeGetCurrentPrcb()->SchedulerAssist;
        v29[5] |= (-1 << (v28 + 1)) & 4;
      }
      v30 = KeGetCurrentPrcb();
      v38 = v30;
      CurrentThread = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread);
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
      v35 = *(__int64 **)(v26 + 32);
      if ( *v35 != v26 + 24 )
        goto LABEL_4;
      *(_QWORD *)v14 = v26 + 24;
      *(_QWORD *)(v14 + 8) = v35;
      *v35 = v14;
      *(_QWORD *)(v26 + 32) = v14;
      if ( !v34 && (_QWORD *)*v27 != v27 )
        KiWakeOtherQueueWaiters(v33, v26);
      goto LABEL_50;
    }
    if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), v7) )
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
    v19 = *a3;
    if ( (_DWORD)v19 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], a4, v19);
    }
    v21 = a5;
    v22 = 1;
  }
  else
  {
    v24 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
    if ( a3 )
    {
      if ( *a3 )
      {
        if ( *(char *)a3 > v24 )
          v24 = *(_BYTE *)a3;
      }
      else
      {
        v18 = 0;
      }
    }
    v21 = v24;
    if ( !v18 )
      v21 = a5;
    v22 = v18 + 1;
  }
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, v22, v21, CurrentIrql);
}
