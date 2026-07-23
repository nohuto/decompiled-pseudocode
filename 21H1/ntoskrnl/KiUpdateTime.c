/*
 * XREFs of KiUpdateTime @ 0x140275520
 * Callers:
 *     KeClockInterruptNotify @ 0x14026F550 (KeClockInterruptNotify.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KiUpdateRunTime @ 0x1402753C0 (KiUpdateRunTime.c)
 *     PoExecutePerfCheck @ 0x140275B90 (PoExecutePerfCheck.c)
 *     PoExecuteIdleCheck @ 0x140275C40 (PoExecuteIdleCheck.c)
 *     KiForwardTick @ 0x140275DC0 (KiForwardTick.c)
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     HalpTimerScaleCounter @ 0x140392DF0 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiSetForceIdleState @ 0x14051DCA0 (KiSetForceIdleState.c)
 */

unsigned __int64 __fastcall KiUpdateTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int16 v3; // bp
  char v4; // r15
  unsigned __int8 v5; // r12
  __int64 v6; // r14
  bool v7; // bp
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  ULONG_PTR v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  __int64 v19; // r8
  struct _KPRCB *v20; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  unsigned __int64 v24; // rbx
  unsigned __int16 v25; // cx
  __int16 *v26; // r8
  __int64 v27; // r9
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  bool v32; // zf
  __int64 InternalData; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  signed __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // r9
  signed __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // rdx
  volatile CCHAR v44; // t1
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rsi
  signed __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  unsigned __int64 v52; // r10
  signed __int64 v53; // rax
  int v54; // r9d
  __int64 v55; // r8
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r10
  __int64 v60; // rcx
  unsigned __int64 v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  int v67; // eax
  __int64 v68; // rcx
  signed __int32 v69[8]; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int8 v70; // [rsp+30h] [rbp-108h]
  char v71; // [rsp+31h] [rbp-107h]
  int v72; // [rsp+34h] [rbp-104h] BYREF
  __int64 v73; // [rsp+38h] [rbp-100h]
  __int64 v74; // [rsp+40h] [rbp-F8h]
  __int64 v75; // [rsp+48h] [rbp-F0h]
  _QWORD v76[22]; // [rsp+50h] [rbp-E8h] BYREF
  int v77; // [rsp+130h] [rbp-8h]

  v70 = a2;
  v71 = a1;
  memset(v76, 0, 0xA8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v77;
  v4 = 0;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  _disable();
  v7 = (v3 & 0x200) != 0;
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v8 = MEMORY[0xFFFFF78000000340];
  while ( (v8 & 1) != 0 )
  {
    v8 = MEMORY[0xFFFFF78000000340];
LABEL_69:
    _mm_pause();
  }
  v9 = v8;
  v8 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v8 + 1, v8);
  if ( v9 != v8 )
    goto LABEL_69;
  v10 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v32 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
    v73 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( v32 )
    {
      InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
      v34 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(InternalData);
      v35 = *(_QWORD *)(v10 + 208);
      v36 = v34;
    }
    else
    {
      do
      {
        v35 = *(_QWORD *)(v10 + 208);
        do
        {
          v38 = *(_QWORD *)(v10 + 200);
          v39 = HalpTimerGetInternalData(v10);
          v40 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v39);
          _InterlockedOr(v69, 0);
          v41 = *(_QWORD *)(v10 + 200);
        }
        while ( v38 != v41 );
      }
      while ( v35 != *(_QWORD *)(v10 + 208) );
      v42 = *(_DWORD *)(v10 + 220);
      if ( ((v38 ^ v40) & (1LL << ((unsigned __int8)v42 - 1))) == 0 )
      {
        if ( v42 == 64 )
          v43 = -1LL;
        else
          v43 = (1LL << v42) - 1;
        v12 = v35 + (v40 | v38 & ~v43);
        goto LABEL_9;
      }
      v59 = 1LL << v42;
      v60 = -1LL;
      if ( v42 != 64 )
        v60 = v59 - 1;
      v61 = v38 & v60;
      v36 = v40 | v38 ^ v61;
      if ( v40 < v61 )
        v36 += v59;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v36, v41);
    }
    v12 = v35 + v36;
    goto LABEL_9;
  }
  v73 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72)
          + KeGetPcr()->Prcb.Number * *(_DWORD *)(HalpPerformanceCounter + 80);
    else
      v11 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v12 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v11)
          * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
        + MEMORY[0xFFFFF780000003B8];
  }
  else
  {
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v46 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v47 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v46);
      v48 = *(_QWORD *)(v10 + 208);
      v49 = v47;
    }
    else
    {
      do
      {
        v48 = *(_QWORD *)(v10 + 208);
        do
        {
          v50 = *(_QWORD *)(v10 + 200);
          v51 = HalpTimerGetInternalData(v10);
          v52 = (*(__int64 (__fastcall **)(__int64))(v10 + 112))(v51);
          _InterlockedOr(v69, 0);
          v53 = *(_QWORD *)(v10 + 200);
        }
        while ( v50 != v53 );
      }
      while ( v48 != *(_QWORD *)(v10 + 208) );
      v54 = *(_DWORD *)(v10 + 220);
      if ( ((v50 ^ v52) & (1LL << ((unsigned __int8)v54 - 1))) != 0 )
      {
        v55 = 1LL << v54;
        v56 = -1LL;
        if ( v54 != 64 )
          v56 = v55 - 1;
        v57 = v50 & v56;
        v49 = v52 | v50 ^ v57;
        if ( v52 < v57 )
          v49 += v55;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 200), v49, v53);
      }
      else
      {
        if ( v54 == 64 )
          v58 = -1LL;
        else
          v58 = (1LL << v54) - 1;
        v49 = v52 | v50 & ~v58;
      }
    }
    v12 = HalpTimerScaleCounter(v48 + v49, *(_QWORD *)(v10 + 192), 10000000LL);
  }
