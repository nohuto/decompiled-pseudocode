/*
 * XREFs of KiQuantumEnd @ 0x1402DAD50
 * Callers:
 *     KiIdleLoop @ 0x140400500 (KiIdleLoop.c)
 *     KiDispatchInterrupt @ 0x140403F40 (KiDispatchInterrupt.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14021D6F0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KeIsUserVaAccessAllowed @ 0x1402D8E2C (KeIsUserVaAccessAllowed.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402DBC60 (KiCheckPreferredHeteroProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402DBE28 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402DC330 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x1402DC3E4 (KiCheckThreadAffinity.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402DCAB4 (KiShouldScanSharedReadyQueue.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402E9D78 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1402E9DD8 (KiRemoveThreadFromReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiSetPriorityBoost @ 0x14031A640 (KiSetPriorityBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051E168 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceAntiStarvationBoost @ 0x1405A59AC (EtwTraceAntiStarvationBoost.c)
 */

void __fastcall KiQuantumEnd(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _LIST_ENTRY **v3; // r11
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
  struct _KPRCB *v15; // r15
  _DWORD *SchedulerAssist; // rcx
  char v17; // al
  struct _KPRCB *v18; // r14
  unsigned int v19; // r15d
  _DWORD *v20; // rcx
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  int v23; // r15d
  unsigned __int64 v24; // rdx
  char v25; // cl
  bool IsUserVaAccessAllowed; // bl
  __int64 v27; // r8
  __int64 SharedReadyQueue; // rcx
  char v29; // r10
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  __int64 v32; // r13
  int v33; // ebx
  char v34; // r10
  __int64 v35; // rsi
  int v36; // edi
  __int64 v37; // r8
  int v38; // r9d
  unsigned int v39; // ecx
  unsigned int v40; // r14d
  _QWORD **v41; // r12
  _QWORD *v42; // r11
  _QWORD *v43; // rdx
  bool v44; // cl
  bool v45; // zf
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  _LIST_ENTRY **p_Flink; // rax
  char v49; // al
  unsigned int ReadySummary; // r15d
  int v51; // r15d
  _LIST_ENTRY *DispatcherReadyListHead; // r14
  unsigned int QueueIndex; // edi
  unsigned int v54; // r15d
  int v55; // r8d
  unsigned int v56; // ecx
  int v57; // r13d
  _LIST_ENTRY *v58; // r10
  _LIST_ENTRY *Flink; // r11
  __int64 p_Blink; // rcx
  bool v61; // dl
  _QWORD *v62; // r15
  unsigned int v63; // r13d
  __int64 v64; // rcx
  _DWORD *v65; // rcx
  _DWORD *v66; // rcx
  char v67; // al
  _DWORD *v68; // rcx
  _DWORD *v69; // rcx
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  _QWORD *v72; // rdi
  _LIST_ENTRY *v73; // r8
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  struct _KPRCB *v76; // r15
  _DWORD *v77; // rcx
  __int64 v78; // rdx
  int v79; // r14d
  _LIST_ENTRY **v80; // rdi
  __int64 v81; // rdx
  struct _KPRCB *v82; // r13
  _DWORD *v83; // rcx
  int v84; // r13d
  _DWORD *v85; // rcx
  _DWORD *v86; // rcx
  _DWORD *v87; // rcx
  _DWORD *v88; // rcx
  struct _KPRCB *v89; // rcx
  _DWORD *v90; // rdx
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int GuestSchedulerAssistPriority; // eax
  int v103; // eax
  int v104; // eax
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  _DWORD *v115; // rcx
  int v116; // eax
  _DWORD *v117; // rcx
  int v118; // eax
  int v119; // eax
  _DWORD *v120; // rcx
  int v121; // eax
  _DWORD *v122; // rcx
  int v123; // eax
  char IsThreadRankNonZero; // al
  char v125; // cl
  __int64 v126; // rdx
  char v127; // al
  char v128; // dl
  _BYTE *v129; // rcx
  __int64 v130; // rdx
  _KTHREAD *IdleThread; // rax
  struct _KPRCB *v132; // rsi
  __int64 v133; // rdx
  _SINGLE_LIST_ENTRY v134; // [rsp+20h] [rbp-79h] BYREF
  __int64 v135; // [rsp+28h] [rbp-71h]
  _LIST_ENTRY *v136; // [rsp+30h] [rbp-69h]
  int v137; // [rsp+38h] [rbp-61h] BYREF
  int v138; // [rsp+3Ch] [rbp-5Dh] BYREF
  _DWORD v139[2]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v140; // [rsp+48h] [rbp-51h]
  int v141; // [rsp+50h] [rbp-49h] BYREF
  _QWORD *v142; // [rsp+58h] [rbp-41h]
  unsigned int v143; // [rsp+60h] [rbp-39h]
  int v144; // [rsp+64h] [rbp-35h]
  _DWORD v145[2]; // [rsp+68h] [rbp-31h] BYREF
  int v146; // [rsp+70h] [rbp-29h] BYREF
  int v147; // [rsp+74h] [rbp-25h] BYREF
  int v148; // [rsp+78h] [rbp-21h] BYREF
  ULONG_PTR v149; // [rsp+80h] [rbp-19h]
  struct _KPRCB *v150; // [rsp+88h] [rbp-11h]
  _LIST_ENTRY **v151; // [rsp+90h] [rbp-9h] BYREF
  _QWORD *v152; // [rsp+98h] [rbp-1h] BYREF
  _SINGLE_LIST_ENTRY v153; // [rsp+A0h] [rbp+7h] BYREF
  _SINGLE_LIST_ENTRY v154; // [rsp+A8h] [rbp+Fh] BYREF
  char v155; // [rsp+100h] [rbp+67h]
  char v156; // [rsp+100h] [rbp+67h]
  struct _KPRCB *v157; // [rsp+108h] [rbp+6Fh]
  int v158; // [rsp+108h] [rbp+6Fh]
  int v159; // [rsp+108h] [rbp+6Fh]
  char v160; // [rsp+108h] [rbp+6Fh]
  char v161; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY *v162; // [rsp+110h] [rbp+77h]
  int v163; // [rsp+110h] [rbp+77h]
  struct _KPRCB *v164; // [rsp+110h] [rbp+77h]
  unsigned int v165; // [rsp+110h] [rbp+77h]
  _LIST_ENTRY **v166; // [rsp+110h] [rbp+77h]
  _QWORD *v167; // [rsp+118h] [rbp+7Fh]
  int v168; // [rsp+118h] [rbp+7Fh]
  int v169; // [rsp+118h] [rbp+7Fh]

  CurrentPrcb = KeGetCurrentPrcb();
  LODWORD(v3) = 0;
  v4 = 0;
  v134.Next = 0LL;
  v155 = 0;
  v150 = CurrentPrcb;
  CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
  v149 = CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    v6 = *(_QWORD *)(CurrentThread + 72);
    if ( v6 >= *(_QWORD *)(CurrentThread + 32) || *(_BYTE *)(CurrentThread + 125) )
    {
      v15 = KeGetCurrentPrcb();
      v137 = 0;
      SchedulerAssist = v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v91 = SchedulerAssist[6];
          SchedulerAssist[6] = v91 + 1;
          if ( v91 == -1 )
LABEL_154:
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentThread + 64), 0LL) )
      {
        v87 = v15->SchedulerAssist;
        if ( v87 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v92 = v87[6] - 1;
            v87[6] = v92;
            if ( !v92 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
        do
          KeYieldProcessorEx(&v137);
        while ( *(_QWORD *)(CurrentThread + 64) );
        v88 = v15->SchedulerAssist;
        if ( v88 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v93 = v88[6];
            v88[6] = v93 + 1;
            if ( v93 == -1 )
              goto LABEL_154;
          }
        }
      }
      if ( v6 >= *(_QWORD *)(CurrentThread + 32) )
      {
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x100) != 0 && *(char *)(CurrentThread + 195) >= 16 )
        {
          v23 = 127;
        }
        else
        {
          LOBYTE(a2) = 1;
          v17 = KiComputeNewPriority(CurrentThread, a2);
          v18 = KeGetCurrentPrcb();
          v19 = v17;
          v138 = 0;
          v20 = v18->SchedulerAssist;
          if ( v20 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v94 = v20[6];
              v20[6] = v94 + 1;
              if ( v94 == -1 )
LABEL_165:
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          {
            v68 = v18->SchedulerAssist;
            if ( v68 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v95 = v68[6] - 1;
                v68[6] = v95;
                if ( !v95 )
                  KiRemoveSystemWorkPriorityKick(v18);
              }
            }
            do
              KeYieldProcessorEx(&v138);
            while ( CurrentPrcb->PrcbLock );
            v69 = v18->SchedulerAssist;
            if ( v69 )
            {
              if ( v18->NestingLevel <= 1u )
              {
                v96 = v69[6];
                v69[6] = v96 + 1;
                if ( v96 == -1 )
                  goto LABEL_165;
              }
            }
          }
          if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(CurrentThread) )
            KiUpdateThreadPriority(
              (__int64)CurrentPrcb,
              CurrentThread,
              (_SINGLE_LIST_ENTRY *)v19,
              CurrentPrcb->NextThread == 0LL);
          _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          if ( v22 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v97 = v22[6] - 1;
              v22[6] = v97;
              if ( !v97 )
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          v23 = *(unsigned __int8 *)(CurrentThread + 651);
          v4 = 1;
          v155 = 1;
          KiTryScheduleNextForegroundBoost(CurrentThread);
        }
        v24 = v6 + (unsigned int)(v23 * KiCyclesPerClockQuantum);
        if ( (*(_DWORD *)(CurrentThread + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 5u);
        *(_QWORD *)(CurrentThread + 32) = v24;
        if ( CurrentPrcb->GroupSetMember != CurrentPrcb->CoreProcessorSet
          && !_bittestandreset((signed __int32 *)(CurrentThread + 116), 7u)
          && (CurrentPrcb->CoreProcessorSet & (CurrentPrcb->GroupSetMember | CurrentPrcb->ParentNode->IdleCpuSet)) != CurrentPrcb->CoreProcessorSet )
        {
          v64 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(CurrentThread + 588)] + 192);
          if ( (*(_QWORD *)(v64 + 8) & *(_QWORD *)(v64 + 80) & *(_QWORD *)(CurrentThread + 576)) != 0LL )
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
  v144 = MEMORY[0xFFFFF78000000320];
  if ( !v11 )
    goto LABEL_5;
  v8 = 1;
  if ( !(unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb) )
    goto LABEL_5;
  SharedReadyQueue = (__int64)CurrentPrcb->SharedReadyQueue;
  v135 = SharedReadyQueue;
  if ( (*(_DWORD *)(SharedReadyQueue + 8) & 0x7FFE) == 0 )
    goto LABEL_5;
  v29 = *(_BYTE *)(SharedReadyQueue + 594);
  v30 = KeGetCurrentPrcb();
  v151 = v3;
  v161 = v29;
  v157 = v30;
  v31 = v30->SchedulerAssist;
  v139[0] = (_DWORD)v3;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v98 = v31[6];
      v31[6] = v98 + 1;
      if ( v98 == -1 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  v32 = v135;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0LL) )
  {
    v85 = v157->SchedulerAssist;
    if ( v85 )
    {
      if ( v157->NestingLevel <= 1u )
      {
        v99 = v85[6] - 1;
        v85[6] = v99;
        if ( !v99 )
          KiRemoveSystemWorkPriorityKick(v157);
      }
    }
    do
      KeYieldProcessorEx(v139);
    while ( *(_QWORD *)v32 );
    v86 = v157->SchedulerAssist;
    if ( v86 )
    {
      if ( v157->NestingLevel <= 1u )
      {
        v100 = v86[6];
        v86[6] = v100 + 1;
        if ( v100 == -1 )
          KiRemoveSystemWorkPriorityKick(v157);
      }
    }
  }
  if ( (*(_DWORD *)(v32 + 8) & 0x7FFE) != 0 )
  {
    v33 = 10;
    v34 = v161;
    v35 = v32 + 16;
    v36 = 16;
    LODWORD(v37) = __ROR4__(*(_DWORD *)(v32 + 8) & 0x7FFE, v161);
    v38 = MEMORY[0xFFFFF78000000320] - 300;
    v158 = MEMORY[0xFFFFF78000000320] - 300;
    do
    {
      _BitScanForward(&v39, v37);
      v139[1] = v39;
      LODWORD(v140) = v37 ^ (1 << v39);
      v40 = ((_BYTE)v39 + v34) & 0x1F;
      v143 = v40;
      v41 = (_QWORD **)(v35 + 16LL * (((_BYTE)v39 + v34) & 0x1F));
      v42 = *v41;
      do
      {
        v43 = v42 - 27;
        v44 = 0;
        v45 = (*(_DWORD *)(v42 - 12) & 0x400000) == 0;
        v42 = (_QWORD *)*v42;
        v142 = v42;
        v167 = v43;
        if ( !v45 )
        {
          GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v43);
          v43 = v167;
          v42 = v142;
          v38 = v158;
          if ( GuestSchedulerAssistPriority >= 16 )
            GuestSchedulerAssistPriority = 15;
          v44 = GuestSchedulerAssistPriority != *((_DWORD *)v167 + 256);
        }
        v168 = v38 - *((_DWORD *)v43 + 109);
        if ( v168 > 0 || v44 )
        {
          KiRemoveThreadFromSharedReadyQueue(v32, v43, v40);
          KiInsertDeferredReadyList((__int64)&v151, v78);
          v38 = v158;
          if ( v168 > 0 )
            --v33;
        }
        --v36;
      }
      while ( v42 != v41 && v33 && v36 );
      v37 = (unsigned int)v140;
      v35 = v32 + 16;
      v169 = v33;
      LODWORD(v142) = v36;
      if ( !(_DWORD)v140 )
        break;
      if ( !v33 )
        break;
      v34 = v161;
    }
    while ( v36 );
    _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
    v46 = KeGetCurrentPrcb();
    v7 = 10;
    CurrentPrcb = v150;
    v4 = v155;
    v47 = v46->SchedulerAssist;
    v10 = 16;
    if ( v47 )
    {
      if ( v46->NestingLevel <= 1u )
      {
        v103 = v47[6] - 1;
        v47[6] = v103;
        if ( !v103 )
          KiRemoveSystemWorkPriorityKick(v46);
      }
    }
    p_Flink = v151;
    if ( v151 )
    {
      v79 = v158;
      do
      {
        v80 = p_Flink - 27;
        v160 = 0;
        v81 = (__int64)*(p_Flink - 18);
        v82 = KeGetCurrentPrcb();
        v166 = p_Flink - 27;
        v136 = *p_Flink;
        v83 = v82->SchedulerAssist;
        v140 = v81;
        v150 = v82;
        v141 = 0;
        if ( v83 )
        {
          if ( v82->NestingLevel <= 1u )
          {
            v104 = v83[6];
            v83[6] = v104 + 1;
            if ( v104 == -1 )
LABEL_195:
              KiRemoveSystemWorkPriorityKick(v82);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v80 + 16, 0LL) )
        {
          v105 = v82->SchedulerAssist;
          if ( v105 )
          {
            if ( v82->NestingLevel <= 1u )
            {
              v106 = v105[6] - 1;
              v105[6] = v106;
              if ( !v106 )
                KiRemoveSystemWorkPriorityKick(v82);
            }
          }
          do
            KeYieldProcessorEx(&v141);
          while ( v166[8] );
          v82 = v150;
          v80 = v166;
          v107 = v150->SchedulerAssist;
          if ( v107 )
          {
            if ( v150->NestingLevel <= 1u )
            {
              v108 = v107[6];
              v107[6] = v108 + 1;
              if ( v108 == -1 )
                goto LABEL_195;
            }
          }
        }
        v84 = *((char *)v80 + 195);
        if ( v79 - *((_DWORD *)v80 + 109) > 0 && v84 < 15 )
        {
          LOBYTE(v37) = 15;
          v160 = 1;
          KiSetPriorityBoost(0LL, v80, v37, v140);
        }
        KiReleaseThreadLockSafe(v80);
        if ( v160 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
          EtwTraceAntiStarvationBoost(v80, (unsigned int)v84);
        v80[27] = 0LL;
        v153.Next = (struct _SINGLE_LIST_ENTRY *)(v80 + 27);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v153);
        p_Flink = &v136->Flink;
      }
      while ( v136 );
      v4 = v155;
      v32 = v135;
      v36 = (int)v142;
    }
    if ( !v36 || !v169 )
    {
      v49 = v143 + 1;
      if ( v143 + 1 <= 0xE )
        goto LABEL_74;
    }
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)v32, 0LL);
    v89 = KeGetCurrentPrcb();
    v90 = v89->SchedulerAssist;
    if ( v90 )
    {
      if ( v89->NestingLevel <= 1u )
      {
        v101 = v90[6] - 1;
        v90[6] = v101;
        if ( !v101 )
          KiRemoveSystemWorkPriorityKick(v89);
      }
    }
  }
  v49 = 1;
