/*
 * XREFs of KiDirectSwitchThread @ 0x1402F1090
 * Callers:
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 * Callees:
 *     KiAbProcessThreadPriorityModification @ 0x140205A50 (KiAbProcessThreadPriorityModification.c)
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiScheduleNextForegroundBoost @ 0x140235F3C (KiScheduleNextForegroundBoost.c)
 *     KiGetComparisonRanks @ 0x14024341C (KiGetComparisonRanks.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiComputePriorityFloor @ 0x1402D5610 (KiComputePriorityFloor.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetVpThreadSpinLockCount @ 0x1403562E0 (KiSetVpThreadSpinLockCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiBeginCounterAccumulation @ 0x14051BFF0 (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x14051C190 (KiEndCounterAccumulation.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 *     EtwTraceReadyThread @ 0x1405A81A0 (EtwTraceReadyThread.c)
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
  __int64 p_DpcData; // r8
  char v36; // cl
  __int64 v37; // rcx
  __int64 v38; // rax
  char v39; // al
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v41; // r13
  _DWORD *SchedulerAssist; // rcx
  bool v43; // zf
  char v44; // r15
  unsigned __int8 v45; // si
  unsigned int v46; // eax
  char v47; // bp
  char v48; // cl
  unsigned int v49; // eax
  struct _KDPC *v50; // rcx
  int v51; // r11d
  int v52; // ebp
  char v53; // cl
  struct _KDPC *v54; // rcx
  char v55; // si
  struct _KPRCB *v56; // rbp
  _DWORD *v57; // rcx
  int v58; // ebp
  unsigned __int64 v59; // r9
  unsigned int v60; // edx
  unsigned int v61; // ecx
  __int64 v62; // r8
  int v63; // ecx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r13
  __int64 *v66; // r14
  __int64 v67; // r8
  char v68; // cl
  __int64 v69; // rax
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  bool result; // al
  __int64 v73; // rcx
  _QWORD *i; // rcx
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // r10
  __int64 v79; // r10
  __int64 v80; // r10
  char IsThreadRankNonZero; // al
  unsigned __int64 v82; // rcx
  unsigned int v83; // r8d
  __int64 v84; // rcx
  __int64 v85; // rax
  volatile signed __int32 *v86; // r15
  __int64 *v87; // rcx
  __int64 **v88; // rax
  _DWORD *v89; // rcx
  _DWORD *v90; // rcx
  _DWORD *v91; // rcx
  _DWORD *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int GuestSchedulerAssistPriority; // eax
  int v99; // edx
  int v100; // r9d
  int v101; // r10d
  __int64 v102; // rcx
  char v103; // al
  __int64 v104; // rcx
  char v105; // al
  char v106; // al
  unsigned __int8 v107; // cl
  unsigned int v108; // esi
  char v109; // al
  char v110; // cl
  int v111; // eax
  int v112; // eax
  int v113; // eax
  __int64 v114; // rdx
  int v115; // eax
  unsigned __int64 v116; // [rsp+30h] [rbp-88h]
  __int64 v117; // [rsp+30h] [rbp-88h]
  unsigned int ThreadEffectiveRankNonZero; // [rsp+38h] [rbp-80h] BYREF
  int v119; // [rsp+3Ch] [rbp-7Ch]
  int v120; // [rsp+40h] [rbp-78h] BYREF
  int v121; // [rsp+44h] [rbp-74h]
  int v122; // [rsp+48h] [rbp-70h] BYREF
  __int64 v123; // [rsp+50h] [rbp-68h]
  unsigned __int64 v124; // [rsp+58h] [rbp-60h]
  _QWORD *v125; // [rsp+60h] [rbp-58h] BYREF
  bool v126; // [rsp+C0h] [rbp+8h]
  char v127; // [rsp+C8h] [rbp+10h]
  char v128; // [rsp+D0h] [rbp+18h]
  unsigned int v129; // [rsp+D8h] [rbp+20h] BYREF

  v128 = a3;
  v127 = a2;
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
  v129 = 0;
  ThreadEffectiveRankNonZero = 0;
  v123 = v7;
  if ( v7 )
  {
    v75 = *(unsigned int *)(a1 + 216);
    v43 = v75 + v7 == 0;
    v76 = v75 + v7;
    v123 = v76;
    if ( !v43 )
    {
      a3 = v76;
      a2 = 0LL;
      if ( *((char *)v4 - 21) < 16
        && (*(_DWORD *)(v4 - 12) & 0x200) == 0
        && !*((_DWORD *)v4 + 67)
        && *((_BYTE *)v4 + 174) != 1 )
      {
        v77 = v76;
        do
        {
          if ( (*(_BYTE *)(v77 + 112) & 2) != 0 )
          {
            v129 = -1;
            goto LABEL_152;
          }
          v77 = *(_QWORD *)(v77 + 408);
        }
        while ( v77 );
        do
        {
          a2 = (unsigned int)(*(_DWORD *)(a3 + 116) + a2);
          if ( (_DWORD)a2 )
            break;
          a3 = *(_QWORD *)(a3 + 408);
        }
        while ( a3 );
      }
      v129 = a2;
      if ( (_DWORD)a2 )
      {
LABEL_152:
        v78 = *(_QWORD *)(v8 + 104);
        if ( v78 )
        {
          v79 = *(unsigned int *)(a1 + 216) + v78;
          if ( v79 )
          {
            LOBYTE(a4) = 1;
            ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v8, v79, a3, a4, 0LL);
            if ( ThreadEffectiveRankNonZero )
              KiGetComparisonRanks(v76, v80, &v129, &ThreadEffectiveRankNonZero);
          }
        }
      }
    }
  }
  v9 = *((unsigned __int8 *)v4 + 371);
  v10 = 0;
  v11 = (__int64 *)*(v4 - 1);
  v119 = 1;
  v12 = &v11[6 * v9];
  do
  {
    if ( *((_BYTE *)v11 + 17) < 5u )
    {
      v86 = (volatile signed __int32 *)v11[4];
      KiAcquireKobjectLockSafe(v86, a2, a3, a4);
      if ( *((_BYTE *)v11 + 17) == 4 )
      {
        v87 = (__int64 *)*v11;
        v88 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v88 != v11 )
          __fastfail(3u);
        *v88 = v87;
        v87[1] = (__int64)v88;
      }
      _InterlockedAnd(v86, 0xFFFFFF7F);
    }
    v11 += 6;
  }
  while ( v11 != v12 );
  v126 = *(_QWORD *)(a1 + 11528) == 0LL;
  _disable();
  *(_BYTE *)(a1 + 32) = 1;
  v13 = __rdtsc();
  v14 = v13 - *(_QWORD *)(a1 + 32448);
  v15 = v14 + *(unsigned int *)(v8 + 80);
  v124 = v14 + *(_QWORD *)(v8 + 72);
  *(_QWORD *)(v8 + 72) = v124;
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
          LODWORD(v117) = v29;
          if ( v29 - v30 >= 0x20 )
            HIDWORD(v117) = 1;
          else
            HIDWORD(v117) = (*(_DWORD *)(v19 + 196) << (v29 - v30)) | 1;
          *(_QWORD *)(v19 + 192) = v117;
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
      v93 = *(_QWORD *)(v8 + 968);
      if ( v93 )
        *(_BYTE *)(v93 + 64) = 0;
      v17 &= ~0x40u;
    }
    if ( (v17 & 0x3E) != 0 )
    {
      v73 = *(_QWORD *)(v8 + 104);
      if ( v73 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v73); i; i = (_QWORD *)i[51] )
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
  p_DpcData = v32 - *(_QWORD *)(a1 + 32448);
  *(_QWORD *)(a1 + 32568) += p_DpcData;
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
    *(_QWORD *)v33 += p_DpcData;
    v36 = *(_BYTE *)(v8 + 2);
  }
  if ( (v36 & 0x40) != 0 )
  {
    v94 = *(_QWORD *)(v8 + 968);
    if ( v94 )
      *(_BYTE *)(v94 + 64) = 1;
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
  v116 = *(v4 - 18);
  v120 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v95 = SchedulerAssist[6];
      SchedulerAssist[6] = v95 + 1;
      if ( v95 == -1 )
LABEL_223:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)v4 - 38, 0LL) )
  {
    v91 = CurrentPrcb->SchedulerAssist;
    if ( v91 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v96 = v91[6] - 1;
        v91[6] = v96;
        if ( !v96 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v120, v33, p_DpcData, v34);
    while ( *(v4 - 19) );
    v92 = CurrentPrcb->SchedulerAssist;
    if ( v92 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v97 = v92[6];
        v92[6] = v97 + 1;
        if ( v97 == -1 )
          goto LABEL_223;
      }
    }
  }
  if ( *(unsigned __int8 *)(a1 + 208) == *((_WORD *)v4 + 184) && (*(_QWORD *)(a1 + 200) & v4[45]) != 0 )
  {
    v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
    v119 = 0;
    if ( v43 )
    {
      LOBYTE(v34) = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)v4[94], 0x100000u);
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(v4 - 27);
      v99 = GuestSchedulerAssistPriority;
      v100 = 32;
      if ( GuestSchedulerAssistPriority >= 16 )
      {
        v100 = GuestSchedulerAssistPriority;
        v99 = 15;
      }
      v101 = *((_DWORD *)v4 + 202);
      if ( v99 != v101 )
      {
        v102 = (__int64)v4 + (char)v99;
        v103 = *(_BYTE *)(v102 + 608);
        if ( v103 == -1 )
          KeBugCheckEx(0x157u, (ULONG_PTR)(v4 - 27), (char)v99, 1uLL, 0LL);
        *(_BYTE *)(v102 + 608) = v103 + 1;
        *((_DWORD *)v4 + 160) |= 1 << v99;
        if ( v101 != 32 )
        {
          v104 = (__int64)v4 + (char)v101;
          v105 = *(_BYTE *)(v104 + 608);
          if ( !v105 )
            KeBugCheckEx(0x157u, (ULONG_PTR)(v4 - 27), (char)v101, 2uLL, 0LL);
          v106 = v105 - 1;
          *(_BYTE *)(v104 + 608) = v106;
          if ( !v106 )
            *((_DWORD *)v4 + 160) ^= 1 << v101;
        }
        *((_DWORD *)v4 + 202) = v99;
      }
      v107 = v100;
      if ( v100 == 32 )
        v107 = v99;
      v108 = (char)KiComputePriorityFloor((__int64)(v4 - 27), v107);
      if ( v108 != *((char *)v4 - 21) )
      {
        KiSetBasePriorityAndClearDecrement((__int64)(v4 - 27), 0LL, 0);
        KiUpdateThreadPriority(0LL, (__int64)(v4 - 27), (PVOID *)v108, 0);
      }
      if ( (*(_DWORD *)(v4 - 12) & 0x400000) != 0 )
        _InterlockedAnd((volatile signed __int32 *)v4[94], 0xFFEFFFFF);
      LOBYTE(v34) = 1;
    }
    v44 = *((_BYTE *)v4 - 21);
    if ( v44 >= 16 )
    {
      v55 = 1;
LABEL_97:
      v56 = KeGetCurrentPrcb();
      v122 = 0;
      v57 = v56->SchedulerAssist;
      if ( v57 )
      {
        if ( v56->NestingLevel <= 1u )
        {
          v111 = v57[6];
          v57[6] = v111 + 1;
          if ( v111 == -1 )
LABEL_261:
            KiRemoveSystemWorkPriorityKick(v56);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        v89 = v56->SchedulerAssist;
        if ( v89 )
        {
          if ( v56->NestingLevel <= 1u )
          {
            v112 = v89[6] - 1;
            v89[6] = v112;
            if ( !v112 )
              KiRemoveSystemWorkPriorityKick(v56);
          }
        }
        do
          KeYieldProcessorEx(&v122, v33, p_DpcData, v34);
        while ( *(_QWORD *)(a1 + 48) );
        v90 = v56->SchedulerAssist;
        if ( v90 )
        {
          if ( v56->NestingLevel <= 1u )
          {
            v113 = v90[6];
            v90[6] = v113 + 1;
            if ( v113 == -1 )
              goto LABEL_261;
          }
        }
      }
      v58 = *(char *)(v8 + 195);
      if ( !*(_QWORD *)(a1 + 16) )
      {
        if ( v129 <= ThreadEffectiveRankNonZero && (v129 != ThreadEffectiveRankNonZero || v44 > v58) )
        {
          *(_BYTE *)(v8 + 565) = 1;
          goto LABEL_116;
        }
        v59 = v124;
        v60 = 1 << v44;
        v61 = *(_DWORD *)(*(_QWORD *)(a1 + 33864) + 8LL) | *(_DWORD *)(a1 + 31768);
        v62 = (unsigned int)KiDirectQuantumTarget;
        if ( v124 + (unsigned int)KiDirectQuantumTarget <= v41 && !v129 )
        {
          if ( v58 >= 16 )
          {
            v58 = 15;
            if ( v44 >= 16 )
              v58 = v44;
          }
          v63 = v60 & v61;
          if ( v63 )
            v64 = (unsigned int)KiDirectQuantumTarget + v116;
          else
            v64 = v41 + v116 - v124;
          _interlockedbittestandset((volatile signed __int32 *)v4 - 24, 5u);
          v65 = v41 - v62;
          *(v4 - 23) = v64;
          v55 = 0;
          if ( v63 )
            v59 = v65;
          *(_QWORD *)(v8 + 32) = v59;
          if ( v128 )
          {
            v66 = v4 - 27;
            if ( v44 != v58 )
            {
              KiAbProcessThreadPriorityModification((__int64)(v4 - 27), v58, 1);
              v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
              *((_BYTE *)v4 - 21) = v58;
              if ( !v43 )
              {
                LOBYTE(v67) = 1;
                KiSetSchedulerAssistPriority(v4[94], (unsigned int)(char)v58, v67);
              }
              *((_BYTE *)v4 + 348) += 16 * (v58 - v44);
            }
            goto LABEL_117;
          }
          goto LABEL_116;
        }
        if ( v60 > v61 )
        {
          if ( !v129 )
            goto LABEL_116;
          if ( v61 <= 1 )
          {
            v83 = *(_DWORD *)(*(_QWORD *)(v123 + 416) + 116LL);
            v84 = *(_QWORD *)(a1 + 31864);
            if ( (v84 & 1) != 0 )
            {
              if ( v84 == 1 )
                goto LABEL_116;
              v85 = v84 ^ ((a1 + 31856) | 1);
            }
            else
            {
              v85 = *(_QWORD *)(a1 + 31864);
            }
            if ( !v85 )
            {
LABEL_116:
              v66 = v4 - 27;
LABEL_117:
              *((_BYTE *)v4 + 349) = 0;
              v10 = 1;
              *((_DWORD *)v4 + 80) = *(_DWORD *)(a1 + 36);
              if ( (*((_BYTE *)v4 - 214) & 4) == 0
                || (IsThreadRankNonZero = KiIsThreadRankNonZero(v66, a1), v68 = 1, !IsThreadRankNonZero) )
              {
                v68 = *((_BYTE *)v4 - 21);
              }
              **(_BYTE **)(a1 + 56) = v68;
              v69 = *(_QWORD *)(a1 + 33976);
              if ( v69 )
              {
                v114 = (unsigned int)KiVpThreadSystemWorkPriority;
                if ( v66 != *(__int64 **)(a1 + 24) )
                  v114 = (unsigned int)v68;
                KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v114, 0LL);
                v69 = *(_QWORD *)(a1 + 33976);
              }
              *(_QWORD *)(a1 + 16) = v66;
              if ( v69 )
                *(_BYTE *)(v69 + 16) = v66 == *(__int64 **)(a1 + 24);
              if ( *((_BYTE *)v4 + 172) == 1 )
                *((_DWORD *)v4 - 21) = *((_DWORD *)v4 - 21) - *((_DWORD *)v4 + 55) + MEMORY[0xFFFFF78000000320];
              *((_BYTE *)v4 + 172) = 3;
              goto LABEL_125;
            }
            if ( *(_DWORD *)(v85 + 28) != v83 )
            {
              if ( *(_DWORD *)(v85 + 28) > v83 )
                goto LABEL_116;
              v10 = 0;
LABEL_125:
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
              KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
              if ( v55 )
              {
                v82 = v116 + KiCyclesPerClockQuantum * (unsigned int)*((unsigned __int8 *)v4 + 435);
                if ( (*(_DWORD *)(v4 - 12) & 0x20) != 0 )
                  _interlockedbittestandreset((volatile signed __int32 *)v4 - 24, 5u);
                *(v4 - 23) = v82;
              }
              goto LABEL_126;
            }
            if ( *(unsigned __int16 *)(v85 + 26) < v60 )
              goto LABEL_116;
          }
        }
      }
      v10 = 0;
      goto LABEL_125;
    }
    v45 = 0;
    v46 = MEMORY[0xFFFFF78000000320] - *((_DWORD *)v4 + 55);
    if ( v116 >= *(v4 - 23) )
    {
      v45 = 4;
      if ( v46 < 2 )
        v45 = 5;
    }
    if ( v45 >= 4u || *((char *)v4 + 347) >= 14 || v46 >= 2 && !*((_BYTE *)v4 + 348) )
    {
      v47 = *((_BYTE *)v4 - 21);
      v45 |= 8u;
      if ( v47 < 16 )
      {
        if ( KiForegrounBoostVelocityFlag
          && *(_BYTE *)(v4[41] + 1850) == 2
          && (p_DpcData = *((unsigned __int8 *)v4 + 348),
              v33 = (unsigned __int8)p_DpcData,
              LOBYTE(v33) = p_DpcData & 0xF,
              (p_DpcData & 0xF) != 0 && (*(_DWORD *)(v4 - 12) & 8) == 0) )
        {
          LOBYTE(p_DpcData) = (unsigned __int8)p_DpcData >> 4;
          v109 = v33 + *((_BYTE *)v4 + 347);
          *((_BYTE *)v4 + 348) = v33;
          v110 = v47 - p_DpcData - 1;
          v47 = v109;
          if ( v110 >= v109 )
            v47 = v110;
        }
        else
        {
          v33 = *((unsigned __int8 *)v4 + 348);
          v48 = *((_BYTE *)v4 + 347);
          if ( (char)(v47 - (*((_BYTE *)v4 + 348) >> 4) - (*((_BYTE *)v4 + 348) & 0xF) - 1) >= v48 )
            v48 = v47 - (*((_BYTE *)v4 + 348) >> 4) - (*((_BYTE *)v4 + 348) & 0xF) - 1;
          v47 = v48;
          if ( (_BYTE)v33 )
          {
            if ( (v33 & 0xF) != 0 )
              *((_DWORD *)v4 + 164) = MEMORY[0xFFFFF78000000320];
            *((_BYTE *)v4 + 348) = 0;
          }
        }
        v49 = *((_DWORD *)v4 + 160);
        v121 = 0;
        if ( v49 )
        {
          _BitScanReverse((unsigned int *)&p_DpcData, v49);
          if ( v47 < (int)p_DpcData )
            v47 = p_DpcData;
          v121 = p_DpcData;
        }
      }
      if ( !(_BYTE)v34 )
      {
        v50 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( v47 > *((char *)v4 - 21) )
        {
          if ( *((_BYTE *)v4 + 577) )
          {
            v33 = (__int64)(v4 + 74);
            if ( v4[74] == 1 )
            {
              p_DpcData = (__int64)&v50[541].DpcData;
              if ( v50 != (struct _KDPC *)-34680LL )
              {
                *(_QWORD *)v33 = *(_QWORD *)p_DpcData;
                *(_QWORD *)p_DpcData = v33;
                _InterlockedIncrement16((volatile signed __int16 *)v4 + 326);
                KiAbQueueAutoBoostDpc(v50);
              }
            }
          }
        }
        v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
        *((_BYTE *)v4 - 21) = v47;
        if ( !v43 )
        {
          LOBYTE(p_DpcData) = 1;
          KiSetSchedulerAssistPriority(v4[94], (unsigned int)v47, p_DpcData);
        }
      }
    }
    if ( *(_BYTE *)(v4[41] + 1850) == 2 )
      v45 |= 2u;
    if ( ((unsigned __int8)~v45 & ((*(_DWORD *)(v4 - 12) & 8) == 0)) != 0 )
    {
      p_DpcData = (unsigned int)*((char *)v4 - 21);
      if ( *((char *)v4 - 21) > 0 )
      {
        v34 = *((unsigned __int8 *)v4 + 348);
        if ( !(_BYTE)v34 )
        {
          v33 = v45;
          LOBYTE(v33) = v45 >> 1;
LABEL_77:
          v51 = *((char *)v4 + 347);
          v52 = v51 + v127;
          if ( (v33 & 1) != 0 )
            v52 += (char)PsPrioritySeparation;
          if ( v52 >= 16 )
            v52 = 15;
          if ( v52 > (int)p_DpcData )
          {
            v53 = 0;
            if ( v52 > v51 + v127 )
              v53 = v52 - v51 - v127;
            *((_BYTE *)v4 + 348) = v34 ^ (v53 ^ v34) & 0xF;
            v54 = (struct _KDPC *)KeGetCurrentPrcb();
            if ( (char)v52 > (char)p_DpcData )
            {
              if ( *((_BYTE *)v4 + 577) )
              {
                p_DpcData = (__int64)(v4 + 74);
                if ( v4[74] == 1 )
                {
                  v33 = (__int64)&v54[541].DpcData;
                  if ( v54 != (struct _KDPC *)-34680LL )
                  {
                    *(_QWORD *)p_DpcData = *(_QWORD *)v33;
                    *(_QWORD *)v33 = p_DpcData;
                    _InterlockedIncrement16((volatile signed __int16 *)v4 + 326);
                    KiAbQueueAutoBoostDpc(v54);
                  }
                }
              }
            }
            v43 = (*(_DWORD *)(v4 - 12) & 0x400000) == 0;
            *((_BYTE *)v4 - 21) = v52;
            if ( !v43 )
            {
              LOBYTE(p_DpcData) = 1;
              KiSetSchedulerAssistPriority(v4[94], (unsigned int)(char)v52, p_DpcData);
            }
          }
LABEL_96:
          v44 = *((_BYTE *)v4 - 21);
          v55 = v45 >> 3;
          goto LABEL_97;
        }
        if ( (v34 & 0xF0) == 0 )
        {
          v33 = v45;
          LOBYTE(v33) = v45 >> 1;
          if ( (v45 & 2) != 0 )
            goto LABEL_77;
        }
      }
    }
    if ( !KiForegrounBoostVelocityFlag )
    {
      v33 = *((unsigned int *)v4 - 24);
      if ( (v45 & 6) == 6 && (v33 & 8) == 0 && *((char *)v4 - 21) > 0 )
        KiScheduleNextForegroundBoost((__int64)(v4 - 27));
    }
    goto LABEL_96;
  }
LABEL_126:
  *(v4 - 19) = 0LL;
  v70 = KeGetCurrentPrcb();
  v71 = v70->SchedulerAssist;
  if ( v71 )
  {
    if ( v70->NestingLevel <= 1u )
    {
      v115 = v71[6] - 1;
      v71[6] = v115;
      if ( !v115 )
        KiRemoveSystemWorkPriorityKick(v70);
    }
  }
  if ( !v10 )
  {
    *((_BYTE *)v4 + 350) = v119;
    *((_BYTE *)v4 + 351) = v127;
    *v4 = 0LL;
    v125 = v4;
    KiReadyDeferredReadyList(a1, &v125);
  }
  return v126;
}
