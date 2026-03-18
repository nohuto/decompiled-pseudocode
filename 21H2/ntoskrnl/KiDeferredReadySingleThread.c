/*
 * XREFs of KiDeferredReadySingleThread @ 0x1403405E0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiInswapAndReadyThread @ 0x140211410 (KiInswapAndReadyThread.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiFastReadyThread @ 0x140294574 (KiFastReadyThread.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     KiSearchForNewThread @ 0x140343DC0 (KiSearchForNewThread.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiAbDeferredProcessingWorker @ 0x140359020 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KiSetThreadSchedulingGroup @ 0x14035EE9C (KiSetThreadSchedulingGroup.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KiProcessPendingForegroundBoosts @ 0x14039EE50 (KiProcessPendingForegroundBoosts.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x1405777C0 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x14020E67C (KiTryToAcquireThreadLock.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAbProcessThreadPriorityModification @ 0x140229CA0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14023BD18 (KiCheckForMaxOverQuotaScb.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140290FCC (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiGetThreadScb @ 0x140291E74 (KiGetThreadScb.c)
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402EC3E4 (KiSetBasePriorityAndClearDecrement.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiChooseTargetProcessor @ 0x1403419B0 (KiChooseTargetProcessor.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403424A0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiSetLockOwnershipQuantum @ 0x140342710 (KiSetLockOwnershipQuantum.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 *     KeAddGroupAffinityEx @ 0x14035C3E0 (KeAddGroupAffinityEx.c)
 *     KiScheduleNextForegroundBoost @ 0x14039F200 (KiScheduleNextForegroundBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiHeteroChooseTargetProcessor @ 0x14045AFC6 (KiHeteroChooseTargetProcessor.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiIsThreadRankBiased @ 0x14045B83A (KiIsThreadRankBiased.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 *     KiComputePriorityFloor @ 0x140573A80 (KiComputePriorityFloor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140577654 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 *     EtwTraceXSchedulerPriorityKickSend @ 0x14062E848 (EtwTraceXSchedulerPriorityKickSend.c)
 *     EtwTraceXSchedulerPriorityUpdate @ 0x14062E8B8 (EtwTraceXSchedulerPriorityUpdate.c)
 */

