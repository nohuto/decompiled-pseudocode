/*
 * XREFs of KiQuantumEnd @ 0x1402EC1A0
 * Callers:
 *     KiIdleLoop @ 0x1403FABA0 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x1403FDEC0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1402086E0 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectReadyThread @ 0x14020D530 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402ECC90 (KiGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402ED0B0 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402ED278 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402ED780 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x1402ED834 (KiCheckThreadAffinity.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402ED85C (KiShouldScanSharedReadyQueue.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KeIsUserVaAccessAllowed @ 0x1402EF73C (KeIsUserVaAccessAllowed.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityBoost @ 0x14032B9D0 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14032BC78 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14032BCD8 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A798 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A1F0C (EtwTraceAntiStarvationBoost.c)
 */

void __fastcall KiQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _LIST_ENTRY **v5; // r11
  unsigned __int8 v6; // r14
  ULONG_PTR CurrentThread; // rdi
  unsigned __int64 v8; // rsi
  int v9; // esi
  char v10; // r15
  int v11; // r13d
  int v12; // r12d
  bool v13; // sf
  struct _KPRCB *v14; // rsi
  _DWORD *v15; // rcx
  __int64 NextThread; // rsi
  struct _KPRCB *v17; // r15
  _DWORD *SchedulerAssist; // rcx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *v23; // r14
  unsigned int v24; // r15d
  _DWORD *v25; // rcx
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  int v28; // r15d
  unsigned __int64 v29; // rdx
  char v30; // cl
  char IsUserVaAccessAllowed; // bl
  __int64 v32; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  char QueueIndex; // r10
  struct _KPRCB *v35; // rcx
  __int64 v36; // rdx
  _KSHARED_READY_QUEUE *v37; // r13
  int v38; // ebx
  char v39; // r10
  _LIST_ENTRY *ReadyListHead; // rsi
  int v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // r14d
  _LIST_ENTRY *v44; // r12
  _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY **p_Blink; // rdx
  bool v47; // cl
  bool v48; // zf
  struct _KPRCB *v49; // rcx
  _LIST_ENTRY **p_Flink; // rax
  char v51; // al
  unsigned int ReadySummary; // r15d
  int v53; // r15d
  _LIST_ENTRY *DispatcherReadyListHead; // r14
  unsigned int v55; // edi
  unsigned int v56; // r15d
  int v57; // r8d
  unsigned int v58; // ecx
  int v59; // r13d
  _LIST_ENTRY *v60; // r10
  _LIST_ENTRY *v61; // r11
  _KSHARED_READY_QUEUE *v62; // rcx
  bool v63; // dl
  _QWORD *v64; // r15
  unsigned int v65; // r13d
  __int64 v66; // rcx
  _DWORD *v67; // rcx
  _DWORD *v68; // rcx
  char v69; // al
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  _QWORD *v74; // rdi
  __int64 v75; // r8
  struct _KPRCB *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r8
  struct _KPRCB *v82; // r15
  _DWORD *v83; // rcx
  __int64 v84; // rdx
  unsigned int v85; // r14d
  _LIST_ENTRY **v86; // rdi
  __int64 v87; // rdx
  struct _KPRCB *v88; // r13
  _DWORD *v89; // rcx
  int v90; // r13d
  __int64 v91; // r8
  __int64 v92; // r9
  _DWORD *v93; // rcx
  _DWORD *v94; // rcx
  _DWORD *v95; // rcx
  _DWORD *v96; // rcx
  struct _KPRCB *v97; // rcx
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int GuestSchedulerAssistPriority; // eax
  int v110; // eax
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  _DWORD *v114; // rcx
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  _DWORD *v122; // rcx
  int v123; // eax
  _DWORD *v124; // rcx
  int v125; // eax
  int v126; // eax
  _DWORD *v127; // rcx
  int v128; // eax
  _DWORD *v129; // rcx
  int v130; // eax
  char IsThreadRankNonZero; // al
  char v132; // cl
  __int64 v133; // rdx
  char v134; // al
  char v135; // dl
  _BYTE *v136; // rcx
  __int64 v137; // rdx
  _KTHREAD *IdleThread; // rax
  __int64 v139; // r8
  __int64 v140; // r9
  struct _KPRCB *v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // r8
  __int64 v144; // r9
  __int64 v145; // rdx
  _QWORD *v146; // [rsp+20h] [rbp-79h] BYREF
  _KSHARED_READY_QUEUE *v147; // [rsp+28h] [rbp-71h]
  _LIST_ENTRY *v148; // [rsp+30h] [rbp-69h]
  int v149; // [rsp+38h] [rbp-61h] BYREF
  int v150; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v151[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v152; // [rsp+48h] [rbp-51h]
  int v153; // [rsp+50h] [rbp-49h] BYREF
  _LIST_ENTRY *v154; // [rsp+58h] [rbp-41h]
  unsigned int v155; // [rsp+60h] [rbp-39h]
  int v156; // [rsp+64h] [rbp-35h]
  _DWORD v157[2]; // [rsp+68h] [rbp-31h] BYREF
  int v158; // [rsp+70h] [rbp-29h] BYREF
  int v159; // [rsp+74h] [rbp-25h] BYREF
  int v160; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR v161; // [rsp+80h] [rbp-19h]
  struct _KPRCB *v162; // [rsp+88h] [rbp-11h]
  _LIST_ENTRY **v163; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v164; // [rsp+98h] [rbp-1h] BYREF
  _QWORD *v165; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD *v166; // [rsp+A8h] [rbp+Fh] BYREF
  char v167; // [rsp+100h] [rbp+67h]
  char v168; // [rsp+100h] [rbp+67h]
  struct _KPRCB *v169; // [rsp+108h] [rbp+6Fh]
  unsigned int v170; // [rsp+108h] [rbp+6Fh]
  int v171; // [rsp+108h] [rbp+6Fh]
  char v172; // [rsp+108h] [rbp+6Fh]
  char v173; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY *v174; // [rsp+110h] [rbp+77h]
  int v175; // [rsp+110h] [rbp+77h]
  struct _KPRCB *v176; // [rsp+110h] [rbp+77h]
  unsigned int v177; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY **v178; // [rsp+110h] [rbp+77h]
  struct _LIST_ENTRY **v179; // [rsp+118h] [rbp+7Fh]
  int v180; // [rsp+118h] [rbp+7Fh]
  int v181; // [rsp+118h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v5) = 0;
  v6 = 0;
  v146 = 0LL;
  v167 = 0;
  v162 = CurrentPrcb;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v161 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v8 = *(_QWORD *)(CurrentThread + 72);
    if ( v8 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v17 = KeGetCurrentPrcb();
      v149 = 0;
      SchedulerAssist = v17->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v17->NestingLevel <= 1u )
        {
          v98 = SchedulerAssist[6];
          SchedulerAssist[6] = v98 + 1;
          if ( v98 == -1 )
LABEL_154:
            KiRemoveSystemWorkPriorityKick(v17);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v95 = v17->SchedulerAssist;
        if ( v95 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v99 = v95[6] - 1;
            v95[6] = v99;
            if ( !v99 )
              KiRemoveSystemWorkPriorityKick(v17);
          }
        }
        do
          KeYieldProcessorEx(&v149, a2, a3, a4);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v96 = v17->SchedulerAssist;
        if ( v96 )
        {
          if ( v17->NestingLevel <= 1u )
          {
            v100 = v96[6];
            v96[6] = v100 + 1;
            if ( v100 == -1 )
              goto LABEL_154;
          }
        }
      }
      if ( v8 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v28 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v19 = KiComputeNewPriority(CurrentThread, a2);
          v23 = KeGetCurrentPrcb();
          v24 = v19;
          v150 = 0;
          v25 = v23->SchedulerAssist;
          if ( v25 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v101 = v25[6];
              v25[6] = v101 + 1;
              if ( v101 == -1 )
LABEL_165:
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            v70 = v23->SchedulerAssist;
            if ( v70 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v102 = v70[6] - 1;
                v70[6] = v102;
                if ( !v102 )
                  KiRemoveSystemWorkPriorityKick(v23);
              }
            }
            do
              KeYieldProcessorEx(&v150, v20, v21, v22);
            while ( CurrentPrcb->PrcbLock );
            v71 = v23->SchedulerAssist;
            if ( v71 )
            {
              if ( v23->NestingLevel <= 1u )
              {
                v103 = v71[6];
                v71[6] = v103 + 1;
                if ( v103 == -1 )
                  goto LABEL_165;
              }
            }
          }
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
            KiUpdateThreadPriority(
              (__int64)CurrentPrcb,
              CurrentThread,
              (_SINGLE_LIST_ENTRY *)v24,
              CurrentPrcb->NextThread == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          if ( v27 )
          {
            if ( v26->NestingLevel <= 1u )
            {
              v104 = v27[6] - 1;
              v27[6] = v104;
              if ( !v104 )
                KiRemoveSystemWorkPriorityKick(v26);
            }
          }
          v28 = *(unsigned __int8 *)(CurrentThread + 651);
          v6 = 1;
          v167 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v29 = v8 + (unsigned int)(v28 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v29;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v66 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          if ( (*(_QWORD *)(v66 + 8) & *(_QWORD *)(v66 + 80) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
      LODWORD(v5) = 0;
    }
  }
  v9 = 10;
  v10 = 0;
  v11 = MEMORY[0xFFFFF78000000320];
  v12 = 16;
  v13 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v156 = MEMORY[0xFFFFF78000000320];
  if ( !v13 )
    goto LABEL_5;
  v10 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_5;
  SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
  v147 = SharedReadyQueue;
  if ( (SharedReadyQueue->ReadySummary & 0x7FFE) == 0 )
    goto LABEL_5;
  QueueIndex = SharedReadyQueue->QueueIndex;
  v35 = KeGetCurrentPrcb();
  v163 = v5;
  v173 = QueueIndex;
  v169 = v35;
  v36 = (__int64)v35->SchedulerAssist;
  v151[0] = (_DWORD)v5;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      v105 = *(_DWORD *)(v36 + 24);
      *(_DWORD *)(v36 + 24) = v105 + 1;
      if ( v105 == -1 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  v37 = v147;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
  {
    v93 = v169->SchedulerAssist;
    if ( v93 )
    {
      if ( v169->NestingLevel <= 1u )
      {
        v106 = v93[6] - 1;
        v93[6] = v106;
        if ( !v106 )
          KiRemoveSystemWorkPriorityKick(v169);
      }
    }
    do
      KeYieldProcessorEx(v151, v36, a3, a4);
    while ( v37->Lock );
    v94 = v169->SchedulerAssist;
    if ( v94 )
    {
      if ( v169->NestingLevel <= 1u )
      {
        v107 = v94[6];
        v94[6] = v107 + 1;
        if ( v107 == -1 )
          KiRemoveSystemWorkPriorityKick(v169);
      }
    }
  }
  a3 = v37->ReadySummary & 0x7FFE;
  if ( (v37->ReadySummary & 0x7FFE) != 0 )
  {
    v38 = 10;
    v39 = v173;
    ReadyListHead = v37->ReadyListHead;
    v41 = 16;
    LODWORD(a3) = __ROR4__(a3, v173);
    a4 = (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
    v170 = MEMORY[0xFFFFF78000000320] - 300;
    do
    {
      _BitScanForward(&v42, a3);
      v151[1] = v42;
      LODWORD(v152) = a3 ^ (1 << v42);
      v43 = ((_BYTE)v42 + v39) & 0x1F;
      v155 = v43;
      v44 = &ReadyListHead[((_BYTE)v42 + v39) & 0x1F];
      Flink = v44->Flink;
      do
      {
        p_Blink = &Flink[-14].Blink;
        v47 = 0;
        v48 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
        Flink = Flink->Flink;
        v154 = Flink;
        v179 = p_Blink;
        if ( !v48 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink);
          p_Blink = v179;
          Flink = v154;
          a4 = v170;
          if ( GuestSchedulerAssistPriority >= 16 )
            GuestSchedulerAssistPriority = 15;
          v47 = GuestSchedulerAssistPriority != *((_DWORD *)v179 + 256);
        }
        v180 = a4 - *((_DWORD *)p_Blink + 109);
        if ( v180 > 0 || v47 )
        {
          KiRemoveThreadFromSharedReadyQueue(v37, p_Blink, v43);
          KiInsertDeferredReadyList(&v163, v84);
          a4 = v170;
          if ( v180 > 0 )
            --v38;
        }
        --v41;
      }
      while ( Flink != v44 && v38 && v41 );
      a3 = (unsigned int)v152;
      ReadyListHead = v37->ReadyListHead;
      v181 = v38;
      LODWORD(v154) = v41;
      if ( !(_DWORD)v152 )
        break;
      if ( !v38 )
        break;
      v39 = v173;
    }
    while ( v41 );
    _InterlockedAnd64((volatile signed __int64 *)v37, 0LL);
    v49 = KeGetCurrentPrcb();
    v9 = 10;
    CurrentPrcb = v162;
    v6 = v167;
    a2 = (__int64)v49->SchedulerAssist;
    v12 = 16;
    if ( a2 )
    {
      if ( v49->NestingLevel <= 1u )
      {
        v110 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v110;
        if ( !v110 )
          KiRemoveSystemWorkPriorityKick(v49);
      }
    }
    p_Flink = v163;
    if ( v163 )
    {
      v85 = v170;
      do
      {
        v86 = p_Flink - 27;
        v172 = 0;
        v87 = (__int64)*(p_Flink - 18);
        v88 = KeGetCurrentPrcb();
        v178 = p_Flink - 27;
        v148 = *p_Flink;
        v89 = v88->SchedulerAssist;
        v152 = v87;
        v162 = v88;
        v153 = 0;
        if ( v89 )
        {
          if ( v88->NestingLevel <= 1u )
          {
            v111 = v89[6];
            v89[6] = v111 + 1;
            if ( v111 == -1 )
LABEL_195:
              KiRemoveSystemWorkPriorityKick(v88);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v86 + 16, 0LL) )
        {
          v112 = v88->SchedulerAssist;
          if ( v112 )
          {
            if ( v88->NestingLevel <= 1u )
            {
              v113 = v112[6] - 1;
              v112[6] = v113;
              if ( !v113 )
                KiRemoveSystemWorkPriorityKick(v88);
            }
          }
          do
            KeYieldProcessorEx(&v153, v87, a3, a4);
          while ( v178[8] );
          v88 = v162;
          v86 = v178;
          v114 = v162->SchedulerAssist;
          if ( v114 )
          {
            if ( v162->NestingLevel <= 1u )
            {
              v115 = v114[6];
              v114[6] = v115 + 1;
              if ( v115 == -1 )
                goto LABEL_195;
            }
          }
        }
        v90 = *((char *)v86 + 195);
        if ( (int)(v85 - *((_DWORD *)v86 + 109)) > 0 && v90 < 15 )
        {
          LOBYTE(a3) = 15;
          v172 = 1;
          KiSetPriorityBoost(0LL, v86, a3, v152);
        }
        KiReleaseThreadLockSafe(v86);
        if ( v172 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v86, (unsigned int)v90);
        v86[27] = 0LL;
        v165 = v86 + 27;
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v165, v91, v92);
        p_Flink = &v148->Flink;
      }
      while ( v148 );
      v6 = v167;
      v37 = v147;
      v41 = (int)v154;
    }
    if ( !v41 || !v181 )
    {
      v51 = v155 + 1;
      if ( v155 + 1 <= 0xE )
        goto LABEL_74;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v37, 0LL);
    v97 = KeGetCurrentPrcb();
    a2 = (__int64)v97->SchedulerAssist;
    if ( a2 )
    {
      if ( v97->NestingLevel <= 1u )
      {
        v108 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v108;
        if ( !v108 )
          KiRemoveSystemWorkPriorityKick(v97);
      }
    }
  }
  v51 = 1;
LABEL_74:
  CurrentThread = v161;
  LODWORD(v5) = 0;
  v37->QueueIndex = v51;
  v11 = v156;
LABEL_5:
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v6, &v146);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    v157[0] = (_DWORD)v5;
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v116 = v15[6];
        v15[6] = v116 + 1;
        if ( v116 == -1 )
LABEL_207:
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v67 = v14->SchedulerAssist;
      if ( v67 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v117 = v67[6] - 1;
          v67[6] = v117;
          if ( !v117 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      do
        KeYieldProcessorEx(v157, a2, a3, a4);
      while ( CurrentPrcb->PrcbLock );
      v68 = v14->SchedulerAssist;
      if ( v68 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v118 = v68[6];
          v68[6] = v118 + 1;
          if ( v118 == -1 )
            goto LABEL_207;
        }
      }
    }
    v9 = 10;
  }
  if ( !v10 )
    goto LABEL_10;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v11 + 75;
  v53 = ReadySummary & 0x7FFE;
  if ( !v53 )
    goto LABEL_10;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  v55 = CurrentPrcb->QueueIndex;
  v164 = 0LL;
  v56 = __ROR4__(v53, v55);
  v57 = MEMORY[0xFFFFF78000000320] - 300;
  v171 = MEMORY[0xFFFFF78000000320] - 300;
  do
  {
    _BitScanForward(&v58, v56);
    v56 ^= 1 << v58;
    v157[1] = v58;
    v59 = ((_BYTE)v58 + (_BYTE)v55) & 0x1F;
    v60 = &DispatcherReadyListHead[((_BYTE)v58 + (_BYTE)v55) & 0x1F];
    v148 = v60;
    v61 = v60->Flink;
    do
    {
      v62 = (_KSHARED_READY_QUEUE *)&v61[-14].Blink;
      v63 = 0;
      v48 = ((__int64)v61[-6].Flink & 0x400000) == 0;
      v61 = v61->Flink;
      v174 = v61;
      v147 = v62;
      if ( !v48 )
      {
        v119 = KiReadGuestSchedulerAssistPriority(v62);
        v62 = v147;
        v60 = v148;
        v61 = v174;
        if ( v119 >= 16 )
          v119 = 15;
        v57 = v171;
        v63 = v119 != LODWORD(v147[1].ReadyListHead[24].Flink);
      }
      v175 = v57 - HIDWORD(v62->ReadyListHead[26].Flink);
      if ( v175 > 0 || v63 )
      {
        KiRemoveThreadFromReadyQueue(CurrentPrcb);
        KiInsertDeferredReadyList(&v164, v147);
        v57 = v171;
        if ( v175 > 0 )
          --v9;
      }
      --v12;
    }
    while ( v61 != v60 && v9 && v12 );
    DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  }
  while ( v56 && v9 && v12 );
  v64 = v164;
  CurrentThread = v161;
  v6 = v167;
  if ( v164 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v72 = KeGetCurrentPrcb();
    v73 = v72->SchedulerAssist;
    if ( v73 )
    {
      if ( v72->NestingLevel <= 1u )
      {
        v120 = v73[6] - 1;
        v73[6] = v120;
        if ( !v120 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
    do
    {
      v74 = v64 - 27;
      v168 = 0;
      v75 = *(v64 - 18);
      v76 = KeGetCurrentPrcb();
      v64 = (_QWORD *)*v64;
      v148 = (_LIST_ENTRY *)v75;
      v176 = v76;
      v77 = (__int64)v76->SchedulerAssist;
      v158 = 0;
      if ( v77 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v121 = *(_DWORD *)(v77 + 24);
          *(_DWORD *)(v77 + 24) = v121 + 1;
          if ( v121 == -1 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v74 + 16, 0LL) )
      {
        v122 = v176->SchedulerAssist;
        if ( v122 )
        {
          if ( v176->NestingLevel <= 1u )
          {
            v123 = v122[6] - 1;
            v122[6] = v123;
            if ( !v123 )
              KiRemoveSystemWorkPriorityKick(v176);
          }
        }
        do
          KeYieldProcessorEx(&v158, v77, v75, a4);
        while ( v74[8] );
        v124 = v176->SchedulerAssist;
        if ( v124 )
        {
          if ( v176->NestingLevel <= 1u )
          {
            v125 = v124[6];
            v124[6] = v125 + 1;
            if ( v125 == -1 )
              KiRemoveSystemWorkPriorityKick(v176);
          }
        }
      }
      v177 = *((char *)v74 + 195);
      if ( v171 - *((_DWORD *)v74 + 109) > 0 && *((char *)v74 + 195) < 15 )
      {
        LOBYTE(v75) = 15;
        v168 = 1;
        KiSetPriorityBoost(0LL, v74, v75, v148);
      }
      KiReleaseThreadLockSafe(v74);
      if ( v168 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v74, v177);
      v166 = v74 + 27;
      v74[27] = 0LL;
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v166, v78, v79);
    }
    while ( v64 );
    v82 = KeGetCurrentPrcb();
    v159 = 0;
    CurrentThread = v161;
    v83 = v82->SchedulerAssist;
    if ( v83 )
    {
      if ( v82->NestingLevel <= 1u )
      {
        v126 = v83[6];
        v83[6] = v126 + 1;
        if ( v126 == -1 )
LABEL_234:
          KiRemoveSystemWorkPriorityKick(v82);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v127 = v82->SchedulerAssist;
      if ( v127 )
      {
        if ( v82->NestingLevel <= 1u )
        {
          v128 = v127[6] - 1;
          v127[6] = v128;
          if ( !v128 )
            KiRemoveSystemWorkPriorityKick(v82);
        }
      }
      do
        KeYieldProcessorEx(&v159, v80, v81, a4);
      while ( CurrentPrcb->PrcbLock );
      v129 = v82->SchedulerAssist;
      if ( v129 )
      {
        if ( v82->NestingLevel <= 1u )
        {
          v130 = v129[6];
          v129[6] = v130 + 1;
          if ( v130 == -1 )
            goto LABEL_234;
        }
      }
    }
  }
  if ( v12 && v9 || (v65 = v59 + 1, v65 > 0xE) )
    v65 = 1;
  CurrentPrcb->QueueIndex = v65;
  while ( 1 )
  {
LABEL_10:
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v6 )
        *(_BYTE *)(CurrentThread + 565) = 0;
LABEL_50:
      if ( !NextThread )
        goto LABEL_13;
      goto LABEL_51;
    }
    if ( !v6 || (NextThread = KiSelectReadyThread(*(char *)(CurrentThread + 195), (__int64)CurrentPrcb)) == 0 )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v146);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_50;
    }
