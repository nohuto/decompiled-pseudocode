/*
 * XREFs of KiDeferredReadySingleThread @ 0x140219BA0
 * Callers:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiReadyThread @ 0x14028D5F0 (KiReadyThread.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 * Callees:
 *     KiChooseTargetProcessor @ 0x14021AAC0 (KiChooseTargetProcessor.c)
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402BA480 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiComputePriorityFloor @ 0x1402BE820 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiTryToAcquireThreadLock @ 0x1402D8D68 (KiTryToAcquireThreadLock.c)
 *     KiPrcbInGroupAffinity @ 0x1402D8E00 (KiPrcbInGroupAffinity.c)
 *     KiGetThreadScb @ 0x1402D9280 (KiGetThreadScb.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402DBE28 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402DC330 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402DE3D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402E936C (KiSetBasePriorityAndClearDecrement.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiScheduleNextForegroundBoost @ 0x140314968 (KiScheduleNextForegroundBoost.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14031DC54 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KiAddThreadToScbQueue @ 0x14035ECB8 (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x14035F310 (KiAddThreadToPrcbQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051DA20 (KiHeteroChooseTargetProcessor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051E168 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     KiIsThreadRankBiased @ 0x140521DBC (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x1405A5E14 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(__int64 a1, ULONG_PTR a2, _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList)
{
  unsigned __int64 v3; // rbp
  bool v4; // zf
  ULONG_PTR v5; // rbx
  char v6; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v9; // r14
  char v10; // al
  unsigned __int8 v11; // di
  unsigned int v12; // eax
  _SINGLE_LIST_ENTRY *v13; // r8
  char v14; // r9
  char v15; // dl
  int v16; // r11d
  int v17; // esi
  char v18; // di
  unsigned int v19; // r12d
  bool v20; // r14
  char v21; // bp
  unsigned __int8 v22; // r15
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rcx
  int v25; // r10d
  __int64 v26; // rsi
  int v27; // r8d
  __int64 v28; // r12
  __int64 ThreadScb; // rdi
  __int64 v30; // rax
  char v31; // di
  char v32; // cl
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ebp
  int v38; // edi
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rdx
  struct _KPRCB *v42; // rax
  void (__fastcall *v43)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 result; // rax
  char v45; // al
  unsigned __int64 v46; // rcx
  char v47; // si
  unsigned __int8 v48; // cl
  char v49; // dl
  char v50; // si
  unsigned int v51; // eax
  struct _KPRCB *v52; // rcx
  char v53; // dl
  char v54; // cl
  __int64 v55; // r8
  char v56; // si
  int v57; // eax
  struct _KPRCB *v58; // rcx
  unsigned __int64 v59; // rcx
  __int64 v60; // rbp
  ULONG_PTR v61; // rbp
  char v62; // di
  char v63; // cl
  __int64 v64; // rax
  int v65; // edi
  struct _KPRCB *v66; // rcx
  _DWORD *v67; // rdx
  __int64 v68; // r15
  struct _KPRCB *v69; // rax
  unsigned __int64 v70; // rcx
  char v71; // cl
  struct _KPRCB *v72; // rcx
  __int64 v73; // r10
  __int64 v74; // rax
  char v75; // cl
  unsigned int v76; // edi
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  __int64 v79; // rcx
  char IsThreadRankNonZero; // al
  struct _KPRCB *v81; // rdi
  int v82; // eax
  char v83; // al
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  __int64 v86; // r10
  char v87; // r14
  char v88; // cl
  __int64 v89; // rax
  _SINGLE_LIST_ENTRY *v90; // rcx
  unsigned int v91; // edi
  struct _SINGLE_LIST_ENTRY *v92; // rdx
  char v93; // al
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int GuestSchedulerAssistPriority; // eax
  int v98; // edx
  int v99; // r10d
  int v100; // r9d
  ULONG_PTR v101; // rcx
  char v102; // al
  ULONG_PTR v103; // rcx
  char v104; // al
  char v105; // al
  unsigned __int8 v106; // cl
  char v107; // al
  int v108; // ecx
  unsigned int v109; // edi
  char v110; // dl
  char v111; // al
  char v112; // cl
  struct _SINGLE_LIST_ENTRY *v113; // rdx
  struct _SINGLE_LIST_ENTRY *v114; // rdx
  _SINGLE_LIST_ENTRY *v115; // r9
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // r8
  unsigned __int64 v119; // rcx
  struct _KPRCB *v120; // rbp
  __int64 v121; // rdx
  int v122; // eax
  int v123; // ecx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rdx
  int v128; // ecx
  __int64 v129; // r9
  __int64 v130; // r8
  char v131[4]; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v132; // [rsp+34h] [rbp-1B4h]
  char v133[4]; // [rsp+38h] [rbp-1B0h] BYREF
  int v134; // [rsp+3Ch] [rbp-1ACh] BYREF
  __int64 v135; // [rsp+40h] [rbp-1A8h]
  unsigned int v136; // [rsp+48h] [rbp-1A0h]
  __int64 v137; // [rsp+50h] [rbp-198h] BYREF
  __int128 v138; // [rsp+58h] [rbp-190h] BYREF
  int v139; // [rsp+68h] [rbp-180h] BYREF
  int v140; // [rsp+6Ch] [rbp-17Ch]
  int v141; // [rsp+70h] [rbp-178h]
  _DWORD v142[2]; // [rsp+74h] [rbp-174h] BYREF
  int v143; // [rsp+7Ch] [rbp-16Ch] BYREF
  _DWORD v144[2]; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v145[2]; // [rsp+88h] [rbp-160h] BYREF
  _SINGLE_LIST_ENTRY *v146; // [rsp+90h] [rbp-158h]
  __int128 v147; // [rsp+98h] [rbp-150h] BYREF
  __int64 v148; // [rsp+A8h] [rbp-140h]
  __int128 v149; // [rsp+B0h] [rbp-138h]
  __int64 v150; // [rsp+C0h] [rbp-128h]
  __int128 v151; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v152; // [rsp+D8h] [rbp-110h]
  _BYTE v153[168]; // [rsp+E0h] [rbp-108h] BYREF
  int v154; // [rsp+1E0h] [rbp-8h]

  v3 = *(_QWORD *)(a2 + 72);
  v4 = *(_BYTE *)(a2 + 566) == 1;
  v146 = p_AbPropagateBoostsList;
  v5 = a2;
  v135 = a1;
  v138 = 0LL;
  v134 = 0;
  v137 = 0LL;
  v136 = 0;
  if ( v4 )
    v6 = *(_BYTE *)(a2 + 567);
  else
    v6 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v139 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v94 = SchedulerAssist[6];
      SchedulerAssist[6] = v94 + 1;
      if ( v94 == -1 )
LABEL_219:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 64), 0LL) )
  {
    v84 = CurrentPrcb->SchedulerAssist;
    if ( v84 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v95 = v84[6] - 1;
        v84[6] = v95;
        if ( !v95 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v139);
    while ( *(_QWORD *)(v5 + 64) );
    v85 = CurrentPrcb->SchedulerAssist;
    if ( v85 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v96 = v85[6];
        v85[6] = v96 + 1;
        if ( v96 == -1 )
          goto LABEL_219;
      }
    }
  }
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) == 0 )
  {
    v9 = 0;
    goto LABEL_7;
  }
  _InterlockedOr(*(volatile signed __int32 **)(v5 + 968), 0x100000u);
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v5);
  v98 = GuestSchedulerAssistPriority;
  v99 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v99 = GuestSchedulerAssistPriority;
    v98 = 15;
  }
  v100 = *(_DWORD *)(v5 + 1024);
  if ( v98 != v100 )
  {
    v101 = (char)v98 + v5;
    v102 = *(_BYTE *)(v101 + 824);
    if ( v102 == -1 )
      KeBugCheckEx(0x157u, v5, (char)v98, 1uLL, 0LL);
    *(_BYTE *)(v101 + 824) = v102 + 1;
    *(_DWORD *)(v5 + 856) |= 1 << v98;
    if ( v100 != 32 )
    {
      v103 = (char)v100 + v5;
      v104 = *(_BYTE *)(v103 + 824);
      if ( !v104 )
        KeBugCheckEx(0x157u, v5, (char)v100, 2uLL, 0LL);
      v105 = v104 - 1;
      *(_BYTE *)(v103 + 824) = v105;
      if ( !v105 )
        *(_DWORD *)(v5 + 856) ^= 1 << v100;
    }
    *(_DWORD *)(v5 + 1024) = v98;
  }
  v106 = v99;
  if ( v99 == 32 )
    v106 = v98;
  v107 = KiComputePriorityFloor(v5, v106);
  v108 = *(char *)(v5 + 195);
  v109 = v107;
  if ( (*(_BYTE *)(v5 + 564) & 0xF0) != 0 )
  {
    if ( v107 <= v108 )
      goto LABEL_244;
    goto LABEL_243;
  }
  if ( v107 != v108 )
  {
LABEL_243:
    KiSetBasePriorityAndClearDecrement(v5, 0LL, 0LL);
    KiUpdateThreadPriority(0LL, v5, v109, 0LL);
  }
LABEL_244:
  if ( (*(_DWORD *)(v5 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(v5 + 968), 0xFFEFFFFF);
  v9 = 1;
LABEL_7:
  v10 = *(_BYTE *)(v5 + 566);
  if ( !v10 )
  {
    if ( v3 < *(_QWORD *)(v5 + 32) )
    {
      v136 = *(unsigned __int8 *)(v5 + 565);
      goto LABEL_27;
    }
    LOBYTE(a2) = 1;
    v45 = KiComputeNewPriority(v5, a2);
    if ( !v9 )
      KiUpdateThreadPriority(0LL, v5, (unsigned int)v45, 0LL);
    KiTryScheduleNextForegroundBoost(v5);
    goto LABEL_72;
  }
  if ( *(char *)(v5 + 195) < 16 )
  {
    v11 = 0;
    v12 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v5 + 436);
    if ( v3 >= *(_QWORD *)(v5 + 32) )
    {
      v11 = 4;
      if ( v12 < 2 )
        v11 = 5;
    }
    if ( v11 >= 4u || *(char *)(v5 + 563) >= 14 || v12 >= 2 && !*(_BYTE *)(v5 + 564) )
    {
      v47 = *(_BYTE *)(v5 + 195);
      v11 |= 8u;
      if ( v47 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1850LL) == 2
          && (p_AbPropagateBoostsList = (_SINGLE_LIST_ENTRY *)*(unsigned __int8 *)(v5 + 564),
              v110 = (unsigned __int8)p_AbPropagateBoostsList & 0xF,
              ((unsigned __int8)p_AbPropagateBoostsList & 0xF) != 0 && (*(_DWORD *)(v5 + 120) & 8) == 0) )
        {
          v111 = v110 + *(_BYTE *)(v5 + 563);
          *(_BYTE *)(v5 + 564) = v110;
          v112 = v47 - ((unsigned __int8)p_AbPropagateBoostsList >> 4) - 1;
          v47 = v111;
          if ( v112 >= v111 )
            v47 = v112;
        }
        else
        {
          v48 = *(_BYTE *)(v5 + 564);
          v49 = *(_BYTE *)(v5 + 563);
          p_AbPropagateBoostsList = (_SINGLE_LIST_ENTRY *)v48;
          v50 = v47 - (v48 >> 4) - (v48 & 0xF) - 1;
          if ( v50 >= v49 )
            v49 = v50;
          v47 = v49;
          if ( v48 )
          {
            if ( (v48 & 0xF) != 0 )
              *(_DWORD *)(v5 + 872) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v5 + 564) = 0;
          }
        }
        v51 = *(_DWORD *)(v5 + 856);
        v140 = 0;
        if ( v51 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v51);
          if ( v47 < (int)p_AbPropagateBoostsList )
            v47 = (char)p_AbPropagateBoostsList;
          v140 = (int)p_AbPropagateBoostsList;
        }
      }
      if ( !v9 )
      {
        v52 = KeGetCurrentPrcb();
        if ( v47 > *(char *)(v5 + 195) )
        {
          if ( *(_BYTE *)(v5 + 793) )
          {
            v113 = (struct _SINGLE_LIST_ENTRY *)(v5 + 808);
            if ( *(_QWORD *)(v5 + 808) == 1LL )
            {
              p_AbPropagateBoostsList = &v52->AbPropagateBoostsList;
              if ( v52 != (struct _KPRCB *)-34680LL )
              {
                v113->Next = p_AbPropagateBoostsList->Next;
                p_AbPropagateBoostsList->Next = v113;
                _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
                KiAbQueueAutoBoostDpc(v52);
              }
            }
          }
        }
        v4 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
        *(_BYTE *)(v5 + 195) = v47;
        if ( !v4 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 968), (unsigned int)v47, p_AbPropagateBoostsList);
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v5 + 544) + 1850LL) == 2 )
      v11 |= 2u;
    if ( ((unsigned __int8)~v11 & ((*(_DWORD *)(v5 + 120) & 8) == 0)) != 0 )
    {
      v13 = (_SINGLE_LIST_ENTRY *)(unsigned int)*(char *)(v5 + 195);
      if ( *(char *)(v5 + 195) > 0 )
      {
        v14 = *(_BYTE *)(v5 + 564);
        if ( !v14 )
        {
          v15 = v11 >> 1;
LABEL_19:
          v16 = *(char *)(v5 + 563);
          v17 = v16 + v6;
          if ( (v15 & 1) != 0 )
            v17 += (char)PsPrioritySeparation;
          if ( v17 >= 16 )
            v17 = 15;
          if ( v17 > (int)v13 )
          {
            v71 = 0;
            if ( v17 > v16 + v6 )
              v71 = v17 - v16 - v6;
            *(_BYTE *)(v5 + 564) = v14 ^ (v71 ^ v14) & 0xF;
            v72 = KeGetCurrentPrcb();
            if ( (char)v17 > (char)v13 )
            {
              if ( *(_BYTE *)(v5 + 793) )
              {
                v92 = (struct _SINGLE_LIST_ENTRY *)(v5 + 808);
                if ( *(_QWORD *)(v5 + 808) == 1LL )
                {
                  v13 = &v72->AbPropagateBoostsList;
                  if ( v72 != (struct _KPRCB *)-34680LL )
                  {
                    v92->Next = v13->Next;
                    v13->Next = v92;
                    _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
                    KiAbQueueAutoBoostDpc(v72);
                  }
                }
              }
            }
            v4 = (*(_DWORD *)(v5 + 120) & 0x400000) == 0;
            *(_BYTE *)(v5 + 195) = v17;
            if ( !v4 )
            {
              LOBYTE(v13) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 968), (unsigned int)(char)v17, v13);
            }
          }
LABEL_24:
          v10 = *(_BYTE *)(v5 + 566);
          v18 = v11 >> 3;
          goto LABEL_25;
        }
        if ( (v14 & 0xF0) == 0 )
        {
          v15 = v11 >> 1;
          if ( (v11 & 2) != 0 )
            goto LABEL_19;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag && (v11 & 6) == 6 && (*(_DWORD *)(v5 + 120) & 8) == 0 && *(char *)(v5 + 195) > 0 )
      KiScheduleNextForegroundBoost(v5);
    goto LABEL_24;
  }
  v18 = 1;
LABEL_25:
  if ( v10 != 2 )
    goto LABEL_26;
  v53 = *(_BYTE *)(v5 + 195);
  if ( v53 > 0 )
  {
    v54 = *(_BYTE *)(v5 + 567);
    if ( v53 < v54 && v53 < 13 )
    {
      v55 = *(unsigned int *)(v5 + 120);
      if ( (v55 & 8) == 0 )
      {
        v56 = 13;
        v57 = *(_DWORD *)(v5 + 120);
        if ( v54 < 13 )
          v56 = *(_BYTE *)(v5 + 567);
        *(_BYTE *)(v5 + 564) += 16 * (v56 - v53);
        v58 = KeGetCurrentPrcb();
        if ( v56 > v53 )
        {
          if ( *(_BYTE *)(v5 + 793) )
          {
            v114 = (struct _SINGLE_LIST_ENTRY *)(v5 + 808);
            if ( *(_QWORD *)(v5 + 808) == 1LL )
            {
              v115 = &v58->AbPropagateBoostsList;
              if ( v58 != (struct _KPRCB *)-34680LL )
              {
                v114->Next = v115->Next;
                v115->Next = v114;
                _InterlockedIncrement16((volatile signed __int16 *)(v5 + 868));
                KiAbQueueAutoBoostDpc(v58);
                v57 = *(_DWORD *)(v5 + 120);
              }
            }
          }
        }
        *(_BYTE *)(v5 + 195) = v56;
        if ( (v57 & 0x400000) != 0 )
        {
          LOBYTE(v55) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v5 + 968), (unsigned int)v56, v55);
        }
        v59 = *(_QWORD *)(v5 + 32);
        if ( v3 > v59 || v59 - v3 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(v5 + 32) = v3 + (unsigned int)KiLockQuantumTarget;
LABEL_26:
        if ( !v18 )
          goto LABEL_27;
        goto LABEL_72;
      }
    }
  }
  if ( v18 )
  {
LABEL_72:
    v46 = v3 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v5 + 651);
    if ( (*(_DWORD *)(v5 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(v5 + 120), 5u);
    *(_QWORD *)(v5 + 32) = v46;
    goto LABEL_27;
  }
  v70 = *(_QWORD *)(v5 + 32);
  if ( v3 > v70 || v70 - v3 < (unsigned int)KiLockQuantumTarget )
    *(_QWORD *)(v5 + 32) = v3 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
  v19 = *(_DWORD *)(v5 + 588);
  v132 = v19;
  *(_WORD *)(v5 + 565) = 0;
  v20 = *(_DWORD *)(v5 + 484) || *(_BYTE *)(v5 + 390) == 1;
  v21 = 0;
  v22 = _bittestandreset((signed __int32 *)(v5 + 116), 1u);
  if ( *(_QWORD *)(v5 + 568) != KiCpuSetSequence && (*(_DWORD *)(v5 + 116) & 8) == 0 )
    KiComputeThreadAffinity(v5);
  v23 = *(_WORD *)(v5 + 584);
  v24 = *(_QWORD *)(v5 + 576);
  WORD4(v138) = v23;
  *(_QWORD *)&v138 = v24;
  if ( KiForceIdleDisabled )
    goto LABEL_34;
  if ( KiForceIdleState != 4 )
  {
    v23 = WORD4(v138);
    v24 = v138;
LABEL_34:
    if ( ((v24 - 1) & v24) != 0 )
    {
      if ( *(_BYTE *)(v5 + 125) )
      {
        v26 = KiHeteroChooseTargetProcessor(v135, v5, &v138, &v134);
      }
      else
      {
        v25 = v135;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(v5, v135, 0x140000000uLL) && !v20 )
          v21 = 1;
        v26 = KiChooseTargetProcessor(v25, v5, (unsigned int)&v138, (unsigned int)&v134, v21);
      }
    }
    else
    {
      v81 = KeGetCurrentPrcb();
      _BitScanReverse64(&v24, v24);
      v142[1] = v24;
      v143 = 0;
      v26 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v23 + (unsigned int)v24]];
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v81, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v81, 0LL);
        do
          KeYieldProcessorEx(&v143);
        while ( *(_QWORD *)(v26 + 48) );
      }
      v82 = v134;
      if ( (*(_BYTE *)(v26 + 35) & 1) == 0 )
        v82 = 1;
      v134 = v82;
    }
    v28 = *(unsigned int *)(v26 + 36);
    *(_DWORD *)(v5 + 536) = v28;
    ThreadScb = *(_QWORD *)(v5 + 104);
    if ( ThreadScb )
      ThreadScb += *(unsigned int *)(v26 + 216);
    v137 = ThreadScb;
    if ( ThreadScb )
    {
      v79 = ThreadScb;
      while ( (*(_BYTE *)(v79 + 112) & 2) == 0 )
      {
        v79 = *(_QWORD *)(v79 + 408);
        if ( !v79 )
          goto LABEL_41;
      }
      if ( !v20 )
        goto LABEL_141;
    }
LABEL_41:
    if ( v134 )
    {
      v30 = *(_QWORD *)(v26 + 16);
      if ( v30 && v30 != *(_QWORD *)(v26 + 24) )
        __fastfail(0x1Eu);
      v31 = 2;
      if ( v22 )
        v31 = 6;
      if ( (*(_BYTE *)(v5 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(v5, v26), v32 = 1, !IsThreadRankNonZero) )
      {
        v32 = *(_BYTE *)(v5 + 195);
      }
      **(_BYTE **)(v26 + 56) = v32;
      if ( *(_QWORD *)(v26 + 33976) )
      {
        v121 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v5 != *(_QWORD *)(v26 + 24) )
          v121 = (unsigned int)v32;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v26 + 33976), v121, 0LL);
      }
      *(_QWORD *)(v26 + 16) = v5;
      v33 = *(_QWORD *)(v26 + 33976);
      if ( v33 )
        *(_BYTE *)(v33 + 16) = v5 == *(_QWORD *)(v26 + 24);
      if ( *(_BYTE *)(v5 + 388) == 1 || (v31 & 4) != 0 )
        *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v5 + 388) = 3;
      v34 = *(unsigned __int8 *)(v26 + 35);
      v35 = *(_QWORD *)(v26 + 192);
      *(_BYTE *)(v26 + 12587) = 0;
      if ( (v34 & 1) != 0 )
        __fastfail(0x21u);
      v36 = v34 + 1;
      *(_BYTE *)(v26 + 35) = v36;
      if ( v36 == 1 )
        _interlockedbittestandreset64((volatile signed __int32 *)v35, *(unsigned __int8 *)(v26 + 209));
      _interlockedbittestandreset64((volatile signed __int32 *)(v35 + 24), *(unsigned __int8 *)(v26 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 8), ~*(_QWORD *)(v26 + 33880));
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 16), ~*(_QWORD *)(v26 + 33880));
      if ( (*(_QWORD *)(v26 + 33880) & ~*(_QWORD *)(v35 + 24)) == *(_QWORD *)(v26 + 200) )
        _interlockedbittestandset64((volatile signed __int32 *)(v35 + 16), *(unsigned __int8 *)(v26 + 209));
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 48), 0LL);
      KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
      v37 = *(_DWORD *)(v5 + 588);
      v38 = *(char *)(v5 + 195);
      *(_QWORD *)(v5 + 64) = 0LL;
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v122 = v40[6] - 1;
          v40[6] = v122;
          if ( !v122 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      v41 = v135;
      if ( v26 != v135 && *(_BYTE *)(v26 + 7) )
      {
        v42 = KeGetCurrentPrcb();
        v149 = 0LL;
        LODWORD(v149) = 6;
        ++v42->SynchCounters.IpiSendSoftwareInterruptCount;
        v150 = 0LL;
        DWORD2(v149) = v28;
        memset(v153, 0, sizeof(v153));
        v151 = *(_OWORD *)(HalpInterruptTargets + 24 * v28);
        v152 = *(_QWORD *)(HalpInterruptTargets + 24 * v28 + 16);
        v144[0] = -1;
        v144[1] = 1;
        v145[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v145[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v43 = *(void (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v43(*(_QWORD *)(HalpInterruptController + 16), v145, &v151, 47LL, v144);
        if ( (v154 & 0x200) != 0 )
          _enable();
        v41 = v135;
      }
      result = (unsigned int)KiVelocityFlags;
      if ( (KiVelocityFlags & 2) == 0 )
        goto LABEL_65;
      result = *(_QWORD *)(v26 + 33976);
      if ( !result )
        goto LABEL_65;
      if ( !*(_QWORD *)(v41 + 33976) )
        goto LABEL_65;
      if ( v41 == v26 )
        goto LABEL_65;
      if ( v38 < 8 )
        goto LABEL_65;
      v123 = *(_DWORD *)result;
      result = *(_DWORD *)result & 0x40000;
      if ( (v123 & 0x100000) == 0 )
      {
        if ( !(_DWORD)result )
          goto LABEL_65;
        result = (unsigned __int8)v123;
        if ( (unsigned __int8)v123 >= v38 )
          goto LABEL_65;
      }
      v4 = HvlpVirtualProcessorsIdentityMapped == 0;
      v124 = *(_QWORD *)(v41 + 33976);
      *(_DWORD *)(v124 + 12) = 2;
      v125 = *(unsigned int *)(v26 + 36);
      if ( !v4 )
      {
LABEL_287:
        *(_DWORD *)(v124 + 8) = v125;
        result = (unsigned int)v125;
        __writemsr(0x400000C2u, (unsigned int)v125);
LABEL_65:
        if ( (xmmword_140CFC490 & 0x8000000) == 0 )
          return result;
        v130 = v132;
        v129 = v37;
        return EtwTraceIdealProcessor(v5, 1350LL, v130, v129);
      }
LABEL_286:
      LODWORD(v125) = (unsigned __int8)byte_140D006C1[2 * v125] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v125] << 6);
      goto LABEL_287;
    }
    if ( v21 )
      goto LABEL_141;
    v60 = *(_QWORD *)(v26 + 16);
    if ( !v60 )
    {
      v61 = *(_QWORD *)(v26 + 8);
      if ( v61 == v5 )
      {
        KiUpdateVPBackingThreadPriority(v5);
      }
      else
      {
        v4 = (*(_DWORD *)(v61 + 120) & 0x400000) == 0;
        v133[0] = 0;
        if ( !v4 && (unsigned __int8)KiTryToAcquireThreadLock(v61, v133) )
        {
          if ( (*(_DWORD *)(v61 + 120) & 0x400000) != 0 )
            KiUpdateVPBackingThreadPriority(v61);
          KiReleaseThreadLockSafe(v61);
        }
      }
      if ( !KiGroupSchedulingEnabled )
      {
        if ( *(_BYTE *)(v5 + 195) > *(_BYTE *)(v61 + 195) )
        {
LABEL_105:
          if ( *(_BYTE *)(v61 + 388) == 2 )
            *(_BYTE *)(v61 + 565) = 1;
          v62 = 2;
          if ( v22 )
            v62 = 6;
          if ( (*(_BYTE *)(v5 + 2) & 4) == 0 || (v83 = KiIsThreadRankNonZero(v5, v26), v63 = 1, !v83) )
            v63 = *(_BYTE *)(v5 + 195);
          **(_BYTE **)(v26 + 56) = v63;
          if ( *(_QWORD *)(v26 + 33976) )
          {
            v127 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( v5 != *(_QWORD *)(v26 + 24) )
              v127 = (unsigned int)v63;
            KiSetSchedulerAssistPriority(*(_QWORD *)(v26 + 33976), v127, 0LL);
          }
          *(_QWORD *)(v26 + 16) = v5;
          v64 = *(_QWORD *)(v26 + 33976);
          if ( v64 )
            *(_BYTE *)(v64 + 16) = v5 == *(_QWORD *)(v26 + 24);
          if ( *(_BYTE *)(v5 + 388) == 1 || (v62 & 4) != 0 )
            *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v5 + 388) = 3;
          _InterlockedAnd64((volatile signed __int64 *)(v26 + 48), 0LL);
          result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          v37 = *(_DWORD *)(v5 + 588);
          v65 = *(char *)(v5 + 195);
          *(_QWORD *)(v5 + 64) = 0LL;
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          if ( v67 )
          {
            if ( v66->NestingLevel <= 1u )
            {
              result = (unsigned int)(v67[6] - 1);
              v67[6] = result;
              if ( !(_DWORD)result )
                result = KiRemoveSystemWorkPriorityKick(v66);
            }
          }
          v68 = v135;
          if ( v135 == v26 )
            goto LABEL_65;
          v69 = KeGetCurrentPrcb();
          v147 = 0LL;
          LODWORD(v147) = 6;
          ++v69->SynchCounters.IpiSendSoftwareInterruptCount;
          v148 = 0LL;
          DWORD2(v147) = v28;
          HalpInterruptSendIpi(&v147, 47LL);
          result = (unsigned int)KiVelocityFlags;
          if ( (KiVelocityFlags & 2) == 0 )
            goto LABEL_65;
          result = *(_QWORD *)(v26 + 33976);
          if ( !result )
            goto LABEL_65;
          if ( !*(_QWORD *)(v68 + 33976) )
            goto LABEL_65;
          if ( v65 < 8 )
            goto LABEL_65;
          v128 = *(_DWORD *)result;
          result = *(_DWORD *)result & 0x40000;
          if ( (v128 & 0x100000) == 0 )
          {
            if ( !(_DWORD)result )
              goto LABEL_65;
            result = (unsigned __int8)v128;
            if ( (unsigned __int8)v128 >= v65 )
              goto LABEL_65;
          }
          v4 = HvlpVirtualProcessorsIdentityMapped == 0;
          v124 = *(_QWORD *)(v68 + 33976);
          *(_DWORD *)(v124 + 12) = 2;
          v125 = *(unsigned int *)(v26 + 36);
          if ( !v4 )
            goto LABEL_287;
          goto LABEL_286;
        }
        goto LABEL_141;
      }
      if ( (unsigned __int8)KiEvaluateGroupSchedulingPreemption(v26, v61, v5, &v137) )
        goto LABEL_105;
      goto LABEL_160;
    }
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v26 + 16));
    if ( KiGroupSchedulingEnabled )
    {
      if ( !(unsigned __int8)KiEvaluateGroupSchedulingPreemption(v26, v60, v5, &v137) )
      {
LABEL_160:
        ThreadScb = v137;
LABEL_141:
        v19 = v132;
        goto LABEL_142;
      }
    }
    else if ( *(_BYTE *)(v5 + 195) <= *(_BYTE *)(v60 + 195) )
    {
      goto LABEL_141;
    }
    *(_BYTE *)(v60 + 565) = 1;
    v87 = 2;
    if ( v22 )
      v87 = 6;
    if ( (*(_BYTE *)(v5 + 2) & 4) == 0 || (v93 = KiIsThreadRankNonZero(v5, v26), v88 = 1, !v93) )
      v88 = *(_BYTE *)(v5 + 195);
    **(_BYTE **)(v26 + 56) = v88;
    if ( *(_QWORD *)(v26 + 33976) )
    {
      v126 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v5 != *(_QWORD *)(v26 + 24) )
        v126 = (unsigned int)v88;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v26 + 33976), v126, 0LL);
    }
    *(_QWORD *)(v26 + 16) = v5;
    v89 = *(_QWORD *)(v26 + 33976);
    if ( v89 )
      *(_BYTE *)(v89 + 16) = v5 == *(_QWORD *)(v26 + 24);
    if ( *(_BYTE *)(v5 + 388) == 1 || (v87 & 4) != 0 )
      *(_DWORD *)(v5 + 132) = *(_DWORD *)(v5 + 132) - *(_DWORD *)(v5 + 436) + MEMORY[0xFFFFF78000000320];
    v90 = v146;
    *(_BYTE *)(v5 + 388) = 3;
    KiInsertDeferredReadyList(v90, v60);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v37 = *(_DWORD *)(v5 + 588);
    v91 = *(char *)(v5 + 195);
    KiReleaseThreadLockSafe(v5);
    result = KiHvEnlightenedGuestPriorityKick(v135, v26, v91);
    goto LABEL_65;
  }
  v116 = *(unsigned int *)(v5 + 536);
  LODWORD(v116) = v116 & 0x7FFFFFFF;
  v26 = KiProcessorBlock[v116];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v26, &v138) )
  {
    _BitScanReverse64(&v119, v138);
    v141 = v119;
    v116 = *(unsigned int *)(v118 + 4LL * ((unsigned int)v119 + (WORD4(v138) << 6)) + 13640912);
    v26 = *(_QWORD *)(v118 + 8 * v116 + 13622464);
  }
  v120 = KeGetCurrentPrcb();
  v142[0] = 0;
  while ( 1 )
  {
    LOBYTE(v117) = 1;
    KiSetVpThreadSpinLockCount(v120, v117);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(v120, 0LL);
    do
      KeYieldProcessorEx(v142);
    while ( *(_QWORD *)(v26 + 48) );
  }
  *(_DWORD *)(v5 + 536) = v116;
  ThreadScb = KiGetThreadScb(v5, v26, 0LL);
  v137 = ThreadScb;
LABEL_142:
  v73 = ThreadScb;
  if ( !v22 )
  {
    ThreadScb = v137;
    *(_DWORD *)(v5 + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !ThreadScb )
  {
    v73 = *(_QWORD *)(v5 + 104);
    if ( v73 )
      v73 += *(unsigned int *)(v26 + 216);
  }
  v74 = *(_QWORD *)(v26 + 33976);
  if ( v74 )
    *(_BYTE *)(v74 + 16) = 0;
  v75 = 0;
  *(_BYTE *)(v5 + 388) = 1;
  v131[0] = 0;
  if ( v73 && (*(_DWORD *)(v5 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v73, v27, 0, (__int64)v131) )
    {
      KiAddThreadToScbQueue(v26, v86, v5, v136);
      goto LABEL_151;
    }
    v75 = v131[0];
  }
  KiAddThreadToPrcbQueue(v26, v5, *(char *)(v5 + 195), v136, v75);
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 48), 0LL);
  result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v76 = *(_DWORD *)(v5 + 588);
  *(_QWORD *)(v5 + 64) = 0LL;
  v77 = KeGetCurrentPrcb();
  v78 = v77->SchedulerAssist;
  if ( v78 )
  {
    if ( v77->NestingLevel <= 1u )
    {
      result = (unsigned int)(v78[6] - 1);
      v78[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v77);
    }
  }
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    v129 = v76;
    v130 = v19;
    return EtwTraceIdealProcessor(v5, 1350LL, v130, v129);
  }
  return result;
}
