/*
 * XREFs of KiDeferredReadySingleThread @ 0x1402873F0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiReadyThread @ 0x1402813E0 (KiReadyThread.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1402086E0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputePriorityFloor @ 0x1402141A0 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiChooseTargetProcessor @ 0x140288310 (KiChooseTargetProcessor.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402ED278 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402ED780 (KiComputeNewPriority.c)
 *     KiGetThreadScb @ 0x1402EE750 (KiGetThreadScb.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402EE7A0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1402EF6A4 (KiScheduleNextForegroundBoost.c)
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1402EF7AC (KiTryToAcquireThreadLock.c)
 *     KiAddThreadToScbQueue @ 0x1402F0824 (KiAddThreadToScbQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F18F0 (KiAddThreadToPrcbQueue.c)
 *     KiComputeThreadAffinity @ 0x14030BE20 (KiComputeThreadAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403339F0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14034D084 (KiTryToUpdateVPBackingThreadPriority.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051A050 (KiHeteroChooseTargetProcessor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A798 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 *     KiIsThreadRankBiased @ 0x14051E3EC (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
 */

void __fastcall KiDeferredReadySingleThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList, __int64 a4)
{
  unsigned __int64 v4; // rbp
  bool v5; // zf
  ULONG_PTR v6; // rbx
  char v7; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v10; // r14
  char v11; // al
  unsigned __int8 v12; // di
  unsigned int v13; // eax
  _SINGLE_LIST_ENTRY *v14; // r8
  char v15; // r9
  char v16; // dl
  int v17; // r11d
  int v18; // esi
  char v19; // di
  unsigned int v20; // r12d
  bool v21; // r14
  char v22; // bp
  unsigned __int8 v23; // r15
  unsigned __int16 v24; // dx
  unsigned __int64 v25; // rcx
  int v26; // r10d
  __int64 v27; // rsi
  int v28; // r8d
  __int64 v29; // r12
  __int64 ThreadScb; // rdi
  __int64 v31; // rax
  char v32; // di
  char v33; // cl
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // ebp
  int v39; // edi
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // rdx
  struct _KPRCB *v43; // rax
  void (__fastcall *v44)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int *v45; // rax
  char v46; // al
  unsigned __int64 v47; // rcx
  char v48; // si
  unsigned __int8 v49; // cl
  char v50; // dl
  char v51; // si
  unsigned int v52; // eax
  struct _KPRCB *v53; // rcx
  char v54; // dl
  char v55; // cl
  __int64 v56; // r8
  char v57; // si
  int v58; // eax
  struct _KPRCB *v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rbp
  ULONG_PTR v62; // rbp
  char v63; // di
  char v64; // cl
  __int64 v65; // rax
  int v66; // edi
  struct _KPRCB *v67; // rcx
  _DWORD *v68; // rdx
  __int64 v69; // r15
  struct _KPRCB *v70; // rax
  int *v71; // rax
  unsigned __int64 v72; // rcx
  char v73; // cl
  struct _KPRCB *v74; // rcx
  __int64 v75; // r10
  __int64 v76; // rax
  char v77; // cl
  unsigned int v78; // edi
  struct _KPRCB *v79; // rcx
  _DWORD *v80; // rdx
  __int64 v81; // rcx
  char IsThreadRankNonZero; // al
  struct _KPRCB *v83; // rdi
  int v84; // eax
  char v85; // al
  _DWORD *v86; // rcx
  _DWORD *v87; // rcx
  __int64 v88; // r10
  char v89; // r14
  char v90; // cl
  __int64 v91; // rax
  __int64 v92; // rcx
  unsigned int v93; // edi
  struct _SINGLE_LIST_ENTRY *v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r9
  char v98; // al
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int GuestSchedulerAssistPriority; // eax
  int v103; // edx
  int v104; // r10d
  int v105; // r9d
  ULONG_PTR v106; // rcx
  char v107; // al
  ULONG_PTR v108; // rcx
  char v109; // al
  char v110; // al
  unsigned __int8 v111; // cl
  char v112; // al
  int v113; // ecx
  unsigned int v114; // edi
  char v115; // dl
  char v116; // al
  char v117; // cl
  _QWORD *v118; // rdx
  struct _SINGLE_LIST_ENTRY *v119; // rdx
  _SINGLE_LIST_ENTRY *v120; // r9
  __int64 v121; // rdi
  __int64 v122; // r8
  unsigned __int64 v123; // rcx
  struct _KPRCB *v124; // rbp
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rdx
  int v129; // eax
  int v130; // ecx
  int v131; // eax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rdx
  int v136; // eax
  int v137; // ecx
  int v138; // eax
  int v139; // eax
  __int64 v140; // r9
  __int64 v141; // r8
  char v142[4]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v143; // [rsp+34h] [rbp-1B4h]
  char v144[4]; // [rsp+38h] [rbp-1B0h] BYREF
  int v145; // [rsp+3Ch] [rbp-1ACh] BYREF
  __int64 v146; // [rsp+40h] [rbp-1A8h]
  unsigned int v147; // [rsp+48h] [rbp-1A0h]
  __int64 v148; // [rsp+50h] [rbp-198h] BYREF
  __int128 v149; // [rsp+58h] [rbp-190h] BYREF
  int v150; // [rsp+68h] [rbp-180h] BYREF
  int v151; // [rsp+6Ch] [rbp-17Ch]
  int v152; // [rsp+70h] [rbp-178h]
  _DWORD v153[2]; // [rsp+74h] [rbp-174h] BYREF
  int v154; // [rsp+7Ch] [rbp-16Ch] BYREF
  _DWORD v155[2]; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v156[2]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v157; // [rsp+90h] [rbp-158h]
  __int128 v158; // [rsp+98h] [rbp-150h] BYREF
  __int64 v159; // [rsp+A8h] [rbp-140h]
  __int128 v160; // [rsp+B0h] [rbp-138h]
  __int64 v161; // [rsp+C0h] [rbp-128h]
  __int128 v162; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v163; // [rsp+D8h] [rbp-110h]
  _BYTE v164[168]; // [rsp+E0h] [rbp-108h] BYREF
  int v165; // [rsp+1E0h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_BYTE *)(a2 + 566) == 1;
  v157 = p_AbPropagateBoostsList;
  v6 = a2;
  v146 = a1;
  v149 = 0LL;
  v145 = 0;
  v148 = 0LL;
  v147 = 0;
  if ( v5 )
    v7 = *(_BYTE *)(a2 + 567);
  else
    v7 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v150 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v99 = SchedulerAssist[6];
      SchedulerAssist[6] = v99 + 1;
      if ( v99 == -1 )
LABEL_219:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
  {
    v86 = CurrentPrcb->SchedulerAssist;
    if ( v86 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v100 = v86[6] - 1;
        v86[6] = v100;
        if ( !v100 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v150, a2, p_AbPropagateBoostsList, a4);
    while ( *(_QWORD *)(v6 + 64) );
    v87 = CurrentPrcb->SchedulerAssist;
    if ( v87 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v101 = v87[6];
        v87[6] = v101 + 1;
        if ( v101 == -1 )
          goto LABEL_219;
      }
    }
  }
  if ( (*(_DWORD *)(v6 + 120) & 0x400000) == 0 )
  {
    v10 = 0;
    goto LABEL_7;
  }
  _InterlockedOr(*(volatile signed __int32 **)(v6 + 968), 0x100000u);
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v6);
  v103 = GuestSchedulerAssistPriority;
  v104 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v104 = GuestSchedulerAssistPriority;
    v103 = 15;
  }
  v105 = *(_DWORD *)(v6 + 1024);
  if ( v103 != v105 )
  {
    v106 = (char)v103 + v6;
    v107 = *(_BYTE *)(v106 + 824);
    if ( v107 == -1 )
      KeBugCheckEx(0x157u, v6, (char)v103, 1uLL, 0LL);
    *(_BYTE *)(v106 + 824) = v107 + 1;
    *(_DWORD *)(v6 + 856) |= 1 << v103;
    if ( v105 != 32 )
    {
      v108 = (char)v105 + v6;
      v109 = *(_BYTE *)(v108 + 824);
      if ( !v109 )
        KeBugCheckEx(0x157u, v6, (char)v105, 2uLL, 0LL);
      v110 = v109 - 1;
      *(_BYTE *)(v108 + 824) = v110;
      if ( !v110 )
        *(_DWORD *)(v6 + 856) ^= 1 << v105;
    }
    *(_DWORD *)(v6 + 1024) = v103;
  }
  v111 = v104;
  if ( v104 == 32 )
    v111 = v103;
  v112 = KiComputePriorityFloor(v6, v111);
  v113 = *(char *)(v6 + 195);
  v114 = v112;
  if ( (*(_BYTE *)(v6 + 564) & 0xF0) != 0 )
  {
    if ( v112 <= v113 )
      goto LABEL_244;
    goto LABEL_243;
  }
  if ( v112 != v113 )
  {
LABEL_243:
    KiSetBasePriorityAndClearDecrement(v6, 0LL, 0LL);
    KiUpdateThreadPriority(0LL, v6, (_SINGLE_LIST_ENTRY *)v114, 0);
  }