LABEL_9:
  if ( v10 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v37 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v37 = 10000000LL;
    v12 = HalpTimerScaleCounter(v12, v73, v37);
  }
  *((_QWORD *)&v13 + 1) = 0LL;
  if ( v12 > MEMORY[0xFFFFF78000000348] )
  {
    v74 = 0LL;
    v14 = v12 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v14 <<= MEMORY[0xFFFFF78000000368];
    v13 = v14 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v74 = *((_QWORD *)&v13 + 1);
    KiSystemTimeErrorAccumulator += v13;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v13 )
      v74 = ++*((_QWORD *)&v13 + 1);
  }
  v15 = *((_QWORD *)&v13 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v13 + 1) = 0LL;
  if ( v12 > MEMORY[0xFFFFF78000000350] )
  {
    v75 = 0LL;
    v16 = v12 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v16 <<= MEMORY[0xFFFFF78000000369];
    v13 = v16 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v75 = *((_QWORD *)&v13 + 1);
    KiInterruptTimeErrorAccumulator += v13;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v13 )
      v75 = ++*((_QWORD *)&v13 + 1);
  }
  v17 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v13 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v15);
  MEMORY[0xFFFFF78000000014] = v15;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v13 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v13 + 1);
  MEMORY[0xFFFFF78000000348] = v12;
  MEMORY[0xFFFFF78000000350] = v12;
  v18 = MEMORY[0xFFFFF78000000320];
  v19 = (unsigned int)KiTickOffset - *((_QWORD *)&v13 + 1);
  if ( v19 <= 0 )
  {
    v12 = KeMaximumIncrement;
    *((_QWORD *)&v13 + 1) = 1LL;
    v19 += KeMaximumIncrement;
    if ( v19 <= 0 )
    {
      v44 = KeNumberProcessorsGroup0[1];
      v45 = (unsigned __int64)(((unsigned __int64)-v19
                              * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v44;
      v12 = (v45 + 1) * KeMaximumIncrement;
      v19 += v12;
      *((_QWORD *)&v13 + 1) = v45 + 2;
    }
    v18 = *((_QWORD *)&v13 + 1) + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v13 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v13 + 1);
  }
  KiTickOffset = v19;
  ++MEMORY[0xFFFFF78000000340];
  v20 = KeGetCurrentPrcb();
  v72 = 0;
  SchedulerAssist = v20->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v20->NestingLevel <= 1u )
    {
      v62 = SchedulerAssist[6];
      SchedulerAssist[6] = v62 + 1;
      if ( v62 == -1 )
LABEL_95:
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    v63 = v20->SchedulerAssist;
    if ( v63 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v64 = v63[6] - 1;
        v63[6] = v64;
        if ( !v64 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
    do
      KeYieldProcessorEx(&v72, *((__int64 *)&v13 + 1), v19, v12);
    while ( KiForceIdleLock );
    v65 = v20->SchedulerAssist;
    if ( v65 )
    {
      if ( v20->NestingLevel <= 1u )
      {
        v66 = v65[6];
        v65[6] = v66 + 1;
        if ( v66 == -1 )
          goto LABEL_95;
      }
    }
  }
  if ( KiForceIdleStartTime && v17 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = CurrentPrcb->Number + 1280;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0LL, 0LL, 0LL, 0);
  }
  if ( ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0 )
    v4 = 1;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v22 = KeGetCurrentPrcb();
  v23 = v22->SchedulerAssist;
  if ( v23 )
  {
    if ( v22->NestingLevel <= 1u )
    {
      v67 = v23[6] - 1;
      v23[6] = v67;
      if ( !v67 )
        KiRemoveSystemWorkPriorityKick(v22);
    }
  }
  if ( v7 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v17 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v17;
  if ( KeMinimumIncrement - 1 + (int)v17 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v17;
  if ( v18 != v6 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0LL, 0LL, 0LL, 0);
  }
  PoExecuteIdleCheck(v17);
  if ( !v4 )
    PoExecutePerfCheck();
  v24 = v17 >> 18;
  if ( KiGroupSchedulingEnabled && v18 > KiGenerationEndTick )
  {
    v5 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    KiForwardTick((_DWORD)CurrentPrcb, KeNumberProcessors_0, v24, v5, (__int64)v76);
    v25 = KiClockCheckPending[0];
    if ( (unsigned int)KiClockCheckPending[0] < LOWORD(v76[0]) )
    {
      v26 = (__int16 *)v76;
    }
    else
    {
      v26 = KiClockCheckPending;
      v25 = v76[0];
    }
    v27 = 0LL;
    word_140C11002 = 20;
    KiClockCheckPending[0] = *v26;
    v28 = 0;
    if ( v25 )
    {
      v29 = 0LL;
      v28 = v25;
      v27 = v25;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v29 / 2 + 4] |= v76[v29 / 8 + 1];
        v29 += 8LL;
        --v27;
      }
      while ( v27 );
    }
    for ( ; v28 < (unsigned __int16)*v26; *(_QWORD *)&KiClockCheckPending[4 * v30 + 4] = *(_QWORD *)&v26[4 * v30 + 4] )
      v30 = v28++;
    for ( dword_140C11004 = v27; v28 < (unsigned __int16)word_140C11002; *(_QWORD *)&KiClockCheckPending[4 * v68 + 4] = v27 )
      v68 = v28++;
  }
  return KiUpdateRunTime(v71, v70);
}
