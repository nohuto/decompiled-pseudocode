/*
 * XREFs of KiQuantumEnd @ 0x140257CF0
 * Callers:
 *     KiIdleLoop @ 0x140402950 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140406550 (KiDispatchInterrupt.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140230E50 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KeIsUserVaAccessAllowed @ 0x140254F38 (KeIsUserVaAccessAllowed.c)
 *     KiSelectNextThread @ 0x14025708C (KiSelectNextThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140258C00 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140258DC8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258E10 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402592D0 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x140259384 (KiCheckThreadAffinity.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiShouldScanSharedReadyQueue @ 0x140259994 (KiShouldScanSharedReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityBoost @ 0x1402BCC00 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x1402EA540 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402EA708 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1402EA768 (KiRemoveThreadFromReadyQueue.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x14034B590 (KiSetVpThreadSpinLockCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FC48 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A73DC (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiQuantumEnd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 result; // rax
  struct _KPRCB *v18; // r15
  _DWORD *SchedulerAssist; // rcx
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KPRCB *v24; // r14
  unsigned int v25; // r15d
  _DWORD *v26; // rcx
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  int v29; // r15d
  unsigned __int64 v30; // rdx
  char v31; // cl
  bool IsUserVaAccessAllowed; // bl
  __int64 v33; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  char QueueIndex; // r10
  struct _KPRCB *v36; // rcx
  __int64 v37; // rdx
  _KSHARED_READY_QUEUE *v38; // r13
  int v39; // ebx
  char v40; // r10
  _LIST_ENTRY *ReadyListHead; // rsi
  int v42; // edi
  unsigned int v43; // ecx
  unsigned int v44; // r14d
  _LIST_ENTRY *v45; // r12
  _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY **p_Blink; // rdx
  bool v48; // cl
  bool v49; // zf
  struct _KPRCB *v50; // rcx
  _LIST_ENTRY **p_Flink; // rax
  char v52; // al
  unsigned int ReadySummary; // r15d
  int v54; // r15d
  _LIST_ENTRY *DispatcherReadyListHead; // r14
  unsigned int v56; // edi
  unsigned int v57; // r15d
  int v58; // r8d
  unsigned int v59; // ecx
  unsigned int v60; // r13d
  _LIST_ENTRY *v61; // r10
  _LIST_ENTRY *v62; // r11
  _KSHARED_READY_QUEUE *v63; // rcx
  bool v64; // dl
  _QWORD *v65; // r15
  unsigned int v66; // r13d
  __int64 v67; // rcx
  _DWORD *v68; // rcx
  _DWORD *v69; // rcx
  bool v70; // al
  _DWORD *v71; // rcx
  _DWORD *v72; // rcx
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  _QWORD *v75; // rdi
  __int64 v76; // r8
  struct _KPRCB *v77; // rcx
  __int64 v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r8
  struct _KPRCB *v81; // r15
  _DWORD *v82; // rcx
  __int64 v83; // rdx
  unsigned int v84; // r14d
  _LIST_ENTRY **v85; // rdi
  __int64 v86; // rdx
  struct _KPRCB *v87; // r13
  _DWORD *v88; // rcx
  int v89; // r13d
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  _DWORD *v93; // rcx
  struct _KPRCB *v94; // rcx
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int GuestSchedulerAssistPriority; // eax
  int v107; // eax
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  _DWORD *v111; // rcx
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  int v123; // eax
  _DWORD *v124; // rcx
  int v125; // eax
  _DWORD *v126; // rcx
  int v127; // eax
  bool IsThreadRankNonZero; // al
  char v129; // cl
  __int64 v130; // rdx
  bool v131; // al
  char v132; // dl
  _BYTE *v133; // rcx
  __int64 v134; // rdx
  _KTHREAD *IdleThread; // rax
  __int64 v136; // rdx
  struct _KPRCB *v137; // rsi
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  _QWORD *v141; // [rsp+20h] [rbp-79h] BYREF
  _KSHARED_READY_QUEUE *v142; // [rsp+28h] [rbp-71h]
  _LIST_ENTRY *v143; // [rsp+30h] [rbp-69h]
  int v144; // [rsp+38h] [rbp-61h] BYREF
  int v145; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v146[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v147; // [rsp+48h] [rbp-51h]
  int v148; // [rsp+50h] [rbp-49h] BYREF
  _LIST_ENTRY *v149; // [rsp+58h] [rbp-41h]
  unsigned int v150; // [rsp+60h] [rbp-39h]
  int v151; // [rsp+64h] [rbp-35h]
  _DWORD v152[2]; // [rsp+68h] [rbp-31h] BYREF
  int v153; // [rsp+70h] [rbp-29h] BYREF
  int v154; // [rsp+74h] [rbp-25h] BYREF
  int v155; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR v156; // [rsp+80h] [rbp-19h]
  struct _KPRCB *v157; // [rsp+88h] [rbp-11h]
  _LIST_ENTRY **v158; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v159; // [rsp+98h] [rbp-1h] BYREF
  _QWORD *v160; // [rsp+A0h] [rbp+7h] BYREF
  _QWORD *v161; // [rsp+A8h] [rbp+Fh] BYREF
  char v162; // [rsp+100h] [rbp+67h]
  char v163; // [rsp+100h] [rbp+67h]
  struct _KPRCB *v164; // [rsp+108h] [rbp+6Fh]
  unsigned int v165; // [rsp+108h] [rbp+6Fh]
  int v166; // [rsp+108h] [rbp+6Fh]
  char v167; // [rsp+108h] [rbp+6Fh]
  char v168; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY *v169; // [rsp+110h] [rbp+77h]
  int v170; // [rsp+110h] [rbp+77h]
  struct _KPRCB *v171; // [rsp+110h] [rbp+77h]
  unsigned int v172; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY **v173; // [rsp+110h] [rbp+77h]
  struct _LIST_ENTRY **v174; // [rsp+118h] [rbp+7Fh]
  int v175; // [rsp+118h] [rbp+7Fh]
  int v176; // [rsp+118h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v5) = 0;
  v6 = 0;
  v141 = 0LL;
  v162 = 0;
  v157 = CurrentPrcb;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v156 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v8 = *(_QWORD *)(CurrentThread + 72);
    if ( v8 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v18 = KeGetCurrentPrcb();
      v144 = 0;
      SchedulerAssist = v18->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v18->NestingLevel <= 1u )
        {
          v95 = SchedulerAssist[6];
          SchedulerAssist[6] = v95 + 1;
          if ( v95 == -1 )
LABEL_154:
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v92 = v18->SchedulerAssist;
        if ( v92 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v96 = v92[6] - 1;
            v92[6] = v96;
            if ( !v96 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        do
          KeYieldProcessorEx(&v144, a2, a3, a4);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v93 = v18->SchedulerAssist;
        if ( v93 )
        {
          if ( v18->NestingLevel <= 1u )
          {
            v97 = v93[6];
            v93[6] = v97 + 1;
            if ( v97 == -1 )
              goto LABEL_154;
          }
        }
      }
      if ( v8 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v29 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v20 = KiComputeNewPriority(CurrentThread, a2);
          v24 = KeGetCurrentPrcb();
          v25 = v20;
          v145 = 0;
          v26 = v24->SchedulerAssist;
          if ( v26 )
          {
            if ( v24->NestingLevel <= 1u )
            {
              v98 = v26[6];
              v26[6] = v98 + 1;
              if ( v98 == -1 )
LABEL_165:
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            v71 = v24->SchedulerAssist;
            if ( v71 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v99 = v71[6] - 1;
                v71[6] = v99;
                if ( !v99 )
                  KiRemoveSystemWorkPriorityKick(v24);
              }
            }
            do
              KeYieldProcessorEx(&v145, v21, v22, v23);
            while ( CurrentPrcb->PrcbLock );
            v72 = v24->SchedulerAssist;
            if ( v72 )
            {
              if ( v24->NestingLevel <= 1u )
              {
                v100 = v72[6];
                v72[6] = v100 + 1;
                if ( v100 == -1 )
                  goto LABEL_165;
              }
            }
          }
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
            KiUpdateThreadPriority(
              (__int64)CurrentPrcb,
              CurrentThread,
              (_SINGLE_LIST_ENTRY *)v25,
              CurrentPrcb->NextThread == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          if ( v28 )
          {
            if ( v27->NestingLevel <= 1u )
            {
              v101 = v28[6] - 1;
              v28[6] = v101;
              if ( !v101 )
                KiRemoveSystemWorkPriorityKick(v27);
            }
          }
          v29 = *(unsigned __int8 *)(CurrentThread + 651);
          v6 = 1;
          v162 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v30 = v8 + (unsigned int)(v29 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v30;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v67 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          if ( (*(_QWORD *)(v67 + 8) & *(_QWORD *)(v67 + 80) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
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
  v151 = MEMORY[0xFFFFF78000000320];
  if ( !v13 )
    goto LABEL_5;
  v10 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_5;
  SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
  v142 = SharedReadyQueue;
  if ( (SharedReadyQueue->ReadySummary & 0x7FFE) == 0 )
    goto LABEL_5;
  QueueIndex = SharedReadyQueue->QueueIndex;
  v36 = KeGetCurrentPrcb();
  v158 = v5;
  v168 = QueueIndex;
  v164 = v36;
  v37 = (__int64)v36->SchedulerAssist;
  v146[0] = (_DWORD)v5;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v102 = *(_DWORD *)(v37 + 24);
      *(_DWORD *)(v37 + 24) = v102 + 1;
      if ( v102 == -1 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  v38 = v142;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0LL) )
  {
    v90 = v164->SchedulerAssist;
    if ( v90 )
    {
      if ( v164->NestingLevel <= 1u )
      {
        v103 = v90[6] - 1;
        v90[6] = v103;
        if ( !v103 )
          KiRemoveSystemWorkPriorityKick(v164);
      }
    }
    do
      KeYieldProcessorEx(v146, v37, a3, a4);
    while ( v38->Lock );
    v91 = v164->SchedulerAssist;
    if ( v91 )
    {
      if ( v164->NestingLevel <= 1u )
      {
        v104 = v91[6];
        v91[6] = v104 + 1;
        if ( v104 == -1 )
          KiRemoveSystemWorkPriorityKick(v164);
      }
    }
  }
  a3 = v38->ReadySummary & 0x7FFE;
  if ( (v38->ReadySummary & 0x7FFE) != 0 )
  {
    v39 = 10;
    v40 = v168;
    ReadyListHead = v38->ReadyListHead;
    v42 = 16;
    LODWORD(a3) = __ROR4__(a3, v168);
    a4 = (unsigned int)(MEMORY[0xFFFFF78000000320] - 300);
    v165 = MEMORY[0xFFFFF78000000320] - 300;
    do
    {
      _BitScanForward(&v43, a3);
      v146[1] = v43;
      LODWORD(v147) = a3 ^ (1 << v43);
      v44 = ((_BYTE)v43 + v40) & 0x1F;
      v150 = v44;
      v45 = &ReadyListHead[((_BYTE)v43 + v40) & 0x1F];
      Flink = v45->Flink;
      do
      {
        p_Blink = &Flink[-14].Blink;
        v48 = 0;
        v49 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
        Flink = Flink->Flink;
        v149 = Flink;
        v174 = p_Blink;
        if ( !v49 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink);
          p_Blink = v174;
          Flink = v149;
          a4 = v165;
          if ( GuestSchedulerAssistPriority >= 16 )
            GuestSchedulerAssistPriority = 15;
          v48 = GuestSchedulerAssistPriority != *((_DWORD *)v174 + 256);
        }
        v175 = a4 - *((_DWORD *)p_Blink + 109);
        if ( v175 > 0 || v48 )
        {
          KiRemoveThreadFromSharedReadyQueue(v38, p_Blink, v44);
          KiInsertDeferredReadyList(&v158, v83);
          a4 = v165;
          if ( v175 > 0 )
            --v39;
        }
        --v42;
      }
      while ( Flink != v45 && v39 && v42 );
      a3 = (unsigned int)v147;
      ReadyListHead = v38->ReadyListHead;
      v176 = v39;
      LODWORD(v149) = v42;
      if ( !(_DWORD)v147 )
        break;
      if ( !v39 )
        break;
      v40 = v168;
    }
    while ( v42 );
    _InterlockedAnd64((volatile signed __int64 *)v38, 0LL);
    v50 = KeGetCurrentPrcb();
    v9 = 10;
    CurrentPrcb = v157;
    v6 = v162;
    a2 = (__int64)v50->SchedulerAssist;
    v12 = 16;
    if ( a2 )
    {
      if ( v50->NestingLevel <= 1u )
      {
        v107 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v107;
        if ( !v107 )
          KiRemoveSystemWorkPriorityKick(v50);
      }
    }
    p_Flink = v158;
    if ( v158 )
    {
      v84 = v165;
      do
      {
        v85 = p_Flink - 27;
        v167 = 0;
        v86 = (__int64)*(p_Flink - 18);
        v87 = KeGetCurrentPrcb();
        v173 = p_Flink - 27;
        v143 = *p_Flink;
        v88 = v87->SchedulerAssist;
        v147 = v86;
        v157 = v87;
        v148 = 0;
        if ( v88 )
        {
          if ( v87->NestingLevel <= 1u )
          {
            v108 = v88[6];
            v88[6] = v108 + 1;
            if ( v108 == -1 )
LABEL_195:
              KiRemoveSystemWorkPriorityKick(v87);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v85 + 16, 0LL) )
        {
          v109 = v87->SchedulerAssist;
          if ( v109 )
          {
            if ( v87->NestingLevel <= 1u )
            {
              v110 = v109[6] - 1;
              v109[6] = v110;
              if ( !v110 )
                KiRemoveSystemWorkPriorityKick(v87);
            }
          }
          do
            KeYieldProcessorEx(&v148, v86, a3, a4);
          while ( v173[8] );
          v87 = v157;
          v85 = v173;
          v111 = v157->SchedulerAssist;
          if ( v111 )
          {
            if ( v157->NestingLevel <= 1u )
            {
              v112 = v111[6];
              v111[6] = v112 + 1;
              if ( v112 == -1 )
                goto LABEL_195;
            }
          }
        }
        v89 = *((char *)v85 + 195);
        if ( (int)(v84 - *((_DWORD *)v85 + 109)) > 0 && v89 < 15 )
        {
          LOBYTE(a3) = 15;
          v167 = 1;
          KiSetPriorityBoost(0LL, v85, a3, v147);
        }
        KiReleaseThreadLockSafe(v85);
        if ( v167 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v85, (unsigned int)v89);
        v85[27] = 0LL;
        v160 = v85 + 27;
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v160);
        p_Flink = &v143->Flink;
      }
      while ( v143 );
      v6 = v162;
      v38 = v142;
      v42 = (int)v149;
    }
    if ( !v42 || !v176 )
    {
      v52 = v150 + 1;
      if ( v150 + 1 <= 0xE )
        goto LABEL_74;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v38, 0LL);
    v94 = KeGetCurrentPrcb();
    a2 = (__int64)v94->SchedulerAssist;
    if ( a2 )
    {
      if ( v94->NestingLevel <= 1u )
      {
        v105 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v105;
        if ( !v105 )
          KiRemoveSystemWorkPriorityKick(v94);
      }
    }
  }
  v52 = 1;
LABEL_74:
  CurrentThread = v156;
  LODWORD(v5) = 0;
  v38->QueueIndex = v52;
  v11 = v151;
LABEL_5:
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v6, &v141);
  }
  else
  {
    v14 = KeGetCurrentPrcb();
    v152[0] = (_DWORD)v5;
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v113 = v15[6];
        v15[6] = v113 + 1;
        if ( v113 == -1 )
LABEL_207:
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v68 = v14->SchedulerAssist;
      if ( v68 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v114 = v68[6] - 1;
          v68[6] = v114;
          if ( !v114 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      do
        KeYieldProcessorEx(v152, a2, a3, a4);
      while ( CurrentPrcb->PrcbLock );
      v69 = v14->SchedulerAssist;
      if ( v69 )
      {
        if ( v14->NestingLevel <= 1u )
        {
          v115 = v69[6];
          v69[6] = v115 + 1;
          if ( v115 == -1 )
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
  v54 = ReadySummary & 0x7FFE;
  if ( !v54 )
    goto LABEL_10;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  v56 = CurrentPrcb->QueueIndex;
  v159 = 0LL;
  v57 = __ROR4__(v54, v56);
  v58 = MEMORY[0xFFFFF78000000320] - 300;
  v166 = MEMORY[0xFFFFF78000000320] - 300;
  do
  {
    _BitScanForward(&v59, v57);
    v57 ^= 1 << v59;
    v152[1] = v59;
    v60 = ((_BYTE)v59 + (_BYTE)v56) & 0x1F;
    v61 = &DispatcherReadyListHead[((_BYTE)v59 + (_BYTE)v56) & 0x1F];
    v143 = v61;
    v62 = v61->Flink;
    do
    {
      v63 = (_KSHARED_READY_QUEUE *)&v62[-14].Blink;
      v64 = 0;
      v49 = ((__int64)v62[-6].Flink & 0x400000) == 0;
      v62 = v62->Flink;
      v169 = v62;
      v142 = v63;
      if ( !v49 )
      {
        v116 = KiReadGuestSchedulerAssistPriority(v63);
        v63 = v142;
        v61 = v143;
        v62 = v169;
        if ( v116 >= 16 )
          v116 = 15;
        v58 = v166;
        v64 = v116 != LODWORD(v142[1].ReadyListHead[24].Flink);
      }
      v170 = v58 - HIDWORD(v63->ReadyListHead[26].Flink);
      if ( v170 > 0 || v64 )
      {
        KiRemoveThreadFromReadyQueue(CurrentPrcb, &v63->ReadyListHead[12].Blink, v60);
        KiInsertDeferredReadyList(&v159, v142);
        v58 = v166;
        if ( v170 > 0 )
          --v9;
      }
      --v12;
    }
    while ( v62 != v61 && v9 && v12 );
    DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  }
  while ( v57 && v9 && v12 );
  v65 = v159;
  CurrentThread = v156;
  v6 = v162;
  if ( v159 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v73 = KeGetCurrentPrcb();
    v74 = v73->SchedulerAssist;
    if ( v74 )
    {
      if ( v73->NestingLevel <= 1u )
      {
        v117 = v74[6] - 1;
        v74[6] = v117;
        if ( !v117 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
    do
    {
      v75 = v65 - 27;
      v163 = 0;
      v76 = *(v65 - 18);
      v77 = KeGetCurrentPrcb();
      v65 = (_QWORD *)*v65;
      v143 = (_LIST_ENTRY *)v76;
      v171 = v77;
      v78 = (__int64)v77->SchedulerAssist;
      v153 = 0;
      if ( v78 )
      {
        if ( v77->NestingLevel <= 1u )
        {
          v118 = *(_DWORD *)(v78 + 24);
          *(_DWORD *)(v78 + 24) = v118 + 1;
          if ( v118 == -1 )
            KiRemoveSystemWorkPriorityKick(v77);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v75 + 16, 0LL) )
      {
        v119 = v171->SchedulerAssist;
        if ( v119 )
        {
          if ( v171->NestingLevel <= 1u )
          {
            v120 = v119[6] - 1;
            v119[6] = v120;
            if ( !v120 )
              KiRemoveSystemWorkPriorityKick(v171);
          }
        }
        do
          KeYieldProcessorEx(&v153, v78, v76, a4);
        while ( v75[8] );
        v121 = v171->SchedulerAssist;
        if ( v121 )
        {
          if ( v171->NestingLevel <= 1u )
          {
            v122 = v121[6];
            v121[6] = v122 + 1;
            if ( v122 == -1 )
              KiRemoveSystemWorkPriorityKick(v171);
          }
        }
      }
      v172 = *((char *)v75 + 195);
      if ( v166 - *((_DWORD *)v75 + 109) > 0 && *((char *)v75 + 195) < 15 )
      {
        LOBYTE(v76) = 15;
        v163 = 1;
        KiSetPriorityBoost(0LL, v75, v76, v143);
      }
      KiReleaseThreadLockSafe(v75);
      if ( v163 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v75, v172);
      v161 = v75 + 27;
      v75[27] = 0LL;
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v161);
    }
    while ( v65 );
    v81 = KeGetCurrentPrcb();
    v154 = 0;
    CurrentThread = v156;
    v82 = v81->SchedulerAssist;
    if ( v82 )
    {
      if ( v81->NestingLevel <= 1u )
      {
        v123 = v82[6];
        v82[6] = v123 + 1;
        if ( v123 == -1 )
LABEL_234:
          KiRemoveSystemWorkPriorityKick(v81);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v124 = v81->SchedulerAssist;
      if ( v124 )
      {
        if ( v81->NestingLevel <= 1u )
        {
          v125 = v124[6] - 1;
          v124[6] = v125;
          if ( !v125 )
            KiRemoveSystemWorkPriorityKick(v81);
        }
      }
      do
        KeYieldProcessorEx(&v154, v79, v80, a4);
      while ( CurrentPrcb->PrcbLock );
      v126 = v81->SchedulerAssist;
      if ( v126 )
      {
        if ( v81->NestingLevel <= 1u )
        {
          v127 = v126[6];
          v126[6] = v127 + 1;
          if ( v127 == -1 )
            goto LABEL_234;
        }
      }
    }
  }
  if ( v12 && v9 || (v66 = v60 + 1, v66 > 0xE) )
    v66 = 1;
  CurrentPrcb->QueueIndex = v66;
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
    if ( !v6 || (NextThread = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb)) == 0 )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      KiSelectNextThread(CurrentPrcb, (__int64)&v141);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_50;
    }
LABEL_51:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && !(unsigned int)KiCheckThreadAffinity(NextThread) )
    {
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb), v129 = 1, !IsThreadRankNonZero) )
      {
        v129 = *(_BYTE *)(CurrentThread + 195);
      }
      *CurrentPrcb->PriorityState = v129;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v130 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
          v130 = (unsigned int)v129;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v130, 0LL);
      }
      if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
        KiSelectNextThread(CurrentPrcb, (__int64)&v141);
      KiInsertDeferredReadyList(&v141, NextThread);
      NextThread = 0LL;
    }
LABEL_13:
    if ( !v141 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (v131 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v132 = 1, !v131) )
      {
        v132 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v132;
      v133 = CurrentPrcb->SchedulerAssist;
      if ( v133 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v134 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v134 = (unsigned int)v132;
        KiSetSchedulerAssistPriority(v133, v134, 0LL);
        v133 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v133 )
        v133[16] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v141);
    v137 = KeGetCurrentPrcb();
    v155 = 0;
    v141 = 0LL;
    while ( 1 )
    {
      LOBYTE(v136) = 1;
      KiSetVpThreadSpinLockCount(v137, v136);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v137, 0LL);
      do
        KeYieldProcessorEx(&v155, v136, v138, v139);
      while ( CurrentPrcb->PrcbLock );
    }
  }
  if ( !NextThread || (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  }
  else
  {
    CurrentPrcb->NextThread = 0LL;
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0 || (v70 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v31 = 1, !v70) )
      v31 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v31;
    if ( CurrentPrcb->SchedulerAssist )
    {
      v140 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
        v140 = (unsigned int)v31;
      KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v140, 0LL);
    }
    CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
    if ( *(_BYTE *)(NextThread + 388) == 1 )
      *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                    - *(_DWORD *)(NextThread + 436)
                                    + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(NextThread + 388) = 2;
    *(_BYTE *)(CurrentThread + 643) = 30;
    KiQueueReadyThread(CurrentPrcb, CurrentThread);
    KiAbProcessContextSwitch(CurrentThread, 1LL);
    IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL);
    if ( KeSmapEnabled )
      __asm { stac }
    LOBYTE(v33) = 1;
    result = KiSwapContext(CurrentThread, NextThread, v33);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
  return result;
}