LABEL_244:
  if ( (*(_DWORD *)(v6 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(v6 + 968), 0xFFEFFFFF);
  v10 = 1;
LABEL_7:
  v11 = *(_BYTE *)(v6 + 566);
  if ( !v11 )
  {
    if ( v4 < *(_QWORD *)(v6 + 32) )
    {
      v147 = *(unsigned __int8 *)(v6 + 565);
      goto LABEL_27;
    }
    LOBYTE(a2) = 1;
    v46 = KiComputeNewPriority(v6, a2);
    if ( !v10 )
      KiUpdateThreadPriority(0LL, v6, (_SINGLE_LIST_ENTRY *)(unsigned int)v46, 0);
    KiTryScheduleNextForegroundBoost(v6);
    goto LABEL_72;
  }
  if ( *(char *)(v6 + 195) < 16 )
  {
    v12 = 0;
    v13 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v6 + 436);
    if ( v4 >= *(_QWORD *)(v6 + 32) )
    {
      v12 = 4;
      if ( v13 < 2 )
        v12 = 5;
    }
    if ( v12 >= 4u || *(char *)(v6 + 563) >= 14 || v13 >= 2 && !*(_BYTE *)(v6 + 564) )
    {
      v48 = *(_BYTE *)(v6 + 195);
      v12 |= 8u;
      if ( v48 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(*(_QWORD *)(v6 + 544) + 1850LL) == 2
          && (p_AbPropagateBoostsList = *(unsigned __int8 *)(v6 + 564),
              v115 = p_AbPropagateBoostsList & 0xF,
              (p_AbPropagateBoostsList & 0xF) != 0 && (*(_DWORD *)(v6 + 120) & 8) == 0) )
        {
          v116 = v115 + *(_BYTE *)(v6 + 563);
          *(_BYTE *)(v6 + 564) = v115;
          v117 = v48 - ((unsigned __int8)p_AbPropagateBoostsList >> 4) - 1;
          v48 = v116;
          if ( v117 >= v116 )
            v48 = v117;
        }
        else
        {
          v49 = *(_BYTE *)(v6 + 564);
          v50 = *(_BYTE *)(v6 + 563);
          p_AbPropagateBoostsList = v49;
          v51 = v48 - (v49 >> 4) - (v49 & 0xF) - 1;
          if ( v51 >= v50 )
            v50 = v51;
          v48 = v50;
          if ( v49 )
          {
            if ( (v49 & 0xF) != 0 )
              *(_DWORD *)(v6 + 872) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v6 + 564) = 0;
          }
        }
        v52 = *(_DWORD *)(v6 + 856);
        v151 = 0;
        if ( v52 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v52);
          if ( v48 < (int)p_AbPropagateBoostsList )
            v48 = p_AbPropagateBoostsList;
          v151 = p_AbPropagateBoostsList;
        }
      }
      if ( !v10 )
      {
        v53 = KeGetCurrentPrcb();
        if ( v48 > *(char *)(v6 + 195) )
        {
          if ( *(_BYTE *)(v6 + 793) )
          {
            v118 = (_QWORD *)(v6 + 808);
            if ( *(_QWORD *)(v6 + 808) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v53->AbPropagateBoostsList;
              if ( v53 != (struct _KPRCB *)-34680LL )
              {
                *v118 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v118;
                _InterlockedIncrement16((volatile signed __int16 *)(v6 + 868));
                KiAbQueueAutoBoostDpc(v53);
              }
            }
          }
        }
        v5 = (*(_DWORD *)(v6 + 120) & 0x400000) == 0;
        *(_BYTE *)(v6 + 195) = v48;
        if ( !v5 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v6 + 968), (unsigned int)v48, p_AbPropagateBoostsList);
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 544) + 1850LL) == 2 )
      v12 |= 2u;
    if ( ((unsigned __int8)~v12 & ((*(_DWORD *)(v6 + 120) & 8) == 0)) != 0 )
    {
      v14 = (_SINGLE_LIST_ENTRY *)(unsigned int)*(char *)(v6 + 195);
      if ( *(char *)(v6 + 195) > 0 )
      {
        v15 = *(_BYTE *)(v6 + 564);
        if ( !v15 )
        {
          v16 = v12 >> 1;
LABEL_19:
          v17 = *(char *)(v6 + 563);
          v18 = v17 + v7;
          if ( (v16 & 1) != 0 )
            v18 += (char)PsPrioritySeparation;
          if ( v18 >= 16 )
            v18 = 15;
          if ( v18 > (int)v14 )
          {
            v73 = 0;
            if ( v18 > v17 + v7 )
              v73 = v18 - v17 - v7;
            *(_BYTE *)(v6 + 564) = v15 ^ (v73 ^ v15) & 0xF;
            v74 = KeGetCurrentPrcb();
            if ( (char)v18 > (char)v14 )
            {
              if ( *(_BYTE *)(v6 + 793) )
              {
                v94 = (struct _SINGLE_LIST_ENTRY *)(v6 + 808);
                if ( *(_QWORD *)(v6 + 808) == 1LL )
                {
                  v14 = &v74->AbPropagateBoostsList;
                  if ( v74 != (struct _KPRCB *)-34680LL )
                  {
                    v94->Next = v14->Next;
                    v14->Next = v94;
                    _InterlockedIncrement16((volatile signed __int16 *)(v6 + 868));
                    KiAbQueueAutoBoostDpc(v74);
                  }
                }
              }
            }
            v5 = (*(_DWORD *)(v6 + 120) & 0x400000) == 0;
            *(_BYTE *)(v6 + 195) = v18;
            if ( !v5 )
            {
              LOBYTE(v14) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(v6 + 968), (unsigned int)(char)v18, v14);
            }
          }
LABEL_24:
          v11 = *(_BYTE *)(v6 + 566);
          v19 = v12 >> 3;
          goto LABEL_25;
        }
        if ( (v15 & 0xF0) == 0 )
        {
          v16 = v12 >> 1;
          if ( (v12 & 2) != 0 )
            goto LABEL_19;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag && (v12 & 6) == 6 && (*(_DWORD *)(v6 + 120) & 8) == 0 && *(char *)(v6 + 195) > 0 )
      KiScheduleNextForegroundBoost(v6);
    goto LABEL_24;
  }
  v19 = 1;
