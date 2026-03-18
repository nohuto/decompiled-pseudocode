/*
 * XREFs of KiDirectSwitchThread @ 0x1402DE570
 * Callers:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x1402BE820 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402E936C (KiSetBasePriorityAndClearDecrement.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KiScheduleNextForegroundBoost @ 0x140314968 (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x14032428C (KiGetComparisonRanks.c)
 *     KiAbProcessThreadPriorityModification @ 0x14035F550 (KiAbProcessThreadPriorityModification.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x14051A2D0 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x14051A470 (KiEndCounterAccumulation.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051E168 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceReadyThread @ 0x1405A6540 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v3; // rbx
  struct _SINGLE_LIST_ENTRY v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // r12
  __int64 *v10; // rsi
  __int64 *v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebp
  char v16; // r8
  unsigned int v17; // esi
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  __int64 v23; // r15
  __int64 v24; // r11
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 p_AbPropagateBoostsList; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // al
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v40; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v42; // zf
  char v43; // r15
  unsigned __int8 v44; // si
  unsigned int v45; // eax
  char v46; // bp
  char v47; // cl
  unsigned int v48; // eax
  struct _KPRCB *v49; // rcx
  int v50; // r11d
  int v51; // ebp
  char v52; // cl
  struct _KPRCB *v53; // rcx
  char v54; // si
  struct _KPRCB *v55; // rbp
  _DWORD *v56; // rcx
  int v57; // ebp
  unsigned __int64 v58; // r9
  unsigned int v59; // edx
  unsigned int v60; // ecx
  __int64 v61; // r8
  int v62; // ecx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r13
  __int64 v65; // r14
  __int64 v66; // r8
  char v67; // cl
  __int64 v68; // rax
  struct _KPRCB *v69; // rcx
  _DWORD *v70; // rdx
  bool result; // al
  __int64 v72; // rcx
  _QWORD *i; // rcx
  __int64 v74; // rax
  __int64 v75; // rsi
  __int64 v76; // r8
  unsigned int v77; // edx
  __int64 v78; // rcx
  __int64 v79; // r10
  __int64 v80; // r10
  __int64 v81; // r10
  char IsThreadRankNonZero; // al
  unsigned __int64 v83; // rcx
  unsigned int v84; // r8d
  __int64 v85; // rcx
  __int64 v86; // rax
  volatile signed __int32 *v87; // r15
  __int64 *v88; // rcx
  __int64 **v89; // rax
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  _DWORD *v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int GuestSchedulerAssistPriority; // eax
  int v100; // edx
  int v101; // r9d
  int v102; // r10d
  __int64 v103; // rcx
  char v104; // al
  __int64 v105; // rcx
  char v106; // al
  char v107; // al
  unsigned __int8 v108; // cl
  unsigned int v109; // esi
  char v110; // al
  char v111; // cl
  int v112; // eax
  int v113; // eax
  int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  unsigned __int64 v117; // [rsp+30h] [rbp-88h]
  __int64 v118; // [rsp+30h] [rbp-88h]
  unsigned int ThreadEffectiveRankNonZero; // [rsp+38h] [rbp-80h] BYREF
  int v120; // [rsp+3Ch] [rbp-7Ch]
  int v121; // [rsp+40h] [rbp-78h] BYREF
  int v122; // [rsp+44h] [rbp-74h]
  int v123; // [rsp+48h] [rbp-70h] BYREF
  __int64 v124; // [rsp+50h] [rbp-68h]
  unsigned __int64 v125; // [rsp+58h] [rbp-60h]
  _SINGLE_LIST_ENTRY v126; // [rsp+60h] [rbp-58h] BYREF
  bool v127; // [rsp+C0h] [rbp+8h]
  unsigned int v130; // [rsp+D8h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 11528);
  v5.Next = *(struct _SINGLE_LIST_ENTRY **)v3;
  *(_QWORD *)(a1 + 11528) = *(_QWORD *)v3;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v3 - 96) & 0x120000) != 0x20000 )
  {
    *(struct _SINGLE_LIST_ENTRY *)v3 = v5;
    result = 0;
    *(_QWORD *)(a1 + 11528) = v3;
    return result;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v3 - 216, 1LL, a2, 1LL);
  v6 = *(_QWORD *)(v3 - 112);
  v7 = *(_QWORD *)(a1 + 8);
  v130 = 0;
  ThreadEffectiveRankNonZero = 0;
  v124 = v6;
  if ( v6 )
  {
    v74 = *(unsigned int *)(a1 + 216);
    v42 = v74 + v6 == 0;
    v75 = v74 + v6;
    v124 = v75;
    if ( !v42 )
    {
      v76 = v75;
      v77 = 0;
      if ( *(char *)(v3 - 21) < 16
        && (*(_DWORD *)(v3 - 96) & 0x200) == 0
        && !*(_DWORD *)(v3 + 268)
        && *(_BYTE *)(v3 + 174) != 1 )
      {
        v78 = v75;
        do
        {
          if ( (*(_BYTE *)(v78 + 112) & 2) != 0 )
          {
            v130 = -1;
            goto LABEL_152;
          }
          v78 = *(_QWORD *)(v78 + 408);
        }
        while ( v78 );
        do
        {
          v77 = *(_DWORD *)(v76 + 116);
          if ( v77 )
            break;
          v76 = *(_QWORD *)(v76 + 408);
        }
        while ( v76 );
      }
      v130 = v77;
      if ( v77 )
      {
LABEL_152:
        v79 = *(_QWORD *)(v7 + 104);
        if ( v79 )
        {
          v80 = *(unsigned int *)(a1 + 216) + v79;
          if ( v80 )
          {
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v7, v80, v76, 1, 0LL);
            if ( ThreadEffectiveRankNonZero )
              KiGetComparisonRanks(v75, v81, &v130, &ThreadEffectiveRankNonZero);
          }
        }
      }
    }
  }
  v8 = *(unsigned __int8 *)(v3 + 371);
  v9 = 0;
  v10 = *(__int64 **)(v3 - 8);
  v120 = 1;
  v11 = &v10[6 * v8];
  do
  {
    if ( *((_BYTE *)v10 + 17) < 5u )
    {
      v87 = (volatile signed __int32 *)v10[4];
      KiAcquireKobjectLockSafe(v87);
      if ( *((_BYTE *)v10 + 17) == 4 )
      {
        v88 = (__int64 *)*v10;
        v89 = (__int64 **)v10[1];
        if ( *(__int64 **)(*v10 + 8) != v10 || *v89 != v10 )
          __fastfail(3u);
        *v89 = v88;
        v88[1] = (__int64)v89;
      }
      _InterlockedAnd(v87, 0xFFFFFF7F);
    }
    v10 += 6;
  }
  while ( v10 != v11 );
  v127 = *(_QWORD *)(a1 + 11528) == 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v12 = __rdtsc();
  v13 = v12 - *(_QWORD *)(a1 + 32448);
  v14 = v13 + *(unsigned int *)(v7 + 80);
  v125 = v13 + *(_QWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 72) = v125;
  if ( v14 > 0xFFFFFFFF )
    LODWORD(v14) = -1;
  *(_QWORD *)(a1 + 32448) = v12;
  v15 = 3;
  v16 = *(_BYTE *)(v7 + 2);
  *(_DWORD *)(v7 + 80) = v14;
  v17 = 100;
  if ( (v16 & 0x3E) != 0 )
  {
    if ( (v16 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v7 + 124) + 32464) += *(_QWORD *)(a1 + 32448)
                                                                      - *(_QWORD *)(a1 + 32456);
      v16 &= ~0x10u;
      *(_QWORD *)(a1 + 32456) = 0LL;
    }
    if ( (v16 & 0x20) != 0 )
    {
      v18 = *(_QWORD *)(v7 + 1528);
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 33128);
        v20 = *(_QWORD *)(a1 + 33136);
        if ( v19 && v20 )
        {
          if ( *(_BYTE *)(v20 + 100) )
          {
            v21 = *(_DWORD *)(v20 + 116);
          }
          else
          {
            v21 = *(_DWORD *)(v20 + 72);
            if ( v21 >= *(_DWORD *)(v19 + 368) )
              v21 = *(_DWORD *)(v19 + 368);
          }
        }
        else
        {
          v21 = 100;
        }
        if ( v21 < 0x4B )
          v22 = v21 / 0x19;
        else
          v22 = 3;
        v23 = *(unsigned __int8 *)(a1 + 33208);
        v24 = v22;
        v25 = v23 + 2LL * v22;
        v26 = *(_QWORD *)(v18 + 8 * v25);
        v27 = (_QWORD *)(v18 + 8 * v25);
        v28 = KiTimelineBitmapTime;
        *v27 = v13 + v26;
        v29 = *(_DWORD *)(v18 + 192);
        if ( v28 > v29 )
        {
          LODWORD(v118) = v28;
          if ( v28 - v29 >= 0x20 )
            HIDWORD(v118) = 1;
          else
            HIDWORD(v118) = (*(_DWORD *)(v18 + 196) << (v28 - v29)) | 1;
          *(_QWORD *)(v18 + 192) = v118;
        }
        else
        {
          v30 = v29 - v28;
          if ( v30 < 0x20 )
            *(_DWORD *)(v18 + 196) |= 1 << v30;
        }
        if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(v7 + 512) == 2 )
          *(_QWORD *)(v18 + 16 * v24 + 8) += v13;
        if ( *(_QWORD *)(v7 + 1472) )
        {
          *(_QWORD *)(v18 + 8 * (v23 + 16 + 2 * v24)) += v13;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v7 + 1472) + 1528LL) + 8 * (v23 + 8 + 2 * v24)),
            v13);
        }
      }
      v16 &= ~0x20u;
    }
    if ( (v16 & 0x40) != 0 )
    {
      v94 = *(_QWORD *)(v7 + 968);
      if ( v94 )
        *(_BYTE *)(v94 + 64) = 0;
      v16 &= ~0x40u;
    }
    if ( (v16 & 0x3E) != 0 )
    {
      v72 = *(_QWORD *)(v7 + 104);
      if ( v72 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v72); i; i = (_QWORD *)i[51] )
          *i += v13;
      }
      if ( (*(_BYTE *)(v7 + 2) & 8) != 0
        && (*(_QWORD *)(v7 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a1 + 32488) += v13;
      }
      if ( *(_BYTE *)(v7 + 125) )
      {
        if ( (unsigned __int8)*(_DWORD *)(v7 + 512) == 2 )
          *(_QWORD *)(a1 + 32504) += v13;
        else
          *(_QWORD *)(a1 + 32496) += v13;
      }
      if ( *(_QWORD *)(v7 + 360) )
        KiEndCounterAccumulation(v7);
    }
  }
  v31 = __rdtsc();
  v32 = (unsigned __int64)HIDWORD(v31) << 32;
  v33 = v31;
  p_AbPropagateBoostsList = v31 - *(_QWORD *)(a1 + 32448);
  *(_QWORD *)(a1 + 32568) += p_AbPropagateBoostsList;
  v35 = *(unsigned __int8 *)(v7 + 2);
  if ( (v35 & 0x20) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 33128);
    v37 = *(_QWORD *)(a1 + 33136);
    if ( v36 && v37 )
    {
      if ( *(_BYTE *)(v37 + 100) )
      {
        v17 = *(_DWORD *)(v37 + 116);
      }
      else
      {
        v17 = *(_DWORD *)(v37 + 72);
        if ( v17 >= *(_DWORD *)(v36 + 368) )
          v17 = *(_DWORD *)(v36 + 368);
      }
    }
    if ( v17 < 0x4B )
      v15 = v17 / 0x19;
    v32 = a1 + 8 * (*(unsigned __int8 *)(a1 + 33208) + 4072LL + 2LL * v15);
    *(_QWORD *)v32 += p_AbPropagateBoostsList;
    v35 = *(unsigned __int8 *)(v7 + 2);
  }
  if ( (v35 & 0x40) != 0 )
  {
    v95 = *(_QWORD *)(v7 + 968);
    if ( v95 )
      *(_BYTE *)(v95 + 64) = 1;
  }
  *(_QWORD *)(a1 + 32448) = v33;
  v38 = *(_BYTE *)(v7 + 2);
  if ( (v38 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 32456) = v33;
    v38 = *(_BYTE *)(v7 + 2);
  }
  if ( (v38 & 2) != 0 )
    KiBeginCounterAccumulation(v7, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a1 + 6) )
  {
    LOBYTE(v35) = 2;
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(v35);
  }
  _enable();
  CurrentPrcb = KeGetCurrentPrcb();
  v40 = *(_QWORD *)(v7 + 32);
  v117 = *(_QWORD *)(v3 - 144);
  v121 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v96 = SchedulerAssist[6];
      SchedulerAssist[6] = v96 + 1;
      if ( v96 == -1 )
LABEL_223:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 - 152), 0LL) )
  {
    v92 = CurrentPrcb->SchedulerAssist;
    if ( v92 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v97 = v92[6] - 1;
        v92[6] = v97;
        if ( !v97 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v121, v32, p_AbPropagateBoostsList, v33);
    while ( *(_QWORD *)(v3 - 152) );
    v93 = CurrentPrcb->SchedulerAssist;
    if ( v93 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v98 = v93[6];
        v93[6] = v98 + 1;
        if ( v98 == -1 )
          goto LABEL_223;
      }
    }
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(v3 + 368) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)(v3 + 360)) != 0LL )
  {
    v42 = (*(_DWORD *)(v3 - 96) & 0x400000) == 0;
    v120 = 0;
    if ( v42 )
    {
      LOBYTE(v33) = 0;
    }
    else
    {
      _InterlockedOr(*(volatile signed __int32 **)(v3 + 752), 0x100000u);
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v3 - 216);
      v100 = GuestSchedulerAssistPriority;
      v101 = 32;
      if ( GuestSchedulerAssistPriority >= 16 )
      {
        v101 = GuestSchedulerAssistPriority;
        v100 = 15;
      }
      v102 = *(_DWORD *)(v3 + 808);
      if ( v100 != v102 )
      {
        v103 = (char)v100 + v3;
        v104 = *(_BYTE *)(v103 + 608);
        if ( v104 == -1 )
          KeBugCheckEx(0x157u, v3 - 216, (char)v100, 1uLL, 0LL);
        *(_BYTE *)(v103 + 608) = v104 + 1;
        *(_DWORD *)(v3 + 640) |= 1 << v100;
        if ( v102 != 32 )
        {
          v105 = (char)v102 + v3;
          v106 = *(_BYTE *)(v105 + 608);
          if ( !v106 )
            KeBugCheckEx(0x157u, v3 - 216, (char)v102, 2uLL, 0LL);
          v107 = v106 - 1;
          *(_BYTE *)(v105 + 608) = v107;
          if ( !v107 )
            *(_DWORD *)(v3 + 640) ^= 1 << v102;
        }
        *(_DWORD *)(v3 + 808) = v100;
      }
      v108 = v101;
      if ( v101 == 32 )
        v108 = v100;
      v109 = (char)KiComputePriorityFloor(v3 - 216, v108);
      if ( v109 != *(char *)(v3 - 21) )
      {
        KiSetBasePriorityAndClearDecrement(v3 - 216, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, v3 - 216, (_SINGLE_LIST_ENTRY *)v109, 0);
      }
      if ( (*(_DWORD *)(v3 - 96) & 0x400000) != 0 )
        _InterlockedAnd(*(volatile signed __int32 **)(v3 + 752), 0xFFEFFFFF);
      LOBYTE(v33) = 1;
    }
    v43 = *(_BYTE *)(v3 - 21);
    if ( v43 >= 16 )
    {
      v54 = 1;
LABEL_97:
      v55 = KeGetCurrentPrcb();
      v123 = 0;
      v56 = v55->SchedulerAssist;
      if ( v56 )
      {
        if ( v55->NestingLevel <= 1u )
        {
          v112 = v56[6];
          v56[6] = v112 + 1;
          if ( v112 == -1 )
LABEL_261:
            KiRemoveSystemWorkPriorityKick(v55);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v90 = v55->SchedulerAssist;
        if ( v90 )
        {
          if ( v55->NestingLevel <= 1u )
          {
            v113 = v90[6] - 1;
            v90[6] = v113;
            if ( !v113 )
              KiRemoveSystemWorkPriorityKick(v55);
          }
        }
        do
          KeYieldProcessorEx(&v123, v32, p_AbPropagateBoostsList, v33);
        while ( *(_QWORD *)(a1 + 48) );
        v91 = v55->SchedulerAssist;
        if ( v91 )
        {
          if ( v55->NestingLevel <= 1u )
          {
            v114 = v91[6];
            v91[6] = v114 + 1;
            if ( v114 == -1 )
              goto LABEL_261;
          }
        }
      }
      v57 = *(char *)(v7 + 195);
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( v130 <= ThreadEffectiveRankNonZero && (v130 != ThreadEffectiveRankNonZero || v43 > v57) )
        {
          *(_BYTE *)(v7 + 565) = 1;
          goto LABEL_116;
        }
        v58 = v125;
        v59 = 1 << v43;
        v60 = *(_DWORD *)(*(_QWORD *)(a1 + 33864) + 8LL) | *(_DWORD *)(a1 + 31768);
        v61 = (unsigned int)KiDirectQuantumTarget;
        if ( v125 + (unsigned int)KiDirectQuantumTarget <= v40 && !v130 )
        {
          if ( v57 >= 16 )
          {
            v57 = 15;
            if ( v43 >= 16 )
              v57 = v43;
          }
          v62 = v59 & v60;
          if ( v62 )
            v63 = (unsigned int)KiDirectQuantumTarget + v117;
          else
            v63 = v40 + v117 - v125;
          _interlockedbittestandset((volatile signed __int32 *)(v3 - 96), 5u);
          v64 = v40 - v61;
          *(_QWORD *)(v3 - 184) = v63;
          v54 = 0;
          if ( v62 )
            v58 = v64;
          *(_QWORD *)(v7 + 32) = v58;
          if ( a3 )
          {
            v65 = v3 - 216;
            if ( v43 != v57 )
            {
              KiAbProcessThreadPriorityModification(v3 - 216, (unsigned __int8)v57, 1LL);
              v42 = (*(_DWORD *)(v3 - 96) & 0x400000) == 0;
              *(_BYTE *)(v3 - 21) = v57;
              if ( !v42 )
              {
                LOBYTE(v66) = 1;
                KiSetSchedulerAssistPriority(*(_QWORD *)(v3 + 752), (unsigned int)(char)v57, v66);
              }
              *(_BYTE *)(v3 + 348) += 16 * (v57 - v43);
            }
            goto LABEL_117;
          }
          goto LABEL_116;
        }
        if ( v59 > v60 )
        {
          if ( !v130 )
            goto LABEL_116;
          if ( v60 <= 1 )
          {
            v84 = *(_DWORD *)(*(_QWORD *)(v124 + 416) + 116LL);
            v85 = *(_QWORD *)(a1 + 31864);
            if ( (v85 & 1) != 0 )
            {
              if ( v85 == 1 )
                goto LABEL_116;
              v86 = v85 ^ ((a1 + 31856) | 1);
            }
            else
            {
              v86 = *(_QWORD *)(a1 + 31864);
            }
            if ( !v86 )
            {
LABEL_116:
              v65 = v3 - 216;
LABEL_117:
              *(_BYTE *)(v3 + 349) = 0;
              v9 = 1;
              *(_DWORD *)(v3 + 320) = *(_DWORD *)(a1 + 36);
              if ( (*(_BYTE *)(v3 - 214) & 4) == 0
                || (IsThreadRankNonZero = KiIsThreadRankNonZero(v65, a1), v67 = 1, !IsThreadRankNonZero) )
              {
                v67 = *(_BYTE *)(v3 - 21);
              }
              **(_BYTE **)(a1 + 56) = v67;
              v68 = *(_QWORD *)(a1 + 33976);
              if ( v68 )
              {
                v115 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v65 != *(_QWORD *)(a1 + 24) )
                  v115 = (unsigned int)v67;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v115, 0LL);
                v68 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v65;
              if ( v68 )
                *(_BYTE *)(v68 + 16) = v65 == *(_QWORD *)(a1 + 24);
              if ( *(_BYTE *)(v3 + 172) == 1 )
                *(_DWORD *)(v3 - 84) = *(_DWORD *)(v3 - 84) - *(_DWORD *)(v3 + 220) + MEMORY[0xFFFFF78000000320];
              *(_BYTE *)(v3 + 172) = 3;
              goto LABEL_125;
            }
            if ( *(_DWORD *)(v86 + 28) != v84 )
            {
              if ( *(_DWORD *)(v86 + 28) > v84 )
                goto LABEL_116;
              v9 = 0;
LABEL_125:
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
              KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
              if ( v54 )
              {
                v83 = v117 + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(v3 + 435);
                if ( (*(_DWORD *)(v3 - 96) & 0x20) != 0 )
                  _interlockedbittestandreset((volatile signed __int32 *)(v3 - 96), 5u);
                *(_QWORD *)(v3 - 184) = v83;
              }
              goto LABEL_126;
            }
            if ( *(unsigned __int16 *)(v86 + 26) < v59 )
              goto LABEL_116;
          }
        }
      }
      v9 = 0;
      goto LABEL_125;
    }
    v44 = 0;
    v45 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v3 + 220);
    if ( v117 >= *(_QWORD *)(v3 - 184) )
    {
      v44 = 4;
      if ( v45 < 2 )
        v44 = 5;
    }
    if ( v44 >= 4u || *(char *)(v3 + 347) >= 14 || v45 >= 2 && !*(_BYTE *)(v3 + 348) )
    {
      v46 = *(_BYTE *)(v3 - 21);
      v44 |= 8u;
      if ( v46 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(*(_QWORD *)(v3 + 328) + 1850LL) == 2
          && (p_AbPropagateBoostsList = *(unsigned __int8 *)(v3 + 348),
              v32 = (unsigned __int8)p_AbPropagateBoostsList,
              LOBYTE(v32) = p_AbPropagateBoostsList & 0xF,
              (p_AbPropagateBoostsList & 0xF) != 0 && (*(_DWORD *)(v3 - 96) & 8) == 0) )
        {
          LOBYTE(p_AbPropagateBoostsList) = (unsigned __int8)p_AbPropagateBoostsList >> 4;
          v110 = v32 + *(_BYTE *)(v3 + 347);
          *(_BYTE *)(v3 + 348) = v32;
          v111 = v46 - p_AbPropagateBoostsList - 1;
          v46 = v110;
          if ( v111 >= v110 )
            v46 = v111;
        }
        else
        {
          v32 = *(unsigned __int8 *)(v3 + 348);
          v47 = *(_BYTE *)(v3 + 347);
          if ( (char)(v46 - (*(_BYTE *)(v3 + 348) >> 4) - (*(_BYTE *)(v3 + 348) & 0xF) - 1) >= v47 )
            v47 = v46 - (*(_BYTE *)(v3 + 348) >> 4) - (*(_BYTE *)(v3 + 348) & 0xF) - 1;
          v46 = v47;
          if ( (_BYTE)v32 )
          {
            if ( (v32 & 0xF) != 0 )
              *(_DWORD *)(v3 + 656) = MEMORY[0xFFFFF78000000320];
            *(_BYTE *)(v3 + 348) = 0;
          }
        }
        v48 = *(_DWORD *)(v3 + 640);
        v122 = 0;
        if ( v48 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v48);
          if ( v46 < (int)p_AbPropagateBoostsList )
            v46 = p_AbPropagateBoostsList;
          v122 = p_AbPropagateBoostsList;
        }
      }
      if ( !(_BYTE)v33 )
      {
        v49 = KeGetCurrentPrcb();
        if ( v46 > *(char *)(v3 - 21) )
        {
          if ( *(_BYTE *)(v3 + 577) )
          {
            v32 = v3 + 592;
            if ( *(_QWORD *)(v3 + 592) == 1LL )
            {
              p_AbPropagateBoostsList = (__int64)&v49->AbPropagateBoostsList;
              if ( v49 != (struct _KPRCB *)-34680LL )
              {
                *(_QWORD *)v32 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v32;
                _InterlockedIncrement16((volatile signed __int16 *)(v3 + 652));
                KiAbQueueAutoBoostDpc(v49);
              }
            }
          }
        }
        v42 = (*(_DWORD *)(v3 - 96) & 0x400000) == 0;
        *(_BYTE *)(v3 - 21) = v46;
        if ( !v42 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(*(_QWORD *)(v3 + 752), (unsigned int)v46, p_AbPropagateBoostsList);
        }
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 328) + 1850LL) == 2 )
      v44 |= 2u;
    if ( ((unsigned __int8)~v44 & ((*(_DWORD *)(v3 - 96) & 8) == 0)) != 0 )
    {
      p_AbPropagateBoostsList = (unsigned int)*(char *)(v3 - 21);
      if ( *(char *)(v3 - 21) > 0 )
      {
        v33 = *(unsigned __int8 *)(v3 + 348);
        if ( !(_BYTE)v33 )
        {
          v32 = v44;
          LOBYTE(v32) = v44 >> 1;
LABEL_77:
          v50 = *(char *)(v3 + 347);
          v51 = v50 + (char)a2;
          if ( (v32 & 1) != 0 )
            v51 += (char)PsPrioritySeparation;
          if ( v51 >= 16 )
            v51 = 15;
          if ( v51 > (int)p_AbPropagateBoostsList )
          {
            v52 = 0;
            if ( v51 > v50 + (char)a2 )
              v52 = v51 - v50 - a2;
            *(_BYTE *)(v3 + 348) = v33 ^ (v52 ^ v33) & 0xF;
            v53 = KeGetCurrentPrcb();
            if ( (char)v51 > (char)p_AbPropagateBoostsList )
            {
              if ( *(_BYTE *)(v3 + 577) )
              {
                p_AbPropagateBoostsList = v3 + 592;
                if ( *(_QWORD *)(v3 + 592) == 1LL )
                {
                  v32 = (__int64)&v53->AbPropagateBoostsList;
                  if ( v53 != (struct _KPRCB *)-34680LL )
                  {
                    *(_QWORD *)p_AbPropagateBoostsList = *(_QWORD *)v32;
                    *(_QWORD *)v32 = p_AbPropagateBoostsList;
                    _InterlockedIncrement16((volatile signed __int16 *)(v3 + 652));
                    KiAbQueueAutoBoostDpc(v53);
                  }
                }
              }
            }
            v42 = (*(_DWORD *)(v3 - 96) & 0x400000) == 0;
            *(_BYTE *)(v3 - 21) = v51;
            if ( !v42 )
            {
              LOBYTE(p_AbPropagateBoostsList) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(v3 + 752), (unsigned int)(char)v51, p_AbPropagateBoostsList);
            }
          }
LABEL_96:
          v43 = *(_BYTE *)(v3 - 21);
          v54 = v44 >> 3;
          goto LABEL_97;
        }
        if ( (v33 & 0xF0) == 0 )
        {
          v32 = v44;
          LOBYTE(v32) = v44 >> 1;
          if ( (v44 & 2) != 0 )
            goto LABEL_77;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag )
    {
      v32 = *(unsigned int *)(v3 - 96);
      if ( (v44 & 6) == 6 && (v32 & 8) == 0 && *(char *)(v3 - 21) > 0 )
        KiScheduleNextForegroundBoost(v3 - 216);
    }
    goto LABEL_96;
  }
LABEL_126:
  *(_QWORD *)(v3 - 152) = 0LL;
  v69 = KeGetCurrentPrcb();
  v70 = v69->SchedulerAssist;
  if ( v70 )
  {
    if ( v69->NestingLevel <= 1u )
    {
      v116 = v70[6] - 1;
      v70[6] = v116;
      if ( !v116 )
        KiRemoveSystemWorkPriorityKick(v69);
    }
  }
  if ( !v9 )
  {
    *(_BYTE *)(v3 + 350) = v120;
    *(_BYTE *)(v3 + 351) = a2;
    *(_QWORD *)v3 = 0LL;
    v126.Next = (struct _SINGLE_LIST_ENTRY *)v3;
    KiReadyDeferredReadyList(a1, &v126);
  }
  return v127;
}
