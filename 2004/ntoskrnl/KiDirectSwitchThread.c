/*
 * XREFs of KiDirectSwitchThread @ 0x1402EE940
 * Callers:
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1402086E0 (KiSetVpThreadSpinLockCount.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x1402141A0 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     HalRequestSoftwareInterrupt @ 0x140273DE0 (HalRequestSoftwareInterrupt.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiScheduleNextForegroundBoost @ 0x1402EF6A4 (KiScheduleNextForegroundBoost.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402F1220 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAbProcessThreadPriorityModification @ 0x140329BC0 (KiAbProcessThreadPriorityModification.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     KiGetComparisonRanks @ 0x140353720 (KiGetComparisonRanks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x140516900 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140516AA0 (KiEndCounterAccumulation.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A798 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceReadyThread @ 0x1405A2AA0 (EtwTraceReadyThread.c)
 */

bool __fastcall KiDirectSwitchThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rax
  char v10; // r12
  __int64 *v11; // rsi
  __int64 *v12; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned int v16; // ebp
  char v17; // r8
  unsigned int v18; // esi
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  __int64 v24; // r15
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 p_AbPropagateBoostsList; // r8
  char v36; // cl
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // al
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v41; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v43; // zf
  char v44; // r15
  unsigned __int8 v45; // bp
  unsigned int v46; // eax
  char v47; // si
  char v48; // al
  char v49; // cl
  unsigned int v50; // eax
  struct _KPRCB *v51; // rcx
  int v52; // r11d
  int v53; // esi
  char v54; // cl
  struct _KPRCB *v55; // rcx
  char v56; // bp
  struct _KPRCB *v57; // rsi
  _DWORD *v58; // rcx
  int v59; // esi
  unsigned __int64 v60; // r9
  unsigned int v61; // edx
  unsigned int v62; // ecx
  __int64 v63; // r8
  int v64; // ecx
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r13
  __int64 *v67; // r14
  __int64 v68; // r8
  char v69; // cl
  __int64 v70; // rax
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  bool result; // al
  __int64 v74; // rcx
  _QWORD *i; // rcx
  __int64 v76; // rax
  __int64 v77; // rsi
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
  _QWORD *v126; // [rsp+60h] [rbp-58h] BYREF
  bool v127; // [rsp+C0h] [rbp+8h]
  char v128; // [rsp+C8h] [rbp+10h]
  char v129; // [rsp+D0h] [rbp+18h]
  unsigned int v130; // [rsp+D8h] [rbp+20h] BYREF

  v129 = a3;
  v128 = a2;
  v4 = *(__int64 **)(a1 + 11528);
  v6 = *v4;
  *(_QWORD *)(a1 + 11528) = *v4;
  if ( *(_QWORD *)(a1 + 16) || (*(_DWORD *)(v4 - 12) & 0x120000) != 0x20000 )
  {
    *v4 = v6;
    result = 0;
    *(_QWORD *)(a1 + 11528) = v4;
    return result;
  }
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    EtwTraceReadyThread(v4 - 27, 1LL, (unsigned __int8)a2, 1LL);
  v7 = *(v4 - 14);
  v8 = *(_QWORD *)(a1 + 8);
  v130 = 0;
  ThreadEffectiveRankNonZero = 0;
  v124 = v7;
  if ( v7 )
  {
    v76 = *(unsigned int *)(a1 + 216);
    v43 = v76 + v7 == 0;
    v77 = v76 + v7;
    v124 = v77;
    if ( !v43 )
    {
      a3 = v77;
      a2 = 0LL;
      if ( *((char *)v4 - 21) < 16
        && (*(_DWORD *)(v4 - 12) & 0x200) == 0
        && !*((_DWORD *)v4 + 67)
        && *((_BYTE *)v4 + 174) != 1 )
      {
        v78 = v77;
        do
        {
          if ( (*(_BYTE *)(v78 + 112) & 2) != 0 )
          {
            v130 = -1;
            goto LABEL_153;
          }
          v78 = *(_QWORD *)(v78 + 408);
        }
        while ( v78 );
        do
        {
          a2 = (unsigned int)(*(_DWORD *)(a3 + 116) + a2);
          if ( (_DWORD)a2 )
            break;
          a3 = *(_QWORD *)(a3 + 408);
        }
        while ( a3 );
      }
      v130 = a2;
      if ( (_DWORD)a2 )
      {
LABEL_153:
        v79 = *(_QWORD *)(v8 + 104);
        if ( v79 )
        {
          v80 = *(unsigned int *)(a1 + 216) + v79;
          if ( v80 )
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v80, a3, a4, 0LL);
            if ( ThreadEffectiveRankNonZero )
              KiGetComparisonRanks(v77, v81, &v130, &ThreadEffectiveRankNonZero);
          }
        }
      }
    }
  }
  v9 = *((unsigned __int8 *)v4 + 371);
  v10 = 0;
  v11 = (__int64 *)*(v4 - 1);
  v120 = 1;
  v12 = &v11[6 * v9];
  do
  {
    if ( *((_BYTE *)v11 + 17) < 5u )
    {
      v87 = (volatile signed __int32 *)v11[4];
      KiAcquireKobjectLockSafe(v87, a2, a3, a4);
      if ( *((_BYTE *)v11 + 17) == 4 )
      {
        v88 = (__int64 *)*v11;
        v89 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v89 != v11 )
          __fastfail(3u);
        *v89 = v88;
        v88[1] = (__int64)v89;
      }
      _InterlockedAnd(v87, 0xFFFFFF7F);
    }
    v11 += 6;
  }
  while ( v11 != v12 );
  v127 = *(_QWORD *)(a1 + 11528) == 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v13 = __rdtsc();
  v14 = v13 - *(_QWORD *)(a1 + 32448);
  v15 = v14 + *(unsigned int *)(v8 + 80);
  v125 = v14 + *(_QWORD *)(v8 + 72);
  *(_QWORD *)(v8 + 72) = v125;
  if ( v15 > 0xFFFFFFFF )
    LODWORD(v15) = -1;
  *(_QWORD *)(a1 + 32448) = v13;
  v16 = 3;
  v17 = *(_BYTE *)(v8 + 2);
  *(_DWORD *)(v8 + 80) = v15;
  v18 = 100;
  if ( (v17 & 0x3E) != 0 )
  {
    if ( (v17 & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 8LL * *(unsigned __int8 *)(v8 + 124) + 32464) += *(_QWORD *)(a1 + 32448)
                                                                      - *(_QWORD *)(a1 + 32456);
      v17 &= ~0x10u;
      *(_QWORD *)(a1 + 32456) = 0LL;
    }
    if ( (v17 & 0x20) != 0 )
    {
      v19 = *(_QWORD *)(v8 + 1528);
      if ( v19 )
      {
        v20 = *(_QWORD *)(a1 + 33128);
        v21 = *(_QWORD *)(a1 + 33136);
        if ( v20 && v21 )
        {
          if ( *(_BYTE *)(v21 + 100) )
          {
            v22 = *(_DWORD *)(v21 + 116);
          }
          else
          {
            v22 = *(_DWORD *)(v21 + 72);
            if ( v22 >= *(_DWORD *)(v20 + 368) )
              v22 = *(_DWORD *)(v20 + 368);
          }
        }
        else
        {
          v22 = 100;
        }
        if ( v22 < 0x4B )
          v23 = v22 / 0x19;
        else
          v23 = 3;
        v24 = *(unsigned __int8 *)(a1 + 33208);
        v25 = v23;
        v26 = v24 + 2LL * v23;
        v27 = *(_QWORD *)(v19 + 8 * v26);
        v28 = (_QWORD *)(v19 + 8 * v26);
        v29 = KiTimelineBitmapTime;
        *v28 = v14 + v27;
        v30 = *(_DWORD *)(v19 + 192);
        if ( v29 > v30 )
        {
          LODWORD(v118) = v29;
          if ( v29 - v30 >= 0x20 )
            HIDWORD(v118) = 1;
          else
            HIDWORD(v118) = (*(_DWORD *)(v19 + 196) << (v29 - v30)) | 1;
          *(_QWORD *)(v19 + 192) = v118;
        }
        else
        {
          v31 = v30 - v29;
          if ( v31 < 0x20 )
            *(_DWORD *)(v19 + 196) |= 1 << v31;
        }
        if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(v8 + 512) == 2 )
          *(_QWORD *)(v19 + 16 * v25 + 8) += v14;
        if ( *(_QWORD *)(v8 + 1472) )
        {
          *(_QWORD *)(v19 + 8 * (v24 + 16 + 2 * v25)) += v14;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1472) + 1528LL) + 8 * (v24 + 8 + 2 * v25)),
            v14);
        }
      }
      v17 &= ~0x20u;
    }
    if ( (v17 & 0x40) != 0 )
    {
      v94 = *(_QWORD *)(v8 + 968);
      if ( v94 )
        *(_BYTE *)(v94 + 64) = 0;
      v17 &= ~0x40u;
    }
    if ( (v17 & 0x3E) != 0 )
    {
      v74 = *(_QWORD *)(v8 + 104);
      if ( v74 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v74); i; i = (_QWORD *)i[51] )
          *i += v14;
      }
      if ( (*(_BYTE *)(v8 + 2) & 8) != 0
        && (*(_QWORD *)(v8 + 576) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a1 + 32488) += v14;
      }
      if ( *(_BYTE *)(v8 + 125) )
      {
        if ( (unsigned __int8)*(_DWORD *)(v8 + 512) == 2 )
          *(_QWORD *)(a1 + 32504) += v14;
        else
          *(_QWORD *)(a1 + 32496) += v14;
      }
      if ( *(_QWORD *)(v8 + 360) )
        KiEndCounterAccumulation(v8);
    }
  }
  v32 = __rdtsc();
  v33 = (unsigned __int64)HIDWORD(v32) << 32;
  v34 = v32;
  p_AbPropagateBoostsList = v32 - *(_QWORD *)(a1 + 32448);
  *(_QWORD *)(a1 + 32568) += p_AbPropagateBoostsList;
  v36 = *(_BYTE *)(v8 + 2);
  if ( (v36 & 0x20) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 33128);
    v38 = *(_QWORD *)(a1 + 33136);
    if ( v37 && v38 )
    {
      if ( *(_BYTE *)(v38 + 100) )
      {
        v18 = *(_DWORD *)(v38 + 116);
      }
      else
      {
        v18 = *(_DWORD *)(v38 + 72);
        if ( v18 >= *(_DWORD *)(v37 + 368) )
          v18 = *(_DWORD *)(v37 + 368);
      }
    }
    if ( v18 < 0x4B )
      v16 = v18 / 0x19;
    v33 = a1 + 8 * (*(unsigned __int8 *)(a1 + 33208) + 4072LL + 2LL * v16);
    *(_QWORD *)v33 += p_AbPropagateBoostsList;
    v36 = *(_BYTE *)(v8 + 2);
  }
  if ( (v36 & 0x40) != 0 )
  {
    v95 = *(_QWORD *)(v8 + 968);
    if ( v95 )
      *(_BYTE *)(v95 + 64) = 1;
  }
  *(_QWORD *)(a1 + 32448) = v34;
  v39 = *(_BYTE *)(v8 + 2);
  if ( (v39 & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 32456) = v34;
    v39 = *(_BYTE *)(v8 + 2);
  }
  if ( (v39 & 2) != 0 )
    KiBeginCounterAccumulation(v8, 0LL);
  *(_BYTE *)(a1 + 32) = 0;
  if ( *(_BYTE *)(a1 + 6) )
  {
    *(_BYTE *)(a1 + 6) = 0;
    HalRequestSoftwareInterrupt(2);
  }
  _enable();
  CurrentPrcb = KeGetCurrentPrcb();
  v41 = *(_QWORD *)(v8 + 32);
  v117 = *(v4 - 18);
  v121 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v96 = SchedulerAssist[6];
      SchedulerAssist[6] = v96 + 1;
      if ( v96 == -1 )
