/*
 * XREFs of KeRemoveQueueEx @ 0x140268450
 * Callers:
 *     IoRemoveIoCompletion @ 0x140268050 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x14030A540 (KeRemoveQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiTestForAlertPending @ 0x140300578 (KiTestForAlertPending.c)
 *     KiAttemptFastRemoveQueue @ 0x14030B774 (KiAttemptFastRemoveQueue.c)
 *     KiFastExitThreadWait @ 0x140329A64 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiSwitchQueue @ 0x140358BF0 (KiSwitchQueue.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x1405A1ADC (EtwTraceDequeueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  struct _KTHREAD *CurrentThread; // rbx
  char *QuadPart; // rbp
  __int64 v9; // r13
  PLARGE_INTEGER v10; // r10
  BOOLEAN v11; // r12
  unsigned __int8 CurrentIrql; // r11
  __int64 Flink; // rdx
  ULONG v14; // r15d
  char v15; // r14
  struct _KPRCB *v16; // rsi
  _DWORD *v17; // rcx
  $A4B5D2C1751CB7039976B0B68C9462E1 *v18; // r14
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rsi
  struct _KQUEUE *v22; // r8
  __int64 v23; // r9
  unsigned int v24; // esi
  char *v25; // rax
  LIST_ENTRY *p_WaitListHead; // rax
  struct _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY *v28; // rax
  PLIST_ENTRY *v29; // r14
  __int64 v31; // rsi
  __int64 v32; // rax
  _QWORD *v33; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int64 WaitIrql; // rdi
  _KTHREAD *v36; // r14
  int v37; // eax
  __int64 v38; // rcx
  struct _KPRCB *v39; // rsi
  unsigned __int64 v40; // rdi
  _KTHREAD *v41; // rbp
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v43; // rcx
  PLIST_ENTRY *v44; // r14
  struct _KPRCB *v45; // rdi
  __int64 v46; // r10
  unsigned __int8 v47; // si
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _KPRCB *v51; // r13
  _DWORD *SchedulerAssist; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v54; // rcx
  _DWORD *v55; // rcx
  _DWORD *v56; // r9
  unsigned __int8 v57; // cl
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  struct _KPRCB *v61; // r13
  _DWORD *v62; // rcx
  _KTHREAD *v63; // r13
  _DWORD *v64; // rcx
  _DWORD *v65; // rcx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  bool v71; // zf
  _DWORD *v72; // rdx
  struct _KPRCB *v73; // r9
  _DWORD *v74; // r8
  int v75; // eax
  struct _KPRCB *v76; // rdi
  _DWORD *v77; // rcx
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  int v83; // eax
  _DWORD *v84; // rcx
  int v85; // eax
  _DWORD *v86; // rcx
  int v87; // eax
  struct _KPRCB *v88; // rcx
  _DWORD *v89; // rdx
  _DWORD *v90; // rdx
  struct _KPRCB *v91; // r9
  _DWORD *v92; // r8
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  struct _KPRCB *v97; // rcx
  _DWORD *v98; // rdx
  int v99; // eax
  unsigned __int8 v100; // al
  struct _KPRCB *v101; // r9
  _DWORD *v102; // r8
  int v103; // eax
  struct _LIST_ENTRY *v104; // rdx
  struct _LIST_ENTRY *Blink; // rcx
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
  v10 = Timeout;
  v113 = 0LL;
  v11 = Alertable;
  if ( !_bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      Timeout = (PLARGE_INTEGER)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&Alertable = (-1 << (CurrentIrql + 1)) & 4u | Timeout[2].HighPart;
      Timeout[2].HighPart = Alertable;
    }
    CurrentThread->WaitIrql = CurrentIrql;
  }
  Flink = 0xFFFFF78000000008uLL;
  v14 = 1;
  if ( v10 )
  {
    if ( v10->HighPart < 0 )
    {
      v115 = 2;
      QuadPart = (char *)(MEMORY[0xFFFFF78000000008]
                        - MEMORY[0xFFFFF780000003B0]
                        - (v10->QuadPart
                         + CurrentThread->RelativeTimerBias));
    }
    else
    {
      QuadPart = (char *)v10->QuadPart;
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
          KeYieldProcessorEx(&v107, Flink, Alertable, (__int64)Timeout);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = (__int64)Queue->EntryListHead.Flink;
        *(_QWORD *)&Alertable = &Queue->EntryListHead;
        Timeout = (PLARGE_INTEGER)EntryArray;
        v31 = 0LL;
        do
        {
          --Queue->Header.SignalState;
          v32 = *(_QWORD *)Flink;
          if ( !*(_QWORD *)Flink )
            KeBugCheckEx(0x96u, Flink, (ULONG_PTR)Queue, ExWorkerQueue, *(_QWORD *)(Flink + 16));
          v33 = *(_QWORD **)(Flink + 8);
          if ( *(_QWORD *)(v32 + 8) != Flink || *v33 != Flink )
            goto LABEL_264;
          *v33 = v32;
          *(_QWORD *)(v32 + 8) = v33;
          *(_QWORD *)Flink = 0LL;
          EntryArray[v31] = (PLIST_ENTRY)Flink;
          v31 = (unsigned int)(v31 + 1);
          Flink = *(_QWORD *)Alertable;
        }
        while ( *(_QWORD *)Alertable != Alertable && (unsigned int)v31 < Count );
        if ( (_DWORD)v31 )
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
              Timeout = (PLARGE_INTEGER)EntryArray;
            }
            goto LABEL_56;
          }
          v36 = CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
            v51 = KeGetCurrentPrcb();
            v108 = 0;
            SchedulerAssist = v51->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( v51->NestingLevel <= 1u )
              {
                v66 = SchedulerAssist[6];
                SchedulerAssist[6] = v66 + 1;
                if ( v66 == -1 )
LABEL_151:
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              v64 = v51->SchedulerAssist;
              if ( v64 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v67 = v64[6] - 1;
                  v64[6] = v67;
                  if ( !v67 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
              do
                KeYieldProcessorEx(&v108, v48, v49, v50);
              while ( CurrentPrcb->PrcbLock );
              v65 = v51->SchedulerAssist;
              if ( v65 )
              {
                if ( v51->NestingLevel <= 1u )
                {
                  v68 = v65[6];
                  v65[6] = v68 + 1;
                  if ( v68 == -1 )
                    goto LABEL_151;
                }
              }
            }
            NextThread = CurrentPrcb->NextThread;
            CurrentPrcb->NextThread = 0LL;
            _disable();
            KiEndThreadCycleAccumulation(CurrentPrcb, v36, 0LL);
            _enable();
            CurrentPrcb->CurrentThread = NextThread;
            if ( NextThread->WaitBlockFill6[68] == 1 )
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v36->WaitReason = 32;
            v36->WaitIrql = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v36);
            if ( !(unsigned __int8)KiSwapContext(v36, NextThread, (unsigned __int8)WaitIrql) )
              goto LABEL_115;
            if ( !KiIrqlFlags
              || (KiIrqlFlags & 1) == 0
              || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
              || (v69 = KeGetCurrentPrcb(),
                  v70 = v69->SchedulerAssist,
                  v71 = (v70[5] & 0xFFFF0003) == 0,
                  v70[5] &= 0xFFFF0003,
                  !v71) )
            {
LABEL_143:
              __writecr8(1uLL);
              v36->MiscFlags &= ~0x40u;
              KiDeliverApc(0, 0LL, 0LL, Timeout);
LABEL_115:
              Timeout = (PLARGE_INTEGER)EntryArray;
LABEL_54:
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v73 = KeGetCurrentPrcb();
                v74 = v73->SchedulerAssist;
                v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v71 = (v75 & v74[5]) == 0;
                v74[5] &= v75;
                if ( v71 )
                  KiRemoveSystemWorkPriorityKick(v73);
                Timeout = (PLARGE_INTEGER)EntryArray;
              }
              __writecr8(WaitIrql);
LABEL_56:
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                EtwTraceDequeueWork(CurrentThread, Timeout, (unsigned int)v31);
              return v31;
            }
          }
          else
          {
            if ( (v36->MiscFlags & 0x40) == 0 )
              goto LABEL_54;
            if ( !KiIrqlFlags )
              goto LABEL_143;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_143;
            if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
              goto LABEL_143;
            v69 = KeGetCurrentPrcb();
            v72 = v69->SchedulerAssist;
            v71 = (v72[5] & 0xFFFF0003) == 0;
            v72[5] &= 0xFFFF0003;
            if ( !v71 )
              goto LABEL_143;
          }
          KiRemoveSystemWorkPriorityKick(v69);
          goto LABEL_143;
        }
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_10;
    }
    if ( v10 && !v10->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( v11 )
        {
          v76 = KeGetCurrentPrcb();
          v109 = 0;
          v77 = v76->SchedulerAssist;
          if ( v77 )
          {
            if ( v76->NestingLevel <= 1u )
            {
              v78 = v77[6];
              v77[6] = v78 + 1;
              if ( v78 == -1 )
LABEL_180:
                KiRemoveSystemWorkPriorityKick(v76);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v79 = v76->SchedulerAssist;
            if ( v79 )
            {
              if ( v76->NestingLevel <= 1u )
              {
                v80 = v79[6] - 1;
                v79[6] = v80;
                if ( !v80 )
                  KiRemoveSystemWorkPriorityKick(v76);
              }
            }
            do
              KeYieldProcessorEx(&v109, Flink, Alertable, (__int64)Timeout);
            while ( CurrentThread->ThreadLock );
            v81 = v76->SchedulerAssist;
            if ( v81 )
            {
              if ( v76->NestingLevel <= 1u )
              {
                v82 = v81[6];
                v81[6] = v82 + 1;
                if ( v82 == -1 )
                  goto LABEL_180;
              }
            }
          }
        }
        v37 = KiTestForAlertPending(CurrentThread, v11, (unsigned __int8)v9, 1LL);
        v38 = v37;
        if ( !v37 )
          v38 = 258LL;
        v29 = EntryArray;
        *EntryArray = (PLIST_ENTRY)v38;
        if ( v11 )
          KiReleaseThreadLockSafe(CurrentThread);
      }
      v39 = KeGetCurrentPrcb();
      v40 = CurrentThread->WaitIrql;
      if ( (unsigned __int8)v40 >= 2u )
      {
        if ( v39->NextThread && !v39->DpcRoutineActive )
        {
          LOBYTE(Flink) = 2;
          KiRequestSoftwareInterrupt(v39, Flink);
        }
LABEL_39:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v106 = v29;
          goto LABEL_265;
        }
        return v14;
      }
      v41 = v39->CurrentThread;
      if ( v39->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v39->CurrentThread, 0);
        v61 = KeGetCurrentPrcb();
        v110 = 0;
        v62 = v61->SchedulerAssist;
        if ( v62 )
        {
          if ( v61->NestingLevel <= 1u )
          {
            v83 = v62[6];
            v62[6] = v83 + 1;
            if ( v83 == -1 )
LABEL_193:
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v39->PrcbLock, 0LL) )
        {
          v84 = v61->SchedulerAssist;
          if ( v84 )
          {
            if ( v61->NestingLevel <= 1u )
            {
              v85 = v84[6] - 1;
              v84[6] = v85;
              if ( !v85 )
                KiRemoveSystemWorkPriorityKick(v61);
            }
          }
          do
            KeYieldProcessorEx(&v110, v58, v59, v60);
          while ( v39->PrcbLock );
          v86 = v61->SchedulerAssist;
          if ( v86 )
          {
            if ( v61->NestingLevel <= 1u )
            {
              v87 = v86[6];
              v86[6] = v87 + 1;
              if ( v87 == -1 )
                goto LABEL_193;
            }
          }
        }
        v63 = v39->NextThread;
        v39->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v39, v41, 0LL);
        _enable();
        v39->CurrentThread = v63;
        if ( v63->WaitBlockFill6[68] == 1 )
          v63->ReadyTime = v63->ReadyTime - v63->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v63->WaitBlockFill6[68] = 2;
        v41->WaitReason = 32;
        v41->WaitIrql = v40;
        KiQueueReadyThread(v39, v41);
        if ( !(unsigned __int8)KiSwapContext(v41, v63, (unsigned __int8)v40) )
          goto LABEL_70;
        if ( !KiIrqlFlags )
          goto LABEL_212;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_212;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_212;
        v88 = KeGetCurrentPrcb();
        v89 = v88->SchedulerAssist;
        v71 = (v89[5] & 0xFFFF0003) == 0;
        v89[5] &= 0xFFFF0003;
        if ( !v71 )
          goto LABEL_212;
      }
      else
      {
        if ( (v41->MiscFlags & 0x40) == 0 )
          goto LABEL_70;
        if ( !KiIrqlFlags
          || (KiIrqlFlags & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v88 = KeGetCurrentPrcb(),
              v90 = v88->SchedulerAssist,
              v71 = (v90[5] & 0xFFFF0003) == 0,
              v90[5] &= 0xFFFF0003,
              !v71) )
        {
LABEL_212:
          __writecr8(1uLL);
          v41->MiscFlags &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL, Timeout);
LABEL_70:
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v91 = KeGetCurrentPrcb();
              v92 = v91->SchedulerAssist;
              v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
              v71 = (v93 & v92[5]) == 0;
              v92[5] &= v93;
              if ( v71 )
                KiRemoveSystemWorkPriorityKick(v91);
            }
          }
          __writecr8(v40);
          goto LABEL_39;
        }
      }
      KiRemoveSystemWorkPriorityKick(v88);
      goto LABEL_212;
    }
  }
LABEL_10:
  v112 = CurrentThread->WaitIrql;
  while ( 1 )
  {
    v15 = v112;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( v11 )
        CurrentThread->MiscFlags |= 0x10u;
      v16 = KeGetCurrentPrcb();
      v111 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v94 = v17[6];
          v17[6] = v94 + 1;
          if ( v94 == -1 )
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
            v95 = v54[6] - 1;
            v54[6] = v95;
            if ( !v95 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v111, Flink, Alertable, (__int64)Timeout);
        while ( CurrentThread->ThreadLock );
        v55 = v16->SchedulerAssist;
        if ( v55 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v96 = v55[6];
            v55[6] = v96 + 1;
            if ( v96 == -1 )
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
          v97 = KeGetCurrentPrcb();
          v98 = v97->SchedulerAssist;
          v71 = (v98[5] & 0xFFFF0003) == 0;
          v98[5] &= 0xFFFF0003;
          if ( v71 )
            KiRemoveSystemWorkPriorityKick(v97);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL, v56);
      v57 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v57 <= 0xFu )
      {
        Timeout = (PLARGE_INTEGER)KeGetCurrentPrcb()->SchedulerAssist;
        *(_QWORD *)&Alertable = (unsigned int)Timeout[2].HighPart;
        Flink = Alertable | ~((unsigned __int8)(1LL << (v57 + 1)) - 1) & 4u;
        Timeout[2].HighPart = Flink;
      }
      CurrentThread->WaitIrql = 0;
    }
    v18 = &CurrentThread->320;
    if ( v11 )
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
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), (unsigned __int8)v112);
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
        v99 = v20[6] - 1;
        v20[6] = v99;
        if ( !v99 )
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
        v106 = EntryArray;
LABEL_265:
        EtwTraceDequeueWork(CurrentThread, v106, v14);
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
    }
    if ( Queue->Header.SignalState )
    {
      if ( Queue->CurrentCount <= Queue->MaximumCount )
      {
        LODWORD(v31) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
        if ( (_DWORD)v31 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          v44 = EntryArray;
          goto LABEL_94;
        }
      }
    }
    if ( (Queue->Header.Signalling & 1) != 0 )
      break;
    v25 = QuadPart;
    if ( v115 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v43 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v25 = QuadPart;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v25 = &QuadPart[ThreadTimerDelay];
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
        v44 = EntryArray;
        *EntryArray = (PLIST_ENTRY)258;
        goto LABEL_121;
      }
      v43 = MEMORY[0xFFFFF78000000014];
    }
    if ( v43 > (unsigned __int64)v25 )
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
    v28 = (_LIST_ENTRY *)KiCommitThreadWait((__int64)CurrentThread, (__int64)&CurrentThread->320, v115, QuadPart, 0LL);
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
        v47 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v47 <= 0xFu )
        {
          Timeout = (PLARGE_INTEGER)KeGetCurrentPrcb()->SchedulerAssist;
          Flink = (-1LL << (v47 + 1)) & 4;
          *(_QWORD *)&Alertable = (unsigned int)Flink | Timeout[2].HighPart;
          Timeout[2].HighPart = Alertable;
        }
        KiAcquireKobjectLockSafe(&Queue->Header.Lock, Flink, Alertable, (__int64)Timeout);
        if ( Queue->Header.SignalState )
          v14 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v100 = KeGetCurrentIrql();
            if ( v100 <= 0xFu && v47 <= 0xFu && v100 >= 2u )
            {
              v101 = KeGetCurrentPrcb();
              v102 = v101->SchedulerAssist;
              v103 = ~(unsigned __int16)(-1LL << (v47 + 1));
              v71 = (v103 & v102[5]) == 0;
              v102[5] &= v103;
              if ( v71 )
                KiRemoveSystemWorkPriorityKick(v101);
            }
          }
        }
        __writecr8(v47);
      }
      goto LABEL_39;
    }
    v46 = KeGetCurrentIrql();
    v112 = v46;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v46 <= 0xFu )
    {
      Timeout = (PLARGE_INTEGER)KeGetCurrentPrcb()->SchedulerAssist;
      *(_QWORD *)&Alertable = (unsigned int)Timeout[2].HighPart;
      Flink = Alertable | ~((unsigned __int8)(1LL << ((unsigned __int8)v46 + 1)) - 1) & 4u;
      Timeout[2].HighPart = Flink;
    }
    CurrentThread->WaitIrql = v46;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_263;
  v104 = CurrentThread->QueueListEntry.Flink;
  Blink = CurrentThread->QueueListEntry.Blink;
  if ( v104->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_264:
    __fastfail(3u);
  Blink->Flink = v104;
  v104->Blink = Blink;
  CurrentThread->Queue = 0LL;
LABEL_263:
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  v44 = EntryArray;
  *EntryArray = (PLIST_ENTRY)128;
LABEL_121:
  LODWORD(v31) = 1;
LABEL_94:
  CurrentThread->WaitReason = 0;
  v45 = KeGetCurrentPrcb();
  if ( v45->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((__int64)v45, 1LL, 0LL, 2LL);
  KiFastExitThreadWait(v45, CurrentThread, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v31;
  EtwTraceDequeueWork(CurrentThread, v44, (unsigned int)v31);
  return v31;
}