LABEL_74:
  CurrentThread = v149;
  LODWORD(v3) = 0;
  *(_BYTE *)(v32 + 594) = v49;
  v9 = v144;
LABEL_5:
  if ( KiGroupSchedulingEnabled )
  {
    KiGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread, v4, &v134);
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    v145[0] = (_DWORD)v3;
    v13 = v12->SchedulerAssist;
    if ( v13 )
    {
      if ( v12->NestingLevel <= 1u )
      {
        v109 = v13[6];
        v13[6] = v109 + 1;
        if ( v109 == -1 )
LABEL_207:
          KiRemoveSystemWorkPriorityKick(v12);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v65 = v12->SchedulerAssist;
      if ( v65 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v110 = v65[6] - 1;
          v65[6] = v110;
          if ( !v110 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      do
        KeYieldProcessorEx(v145);
      while ( CurrentPrcb->PrcbLock );
      v66 = v12->SchedulerAssist;
      if ( v66 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v111 = v66[6];
          v66[6] = v111 + 1;
          if ( v111 == -1 )
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
  v51 = ReadySummary & 0x7FFE;
  if ( !v51 )
    goto LABEL_10;
  DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  QueueIndex = CurrentPrcb->QueueIndex;
  v152 = 0LL;
  v54 = __ROR4__(v51, QueueIndex);
  v55 = MEMORY[0xFFFFF78000000320] - 300;
  v159 = MEMORY[0xFFFFF78000000320] - 300;
  do
  {
    _BitScanForward(&v56, v54);
    v54 ^= 1 << v56;
    v145[1] = v56;
    v57 = ((_BYTE)v56 + (_BYTE)QueueIndex) & 0x1F;
    v58 = &DispatcherReadyListHead[((_BYTE)v56 + (_BYTE)QueueIndex) & 0x1F];
    v136 = v58;
    Flink = v58->Flink;
    do
    {
      p_Blink = (__int64)&Flink[-14].Blink;
      v61 = 0;
      v45 = ((__int64)Flink[-6].Flink & 0x400000) == 0;
      Flink = Flink->Flink;
      v162 = Flink;
      v135 = p_Blink;
      if ( !v45 )
      {
        v112 = KiReadGuestSchedulerAssistPriority(p_Blink);
        p_Blink = v135;
        v58 = v136;
        Flink = v162;
        if ( v112 >= 16 )
          v112 = 15;
        v55 = v159;
        v61 = v112 != *(_DWORD *)(v135 + 1024);
      }
      v163 = v55 - *(_DWORD *)(p_Blink + 436);
      if ( v163 > 0 || v61 )
      {
        KiRemoveThreadFromReadyQueue(CurrentPrcb);
        KiInsertDeferredReadyList((__int64)&v152, v135);
        v55 = v159;
        if ( v163 > 0 )
          --v7;
      }
      --v10;
    }
    while ( Flink != v58 && v7 && v10 );
    DispatcherReadyListHead = CurrentPrcb->DispatcherReadyListHead;
  }
  while ( v54 && v7 && v10 );
  v62 = v152;
  CurrentThread = v149;
  v4 = v155;
  if ( v152 )
  {
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v70 = KeGetCurrentPrcb();
    v71 = v70->SchedulerAssist;
    if ( v71 )
    {
      if ( v70->NestingLevel <= 1u )
      {
        v113 = v71[6] - 1;
        v71[6] = v113;
        if ( !v113 )
          KiRemoveSystemWorkPriorityKick(v70);
      }
    }
    do
    {
      v72 = v62 - 27;
      v156 = 0;
      v73 = (_LIST_ENTRY *)*(v62 - 18);
      v74 = KeGetCurrentPrcb();
      v62 = (_QWORD *)*v62;
      v136 = v73;
      v164 = v74;
      v75 = v74->SchedulerAssist;
      v146 = 0;
      if ( v75 )
      {
        if ( v74->NestingLevel <= 1u )
        {
          v114 = v75[6];
          v75[6] = v114 + 1;
          if ( v114 == -1 )
            KiRemoveSystemWorkPriorityKick(v74);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v72 + 16, 0LL) )
      {
        v115 = v164->SchedulerAssist;
        if ( v115 )
        {
          if ( v164->NestingLevel <= 1u )
          {
            v116 = v115[6] - 1;
            v115[6] = v116;
            if ( !v116 )
              KiRemoveSystemWorkPriorityKick(v164);
          }
        }
        do
          KeYieldProcessorEx(&v146);
        while ( v72[8] );
        v117 = v164->SchedulerAssist;
        if ( v117 )
        {
          if ( v164->NestingLevel <= 1u )
          {
            v118 = v117[6];
            v117[6] = v118 + 1;
            if ( v118 == -1 )
              KiRemoveSystemWorkPriorityKick(v164);
          }
        }
      }
      v165 = *((char *)v72 + 195);
      if ( v159 - *((_DWORD *)v72 + 109) > 0 && *((char *)v72 + 195) < 15 )
      {
        LOBYTE(v73) = 15;
        v156 = 1;
        KiSetPriorityBoost(0LL, v72, v73, v136);
      }
      KiReleaseThreadLockSafe(v72);
      if ( v156 && (BYTE8(PerfGlobalGroupMask) & 1) != 0 )
        EtwTraceAntiStarvationBoost(v72, v165);
      v154.Next = (struct _SINGLE_LIST_ENTRY *)(v72 + 27);
      v72[27] = 0LL;
      KiReadyDeferredReadyList((__int64)CurrentPrcb, &v154);
    }
    while ( v62 );
    v76 = KeGetCurrentPrcb();
    v147 = 0;
    CurrentThread = v149;
    v77 = v76->SchedulerAssist;
    if ( v77 )
    {
      if ( v76->NestingLevel <= 1u )
      {
        v119 = v77[6];
        v77[6] = v119 + 1;
        if ( v119 == -1 )
LABEL_234:
          KiRemoveSystemWorkPriorityKick(v76);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v120 = v76->SchedulerAssist;
      if ( v120 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v121 = v120[6] - 1;
          v120[6] = v121;
          if ( !v121 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
      do
        KeYieldProcessorEx(&v147);
      while ( CurrentPrcb->PrcbLock );
      v122 = v76->SchedulerAssist;
      if ( v122 )
      {
        if ( v76->NestingLevel <= 1u )
        {
          v123 = v122[6];
          v122[6] = v123 + 1;
          if ( v123 == -1 )
            goto LABEL_234;
        }
      }
    }
  }
  if ( v10 && v7 || (v63 = v57 + 1, v63 > 0xE) )
    v63 = 1;
  CurrentPrcb->QueueIndex = v63;
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
    if ( !v4 || (NextThread = KiSelectReadyThread(*(char *)(CurrentThread + 195), (__int64)CurrentPrcb)) == 0 )
    {
      if ( (*(_DWORD *)(CurrentThread + 120) & 0x1000) == 0 )
        goto LABEL_13;
      if ( (_KTHREAD *)CurrentThread == CurrentPrcb->IdleThread )
      {
        _interlockedbittestandreset((volatile signed __int32 *)(CurrentThread + 120), 0xCu);
        goto LABEL_13;
      }
      KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v134);
      NextThread = (__int64)CurrentPrcb->NextThread;
      goto LABEL_50;
    }
LABEL_51:
    if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && !(unsigned int)KiCheckThreadAffinity(NextThread) )
    {
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(CurrentThread, CurrentPrcb), v125 = 1, !IsThreadRankNonZero) )
      {
        v125 = *(_BYTE *)(CurrentThread + 195);
      }
      *CurrentPrcb->PriorityState = v125;
      if ( CurrentPrcb->SchedulerAssist )
      {
        v126 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
          v126 = (unsigned int)v125;
        KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v126, 0LL);
      }
      if ( CurrentPrcb->NextThread == (_KTHREAD *)NextThread )
        KiSelectNextThread((__int64)CurrentPrcb, (__int64)&v134);
      KiInsertDeferredReadyList((__int64)&v134, NextThread);
      NextThread = 0LL;
    }
LABEL_13:
    if ( !v134.Next )
      break;
    if ( NextThread
      && (_KTHREAD *)NextThread != CurrentPrcb->IdleThread
      && CurrentPrcb->NextThread != (_KTHREAD *)NextThread )
    {
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (v127 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v128 = 1, !v127) )
      {
        v128 = *(_BYTE *)(NextThread + 195);
      }
      *CurrentPrcb->PriorityState = v128;
      v129 = CurrentPrcb->SchedulerAssist;
      if ( v129 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v130 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v130 = (unsigned int)v128;
        KiSetSchedulerAssistPriority(v129, v130, 0LL);
        v129 = CurrentPrcb->SchedulerAssist;
      }
      IdleThread = CurrentPrcb->IdleThread;
      CurrentPrcb->NextThread = (_KTHREAD *)NextThread;
      if ( v129 )
        v129[16] = NextThread == (_QWORD)IdleThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 3;
    }
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    KiReadyDeferredReadyList((__int64)CurrentPrcb, &v134);
    v132 = KeGetCurrentPrcb();
    v148 = 0;
    v134.Next = 0LL;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v132, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v132, 0);
      do
        KeYieldProcessorEx(&v148);
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
    if ( (*(_BYTE *)(NextThread + 2) & 4) == 0 || (v67 = KiIsThreadRankNonZero(NextThread, CurrentPrcb), v25 = 1, !v67) )
      v25 = *(_BYTE *)(NextThread + 195);
    *CurrentPrcb->PriorityState = v25;
    if ( CurrentPrcb->SchedulerAssist )
    {
      v133 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread )
        v133 = (unsigned int)v25;
      KiSetSchedulerAssistPriority(CurrentPrcb->SchedulerAssist, v133, 0LL);
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
    LOBYTE(v27) = 1;
    KiSwapContext(CurrentThread, NextThread, v27);
    if ( !IsUserVaAccessAllowed )
    {
      if ( KeSmapEnabled )
        __asm { clac }
    }
  }
}