LABEL_51:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && !(unsigned int)KiCheckThreadAffinity(NextThread) )
    {
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb), v132 = 1, !IsThreadRankNonZero) )
      {
        v132 = *(_BYTE *)(CurrentThread + 195);
      }
      *CurrentPrcb->PriorityState = v132;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v133 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
          v133 = (unsigned int)v132;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v133, 0LL);
      }
      if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
        KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v146);
      KiInsertDeferredReadyList(&v146, NextThread);
      NextThread = 0LL;
    }
LABEL_13:
    if ( !v146 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (v134 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v135 = 1, !v134) )
      {
        v135 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v135;
      v136 = CurrentPrcb->SchedulerAssist;
      if ( v136 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v137 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v137 = (unsigned int)v135;
        KiSetSchedulerAssistPriority(v136, v137, 0LL);
        v136 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v136 )
        v136[16] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v146, v139, v140);
    v141 = KeGetCurrentPrcb();
    v160 = 0;
    v146 = 0LL;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v141, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v141, 0);
      do
        KeYieldProcessorEx(&v160, v142, v143, v144);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0 || (v69 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v30 = 1, !v69) )
      v30 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v30;
    if ( CurrentPrcb->SchedulerAssist )
    {
      v145 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
        v145 = (unsigned int)v30;
      KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v145, 0LL);
    }
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
      *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                    - *(_DWORD *)(NextThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1);
    IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
    if ( KeSmapEnabled )
      __asm { stac }
    LOBYTE(v32) = 1;
    KiSwapContext(CurrentThread, NextThread, v32);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
}