LABEL_25:
  if ( v11 != 2 )
    goto LABEL_26;
  v54 = *(_BYTE *)(v6 + 195);
  if ( v54 > 0 )
  {
    v55 = *(_BYTE *)(v6 + 567);
    if ( v54 < v55 && v54 < 13 )
    {
      v56 = *(unsigned int *)(v6 + 120);
      if ( (v56 & 8) == 0 )
      {
        v57 = 13;
        v58 = *(_DWORD *)(v6 + 120);
        if ( v55 < 13 )
          v57 = *(_BYTE *)(v6 + 567);
        *(_BYTE *)(v6 + 564) += 16 * (v57 - v54);
        v59 = KeGetCurrentPrcb();
        if ( v57 > v54 )
        {
          if ( *(_BYTE *)(v6 + 793) )
          {
            v119 = (struct _SINGLE_LIST_ENTRY *)(v6 + 808);
            if ( *(_QWORD *)(v6 + 808) == 1LL )
            {
              v120 = &v59->AbPropagateBoostsList;
              if ( v59 != (struct _KPRCB *)-34680LL )
              {
                v119->Next = v120->Next;
                v120->Next = v119;
                _InterlockedIncrement16((volatile signed __int16 *)(v6 + 868));
                KiAbQueueAutoBoostDpc(v59);
                v58 = *(_DWORD *)(v6 + 120);
              }
            }
          }
        }
        *(_BYTE *)(v6 + 195) = v57;
        if ( (v58 & 0x400000) != 0 )
        {
          LOBYTE(v56) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v6 + 968), (unsigned int)v57, v56);
        }
        v60 = *(_QWORD *)(v6 + 32);
        if ( v4 > v60 || v60 - v4 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(v6 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_26:
        if ( !v19 )
          goto LABEL_27;
        goto LABEL_72;
      }
    }
  }
  if ( v19 )
  {
LABEL_72:
    v47 = v4 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v6 + 651);
    if ( (*(_DWORD *)(v6 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v6 + 120), 5u);
    *(_QWORD *)(v6 + 32) = v47;
    goto LABEL_27;
  }
  v72 = *(_QWORD *)(v6 + 32);
  if ( v4 > v72 || v72 - v4 < (unsigned int)KiLockQuantumTarget )
    *(_QWORD *)(v6 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
  v20 = *(_DWORD *)(v6 + 588);
  v143 = v20;
  *(_WORD *)(v6 + 565) = 0;
  v21 = *(_DWORD *)(v6 + 484) || *(_BYTE *)(v6 + 390) == 1;
  v22 = 0;
  v23 = _bittestandreset((signed __int32 *)(v6 + 116), 1u);
  if ( *(_QWORD *)(v6 + 568) != KiCpuSetSequence && (*(_DWORD *)(v6 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v6);
  v24 = *(_WORD *)(v6 + 584);
  v25 = *(_QWORD *)(v6 + 576);
  WORD4(v149) = v24;
  *(_QWORD *)&v149 = v25;
  if ( KiForceIdleDisabled )
    goto LABEL_34;
  if ( KiForceIdleState != 4 )
  {
    v24 = WORD4(v149);
    v25 = v149;
LABEL_34:
    if ( ((v25 - 1) & v25) != 0 )
    {
      if ( *(_BYTE *)(v6 + 125) )
      {
        v27 = KiHeteroChooseTargetProcessor(v146, v6, &v149, &v145);
      }
      else
      {
        v26 = v146;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v6, v146, 0x140000000uLL) && !v21 )
          v22 = 1;
        v27 = KiChooseTargetProcessor(v26, v6, (unsigned int)&v149, (unsigned int)&v145, v22);
      }
    }
    else
    {
      v83 = KeGetCurrentPrcb();
      _BitScanReverse64(&v25, v25);
      v153[1] = v25;
      v154 = 0;
      v27 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v24 + (unsigned int)v25]];
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v83, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v83, 0);
        do
          KeYieldProcessorEx(&v154, v95, v96, v97);
        while ( *(_QWORD *)(v27 + 48) );
      }
      v84 = v145;
      if ( (*(_BYTE *)(v27 + 35) & 1) == 0 )
        v84 = 1;
      v145 = v84;
    }
    v29 = *(unsigned int *)(v27 + 36);
    *(_DWORD *)(v6 + 536) = v29;
    ThreadScb = *(_QWORD *)(v6 + 104);
    if ( ThreadScb )
      ThreadScb += *(unsigned int *)(v27 + 216);
    v148 = ThreadScb;
    if ( ThreadScb )
    {
      v81 = ThreadScb;
      while ( (*(_BYTE *)(v81 + 112) & 2) == 0 )
      {
        v81 = *(_QWORD *)(v81 + 408);
        if ( !v81 )
          goto LABEL_41;
      }
      if ( !v21 )
        goto LABEL_141;
    }