void __fastcall KiDeferredReadySingleThread(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // r9
  bool v5; // zf
  __int64 v7; // r13
  char v8; // r15
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  char v11; // r14
  char v12; // al
  __int64 p_DpcData; // r8
  unsigned int v14; // eax
  char v15; // bl
  int v16; // edx
  PVOID *v17; // r8
  char v18; // r9
  int v19; // edx
  int v20; // ecx
  int v21; // esi
  bool v22; // bl
  unsigned int v23; // r12d
  bool v24; // r15
  char v25; // bl
  unsigned __int16 *v26; // r8
  unsigned int v27; // r10d
  unsigned __int16 v28; // r9
  unsigned __int64 *v29; // r11
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  __int64 ThreadScb; // r14
  __int64 v34; // rsi
  _BYTE *v35; // r12
  ULONG_PTR v36; // r15
  ULONG_PTR *v37; // r12
  ULONG_PTR v38; // rbx
  char v39; // al
  char v40; // cl
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  _WORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  struct _KPRCB *v49; // r15
  _QWORD *v50; // rbx
  _QWORD *v51; // rax
  _QWORD *v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // ebx
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  __int64 v57; // rax
  ULONG_PTR *v58; // r8
  char *v59; // r13
  __int64 *v60; // r15
  char v61; // bl
  char v62; // r14
  char v63; // al
  char v64; // al
  __int64 v65; // rcx
  __int64 v66; // r10
  _BYTE *v67; // r10
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // esi
  char v72; // r14
  __int64 v73; // rbx
  __int64 v74; // r15
  __int64 v75; // r13
  int v76; // esi
  struct _KPRCB *v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned int v80; // r15d
  int v81; // r14d
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  __int64 v84; // rbx
  char v85; // al
  __int64 v86; // r12
  int *v87; // rax
  __int64 v88; // r15
  _BYTE *v89; // rcx
  __int64 *v90; // rsi
  char v91; // bl
  char v92; // r14
  char v93; // al
  char v94; // al
  __int64 v95; // rcx
  ULONG_PTR v96; // r10
  _BYTE *v97; // r10
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned int v101; // r14d
  int v102; // esi
  struct _KPRCB *v103; // rcx
  _DWORD *v104; // rdx
  __int64 v105; // rbx
  char v106; // al
  __int64 v107; // r12
  int *v108; // rax
  char v109; // al
  unsigned __int64 v110; // rcx
  char v111; // si
  unsigned __int8 v112; // dl
  char v113; // cl
  unsigned int v114; // eax
  struct _KDPC *v115; // rcx
  char v116; // al
  char v117; // cl
  _BYTE *v118; // rdx
  char v119; // r14
  char v120; // bl
  char v121; // al
  char v122; // al
  __int64 v123; // rcx
  ULONG_PTR v124; // r10
  _BYTE *v125; // r10
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned int v128; // esi
  unsigned int v129; // ebx
  __int16 v130; // dx
  unsigned __int64 v131; // rcx
  struct _KPRCB *v132; // r14
  __int64 v133; // rsi
  char v134; // al
  char v135; // dl
  char v136; // al
  char v137; // cl
  char v138; // r10
  struct _KDPC *v139; // rcx
  _QWORD *v140; // rcx
  _QWORD *v141; // rdx
  _QWORD *v142; // rax
  int v143; // eax
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // r8
  __int64 v147; // r9
  char v148; // dl
  char v149; // cl
  unsigned int v150; // r14d
  char v151; // si
  __int64 v152; // r8
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rdx
  __int64 v160; // rdx
  int v161; // edx
  __int64 v162; // r13
  int v163; // edx
  __int64 v164; // r15
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  PVOID *v168; // rdx
  __int64 v169; // rax
  _DWORD *v170; // rcx
  _DWORD *v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rdx
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // edx
  int v179; // ebx
  ULONG_PTR v180; // rcx
  char v181; // al
  ULONG_PTR v182; // rcx
  char v183; // al
  char v184; // al
  int v185; // r14d
  unsigned int v186; // esi
  _QWORD *v187; // rdx
  __int64 v188; // rbx
  __int64 v190; // r9
  struct _KPRCB *v191; // r14
  __int64 v192; // rdx
  __int64 v193; // r8
  __int64 v194; // r9
  char v195; // al
  __int64 v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rdx
  unsigned int v199; // edx
  char v200; // al
  int v201; // eax
  int v202; // ecx
  int v203; // eax
  __int64 v204; // rcx
  __int64 v205; // rbx
  __int64 v206; // r8
  __int64 v207; // rdx
  unsigned int v208; // edx
  char v209; // al
  __int64 v210; // rdx
  unsigned int v211; // edx
  char v212; // al
  int v213; // eax
  int v214; // ecx
  int v215; // eax
  __int64 v216; // rcx
  __int64 v217; // rbx
  __int64 v218; // r9
  bool v219; // bl
  _QWORD *v220; // rax
  _QWORD *v221; // rdx
  int v222; // eax
  unsigned int v223; // [rsp+30h] [rbp-59h]
  __int128 v224; // [rsp+38h] [rbp-51h] BYREF
  char v225; // [rsp+48h] [rbp-41h] BYREF
  char v226[7]; // [rsp+49h] [rbp-40h] BYREF
  ULONG_PTR *v227; // [rsp+50h] [rbp-39h]
  __int64 v228; // [rsp+58h] [rbp-31h]
  __int64 v229; // [rsp+60h] [rbp-29h] BYREF
  int v230; // [rsp+68h] [rbp-21h] BYREF
  int v231; // [rsp+6Ch] [rbp-1Dh]
  int v232; // [rsp+70h] [rbp-19h] BYREF
  int v233; // [rsp+74h] [rbp-15h]
  int v234; // [rsp+78h] [rbp-11h] BYREF
  int v235; // [rsp+7Ch] [rbp-Dh] BYREF
  int v236; // [rsp+80h] [rbp-9h] BYREF
  __int64 v237; // [rsp+88h] [rbp-1h] BYREF
  __int128 v238; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int8 v240; // [rsp+F8h] [rbp+6Fh]
  __int64 *v241; // [rsp+F8h] [rbp+6Fh]
  _BYTE *v242; // [rsp+F8h] [rbp+6Fh]
  _BYTE *v243; // [rsp+F8h] [rbp+6Fh]
  bool v245; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0LL;
  v5 = *(_BYTE *)(a2 + 566) == 1;
  v229 = 0LL;
  v7 = a1;
  LODWORD(v227) = 0;
  v238 = 0LL;
  v224 = 0LL;
  if ( v5 )
    v8 = *(_BYTE *)(a2 + 567);
  else
    v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v230 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v174 = SchedulerAssist[6];
      SchedulerAssist[6] = v174 + 1;
      if ( v174 == -1 )
LABEL_286:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v170 = CurrentPrcb->SchedulerAssist;
    if ( v170 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v175 = v170[6] - 1;
        v170[6] = v175;
        if ( !v175 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v230, a2, a3, v4);
    while ( *(_QWORD *)(a2 + 64) );
    v171 = CurrentPrcb->SchedulerAssist;
    if ( v171 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v176 = v171[6];
        v171[6] = v176 + 1;
        if ( v176 == -1 )
          goto LABEL_286;
      }
    }
  }
  v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
  v237 = 0LL;
  if ( v5 )
  {
    v11 = 0;
    goto LABEL_7;
  }
  _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x100000u);
  v177 = KiReadGuestSchedulerAssistPriority(a2, &v237);
  v178 = *(_DWORD *)(a2 + 1024);
  v179 = v177;
  if ( v177 != v178 )
  {
    v180 = (char)v177 + a2;
    v181 = *(_BYTE *)(v180 + 824);
    if ( v181 == -1 )
      KeBugCheckEx(0x157u, a2, (char)v179, 1uLL, 0LL);
    *(_BYTE *)(v180 + 824) = v181 + 1;
    *(_DWORD *)(a2 + 856) |= 1 << v179;
    if ( v178 != 32 )
    {
      v182 = (char)v178 + a2;
      v183 = *(_BYTE *)(v182 + 824);
      if ( !v183 )
        KeBugCheckEx(0x157u, a2, (char)v178, 2uLL, 0LL);
      v184 = v183 - 1;
      *(_BYTE *)(v182 + 824) = v184;
      if ( !v184 )
        *(_DWORD *)(a2 + 856) ^= 1 << v178;
    }
    *(_DWORD *)(a2 + 1024) = v179;
  }
  v185 = *(char *)(a2 + 195);
  v186 = (char)KiComputePriorityFloor(a2, (unsigned __int8)v179);
  if ( (*(_BYTE *)(a2 + 564) & 0xF0) != 0 )
  {
    if ( (int)v186 <= v185 )
      goto LABEL_307;
    goto LABEL_306;
  }
  if ( v186 != v185 )
  {
LABEL_306:
    KiSetBasePriorityAndClearDecrement(a2, 0LL, 0);
    KiUpdateThreadPriority(0LL, a2, (PVOID *)v186, 0);
  }
LABEL_307:
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFEFFFFF);
  if ( v185 != v186 && (BYTE4(xmmword_140D06910) & 0x20) != 0 )
    EtwTraceXSchedulerPriorityUpdate(a2, v185, v179, v186, (__int64)&v237);
  v11 = 1;
