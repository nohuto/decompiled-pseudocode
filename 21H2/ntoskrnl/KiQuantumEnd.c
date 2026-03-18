/*
 * XREFs of KiQuantumEnd @ 0x14028FFD0
 * Callers:
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140428B10 (KiDispatchInterrupt.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140210484 (KiRemoveThreadFromReadyQueue.c)
 *     KiComputeWaitLimit @ 0x1402104E4 (KiComputeWaitLimit.c)
 *     KiSetPriorityBoost @ 0x14021050C (KiSetPriorityBoost.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140210C6C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiCheckThreadAffinity @ 0x140290B74 (KiCheckThreadAffinity.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140290FCC (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x140291158 (KeIsUserVaAccessAllowed.c)
 *     KiShouldScanSharedReadyQueue @ 0x14029135C (KiShouldScanSharedReadyQueue.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140308640 (KiCheckPreferredHeteroProcessor.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KeSetThreadBamQosLevel @ 0x14045AB80 (KeSetThreadBamQosLevel.c)
 *     KiGetHeteroThreadQos @ 0x14045AE34 (KiGetHeteroThreadQos.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140577654 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x14062D3AC (EtwTraceAntiStarvationBoost.c)
 */

__int64 __fastcall KiQuantumEnd(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  struct _KPRCB **v4; // r9
  unsigned __int8 v5; // r14
  ULONG_PTR CurrentThread; // rdi
  unsigned __int64 v7; // rsi
  int v8; // r15d
  char v9; // si
  unsigned int v10; // r13d
  int v11; // r12d
  bool v12; // sf
  struct _KPRCB *v13; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  char v17; // r13
  __int64 NextThread; // rsi
  __int64 result; // rax
  __int64 v20; // r8
  unsigned __int8 *v21; // r14
  char v22; // cl
  unsigned __int8 v23; // al
  void *v24; // rcx
  _KPRIORITY_STATE *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char IsUserVaAccessAllowed; // bl
  __int64 v30; // r8
  struct _KPRCB *v31; // r15
  _DWORD *SchedulerAssist; // rcx
  char v33; // al
  struct _KPRCB *v34; // r14
  unsigned int v35; // r12d
  _DWORD *v36; // rcx
  __int64 v37; // r9
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  int v40; // r12d
  unsigned __int64 CoreProcessorSet; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  _WORD *v45; // rcx
  __int64 v46; // r8
  _KSHARED_READY_QUEUE *SharedReadyQueue; // rcx
  int QueueIndex; // eax
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // r13
  int v52; // edx
  char v53; // r10
  int v54; // r8d
  unsigned int v55; // edx
  int v56; // r9d
  unsigned int v57; // eax
  unsigned __int8 v58; // r14
  _QWORD **v59; // r15
  _QWORD *v60; // rdi
  __int64 v61; // r11
  bool v62; // cl
  bool v63; // zf
  struct _KPRCB *v64; // rcx
  struct _KPRCB **v65; // rax
  char v66; // al
  unsigned int ReadySummary; // esi
  int v68; // esi
  unsigned int v69; // r14d
  _LIST_ENTRY *DispatcherReadyListHead; // rdx
  unsigned int v71; // esi
  unsigned int v72; // ecx
  unsigned __int8 v73; // si
  struct _KPRCB *v74; // r11
  struct _KPRCB *v75; // r13
  unsigned __int64 *v76; // r10
  __int64 v77; // rdx
  bool v78; // cl
  _QWORD *v79; // r13
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // r10
  int v85; // r14d
  unsigned int v86; // r12d
  __int64 v87; // rdi
  unsigned __int64 v88; // rdx
  struct _KPRCB *v89; // r13
  _DWORD *v90; // rcx
  int v91; // r13d
  _QWORD *v92; // rdi
  char v93; // r13
  _DWORD *v94; // rcx
  _DWORD *v95; // rcx
  int v96; // r15d
  unsigned int v97; // r14d
  __int64 v98; // rsi
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  struct _KPRCB *v101; // rdi
  int v102; // edi
  _QWORD *v103; // rsi
  char v104; // di
  struct _KPRCB *v105; // rsi
  _DWORD *v106; // rcx
  _DWORD *v107; // rcx
  _DWORD *v108; // rcx
  _DWORD *v109; // rcx
  struct _KPRCB *v110; // rcx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  struct _KPRCB *v118; // rsi
  _DWORD *v119; // rcx
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  unsigned int HeteroThreadQos; // eax
  _KPRIORITY_STATE *PriorityState; // r8
  unsigned int v127; // edx
  char v128; // al
  char v129; // al
  char v130; // cl
  struct _KPRCB *v131; // rcx
  _DWORD *v132; // rdx
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int GuestSchedulerAssistPriority; // eax
  __int64 v139; // rdx
  int v140; // eax
  int v141; // eax
  _DWORD *v142; // rcx
  int v143; // eax
  _DWORD *v144; // rcx
  int v145; // eax
  int v146; // eax
  __int64 v147; // r10
  __int64 v148; // rdx
  unsigned __int8 *v149; // r12
  __int64 v150; // rdx
  __int64 v151; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v153; // cl
  unsigned __int8 v154; // al
  void *v155; // rcx
  __int64 v156; // rdx
  _KPRIORITY_STATE *v157; // r8
  unsigned int v158; // edx
  char v159; // al
  char v160; // al
  char v161; // cl
  unsigned __int8 *v162; // r12
  __int64 v163; // rdx
  __int64 v164; // rdx
  int v165; // eax
  char v166; // cl
  unsigned __int8 v167; // al
  void *v168; // rcx
  __int64 v169; // rdx
  _KPRIORITY_STATE *v170; // r8
  unsigned int v171; // edx
  char v172; // al
  char v173; // al
  char v174; // cl
  _BYTE *v175; // rcx
  _KTHREAD *IdleThread; // rax
  _QWORD *v177; // rsi
  __int64 v178; // rdx
  struct _KPRCB *v179; // rsi
  __int64 v180; // rdx
  unsigned int v181; // edx
  char v182; // al
  char v183; // al
  __int64 v184; // [rsp+20h] [rbp-89h]
  _QWORD *v185; // [rsp+30h] [rbp-79h] BYREF
  __int64 v186; // [rsp+38h] [rbp-71h]
  unsigned int v187; // [rsp+40h] [rbp-69h]
  int v188; // [rsp+44h] [rbp-65h]
  unsigned int v189; // [rsp+48h] [rbp-61h]
  int v190; // [rsp+4Ch] [rbp-5Dh]
  ULONG_PTR v191; // [rsp+50h] [rbp-59h]
  struct _KPRCB *v192; // [rsp+58h] [rbp-51h]
  __int64 v193; // [rsp+60h] [rbp-49h]
  int v194; // [rsp+68h] [rbp-41h] BYREF
  int v195; // [rsp+6Ch] [rbp-3Dh] BYREF
  int v196; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v197[2]; // [rsp+74h] [rbp-35h] BYREF
  int v198; // [rsp+7Ch] [rbp-2Dh]
  int v199; // [rsp+80h] [rbp-29h] BYREF
  _DWORD v200[2]; // [rsp+84h] [rbp-25h] BYREF
  int v201; // [rsp+8Ch] [rbp-1Dh] BYREF
  int v202; // [rsp+90h] [rbp-19h] BYREF
  int v203; // [rsp+94h] [rbp-15h] BYREF
  struct _KPRCB **v204; // [rsp+98h] [rbp-11h] BYREF
  _QWORD *v205; // [rsp+A0h] [rbp-9h] BYREF
  _QWORD *v206; // [rsp+A8h] [rbp-1h] BYREF
  _QWORD *v207; // [rsp+B0h] [rbp+7h] BYREF
  char v208; // [rsp+110h] [rbp+67h]
  int v209; // [rsp+118h] [rbp+6Fh]
  unsigned __int64 v210; // [rsp+118h] [rbp+6Fh]
  struct _KPRCB *v211; // [rsp+120h] [rbp+77h]
  int v212; // [rsp+120h] [rbp+77h]
  unsigned __int64 *v213; // [rsp+120h] [rbp+77h]
  int v214; // [rsp+120h] [rbp+77h]
  int v215; // [rsp+128h] [rbp+7Fh]
  int v216; // [rsp+128h] [rbp+7Fh]
  unsigned __int64 v217; // [rsp+128h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v4) = 0;
  v5 = 0;
  v185 = 0LL;
  v208 = 0;
  v192 = CurrentPrcb;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v191 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v7 = *(_QWORD *)(CurrentThread + 72);
    if ( v7 >= *(_QWORD *)(CurrentThread + 32) || KeHeteroSystem || *(_BYTE *)(CurrentThread + 125) )
    {
      v31 = KeGetCurrentPrcb();
      v194 = 0;
      SchedulerAssist = v31->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v31->NestingLevel <= 1u )
        {
          v111 = SchedulerAssist[6];
          SchedulerAssist[6] = v111 + 1;
          if ( v111 == -1 )
LABEL_173:
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v108 = v31->SchedulerAssist;
        if ( v108 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v112 = v108[6] - 1;
            v108[6] = v112;
            if ( !v112 )
              KiRemoveSystemWorkPriorityKick(v31);
          }
        }
        do
          KeYieldProcessorEx(&v194);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v109 = v31->SchedulerAssist;
        if ( v109 )
        {
          if ( v31->NestingLevel <= 1u )
          {
            v113 = v109[6];
            v109[6] = v113 + 1;
            if ( v113 == -1 )
              goto LABEL_173;
          }
        }
      }
      if ( v7 < *(_QWORD *)(CurrentThread + 32) )
        goto LABEL_63;
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
      {
        v40 = 127;
      }
      else
      {
        LOBYTE(a3) = 1;
        v33 = KiComputeNewPriority(CurrentThread, 1LL, a3);
        v34 = KeGetCurrentPrcb();
        v35 = v33;
        v195 = 0;
        v36 = v34->SchedulerAssist;
        if ( v36 )
        {
          if ( v34->NestingLevel <= 1u )
          {
            v114 = v36[6];
            v36[6] = v114 + 1;
            if ( v114 == -1 )
LABEL_184:
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          v94 = v34->SchedulerAssist;
          if ( v94 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v115 = v94[6] - 1;
              v94[6] = v115;
              if ( !v115 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
          do
            KeYieldProcessorEx(&v195);
          while ( CurrentPrcb->PrcbLock );
          v95 = v34->SchedulerAssist;
          if ( v95 )
          {
            if ( v34->NestingLevel <= 1u )
            {
              v116 = v95[6];
              v95[6] = v116 + 1;
              if ( v116 == -1 )
                goto LABEL_184;
            }
          }
        }
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
        {
          LOBYTE(v37) = CurrentPrcb->NextThread == 0LL;
          KiUpdateThreadPriority(CurrentPrcb, CurrentThread, v35, v37);
        }
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        v38 = KeGetCurrentPrcb();
        v39 = v38->SchedulerAssist;
        if ( v39 )
        {
          if ( v38->NestingLevel <= 1u )
          {
            v117 = v39[6] - 1;
            v39[6] = v117;
            if ( !v117 )
              KiRemoveSystemWorkPriorityKick(v38);
          }
        }
        v40 = *(unsigned __int8 *)(CurrentThread + 651);
        v5 = 1;
        v208 = 1;
        KiTryScheduleNextForegroundBoost(CurrentThread);
      }
      a2 = v7 + (unsigned int)(v40 * KiCyclesPerClockQuantum);
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
      *(_QWORD *)(CurrentThread + 32) = a2;
      if ( CurrentPrcb->GroupSetMember == CurrentPrcb->CoreProcessorSet
        || _bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
        || (CoreProcessorSet = CurrentPrcb->CoreProcessorSet,
            a2 = CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->SchedulerSubNode->IdleCpuSet),
            a2 == CoreProcessorSet) )
      {
LABEL_63:
        v42 = 0LL;
      }
      else
      {
        v42 = 0LL;
        v43 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
        a2 = *(_QWORD *)(v43 + 16) & *(_QWORD *)(v43 + 80);
        v44 = *(unsigned __int16 *)(v43 + 136);
        v45 = *(_WORD **)(CurrentThread + 576);
        if ( (unsigned __int16)v44 >= *v45 )
          v46 = 0LL;
        else
          v46 = *(_QWORD *)&v45[4 * v44 + 4];
        if ( (v46 & a2) != 0 )
        {
          *(_DWORD *)(CurrentThread + 116) |= 0x80u;
          _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        }
      }
      if ( KeHeteroSystem )
      {
        v118 = KeGetCurrentPrcb();
        v196 = 0;
        v119 = v118->SchedulerAssist;
        if ( v119 )
        {
          if ( v118->NestingLevel <= 1u )
          {
            v120 = v119[6];
            v119[6] = v120 + 1;
            if ( v120 == -1 )
LABEL_198:
              KiRemoveSystemWorkPriorityKick(v118);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          v121 = v118->SchedulerAssist;
          if ( v121 )
          {
            if ( v118->NestingLevel <= 1u )
            {
              v122 = v121[6] - 1;
              v121[6] = v122;
              if ( !v122 )
                KiRemoveSystemWorkPriorityKick(v118);
            }
          }
          do
            KeYieldProcessorEx(&v196);
          while ( CurrentPrcb->PrcbLock );
          v123 = v118->SchedulerAssist;
          if ( v123 )
          {
            if ( v118->NestingLevel <= 1u )
            {
              v124 = v123[6];
              v123[6] = v124 + 1;
              if ( v124 == -1 )
                goto LABEL_198;
            }
          }
        }
        HeteroThreadQos = KiGetHeteroThreadQos(CurrentThread, a2, 0LL, v42);
        if ( HeteroThreadQos != (unsigned __int8)*(_DWORD *)(CurrentThread + 512) )
          KeSetThreadBamQosLevel(CurrentThread, HeteroThreadQos);
        if ( !CurrentPrcb->NextThread )
        {
          PriorityState = CurrentPrcb->PriorityState;
          if ( KeHeteroSystem )
          {
            v127 = *(_DWORD *)(CurrentThread + 80);
            v128 = (*(_BYTE *)(CurrentThread + 512) ^ PriorityState[64].AllFields) & 7 ^ PriorityState[64].AllFields;
            v129 = (v128 ^ (8 * *(_BYTE *)(CurrentThread + 516))) & 0x38 ^ v128;
            if ( v127 <= *(_DWORD *)(CurrentThread + 84) )
              v127 = *(_DWORD *)(CurrentThread + 84);
            v130 = 64;
            if ( v127 < KiDynamicHeteroCpuPolicyExpectedCycles )
              v130 = 0;
            PriorityState[64].AllFields = v130 | v129 & 0xBF;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        v131 = KeGetCurrentPrcb();
        v132 = v131->SchedulerAssist;
        if ( v132 )
        {
          if ( v131->NestingLevel <= 1u )
          {
            v133 = v132[6] - 1;
            v132[6] = v133;
            if ( !v133 )
              KiRemoveSystemWorkPriorityKick(v131);
          }
        }
      }
      if ( (unsigned int)KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL, v42) )
        _interlockedbittestandset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
      KiReleaseThreadLockSafe(CurrentThread);
      LODWORD(v4) = 0;
    }
  }
  v8 = 10;
  v9 = 0;
  v10 = MEMORY[0xFFFFF78000000320];
  v11 = 16;
  v12 = (signed int)(CurrentPrcb->ReadyScanTick - MEMORY[0xFFFFF78000000320]) < 0;
  v189 = MEMORY[0xFFFFF78000000320];
  if ( !v12 )
    goto LABEL_6;
  v9 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_6;
  SharedReadyQueue = CurrentPrcb->SharedReadyQueue;
  v193 = (__int64)SharedReadyQueue;
  if ( (SharedReadyQueue->ReadySummary & 0x7FFE) == 0 )
    goto LABEL_6;
  QueueIndex = SharedReadyQueue->QueueIndex;
  v49 = KeGetCurrentPrcb();
  v204 = v4;
  v190 = QueueIndex;
  v211 = v49;
  v50 = v49->SchedulerAssist;
  v197[0] = (_DWORD)v4;
  if ( v50 )
  {
    if ( v49->NestingLevel <= 1u )
    {
      v134 = v50[6];
      v50[6] = v134 + 1;
      if ( v134 == -1 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  v51 = v193;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v51, 0LL) )
  {
    v106 = v211->SchedulerAssist;
    if ( v106 )
    {
      if ( v211->NestingLevel <= 1u )
      {
        v135 = v106[6] - 1;
        v106[6] = v135;
        if ( !v135 )
          KiRemoveSystemWorkPriorityKick(v211);
      }
    }
    do
      KeYieldProcessorEx(v197);
    while ( *(_QWORD *)v51 );
    v107 = v211->SchedulerAssist;
    if ( v107 )
    {
      if ( v211->NestingLevel <= 1u )
      {
        v136 = v107[6];
        v107[6] = v136 + 1;
        if ( v136 == -1 )
          KiRemoveSystemWorkPriorityKick(v211);
      }
    }
  }
  CurrentThread = v191;
  v52 = *(_DWORD *)(v51 + 8) & 0x7FFE;
  if ( !v52 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v51, 0LL);
    v110 = KeGetCurrentPrcb();
    a2 = (unsigned __int64)v110->SchedulerAssist;
    if ( a2 )
    {
      if ( v110->NestingLevel <= 1u )
      {
        v137 = *(_DWORD *)(a2 + 24) - 1;
        *(_DWORD *)(a2 + 24) = v137;
        if ( !v137 )
          KiRemoveSystemWorkPriorityKick(v110);
      }
    }
    goto LABEL_84;
  }
  v53 = v190;
  v54 = 10;
  v187 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
  v55 = __ROR4__(v52, v190);
  v212 = 10;
  v56 = MEMORY[0xFFFFF78000000320];
  v215 = MEMORY[0xFFFFF78000000320];
  do
  {
    _BitScanForward(&v57, v55);
    v197[1] = v57;
    v198 = v55 ^ (1 << v57);
    v58 = (v57 + v53) & 0x1F;
    v188 = v58;
    v59 = (_QWORD **)(v51 + 16 + 16LL * v58);
    v60 = *v59;
    do
    {
      v61 = (__int64)(v60 - 27);
      v62 = 0;
      v63 = (*(_DWORD *)(v60 - 12) & 0x400000) == 0;
      v60 = (_QWORD *)*v60;
      v186 = v61;
      if ( !v63 )
      {
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v61, 0LL);
        v61 = v186;
        v54 = v212;
        v56 = v215;
        v62 = GuestSchedulerAssistPriority != *(_DWORD *)(v186 + 1024);
      }
      if ( v56 - *(_DWORD *)(v61 + 436) - 300 > 0 )
      {
        KiRemoveThreadFromSharedReadyQueue(v51, v61, v58);
        KiInsertDeferredReadyList(&v204, v83);
        v54 = --v212;
LABEL_116:
        v56 = v215;
        goto LABEL_76;
      }
      if ( v62 )
      {
        KiRemoveThreadFromSharedReadyQueue(v51, v61, v58);
        KiInsertDeferredReadyList(&v204, v139);
        v54 = v212;
        goto LABEL_116;
      }
LABEL_76:
      --v11;
    }
    while ( v60 != v59 && v54 && v11 );
    v55 = v198;
    LODWORD(v186) = v11;
    if ( !v198 )
      break;
    if ( !v54 )
      break;
    v53 = v190;
  }
  while ( v11 );
  _InterlockedAnd64((volatile signed __int64 *)v51, 0LL);
  v64 = KeGetCurrentPrcb();
  v8 = 10;
  CurrentPrcb = v192;
  a2 = (unsigned __int64)v64->SchedulerAssist;
  if ( a2 )
  {
    if ( v64->NestingLevel <= 1u )
    {
      v140 = *(_DWORD *)(a2 + 24) - 1;
      *(_DWORD *)(a2 + 24) = v140;
      if ( !v140 )
        KiRemoveSystemWorkPriorityKick(v64);
    }
  }
  v65 = v204;
  if ( v204 )
  {
    v85 = v215;
    v86 = v187;
    do
    {
      v87 = (__int64)(v65 - 27);
      v88 = (unsigned __int64)*(v65 - 18);
      v89 = KeGetCurrentPrcb();
      v192 = *v65;
      v217 = v88;
      v199 = 0;
      v90 = v89->SchedulerAssist;
      if ( v90 )
      {
        if ( v89->NestingLevel <= 1u )
        {
          v141 = v90[6];
          v90[6] = v141 + 1;
          if ( v141 == -1 )
LABEL_240:
            KiRemoveSystemWorkPriorityKick(v89);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v87 + 64), 0LL) )
      {
        v142 = v89->SchedulerAssist;
        if ( v142 )
        {
          if ( v89->NestingLevel <= 1u )
          {
            v143 = v142[6] - 1;
            v142[6] = v143;
            if ( !v143 )
              KiRemoveSystemWorkPriorityKick(v89);
          }
        }
        do
          KeYieldProcessorEx(&v199);
        while ( *(_QWORD *)(v87 + 64) );
        v144 = v89->SchedulerAssist;
        if ( v144 )
        {
          if ( v89->NestingLevel <= 1u )
          {
            v145 = v144[6];
            v144[6] = v145 + 1;
            if ( v145 == -1 )
              goto LABEL_240;
          }
        }
      }
      v91 = *(char *)(v87 + 195);
      if ( v85 - *(_DWORD *)(v87 + 436) - 300 <= 0 || v91 >= 15 )
      {
        KiReleaseThreadLockSafe(v87);
      }
      else
      {
        KiSetPriorityBoost(0LL, v87, 15, v217, v86);
        KiReleaseThreadLockSafe(v87);
        if ( (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v87, (unsigned int)v91);
      }
      v92 = (_QWORD *)(v87 + 216);
      v205 = 0LL;
      v93 = 0;
      *v92 = 0LL;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, v92 - 27, &v205);
        v92 = v205;
        ++v93;
        if ( v205 )
          v205 = (_QWORD *)*v205;
        if ( (v93 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( v92 );
      KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      v65 = (struct _KPRCB **)v192;
    }
    while ( v192 );
  }
  v11 = 16;
  CurrentThread = v191;
  v5 = v208;
  v9 = 1;
  v51 = v193;
  if ( (_DWORD)v186 && v212 || (v66 = v188 + 1, (unsigned int)(v188 + 1) > 0xE) )
LABEL_84:
    v66 = 1;
  *(_BYTE *)(v51 + 658) = v66;
  LODWORD(v4) = 0;
  v10 = v189;
LABEL_6:
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v5, &v185);
  }
  else
  {
    v13 = KeGetCurrentPrcb();
    v200[0] = (_DWORD)v4;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(v13, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v13, 0LL);
      do
        KeYieldProcessorEx(v200);
      while ( CurrentPrcb->PrcbLock );
    }
    v8 = 10;
  }
  if ( v9 )
  {
    ReadySummary = CurrentPrcb->ReadySummary;
    CurrentPrcb->ReadyScanTick = v10 + 75;
    v68 = ReadySummary & 0x7FFE;
    if ( v68 )
    {
      v69 = CurrentPrcb->QueueIndex;
      v206 = 0LL;
      v189 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
      v209 = KiComputeWaitLimit(0);
      v71 = __ROR4__(v68, v69);
      do
      {
        _BitScanForward(&v72, v71);
        v200[1] = v72;
        v216 = v71 ^ (1 << v72);
        v73 = (v72 + v69) & 0x1F;
        v74 = (struct _KPRCB *)&DispatcherReadyListHead[v73];
        v187 = v73;
        v192 = v74;
        v75 = *(struct _KPRCB **)&v74->MxCsr;
        do
        {
          v76 = &v75[-1].PrcbPad141[493];
          v77 = (__int64)v75;
          v75 = *(struct _KPRCB **)&v75->MxCsr;
          v78 = 0;
          v63 = (v76[15] & 0x400000) == 0;
          v193 = v77;
          v213 = v76;
          if ( !v63 )
          {
            v146 = KiReadGuestSchedulerAssistPriority(v76, 0LL);
            v76 = v213;
            v74 = v192;
            v77 = v193;
            v78 = v146 != *((_DWORD *)v213 + 256);
          }
          if ( v209 - *((_DWORD *)v76 + 109) > 0 )
          {
            KiRemoveThreadFromReadyQueue((__int64)CurrentPrcb, v77, v73);
            KiInsertDeferredReadyList(&v206, v84);
            --v8;
          }
          else if ( v78 )
          {
            KiRemoveThreadFromReadyQueue((__int64)CurrentPrcb, v77, v73);
            KiInsertDeferredReadyList(&v206, v147);
          }
          --v11;
        }
        while ( v75 != v74 && v8 && v11 );
        v71 = v216;
        v214 = v8;
        if ( !v216 )
          break;
        if ( !v8 )
          break;
        DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
      }
      while ( v11 );
      v79 = v206;
      CurrentThread = v191;
      v5 = v208;
      if ( v206 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        v96 = v209;
        v97 = v189;
        do
        {
          v98 = (__int64)(v79 - 27);
          v99 = 0LL;
          v100 = *(v79 - 18);
          v101 = KeGetCurrentPrcb();
          v79 = (_QWORD *)*v79;
          v210 = v100;
          v201 = 0;
          while ( 1 )
          {
            LOBYTE(v99) = 1;
            KiSetVpThreadSpinLockCount(v101, v99);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v98 + 64), 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v101, 0LL);
            do
              KeYieldProcessorEx(&v201);
            while ( *(_QWORD *)(v98 + 64) );
          }
          v102 = *(char *)(v98 + 195);
          if ( v96 - *(_DWORD *)(v98 + 436) <= 0 || v102 >= 15 )
          {
            KiReleaseThreadLockSafe(v98);
          }
          else
          {
            KiSetPriorityBoost(0LL, v98, 15, v210, v97);
            KiReleaseThreadLockSafe(v98);
            if ( (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
              EtwTraceAntiStarvationBoost(v98, (unsigned int)v102);
          }
          v103 = (_QWORD *)(v98 + 216);
          v104 = 0;
          v207 = 0LL;
          *v103 = 0LL;
          do
          {
            KiDeferredReadySingleThread(CurrentPrcb, v103 - 27, &v207);
            v103 = v207;
            ++v104;
            if ( v207 )
              v207 = (_QWORD *)*v207;
            if ( (v104 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
          }
          while ( v103 );
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( v79 );
        v105 = KeGetCurrentPrcb();
        v202 = 0;
        KiSetVpThreadSpinLockCount(v105, 1LL);
        CurrentThread = v191;
        v5 = v208;
        v8 = v214;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          KiSetVpThreadSpinLockCount(v105, 0LL);
          do
            KeYieldProcessorEx(&v202);
          while ( CurrentPrcb->PrcbLock );
          LOBYTE(v148) = 1;
          KiSetVpThreadSpinLockCount(v105, v148);
        }
      }
      if ( v11 && v8 || (v80 = v187 + 1, v187 + 1 > 0xE) )
        v80 = 1;
      CurrentPrcb->QueueIndex = v80;
    }
  }
  v16 = 64;
  v17 = 0;
  while ( 2 )
  {
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread )
    {
      if ( v5 )
        *(_BYTE *)(CurrentThread + 565) = 0;
LABEL_34:
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && !(unsigned int)KiCheckThreadAffinity(NextThread) )
      {
        v149 = (unsigned __int8 *)CurrentPrcb->PriorityState;
        if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
          || *(char *)(CurrentThread + 195) >= 16
          || !*(_QWORD *)(CurrentThread + 104)
          || (v150 = *(_QWORD *)(CurrentThread + 104)) == 0
          || (v151 = CurrentPrcb->ScbOffset + v150) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(CurrentThread, v151, v14, 0, 0LL),
              v153 = 1,
              !ThreadEffectiveRankNonZero) )
        {
          v153 = *(_BYTE *)(CurrentThread + 195);
        }
        v154 = v153 & 0x7F | (*(_BYTE *)(CurrentThread + 119) << 7);
        *v149 = v154;
        v155 = CurrentPrcb->SchedulerAssist;
        if ( v155 )
        {
          if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
            v156 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v156 = v154 & 0x7F;
          KiSetSchedulerAssistPriority(v155, v156, 0LL);
        }
        v157 = CurrentPrcb->PriorityState;
        if ( KeHeteroSystem )
        {
          v158 = *(_DWORD *)(CurrentThread + 80);
          v159 = (v157[64].AllFields ^ *(_BYTE *)(CurrentThread + 512)) & 7 ^ v157[64].AllFields;
          v160 = (v159 ^ (8 * *(_BYTE *)(CurrentThread + 516))) & 0x38 ^ v159;
          if ( v158 <= *(_DWORD *)(CurrentThread + 84) )
            v158 = *(_DWORD *)(CurrentThread + 84);
          v161 = 64;
          if ( v158 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v161 = 0;
          v157[64].AllFields = v161 | v160 & 0xBF;
        }
        if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
          KiSelectNextThread(CurrentPrcb, &v185, v157);
        KiInsertDeferredReadyList(&v185, NextThread);
        NextThread = 0LL;
      }
      goto LABEL_15;
    }
    if ( v5 )
    {
      NextThread = KiSelectReadyThread((unsigned int)*(char *)(CurrentThread + 195), CurrentPrcb);
      if ( NextThread )
        goto LABEL_34;
    }
    if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) != 0 )
    {
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_15;
      }
      KiSelectNextThread(CurrentPrcb, &v185, v14);
      NextThread = (__int64)CurrentPrcb->NextThread;
      if ( !NextThread )
        goto LABEL_15;
      goto LABEL_34;
    }
