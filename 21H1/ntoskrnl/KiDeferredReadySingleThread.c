/*
 * XREFs of KiDeferredReadySingleThread @ 0x14024AB50
 * Callers:
 *     KiReadyThread @ 0x140244C00 (KiReadyThread.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiChooseTargetProcessor @ 0x14024BA70 (KiChooseTargetProcessor.c)
 *     KiSetVpThreadSpinLockCount @ 0x140261600 (KiSetVpThreadSpinLockCount.c)
 *     KiComputePriorityFloor @ 0x14026D1F0 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14030F9B4 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1403323B8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1403328C0 (KiComputeNewPriority.c)
 *     KiGetThreadScb @ 0x140333890 (KiGetThreadScb.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403338E0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1403347E4 (KiScheduleNextForegroundBoost.c)
 *     KiPrcbInGroupAffinity @ 0x140334898 (KiPrcbInGroupAffinity.c)
 *     KiTryToAcquireThreadLock @ 0x1403348EC (KiTryToAcquireThreadLock.c)
 *     KiAddThreadToScbQueue @ 0x140335964 (KiAddThreadToScbQueue.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140336360 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAddThreadToPrcbQueue @ 0x140336A30 (KiAddThreadToPrcbQueue.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403374C0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiHeteroChooseTargetProcessor @ 0x140519A00 (KiHeteroChooseTargetProcessor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A148 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 *     KiIsThreadRankBiased @ 0x14051DD9C (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(__int64 a1, __int64 a2, __int64 p_AbPropagateBoostsList, __int64 a4)
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
  __int64 result; // rax
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
  unsigned __int64 v71; // rcx
  char v72; // cl
  struct _KPRCB *v73; // rcx
  __int64 v74; // r10
  __int64 v75; // rax
  char v76; // cl
  unsigned int v77; // edi
  struct _KPRCB *v78; // rcx
  _DWORD *v79; // rdx
  __int64 v80; // rcx
  char IsThreadRankNonZero; // al
  struct _KPRCB *v82; // rdi
  int v83; // eax
  char v84; // al
  _DWORD *v85; // rcx
  _DWORD *v86; // rcx
  __int64 v87; // r10
  char v88; // r14
  char v89; // cl
  __int64 v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // edi
  struct _SINGLE_LIST_ENTRY *v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  char v97; // al
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int GuestSchedulerAssistPriority; // eax
  int v102; // edx
  int v103; // r10d
  int v104; // r9d
  ULONG_PTR v105; // rcx
  char v106; // al
  ULONG_PTR v107; // rcx
  char v108; // al
  char v109; // al
  unsigned __int8 v110; // cl
  char v111; // al
  int v112; // ecx
  unsigned int v113; // edi
  char v114; // dl
  char v115; // al
  char v116; // cl
  _QWORD *v117; // rdx
  struct _SINGLE_LIST_ENTRY *v118; // rdx
  _SINGLE_LIST_ENTRY *v119; // r9
  __int64 v120; // rdi
  __int64 v121; // rdx
  __int64 v122; // r8
  unsigned __int64 v123; // rcx
  struct _KPRCB *v124; // rbp
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  int v128; // eax
  int v129; // ecx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rdx
  int v134; // ecx
  __int64 v135; // r9
  __int64 v136; // r8
  char v137[4]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v138; // [rsp+34h] [rbp-1B4h]
  char v139[4]; // [rsp+38h] [rbp-1B0h] BYREF
  int v140; // [rsp+3Ch] [rbp-1ACh] BYREF
  __int64 v141; // [rsp+40h] [rbp-1A8h]
  unsigned int v142; // [rsp+48h] [rbp-1A0h]
  __int64 v143; // [rsp+50h] [rbp-198h] BYREF
  __int128 v144; // [rsp+58h] [rbp-190h] BYREF
  int v145; // [rsp+68h] [rbp-180h] BYREF
  int v146; // [rsp+6Ch] [rbp-17Ch]
  int v147; // [rsp+70h] [rbp-178h]
  _DWORD v148[2]; // [rsp+74h] [rbp-174h] BYREF
  int v149; // [rsp+7Ch] [rbp-16Ch] BYREF
  _DWORD v150[2]; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v151[2]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v152; // [rsp+90h] [rbp-158h]
  __int128 v153; // [rsp+98h] [rbp-150h] BYREF
  __int64 v154; // [rsp+A8h] [rbp-140h]
  __int128 v155; // [rsp+B0h] [rbp-138h]
  __int64 v156; // [rsp+C0h] [rbp-128h]
  __int128 v157; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v158; // [rsp+D8h] [rbp-110h]
  _BYTE v159[168]; // [rsp+E0h] [rbp-108h] BYREF
  int v160; // [rsp+1E0h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_BYTE *)(a2 + 566) == 1;
  v152 = p_AbPropagateBoostsList;
  v6 = a2;
  v141 = a1;
  v144 = 0LL;
  v140 = 0;
  v143 = 0LL;
  v142 = 0;
  if ( v5 )
    v7 = *(_BYTE *)(a2 + 567);
  else
    v7 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v145 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v98 = SchedulerAssist[6];
      SchedulerAssist[6] = v98 + 1;
      if ( v98 == -1 )
LABEL_219:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 64), 0LL) )
  {
    v85 = CurrentPrcb->SchedulerAssist;
    if ( v85 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v99 = v85[6] - 1;
        v85[6] = v99;
        if ( !v99 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v145, a2, p_AbPropagateBoostsList, a4);
    while ( *(_QWORD *)(v6 + 64) );
    v86 = CurrentPrcb->SchedulerAssist;
    if ( v86 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v100 = v86[6];
        v86[6] = v100 + 1;
        if ( v100 == -1 )
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
  v102 = GuestSchedulerAssistPriority;
  v103 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v103 = GuestSchedulerAssistPriority;
    v102 = 15;
  }
  v104 = *(_DWORD *)(v6 + 1024);
  if ( v102 != v104 )
  {
    v105 = (char)v102 + v6;
    v106 = *(_BYTE *)(v105 + 824);
    if ( v106 == -1 )
      KeBugCheckEx(0x157u, v6, (char)v102, 1uLL, 0LL);
    *(_BYTE *)(v105 + 824) = v106 + 1;
    *(_DWORD *)(v6 + 856) |= 1 << v102;
    if ( v104 != 32 )
    {
      v107 = (char)v104 + v6;
      v108 = *(_BYTE *)(v107 + 824);
      if ( !v108 )
        KeBugCheckEx(0x157u, v6, (char)v104, 2uLL, 0LL);
      v109 = v108 - 1;
      *(_BYTE *)(v107 + 824) = v109;
      if ( !v109 )
        *(_DWORD *)(v6 + 856) ^= 1 << v104;
    }
    *(_DWORD *)(v6 + 1024) = v102;
  }
  v110 = v103;
  if ( v103 == 32 )
    v110 = v102;
  v111 = KiComputePriorityFloor(v6, v110);
  v112 = *(char *)(v6 + 195);
  v113 = v111;
  if ( (*(_BYTE *)(v6 + 564) & 0xF0) != 0 )
  {
    if ( v111 <= v112 )
      goto LABEL_244;
    goto LABEL_243;
  }
  if ( v111 != v112 )
  {
LABEL_243:
    KiSetBasePriorityAndClearDecrement(v6, 0LL, 0LL);
    KiUpdateThreadPriority(0LL, v6, v113, 0LL);
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
      v142 = *(unsigned __int8 *)(v6 + 565);
      goto LABEL_27;
    }
    LOBYTE(a2) = 1;
    v46 = KiComputeNewPriority(v6, a2);
    if ( !v10 )
      KiUpdateThreadPriority(0LL, v6, (unsigned int)v46, 0LL);
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
              v114 = p_AbPropagateBoostsList & 0xF,
              (p_AbPropagateBoostsList & 0xF) != 0 && (*(_DWORD *)(v6 + 120) & 8) == 0) )
        {
          v115 = v114 + *(_BYTE *)(v6 + 563);
          *(_BYTE *)(v6 + 564) = v114;
          v116 = v48 - ((unsigned __int8)p_AbPropagateBoostsList >> 4) - 1;
          v48 = v115;
          if ( v116 >= v115 )
            v48 = v116;
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
        v146 = 0;
        if ( v52 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v52);
          if ( v48 < (int)p_AbPropagateBoostsList )
            v48 = p_AbPropagateBoostsList;
          v146 = p_AbPropagateBoostsList;
        }
      }
      if ( !v10 )
      {
        v53 = KeGetCurrentPrcb();
        if ( v48 > *(char *)(v6 + 195) )
        {
          if ( *(_BYTE *)(v6 + 793) )
          {
            v117 = (_QWORD *)(v6 + 808);
            if ( *(_QWORD *)(v6 + 808) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v53->AbPropagateBoostsList;
              if ( v53 != (struct _KPRCB *)-34680LL )
              {
                *v117 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v117;
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
            v72 = 0;
            if ( v18 > v17 + v7 )
              v72 = v18 - v17 - v7;
            *(_BYTE *)(v6 + 564) = v15 ^ (v72 ^ v15) & 0xF;
            v73 = KeGetCurrentPrcb();
            if ( (char)v18 > (char)v14 )
            {
              if ( *(_BYTE *)(v6 + 793) )
              {
                v93 = (struct _SINGLE_LIST_ENTRY *)(v6 + 808);
                if ( *(_QWORD *)(v6 + 808) == 1LL )
                {
                  v14 = &v73->AbPropagateBoostsList;
                  if ( v73 != (struct _KPRCB *)-34680LL )
                  {
                    v93->Next = v14->Next;
                    v14->Next = v93;
                    _InterlockedIncrement16((volatile signed __int16 *)(v6 + 868));
                    KiAbQueueAutoBoostDpc(v73);
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
            v118 = (struct _SINGLE_LIST_ENTRY *)(v6 + 808);
            if ( *(_QWORD *)(v6 + 808) == 1LL )
            {
              v119 = &v59->AbPropagateBoostsList;
              if ( v59 != (struct _KPRCB *)-34680LL )
              {
                v118->Next = v119->Next;
                v119->Next = v118;
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
  v71 = *(_QWORD *)(v6 + 32);
  if ( v4 > v71 || v71 - v4 < (unsigned int)KiLockQuantumTarget )
    *(_QWORD *)(v6 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
  v20 = *(_DWORD *)(v6 + 588);
  v138 = v20;
  *(_WORD *)(v6 + 565) = 0;
  v21 = *(_DWORD *)(v6 + 484) || *(_BYTE *)(v6 + 390) == 1;
  v22 = 0;
  v23 = _bittestandreset((signed __int32 *)(v6 + 116), 1u);
  if ( *(_QWORD *)(v6 + 568) != KiCpuSetSequence && (*(_DWORD *)(v6 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v6);
  v24 = *(_WORD *)(v6 + 584);
  v25 = *(_QWORD *)(v6 + 576);
  WORD4(v144) = v24;
  *(_QWORD *)&v144 = v25;
  if ( KiForceIdleDisabled )
    goto LABEL_34;
  if ( KiForceIdleState != 4 )
  {
    v24 = WORD4(v144);
    v25 = v144;
LABEL_34:
    if ( ((v25 - 1) & v25) != 0 )
    {
      if ( *(_BYTE *)(v6 + 125) )
      {
        v27 = KiHeteroChooseTargetProcessor(v141, v6, &v144, &v140);
      }
      else
      {
        v26 = v141;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v6, v141, 0x140000000uLL) && !v21 )
          v22 = 1;
        v27 = KiChooseTargetProcessor(v26, v6, (unsigned int)&v144, (unsigned int)&v140, v22);
      }
    }
    else
    {
      v82 = KeGetCurrentPrcb();
      _BitScanReverse64(&v25, v25);
      v148[1] = v25;
      v149 = 0;
      v27 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v24 + (unsigned int)v25]];
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v82, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v82, 0LL);
        do
          KeYieldProcessorEx(&v149, v94, v95, v96);
        while ( *(_QWORD *)(v27 + 48) );
      }
      v83 = v140;
      if ( (*(_BYTE *)(v27 + 35) & 1) == 0 )
        v83 = 1;
      v140 = v83;
    }
    v29 = *(unsigned int *)(v27 + 36);
    *(_DWORD *)(v6 + 536) = v29;
    ThreadScb = *(_QWORD *)(v6 + 104);
    if ( ThreadScb )
      ThreadScb += *(unsigned int *)(v27 + 216);
    v143 = ThreadScb;
    if ( ThreadScb )
    {
      v80 = ThreadScb;
      while ( (*(_BYTE *)(v80 + 112) & 2) == 0 )
      {
        v80 = *(_QWORD *)(v80 + 408);
        if ( !v80 )
          goto LABEL_41;
      }
      if ( !v21 )
        goto LABEL_141;
    }
LABEL_41:
    if ( v140 )
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
        v127 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v6 != *(_QWORD *)(v27 + 24) )
          v127 = (unsigned int)v33;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v127, 0LL);
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
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      v38 = *(_DWORD *)(v6 + 588);
      v39 = *(char *)(v6 + 195);
      *(_QWORD *)(v6 + 64) = 0LL;
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v128 = v41[6] - 1;
          v41[6] = v128;
          if ( !v128 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      v42 = v141;
      if ( v27 != v141 && *(_BYTE *)(v27 + 7) )
      {
        v43 = KeGetCurrentPrcb();
        v155 = 0LL;
        LODWORD(v155) = 6;
        ++v43->SynchCounters.IpiSendSoftwareInterruptCount;
        v156 = 0LL;
        DWORD2(v155) = v29;
        memset(v159, 0, sizeof(v159));
        v157 = *(_OWORD *)(HalpInterruptTargets + 24 * v29);
        v158 = *(_QWORD *)(HalpInterruptTargets + 24 * v29 + 16);
        v150[0] = -1;
        v150[1] = 1;
        v151[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v151[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v44 = *(void (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v44(*(_QWORD *)(HalpInterruptController + 16), v151, &v157, 47LL, v150);
        if ( (v160 & 0x200) != 0 )
          _enable();
        v42 = v141;
      }
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 2) == 0 )
        goto LABEL_65;
      result = *(_QWORD *)(v27 + 33976);
      if ( !result )
        goto LABEL_65;
      if ( !*(_QWORD *)(v42 + 33976) )
        goto LABEL_65;
      if ( v42 == v27 )
        goto LABEL_65;
      if ( v39 < 8 )
        goto LABEL_65;
      v129 = *(_DWORD *)result;
      result = *(_DWORD *)result & 0x40000;
      if ( (v129 & 0x100000) == 0 )
      {
        if ( !(_DWORD)result )
          goto LABEL_65;
        result = (unsigned __int8)v129;
        if ( (unsigned __int8)v129 >= v39 )
          goto LABEL_65;
      }
      v5 = HvlpVirtualProcessorsIdentityMapped == 0;
      v130 = *(_QWORD *)(v42 + 33976);
      *(_DWORD *)(v130 + 12) = 2;
      v131 = *(unsigned int *)(v27 + 36);
      if ( !v5 )
      {
LABEL_287:
        *(_DWORD *)(v130 + 8) = v131;
        result = (unsigned int)v131;
        __writemsr(0x400000C2u, (unsigned int)v131);
LABEL_65:
        if ( (xmmword_140CFC490 & 0x8000000) == 0 )
          return result;
        v136 = v138;
        v135 = v38;
        return EtwTraceIdealProcessor(v6, 1350LL, v136, v135);
      }
LABEL_286:
      LODWORD(v131) = (unsigned __int8)byte_140D00681[2 * v131] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v131] << 6);
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
        v139[0] = 0;
        if ( !v5 && (unsigned __int8)KiTryToAcquireThreadLock(v62, v139) )
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
          if ( (*(_BYTE *)(v6 + 2) & 4) == 0 || (v84 = KiIsThreadRankNonZero(v6, v27), v64 = 1, !v84) )
            v64 = *(_BYTE *)(v6 + 195);
          **(_BYTE **)(v27 + 56) = v64;
          if ( *(_QWORD *)(v27 + 33976) )
          {
            v133 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v6 != *(_QWORD *)(v27 + 24) )
              v133 = (unsigned int)v64;
            KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v133, 0LL);
          }
          *(_QWORD *)(v27 + 16) = v6;
          v65 = *(_QWORD *)(v27 + 33976);
          if ( v65 )
            *(_BYTE *)(v65 + 16) = v6 == *(_QWORD *)(v27 + 24);
          if ( *(_BYTE *)(v6 + 388) == 1 || (v63 & 4) != 0 )
            *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) - *(_DWORD *)(v6 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v6 + 388) = 3;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
          result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          v38 = *(_DWORD *)(v6 + 588);
          v66 = *(char *)(v6 + 195);
          *(_QWORD *)(v6 + 64) = 0LL;
          v67 = KeGetCurrentPrcb();
          v68 = v67->SchedulerAssist;
          if ( v68 )
          {
            if ( v67->NestingLevel <= 1u )
            {
              result = (unsigned int)(v68[6] - 1);
              v68[6] = result;
              if ( !(_DWORD)result )
                result = KiRemoveSystemWorkPriorityKick(v67);
            }
          }
          v69 = v141;
          if ( v141 == v27 )
            goto LABEL_65;
          v70 = KeGetCurrentPrcb();
          v153 = 0LL;
          LODWORD(v153) = 6;
          ++v70->SynchCounters.IpiSendSoftwareInterruptCount;
          v154 = 0LL;
          DWORD2(v153) = v29;
          HalpInterruptSendIpi(&v153, 47LL);
          result = (unsigned int)KiVelocityFlags;
          if ( (KiVelocityFlags & 2) == 0 )
            goto LABEL_65;
          result = *(_QWORD *)(v27 + 33976);
          if ( !result )
            goto LABEL_65;
          if ( !*(_QWORD *)(v69 + 33976) )
            goto LABEL_65;
          if ( v66 < 8 )
            goto LABEL_65;
          v134 = *(_DWORD *)result;
          result = *(_DWORD *)result & 0x40000;
          if ( (v134 & 0x100000) == 0 )
          {
            if ( !(_DWORD)result )
              goto LABEL_65;
            result = (unsigned __int8)v134;
            if ( (unsigned __int8)v134 >= v66 )
              goto LABEL_65;
          }
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v130 = *(_QWORD *)(v69 + 33976);
          *(_DWORD *)(v130 + 12) = 2;
          v131 = *(unsigned int *)(v27 + 36);
          if ( !v5 )
            goto LABEL_287;
          goto LABEL_286;
        }
        goto LABEL_141;
      }
      if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v27, v62, v6, &v143) )
        goto LABEL_105;
      goto LABEL_160;
    }
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v27 + 16));
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v27, v61, v6, &v143) )
      {
LABEL_160:
        ThreadScb = v143;
LABEL_141:
        v20 = v138;
        goto LABEL_142;
      }
    }
    else if ( *(_BYTE *)(v6 + 195) <= *(_BYTE *)(v61 + 195) )
    {
      goto LABEL_141;
    }
    *(_BYTE *)(v61 + 565) = 1;
    v88 = 2;
    if ( v23 )
      v88 = 6;
    if ( (*(_BYTE *)(v6 + 2) & 4) == 0 || (v97 = KiIsThreadRankNonZero(v6, v27), v89 = 1, !v97) )
      v89 = *(_BYTE *)(v6 + 195);
    **(_BYTE **)(v27 + 56) = v89;
    if ( *(_QWORD *)(v27 + 33976) )
    {
      v132 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v6 != *(_QWORD *)(v27 + 24) )
        v132 = (unsigned int)v89;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v132, 0LL);
    }
    *(_QWORD *)(v27 + 16) = v6;
    v90 = *(_QWORD *)(v27 + 33976);
    if ( v90 )
      *(_BYTE *)(v90 + 16) = v6 == *(_QWORD *)(v27 + 24);
    if ( *(_BYTE *)(v6 + 388) == 1 || (v88 & 4) != 0 )
      *(_DWORD *)(v6 + 132) = *(_DWORD *)(v6 + 132) - *(_DWORD *)(v6 + 436) + MEMORY[0xFFFFF78000000320];
    v91 = v152;
    *(_BYTE *)(v6 + 388) = 3;
    KiInsertDeferredReadyList(v91, v61);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v38 = *(_DWORD *)(v6 + 588);
    v92 = *(char *)(v6 + 195);
    KiReleaseThreadLockSafe(v6);
    result = KiHvEnlightenedGuestPriorityKick(v141, v27, v92);
    goto LABEL_65;
  }
  v120 = *(unsigned int *)(v6 + 536);
  LODWORD(v120) = v120 & 0x7FFFFFFF;
  v27 = KiProcessorBlock[v120];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v27, &v144) )
  {
    _BitScanReverse64(&v123, v144);
    v147 = v123;
    v120 = *(unsigned int *)(v122 + 4LL * ((unsigned int)v123 + (WORD4(v144) << 6)) + 13640848);
    v27 = *(_QWORD *)(v122 + 8 * v120 + 13622400);
  }
  v124 = KeGetCurrentPrcb();
  v148[0] = 0;
  while ( 1 )
  {
    LOBYTE(v121) = 1;
    KiSetVpThreadSpinLockCount(v124, v121);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(v124, 0LL);
    do
      KeYieldProcessorEx(v148, v121, v125, v126);
    while ( *(_QWORD *)(v27 + 48) );
  }
  *(_DWORD *)(v6 + 536) = v120;
  ThreadScb = KiGetThreadScb(v6, v27, 0LL);
  v143 = ThreadScb;
LABEL_142:
  v74 = ThreadScb;
  if ( !v23 )
  {
    ThreadScb = v143;
    *(_DWORD *)(v6 + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !ThreadScb )
  {
    v74 = *(_QWORD *)(v6 + 104);
    if ( v74 )
      v74 += *(unsigned int *)(v27 + 216);
  }
  v75 = *(_QWORD *)(v27 + 33976);
  if ( v75 )
    *(_BYTE *)(v75 + 16) = 0;
  v76 = 0;
  *(_BYTE *)(v6 + 388) = 1;
  v137[0] = 0;
  if ( v74 && (*(_DWORD *)(v6 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v6, v74, v28, 0, (__int64)v137) )
    {
      KiAddThreadToScbQueue(v27, v87, v6, v142);
      goto LABEL_151;
    }
    v76 = v137[0];
  }
  KiAddThreadToPrcbQueue(v27, v6, *(char *)(v6 + 195), v142, v76);
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
  result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v77 = *(_DWORD *)(v6 + 588);
  *(_QWORD *)(v6 + 64) = 0LL;
  v78 = KeGetCurrentPrcb();
  v79 = v78->SchedulerAssist;
  if ( v79 )
  {
    if ( v78->NestingLevel <= 1u )
    {
      result = (unsigned int)(v79[6] - 1);
      v79[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v78);
    }
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    v135 = v77;
    v136 = v20;
    return EtwTraceIdealProcessor(v6, 1350LL, v136, v135);
  }
  return result;
}
