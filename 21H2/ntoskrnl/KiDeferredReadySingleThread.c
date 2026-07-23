/*
 * XREFs of KiDeferredReadySingleThread @ 0x14034EC10
 * Callers:
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiReadyThread @ 0x1402ECE90 (KiReadyThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     KiTryToAcquireThreadLock @ 0x1402293B0 (KiTryToAcquireThreadLock.c)
 *     KiScheduleNextForegroundBoost @ 0x140235F3C (KiScheduleNextForegroundBoost.c)
 *     KiTryToUpdateVPBackingThreadPriority @ 0x14023DB64 (KiTryToUpdateVPBackingThreadPriority.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14027A338 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiGetThreadScb @ 0x14027B870 (KiGetThreadScb.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     KiInsertDeferredReadyList @ 0x14029B890 (KiInsertDeferredReadyList.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiAddThreadToScbQueue @ 0x14029D044 (KiAddThreadToScbQueue.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402D46E0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiComputePriorityFloor @ 0x1402D5610 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402F0EF0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiHeteroChooseTargetProcessor @ 0x14051F740 (KiHeteroChooseTargetProcessor.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     KiIsThreadRankBiased @ 0x140523ADC (KiIsThreadRankBiased.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiDeferredReadySingleThread(__int64 a1, ULONG_PTR a2, __int64 p_DpcData, __int64 a4)
{
  unsigned __int64 v4; // rbp
  bool v5; // zf
  char v7; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  char v10; // r14
  char v11; // al
  unsigned __int8 v12; // di
  unsigned int v13; // eax
  PVOID *v14; // r8
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
  __int64 v28; // r8
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
  unsigned int v51; // eax
  struct _KDPC *v52; // rcx
  char v53; // dl
  char v54; // cl
  __int64 v55; // r8
  char v56; // si
  int v57; // eax
  struct _KDPC *v58; // rcx
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
  struct _KDPC *v72; // rcx
  __int64 v73; // r10
  __int64 v74; // rax
  char v75; // cl
  unsigned int v76; // edi
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  __int64 v79; // rcx
  bool IsThreadRankNonZero; // al
  struct _KPRCB *v81; // rdi
  int v82; // eax
  bool v83; // al
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  __int64 v86; // r10
  char v87; // r14
  char v88; // cl
  __int64 v89; // rax
  __int64 v90; // rcx
  int v91; // edi
  _QWORD *v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  bool v96; // al
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int GuestSchedulerAssistPriority; // eax
  int v101; // edx
  int v102; // r10d
  int v103; // r9d
  ULONG_PTR v104; // rcx
  char v105; // al
  ULONG_PTR v106; // rcx
  char v107; // al
  char v108; // al
  unsigned __int8 v109; // cl
  char v110; // al
  int v111; // ecx
  unsigned int v112; // edi
  char v113; // dl
  char v114; // al
  char v115; // cl
  _QWORD *v116; // rdx
  PVOID *v117; // rdx
  PVOID *v118; // r9
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // r8
  unsigned __int64 v122; // rcx
  struct _KPRCB *v123; // rbp
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rdx
  int v127; // eax
  int v128; // ecx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rdx
  int v133; // ecx
  __int64 v134; // r9
  __int64 v135; // r8
  char v136; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned int v137; // [rsp+34h] [rbp-1B4h]
  char v138[4]; // [rsp+38h] [rbp-1B0h] BYREF
  int v139; // [rsp+3Ch] [rbp-1ACh] BYREF
  __int64 v140; // [rsp+40h] [rbp-1A8h]
  int v141; // [rsp+48h] [rbp-1A0h]
  __int64 v142; // [rsp+50h] [rbp-198h] BYREF
  __int128 v143; // [rsp+58h] [rbp-190h] BYREF
  int v144; // [rsp+68h] [rbp-180h] BYREF
  int v145; // [rsp+6Ch] [rbp-17Ch]
  int v146; // [rsp+70h] [rbp-178h]
  _DWORD v147[2]; // [rsp+74h] [rbp-174h] BYREF
  int v148; // [rsp+7Ch] [rbp-16Ch] BYREF
  _DWORD v149[2]; // [rsp+80h] [rbp-168h] BYREF
  _DWORD v150[2]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v151; // [rsp+90h] [rbp-158h]
  __int128 v152; // [rsp+98h] [rbp-150h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-140h]
  __int128 v154; // [rsp+B0h] [rbp-138h]
  __int64 v155; // [rsp+C0h] [rbp-128h]
  __int128 v156; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v157; // [rsp+D8h] [rbp-110h]
  _BYTE v158[168]; // [rsp+E0h] [rbp-108h] BYREF
  int v159; // [rsp+1E0h] [rbp-8h]

  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_BYTE *)(a2 + 566) == 1;
  v151 = p_DpcData;
  v140 = a1;
  v143 = 0LL;
  v139 = 0;
  v142 = 0LL;
  v141 = 0;
  if ( v5 )
    v7 = *(_BYTE *)(a2 + 567);
  else
    v7 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v144 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v97 = SchedulerAssist[6];
      SchedulerAssist[6] = v97 + 1;
      if ( v97 == -1 )
LABEL_219:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
  {
    v84 = CurrentPrcb->SchedulerAssist;
    if ( v84 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v98 = v84[6] - 1;
        v84[6] = v98;
        if ( !v98 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v144, a2, p_DpcData, a4);
    while ( *(_QWORD *)(a2 + 64) );
    v85 = CurrentPrcb->SchedulerAssist;
    if ( v85 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v99 = v85[6];
        v85[6] = v99 + 1;
        if ( v99 == -1 )
          goto LABEL_219;
      }
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) == 0 )
  {
    v10 = 0;
    goto LABEL_7;
  }
  _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x100000u);
  GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
  v101 = GuestSchedulerAssistPriority;
  v102 = 32;
  if ( GuestSchedulerAssistPriority >= 16 )
  {
    v102 = GuestSchedulerAssistPriority;
    v101 = 15;
  }
  v103 = *(_DWORD *)(a2 + 1024);
  if ( v101 != v103 )
  {
    v104 = (char)v101 + a2;
    v105 = *(_BYTE *)(v104 + 824);
    if ( v105 == -1 )
      KeBugCheckEx(0x157u, a2, (char)v101, 1uLL, 0LL);
    *(_BYTE *)(v104 + 824) = v105 + 1;
    *(_DWORD *)(a2 + 856) |= 1 << v101;
    if ( v103 != 32 )
    {
      v106 = (char)v103 + a2;
      v107 = *(_BYTE *)(v106 + 824);
      if ( !v107 )
        KeBugCheckEx(0x157u, a2, (char)v103, 2uLL, 0LL);
      v108 = v107 - 1;
      *(_BYTE *)(v106 + 824) = v108;
      if ( !v108 )
        *(_DWORD *)(a2 + 856) ^= 1 << v103;
    }
    *(_DWORD *)(a2 + 1024) = v101;
  }
  v109 = v102;
  if ( v102 == 32 )
    v109 = v101;
  v110 = KiComputePriorityFloor(a2, v109);
  v111 = *(char *)(a2 + 195);
  v112 = v110;
  if ( (*(_BYTE *)(a2 + 564) & 0xF0) != 0 )
  {
    if ( v110 <= v111 )
      goto LABEL_244;
    goto LABEL_243;
  }
  if ( v110 != v111 )
  {
LABEL_243:
    KiSetBasePriorityAndClearDecrement(a2, 0LL, 0);
    KiUpdateThreadPriority(0LL, a2, (PVOID *)v112, 0);
  }
LABEL_244:
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFEFFFFF);
  v10 = 1;
LABEL_7:
  v11 = *(_BYTE *)(a2 + 566);
  if ( !v11 )
  {
    if ( v4 < *(_QWORD *)(a2 + 32) )
    {
      v141 = *(unsigned __int8 *)(a2 + 565);
      goto LABEL_27;
    }
    v46 = KiComputeNewPriority(a2, 1);
    if ( !v10 )
      KiUpdateThreadPriority(0LL, a2, (PVOID *)(unsigned int)v46, 0);
    KiTryScheduleNextForegroundBoost(a2);
    goto LABEL_72;
  }
  if ( *(char *)(a2 + 195) < 16 )
  {
    v12 = 0;
    v13 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
    if ( v4 >= *(_QWORD *)(a2 + 32) )
    {
      v12 = 4;
      if ( v13 < 2 )
        v12 = 5;
    }
    if ( v12 >= 4u || *(char *)(a2 + 563) >= 14 || v13 >= 2 && !*(_BYTE *)(a2 + 564) )
    {
      v48 = *(_BYTE *)(a2 + 195);
      v12 |= 8u;
      if ( v48 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1850LL) == 2
          && (p_DpcData = *(unsigned __int8 *)(a2 + 564),
              v113 = p_DpcData & 0xF,
              (p_DpcData & 0xF) != 0 && (*(_DWORD *)(a2 + 120) & 8) == 0) )
        {
          v114 = v113 + *(_BYTE *)(a2 + 563);
          *(_BYTE *)(a2 + 564) = v113;
          v115 = v48 - ((unsigned __int8)p_DpcData >> 4) - 1;
          v48 = v114;
          if ( v115 >= v114 )
            v48 = v115;
        }
        else
        {
          v49 = *(_BYTE *)(a2 + 564);
          v50 = *(_BYTE *)(a2 + 563);
          p_DpcData = v49;
          if ( (char)(v48 - (v49 >> 4) - (v49 & 0xF) - 1) >= v50 )
            v50 = v48 - (*(_BYTE *)(a2 + 564) >> 4) - (v49 & 0xF) - 1;
          v48 = v50;
          if ( v49 )
          {
            if ( (v49 & 0xF) != 0 )
              *(_DWORD *)(a2 + 872) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(a2 + 564) = 0;
          }
        }
        v51 = *(_DWORD *)(a2 + 856);
        v145 = 0;
        if ( v51 )
        {
          _BitScanReverse((unsigned int *)&p_DpcData, v51);
          if ( v48 < (int)p_DpcData )
            v48 = p_DpcData;
          v145 = p_DpcData;
        }
      }
      if ( !v10 )
      {
        v52 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( v48 > *(char *)(a2 + 195) )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v116 = (_QWORD *)(a2 + 808);
            if ( *(_QWORD *)(a2 + 808) == 1LL )
            {
              p_DpcData = (__int64)&v52[541].DpcData;
              if ( v52 != (struct _KDPC *)-34680LL )
              {
                *v116 = *(_QWORD *)p_DpcData;
                *(_QWORD *)p_DpcData = v116;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
                KiAbQueueAutoBoostDpc(v52);
              }
            }
          }
        }
        v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
        *(_BYTE *)(a2 + 195) = v48;
        if ( !v5 )
        {
          LOBYTE(p_DpcData) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)v48, p_DpcData);
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(a2 + 544) + 1850LL) == 2 )
      v12 |= 2u;
    if ( ((unsigned __int8)~v12 & ((*(_DWORD *)(a2 + 120) & 8) == 0)) != 0 )
    {
      v14 = (PVOID *)(unsigned int)*(char *)(a2 + 195);
      if ( *(char *)(a2 + 195) > 0 )
      {
        v15 = *(_BYTE *)(a2 + 564);
        if ( !v15 )
        {
          v16 = v12 >> 1;
LABEL_19:
          v17 = *(char *)(a2 + 563);
          v18 = v17 + v7;
          if ( (v16 & 1) != 0 )
            v18 += (char)PsPrioritySeparation;
          if ( v18 >= 16 )
            v18 = 15;
          if ( v18 > (int)v14 )
          {
            v71 = 0;
            if ( v18 > v17 + v7 )
              v71 = v18 - v17 - v7;
            *(_BYTE *)(a2 + 564) = v15 ^ (v71 ^ v15) & 0xF;
            v72 = (struct _KDPC *)KeGetCurrentPrcb();
            if ( (char)v18 > (char)v14 )
            {
              if ( *(_BYTE *)(a2 + 793) )
              {
                v92 = (_QWORD *)(a2 + 808);
                if ( *(_QWORD *)(a2 + 808) == 1LL )
                {
                  v14 = &v72[541].DpcData;
                  if ( v72 != (struct _KDPC *)-34680LL )
                  {
                    *v92 = *v14;
                    *v14 = v92;
                    _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
                    KiAbQueueAutoBoostDpc(v72);
                  }
                }
              }
            }
            v5 = (*(_DWORD *)(a2 + 120) & 0x400000) == 0;
            *(_BYTE *)(a2 + 195) = v18;
            if ( !v5 )
            {
              LOBYTE(v14) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)(char)v18, v14);
            }
          }
LABEL_24:
          v11 = *(_BYTE *)(a2 + 566);
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
    if ( !KiForegrounBoostVelocityFlag && (v12 & 6) == 6 && (*(_DWORD *)(a2 + 120) & 8) == 0 && *(char *)(a2 + 195) > 0 )
      KiScheduleNextForegroundBoost(a2);
    goto LABEL_24;
  }
  v19 = 1;
LABEL_25:
  if ( v11 != 2 )
    goto LABEL_26;
  v53 = *(_BYTE *)(a2 + 195);
  if ( v53 > 0 )
  {
    v54 = *(_BYTE *)(a2 + 567);
    if ( v53 < v54 && v53 < 13 )
    {
      v55 = *(unsigned int *)(a2 + 120);
      if ( (v55 & 8) == 0 )
      {
        v56 = 13;
        v57 = *(_DWORD *)(a2 + 120);
        if ( v54 < 13 )
          v56 = *(_BYTE *)(a2 + 567);
        *(_BYTE *)(a2 + 564) += 16 * (v56 - v53);
        v58 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( v56 > v53 )
        {
          if ( *(_BYTE *)(a2 + 793) )
          {
            v117 = (PVOID *)(a2 + 808);
            if ( *(_QWORD *)(a2 + 808) == 1LL )
            {
              v118 = &v58[541].DpcData;
              if ( v58 != (struct _KDPC *)-34680LL )
              {
                *v117 = *v118;
                *v118 = v117;
                _InterlockedIncrement16((volatile signed __int16 *)(a2 + 868));
                KiAbQueueAutoBoostDpc(v58);
                v57 = *(_DWORD *)(a2 + 120);
              }
            }
          }
        }
        *(_BYTE *)(a2 + 195) = v56;
        if ( (v57 & 0x400000) != 0 )
        {
          LOBYTE(v55) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 968), (unsigned int)v56, v55);
        }
        v59 = *(_QWORD *)(a2 + 32);
        if ( v4 > v59 || v59 - v4 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(a2 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
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
    v47 = v4 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(a2 + 651);
    if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    *(_QWORD *)(a2 + 32) = v47;
    goto LABEL_27;
  }
  v70 = *(_QWORD *)(a2 + 32);
  if ( v4 > v70 || v70 - v4 < (unsigned int)KiLockQuantumTarget )
    *(_QWORD *)(a2 + 32) = v4 + (unsigned int)KiLockQuantumTarget;
LABEL_27:
  v20 = *(_DWORD *)(a2 + 588);
  v137 = v20;
  *(_WORD *)(a2 + 565) = 0;
  v21 = *(_DWORD *)(a2 + 484) || *(_BYTE *)(a2 + 390) == 1;
  v22 = 0;
  v23 = _bittestandreset((signed __int32 *)(a2 + 116), 1u);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 )
    KiComputeThreadAffinity(a2);
  v24 = *(_WORD *)(a2 + 584);
  v25 = *(_QWORD *)(a2 + 576);
  WORD4(v143) = v24;
  *(_QWORD *)&v143 = v25;
  if ( KiForceIdleDisabled )
    goto LABEL_34;
  if ( KiForceIdleState != 4 )
  {
    v24 = WORD4(v143);
    v25 = v143;
LABEL_34:
    if ( ((v25 - 1) & v25) != 0 )
    {
      if ( *(_BYTE *)(a2 + 125) )
      {
        v27 = KiHeteroChooseTargetProcessor(v140, a2, &v143, &v139);
      }
      else
      {
        v26 = v140;
        if ( KiPerfIsoEnabled && (unsigned __int8)KiIsThreadRankBiased(a2, v140, 0x140000000uLL) && !v21 )
          v22 = 1;
        v27 = KiChooseTargetProcessor(v26, a2, (unsigned int)&v143, (unsigned int)&v139, v22);
      }
    }
    else
    {
      v81 = KeGetCurrentPrcb();
      _BitScanReverse64(&v25, v25);
      v147[1] = v25;
      v148 = 0;
      v27 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v24 + (unsigned int)v25]];
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount(v81, 1LL);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v81, 0LL);
        do
          KeYieldProcessorEx(&v148, v93, v94, v95);
        while ( *(_QWORD *)(v27 + 48) );
      }
      v82 = v139;
      if ( (*(_BYTE *)(v27 + 35) & 1) == 0 )
        v82 = 1;
      v139 = v82;
    }
    v29 = *(unsigned int *)(v27 + 36);
    *(_DWORD *)(a2 + 536) = v29;
    ThreadScb = *(_QWORD *)(a2 + 104);
    if ( ThreadScb )
      ThreadScb += *(unsigned int *)(v27 + 216);
    v142 = ThreadScb;
    if ( ThreadScb )
    {
      v79 = ThreadScb;
      while ( (*(_BYTE *)(v79 + 112) & 2) == 0 )
      {
        v79 = *(_QWORD *)(v79 + 408);
        if ( !v79 )
          goto LABEL_41;
      }
      if ( !v21 )
        goto LABEL_141;
    }
LABEL_41:
    if ( v139 )
    {
      v31 = *(_QWORD *)(v27 + 16);
      if ( v31 && v31 != *(_QWORD *)(v27 + 24) )
        __fastfail(0x1Eu);
      v32 = 2;
      if ( v23 )
        v32 = 6;
      if ( (*(_BYTE *)(a2 + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(a2, (struct _KPRCB *)v27), v33 = 1, !IsThreadRankNonZero) )
      {
        v33 = *(_BYTE *)(a2 + 195);
      }
      **(_BYTE **)(v27 + 56) = v33;
      if ( *(_QWORD *)(v27 + 33976) )
      {
        v126 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( a2 != *(_QWORD *)(v27 + 24) )
          v126 = (unsigned int)v33;
        KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v126, 0LL);
      }
      *(_QWORD *)(v27 + 16) = a2;
      v34 = *(_QWORD *)(v27 + 33976);
      if ( v34 )
        *(_BYTE *)(v34 + 16) = a2 == *(_QWORD *)(v27 + 24);
      if ( *(_BYTE *)(a2 + 388) == 1 || (v32 & 4) != 0 )
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(a2 + 388) = 3;
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
      v38 = *(_DWORD *)(a2 + 588);
      v39 = *(char *)(a2 + 195);
      *(_QWORD *)(a2 + 64) = 0LL;
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v127 = v41[6] - 1;
          v41[6] = v127;
          if ( !v127 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      v42 = v140;
      if ( v27 != v140 && *(_BYTE *)(v27 + 7) )
      {
        v43 = KeGetCurrentPrcb();
        v154 = 0LL;
        LODWORD(v154) = 6;
        ++v43->SynchCounters.IpiSendSoftwareInterruptCount;
        v155 = 0LL;
        DWORD2(v154) = v29;
        memset(v158, 0, sizeof(v158));
        v156 = *(_OWORD *)(HalpInterruptTargets + 24 * v29);
        v157 = *(_QWORD *)(HalpInterruptTargets + 24 * v29 + 16);
        v149[0] = -1;
        v149[1] = 1;
        v150[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v150[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v44 = *(void (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        v44(*(_QWORD *)(HalpInterruptController + 16), v150, &v156, 47LL, v149);
        if ( (v159 & 0x200) != 0 )
          _enable();
        v42 = v140;
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
      v128 = *(_DWORD *)result;
      result = *(_DWORD *)result & 0x40000;
      if ( (v128 & 0x100000) == 0 )
      {
        if ( !(_DWORD)result )
          goto LABEL_65;
        result = (unsigned __int8)v128;
        if ( (unsigned __int8)v128 >= v39 )
          goto LABEL_65;
      }
      v5 = HvlpVirtualProcessorsIdentityMapped == 0;
      v129 = *(_QWORD *)(v42 + 33976);
      *(_DWORD *)(v129 + 12) = 2;
      v130 = *(unsigned int *)(v27 + 36);
      if ( !v5 )
      {
LABEL_287:
        *(_DWORD *)(v129 + 8) = v130;
        result = (unsigned int)v130;
        __writemsr(0x400000C2u, (unsigned int)v130);
LABEL_65:
        if ( (xmmword_140CFC490 & 0x8000000) == 0 )
          return result;
        v135 = v137;
        v134 = v38;
        return EtwTraceIdealProcessor(a2, 1350LL, v135, v134);
      }
LABEL_286:
      LODWORD(v130) = (unsigned __int8)byte_140D006C1[2 * v130] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v130] << 6);
      goto LABEL_287;
    }
    if ( v22 )
      goto LABEL_141;
    v60 = *(_QWORD *)(v27 + 16);
    if ( !v60 )
    {
      v61 = *(_QWORD *)(v27 + 8);
      if ( v61 == a2 )
      {
        KiUpdateVPBackingThreadPriority(a2, v27, 0);
      }
      else
      {
        v5 = (*(_DWORD *)(v61 + 120) & 0x400000) == 0;
        v138[0] = 0;
        if ( !v5 && KiTryToAcquireThreadLock(v61, v138) )
        {
          if ( (*(_DWORD *)(v61 + 120) & 0x400000) != 0 )
            KiUpdateVPBackingThreadPriority(v61, v27, 0);
          KiReleaseThreadLockSafe(v61);
        }
      }
      if ( !KiGroupSchedulingEnabled )
      {
        if ( *(_BYTE *)(a2 + 195) > *(_BYTE *)(v61 + 195) )
        {
LABEL_105:
          if ( *(_BYTE *)(v61 + 388) == 2 )
            *(_BYTE *)(v61 + 565) = 1;
          v62 = 2;
          if ( v23 )
            v62 = 6;
          if ( (*(_BYTE *)(a2 + 2) & 4) == 0 || (v83 = KiIsThreadRankNonZero(a2, (struct _KPRCB *)v27), v63 = 1, !v83) )
            v63 = *(_BYTE *)(a2 + 195);
          **(_BYTE **)(v27 + 56) = v63;
          if ( *(_QWORD *)(v27 + 33976) )
          {
            v132 = (unsigned int)KiVpThreadSystemWorkPriority;
            if ( a2 != *(_QWORD *)(v27 + 24) )
              v132 = (unsigned int)v63;
            KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v132, 0LL);
          }
          *(_QWORD *)(v27 + 16) = a2;
          v64 = *(_QWORD *)(v27 + 33976);
          if ( v64 )
            *(_BYTE *)(v64 + 16) = a2 == *(_QWORD *)(v27 + 24);
          if ( *(_BYTE *)(a2 + 388) == 1 || (v62 & 4) != 0 )
            *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(a2 + 388) = 3;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
          result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
          v38 = *(_DWORD *)(a2 + 588);
          v65 = *(char *)(a2 + 195);
          *(_QWORD *)(a2 + 64) = 0LL;
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
          v68 = v140;
          if ( v140 == v27 )
            goto LABEL_65;
          v69 = KeGetCurrentPrcb();
          v152 = 0LL;
          LODWORD(v152) = 6;
          ++v69->SynchCounters.IpiSendSoftwareInterruptCount;
          v153 = 0LL;
          DWORD2(v152) = v29;
          HalpInterruptSendIpi(&v152, 0x2Fu);
          result = (unsigned int)KiVelocityFlags;
          if ( (KiVelocityFlags & 2) == 0 )
            goto LABEL_65;
          result = *(_QWORD *)(v27 + 33976);
          if ( !result )
            goto LABEL_65;
          if ( !*(_QWORD *)(v68 + 33976) )
            goto LABEL_65;
          if ( v65 < 8 )
            goto LABEL_65;
          v133 = *(_DWORD *)result;
          result = *(_DWORD *)result & 0x40000;
          if ( (v133 & 0x100000) == 0 )
          {
            if ( !(_DWORD)result )
              goto LABEL_65;
            result = (unsigned __int8)v133;
            if ( (unsigned __int8)v133 >= v65 )
              goto LABEL_65;
          }
          v5 = HvlpVirtualProcessorsIdentityMapped == 0;
          v129 = *(_QWORD *)(v68 + 33976);
          *(_DWORD *)(v129 + 12) = 2;
          v130 = *(unsigned int *)(v27 + 36);
          if ( !v5 )
            goto LABEL_287;
          goto LABEL_286;
        }
        goto LABEL_141;
      }
      if ( KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v27, v61, a2, &v142) )
        goto LABEL_105;
      goto LABEL_160;
    }
    KiTryToUpdateVPBackingThreadPriority(*(_QWORD *)(v27 + 16));
    if ( KiGroupSchedulingEnabled )
    {
      if ( !KiEvaluateGroupSchedulingPreemption((struct _KPRCB *)v27, v60, a2, &v142) )
      {
LABEL_160:
        ThreadScb = v142;
LABEL_141:
        v20 = v137;
        goto LABEL_142;
      }
    }
    else if ( *(_BYTE *)(a2 + 195) <= *(_BYTE *)(v60 + 195) )
    {
      goto LABEL_141;
    }
    *(_BYTE *)(v60 + 565) = 1;
    v87 = 2;
    if ( v23 )
      v87 = 6;
    if ( (*(_BYTE *)(a2 + 2) & 4) == 0 || (v96 = KiIsThreadRankNonZero(a2, (struct _KPRCB *)v27), v88 = 1, !v96) )
      v88 = *(_BYTE *)(a2 + 195);
    **(_BYTE **)(v27 + 56) = v88;
    if ( *(_QWORD *)(v27 + 33976) )
    {
      v131 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a2 != *(_QWORD *)(v27 + 24) )
        v131 = (unsigned int)v88;
      KiSetSchedulerAssistPriority(*(_QWORD *)(v27 + 33976), v131, 0LL);
    }
    *(_QWORD *)(v27 + 16) = a2;
    v89 = *(_QWORD *)(v27 + 33976);
    if ( v89 )
      *(_BYTE *)(v89 + 16) = a2 == *(_QWORD *)(v27 + 24);
    if ( *(_BYTE *)(a2 + 388) == 1 || (v87 & 4) != 0 )
      *(_DWORD *)(a2 + 132) = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    v90 = v151;
    *(_BYTE *)(a2 + 388) = 3;
    KiInsertDeferredReadyList(v90, v60);
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v38 = *(_DWORD *)(a2 + 588);
    v91 = *(char *)(a2 + 195);
    KiReleaseThreadLockSafe(a2);
    result = KiHvEnlightenedGuestPriorityKick(v140, v27, v91);
    goto LABEL_65;
  }
  v119 = *(unsigned int *)(a2 + 536);
  LODWORD(v119) = v119 & 0x7FFFFFFF;
  v27 = KiProcessorBlock[v119];
  if ( !KiPrcbInGroupAffinity(v27, (__int64)&v143) )
  {
    _BitScanReverse64(&v122, v143);
    v146 = v122;
    v119 = *(unsigned int *)(v121 + 4LL * ((unsigned int)v122 + (WORD4(v143) << 6)) + 13640912);
    v27 = *(_QWORD *)(v121 + 8 * v119 + 13622464);
  }
  v123 = KeGetCurrentPrcb();
  v147[0] = 0;
  while ( 1 )
  {
    LOBYTE(v120) = 1;
    KiSetVpThreadSpinLockCount(v123, v120);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(v123, 0LL);
    do
      KeYieldProcessorEx(v147, v120, v124, v125);
    while ( *(_QWORD *)(v27 + 48) );
  }
  *(_DWORD *)(a2 + 536) = v119;
  ThreadScb = KiGetThreadScb(a2, v27, 0LL);
  v142 = ThreadScb;
LABEL_142:
  v73 = ThreadScb;
  if ( !v23 )
  {
    ThreadScb = v142;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
  }
  if ( !ThreadScb )
  {
    v73 = *(_QWORD *)(a2 + 104);
    if ( v73 )
      v73 += *(unsigned int *)(v27 + 216);
  }
  v74 = *(_QWORD *)(v27 + 33976);
  if ( v74 )
    *(_BYTE *)(v74 + 16) = 0;
  v75 = 0;
  *(_BYTE *)(a2 + 388) = 1;
  v136 = 0;
  if ( v73 && (*(_DWORD *)(a2 + 120) & 0xC00) == 0 )
  {
    if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v73, v28, 0, (bool *)&v136) )
    {
      KiAddThreadToScbQueue(v27, v86, a2, v141);
      goto LABEL_151;
    }
    v75 = v136;
  }
  KiAddThreadToPrcbQueue(v27, a2, *(char *)(a2 + 195), v141, v75);
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 48), 0LL);
  result = KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v76 = *(_DWORD *)(a2 + 588);
  *(_QWORD *)(a2 + 64) = 0LL;
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
    v134 = v76;
    v135 = v20;
    return EtwTraceIdealProcessor(a2, 1350LL, v135, v134);
  }
  return result;
}
