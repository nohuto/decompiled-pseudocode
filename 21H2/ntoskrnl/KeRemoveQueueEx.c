/*
 * XREFs of KeRemoveQueueEx @ 0x1402B7FA0
 * Callers:
 *     KeRemoveQueue @ 0x14023FFE0 (KeRemoveQueue.c)
 *     IoRemoveIoCompletion @ 0x1402B7BD0 (IoRemoveIoCompletion.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAttemptFastRemoveQueue @ 0x140241638 (KiAttemptFastRemoveQueue.c)
 *     KiSwitchQueue @ 0x140242498 (KiSwitchQueue.c)
 *     KiFastExitThreadWait @ 0x1402946B8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x14062D7B4 (EtwTraceDequeueWork.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONGLONG QuadPart; // rsi
  unsigned __int8 CurrentIrql; // r11
  ULONG v12; // r12d
  unsigned __int8 i; // r15
  struct _KPRCB *v14; // rbp
  __int64 v15; // r9
  $0EA7835A9B05193480487A73CEA01DA9 *v16; // r14
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  __int64 v19; // rbp
  struct _KQUEUE *v20; // r8
  unsigned int v21; // ebp
  int v22; // edx
  unsigned __int64 v23; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v30; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  PLIST_ENTRY *v33; // r9
  __int64 v34; // rbp
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 WaitIrql; // rdi
  _KTHREAD *v39; // r14
  __int64 v40; // rax
  PLIST_ENTRY *v41; // r15
  struct _KPRCB *v42; // rsi
  unsigned __int64 v43; // rdi
  _KTHREAD *v44; // rbp
  PLIST_ENTRY *v45; // rsi
  struct _KPRCB *v46; // rdi
  _DWORD *v47; // r9
  struct _KPRCB *v48; // r15
  _DWORD *v49; // rcx
  _KTHREAD *NextThread; // r15
  unsigned __int8 v51; // si
  _DWORD *v52; // r9
  struct _KPRCB *v53; // r14
  _DWORD *v54; // rcx
  _KTHREAD *v55; // r14
  _DWORD *v56; // rcx
  _DWORD *v57; // rcx
  unsigned __int8 v58; // cl
  _DWORD *v59; // r9
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct _KPRCB *v65; // rcx
  _DWORD *v66; // rdx
  bool v67; // zf
  struct _KPRCB *v68; // rcx
  _DWORD *v69; // rdx
  struct _KPRCB *v70; // r9
  int v71; // eax
  _DWORD *v72; // r8
  struct _KPRCB *v73; // rdi
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  _DWORD *v85; // rdx
  struct _KPRCB *v86; // r9
  _DWORD *v87; // r8
  int v88; // eax
  PLIST_ENTRY *v89; // rdx
  struct _KPRCB *v90; // rcx
  _DWORD *v91; // rdx
  int v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r9
  _DWORD *v95; // r8
  int v96; // eax
  struct _LIST_ENTRY *v97; // rdx
  struct _LIST_ENTRY *v98; // rcx
  PLIST_ENTRY *v99; // rdx
  int v100; // [rsp+30h] [rbp-78h] BYREF
  int v101; // [rsp+34h] [rbp-74h] BYREF
  int v102; // [rsp+38h] [rbp-70h] BYREF
  int v103; // [rsp+3Ch] [rbp-6Ch] BYREF
  int v104; // [rsp+40h] [rbp-68h] BYREF
  int v105[24]; // [rsp+48h] [rbp-60h] BYREF
  int v109; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v12 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = Timeout->QuadPart;
      v109 = 1;
    }
    else
    {
      v109 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
  }
  else
  {
    v109 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v100 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v100);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v33 = EntryArray;
        v34 = 0LL;
        do
        {
          --Queue->Header.SignalState;
          v35 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v35->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_271;
          Blink->Flink = v35;
          v35->Blink = Blink;
          Flink->Flink = 0LL;
          EntryArray[v34] = Flink;
          v34 = (unsigned int)(v34 + 1);
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v34 < Count );
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( (unsigned __int8)WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            {
              if ( CurrentPrcb->NestingLevel )
              {
                CurrentPrcb->InterruptRequest = 1;
              }
              else
              {
                v105[0] = 5;
                *(_OWORD *)&v105[1] = 0LL;
                HalpInterruptSendIpi(v105, 0x2Fu);
                v33 = EntryArray;
              }
            }
            goto LABEL_78;
          }
          v39 = CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            v48 = KeGetCurrentPrcb();
            v101 = 0;
            v49 = v48->SchedulerAssist;
            if ( v49 )
            {
              if ( v48->NestingLevel <= 1u )
              {
                v62 = v49[6];
                v49[6] = v62 + 1;
                if ( v62 == -1 )
LABEL_165:
                  KiRemoveSystemWorkPriorityKick(v48);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              v56 = v48->SchedulerAssist;
              if ( v56 )
              {
                if ( v48->NestingLevel <= 1u )
                {
                  v63 = v56[6] - 1;
                  v56[6] = v63;
                  if ( !v63 )
                    KiRemoveSystemWorkPriorityKick(v48);
                }
              }
              do
                KeYieldProcessorEx(&v101);
              while ( CurrentPrcb->PrcbLock );
              v57 = v48->SchedulerAssist;
              if ( v57 )
              {
                if ( v48->NestingLevel <= 1u )
                {
                  v64 = v57[6];
                  v57[6] = v64 + 1;
                  if ( v64 == -1 )
                    goto LABEL_165;
                }
              }
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(CurrentPrcb, v39, 0LL, 1LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v39->WaitReason = 32;
            v39->WaitIrql = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v39);
            if ( (unsigned __int8)KiSwapContext(v39, NextThread, (unsigned __int8)WaitIrql) )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  v65 = KeGetCurrentPrcb();
                  v66 = v65->SchedulerAssist;
                  v67 = (v66[5] & 0xFFFF0003) == 0;
                  v66[5] &= 0xFFFF0003;
                  if ( v67 )
                    KiRemoveSystemWorkPriorityKick(v65);
                }
              }
              __writecr8(1uLL);
              v39->MiscFlags &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
              v33 = EntryArray;
              goto LABEL_76;
            }
          }
          else
          {
            if ( (v39->MiscFlags & 0x40) == 0 )
              goto LABEL_76;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v68 = KeGetCurrentPrcb();
                v69 = v68->SchedulerAssist;
                v67 = (v69[5] & 0xFFFF0003) == 0;
                v69[5] &= 0xFFFF0003;
                if ( v67 )
                  KiRemoveSystemWorkPriorityKick(v68);
              }
            }
            __writecr8(1uLL);
            v39->MiscFlags &= ~0x40u;
            KiDeliverApc(0LL, 0LL, 0LL);
          }
          v33 = EntryArray;
LABEL_76:
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v70 = KeGetCurrentPrcb();
            v71 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
            v72 = v70->SchedulerAssist;
            v67 = (v71 & v72[5]) == 0;
            v72[5] &= v71;
            if ( v67 )
              KiRemoveSystemWorkPriorityKick(v70);
            v33 = EntryArray;
          }
          __writecr8(WaitIrql);
LABEL_78:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
            return v34;
          v99 = v33;
LABEL_272:
          EtwTraceDequeueWork(CurrentThread, v99, (unsigned int)v34);
          return v34;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_11;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v41 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
        goto LABEL_87;
      }
      if ( Alertable )
      {
        v73 = KeGetCurrentPrcb();
        v102 = 0;
        v74 = v73->SchedulerAssist;
        if ( v74 )
        {
          if ( v73->NestingLevel <= 1u )
          {
            v75 = v74[6];
            v74[6] = v75 + 1;
            if ( v75 == -1 )
LABEL_198:
              KiRemoveSystemWorkPriorityKick(v73);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          v76 = v73->SchedulerAssist;
          if ( v76 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v77 = v76[6] - 1;
              v76[6] = v77;
              if ( !v77 )
                KiRemoveSystemWorkPriorityKick(v73);
            }
          }
          do
            KeYieldProcessorEx(&v102);
          while ( CurrentThread->ThreadLock );
          v78 = v73->SchedulerAssist;
          if ( v78 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v79 = v78[6];
              v78[6] = v79 + 1;
              if ( v79 == -1 )
                goto LABEL_198;
            }
          }
        }
        if ( CurrentThread->Alerted[WaitMode] )
        {
          CurrentThread->Alerted[WaitMode] = 0;
          v40 = 257LL;
        }
        else if ( !WaitMode
               || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
        {
          if ( CurrentThread->Alerted[0] )
          {
            CurrentThread->Alerted[0] = 0;
            v40 = 257LL;
          }
          else
          {
            v40 = 0LL;
          }
        }
        else
        {
          CurrentThread->ApcState.UserApcPendingAll |= 2u;
          v40 = 192LL;
        }
        if ( v40 )
          goto LABEL_85;
      }
      else if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
      {
        v41 = EntryArray;
        *EntryArray = (PLIST_ENTRY)192;
        goto LABEL_87;
      }
      v40 = 258LL;
LABEL_85:
      v41 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v40;
      if ( Alertable )
        KiReleaseThreadLockSafe((__int64)CurrentThread);
LABEL_87:
      v42 = KeGetCurrentPrcb();
      v43 = CurrentThread->WaitIrql;
      if ( (unsigned __int8)v43 >= 2u )
      {
        if ( v42->NextThread && !v42->DpcRoutineActive )
        {
          if ( v42->NestingLevel )
          {
            v42->InterruptRequest = 1;
          }
          else
          {
            v105[0] = 5;
            *(_OWORD *)&v105[1] = 0LL;
            HalpInterruptSendIpi(v105, 0x2Fu);
          }
        }
        goto LABEL_92;
      }
      v44 = v42->CurrentThread;
      if ( v42->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v42->CurrentThread, 0);
        v53 = KeGetCurrentPrcb();
        v103 = 0;
        v54 = v53->SchedulerAssist;
        if ( v54 )
        {
          if ( v53->NestingLevel <= 1u )
          {
            v80 = v54[6];
            v54[6] = v80 + 1;
            if ( v80 == -1 )
LABEL_221:
              KiRemoveSystemWorkPriorityKick(v53);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v42->PrcbLock, 0LL) )
        {
          v60 = v53->SchedulerAssist;
          if ( v60 )
          {
            if ( v53->NestingLevel <= 1u )
            {
              v81 = v60[6] - 1;
              v60[6] = v81;
              if ( !v81 )
                KiRemoveSystemWorkPriorityKick(v53);
            }
          }
          do
            KeYieldProcessorEx(&v103);
          while ( v42->PrcbLock );
          v61 = v53->SchedulerAssist;
          if ( v61 )
          {
            if ( v53->NestingLevel <= 1u )
            {
              v82 = v61[6];
              v61[6] = v82 + 1;
              if ( v82 == -1 )
                goto LABEL_221;
            }
          }
        }
        v55 = v42->NextThread;
        v42->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v42, v44, 0LL, 1LL);
        _enable();
        v42->CurrentThread = v55;
        if ( v55->WaitBlockFill6[68] == 1 )
          v55->ReadyTime = v55->ReadyTime - v55->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v55->WaitBlockFill6[68] = 2;
        v44->WaitReason = 32;
        v44->WaitIrql = v43;
        KiQueueReadyThread(v42, v44);
        if ( !(unsigned __int8)KiSwapContext(v44, v55, (unsigned __int8)v43) )
          goto LABEL_90;
        if ( !KiIrqlFlags )
          goto LABEL_140;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_140;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_140;
        v83 = KeGetCurrentPrcb();
        v84 = v83->SchedulerAssist;
        v67 = (v84[5] & 0xFFFF0003) == 0;
        v84[5] &= 0xFFFF0003;
        if ( !v67 )
          goto LABEL_140;
      }
      else
      {
        if ( (v44->MiscFlags & 0x40) == 0 )
          goto LABEL_90;
        if ( !KiIrqlFlags
          || (KiIrqlFlags & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v83 = KeGetCurrentPrcb(),
              v85 = v83->SchedulerAssist,
              v67 = (v85[5] & 0xFFFF0003) == 0,
              v85[5] &= 0xFFFF0003,
              !v67) )
        {
LABEL_140:
          __writecr8(1uLL);
          v44->MiscFlags &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
LABEL_90:
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v86 = KeGetCurrentPrcb();
              v87 = v86->SchedulerAssist;
              v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
              v67 = (v88 & v87[5]) == 0;
              v87[5] &= v88;
              if ( v67 )
                KiRemoveSystemWorkPriorityKick(v86);
            }
          }
          __writecr8(v43);
LABEL_92:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
            return v12;
          v89 = v41;
          goto LABEL_258;
        }
      }
      KiRemoveSystemWorkPriorityKick(v83);
      goto LABEL_140;
    }
  }
LABEL_11:
  for ( i = CurrentThread->WaitIrql; ; CurrentThread->WaitIrql = i )
  {
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v14 = KeGetCurrentPrcb();
      v104 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v14, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v14, 0);
        do
          KeYieldProcessorEx(&v104);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || i )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v90 = KeGetCurrentPrcb();
          v91 = v90->SchedulerAssist;
          v67 = (v91[5] & 0xFFFF0003) == 0;
          v91[5] &= 0xFFFF0003;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v90);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v58 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v58 <= 0xFu )
      {
        v59 = KeGetCurrentPrcb()->SchedulerAssist;
        v59[5] |= ~((unsigned __int8)(1LL << (v58 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v16 = &CurrentThread->320;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[WaitMode] )
      {
        CurrentThread->Alerted[WaitMode] = 0;
        v19 = 257LL;
      }
      else if ( WaitMode
             && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_25:
        v19 = 192LL;
      }
      else
      {
        if ( !CurrentThread->Alerted[0] )
          goto LABEL_22;
        CurrentThread->Alerted[0] = 0;
        v19 = 257LL;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), i);
      *EntryArray = (PLIST_ENTRY)v19;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return v12;
      v89 = EntryArray;
LABEL_258:
      EtwTraceDequeueWork(CurrentThread, v89, 1LL);
      return v12;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && WaitMode )
      goto LABEL_25;
LABEL_22:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v92 = v18[6] - 1;
        v18[6] = v92;
        if ( !v92 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    v20 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v20 )
      KiSwitchQueue((__int64)CurrentThread, (__int64)Queue, (__int64)v20);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    v21 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v17, v18, v20, v15) )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
    }
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        LODWORD(v34) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)EntryArray, Count);
        if ( (_DWORD)v34 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          v45 = EntryArray;
LABEL_102:
          CurrentThread->WaitReason = 0;
          v46 = KeGetCurrentPrcb();
          if ( v46->DeferredReadyListHead.Next )
            KiProcessThreadWaitList(v46, 1LL, 0LL, 2LL);
          KiFastExitThreadWait((__int64)v46, (__int64)CurrentThread, 1LL);
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
            return v34;
          v99 = v45;
          goto LABEL_272;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
    {
      if ( CurrentThread->Queue )
      {
        v97 = CurrentThread->QueueListEntry.Flink;
        v98 = CurrentThread->QueueListEntry.Blink;
        if ( v97->Blink != &CurrentThread->QueueListEntry || v98->Flink != &CurrentThread->QueueListEntry )
LABEL_271:
          __fastfail(3u);
        v98->Flink = v97;
        v97->Blink = v98;
        CurrentThread->Queue = 0LL;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      v45 = EntryArray;
      *EntryArray = (PLIST_ENTRY)128;
      goto LABEL_130;
    }
    v22 = v109;
    v23 = QuadPart;
    if ( v109 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v30 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v23 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v23 = QuadPart + ThreadTimerDelay;
      }
      v22 = 2;
    }
    else
    {
      if ( !v109 )
        goto LABEL_34;
      if ( !QuadPart )
      {
LABEL_129:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v45 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
LABEL_130:
        LODWORD(v34) = 1;
        goto LABEL_102;
      }
      v30 = MEMORY[0xFFFFF78000000014];
    }
    if ( v30 > v23 )
      goto LABEL_129;
LABEL_34:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v25 = Queue->Header.WaitListHead.Flink;
    if ( v25->Blink != &Queue->Header.WaitListHead )
      goto LABEL_271;
    v16->WaitBlock[0].WaitListEntry.Flink = v25;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v25->Blink = (struct _LIST_ENTRY *)v16;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v16;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v26 = (struct _LIST_ENTRY *)KiCommitThreadWait(
                                  (__int64)CurrentThread,
                                  (__int64 *)&CurrentThread->320,
                                  v22,
                                  QuadPart,
                                  0LL);
    CurrentThread->WaitReason = 0;
    if ( v26 != (struct _LIST_ENTRY *)256 )
      break;
    i = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && i <= 0xFu )
    {
      v47 = KeGetCurrentPrcb()->SchedulerAssist;
      v47[5] |= ~((unsigned __int8)(1LL << (i + 1)) - 1) & 4;
    }
  }
  *EntryArray = v26;
  if ( Count > 1
    && (unsigned __int64)&v26[-17].Blink + 7 > 1
    && v26 != (struct _LIST_ENTRY *)128
    && v26 != (struct _LIST_ENTRY *)192
    && Queue->Header.SignalState )
  {
    v51 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v51 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      v52[5] |= (-1 << (v51 + 1)) & 4;
    }
    KiAcquireKobjectLockSafe(Queue);
    if ( Queue->Header.SignalState )
      v12 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)(EntryArray + 1), Count - 1) + 1;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v93 = KeGetCurrentIrql();
        if ( v93 <= 0xFu && v51 <= 0xFu && v93 >= 2u )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->SchedulerAssist;
          v96 = ~(unsigned __int16)(-1LL << (v51 + 1));
          v67 = (v96 & v95[5]) == 0;
          v95[5] &= v96;
          if ( v67 )
            KiRemoveSystemWorkPriorityKick(v94);
        }
      }
    }
    __writecr8(v51);
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v12;
  EtwTraceDequeueWork(CurrentThread, EntryArray, v12);
  return v12;
}
