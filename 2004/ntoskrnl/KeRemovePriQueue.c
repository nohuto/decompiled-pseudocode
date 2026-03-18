/*
 * XREFs of KeRemovePriQueue @ 0x1402B8840
 * Callers:
 *     ExpWorkerThread @ 0x1402B84F0 (ExpWorkerThread.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiBeginThreadWait @ 0x1402B8CA0 (KiBeginThreadWait.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAttemptFastRemovePriQueue @ 0x1402FC940 (KiAttemptFastRemovePriQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiSwitchPriQueue @ 0x14035CAA4 (KiSwitchPriQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiGetDueTimeWithThreadTimerDelay @ 0x14051D5C0 (KiGetDueTimeWithThreadTimerDelay.c)
 */

__int64 __fastcall KeRemovePriQueue(
        _DISPATCHER_HEADER *BugCheckParameter2,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // esi
  __int64 v10; // r15
  $58B70396B7C968FDBCA820C1D7C540BB *v11; // r14
  int v12; // ebp
  unsigned __int8 CurrentIrql; // r10
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 Queue; // r8
  unsigned __int64 DueTimeWithThreadTimerDelay; // rax
  struct _KPRCB *v20; // rsi
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *p_WaitListHead; // rax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v28; // rcx
  __int64 v29; // rsi
  int v30; // ebp
  __int64 QueuePriority; // rax
  struct _KPRCB *v32; // rdi
  struct _KPRCB *v33; // rcx
  __int64 CycleTime; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int8 v36; // r8
  int v37; // edx
  _DISPATCHER_HEADER *volatile v38; // rcx
  unsigned __int8 v39; // r10
  _DWORD *v40; // rcx
  _DWORD *v41; // rcx
  _DWORD *v42; // rcx
  _DWORD *v43; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v46; // r11
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  unsigned __int64 v51; // r11
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // r9
  struct _KPRCB *v57; // rsi
  _DWORD *v58; // rcx
  int v59; // eax
  _DWORD *v60; // rcx
  int v61; // eax
  _DWORD *v62; // rcx
  int v63; // eax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v66; // [rsp+30h] [rbp-48h] BYREF
  int v67; // [rsp+34h] [rbp-44h] BYREF
  int v68; // [rsp+38h] [rbp-40h] BYREF
  __int64 v69; // [rsp+40h] [rbp-38h]
  int v70; // [rsp+98h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v70 = 0;
  v69 = 0LL;
  v10 = 0LL;
  v11 = &CurrentThread->320;
  v12 = 2;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      v10 = UnbiasedInterruptTime - (*v46 + CurrentThread->RelativeTimerBias);
    }
    else
    {
      v10 = *(_QWORD *)a4;
      v12 = 1;
    }
  }
  else
  {
    v12 = 0;
  }
  while ( 1 )
  {
    result = (int)KiBeginThreadWait(CurrentThread, a2, 15LL, a3);
    if ( (_DWORD)result )
      return result;
    Queue = (__int64)CurrentThread->Queue;
    if ( BugCheckParameter2 != (_DISPATCHER_HEADER *)Queue )
      KiSwitchPriQueue(CurrentThread, BugCheckParameter2);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = BugCheckParameter2;
    if ( _interlockedbittestandset(&BugCheckParameter2->Lock, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v15, Queue, v17) )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (BugCheckParameter2->LockNV & 0x80u) != 0 || _interlockedbittestandset(&BugCheckParameter2->Lock, 7u) );
    }
    if ( BugCheckParameter2->SignalState )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v66 = 0;
      v28 = CurrentPrcb->SchedulerAssist;
      if ( v28 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v28[6];
          v28[6] = v47 + 1;
          if ( v47 == -1 )
LABEL_66:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v48 = v42[6] - 1;
            v42[6] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v66, v15, Queue, v17);
        while ( CurrentThread->ThreadLock );
        v43 = CurrentPrcb->SchedulerAssist;
        if ( v43 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v49 = v43[6];
            v43[6] = v49 + 1;
            if ( v49 == -1 )
              goto LABEL_66;
          }
        }
      }
      v29 = KiAttemptFastRemovePriQueue((ULONG_PTR)BugCheckParameter2);
      if ( v29 )
      {
        v30 = v70;
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v70 )
        {
          v37 = CurrentThread->QueuePriority & 0x100;
          if ( !v37 )
          {
            v38 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v38[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v38[22].WaitListHead + v70);
            v30 = v70;
          }
          CurrentThread->QueuePriority = v37 | (unsigned __int8)v30;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement(CurrentThread, &v70, 0LL);
        if ( v30 != CurrentThread->Priority )
        {
          v33 = KeGetCurrentPrcb();
          if ( v33->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread(v33, CurrentThread, 0LL);
            _enable();
          }
          v35 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          v36 = v70;
          CurrentThread->QuantumTarget = v35;
          KiSetPriorityThread(CurrentThread, 0LL, v36);
        }
        KiReleaseThreadLockSafe(CurrentThread);
        goto LABEL_26;
      }
      KiReleaseThreadLockSafe(CurrentThread);
    }
    if ( (BugCheckParameter2->Signalling & 1) != 0 )
    {
      v57 = KeGetCurrentPrcb();
      v68 = 0;
      v58 = v57->SchedulerAssist;
      if ( v58 )
      {
        if ( v57->NestingLevel <= 1u )
        {
          v59 = v58[6];
          v58[6] = v59 + 1;
          if ( v59 == -1 )
LABEL_96:
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v60 = v57->SchedulerAssist;
        if ( v60 )
        {
          if ( v57->NestingLevel <= 1u )
          {
            v61 = v60[6] - 1;
            v60[6] = v61;
            if ( !v61 )
              KiRemoveSystemWorkPriorityKick(v57);
          }
        }
        do
          KeYieldProcessorEx(&v68, v15, Queue, v17);
        while ( CurrentThread->ThreadLock );
        v62 = v57->SchedulerAssist;
        if ( v62 )
        {
          if ( v57->NestingLevel <= 1u )
          {
            v63 = v62[6];
            v62[6] = v63 + 1;
            if ( v63 == -1 )
              goto LABEL_96;
          }
        }
      }
      if ( CurrentThread->Queue == BugCheckParameter2 )
      {
        CurrentThread->Queue = 0LL;
        Flink = CurrentThread->QueueListEntry.Flink;
        Blink = CurrentThread->QueueListEntry.Blink;
        if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_112:
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
      }
      KiReleaseThreadLockSafe(CurrentThread);
      v29 = 128LL;
      goto LABEL_26;
    }
    DueTimeWithThreadTimerDelay = v10;
    if ( v12 == 2 )
    {
      KiQueryUnbiasedInterruptTime(0LL);
      DueTimeWithThreadTimerDelay = KiGetDueTimeWithThreadTimerDelay(CurrentThread, (unsigned int)(v50 + 2), v10, 0LL);
    }
    else
    {
      if ( !v12 )
        goto LABEL_14;
      if ( !v10 )
        goto LABEL_46;
      v51 = MEMORY[0xFFFFF78000000014];
    }
    if ( v51 > DueTimeWithThreadTimerDelay )
    {
LABEL_46:
      v29 = 258LL;
LABEL_26:
      _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
      CurrentThread->WaitReason = 0;
      v32 = KeGetCurrentPrcb();
      if ( v32->DeferredReadyListHead.Next )
        KiProcessThreadWaitList((__int64)v32, 1LL, 0LL, 2LL);
      LOBYTE(Queue) = 1;
      KiFastExitThreadWait(v32, CurrentThread, Queue, v17);
      return v29;
    }
LABEL_14:
    v20 = KeGetCurrentPrcb();
    v67 = 0;
    v21 = v20->SchedulerAssist;
    if ( v21 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v52 = v21[6];
        v21[6] = v52 + 1;
        if ( v52 == -1 )
LABEL_79:
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v40 = v20->SchedulerAssist;
      if ( v40 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v53 = v40[6] - 1;
          v40[6] = v53;
          if ( !v53 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      do
        KeYieldProcessorEx(&v67, v15, Queue, v17);
      while ( CurrentThread->ThreadLock );
      v41 = v20->SchedulerAssist;
      if ( v41 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v54 = v41[6];
          v41[6] = v54 + 1;
          if ( v54 == -1 )
            goto LABEL_79;
        }
      }
    }
    v5 = 0;
    v22 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = (unsigned __int8)CurrentThread->QueuePriority | 0x100;
    _InterlockedDecrement((volatile signed __int32 *)&BugCheckParameter2[22].WaitListHead + v22);
    CurrentThread->ThreadLock = 0LL;
    v23 = KeGetCurrentPrcb();
    v24 = v23->SchedulerAssist;
    if ( v24 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v55 = v24[6] - 1;
        v24[6] = v55;
        if ( !v55 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    v25 = BugCheckParameter2->WaitListHead.Flink;
    p_WaitListHead = &BugCheckParameter2->WaitListHead;
    if ( v25->Blink != &BugCheckParameter2->WaitListHead )
      goto LABEL_112;
    v11->WaitBlock[0].WaitListEntry.Flink = v25;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v25->Blink = (struct _LIST_ENTRY *)v11;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v11;
    _InterlockedAnd(&BugCheckParameter2->Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v12, v10, 0LL);
    CurrentThread->WaitReason = 0;
    if ( result != 256 )
      return result;
    v39 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v39 <= 0xFu )
    {
      v56 = KeGetCurrentPrcb()->SchedulerAssist;
      v56[5] |= ~((unsigned __int8)(1LL << (v39 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v39;
  }
}