LABEL_224:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v4 - 38, 0LL) )
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
      KeYieldProcessorEx(&v121, v33, p_AbPropagateBoostsList, v34);
    while ( *(v4 - 19) );
    v93 = CurrentPrcb->SchedulerAssist;
    if ( v93 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v98 = v93[6];
        v93[6] = v98 + 1;
        if ( v98 == -1 )
          goto LABEL_224;
      }
    }
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *((_WORD *)v4 + 184) && (*(_QWORD *)(a1 + 200) & v4[45]) != 0 )
  {
    v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
    v120 = 0;
    if ( v43 )
    {
      LOBYTE(v34) = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)v4[94], 0x100000u);
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v4 - 27);
      v100 = GuestSchedulerAssistPriority;
      v101 = 32;
      if ( GuestSchedulerAssistPriority >= 16 )
      {
        v101 = GuestSchedulerAssistPriority;
        v100 = 15;
      }
      v102 = *((_DWORD *)v4 + 202);
      if ( v100 != v102 )
      {
        v103 = (__int64)v4 + (char)v100;
        v104 = *(_BYTE *)(v103 + 608);
        if ( v104 == -1 )
          KeBugCheckEx(0x157u, (ULONG_PTR)(v4 - 27), (char)v100, 1uLL, 0LL);
        *(_BYTE *)(v103 + 608) = v104 + 1;
        *((_DWORD *)v4 + 160) |= 1 << v100;
        if ( v102 != 32 )
        {
          v105 = (__int64)v4 + (char)v102;
          v106 = *(_BYTE *)(v105 + 608);
          if ( !v106 )
            KeBugCheckEx(0x157u, (ULONG_PTR)(v4 - 27), (char)v102, 2uLL, 0LL);
          v107 = v106 - 1;
          *(_BYTE *)(v105 + 608) = v107;
          if ( !v107 )
            *((_DWORD *)v4 + 160) ^= 1 << v102;
        }
        *((_DWORD *)v4 + 202) = v100;
      }
      v108 = v101;
      if ( v101 == 32 )
        v108 = v100;
      v109 = (char)KiComputePriorityFloor((__int64)(v4 - 27), v108);
      if ( v109 != *((char *)v4 - 21) )
      {
        KiSetBasePriorityAndClearDecrement(v4 - 27, 0LL, 0LL);
        KiUpdateThreadPriority(0LL, (__int64)(v4 - 27), (_SINGLE_LIST_ENTRY *)v109, 0);
      }
      if ( (*(_DWORD *)(v4 - 12) & 0x400000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)v4[94], 0xFFEFFFFF);
      LOBYTE(v34) = 1;
    }
    v44 = *((_BYTE *)v4 - 21);
    if ( v44 >= 16 )
    {
      v56 = 1;
LABEL_98:
      v57 = KeGetCurrentPrcb();
      v123 = 0;
      v58 = v57->SchedulerAssist;
      if ( v58 )
      {
        if ( v57->NestingLevel <= 1u )
        {
          v112 = v58[6];
          v58[6] = v112 + 1;
          if ( v112 == -1 )
LABEL_262:
            KiRemoveSystemWorkPriorityKick(v57);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v90 = v57->SchedulerAssist;
        if ( v90 )
        {
          if ( v57->NestingLevel <= 1u )
          {
            v113 = v90[6] - 1;
            v90[6] = v113;
            if ( !v113 )
              KiRemoveSystemWorkPriorityKick(v57);
          }
        }
        do
          KeYieldProcessorEx(&v123, v33, p_AbPropagateBoostsList, v34);
        while ( *(_QWORD *)(a1 + 48) );
        v91 = v57->SchedulerAssist;
        if ( v91 )
        {
          if ( v57->NestingLevel <= 1u )
          {
            v114 = v91[6];
            v91[6] = v114 + 1;
            if ( v114 == -1 )
              goto LABEL_262;
          }
        }
      }
      v59 = *(char *)(v8 + 195);
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( v130 <= ThreadEffectiveRankNonZero && (v130 != ThreadEffectiveRankNonZero || v44 > v59) )
        {
          *(_BYTE *)(v8 + 565) = 1;
          goto LABEL_117;
        }
        v60 = v125;
        v61 = 1 << v44;
        v62 = *(_DWORD *)(*(_QWORD *)(a1 + 33864) + 8LL) | *(_DWORD *)(a1 + 31768);
        v63 = (unsigned int)KiDirectQuantumTarget;
        if ( v125 + (unsigned int)KiDirectQuantumTarget <= v41 && !v130 )
        {
          if ( v59 >= 16 )
          {
            v59 = 15;
            if ( v44 >= 16 )
              v59 = v44;
          }
          v64 = v61 & v62;
          if ( v64 )
            v65 = (unsigned int)KiDirectQuantumTarget + v117;
          else
            v65 = v41 + v117 - v125;
          _interlockedbittestandset((volatile signed __int32 *)v4 - 24, 5u);
          v66 = v41 - v63;
          *(v4 - 23) = v65;
          v56 = 0;
          if ( v64 )
            v60 = v66;
          *(_QWORD *)(v8 + 32) = v60;
          if ( v129 )
          {
            v67 = v4 - 27;
            if ( v44 != v59 )
            {
              KiAbProcessThreadPriorityModification(v4 - 27, (unsigned __int8)v59, 1LL);
              v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
              *((_BYTE *)v4 - 21) = v59;
              if ( !v43 )
              {
                LOBYTE(v68) = 1;
                KiSetSchedulerAssistPriority(v4[94], (unsigned int)(char)v59, v68);
              }
              *((_BYTE *)v4 + 348) += 16 * (v59 - v44);
            }
            goto LABEL_118;
          }
          goto LABEL_117;
        }
        if ( v61 > v62 )
        {
          if ( !v130 )
            goto LABEL_117;
          if ( v62 <= 1 )
          {
            v84 = *(_DWORD *)(*(_QWORD *)(v124 + 416) + 116LL);
            v85 = *(_QWORD *)(a1 + 31864);
            if ( (v85 & 1) != 0 )
            {
              if ( v85 == 1 )
                goto LABEL_117;
              v86 = v85 ^ ((a1 + 31856) | 1);
            }
            else
            {
              v86 = *(_QWORD *)(a1 + 31864);
            }
            if ( !v86 )
            {
LABEL_117:
              v67 = v4 - 27;
LABEL_118:
              *((_BYTE *)v4 + 349) = 0;
              v10 = 1;
              *((_DWORD *)v4 + 80) = *(_DWORD *)(a1 + 36);
              if ( (*((_BYTE *)v4 - 214) & 4) == 0
                || (IsThreadRankNonZero = KiIsThreadRankNonZero(v67, a1), v69 = 1, !IsThreadRankNonZero) )
              {
                v69 = *((_BYTE *)v4 - 21);
              }
              **(_BYTE **)(a1 + 56) = v69;
              v70 = *(_QWORD *)(a1 + 33976);
              if ( v70 )
              {
                v115 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v67 != *(__int64 **)(a1 + 24) )
                  v115 = (unsigned int)v69;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v115, 0LL);
                v70 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v67;
              if ( v70 )
                *(_BYTE *)(v70 + 16) = v67 == *(__int64 **)(a1 + 24);
              if ( *((_BYTE *)v4 + 172) == 1 )
                *((_DWORD *)v4 - 21) = *((_DWORD *)v4 - 21) - *((_DWORD *)v4 + 55) + MEMORY[0xFFFFF78000000320];
              *((_BYTE *)v4 + 172) = 3;
              goto LABEL_126;
            }
            if ( *(_DWORD *)(v86 + 28) != v84 )
            {
              if ( *(_DWORD *)(v86 + 28) > v84 )
                goto LABEL_117;
              v10 = 0;
LABEL_126:
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
              KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
              if ( v56 )
              {
                v83 = v117 + KiCyclesPerClockQuantum * (unsigned int)*((unsigned __int8 *)v4 + 435);
                if ( (*(_DWORD *)(v4 - 12) & 0x20) != 0 )
                  _interlockedbittestandreset((volatile signed __int32 *)v4 - 24, 5u);
                *(v4 - 23) = v83;
              }
              goto LABEL_127;
            }
            if ( *(unsigned __int16 *)(v86 + 26) < v61 )
              goto LABEL_117;
          }
        }
      }
      v10 = 0;
      goto LABEL_126;
    }
    v45 = 0;
    v46 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)v4 + 55);
    if ( v117 >= *(v4 - 23) )
    {
      v45 = 4;
      if ( v46 < 2 )
        v45 = 5;
    }
    if ( v45 >= 4u || *((char *)v4 + 347) >= 14 || v46 >= 2 && !*((_BYTE *)v4 + 348) )
    {
      v47 = *((_BYTE *)v4 - 21);
      v45 |= 8u;
      v48 = v47;
      if ( v47 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(v4[41] + 1850) == 2
          && (p_AbPropagateBoostsList = *((unsigned __int8 *)v4 + 348),
              v33 = (unsigned __int8)p_AbPropagateBoostsList,
              LOBYTE(v33) = p_AbPropagateBoostsList & 0xF,
              (p_AbPropagateBoostsList & 0xF) != 0 && (*(_DWORD *)(v4 - 12) & 8) == 0) )
        {
          LOBYTE(p_AbPropagateBoostsList) = (unsigned __int8)p_AbPropagateBoostsList >> 4;
          v110 = v33 + *((_BYTE *)v4 + 347);
          *((_BYTE *)v4 + 348) = v33;
          v111 = v47 - p_AbPropagateBoostsList - 1;
          v47 = v110;
          if ( v111 >= v110 )
            v47 = v111;
        }
        else
        {
          v33 = *((unsigned __int8 *)v4 + 348);
          v49 = *((_BYTE *)v4 + 347);
          if ( (char)(v47 - (*((_BYTE *)v4 + 348) >> 4) - (*((_BYTE *)v4 + 348) & 0xF) - 1) >= v49 )
            v49 = v47 - (*((_BYTE *)v4 + 348) >> 4) - (*((_BYTE *)v4 + 348) & 0xF) - 1;
          v47 = v49;
          if ( (_BYTE)v33 )
          {
            if ( (v33 & 0xF) != 0 )
              *((_DWORD *)v4 + 164) = MEMORY[0xFFFFF78000000320];
            *((_BYTE *)v4 + 348) = 0;
          }
        }
        v50 = *((_DWORD *)v4 + 160);
        v122 = 0;
        if ( v50 )
        {
          _BitScanReverse((unsigned int *)&p_AbPropagateBoostsList, v50);
          if ( v47 < (int)p_AbPropagateBoostsList )
            v47 = p_AbPropagateBoostsList;
          v122 = p_AbPropagateBoostsList;
        }
        v48 = *((_BYTE *)v4 - 21);
      }
      if ( !(_BYTE)v34 )
      {
        v51 = KeGetCurrentPrcb();
        if ( v47 > v48 )
        {
          if ( *((_BYTE *)v4 + 577) )
          {
            v33 = (__int64)(v4 + 74);
            if ( v4[74] == 1 )
            {
              p_AbPropagateBoostsList = (__int64)&v51->AbPropagateBoostsList;
              if ( v51 != (struct _KPRCB *)-34680LL )
              {
                *(_QWORD *)v33 = *(_QWORD *)p_AbPropagateBoostsList;
                *(_QWORD *)p_AbPropagateBoostsList = v33;
                _InterlockedIncrement16((volatile signed __int16 *)v4 + 326);
                KiAbQueueAutoBoostDpc(v51);
              }
            }
          }
        }
        v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
        *((_BYTE *)v4 - 21) = v47;
        if ( !v43 )
        {
          LOBYTE(p_AbPropagateBoostsList) = 1;
          KiSetSchedulerAssistPriority(v4[94], (unsigned int)v47, p_AbPropagateBoostsList);
        }
      }
    }
    if ( *(_BYTE *)(v4[41] + 1850) == 2 )
      v45 |= 2u;
    if ( ((unsigned __int8)~v45 & ((*(_DWORD *)(v4 - 12) & 8) == 0)) != 0 )
    {
      p_AbPropagateBoostsList = (unsigned int)*((char *)v4 - 21);
      if ( *((char *)v4 - 21) > 0 )
      {
        v34 = *((unsigned __int8 *)v4 + 348);
        if ( !(_BYTE)v34 )
        {
          v33 = v45;
          LOBYTE(v33) = v45 >> 1;
LABEL_78:
          v52 = *((char *)v4 + 347);
          v53 = v52 + v128;
          if ( (v33 & 1) != 0 )
            v53 += (char)PsPrioritySeparation;
          if ( v53 >= 16 )
            v53 = 15;
          if ( v53 > (int)p_AbPropagateBoostsList )
          {
            v54 = 0;
            if ( v53 > v52 + v128 )
              v54 = v53 - v52 - v128;
            *((_BYTE *)v4 + 348) = v34 ^ (v54 ^ v34) & 0xF;
            v55 = KeGetCurrentPrcb();
            if ( (char)v53 > (char)p_AbPropagateBoostsList )
            {
              if ( *((_BYTE *)v4 + 577) )
              {
                p_AbPropagateBoostsList = (__int64)(v4 + 74);
                if ( v4[74] == 1 )
                {
                  v33 = (__int64)&v55->AbPropagateBoostsList;
                  if ( v55 != (struct _KPRCB *)-34680LL )
                  {
                    *(_QWORD *)p_AbPropagateBoostsList = *(_QWORD *)v33;
                    *(_QWORD *)v33 = p_AbPropagateBoostsList;
                    _InterlockedIncrement16((volatile signed __int16 *)v4 + 326);
                    KiAbQueueAutoBoostDpc(v55);
                  }
                }
              }
            }
            v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
            *((_BYTE *)v4 - 21) = v53;
            if ( !v43 )
            {
              LOBYTE(p_AbPropagateBoostsList) = 1;
              KiSetSchedulerAssistPriority(v4[94], (unsigned int)(char)v53, p_AbPropagateBoostsList);
            }
          }
LABEL_97:
          v44 = *((_BYTE *)v4 - 21);
          v56 = v45 >> 3;
          goto LABEL_98;
        }
        if ( (v34 & 0xF0) == 0 )
        {
          v33 = v45;
          LOBYTE(v33) = v45 >> 1;
          if ( (v45 & 2) != 0 )
            goto LABEL_78;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag )
    {
      v33 = *((unsigned int *)v4 - 24);
      if ( (v45 & 6) == 6 && (v33 & 8) == 0 && *((char *)v4 - 21) > 0 )
        KiScheduleNextForegroundBoost(v4 - 27);
    }
    goto LABEL_97;
  }
LABEL_127:
  *(v4 - 19) = 0LL;
  v71 = KeGetCurrentPrcb();
  v72 = v71->SchedulerAssist;
  if ( v72 )
  {
    if ( v71->NestingLevel <= 1u )
    {
      v116 = v72[6] - 1;
      v72[6] = v116;
      if ( !v116 )
        KiRemoveSystemWorkPriorityKick(v71);
    }
  }
  if ( !v10 )
  {
    *((_BYTE *)v4 + 350) = v120;
    *((_BYTE *)v4 + 351) = v128;
    *v4 = 0LL;
    v126 = v4;
    KiReadyDeferredReadyList(a1, &v126, p_AbPropagateBoostsList, v34);
  }
  return v127;
}