LABEL_7:
  v12 = *(_BYTE *)(a2 + 566);
  p_DpcData = 1LL;
  if ( !v12 )
  {
    if ( v3 < *(_QWORD *)(a2 + 32) )
    {
      LODWORD(v227) = *(unsigned __int8 *)(a2 + 565);
      goto LABEL_24;
    }
    v109 = KiComputeNewPriority(a2, 1, 1);
    if ( !v11 )
      KiUpdateThreadPriority(0LL, a2, (PVOID *)(unsigned int)v109, 0);
    KiTryScheduleNextForegroundBoost();
    goto LABEL_129;
  }
  if ( *(char *)(a2 + 195) >= 16 )
  {
    v22 = 1;
    goto LABEL_22;
  }
  v14 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
  if ( v3 >= *(_QWORD *)(a2 + 32) )
  {
    v15 = 4;
    if ( v14 < 2 )
      v15 = 5;
  }
  else
  {
    v15 = 0;
    if ( *(char *)(a2 + 563) < 14 && (v14 < 2 || *(_BYTE *)(a2 + 564)) )
      goto LABEL_12;
  }
  v111 = *(_BYTE *)(a2 + 195);
  v15 |= 8u;
  if ( v111 < 16 )
  {
    if ( (KiVelocityFlags & 0x8000) != 0
      && *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1850LL) == 2
      && (p_DpcData = *(unsigned __int8 *)(a2 + 564),
          v135 = p_DpcData & 0xF,
          (p_DpcData & 0xF) != 0 && (*(_DWORD *)(a2 + 120) & 8) == 0) )
    {
      v136 = v135 + *(_BYTE *)(a2 + 563);
      *(_BYTE *)(a2 + 564) = v135;
      v137 = v111 - ((unsigned __int8)p_DpcData >> 4) - 1;
      v111 = v136;
      if ( v137 >= v136 )
        v111 = v137;
    }
    else
    {
      v112 = *(_BYTE *)(a2 + 564);
      v113 = *(_BYTE *)(a2 + 563);
      if ( (char)(v111 - (v112 >> 4) - (v112 & 0xF) - 1) >= v113 )
        v113 = v111 - (*(_BYTE *)(a2 + 564) >> 4) - (*(_BYTE *)(a2 + 564) & 0xF) - 1;
      v111 = v113;
      if ( v112 )
      {
        if ( (v112 & 0xF) != 0 )
          *(_DWORD *)(a2 + 872) = MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(a2 + 564) = 0;
      }
    }
  }
  v114 = *(_DWORD *)(a2 + 856);
  v231 = 0;
  if ( v114 )
  {
    _BitScanReverse((unsigned int *)&p_DpcData, v114);
    if ( v111 < (int)p_DpcData )
      v111 = p_DpcData;
    v231 = p_DpcData;
  }
  if ( !v11 )
  {
    v115 = (struct _KDPC *)KeGetCurrentPrcb();
    if ( v111 > *(char *)(a2 + 195) )
    {
      if ( *(_BYTE *)(a2 + 793) )
      {
        v187 = (_QWORD *)(a2 + 808);
        if ( *(_QWORD *)(a2 + 808) == 1LL )
        {
          p_DpcData = (__int64)&v115[557].DpcData;
          if ( v115 != (struct _KDPC *)-35704LL )
          {
            *v187 = *(_QWORD *)p_DpcData;
            *(_QWORD *)p_DpcData = v187;
            _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
            KiAbQueueAutoBoostDpc(v115);
          }
        }
      }
    }
    v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
    *(_BYTE *)(a2 + 195) = v111;
    if ( !v5 )
    {
      LOBYTE(p_DpcData) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)v111, p_DpcData);
    }
  }
LABEL_12:
  if ( *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1850LL) == 2 )
    v15 |= 2u;
  v16 = *(_DWORD *)(a2 + 120);
  if ( ((unsigned __int8)~v15 & ((v16 & 8) == 0)) == 0 )
    goto LABEL_194;
  v17 = (PVOID *)(unsigned int)*(char *)(a2 + 195);
  if ( *(char *)(a2 + 195) <= 0 )
    goto LABEL_194;
  v18 = *(_BYTE *)(a2 + 564);
  if ( v18 )
  {
    if ( (v18 & 0xF0) == 0 && (v15 & 2) != 0 )
    {
      v19 = *(char *)(a2 + 563);
      v20 = v19 + v8;
      v21 = v20;
      goto LABEL_170;
    }
LABEL_194:
    if ( (KiVelocityFlags & 0x8000) == 0 && (v15 & 6) == 6 && (v16 & 8) == 0 && *(char *)(a2 + 195) > 0 )
      KiScheduleNextForegroundBoost(a2);
    goto LABEL_21;
  }
  v19 = *(char *)(a2 + 563);
  v20 = v19 + v8;
  v21 = v20;
  if ( (v15 & 2) != 0 )
LABEL_170:
    v21 += (char)PsPrioritySeparation;
  if ( v21 >= 16 )
    v21 = 15;
  if ( v21 > (int)v17 )
  {
    v138 = 0;
    if ( v21 > v20 )
      v138 = v21 - v19 - v8;
    *(_BYTE *)(a2 + 564) = v18 ^ (v138 ^ v18) & 0xF;
    v139 = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (char)v21 > (char)v17 )
    {
      if ( *(_BYTE *)(a2 + 793) )
      {
        v168 = (PVOID *)(a2 + 808);
        if ( *(_QWORD *)(a2 + 808) == 1LL )
        {
          v17 = &v139[557].DpcData;
          if ( v139 != (struct _KDPC *)-35704LL )
          {
            *v168 = *v17;
            *v17 = v168;
            _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
            KiAbQueueAutoBoostDpc(v139);
          }
        }
      }
    }
    v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
    *(_BYTE *)(a2 + 195) = v21;
    if ( !v5 )
    {
      LOBYTE(v17) = 1;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)(char)v21, v17);
    }
  }
LABEL_21:
  v12 = *(_BYTE *)(a2 + 566);
  LODWORD(p_DpcData) = 1;
  v22 = (v15 & 8) != 0;
