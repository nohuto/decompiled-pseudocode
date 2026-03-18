/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x1403595B4
 * Callers:
 *     IopReleaseFileObjectLock @ 0x1402AD350 (IopReleaseFileObjectLock.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     KeSetEventBoostPriority @ 0x14056EA10 (KeSetEventBoostPriority.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140709FAC (IopWaitAndAcquireFileObjectLock.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KeAbPreWakeupThread @ 0x140359790 (KeAbPreWakeupThread.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeSetEventBoostPriorityEx(
        volatile signed __int32 *SystemArgument1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist,
        char a5,
        char a6)
{
  _DWORD *v6; // rsi
  unsigned __int8 CurrentIrql; // r13
  int v9; // r14d
  struct _KPRCB *CurrentPrcb; // rbp
  _QWORD *v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  volatile signed __int32 *v14; // r15
  int v15; // r12d
  __int64 v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 **v18; // rcx
  char v19; // al
  bool v20; // zf
  bool v21; // bl
  __int64 v22; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  char v26; // cl
  __int64 v27; // rsi
  _QWORD *v28; // r13
  unsigned __int8 v29; // cl
  struct _KPRCB *v30; // rax
  _KTHREAD *CurrentThread; // r15
  __int64 v32; // r8
  __int64 v33; // r15
  unsigned __int8 v34; // [rsp+30h] [rbp-58h]
  volatile signed __int32 *v35; // [rsp+38h] [rbp-50h]
  __int64 v36; // [rsp+90h] [rbp+8h]
  __int64 *v37; // [rsp+98h] [rbp+10h]
  _DWORD *v38; // [rsp+A0h] [rbp+18h]
  _DWORD *v39; // [rsp+A8h] [rbp+20h]

  v39 = SchedulerAssist;
  v38 = (_DWORD *)a3;
  v37 = (__int64 *)a2;
  v6 = (_DWORD *)a3;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  v9 = 2;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(SystemArgument1, a2, a3, (__int64)SchedulerAssist);
  *((_DWORD *)SystemArgument1 + 1) = 1;
  v14 = (volatile signed __int32 *)*((_QWORD *)SystemArgument1 + 1);
  v15 = 0;
  if ( v14 == SystemArgument1 + 2 )
    goto LABEL_13;
  while ( 1 )
  {
    v16 = *(_QWORD *)v14;
    v17 = v14;
    v14 = (volatile signed __int32 *)v16;
    v35 = (volatile signed __int32 *)v16;
    v18 = (volatile signed __int32 **)*((_QWORD *)v17 + 1);
    if ( *(volatile signed __int32 **)(v16 + 8) != v17 || *v18 != v17 )
LABEL_4:
      __fastfail(3u);
    *v18 = (volatile signed __int32 *)v16;
    *(_QWORD *)(v16 + 8) = v18;
    v19 = *((_BYTE *)v17 + 16);
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
        if ( v19 == 4 )
        {
          *((_BYTE *)v17 + 17) = 5;
          *((_DWORD *)SystemArgument1 + 1) = 0;
          KeInsertQueueDpc(*((PRKDPC *)v17 + 3), (PVOID)SystemArgument1, (PVOID)v17);
        }
        else if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v17, 256LL, 0LL) )
        {
          --v15;
        }
        goto LABEL_55;
      }
      *((_BYTE *)v17 + 17) = 5;
      v27 = *((_QWORD *)v17 + 3);
      *(_QWORD *)v17 = 0LL;
      v28 = (_QWORD *)(v27 + 8);
      v29 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
      {
        v13 = KeGetCurrentPrcb()->SchedulerAssist;
        v11 = (_QWORD *)((-1LL << (v29 + 1)) & 4);
        v12 = (unsigned int)v11 | v13[5];
        v13[5] = v12;
      }
      v30 = KeGetCurrentPrcb();
      v36 = (__int64)v30;
      CurrentThread = v30->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        LOBYTE(v32) = KeIsThreadRunning(v30->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v17, v32);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v27, (__int64)v11, v12, (__int64)v13);
      if ( (_QWORD *)*v28 == v28
        || *(_DWORD *)(v27 + 40) >= *(_DWORD *)(v27 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v27 && CurrentThread->WaitReason == 15 )
      {
        v33 = v36;
      }
      else
      {
        v33 = v36;
        if ( KiWakeQueueWaiter(v36, v27, (__int64)v17, (__int64)v13) )
        {
          *(_QWORD *)v17 = 0LL;
LABEL_49:
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          v20 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
          if ( v20 )
            goto LABEL_12;
          v14 = v35;
          goto LABEL_55;
        }
      }
      v12 = *(unsigned int *)(v27 + 4);
      *(_DWORD *)(v27 + 4) = v12 + 1;
      v11 = *(_QWORD **)(v27 + 32);
      if ( *v11 != v27 + 24 )
        goto LABEL_4;
      *(_QWORD *)v17 = v27 + 24;
      *((_QWORD *)v17 + 1) = v11;
      *v11 = v17;
      *(_QWORD *)(v27 + 32) = v17;
      if ( !(_DWORD)v12 && (_QWORD *)*v28 != v28 )
        KiWakeOtherQueueWaiters(v33, v27);
      goto LABEL_49;
    }
    if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v17, *((unsigned __int16 *)v17 + 9), v37) )
    {
      v20 = (*((_DWORD *)SystemArgument1 + 1))-- == 1;
      if ( v20 )
        break;
    }
LABEL_55:
    if ( v14 == SystemArgument1 + 2 )
      goto LABEL_12;
  }
  ++v15;
LABEL_12:
  v6 = v38;
  CurrentIrql = v34;
LABEL_13:
  if ( v37 )
    v21 = v15 > 0;
  else
    v21 = 0;
  _InterlockedAnd(SystemArgument1, 0xFFFFFF7F);
  if ( (a6 & 1) != 0 )
  {
    v22 = (unsigned int)*v6;
    if ( (_DWORD)v22 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
        KeAbPreWakeupThread(&Next[-27], v39, v22);
    }
    goto LABEL_19;
  }
  a5 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  if ( v6 )
  {
    if ( !*v6 )
      goto LABEL_19;
    v26 = a5;
    if ( *(char *)v6 > a5 )
      v26 = *(_BYTE *)v6;
    a5 = v26;
  }
  if ( !v21 )
LABEL_19:
    v9 = 1;
  return KiExitDispatcher((__int64)CurrentPrcb, 0, v9, a5, CurrentIrql);
}