LABEL_15:
    if ( v185 )
    {
      if ( NextThread
        && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
        && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
      {
        v162 = (unsigned __int8 *)CurrentPrcb->PriorityState;
        if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
          || *(char *)(NextThread + 195) >= 16
          || !*(_QWORD *)(NextThread + 104)
          || (v163 = *(_QWORD *)(NextThread + 104)) == 0
          || (v164 = CurrentPrcb->ScbOffset + v163) == 0
          || (v165 = KiGetThreadEffectiveRankNonZero(NextThread, v164, v14, 0, 0LL), v166 = 1, !v165) )
        {
          v166 = *(_BYTE *)(NextThread + 195);
        }
        v167 = v166 & 0x7F | (*(_BYTE *)(NextThread + 119) << 7);
        *v162 = v167;
        v168 = CurrentPrcb->SchedulerAssist;
        if ( v168 )
        {
          if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
            v169 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v169 = v167 & 0x7F;
          KiSetSchedulerAssistPriority(v168, v169, 0LL);
        }
        v170 = CurrentPrcb->PriorityState;
        if ( KeHeteroSystem )
        {
          v171 = *(_DWORD *)(NextThread + 80);
          v172 = (v170[64].AllFields ^ *(_BYTE *)(NextThread + 512)) & 7 ^ v170[64].AllFields;
          v173 = (v172 ^ (8 * *(_BYTE *)(NextThread + 516))) & 0x38 ^ v172;
          if ( v171 <= *(_DWORD *)(NextThread + 84) )
            v171 = *(_DWORD *)(NextThread + 84);
          v174 = 64;
          if ( v171 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v174 = 0;
          v170[64].AllFields = v174 | v173 & 0xBF;
        }
        v175 = CurrentPrcb->SchedulerAssist;
        IdleThread = CurrentPrcb->IdleThread;
        CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
        if ( v175 )
          v175[16] = NextThread == (_QWORD)IdleThread;
        if ( *(_BYTE *)(NextThread + 388) == 1 )
          *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                        - *(_DWORD *)(NextThread + 436)
                                        + MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(NextThread + 388) = 3;
      }
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      v177 = v185;
      v185 = (_QWORD *)*v185;
      do
      {
        KiDeferredReadySingleThread(CurrentPrcb, v177 - 27, &v185);
        v177 = v185;
        ++v17;
        if ( v185 )
          v185 = (_QWORD *)*v185;
        if ( (v17 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      }
      while ( v177 );
      KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts);
      v179 = KeGetCurrentPrcb();
      v17 = 0;
      v185 = 0LL;
      v203 = 0;
      while ( 1 )
      {
        LOBYTE(v178) = 1;
        KiSetVpThreadSpinLockCount(v179, v178);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v179, 0LL);
        do
          KeYieldProcessorEx(&v203);
        while ( CurrentPrcb->PrcbLock );
      }
      continue;
    }
    break;
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
    LOBYTE(v15) = 1;
    KiEndThreadCycleAccumulation(CurrentPrcb, CurrentThread, 0LL, v15);
    _enable();
    v21 = (unsigned __int8 *)CurrentPrcb->PriorityState;
    if ( (*(_BYTE *)(NextThread + 2) & 4) != 0
      && *(char *)(NextThread + 195) < 16
      && *(_QWORD *)(NextThread + 104)
      && (v81 = *(_QWORD *)(NextThread + 104)) != 0
      && (v82 = CurrentPrcb->ScbOffset + v81) != 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(NextThread, v82, v20, 0, 0LL) )
    {
      v22 = 1;
    }
    else
    {
      v22 = *(_BYTE *)(NextThread + 195);
    }
    v23 = v22 & 0x7F | (*(_BYTE *)(NextThread + 119) << 7);
    *v21 = v23;
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
        v180 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v180 = v23 & 0x7F;
      KiSetSchedulerAssistPriority(v24, v180, 0LL);
    }
    v25 = CurrentPrcb->PriorityState;
    if ( KeHeteroSystem )
    {
      v181 = *(_DWORD *)(NextThread + 80);
      v182 = (v25[64].AllFields ^ *(_BYTE *)(NextThread + 512)) & 7 ^ v25[64].AllFields;
      v183 = (v182 ^ (8 * *(_BYTE *)(NextThread + 516))) & 0x38 ^ v182;
      if ( v181 <= *(_DWORD *)(NextThread + 84) )
        v181 = *(_DWORD *)(NextThread + 84);
      if ( v181 < KiDynamicHeteroCpuPolicyExpectedCycles )
        v16 = 0;
      v25[64].AllFields = v16 | v183 & 0xBF;
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
    IsUserVaAccessAllowed = KeIsUserVaAccessAllowed(0LL, v26, v27, v28, v184);
    if ( KeSmapEnabled )
      __asm { stac }
    LOBYTE(v30) = 1;
    result = KiSwapContext(CurrentThread, NextThread, v30);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
  return result;
}