LABEL_22:
  if ( v12 != 2 )
    goto LABEL_23;
  v148 = *(_BYTE *)(a2 + 195);
  if ( v148 > 0 )
  {
    v149 = *(_BYTE *)(a2 + 567);
    if ( v148 < v149 && v148 < 13 && (*(_DWORD *)(a2 + 120) & 8) == 0 )
    {
      v150 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
      v151 = 13;
      if ( v149 < 13 )
        v151 = *(_BYTE *)(a2 + 567);
      *(_BYTE *)(a2 + 564) += 16 * (v151 - v148);
      KiAbProcessThreadPriorityModification(a2, v151, p_DpcData);
      v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
      *(_BYTE *)(a2 + 195) = v151;
      if ( !v5 )
      {
        LOBYTE(v152) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)v151, v152);
      }
      KiSetLockOwnershipQuantum(a2, v3, v150);
LABEL_23:
      if ( !v22 )
        goto LABEL_24;
      goto LABEL_129;
    }
  }
  if ( !v22 )
  {
    KiSetLockOwnershipQuantum(a2, v3, *(unsigned int *)((char *)&Mm64BitPhysicalAddress + 5));
    goto LABEL_24;
  }
LABEL_129:
  v110 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a2 + 651);
  if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
  *(_QWORD *)(a2 + 32) = v110;
