/*
 * XREFs of KiQuantumEnd @ 0x140279260
 * Callers:
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140406730 (KiDispatchInterrupt.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityBoost @ 0x14023B2B0 (KiSetPriorityBoost.c)
 *     KeIsUserVaAccessAllowed @ 0x1402764A8 (KeIsUserVaAccessAllowed.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140279D50 (KiGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14027A338 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x14027A8F4 (KiCheckThreadAffinity.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiShouldScanSharedReadyQueue @ 0x14027AF04 (KiShouldScanSharedReadyQueue.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14029BA58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14029BAB8 (KiRemoveThreadFromReadyQueue.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSelectReadyThread @ 0x140352650 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A760C (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiQuantumEnd(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 *v3; // r11
  unsigned __int8 v4; // r14
  ULONG_PTR CurrentThread; // rdi
  unsigned __int64 v6; // rsi
  int v7; // esi
  char v8; // r15
  int v9; // r13d
  int v10; // r12d
  bool v11; // sf
  struct _KPRCB *v12; // rsi
  _DWORD *v13; // rcx
  __int64 NextThread; // rsi
  __int64 result; // rax
  struct _KPRCB *v16; // r15
  _DWORD *SchedulerAssist; // rcx
  char v18; // al
  struct _KPRCB *v19; // r14
  unsigned int v20; // r15d
  _DWORD *v21; // rcx
  __int64 v22; // r9
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  int v25; // r15d
  unsigned __int64 v26; // rdx
  char v27; // cl
  bool IsUserVaAccessAllowed; // bl
  __int64 v29; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  char QueueIndex; // r10
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  _KSHARED_READY_QUEUE *v34; // r13
  int v35; // ebx
  char v36; // r10
  _LIST_ENTRY *ReadyListHead; // rsi
  int v38; // edi
  unsigned int v39; // r8d
  int v40; // r9d
  unsigned int v41; // ecx
  unsigned int v42; // r14d
  _LIST_ENTRY *v43; // r12
  _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY **p_Blink; // rdx
  bool v46; // cl
  bool v47; // zf
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  __int64 *v50; // rax
  char v51; // al
  unsigned int ReadySummary; // r15d
  int v53; // r15d
  _LIST_ENTRY *DispatcherReadyListHead; // r14
  unsigned int v55; // edi
  unsigned int v56; // r15d
  int v57; // r8d
  unsigned int v58; // ecx
  unsigned int v59; // r13d
  __int64 *v60; // r10
  __int64 *v61; // r11
  _KSHARED_READY_QUEUE *v62; // rcx
  bool v63; // dl
  _QWORD *v64; // r15
  unsigned int v65; // r13d
  __int64 v66; // rax
  _DWORD *v67; // rcx
  _DWORD *v68; // rcx
  char v69; // al
  _DWORD *v70; // rcx
  _DWORD *v71; // rcx
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // r8
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  struct _KPRCB *v78; // r15
  _DWORD *v79; // rcx
  __int64 v80; // rdx
  int v81; // r14d
  __int64 v82; // rdi
  __int64 v83; // rdx
  struct _KPRCB *v84; // r13
  _DWORD *v85; // rcx
  int v86; // r13d
  _DWORD *v87; // rcx
  _DWORD *v88; // rcx
  _DWORD *v89; // rcx
  _DWORD *v90; // rcx
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int GuestSchedulerAssistPriority; // eax
  int v105; // eax
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  _DWORD *v119; // rcx
  int v120; // eax
  int v121; // eax
  _DWORD *v122; // rcx
  int v123; // eax
  _DWORD *v124; // rcx
  int v125; // eax
  char IsThreadRankNonZero; // al
  char v127; // cl
  __int64 v128; // rdx
  char v129; // al
  char v130; // dl
  _BYTE *v131; // rcx
  __int64 v132; // rdx
  _KTHREAD *IdleThread; // rax
  __int64 v134; // rdx
  struct _KPRCB *v135; // rsi
  __int64 v136; // rdx
  __int64 v137; // [rsp+20h] [rbp-79h] BYREF
  _KSHARED_READY_QUEUE *v138; // [rsp+28h] [rbp-71h]
  __int64 *v139; // [rsp+30h] [rbp-69h]
  int v140; // [rsp+38h] [rbp-61h] BYREF
  int v141; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v142[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v143; // [rsp+48h] [rbp-51h]
  int v144; // [rsp+50h] [rbp-49h] BYREF
  _LIST_ENTRY *v145; // [rsp+58h] [rbp-41h]
  unsigned int v146; // [rsp+60h] [rbp-39h]
  int v147; // [rsp+64h] [rbp-35h]
  _DWORD v148[2]; // [rsp+68h] [rbp-31h] BYREF
  int v149; // [rsp+70h] [rbp-29h] BYREF
  int v150; // [rsp+74h] [rbp-25h] BYREF
  int v151; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR v152; // [rsp+80h] [rbp-19h]
  struct _KPRCB *v153; // [rsp+88h] [rbp-11h]
  __int64 *v154; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v155; // [rsp+98h] [rbp-1h] BYREF
  __int64 v156; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v157[9]; // [rsp+A8h] [rbp+Fh] BYREF
  char v158; // [rsp+100h] [rbp+67h]
  char v159; // [rsp+100h] [rbp+67h]
  struct _KPRCB *v160; // [rsp+108h] [rbp+6Fh]
  int v161; // [rsp+108h] [rbp+6Fh]
  int v162; // [rsp+108h] [rbp+6Fh]
  char v163; // [rsp+108h] [rbp+6Fh]
  char v164; // [rsp+110h] [rbp+77h]
  __int64 *v165; // [rsp+110h] [rbp+77h]
  int v166; // [rsp+110h] [rbp+77h]
  struct _KPRCB *v167; // [rsp+110h] [rbp+77h]
  unsigned int v168; // [rsp+110h] [rbp+77h]
  __int64 *v169; // [rsp+110h] [rbp+77h]
  struct _LIST_ENTRY **v170; // [rsp+118h] [rbp+7Fh]
  int v171; // [rsp+118h] [rbp+7Fh]
  int v172; // [rsp+118h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v3) = 0;
  v4 = 0;
  v137 = 0LL;
  v158 = 0;
  v153 = CurrentPrcb;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v152 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v16 = KeGetCurrentPrcb();
      v140 = 0;
      SchedulerAssist = v16->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v93 = SchedulerAssist[6];
          SchedulerAssist[6] = v93 + 1;
          if ( v93 == -1 )
LABEL_154:
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v89 = v16->SchedulerAssist;
        if ( v89 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v94 = v89[6] - 1;
            v89[6] = v94;
            if ( !v94 )
              KiRemoveSystemWorkPriorityKick(v16);
          }
        }
        do
          KeYieldProcessorEx(&v140);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v90 = v16->SchedulerAssist;
        if ( v90 )
        {
          if ( v16->NestingLevel <= 1u )
          {
            v95 = v90[6];
            v90[6] = v95 + 1;
            if ( v95 == -1 )
              goto LABEL_154;
          }
        }
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v25 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v18 = KiComputeNewPriority(CurrentThread, a2);
          v19 = KeGetCurrentPrcb();
          v20 = v18;
          v141 = 0;
          v21 = v19->SchedulerAssist;
          if ( v21 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v96 = v21[6];
              v21[6] = v96 + 1;
              if ( v96 == -1 )
LABEL_165:
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            v70 = v19->SchedulerAssist;
            if ( v70 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v97 = v70[6] - 1;
                v70[6] = v97;
                if ( !v97 )
                  KiRemoveSystemWorkPriorityKick(v19);
              }
            }
            do
              KeYieldProcessorEx(&v141);
            while ( CurrentPrcb->PrcbLock );
            v71 = v19->SchedulerAssist;
            if ( v71 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v98 = v71[6];
                v71[6] = v98 + 1;
                if ( v98 == -1 )
                  goto LABEL_165;
              }
            }
          }
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
          {
            LOBYTE(v22) = CurrentPrcb->NextThread == 0LL;
            KiUpdateThreadPriority(CurrentPrcb, CurrentThread, v20, v22);
          }
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v23 = KeGetCurrentPrcb();
          v24 = v23->SchedulerAssist;
          if ( v24 )
          {
            if ( v23->NestingLevel <= 1u )
            {
              v99 = v24[6] - 1;
              v24[6] = v99;
              if ( !v99 )
                KiRemoveSystemWorkPriorityKick(v23);
            }
          }
          v25 = *(unsigned __int8 *)(CurrentThread + 651);
          v4 = 1;
          v158 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v26 = v6 + (unsigned int)(v25 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v26;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v66 = KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)];
          if ( (*(_QWORD *)(*(_QWORD *)(v66 + 192) + 8LL) & *(_QWORD *)(*(_QWORD *)(v66 + 192) + 80LL) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
          {
            *(_DWORD *)(CurrentThread + 116) |= 0x80u;
            _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
      LODWORD(v3) = 0;
    }
  }
  v7 = 10;
  v8 = 0;
  v9 = MEMORY[0xFFFFF78000000320];
  v10 = 16;
  v11 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v147 = MEMORY[0xFFFFF78000000320];
  if ( !v11 )
    goto LABEL_5;
  v8 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_5;
  SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
  v138 = SharedReadyQueue;
  if ( (SharedReadyQueue->ReadySummary & 0x7FFE) == 0 )
    goto LABEL_5;
  QueueIndex = SharedReadyQueue->QueueIndex;
  v32 = KeGetCurrentPrcb();
  v154 = v3;
  v164 = QueueIndex;
  v160 = v32;
  v33 = v32->SchedulerAssist;
  v142[0] = (_DWORD)v3;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v100 = v33[6];
      v33[6] = v100 + 1;
      if ( v100 == -1 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  v34 = v138;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
  {
    v87 = v160->SchedulerAssist;
    if ( v87 )
    {
      if ( v160->NestingLevel <= 1u )
      {
        v101 = v87[6] - 1;
        v87[6] = v101;
        if ( !v101 )
          KiRemoveSystemWorkPriorityKick(v160);
      }
    }
    do
      KeYieldProcessorEx(v142);
    while ( v34->Lock );
    v88 = v160->SchedulerAssist;
    if ( v88 )
    {
      if ( v160->NestingLevel <= 1u )
      {
        v102 = v88[6];
        v88[6] = v102 + 1;
        if ( v102 == -1 )
          KiRemoveSystemWorkPriorityKick(v160);
      }
    }
  }
  if ( (v34->ReadySummary & 0x7FFE) != 0 )
  {
    v35 = 10;
    v36 = v164;
    ReadyListHead = v34->ReadyListHead;
    v38 = 16;
    v39 = __ROR4__(v34->ReadySummary & 0x7FFE, v164);
    v40 = MEMORY[0xFFFFF78000000320] - 300;
    v161 = MEMORY[0xFFFFF78000000320] - 300;
    do
    {
      _BitScanForward(&v41, v39);
      v142[1] = v41;
      LODWORD(v143) = v39 ^ (1 << v41);
      v42 = ((_BYTE)v41 + v36) & 0x1F;
      v146 = v42;
      v43 = &ReadyListHead[((_BYTE)v41 + v36) & 0x1F];
      Flink = v43->Flink;
      do
      {
        p_Blink = &Flink[-14].Blink;
        v46 = 0;
        v47 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
        Flink = Flink->Flink;
        v145 = Flink;
        v170 = p_Blink;
        if ( !v47 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(p_Blink);
          p_Blink = v170;
          Flink = v145;
          v40 = v161;
          if ( GuestSchedulerAssistPriority >= 16 )
            GuestSchedulerAssistPriority = 15;
          v46 = GuestSchedulerAssistPriority != *((_DWORD *)v170 + 256);
        }
        v171 = v40 - *((_DWORD *)p_Blink + 109);
        if ( v171 > 0 || v46 )
        {
          KiRemoveThreadFromSharedReadyQueue(v34, p_Blink, v42);
          KiInsertDeferredReadyList(&v154, v80);
          v40 = v161;
          if ( v171 > 0 )
            --v35;
        }
        --v38;
      }
      while ( Flink != v43 && v35 && v38 );
      v39 = v143;
      ReadyListHead = v34->ReadyListHead;
      v172 = v35;
      LODWORD(v145) = v38;
      if ( !(_DWORD)v143 )
        break;
      if ( !v35 )
        break;
      v36 = v164;
    }
    while ( v38 );
    _InterlockedAnd64((volatile signed __int64 *)v34, 0LL);
    v48 = KeGetCurrentPrcb();
    v7 = 10;
    CurrentPrcb = v153;
    v4 = v158;
    v49 = v48->SchedulerAssist;
    v10 = 16;
    if ( v49 )
    {
      if ( v48->NestingLevel <= 1u )
      {
        v105 = v49[6] - 1;
        v49[6] = v105;
        if ( !v105 )
          KiRemoveSystemWorkPriorityKick(v48);
      }
    }
    v50 = v154;
    if ( v154 )
    {
      v81 = v161;
      do
      {
        v82 = (__int64)(v50 - 27);
        v163 = 0;
        v83 = *(v50 - 18);
        v84 = KeGetCurrentPrcb();
        v169 = v50 - 27;
        v139 = (__int64 *)*v50;
        v85 = v84->SchedulerAssist;
        v143 = v83;
        v153 = v84;
        v144 = 0;
        if ( v85 )
        {
          if ( v84->NestingLevel <= 1u )
          {
            v106 = v85[6];
            v85[6] = v106 + 1;
            if ( v106 == -1 )
LABEL_195:
              KiRemoveSystemWorkPriorityKick(v84);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v82 + 64), 0LL) )
        {
          v107 = v84->SchedulerAssist;
          if ( v107 )
          {
            if ( v84->NestingLevel <= 1u )
            {
              v108 = v107[6] - 1;
              v107[6] = v108;
              if ( !v108 )
                KiRemoveSystemWorkPriorityKick(v84);
            }
          }
          do
            KeYieldProcessorEx(&v144);
          while ( v169[8] );
          v84 = v153;
          v82 = (__int64)v169;
          v109 = v153->SchedulerAssist;
          if ( v109 )
          {
            if ( v153->NestingLevel <= 1u )
            {
              v110 = v109[6];
              v109[6] = v110 + 1;
              if ( v110 == -1 )
                goto LABEL_195;
            }
          }
        }
        v86 = *(char *)(v82 + 195);
        if ( v81 - *(_DWORD *)(v82 + 436) > 0 && v86 < 15 )
        {
          v163 = 1;
          KiSetPriorityBoost(0LL, v82, 15, v143);
        }
        KiReleaseThreadLockSafe(v82);
        if ( v163 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v82, (unsigned int)v86);
        *(_QWORD *)(v82 + 216) = 0LL;
        v156 = v82 + 216;
        KiReadyDeferredReadyList(CurrentPrcb, &v156);
        v50 = v139;
      }
      while ( v139 );
      v4 = v158;
      v34 = v138;
      v38 = (int)v145;
    }
    if ( !v38 || !v172 )
    {
      v51 = v146 + 1;
      if ( v146 + 1 <= 0xE )
        goto LABEL_74;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v34, 0LL);
    v91 = KeGetCurrentPrcb();
    v92 = v91->SchedulerAssist;
    if ( v92 )
    {
      if ( v91->NestingLevel <= 1u )
      {
        v103 = v92[6] - 1;
        v92[6] = v103;
        if ( !v103 )
          KiRemoveSystemWorkPriorityKick(v91);
      }
    }
  }
  v51 = 1;
LABEL_74:
  CurrentThread = v152;
  LODWORD(v3) = 0;
  v34->QueueIndex = v51;
  v9 = v147;
LABEL_5:
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v4, &v137);
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    v148[0] = (_DWORD)v3;
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v111 = v13[6];
        v13[6] = v111 + 1;
        if ( v111 == -1 )
LABEL_207:
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v67 = v12->SchedulerAssist;
      if ( v67 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v112 = v67[6] - 1;
          v67[6] = v112;
          if ( !v112 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      do
        KeYieldProcessorEx(v148);
      while ( CurrentPrcb->PrcbLock );
      v68 = v12->SchedulerAssist;
      if ( v68 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v113 = v68[6];
          v68[6] = v113 + 1;
          if ( v113 == -1 )
            goto LABEL_207;
        }
      }
    }
    v7 = 10;
  }
  if ( !v8 )
    goto LABEL_10;
  ReadySummary = CurrentPrcb->ReadySummary;
  CurrentPrcb->ReadyScanTick = v9 + 75;
  v53 = ReadySummary & 0x7FFE;
  if ( !v53 )
    goto LABEL_10;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  v55 = CurrentPrcb->QueueIndex;
  v155 = 0LL;
  v56 = __ROR4__(v53, v55);
  v57 = MEMORY[0xFFFFF78000000320] - 300;
  v162 = MEMORY[0xFFFFF78000000320] - 300;
  do
  {
    _BitScanForward(&v58, v56);
    v56 ^= 1 << v58;
    v148[1] = v58;
    v59 = ((_BYTE)v58 + (_BYTE)v55) & 0x1F;
    v60 = (__int64 *)&DispatcherReadyListHead[((_BYTE)v58 + (_BYTE)v55) & 0x1F];
    v139 = v60;
    v61 = (__int64 *)*v60;
    do
    {
      v62 = (_KSHARED_READY_QUEUE *)(v61 - 27);
      v63 = 0;
      v47 = (*(_DWORD *)(v61 - 12) & 0x400000) == 0;
      v61 = (__int64 *)*v61;
      v165 = v61;
      v138 = v62;
      if ( !v47 )
      {
        v114 = KiReadGuestSchedulerAssistPriority(v62);
        v62 = v138;
        v60 = v139;
        v61 = v165;
        if ( v114 >= 16 )
          v114 = 15;
        v57 = v162;
        v63 = v114 != LODWORD(v138[1].ReadyListHead[24].Flink);
      }
      v166 = v57 - HIDWORD(v62->ReadyListHead[26].Flink);
      if ( v166 > 0 || v63 )
      {
        KiRemoveThreadFromReadyQueue(CurrentPrcb, &v62->ReadyListHead[12].Blink, v59);
        KiInsertDeferredReadyList(&v155, v138);
        v57 = v162;
        if ( v166 > 0 )
          --v7;
      }
      --v10;
    }
    while ( v61 != v60 && v7 && v10 );
    DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  }
  while ( v56 && v7 && v10 );
  v64 = v155;
  CurrentThread = v152;
  v4 = v158;
  if ( v155 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v72 = KeGetCurrentPrcb();
    v73 = v72->SchedulerAssist;
    if ( v73 )
    {
      if ( v72->NestingLevel <= 1u )
      {
        v115 = v73[6] - 1;
        v73[6] = v115;
        if ( !v115 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
    do
    {
      v74 = (__int64)(v64 - 27);
      v159 = 0;
      v75 = *(v64 - 18);
      v76 = KeGetCurrentPrcb();
      v64 = (_QWORD *)*v64;
      v139 = (__int64 *)v75;
      v167 = v76;
      v77 = v76->SchedulerAssist;
      v149 = 0;
      if ( v77 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v116 = v77[6];
          v77[6] = v116 + 1;
          if ( v116 == -1 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 64), 0LL) )
      {
        v117 = v167->SchedulerAssist;
        if ( v117 )
        {
          if ( v167->NestingLevel <= 1u )
          {
            v118 = v117[6] - 1;
            v117[6] = v118;
            if ( !v118 )
              KiRemoveSystemWorkPriorityKick(v167);
          }
        }
        do
          KeYieldProcessorEx(&v149);
        while ( *(_QWORD *)(v74 + 64) );
        v119 = v167->SchedulerAssist;
        if ( v119 )
        {
          if ( v167->NestingLevel <= 1u )
          {
            v120 = v119[6];
            v119[6] = v120 + 1;
            if ( v120 == -1 )
              KiRemoveSystemWorkPriorityKick(v167);
          }
        }
      }
      v168 = *(char *)(v74 + 195);
      if ( v162 - *(_DWORD *)(v74 + 436) > 0 && *(char *)(v74 + 195) < 15 )
      {
        v159 = 1;
        KiSetPriorityBoost(0LL, v74, 15, (__int64)v139);
      }
      KiReleaseThreadLockSafe(v74);
      if ( v159 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v74, v168);
      v157 = v74 + 216;
      *(_QWORD *)(v74 + 216) = 0LL;
      KiReadyDeferredReadyList(CurrentPrcb, &v157);
    }
    while ( v64 );
    v78 = KeGetCurrentPrcb();
    v150 = 0;
    CurrentThread = v152;
    v79 = v78->SchedulerAssist;
    if ( v79 )
    {
      if ( v78->NestingLevel <= 1u )
      {
        v121 = v79[6];
        v79[6] = v121 + 1;
        if ( v121 == -1 )
LABEL_234:
          KiRemoveSystemWorkPriorityKick(v78);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v122 = v78->SchedulerAssist;
      if ( v122 )
      {
        if ( v78->NestingLevel <= 1u )
        {
          v123 = v122[6] - 1;
          v122[6] = v123;
          if ( !v123 )
            KiRemoveSystemWorkPriorityKick(v78);
        }
      }
      do
        KeYieldProcessorEx(&v150);
      while ( CurrentPrcb->PrcbLock );
      v124 = v78->SchedulerAssist;
      if ( v124 )
      {
        if ( v78->NestingLevel <= 1u )
        {
          v125 = v124[6];
          v124[6] = v125 + 1;
          if ( v125 == -1 )
            goto LABEL_234;
        }
      }
    }
  }
  if ( v10 && v7 || (v65 = v59 + 1, v65 > 0xE) )
    v65 = 1;
  CurrentPrcb->QueueIndex = v65;
  while ( 1 )
  {
LABEL_10:
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v4 )
        *(_BYTE *)(CurrentThread + 565) = 0;
LABEL_50:
      if ( !NextThread )
        goto LABEL_13;
      goto LABEL_51;
    }
    if ( !v4 || (NextThread = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb)) == 0 )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v137);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_50;
    }
LABEL_51:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && !(unsigned int)KiCheckThreadAffinity(NextThread) )
    {
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb), v127 = 1, !IsThreadRankNonZero) )
      {
        v127 = *(_BYTE *)(CurrentThread + 195);
      }
      *CurrentPrcb->PriorityState = v127;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v128 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
          v128 = (unsigned int)v127;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v128, 0LL);
      }
      if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
        KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v137);
      KiInsertDeferredReadyList(&v137, NextThread);
      NextThread = 0LL;
    }
LABEL_13:
    if ( !v137 )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (v129 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v130 = 1, !v129) )
      {
        v130 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v130;
      v131 = CurrentPrcb->SchedulerAssist;
      if ( v131 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v132 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v132 = (unsigned int)v130;
        KiSetSchedulerAssistPriority(v131, v132, 0LL);
        v131 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v131 )
        v131[16] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    KiReadyDeferredReadyList(CurrentPrcb, &v137);
    v135 = KeGetCurrentPrcb();
    v151 = 0;
    v137 = 0LL;
    while ( 1 )
    {
      LOBYTE(v134) = 1;
      KiSetVpThreadSpinLockCount(v135, v134);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v135, 0LL);
      do
        KeYieldProcessorEx(&v151);
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
    KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL);
    _enable();
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0 || (v69 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v27 = 1, !v69) )
      v27 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v27;
    if ( CurrentPrcb->SchedulerAssist )
    {
      v136 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
        v136 = (unsigned int)v27;
      KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v136, 0LL);
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
    LOBYTE(v29) = 1;
    result = KiSwapContext(CurrentThread, NextThread, v29);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
  return result;
}