LABEL_41:
    if ( v145 )
    {
      v31 = *(_QWORD *)(v27 + 16);
      if ( v31 && v31 != *(_QWORD *)(v27 + 24) )
        __fastfail(0x1Eu);
      v32 = 2;
      if ( v23 )
        v32 = 6;
      if ( (*(_BYTE *)(v6 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v6, v27), v33 = 1, !IsThreadRankNonZero) )
      {
        v33 = *(_BYTE *)(v6 + 195);
      }
      **(_BYTE **)(v27 + 56) = v33;
      if ( *(_QWORD *)(v27 + 33976) )
      {
        v128 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v6 != *(_QWORD *)(v27 + 24) )
          v128 = (unsigned int)v33;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v128, 0LL);
      }
      *(_QWORD *)(v27 + 16) = v6;
      v34 = *(_QWORD *)(v27 + 33976);
      if ( v34 )
        *(_BYTE *)(v34 + 16) = v6 == *(_QWORD *)(v27 + 24);
      if ( *(_BYTE *)(v6 + 388) == 1 || (v32 & 4) != 0 )
        *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) - *(_DWORD *)(v6 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v6 + 388) = 3;
      v35 = *(unsigned __int8 *)(v27 + 35);
      v36 = *(_QWORD *)(v27 + 192);
      *(_BYTE *)(v27 + 12587) = 0;
      if ( (v35 & 1) != 0 )
        __fastfail(0x21u);
      v37 = v35 + 1;
      *(_BYTE *)(v27 + 35) = v37;
      if ( v37 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v36, *(unsigned __int8 *)(v27 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v36 + 24), *(unsigned __int8 *)(v27 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 8), ~*(_QWORD *)(v27 + 33880));
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 16), ~*(_QWORD *)(v27 + 33880));
      if ( (*(_QWORD *)(v27 + 33880) & ~*(_QWORD *)(v36 + 24)) == *(_QWORD *)(v27 + 200) )
        _interlockedbittestandset64((volatile signed __int32 *)(v36 + 16), *(unsigned __int8 *)(v27 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      v38 = *(_DWORD *)(v6 + 588);
      v39 = *(char *)(v6 + 195);
      *(_QWORD *)(v6 + 64) = 0LL;
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v129 = v41[6] - 1;
          v41[6] = v129;
          if ( !v129 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      v42 = v146;
      if ( v27 != v146 && *(_BYTE *)(v27 + 7) )
      {
        v43 = KeGetCurrentPrcb();
        v160 = 0LL;
        LODWORD(v160) = 6;
        ++v43->SynchCounters.IpiSendSoftwareInterruptCount;
        v161 = 0LL;
        DWORD2(v160) = v29;
        memset(v164, 0, sizeof(v164));
        v162 = *(_OWORD *)(HalpInterruptTargets + 24 * v29);
        v163 = *(_QWORD *)(HalpInterruptTargets + 24 * v29 + 16);
        v155[0] = -1;
        v155[1] = 1;
        v156[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v156[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v44 = *(void (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v44(*(_QWORD *)(HalpInterruptController + 16), v156, &v162, 47LL, v155);
        if ( (v165 & 0x200) != 0 )
          _enable();
        v42 = v146;
      }
      if ( (KiVelocityFlags & 2) == 0 )
        goto LABEL_65;
      v45 = *(int **)(v27 + 33976);
      if ( !v45 )
        goto LABEL_65;
      if ( !*(_QWORD *)(v42 + 33976) )
        goto LABEL_65;
      if ( v42 == v27 )
        goto LABEL_65;
      if ( v39 < 8 )
        goto LABEL_65;
      v130 = *v45;
      v131 = *v45 & 0x40000;
      if ( (v130 & 0x100000) == 0 && (!v131 || (unsigned __int8)v130 >= v39) )
        goto LABEL_65;
      v5 = HvlpVirtualProcessorsIdentityMapped == 0;
      v132 = *(_QWORD *)(v42 + 33976);
      *(_DWORD *)(v132 + 12) = 2;
      v133 = *(unsigned int *)(v27 + 36);
      if ( !v5 )
      {
LABEL_287:
        *(_DWORD *)(v132 + 8) = v133;
        __writemsr(0x400000C2u, (unsigned int)v133);
LABEL_65:
        if ( (xmmword_140CFC490 & 0x8000000) == 0 )
          return;
        v141 = v143;
        v140 = v38;
LABEL_312:
        EtwTraceIdealProcessor(v6, 1350LL, v141, v140);
        return;
      }
LABEL_286:
      LODWORD(v133) = (unsigned __int8)byte_140D006C1[2 * v133] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v133] << 6);
      goto LABEL_287;
    }
    if ( v22 )
      goto LABEL_141;
    v61 = *(_QWORD *)(v27 + 16);
    if ( !v61 )
    {
      v62 = *(_QWORD *)(v27 + 8);
      if ( v62 == v6 )
      {
        KiUpdateVPBackingThreadPriority(v6);
      }
      else
      {
        v5 = (*(_DWORD *)(v62 + 120) & 0x400000) == 0;
        v144[0] = 0;
        if ( !v5 && (unsigned __int8)KiTryToAcquireThreadLock(v62, v144) )
        {
          if ( (*(_DWORD *)(v62 + 120) & 0x400000) != 0 )
            KiUpdateVPBackingThreadPriority(v62);
          KiReleaseThreadLockSafe(v62);
        }
      }
      if ( !KiGroupSchedulingEnabled )
      {
        if ( *(_BYTE *)(v6 + 195) > *(_BYTE *)(v62 + 195) )
        {
LABEL_105:
          if ( *(_BYTE *)(v62 + 388) == 2 )
            *(_BYTE *)(v62 + 565) = 1;
          v63 = 2;
          if ( v23 )
            v63 = 6;
          if ( (*(_BYTE *)(v6 + 2) & 4) == 0 || (v85 = KiIsThreadRankNonZero(v6, v27), v64 = 1, !v85) )
            v64 = *(_BYTE *)(v6 + 195);
          **(_BYTE **)(v27 + 56) = v64;
          if ( *(_QWORD *)(v27 + 33976) )
          {
            v135 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v6 != *(_QWORD *)(v27 + 24) )
              v135 = (unsigned int)v64;
            KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v135, 0LL);
          }
          *(_QWORD *)(v27 + 16) = v6;
          v65 = *(_QWORD *)(v27 + 33976);
          if ( v65 )
            *(_BYTE *)(v65 + 16) = v6 == *(_QWORD *)(v27 + 24);
          if ( *(_BYTE *)(v6 + 388) == 1 || (v63 & 4) != 0 )
            *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) - *(_DWORD *)(v6 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v6 + 388) = 3;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
          v38 = *(_DWORD *)(v6 + 588);
          v66 = *(char *)(v6 + 195);
          *(_QWORD *)(v6 + 64) = 0LL;
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          if ( v68 )
          {
            if ( v67->NestingLevel <= 1u )
            {
              v136 = v68[6] - 1;
              v68[6] = v136;
              if ( !v136 )
                KiRemoveSystemWorkPriorityKick(v67);
            }
          }
          v69 = v146;
          if ( v146 == v27 )
            goto LABEL_65;
          v70 = KeGetCurrentPrcb();
          v158 = 0LL;
          LODWORD(v158) = 6;
          ++v70->SynchCounters.IpiSendSoftwareInterruptCount;
          v159 = 0LL;
          DWORD2(v158) = v29;
          HalpInterruptSendIpi(&v158, 0x2Fu);
          if ( (KiVelocityFlags & 2) == 0 )
            goto LABEL_65;
          v71 = *(int **)(v27 + 33976);
          if ( !v71 )
            goto LABEL_65;
          if ( !*(_QWORD *)(v69 + 33976) )
            goto LABEL_65;
          if ( v66 < 8 )
            goto LABEL_65;
          v137 = *v71;
          v138 = *v71 & 0x40000;
          if ( (v137 & 0x100000) == 0 && (!v138 || (unsigned __int8)v137 >= v66) )
            goto LABEL_65;
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v132 = *(_QWORD *)(v69 + 33976);
          *(_DWORD *)(v132 + 12) = 2;
          v133 = *(unsigned int *)(v27 + 36);
          if ( !v5 )
            goto LABEL_287;
          goto LABEL_286;
        }
        goto LABEL_141;
      }
      if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v27, v62, v6, &v148) )
        goto LABEL_105;
      goto LABEL_160;
    }
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v27 + 16));
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v27, v61, v6, &v148) )
      {
LABEL_160:
        ThreadScb = v148;
LABEL_141:
        v20 = v143;
        goto LABEL_142;
      }
    }
    else if ( *(_BYTE *)(v6 + 195) <= *(_BYTE *)(v61 + 195) )
    {
      goto LABEL_141;
    }
    *(_BYTE *)(v61 + 565) = 1;
    v89 = 2;
    if ( v23 )
      v89 = 6;
    if ( (*(_BYTE *)(v6 + 2) & 4) == 0 || (v98 = KiIsThreadRankNonZero(v6, v27), v90 = 1, !v98) )
      v90 = *(_BYTE *)(v6 + 195);
    **(_BYTE **)(v27 + 56) = v90;
    if ( *(_QWORD *)(v27 + 33976) )
    {
      v134 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v6 != *(_QWORD *)(v27 + 24) )
        v134 = (unsigned int)v90;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v134, 0LL);
    }
    *(_QWORD *)(v27 + 16) = v6;
    v91 = *(_QWORD *)(v27 + 33976);
    if ( v91 )
      *(_BYTE *)(v91 + 16) = v6 == *(_QWORD *)(v27 + 24);
    if ( *(_BYTE *)(v6 + 388) == 1 || (v89 & 4) != 0 )
      *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) - *(_DWORD *)(v6 + 436) + MEMORY[0xFFFFF78000000320];
    v92 = v157;
    *(_BYTE *)(v6 + 388) = 3;
    KiInsertDeferredReadyList(v92, v61);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    v38 = *(_DWORD *)(v6 + 588);
    v93 = *(char *)(v6 + 195);
    KiReleaseThreadLockSafe(v6);
    KiHvEnlightenedGuestPriorityKick(v146, v27, v93);
    goto LABEL_65;
  }
  v121 = *(unsigned int *)(v6 + 536);
  LODWORD(v121) = v121 & 0x7FFFFFFF;
  v27 = KiProcessorBlock[v121];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v27, &v149) )
  {
    _BitScanReverse64(&v123, v149);
    v152 = v123;
    v121 = *(unsigned int *)(v122 + 4LL * ((unsigned int)v123 + (WORD4(v149) << 6)) + 13640912);
    v27 = *(_QWORD *)(v122 + 8 * v121 + 13622464);
  }
  v124 = KeGetCurrentPrcb();
  v153[0] = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)v124, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)v124, 0);
    do
      KeYieldProcessorEx(v153, v125, v126, v127);
    while ( *(_QWORD *)(v27 + 48) );
  }
  *(_DWORD *)(v6 + 536) = v121;
  ThreadScb = KiGetThreadScb(v6, v27, 0LL);
  v148 = ThreadScb;