LABEL_24:
  v5 = *(_DWORD *)(a2 + 484) == 0;
  v23 = *(_DWORD *)(a2 + 588);
  v223 = v23;
  *(_WORD *)(a2 + 565) = 0;
  v24 = !v5 || *(_BYTE *)(a2 + 390) == 1;
  v25 = 0;
  v240 = _bittestandreset((signed __int32 *)(a2 + 116), 1u);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 )
    KiComputeThreadAffinity(a2);
  v224 = 0LL;
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 )
  {
    v188 = *(unsigned int *)(a2 + 536);
    LODWORD(v188) = v188 & 0x7FFFFFFF;
    v34 = KiProcessorBlock[v188];
    if ( !KiCheckPrcbAffinityEx(*(_WORD **)(a2 + 576), v34) )
    {
      LODWORD(v188) = KeFindFirstSetLeftAffinityEx(v190);
      v34 = KiProcessorBlock[(unsigned int)v188];
    }
    v191 = KeGetCurrentPrcb();
    v232 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v191, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v34 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v191, 0);
      do
        KeYieldProcessorEx(&v232, v192, v193, v194);
      while ( *(_QWORD *)(v34 + 48) );
    }
    v195 = ~*(_BYTE *)(v34 + 35);
    *(_QWORD *)&v224 = v34;
    DWORD2(v224) = v195 & 1;
    *(_DWORD *)(a2 + 536) = v188;
    ThreadScb = KiGetThreadScb(a2, v34, 0LL);
    v229 = ThreadScb;
    goto LABEL_49;
  }
  v26 = *(unsigned __int16 **)(a2 + 576);
  v27 = 0;
  v28 = *v26;
  if ( !*v26 )
    goto LABEL_161;
  v29 = (unsigned __int64 *)(v26 + 4);
  v30 = *v26;
  do
  {
    v31 = *v29++;
    v27 += (unsigned int)((0x101010101010101LL
                         * ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                           + ((((v31 - ((v31 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                             + (((v31 - ((v31 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
    --v30;
  }
  while ( v30 );
  v7 = a1;
  v25 = 0;
  if ( v27 > 1 )
  {
    if ( *(_BYTE *)(a2 + 125) )
    {
      v196 = *(unsigned __int16 *)(a2 + 584);
      v238 = 0LL;
      WORD4(v238) = v196;
      if ( (unsigned __int16)v196 >= v28 )
        v197 = 0LL;
      else
        v197 = *(_QWORD *)&v26[4 * v196 + 4];
      *(_QWORD *)&v238 = v197;
      KiHeteroChooseTargetProcessor(v197, a2, &v238, &v224);
    }
    else
    {
      if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(a2, a1) )
        v25 = !v24;
      KiChooseTargetProcessor(a1, a2, *(_QWORD *)(a2 + 576), (unsigned int)&v224, v25);
    }
  }
  else
  {
LABEL_161:
    v233 = 0;
    v130 = v28 - 1;
    if ( (__int16)(v28 - 1) < 0 )
    {
LABEL_331:
      LODWORD(v131) = -1;
    }
    else
    {
      while ( 1 )
      {
        v131 = *(_QWORD *)&v26[4 * v130 + 4];
        if ( v131 )
          break;
        if ( --v130 < 0 )
          goto LABEL_331;
      }
      _BitScanReverse64(&v131, v131);
      v233 = v131;
      LODWORD(v131) = KiProcessorNumberToIndexMappingTable[(unsigned int)(v131 + (v130 << 6))];
    }
    v132 = KeGetCurrentPrcb();
    v133 = KiProcessorBlock[(unsigned int)v131];
    v234 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v132, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v133 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v132, 0);
      do
        KeYieldProcessorEx(&v234, v165, v166, v167);
      while ( *(_QWORD *)(v133 + 48) );
    }
    v134 = ~*(_BYTE *)(v133 + 35);
    *(_QWORD *)&v224 = v133;
    DWORD2(v224) = v134 & 1;
  }
  v228 = v224;
  *(_DWORD *)(a2 + 536) = *(_DWORD *)(v224 + 36);
  ThreadScb = *(_QWORD *)(a2 + 104);
  v34 = v224;
  if ( ThreadScb )
    ThreadScb += *(unsigned int *)(v224 + 216);
  v229 = ThreadScb;
  if ( ThreadScb && KiCheckForMaxOverQuotaScb(ThreadScb) && !v24 )
  {
LABEL_49:
    v41 = ThreadScb;
    if ( !v240 )
    {
      ThreadScb = v229;
      v34 = v224;
      *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    }
    if ( !ThreadScb )
    {
      v41 = *(_QWORD *)(a2 + 104);
      v34 = v224;
      if ( v41 )
        v41 += *(unsigned int *)(v224 + 216);
    }
    v42 = *(_QWORD *)(v34 + 35000);
    if ( v42 )
      *(_BYTE *)(v42 + 16) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v245 = 0;
    if ( v41
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v41, v32, 1, &v245) )
    {
      KiAddThreadToScbQueue(v34, v41, a2, (int)v227);
LABEL_70:
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      v54 = *(_DWORD *)(a2 + 588);
      *(_QWORD *)(a2 + 64) = 0LL;
      v55 = KeGetCurrentPrcb();
      v56 = v55->SchedulerAssist;
      if ( v56 && v55->NestingLevel <= 1u )
      {
        v222 = v56[6] - 1;
        v56[6] = v222;
        if ( !v222 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
      if ( (xmmword_140D06910 & 0x8000000) == 0 )
        return;
      v218 = v54;
      v206 = v23;
LABEL_359:
      EtwTraceIdealProcessor(a2, 1350LL, v206, v218);
      return;
    }
    v43 = *(char *)(a2 + 195);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
      v34 = v224;
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        v219 = 0;
        if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v220 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v221 = (_QWORD *)qword_140C2BA28;
            v219 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C2BA28 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_412;
            *v220 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v221;
            *v221 = v220;
            qword_140C2BA28 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v219 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    v44 = *(_QWORD *)(v34 + 34880);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
      || !v44
      || ((v45 = *(_WORD **)(a2 + 576), v46 = *(unsigned __int8 *)(v34 + 208), (unsigned __int16)v46 >= *v45)
        ? (v47 = 0LL)
        : (v47 = *(_QWORD *)&v45[4 * v46 + 4]),
          (v44 & v47) != v44 || v245) )
    {
      v140 = (_QWORD *)(a2 + 216);
      v141 = (_QWORD *)(v34 + 16 * (v43 + 2036));
      if ( (_DWORD)v227 )
      {
        v169 = *v141;
        if ( *(_QWORD **)(*v141 + 8LL) != v141 )
          goto LABEL_412;
        *v140 = v169;
        *(_QWORD *)(a2 + 224) = v141;
        *(_QWORD *)(v169 + 8) = v140;
        *v141 = v140;
        _bittestandset((signed __int32 *)(v34 + 32476), v43);
      }
      else
      {
        v142 = (_QWORD *)v141[1];
        if ( (_QWORD *)*v142 != v141 )
          goto LABEL_412;
        *v140 = v141;
        *(_QWORD *)(a2 + 224) = v142;
        *v142 = v140;
        v141[1] = v140;
      }
      v143 = *(_DWORD *)(v34 + 32472);
      ++*(_DWORD *)(v34 + 33140);
      *(_DWORD *)(v34 + 32472) = v143 | (1 << v43);
      v144 = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1648) = v144;
      *(_QWORD *)(v34 + 33144) += v144;
      goto LABEL_70;
    }
    v48 = *(_QWORD *)(v34 + 34888);
    v49 = KeGetCurrentPrcb();
    v50 = (_QWORD *)(v48 + 16 * (v43 + 1));
    v236 = 0;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)v49, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)v49, 0);
      do
        KeYieldProcessorEx(&v236, v153, v154, v155);
      while ( *(_QWORD *)v48 );
    }
    v51 = (_QWORD *)(a2 + 216);
    if ( (_DWORD)v227 )
    {
      v158 = *v50;
      if ( *(_QWORD **)(*v50 + 8LL) == v50 )
      {
        *v51 = v158;
        *(_QWORD *)(a2 + 224) = v50;
        *(_QWORD *)(v158 + 8) = v51;
        *v50 = v51;
        _bittestandreset((signed __int32 *)(v224 + 32476), v43);
        goto LABEL_69;
      }
    }
    else
    {
      v52 = (_QWORD *)v50[1];
      if ( (_QWORD *)*v52 == v50 )
      {
        *v51 = v50;
        *(_QWORD *)(a2 + 224) = v52;
        *v52 = v51;
        v50[1] = v51;
LABEL_69:
        *(_DWORD *)(v48 + 8) |= 1 << v43;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++*(_DWORD *)(v48 + 672);
        v53 = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1648) = v53;
        *(_QWORD *)(v48 + 680) += v53;
        _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
        KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
        v34 = v224;
        goto LABEL_70;
      }
    }
LABEL_412:
    __fastfail(3u);
  }
  v35 = (_BYTE *)(v34 + 35);
  if ( ((*(_BYTE *)(v34 + 35) & 1) == 0) != DWORD2(v224) )
LABEL_417:
    __fastfail(0x21u);
  if ( !DWORD2(v224) )
  {
    if ( v25 )
    {
LABEL_48:
      v23 = v223;
      goto LABEL_49;
    }
    v36 = *(_QWORD *)(v34 + 16);
    v37 = (ULONG_PTR *)(v34 + 16);
    if ( !v36 )
    {
      v38 = *(_QWORD *)(v34 + 8);
      if ( v38 == a2 )
      {
        KiUpdateVPBackingThreadPriority(a2, v34, 0);
      }
      else
      {
        v5 = (*(_DWORD *)(v38 + 120) & 0x400000) == 0;
        v226[0] = 0;
        if ( !v5 && KiTryToAcquireThreadLock(v38, v226) )
        {
          if ( (*(_DWORD *)(v38 + 120) & 0x400000) != 0 )
            KiUpdateVPBackingThreadPriority(v38, v34, 0);
          KiReleaseThreadLockSafe(v38);
        }
      }
      if ( !KiGroupSchedulingEnabled )
      {
        v39 = *(_BYTE *)(a2 + 195);
        v40 = *(_BYTE *)(v38 + 195);
        if ( HIDWORD(v224) )
        {
          if ( v39 < v40 )
            goto LABEL_48;
        }
        else if ( v39 <= v40 )
        {
          goto LABEL_48;
        }
LABEL_104:
        if ( *(_BYTE *)(v38 + 388) == 2 )
          *(_BYTE *)(v38 + 565) = 1;
        v88 = v224;
        v89 = *(_BYTE **)(v224 + 56);
        v90 = (__int64 *)(v224 + 56);
        v5 = v240 == 0;
        v227 = (ULONG_PTR *)(v224 + 56);
        v242 = v89;
        v91 = *v89;
        if ( v5 )
          v92 = 125;
        else
          v92 = 127;
        if ( (*(_BYTE *)(a2 + 2) & 4) == 0 )
        {
          v93 = *(_BYTE *)(a2 + 195) ^ v91;
          goto LABEL_110;
        }
        if ( *(char *)(a2 + 195) < 16 )
        {
          if ( *(_QWORD *)(a2 + 104) && (v159 = *(_QWORD *)(a2 + 104)) != 0 )
          {
            v88 = v224;
            v160 = *(unsigned int *)(v224 + 216) + v159;
            if ( v160 && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v160, v32, 0, 0LL) )
            {
              v93 = v91 ^ 1;
              v89 = v242;
LABEL_110:
              v94 = (v93 & 0x7F ^ v91) & 0x7F | (*(_BYTE *)(a2 + 119) << 7);
              *v89 = v94;
              v95 = *(_QWORD *)(v88 + 35000);
              if ( v95 )
              {
                if ( a2 == *(_QWORD *)(v88 + 24) )
                  v210 = (unsigned int)KiVpThreadSystemWorkPriority;
                else
                  v210 = v94 & 0x7F;
                KiSetSchedulerAssistPriority(v95, v210, 0LL);
                v96 = *v227;
              }
              else
              {
                v96 = *v90;
              }
              v97 = (_BYTE *)(v96 + 64);
              if ( KeHeteroSystem )
              {
                v211 = *(_DWORD *)(a2 + 80);
                if ( v211 <= *(_DWORD *)(a2 + 84) )
                  v211 = *(_DWORD *)(a2 + 84);
                v212 = 64;
                if ( v211 < KiDynamicHeteroCpuPolicyExpectedCycles )
                  v212 = 0;
                *v97 = v212 | *v97 & 0x80 | *(_BYTE *)(a2 + 512) & 7 | (8 * (*(_BYTE *)(a2 + 516) & 7)) & 0xBF;
              }
              v98 = *(_QWORD *)(v88 + 35000);
              v99 = *(_QWORD *)(v88 + 24);
              *v37 = a2;
              if ( v98 )
                *(_BYTE *)(v98 + 16) = a2 == v99;
              if ( *(_BYTE *)(a2 + 388) == 1 || (v92 & 2) != 0 )
                *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
              v100 = v224;
              *(_BYTE *)(a2 + 388) = 3;
              _InterlockedAnd64((volatile signed __int64 *)(v100 + 48), 0LL);
              KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
              v101 = *(_DWORD *)(a2 + 588);
              v102 = *(char *)(a2 + 195);
              *(_QWORD *)(a2 + 64) = 0LL;
              v103 = KeGetCurrentPrcb();
              v104 = v103->SchedulerAssist;
              if ( v104 )
              {
                if ( v103->NestingLevel <= 1u )
                {
                  v213 = v104[6] - 1;
                  v104[6] = v213;
                  if ( !v213 )
                    KiRemoveSystemWorkPriorityKick(v103);
                }
              }
              v105 = v224;
              if ( v7 == (_QWORD)v224 )
                goto LABEL_123;
              v106 = *(_BYTE *)(v7 + 12761);
              v107 = v228;
              if ( !v106 )
              {
                *(_BYTE *)(v7 + 12761) = 1;
                *(_DWORD *)(v7 + 12764) = *(_DWORD *)(v107 + 36);
LABEL_121:
                if ( (KiVelocityFlags & 2) != 0 )
                {
                  v108 = *(int **)(v105 + 35000);
                  if ( v108 )
                  {
                    if ( *(_QWORD *)(v7 + 35000) )
                    {
                      v214 = *v108;
                      v215 = *v108 & 0x40000;
                      if ( (v214 & 0x100000) != 0 || v215 && (unsigned __int8)v214 < v102 )
                      {
                        v5 = HvlpVirtualProcessorsIdentityMapped == 0;
                        v216 = *(_QWORD *)(v7 + 35000);
                        *(_DWORD *)(v216 + 12) = 2;
                        v217 = *(unsigned int *)(v107 + 36);
                        if ( v5 )
                          LODWORD(v217) = (unsigned __int8)byte_140D0CBD1[2 * (unsigned int)v217] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v217] << 6);
                        *(_DWORD *)(v216 + 8) = v217;
                        if ( (BYTE4(xmmword_140D06910) & 0x20) != 0 )
                          EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v107 + 36), 2LL);
                        __writemsr(0x400000C2u, (unsigned int)v217);
                      }
                    }
                  }
                }
LABEL_123:
                if ( (xmmword_140D06910 & 0x8000000) == 0 )
                  return;
                v218 = v101;
                goto LABEL_358;
              }
              if ( v106 == 1 )
              {
                v163 = *(_DWORD *)(v7 + 12764);
                if ( v163 == *(_DWORD *)(v228 + 36) )
                  goto LABEL_121;
                v164 = v7 + 12768;
                *(_BYTE *)(v7 + 12761) = 2;
                KeAddProcessorAffinityEx((unsigned __int16 *)(v7 + 12768), v163);
              }
              else
              {
                v164 = v7 + 12768;
              }
              KeAddGroupAffinityEx(v164, *(unsigned __int8 *)(v105 + 208), *(_QWORD *)(v105 + 200));
              goto LABEL_121;
            }
          }
          else
          {
            v88 = v224;
          }
        }
        v93 = *(_BYTE *)(a2 + 195) ^ v91;
        v89 = v242;
        goto LABEL_110;
      }
      if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v34, v38, a2, HIDWORD(v224), (__int64)&v229) )
        goto LABEL_104;
