/*
 * XREFs of KeRemoveQueueEx @ 0x14020F400
 * Callers:
 *     IoRemoveIoCompletion @ 0x14020F000 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x140346E40 (KeRemoveQueue.c)
 * Callees:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiFastExitThreadWait @ 0x1402E493C (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiSwitchQueue @ 0x1402FCC10 (KiSwitchQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiTestForAlertPending @ 0x14033CE78 (KiTestForAlertPending.c)
 *     KiAttemptFastRemoveQueue @ 0x140349474 (KiAttemptFastRemoveQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x1405A21CC (EtwTraceDequeueWork.c)
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
  LONGLONG QuadPart; // rbp
  __int64 v9; // r13
  unsigned __int8 CurrentIrql; // r11
  struct _LIST_ENTRY *Flink; // rdx
  ULONG v14; // r15d
  char v15; // r14
  struct _KPRCB *v16; // rsi
  _DWORD *v17; // rcx
  $58B70396B7C968FDBCA820C1D7C540BB *v18; // r14
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  struct _KQUEUE *v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  unsigned __int64 v25; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY *v28; // rax
  PLIST_ENTRY *v29; // r14
  LIST_ENTRY *p_EntryListHead; // r8
  PLIST_ENTRY *v32; // r9
  __int64 v33; // rsi
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 WaitIrql; // rdi
  _KTHREAD *v38; // r14
  int v39; // eax
  __int64 v40; // rcx
  struct _KPRCB *v41; // rsi
  unsigned __int64 v42; // rdi
  _KTHREAD *v43; // rbp
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v45; // rcx
  PLIST_ENTRY *v46; // r14
  struct _KPRCB *v47; // rdi
  __int64 v48; // r10
  unsigned __int8 v49; // si
  __int64 v50; // rdx
  struct _KPRCB *v51; // r13
  _DWORD *v52; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  unsigned __int8 v56; // cl
  __int64 v57; // rdx
  struct _KPRCB *v58; // r13
  _DWORD *v59; // rcx
  _KTHREAD *v60; // r13
  _DWORD *v61; // rcx
  _DWORD *v62; // rcx
  _DWORD *SchedulerAssist; // r9
  int v64; // eax
  int v65; // eax
  int v66; // eax
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  bool v69; // zf
  _DWORD *v70; // rdx
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  struct _KPRCB *v74; // rdi
  _DWORD *v75; // rcx
  int v76; // eax
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  int v81; // eax
  _DWORD *v82; // rcx
  int v83; // eax
  _DWORD *v84; // rcx
  int v85; // eax
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  _DWORD *v88; // rdx
  struct _KPRCB *v89; // r9
  _DWORD *v90; // r8
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  struct _KPRCB *v95; // rcx
  _DWORD *v96; // rdx
  _DWORD *v97; // r9
  int v98; // eax
  _DWORD *v99; // r9
  _DWORD *v100; // r9
  unsigned __int8 v101; // al
  struct _KPRCB *v102; // r9
  _DWORD *v103; // r8
  int v104; // eax
  struct _LIST_ENTRY *v105; // rdx
  struct _LIST_ENTRY *v106; // rcx
  PLIST_ENTRY *v107; // rdx
  int v108; // [rsp+30h] [rbp-68h] BYREF
  int v109; // [rsp+34h] [rbp-64h] BYREF
  int v110; // [rsp+38h] [rbp-60h] BYREF
  int v111; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v112; // [rsp+40h] [rbp-58h] BYREF
  __int64 v113; // [rsp+48h] [rbp-50h]
  __int64 v114; // [rsp+50h] [rbp-48h]
  int v116; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v9 = WaitMode;
  v114 = 0LL;
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
  Flink = (struct _LIST_ENTRY *)0xFFFFF78000000008LL;
  v14 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v116 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v116 = 1;
    }
  }
  else
  {
    v116 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v108 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v108, Flink);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v32 = EntryArray;
        v33 = 0LL;
        do
        {
          --Queue->Header.SignalState;
          v34 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v34->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_264;
          Blink->Flink = v34;
          v34->Blink = Blink;
          Flink->Flink = 0LL;
          EntryArray[v33] = Flink;
          v33 = (unsigned int)(v33 + 1);
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v33 < Count );
        if ( (_DWORD)v33 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( (unsigned __int8)WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            {
              LOBYTE(Flink) = 2;
              KiRequestSoftwareInterrupt(CurrentPrcb, Flink);
              v32 = EntryArray;
            }
            goto LABEL_56;
          }
          v38 = CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            v51 = KeGetCurrentPrcb();
            v109 = 0;
            v52 = v51->SchedulerAssist;
            if ( v52 )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v64 = v52[6];
                v52[6] = v64 + 1;
                if ( v64 == -1 )
LABEL_151:
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              v61 = v51->SchedulerAssist;
              if ( v61 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v65 = v61[6] - 1;
                  v61[6] = v65;
                  if ( !v65 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              do
                KeYieldProcessorEx(&v109, v50);
              while ( CurrentPrcb->PrcbLock );
              v62 = v51->SchedulerAssist;
              if ( v62 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v66 = v62[6];
                  v62[6] = v66 + 1;
                  if ( v66 == -1 )
                    goto LABEL_151;
                }
              }
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(CurrentPrcb, v38, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v38->WaitReason = 32;
            v38->WaitIrql = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v38);
            if ( !(unsigned __int8)KiSwapContext(v38, NextThread, (unsigned __int8)WaitIrql) )
              goto LABEL_115;
            if ( !KiIrqlFlags
              || (KiIrqlFlags & 1) == 0
              || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
              || (v67 = KeGetCurrentPrcb(),
                  v68 = v67->SchedulerAssist,
                  v69 = (v68[5] & 0xFFFF0003) == 0,
                  v68[5] &= 0xFFFF0003,
                  !v69) )
            {
LABEL_143:
              __writecr8(1uLL);
              v38->MiscFlags &= ~0x40u;
              KiDeliverApc(0, 0LL, 0LL);
LABEL_115:
              v32 = EntryArray;
LABEL_54:
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v71 = KeGetCurrentPrcb();
                v72 = v71->SchedulerAssist;
                v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v69 = (v73 & v72[5]) == 0;
                v72[5] &= v73;
                if ( v69 )
                  KiRemoveSystemWorkPriorityKick(v71);
                v32 = EntryArray;
              }
              __writecr8(WaitIrql);
LABEL_56:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                EtwTraceDequeueWork(CurrentThread, v32, (unsigned int)v33);
              return v33;
            }
          }
          else
          {
            if ( (v38->MiscFlags & 0x40) == 0 )
              goto LABEL_54;
            if ( !KiIrqlFlags )
              goto LABEL_143;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_143;
            if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
              goto LABEL_143;
            v67 = KeGetCurrentPrcb();
            v70 = v67->SchedulerAssist;
            v69 = (v70[5] & 0xFFFF0003) == 0;
            v70[5] &= 0xFFFF0003;
            if ( !v69 )
              goto LABEL_143;
          }
          KiRemoveSystemWorkPriorityKick(v67);
          goto LABEL_143;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_10;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v74 = KeGetCurrentPrcb();
          v110 = 0;
          v75 = v74->SchedulerAssist;
          if ( v75 )
          {
            if ( v74->NestingLevel <= 1u )
            {
              v76 = v75[6];
              v75[6] = v76 + 1;
              if ( v76 == -1 )
LABEL_180:
                KiRemoveSystemWorkPriorityKick(v74);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v77 = v74->SchedulerAssist;
            if ( v77 )
            {
              if ( v74->NestingLevel <= 1u )
              {
                v78 = v77[6] - 1;
                v77[6] = v78;
                if ( !v78 )
                  KiRemoveSystemWorkPriorityKick(v74);
              }
            }
            do
              KeYieldProcessorEx(&v110, Flink);
            while ( CurrentThread->ThreadLock );
            v79 = v74->SchedulerAssist;
            if ( v79 )
            {
              if ( v74->NestingLevel <= 1u )
              {
                v80 = v79[6];
                v79[6] = v80 + 1;
                if ( v80 == -1 )
                  goto LABEL_180;
              }
            }
          }
        }
        v39 = KiTestForAlertPending(CurrentThread, Alertable, (unsigned __int8)v9, 1LL);
        v40 = v39;
        if ( !v39 )
          v40 = 258LL;
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)v40;
        if ( Alertable )
          KiReleaseThreadLockSafe(CurrentThread);
      }
      v41 = KeGetCurrentPrcb();
      v42 = CurrentThread->WaitIrql;
      if ( (unsigned __int8)v42 >= 2u )
      {
        if ( v41->NextThread && !v41->DpcRoutineActive )
        {
          LOBYTE(Flink) = 2;
          KiRequestSoftwareInterrupt(v41, Flink);
        }
LABEL_39:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v107 = v29;
          goto LABEL_265;
        }
        return v14;
      }
      v43 = v41->CurrentThread;
      if ( v41->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v41->CurrentThread, 0);
        v58 = KeGetCurrentPrcb();
        v111 = 0;
        v59 = v58->SchedulerAssist;
        if ( v59 )
        {
          if ( v58->NestingLevel <= 1u )
          {
            v81 = v59[6];
            v59[6] = v81 + 1;
            if ( v81 == -1 )
LABEL_193:
              KiRemoveSystemWorkPriorityKick(v58);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v41->PrcbLock, 0LL) )
        {
          v82 = v58->SchedulerAssist;
          if ( v82 )
          {
            if ( v58->NestingLevel <= 1u )
            {
              v83 = v82[6] - 1;
              v82[6] = v83;
              if ( !v83 )
                KiRemoveSystemWorkPriorityKick(v58);
            }
          }
          do
            KeYieldProcessorEx(&v111, v57);
          while ( v41->PrcbLock );
          v84 = v58->SchedulerAssist;
          if ( v84 )
          {
            if ( v58->NestingLevel <= 1u )
            {
              v85 = v84[6];
              v84[6] = v85 + 1;
              if ( v85 == -1 )
                goto LABEL_193;
            }
          }
        }
        v60 = v41->NextThread;
        v41->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v41, v43, 0LL);
        _enable();
        v41->CurrentThread = v60;
        if ( v60->WaitBlockFill6[68] == 1 )
          v60->ReadyTime = v60->ReadyTime - v60->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v60->WaitBlockFill6[68] = 2;
        v43->WaitReason = 32;
        v43->WaitIrql = v42;
        KiQueueReadyThread(v41, v43);
        if ( !(unsigned __int8)KiSwapContext(v43, v60, (unsigned __int8)v42) )
          goto LABEL_70;
        if ( !KiIrqlFlags )
          goto LABEL_212;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_212;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_212;
        v86 = KeGetCurrentPrcb();
        v87 = v86->SchedulerAssist;
        v69 = (v87[5] & 0xFFFF0003) == 0;
        v87[5] &= 0xFFFF0003;
        if ( !v69 )
          goto LABEL_212;
      }
      else
      {
        if ( (v43->MiscFlags & 0x40) == 0 )
          goto LABEL_70;
        if ( !KiIrqlFlags
          || (KiIrqlFlags & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v86 = KeGetCurrentPrcb(),
              v88 = v86->SchedulerAssist,
              v69 = (v88[5] & 0xFFFF0003) == 0,
              v88[5] &= 0xFFFF0003,
              !v69) )
        {
LABEL_212:
          __writecr8(1uLL);
          v43->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
LABEL_70:
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v89 = KeGetCurrentPrcb();
              v90 = v89->SchedulerAssist;
              v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v42 + 1));
              v69 = (v91 & v90[5]) == 0;
              v90[5] &= v91;
              if ( v69 )
                KiRemoveSystemWorkPriorityKick(v89);
            }
          }
          __writecr8(v42);
          goto LABEL_39;
        }
      }
      KiRemoveSystemWorkPriorityKick(v86);
      goto LABEL_212;
    }
  }
LABEL_10:
  v113 = CurrentThread->WaitIrql;
  while ( 1 )
  {
    v15 = v113;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v16 = KeGetCurrentPrcb();
      v112 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v92 = v17[6];
          v17[6] = v92 + 1;
          if ( v92 == -1 )
LABEL_223:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v54 = v16->SchedulerAssist;
        if ( v54 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v93 = v54[6] - 1;
            v54[6] = v93;
            if ( !v93 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v112, Flink);
        while ( CurrentThread->ThreadLock );
        v55 = v16->SchedulerAssist;
        if ( v55 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v94 = v55[6];
            v55[6] = v94 + 1;
            if ( v94 == -1 )
              goto LABEL_223;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v15 )
        break;
      KiReleaseThreadLockSafe(CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          v69 = (v96[5] & 0xFFFF0003) == 0;
          v96[5] &= 0xFFFF0003;
          if ( v69 )
            KiRemoveSystemWorkPriorityKick(v95);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v56 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v56 <= 0xFu )
      {
        v97 = KeGetCurrentPrcb()->SchedulerAssist;
        Flink = (struct _LIST_ENTRY *)(v97[5] | ~((unsigned __int8)(1LL << (v56 + 1)) - 1) & 4u);
        v97[5] = (_DWORD)Flink;
      }
      CurrentThread->WaitIrql = 0;
    }
    v18 = &CurrentThread->320;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[v9] )
      {
        CurrentThread->Alerted[v9] = 0;
        v21 = 257LL;
      }
      else if ( (_BYTE)v9
             && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_103:
        v21 = 192LL;
      }
      else
      {
        if ( !CurrentThread->Alerted[0] )
          goto LABEL_22;
        CurrentThread->Alerted[0] = 0;
        v21 = 257LL;
      }
      KiReleaseThreadLockSafe(CurrentThread);
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), (unsigned __int8)v113);
      goto LABEL_24;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && (_BYTE)v9 )
      goto LABEL_103;
LABEL_22:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v98 = v20[6] - 1;
        v20[6] = v98;
        if ( !v98 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    v21 = 0LL;
LABEL_24:
    if ( v21 )
    {
      *EntryArray = (PLIST_ENTRY)v21;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v107 = EntryArray;
LABEL_265:
        EtwTraceDequeueWork(CurrentThread, v107, v14);
        return v14;
      }
      return v14;
    }
    v22 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v22 )
      KiSwitchQueue(CurrentThread, Queue);
    CurrentThread->WaitBlock[0].WaitType = 3;
    v23 = 128LL;
    CurrentThread->WaitBlockFill4[17] = 4;
    v24 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v24 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, v20, v22, v23) )
        {
          HvlNotifyLongSpinWait(v24);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (Queue->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Queue->Header.Lock, 7u) );
      v23 = 128LL;
    }
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      LODWORD(v33) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
      if ( (_DWORD)v33 )
      {
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v46 = EntryArray;
        goto LABEL_94;
      }
      v23 = 128LL;
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v25 = QuadPart;
    if ( v116 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v45 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v25 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v25 = ThreadTimerDelay + QuadPart;
      }
    }
    else
    {
      if ( !v116 )
        goto LABEL_32;
      if ( !QuadPart )
      {
LABEL_120:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v46 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
        goto LABEL_121;
      }
      v45 = MEMORY[0xFFFFF78000000014];
    }
    if ( v45 > v25 )
      goto LABEL_120;
LABEL_32:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v27 = Queue->Header.WaitListHead.Flink;
    if ( v27->Blink != &Queue->Header.WaitListHead )
      goto LABEL_264;
    v18->WaitBlock[0].WaitListEntry.Flink = v27;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v27->Blink = (struct _LIST_ENTRY *)v18;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v18;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v28 = (_LIST_ENTRY *)KiCommitThreadWait((__int64)CurrentThread, (__int64 *)&CurrentThread->320, v116, QuadPart, 0LL);
    CurrentThread->WaitReason = 0;
    if ( v28 != (_LIST_ENTRY *)256 )
    {
      v29 = EntryArray;
      *EntryArray = v28;
      if ( Count > 1
        && (unsigned __int64)&v28[-17].Blink + 7 > 1
        && v28 != (_LIST_ENTRY *)128
        && v28 != (_LIST_ENTRY *)192
        && Queue->Header.SignalState )
      {
        v49 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
        {
          v100 = KeGetCurrentPrcb()->SchedulerAssist;
          v100[5] |= (-1 << (v49 + 1)) & 4;
        }
        KiAcquireKobjectLockSafe(Queue);
        if ( Queue->Header.SignalState )
          v14 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v101 = KeGetCurrentIrql();
            if ( v101 <= 0xFu && v49 <= 0xFu && v101 >= 2u )
            {
              v102 = KeGetCurrentPrcb();
              v103 = v102->SchedulerAssist;
              v104 = ~(unsigned __int16)(-1LL << (v49 + 1));
              v69 = (v104 & v103[5]) == 0;
              v103[5] &= v104;
              if ( v69 )
                KiRemoveSystemWorkPriorityKick(v102);
            }
          }
        }
        __writecr8(v49);
      }
      goto LABEL_39;
    }
    v48 = KeGetCurrentIrql();
    v113 = v48;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v48 <= 0xFu )
    {
      v99 = KeGetCurrentPrcb()->SchedulerAssist;
      Flink = (struct _LIST_ENTRY *)(v99[5] | ~((unsigned __int8)(1LL << ((unsigned __int8)v48 + 1)) - 1) & 4u);
      v99[5] = (_DWORD)Flink;
    }
    CurrentThread->WaitIrql = v48;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_263;
  v105 = CurrentThread->QueueListEntry.Flink;
  v106 = CurrentThread->QueueListEntry.Blink;
  if ( v105->Blink != &CurrentThread->QueueListEntry || v106->Flink != &CurrentThread->QueueListEntry )
LABEL_264:
    __fastfail(3u);
  v106->Flink = v105;
  v105->Blink = v106;
  CurrentThread->Queue = 0LL;
LABEL_263:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  v46 = EntryArray;
  *EntryArray = (PLIST_ENTRY)128;
LABEL_121:
  LODWORD(v33) = 1;
LABEL_94:
  CurrentThread->WaitReason = 0;
  v47 = KeGetCurrentPrcb();
  if ( v47->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v47, 1LL, 0LL);
  KiFastExitThreadWait(v47, CurrentThread, 1LL, v23);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v33;
  EtwTraceDequeueWork(CurrentThread, v46, (unsigned int)v33);
  return v33;
}
