/*
 * XREFs of KeRemoveQueueEx @ 0x1402A9110
 * Callers:
 *     KeRemoveQueue @ 0x1402A7710 (KeRemoveQueue.c)
 *     IoRemoveIoCompletion @ 0x1402A8D10 (IoRemoveIoCompletion.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSwitchQueue @ 0x14021C9D8 (KiSwitchQueue.c)
 *     KiAttemptFastRemoveQueue @ 0x14023A7C8 (KiAttemptFastRemoveQueue.c)
 *     KiFastExitThreadWait @ 0x1402661E8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiTestForAlertPending @ 0x1402A7A34 (KiTestForAlertPending.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x1405A78CC (EtwTraceDequeueWork.c)
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
  ULONG v13; // r15d
  char v14; // r14
  struct _KPRCB *v15; // rsi
  _DWORD *v16; // rcx
  $97202178496CA35ABF26341004BDBFC1 *v17; // r14
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rsi
  struct _KQUEUE *v21; // r8
  unsigned int v22; // esi
  unsigned __int64 v23; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v25; // rcx
  _LIST_ENTRY *v26; // rax
  PLIST_ENTRY *v27; // r14
  struct _LIST_ENTRY *Flink; // rdx
  LIST_ENTRY *p_EntryListHead; // r8
  PLIST_ENTRY *v31; // r9
  __int64 v32; // rsi
  struct _LIST_ENTRY *v33; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 WaitIrql; // rdi
  ULONG_PTR v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  struct _KPRCB *v40; // rsi
  unsigned __int64 v41; // rdi
  ULONG_PTR v42; // rbp
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v44; // rcx
  PLIST_ENTRY *v45; // r14
  struct _KPRCB *v46; // rdi
  __int64 v47; // r10
  unsigned __int8 v48; // si
  struct _KPRCB *v49; // r13
  _DWORD *v50; // rcx
  _KTHREAD *NextThread; // r13
  __int64 v52; // r8
  _DWORD *v53; // rcx
  _DWORD *v54; // rcx
  unsigned __int8 v55; // cl
  struct _KPRCB *v56; // r13
  _DWORD *v57; // rcx
  _KTHREAD *v58; // r13
  __int64 v59; // r8
  _DWORD *v60; // rcx
  _DWORD *v61; // rcx
  _DWORD *SchedulerAssist; // r9
  int v63; // eax
  int v64; // eax
  int v65; // eax
  struct _KPRCB *v66; // rcx
  _DWORD *v67; // rdx
  bool v68; // zf
  _DWORD *v69; // rdx
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  struct _KPRCB *v73; // rdi
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  _DWORD *v78; // rcx
  int v79; // eax
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  _DWORD *v83; // rcx
  int v84; // eax
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  _DWORD *v87; // rdx
  struct _KPRCB *v88; // r9
  _DWORD *v89; // r8
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  struct _KPRCB *v94; // rcx
  _DWORD *v95; // rdx
  _DWORD *v96; // r9
  int v97; // eax
  _DWORD *v98; // r9
  _DWORD *v99; // r9
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r9
  _DWORD *v102; // r8
  int v103; // eax
  struct _LIST_ENTRY *v104; // rdx
  struct _LIST_ENTRY *v105; // rcx
  PLIST_ENTRY *v106; // rdx
  int v107; // [rsp+30h] [rbp-68h] BYREF
  int v108; // [rsp+34h] [rbp-64h] BYREF
  int v109; // [rsp+38h] [rbp-60h] BYREF
  int v110; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v111; // [rsp+40h] [rbp-58h] BYREF
  __int64 v112; // [rsp+48h] [rbp-50h]
  __int64 v113; // [rsp+50h] [rbp-48h]
  int v115; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v9 = WaitMode;
  v113 = 0LL;
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
  v13 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v115 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v115 = 1;
    }
  }
  else
  {
    v115 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v107 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v107);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v31 = EntryArray;
        v32 = 0LL;
        do
        {
          --Queue->Header.SignalState;
          v33 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(0x96u, (ULONG_PTR)Flink, (ULONG_PTR)Queue, ExWorkerQueue, (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v33->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_264;
          Blink->Flink = v33;
          v33->Blink = Blink;
          Flink->Flink = 0LL;
          EntryArray[v32] = Flink;
          v32 = (unsigned int)(v32 + 1);
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && (unsigned int)v32 < Count );
        if ( (_DWORD)v32 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          CurrentPrcb = KeGetCurrentPrcb();
          WaitIrql = CurrentThread->WaitIrql;
          if ( (unsigned __int8)WaitIrql >= 2u )
          {
            if ( CurrentPrcb->NextThread && !CurrentPrcb->DpcRoutineActive )
            {
              KiRequestSoftwareInterrupt(CurrentPrcb, 2);
              v31 = EntryArray;
            }
            goto LABEL_56;
          }
          v37 = (ULONG_PTR)CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v49 = KeGetCurrentPrcb();
            v108 = 0;
            v50 = v49->SchedulerAssist;
            if ( v50 )
            {
              if ( v49->NestingLevel <= 1u )
              {
                v63 = v50[6];
                v50[6] = v63 + 1;
                if ( v63 == -1 )
LABEL_151:
                  KiRemoveSystemWorkPriorityKick(v49);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              v60 = v49->SchedulerAssist;
              if ( v60 )
              {
                if ( v49->NestingLevel <= 1u )
                {
                  v64 = v60[6] - 1;
                  v60[6] = v64;
                  if ( !v64 )
                    KiRemoveSystemWorkPriorityKick(v49);
                }
              }
              do
                KeYieldProcessorEx(&v108);
              while ( CurrentPrcb->PrcbLock );
              v61 = v49->SchedulerAssist;
              if ( v61 )
              {
                if ( v49->NestingLevel <= 1u )
                {
                  v65 = v61[6];
                  v61[6] = v65 + 1;
                  if ( v65 == -1 )
                    goto LABEL_151;
                }
              }
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(CurrentPrcb, v37, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
            {
              v52 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
              NextThread->ReadyTime = v52 + MEMORY[0xFFFFF78000000320];
            }
            NextThread->WaitBlockFill6[68] = 2;
            *(_BYTE *)(v37 + 643) = 32;
            *(_BYTE *)(v37 + 390) = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v37, v52);
            if ( !(unsigned __int8)KiSwapContext(v37, NextThread, (unsigned __int8)WaitIrql) )
              goto LABEL_115;
            if ( !KiIrqlFlags
              || (KiIrqlFlags & 1) == 0
              || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
              || (v66 = KeGetCurrentPrcb(),
                  v67 = v66->SchedulerAssist,
                  v68 = (v67[5] & 0xFFFF0003) == 0,
                  v67[5] &= 0xFFFF0003,
                  !v68) )
            {
LABEL_143:
              __writecr8(1uLL);
              *(_DWORD *)(v37 + 116) &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
LABEL_115:
              v31 = EntryArray;
LABEL_54:
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v70 = KeGetCurrentPrcb();
                v71 = v70->SchedulerAssist;
                v72 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v68 = (v72 & v71[5]) == 0;
                v71[5] &= v72;
                if ( v68 )
                  KiRemoveSystemWorkPriorityKick(v70);
                v31 = EntryArray;
              }
              __writecr8(WaitIrql);
LABEL_56:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                EtwTraceDequeueWork(CurrentThread, v31, (unsigned int)v32);
              return v32;
            }
          }
          else
          {
            if ( (*(_DWORD *)(v37 + 116) & 0x40) == 0 )
              goto LABEL_54;
            if ( !KiIrqlFlags )
              goto LABEL_143;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_143;
            if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
              goto LABEL_143;
            v66 = KeGetCurrentPrcb();
            v69 = v66->SchedulerAssist;
            v68 = (v69[5] & 0xFFFF0003) == 0;
            v69[5] &= 0xFFFF0003;
            if ( !v68 )
              goto LABEL_143;
          }
          KiRemoveSystemWorkPriorityKick(v66);
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
        v27 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v73 = KeGetCurrentPrcb();
          v109 = 0;
          v74 = v73->SchedulerAssist;
          if ( v74 )
          {
            if ( v73->NestingLevel <= 1u )
            {
              v75 = v74[6];
              v74[6] = v75 + 1;
              if ( v75 == -1 )
LABEL_180:
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
              KeYieldProcessorEx(&v109);
            while ( CurrentThread->ThreadLock );
            v78 = v73->SchedulerAssist;
            if ( v78 )
            {
              if ( v73->NestingLevel <= 1u )
              {
                v79 = v78[6];
                v78[6] = v79 + 1;
                if ( v79 == -1 )
                  goto LABEL_180;
              }
            }
          }
        }
        v38 = KiTestForAlertPending((__int64)CurrentThread, Alertable, v9, 1);
        v39 = v38;
        if ( !v38 )
          v39 = 258LL;
        v27 = EntryArray;
        *EntryArray = (PLIST_ENTRY)v39;
        if ( Alertable )
          KiReleaseThreadLockSafe((__int64)CurrentThread);
      }
      v40 = KeGetCurrentPrcb();
      v41 = CurrentThread->WaitIrql;
      if ( (unsigned __int8)v41 >= 2u )
      {
        if ( v40->NextThread && !v40->DpcRoutineActive )
          KiRequestSoftwareInterrupt(v40, 2);
LABEL_39:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v106 = v27;
          goto LABEL_265;
        }
        return v13;
      }
      v42 = (ULONG_PTR)v40->CurrentThread;
      if ( v40->NextThread )
      {
        KiAbProcessContextSwitch(v40->CurrentThread, 0LL);
        v56 = KeGetCurrentPrcb();
        v110 = 0;
        v57 = v56->SchedulerAssist;
        if ( v57 )
        {
          if ( v56->NestingLevel <= 1u )
          {
            v80 = v57[6];
            v57[6] = v80 + 1;
            if ( v80 == -1 )
LABEL_193:
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v40->PrcbLock, 0LL) )
        {
          v81 = v56->SchedulerAssist;
          if ( v81 )
          {
            if ( v56->NestingLevel <= 1u )
            {
              v82 = v81[6] - 1;
              v81[6] = v82;
              if ( !v82 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
          do
            KeYieldProcessorEx(&v110);
          while ( v40->PrcbLock );
          v83 = v56->SchedulerAssist;
          if ( v83 )
          {
            if ( v56->NestingLevel <= 1u )
            {
              v84 = v83[6];
              v83[6] = v84 + 1;
              if ( v84 == -1 )
                goto LABEL_193;
            }
          }
        }
        v58 = v40->NextThread;
        v40->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v40, v42, 0LL);
        _enable();
        v40->CurrentThread = v58;
        if ( v58->WaitBlockFill6[68] == 1 )
        {
          v59 = v58->ReadyTime - v58->WaitBlock[2].SpareLong;
          v58->ReadyTime = v59 + MEMORY[0xFFFFF78000000320];
        }
        v58->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v42 + 643) = 32;
        *(_BYTE *)(v42 + 390) = v41;
        KiQueueReadyThread(v40, v42, v59);
        if ( !(unsigned __int8)KiSwapContext(v42, v58, (unsigned __int8)v41) )
          goto LABEL_70;
        if ( !KiIrqlFlags )
          goto LABEL_212;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_212;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_212;
        v85 = KeGetCurrentPrcb();
        v86 = v85->SchedulerAssist;
        v68 = (v86[5] & 0xFFFF0003) == 0;
        v86[5] &= 0xFFFF0003;
        if ( !v68 )
          goto LABEL_212;
      }
      else
      {
        if ( (*(_DWORD *)(v42 + 116) & 0x40) == 0 )
          goto LABEL_70;
        if ( !KiIrqlFlags
          || (KiIrqlFlags & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v85 = KeGetCurrentPrcb(),
              v87 = v85->SchedulerAssist,
              v68 = (v87[5] & 0xFFFF0003) == 0,
              v87[5] &= 0xFFFF0003,
              !v68) )
        {
LABEL_212:
          __writecr8(1uLL);
          *(_DWORD *)(v42 + 116) &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
LABEL_70:
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v88 = KeGetCurrentPrcb();
              v89 = v88->SchedulerAssist;
              v90 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
              v68 = (v90 & v89[5]) == 0;
              v89[5] &= v90;
              if ( v68 )
                KiRemoveSystemWorkPriorityKick(v88);
            }
          }
          __writecr8(v41);
          goto LABEL_39;
        }
      }
      KiRemoveSystemWorkPriorityKick(v85);
      goto LABEL_212;
    }
  }
LABEL_10:
  v112 = CurrentThread->WaitIrql;
  while ( 1 )
  {
    v14 = v112;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v15 = KeGetCurrentPrcb();
      v111 = 0;
      v16 = v15->SchedulerAssist;
      if ( v16 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v91 = v16[6];
          v16[6] = v91 + 1;
          if ( v91 == -1 )
LABEL_223:
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v53 = v15->SchedulerAssist;
        if ( v53 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v92 = v53[6] - 1;
            v53[6] = v92;
            if ( !v92 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v111);
        while ( CurrentThread->ThreadLock );
        v54 = v15->SchedulerAssist;
        if ( v54 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v93 = v54[6];
            v54[6] = v93 + 1;
            if ( v93 == -1 )
              goto LABEL_223;
          }
        }
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || v14 )
        break;
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v94 = KeGetCurrentPrcb();
          v95 = v94->SchedulerAssist;
          v68 = (v95[5] & 0xFFFF0003) == 0;
          v95[5] &= 0xFFFF0003;
          if ( v68 )
            KiRemoveSystemWorkPriorityKick(v94);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v55 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
      {
        v96 = KeGetCurrentPrcb()->SchedulerAssist;
        v96[5] |= ~((unsigned __int8)(1LL << (v55 + 1)) - 1) & 4;
      }
      CurrentThread->WaitIrql = 0;
    }
    v17 = &CurrentThread->320;
    if ( Alertable )
    {
      if ( CurrentThread->Alerted[v9] )
      {
        CurrentThread->Alerted[v9] = 0;
        v20 = 257LL;
      }
      else if ( (_BYTE)v9
             && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
LABEL_103:
        v20 = 192LL;
      }
      else
      {
        if ( !CurrentThread->Alerted[0] )
          goto LABEL_22;
        CurrentThread->Alerted[0] = 0;
        v20 = 257LL;
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), v112);
      goto LABEL_24;
    }
    if ( (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 && (_BYTE)v9 )
      goto LABEL_103;
LABEL_22:
    CurrentThread->WaitBlockFill6[68] = 5;
    CurrentThread->WaitReason = 15;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentThread->ThreadLock = 0LL;
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v97 = v19[6] - 1;
        v19[6] = v97;
        if ( !v97 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    v20 = 0LL;
LABEL_24:
    if ( v20 )
    {
      *EntryArray = (PLIST_ENTRY)v20;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        v106 = EntryArray;
LABEL_265:
        EtwTraceDequeueWork(CurrentThread, v106, v13);
        return v13;
      }
      return v13;
    }
    v21 = (struct _KQUEUE *)CurrentThread->Queue;
    if ( Queue != v21 )
      KiSwitchQueue((__int64)CurrentThread, (__int64)Queue, (__int64)v21);
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    v22 = 0;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = Queue;
    if ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v22 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v22);
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
        LODWORD(v32) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)EntryArray, Count);
        if ( (_DWORD)v32 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          v45 = EntryArray;
          goto LABEL_94;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v23 = QuadPart;
    if ( v115 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v44 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v23 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v23 = ThreadTimerDelay + QuadPart;
      }
    }
    else
    {
      if ( !v115 )
        goto LABEL_32;
      if ( !QuadPart )
      {
LABEL_120:
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        v45 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
        goto LABEL_121;
      }
      v44 = MEMORY[0xFFFFF78000000014];
    }
    if ( v44 > v23 )
      goto LABEL_120;
LABEL_32:
    _InterlockedDecrement((volatile signed __int32 *)&Queue->CurrentCount);
    p_WaitListHead = &Queue->Header.WaitListHead;
    v25 = Queue->Header.WaitListHead.Flink;
    if ( v25->Blink != &Queue->Header.WaitListHead )
      goto LABEL_264;
    v17->WaitBlock[0].WaitListEntry.Flink = v25;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v25->Blink = (struct _LIST_ENTRY *)v17;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v17;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v26 = (_LIST_ENTRY *)KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v115, QuadPart, 0LL);
    CurrentThread->WaitReason = 0;
    if ( v26 != (_LIST_ENTRY *)256 )
    {
      v27 = EntryArray;
      *EntryArray = v26;
      if ( Count > 1
        && (unsigned __int64)&v26[-17].Blink + 7 > 1
        && v26 != (_LIST_ENTRY *)128
        && v26 != (_LIST_ENTRY *)192
        && Queue->Header.SignalState )
      {
        v48 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
        {
          v99 = KeGetCurrentPrcb()->SchedulerAssist;
          v99[5] |= (-1 << (v48 + 1)) & 4;
        }
        KiAcquireKobjectLockSafe(Queue);
        if ( Queue->Header.SignalState )
          v13 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue, (__int64)(EntryArray + 1), Count - 1) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v100 = KeGetCurrentIrql();
            if ( v100 <= 0xFu && v48 <= 0xFu && v100 >= 2u )
            {
              v101 = KeGetCurrentPrcb();
              v102 = v101->SchedulerAssist;
              v103 = ~(unsigned __int16)(-1LL << (v48 + 1));
              v68 = (v103 & v102[5]) == 0;
              v102[5] &= v103;
              if ( v68 )
                KiRemoveSystemWorkPriorityKick(v101);
            }
          }
        }
        __writecr8(v48);
      }
      goto LABEL_39;
    }
    v47 = KeGetCurrentIrql();
    v112 = v47;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
    {
      v98 = KeGetCurrentPrcb()->SchedulerAssist;
      v98[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v47 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v47;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_263;
  v104 = CurrentThread->QueueListEntry.Flink;
  v105 = CurrentThread->QueueListEntry.Blink;
  if ( v104->Blink != &CurrentThread->QueueListEntry || v105->Flink != &CurrentThread->QueueListEntry )
LABEL_264:
    __fastfail(3u);
  v105->Flink = v104;
  v104->Blink = v105;
  CurrentThread->Queue = 0LL;
LABEL_263:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  v45 = EntryArray;
  *EntryArray = (PLIST_ENTRY)128;
LABEL_121:
  LODWORD(v32) = 1;
LABEL_94:
  CurrentThread->WaitReason = 0;
  v46 = KeGetCurrentPrcb();
  if ( v46->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(v46, 1LL, 0LL, 2LL);
  KiFastExitThreadWait((__int64)v46, (__int64)CurrentThread, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v32;
  EtwTraceDequeueWork(CurrentThread, v45, (unsigned int)v32);
  return v32;
}