LABEL_193:
      ThreadScb = v229;
      goto LABEL_48;
    }
    v5 = (*(_DWORD *)(v36 + 120) & 0x400000) == 0;
    v225 = 0;
    if ( !v5 && KiTryToAcquireThreadLock(v36, &v225) )
    {
      if ( (*(_DWORD *)(v36 + 120) & 0x400000) != 0 )
        KiUpdateVPBackingThreadPriority(v36, v34, 0);
      KiReleaseThreadLockSafe(v36);
    }
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v34, v36, a2, HIDWORD(v224), (__int64)&v229) )
        goto LABEL_193;
    }
    else
    {
      v116 = *(_BYTE *)(a2 + 195);
      v117 = *(_BYTE *)(v36 + 195);
      if ( HIDWORD(v224) )
      {
        if ( v116 < v117 )
          goto LABEL_48;
      }
      else if ( v116 <= v117 )
      {
        goto LABEL_48;
      }
    }
    *(_BYTE *)(v36 + 565) = 1;
    v118 = *(_BYTE **)(v34 + 56);
    v227 = (ULONG_PTR *)(v34 + 56);
    if ( v240 )
      v119 = 127;
    else
      v119 = 125;
    v228 = v34 + 56;
    v120 = *v118;
    v243 = v118;
    if ( (*(_BYTE *)(a2 + 2) & 4) == 0 )
    {
      v121 = *(_BYTE *)(a2 + 195) ^ v120;
      goto LABEL_152;
    }
    if ( *(char *)(a2 + 195) < 16 )
    {
      if ( *(_QWORD *)(a2 + 104) && (v172 = *(_QWORD *)(a2 + 104)) != 0 )
      {
        v34 = v224;
        v173 = *(unsigned int *)(v224 + 216) + v172;
        if ( v173 && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v173, v32, 0, 0LL) )
        {
          v118 = v243;
          v121 = v120 ^ 1;
LABEL_152:
          v122 = (v121 & 0x7F ^ v120) & 0x7F | (*(_BYTE *)(a2 + 119) << 7);
          *v118 = v122;
          v123 = *(_QWORD *)(v34 + 35000);
          if ( v123 )
          {
            if ( a2 == *(_QWORD *)(v34 + 24) )
              v207 = (unsigned int)KiVpThreadSystemWorkPriority;
            else
              v207 = v122 & 0x7F;
            KiSetSchedulerAssistPriority(v123, v207, 0LL);
            v124 = *(_QWORD *)v228;
          }
          else
          {
            v124 = *v227;
          }
          v125 = (_BYTE *)(v124 + 64);
          if ( KeHeteroSystem )
          {
            v208 = *(_DWORD *)(a2 + 80);
            if ( v208 <= *(_DWORD *)(a2 + 84) )
              v208 = *(_DWORD *)(a2 + 84);
            v209 = 64;
            if ( v208 < KiDynamicHeteroCpuPolicyExpectedCycles )
              v209 = 0;
            *v125 = v209 | *v125 & 0x80 | *(_BYTE *)(a2 + 512) & 7 | (8 * (*(_BYTE *)(a2 + 516) & 7)) & 0xBF;
          }
          v126 = *(_QWORD *)(v34 + 35000);
          v127 = *(_QWORD *)(v34 + 24);
          *v37 = a2;
          if ( v126 )
            *(_BYTE *)(v126 + 16) = a2 == v127;
          if ( *(_BYTE *)(a2 + 388) == 1 || (v119 & 2) != 0 )
            *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(a2 + 388) = 3;
          KiInsertDeferredReadyList(a3, v36);
          _InterlockedAnd64((volatile signed __int64 *)(v224 + 48), 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          v128 = *(_DWORD *)(a2 + 588);
          v129 = *(char *)(a2 + 195);
          KiReleaseThreadLockSafe(a2);
          KiHvEnlightenedGuestPriorityKick(v7, v224, v129);
          if ( (xmmword_140D06910 & 0x8000000) != 0 )
          {
            v218 = v128;
LABEL_358:
            v206 = v223;
            goto LABEL_359;
          }
          return;
        }
      }
      else
      {
        v34 = v224;
      }
    }
    v118 = v243;
    v121 = *(_BYTE *)(a2 + 195) ^ v120;
    goto LABEL_152;
  }
  v57 = *(_QWORD *)(v34 + 16);
  v58 = (ULONG_PTR *)(v34 + 16);
  v227 = (ULONG_PTR *)(v34 + 16);
  if ( v57 && v57 != *(_QWORD *)(v34 + 24) )
    __fastfail(0x1Eu);
  v59 = *(char **)(v34 + 56);
  v60 = (__int64 *)(v34 + 56);
  v5 = v240 == 0;
  v241 = (__int64 *)(v34 + 56);
  v61 = *v59;
  if ( v5 )
    v62 = 125;
  else
    v62 = 127;
  if ( (*(_BYTE *)(a2 + 2) & 4) == 0 )
  {
    v63 = *(_BYTE *)(a2 + 195) ^ v61;
    goto LABEL_78;
  }
  if ( *(char *)(a2 + 195) >= 16 )
    goto LABEL_218;
  if ( !*(_QWORD *)(a2 + 104) || (v156 = *(_QWORD *)(a2 + 104)) == 0 )
  {
    v34 = v224;
LABEL_218:
    v58 = v227;
    v63 = v61 ^ *(_BYTE *)(a2 + 195);
    goto LABEL_78;
  }
  v34 = v224;
  v157 = *(unsigned int *)(v224 + 216) + v156;
  if ( !v157 || !(unsigned int)KiGetThreadEffectiveRankNonZero(a2, v157, (__int64)v58, 0, 0LL) )
    goto LABEL_218;
  v58 = v227;
  v63 = v61 ^ 1;
