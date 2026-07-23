/*
 * XREFs of KeRemoveQueueEx @ 0x140207B10
 * Callers:
 *     KeRemoveQueue @ 0x140206110 (KeRemoveQueue.c)
 *     IoRemoveIoCompletion @ 0x140207710 (IoRemoveIoCompletion.c)
 * Callees:
 *     KiTestForAlertPending @ 0x140206434 (KiTestForAlertPending.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiFastExitThreadWait @ 0x1402D8158 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiSwitchQueue @ 0x140303594 (KiSwitchQueue.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 *     KiAttemptFastRemoveQueue @ 0x14031A074 (KiAttemptFastRemoveQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     EtwTraceDequeueWork @ 0x1405A5C6C (EtwTraceDequeueWork.c)
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
  unsigned __int64 v13; // rdx
  ULONG v14; // r15d
  char v15; // r14
  struct _KPRCB *v16; // rsi
  _DWORD *v17; // rcx
  $FA66ECE7F681727997618FC8DC30F69A *v18; // r14
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  __int64 v21; // rsi
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
  _KTHREAD *v37; // r14
  int v38; // eax
  __int64 v39; // rcx
  struct _KPRCB *v40; // rsi
  unsigned __int64 v41; // rdi
  _KTHREAD *v42; // rbp
  __int64 ThreadTimerDelay; // rdx
  unsigned __int64 v44; // rcx
  PLIST_ENTRY *v45; // r14
  struct _KPRCB *v46; // rdi
  __int64 v47; // r10
  unsigned __int8 v48; // si
  struct _KPRCB *v49; // r13
  _DWORD *v50; // rcx
  _KTHREAD *NextThread; // r13
  _DWORD *v52; // rcx
  _DWORD *v53; // rcx
  unsigned __int8 v54; // cl
  struct _KPRCB *v55; // r13
  _DWORD *v56; // rcx
  _KTHREAD *v57; // r13
  _DWORD *v58; // rcx
  _DWORD *v59; // rcx
  _DWORD *SchedulerAssist; // r9
  int v61; // eax
  int v62; // eax
  int v63; // eax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  bool v66; // zf
  _DWORD *v67; // rdx
  struct _KPRCB *v68; // r9
  _DWORD *v69; // r8
  int v70; // eax
  struct _KPRCB *v71; // rdi
  _DWORD *v72; // rcx
  int v73; // eax
  _DWORD *v74; // rcx
  int v75; // eax
  _DWORD *v76; // rcx
  int v77; // eax
  int v78; // eax
  _DWORD *v79; // rcx
  int v80; // eax
  _DWORD *v81; // rcx
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  _DWORD *v85; // rdx
  struct _KPRCB *v86; // r9
  _DWORD *v87; // r8
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  struct _KPRCB *v92; // rcx
  _DWORD *v93; // rdx
  _DWORD *v94; // r9
  int v95; // eax
  _DWORD *v96; // r9
  _DWORD *v97; // r9
  unsigned __int8 v98; // al
  struct _KPRCB *v99; // r9
  _DWORD *v100; // r8
  int v101; // eax
  struct _LIST_ENTRY *v102; // rdx
  struct _LIST_ENTRY *v103; // rcx
  PLIST_ENTRY *v104; // rdx
  int v105; // [rsp+30h] [rbp-68h] BYREF
  int v106; // [rsp+34h] [rbp-64h] BYREF
  int v107; // [rsp+38h] [rbp-60h] BYREF
  int v108; // [rsp+3Ch] [rbp-5Ch] BYREF
  int v109; // [rsp+40h] [rbp-58h] BYREF
  __int64 v110; // [rsp+48h] [rbp-50h]
  __int64 v111; // [rsp+50h] [rbp-48h]
  int v113; // [rsp+B8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  QuadPart = 0LL;
  v9 = WaitMode;
  v111 = 0LL;
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
  v13 = 0xFFFFF78000000008uLL;
  v14 = 1;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v113 = 2;
      QuadPart = MEMORY[0xFFFFF78000000008]
               - MEMORY[0xFFFFF780000003B0]
               - (Timeout->QuadPart
                + CurrentThread->RelativeTimerBias);
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v113 = 1;
    }
  }
  else
  {
    v113 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v105 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v105);
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
              LOBYTE(Flink) = 2;
              KiRequestSoftwareInterrupt(CurrentPrcb, Flink);
              v31 = EntryArray;
            }
            goto LABEL_56;
          }
          v37 = CurrentPrcb->CurrentThread;
          if ( CurrentPrcb->NextThread )
          {
            KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
            v49 = KeGetCurrentPrcb();
            v106 = 0;
            v50 = v49->SchedulerAssist;
            if ( v50 )
            {
              if ( v49->NestingLevel <= 1u )
              {
                v61 = v50[6];
                v50[6] = v61 + 1;
                if ( v61 == -1 )
LABEL_151:
                  KiRemoveSystemWorkPriorityKick(v49);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              v58 = v49->SchedulerAssist;
              if ( v58 )
              {
                if ( v49->NestingLevel <= 1u )
                {
                  v62 = v58[6] - 1;
                  v58[6] = v62;
                  if ( !v62 )
                    KiRemoveSystemWorkPriorityKick(v49);
                }
              }
              do
                KeYieldProcessorEx(&v106);
              while ( CurrentPrcb->PrcbLock );
              v59 = v49->SchedulerAssist;
              if ( v59 )
              {
                if ( v49->NestingLevel <= 1u )
                {
                  v63 = v59[6];
                  v59[6] = v63 + 1;
                  if ( v63 == -1 )
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
              NextThread->ReadyTime = NextThread->ReadyTime
                                    - NextThread->WaitBlock[2].SpareLong
                                    + MEMORY[0xFFFFF78000000320];
            NextThread->WaitBlockFill6[68] = 2;
            v37->WaitReason = 32;
            v37->WaitIrql = WaitIrql;
            KiQueueReadyThread(CurrentPrcb, v37);
            if ( !(unsigned __int8)KiSwapContext(v37, NextThread, (unsigned __int8)WaitIrql) )
              goto LABEL_115;
            if ( !KiIrqlFlags
              || (KiIrqlFlags & 1) == 0
              || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
              || (v64 = KeGetCurrentPrcb(),
                  v65 = v64->SchedulerAssist,
                  v66 = (v65[5] & 0xFFFF0003) == 0,
                  v65[5] &= 0xFFFF0003,
                  !v66) )
            {
LABEL_143:
              __writecr8(1uLL);
              v37->MiscFlags &= ~0x40u;
              KiDeliverApc(0LL, 0LL, 0LL);
LABEL_115:
              v31 = EntryArray;
LABEL_54:
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v68 = KeGetCurrentPrcb();
                v69 = v68->SchedulerAssist;
                v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)WaitIrql + 1));
                v66 = (v70 & v69[5]) == 0;
                v69[5] &= v70;
                if ( v66 )
                  KiRemoveSystemWorkPriorityKick(v68);
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
            if ( (v37->MiscFlags & 0x40) == 0 )
              goto LABEL_54;
            if ( !KiIrqlFlags )
              goto LABEL_143;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_143;
            if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
              goto LABEL_143;
            v64 = KeGetCurrentPrcb();
            v67 = v64->SchedulerAssist;
            v66 = (v67[5] & 0xFFFF0003) == 0;
            v67[5] &= 0xFFFF0003;
            if ( !v66 )
              goto LABEL_143;
          }
          KiRemoveSystemWorkPriorityKick(v64);
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
          v71 = KeGetCurrentPrcb();
          v107 = 0;
          v72 = v71->SchedulerAssist;
          if ( v72 )
          {
            if ( v71->NestingLevel <= 1u )
            {
              v73 = v72[6];
              v72[6] = v73 + 1;
              if ( v73 == -1 )
LABEL_180:
                KiRemoveSystemWorkPriorityKick(v71);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            v74 = v71->SchedulerAssist;
            if ( v74 )
            {
              if ( v71->NestingLevel <= 1u )
              {
                v75 = v74[6] - 1;
                v74[6] = v75;
                if ( !v75 )
                  KiRemoveSystemWorkPriorityKick(v71);
              }
            }
            do
              KeYieldProcessorEx(&v107);
            while ( CurrentThread->ThreadLock );
            v76 = v71->SchedulerAssist;
            if ( v76 )
            {
              if ( v71->NestingLevel <= 1u )
              {
                v77 = v76[6];
                v76[6] = v77 + 1;
                if ( v77 == -1 )
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
          KiReleaseThreadLockSafe(CurrentThread);
      }
      v40 = KeGetCurrentPrcb();
      v41 = CurrentThread->WaitIrql;
      if ( (unsigned __int8)v41 >= 2u )
      {
        if ( v40->NextThread && !v40->DpcRoutineActive )
        {
          LOBYTE(v13) = 2;
          KiRequestSoftwareInterrupt(v40, v13);
        }
LABEL_39:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          v104 = v27;
          goto LABEL_265;
        }
        return v14;
      }
      v42 = v40->CurrentThread;
      if ( v40->NextThread )
      {
        KiAbProcessContextSwitch(v40->CurrentThread, 0LL);
        v55 = KeGetCurrentPrcb();
        v108 = 0;
        v56 = v55->SchedulerAssist;
        if ( v56 )
        {
          if ( v55->NestingLevel <= 1u )
          {
            v78 = v56[6];
            v56[6] = v78 + 1;
            if ( v78 == -1 )
LABEL_193:
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v40->PrcbLock, 0LL) )
        {
          v79 = v55->SchedulerAssist;
          if ( v79 )
          {
            if ( v55->NestingLevel <= 1u )
            {
              v80 = v79[6] - 1;
              v79[6] = v80;
              if ( !v80 )
                KiRemoveSystemWorkPriorityKick(v55);
            }
          }
          do
            KeYieldProcessorEx(&v108);
          while ( v40->PrcbLock );
          v81 = v55->SchedulerAssist;
          if ( v81 )
          {
            if ( v55->NestingLevel <= 1u )
            {
              v82 = v81[6];
              v81[6] = v82 + 1;
              if ( v82 == -1 )
                goto LABEL_193;
            }
          }
        }
        v57 = v40->NextThread;
        v40->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation(v40, v42, 0LL);
        _enable();
        v40->CurrentThread = v57;
        if ( v57->WaitBlockFill6[68] == 1 )
          v57->ReadyTime = v57->ReadyTime - v57->WaitBlock[2].SpareLong + MEMORY[0xFFFFF78000000320];
        v57->WaitBlockFill6[68] = 2;
        v42->WaitReason = 32;
        v42->WaitIrql = v41;
        KiQueueReadyThread(v40, v42);
        if ( !(unsigned __int8)KiSwapContext(v42, v57, (unsigned __int8)v41) )
          goto LABEL_70;
        if ( !KiIrqlFlags )
          goto LABEL_212;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_212;
        if ( (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu )
          goto LABEL_212;
        v83 = KeGetCurrentPrcb();
        v84 = v83->SchedulerAssist;
        v66 = (v84[5] & 0xFFFF0003) == 0;
        v84[5] &= 0xFFFF0003;
        if ( !v66 )
          goto LABEL_212;
      }
      else
      {
        if ( (v42->MiscFlags & 0x40) == 0 )
          goto LABEL_70;
        if ( !KiIrqlFlags
          || (KiIrqlFlags & 1) == 0
          || (unsigned __int8)(KeGetCurrentIrql() - 2) > 0xDu
          || (v83 = KeGetCurrentPrcb(),
              v85 = v83->SchedulerAssist,
              v66 = (v85[5] & 0xFFFF0003) == 0,
              v85[5] &= 0xFFFF0003,
              !v66) )
        {
LABEL_212:
          __writecr8(1uLL);
          v42->MiscFlags &= ~0x40u;
          KiDeliverApc(0LL, 0LL, 0LL);
LABEL_70:
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v86 = KeGetCurrentPrcb();
              v87 = v86->SchedulerAssist;
              v88 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
              v66 = (v88 & v87[5]) == 0;
              v87[5] &= v88;
              if ( v66 )
                KiRemoveSystemWorkPriorityKick(v86);
            }
          }
          __writecr8(v41);
          goto LABEL_39;
        }
      }
      KiRemoveSystemWorkPriorityKick(v83);
      goto LABEL_212;
    }
  }
LABEL_10:
  v110 = CurrentThread->WaitIrql;
  while ( 1 )
  {
    v15 = v110;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v9;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v16 = KeGetCurrentPrcb();
      v109 = 0;
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v89 = v17[6];
          v17[6] = v89 + 1;
          if ( v89 == -1 )
LABEL_223:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        v52 = v16->SchedulerAssist;
        if ( v52 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v90 = v52[6] - 1;
            v52[6] = v90;
            if ( !v90 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v109);
        while ( CurrentThread->ThreadLock );
        v53 = v16->SchedulerAssist;
        if ( v53 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v91 = v53[6];
            v53[6] = v91 + 1;
            if ( v91 == -1 )
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
          v92 = KeGetCurrentPrcb();
          v93 = v92->SchedulerAssist;
          v66 = (v93[5] & 0xFFFF0003) == 0;
          v93[5] &= 0xFFFF0003;
          if ( v66 )
            KiRemoveSystemWorkPriorityKick(v92);
        }
      }
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v54 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
      {
        v94 = KeGetCurrentPrcb()->SchedulerAssist;
        v94[5] |= ~((unsigned __int8)(1LL << (v54 + 1)) - 1) & 4;
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
      KiCheckForThreadDispatch(KeGetCurrentPrcb(), (unsigned __int8)v110);
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
        v95 = v20[6] - 1;
        v20[6] = v95;
        if ( !v95 )
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
        v104 = EntryArray;
LABEL_265:
        EtwTraceDequeueWork(CurrentThread, v104, v14);
        return v14;
      }
      return v14;
    }
    if ( Queue != (PKQUEUE)CurrentThread->Queue )
      KiSwitchQueue(CurrentThread, Queue);
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
        LODWORD(v32) = KiAttemptFastRemoveQueue((ULONG_PTR)Queue);
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
    if ( v113 == 2 )
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
      if ( !v113 )
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
    v18->WaitBlock[0].WaitListEntry.Flink = v25;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = p_WaitListHead;
    v25->Blink = (struct _LIST_ENTRY *)v18;
    p_WaitListHead->Flink = (struct _LIST_ENTRY *)v18;
    _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v26 = (_LIST_ENTRY *)KiCommitThreadWait((_DWORD)CurrentThread, (int)CurrentThread + 320, v113, QuadPart, 0LL);
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
          v97 = KeGetCurrentPrcb()->SchedulerAssist;
          v97[5] |= (-1 << (v48 + 1)) & 4;
        }
        KiAcquireKobjectLockSafe(Queue);
        if ( Queue->Header.SignalState )
          v14 = KiAttemptFastRemoveQueue((ULONG_PTR)Queue) + 1;
        _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v98 = KeGetCurrentIrql();
            if ( v98 <= 0xFu && v48 <= 0xFu && v98 >= 2u )
            {
              v99 = KeGetCurrentPrcb();
              v100 = v99->SchedulerAssist;
              v101 = ~(unsigned __int16)(-1LL << (v48 + 1));
              v66 = (v101 & v100[5]) == 0;
              v100[5] &= v101;
              if ( v66 )
                KiRemoveSystemWorkPriorityKick(v99);
            }
          }
        }
        __writecr8(v48);
      }
      goto LABEL_39;
    }
    v47 = KeGetCurrentIrql();
    v110 = v47;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
    {
      v96 = KeGetCurrentPrcb()->SchedulerAssist;
      v96[5] |= ~((unsigned __int8)(1LL << ((unsigned __int8)v47 + 1)) - 1) & 4;
    }
    CurrentThread->WaitIrql = v47;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_263;
  v102 = CurrentThread->QueueListEntry.Flink;
  v103 = CurrentThread->QueueListEntry.Blink;
  if ( v102->Blink != &CurrentThread->QueueListEntry || v103->Flink != &CurrentThread->QueueListEntry )
LABEL_264:
    __fastfail(3u);
  v103->Flink = v102;
  v102->Blink = v103;
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
  KiFastExitThreadWait(v46, CurrentThread, 1LL);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
    return v32;
  EtwTraceDequeueWork(CurrentThread, v45, (unsigned int)v32);
  return v32;
}