LABEL_142:
  v75 = ThreadScb;
  if ( !v23 )
  {
    ThreadScb = v148;
    *(_DWORD *)(v6 + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !ThreadScb )
  {
    v75 = *(_QWORD *)(v6 + 104);
    if ( v75 )
      v75 += *(unsigned int *)(v27 + 216);
  }
  v76 = *(_QWORD *)(v27 + 33976);
  if ( v76 )
    *(_BYTE *)(v76 + 16) = 0;
  v77 = 0;
  *(_BYTE *)(v6 + 388) = 1;
  v142[0] = 0;
  if ( v75 && (*(_DWORD *)(v6 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v6, v75, v28, 0, (__int64)v142) )
    {
      KiAddThreadToScbQueue(v27, v88, v6, v147);
      goto LABEL_151;
    }
    v77 = v142[0];
  }
  KiAddThreadToPrcbQueue(v27, v6, *(char *)(v6 + 195), v147, v77);
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  v78 = *(_DWORD *)(v6 + 588);
  *(_QWORD *)(v6 + 64) = 0LL;
  v79 = KeGetCurrentPrcb();
  v80 = v79->SchedulerAssist;
  if ( v80 )
  {
    if ( v79->NestingLevel <= 1u )
    {
      v139 = v80[6] - 1;
      v80[6] = v139;
      if ( !v139 )
        KiRemoveSystemWorkPriorityKick(v79);
    }
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    v140 = v78;
    v141 = v20;
    goto LABEL_312;
  }
}