LABEL_78:
  v64 = (v63 & 0x7F ^ v61) & 0x7F | (*(_BYTE *)(a2 + 119) << 7);
  *v59 = v64;
  v65 = *(_QWORD *)(v34 + 35000);
  if ( v65 )
  {
    if ( a2 == *(_QWORD *)(v34 + 24) )
      v198 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v198 = v64 & 0x7F;
    KiSetSchedulerAssistPriority(v65, v198, 0LL);
    v58 = v227;
    v66 = *v241;
  }
  else
  {
    v66 = *v60;
  }
  v67 = (_BYTE *)(v66 + 64);
  if ( KeHeteroSystem )
  {
    v199 = *(_DWORD *)(a2 + 80);
    if ( v199 <= *(_DWORD *)(a2 + 84) )
      v199 = *(_DWORD *)(a2 + 84);
    v200 = 64;
    if ( v199 < KiDynamicHeteroCpuPolicyExpectedCycles )
      v200 = 0;
    *v67 = v200 | *v67 & 0x80 | *(_BYTE *)(a2 + 512) & 7 | (8 * (*(_BYTE *)(a2 + 516) & 7)) & 0xBF;
  }
  v68 = *(_QWORD *)(v34 + 35000);
  v69 = *(_QWORD *)(v34 + 24);
  *v58 = a2;
  if ( v68 )
    *(_BYTE *)(v68 + 16) = a2 == v69;
  if ( *(_BYTE *)(a2 + 388) == 1 || (v62 & 2) != 0 )
    *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
  v70 = v224;
  *(_BYTE *)(a2 + 388) = 3;
  v71 = (unsigned __int8)*v35;
  v72 = *(_BYTE *)(v70 + 209);
  v73 = *(_QWORD *)(v70 + 192);
  v74 = *(_QWORD *)(v70 + 34912);
  v75 = 1LL << v72;
  *(_BYTE *)(v70 + 13243) = 0;
  if ( (v71 & 1) != 0 )
    goto LABEL_417;
  v76 = v71 + 1;
  *v35 = v76;
  v77 = KeGetCurrentPrcb();
  v235 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)v77, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)v73, 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)v77, 0);
    do
      KeYieldProcessorEx(&v235, v145, v146, v147);
    while ( *(_QWORD *)v73 );
  }
  if ( v76 == 1 )
    *(_QWORD *)(v73 + 8) &= ~(1LL << v72);
  *(_QWORD *)(v73 + 40) &= ~(1LL << v72);
  *(_QWORD *)(v73 + 16) &= ~v74;
  v78 = ~v74 & *(_QWORD *)(v73 + 24);
  if ( (v74 & ~*(_QWORD *)(v73 + 40)) == v75 )
    v78 |= v75;
  v79 = v224;
  *(_QWORD *)(v73 + 24) = v78;
  *(_QWORD *)(v73 + 32) &= ~*(_QWORD *)(v79 + 34936);
  _InterlockedAnd64((volatile signed __int64 *)v73, 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  _InterlockedAnd64((volatile signed __int64 *)(v224 + 48), 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  v80 = *(_DWORD *)(a2 + 588);
  v81 = *(char *)(a2 + 195);
  *(_QWORD *)(a2 + 64) = 0LL;
  v82 = KeGetCurrentPrcb();
  v83 = v82->SchedulerAssist;
  if ( v83 )
  {
    if ( v82->NestingLevel <= 1u )
    {
      v201 = v83[6] - 1;
      v83[6] = v201;
      if ( !v201 )
        KiRemoveSystemWorkPriorityKick(v82);
    }
  }
  v84 = v224;
  if ( (_QWORD)v224 == a1 || !*(_BYTE *)(v224 + 7) )
  {
    v86 = v228;
  }
  else
  {
    v85 = *(_BYTE *)(a1 + 12761);
    v86 = v228;
    if ( v85 )
    {
      if ( v85 == 1 )
      {
        v161 = *(_DWORD *)(a1 + 12764);
        if ( v161 == *(_DWORD *)(v228 + 36) )
          goto LABEL_97;
        v162 = a1 + 12768;
        *(_BYTE *)(a1 + 12761) = 2;
        KeAddProcessorAffinityEx((unsigned __int16 *)(a1 + 12768), v161);
      }
      else
      {
        v162 = a1 + 12768;
      }
      KeAddGroupAffinityEx(v162, *(unsigned __int8 *)(v84 + 208), *(_QWORD *)(v84 + 200));
      goto LABEL_97;
    }
    *(_BYTE *)(a1 + 12761) = 1;
    *(_DWORD *)(a1 + 12764) = *(_DWORD *)(v86 + 36);
  }
LABEL_97:
  if ( (KiVelocityFlags & 2) != 0 )
  {
    v87 = *(int **)(v84 + 35000);
    if ( v87 )
    {
      if ( *(_QWORD *)(a1 + 35000) )
      {
        if ( a1 != v84 )
        {
          v202 = *v87;
          v203 = *v87 & 0x40000;
          if ( (v202 & 0x100000) != 0 || v203 && (unsigned __int8)v202 < v81 )
          {
            v5 = HvlpVirtualProcessorsIdentityMapped == 0;
            v204 = *(_QWORD *)(a1 + 35000);
            *(_DWORD *)(v204 + 12) = 2;
            v205 = *(unsigned int *)(v86 + 36);
            if ( v5 )
              LODWORD(v205) = (unsigned __int8)byte_140D0CBD1[2 * (unsigned int)v205] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v205] << 6);
            *(_DWORD *)(v204 + 8) = v205;
            if ( (BYTE4(xmmword_140D06910) & 0x20) != 0 )
              EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(v86 + 36), 2LL);
            __writemsr(0x400000C2u, (unsigned int)v205);
          }
        }
      }
    }
  }
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
  {
    v218 = v80;
    goto LABEL_358;
  }
}
