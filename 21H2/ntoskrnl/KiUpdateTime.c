/*
 * XREFs of KiUpdateTime @ 0x140304060
 * Callers:
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     KiUpdateRunTime @ 0x140307660 (KiUpdateRunTime.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KeGetPrcb @ 0x140348800 (KeGetPrcb.c)
 *     PpmGetIdleConstrainedMask @ 0x14039D6B0 (PpmGetIdleConstrainedMask.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 *     KiSetForceIdleState @ 0x14057A5A8 (KiSetForceIdleState.c)
 *     PpmEventIdleDurationExpiration @ 0x1405D9F60 (PpmEventIdleDurationExpiration.c)
 */

__int64 __fastcall KiUpdateTime(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // r11
  unsigned __int128 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r11
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  struct _KPRCB *v23; // rdi
  char v24; // r15
  __int64 v25; // r12
  _DWORD *SchedulerAssist; // rcx
  __int16 v27; // r13
  bool v28; // si
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  signed __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rbp
  __int64 v34; // rbx
  char v35; // si
  wchar_t v36; // ax
  wchar_t *v37; // r10
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  signed __int64 v41; // r10
  unsigned __int16 v42; // cx
  __int64 v43; // rdx
  wchar_t *v44; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  signed __int64 v49; // rdx
  struct _KPRCB *Prcb; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r14
  signed __int64 v54; // rdx
  bool v55; // r13
  signed __int64 v56; // r8
  volatile CCHAR v57; // t1
  unsigned __int64 v58; // rdx
  __int64 InternalData; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  signed __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // r10
  signed __int64 v66; // rax
  int v67; // r9d
  __int64 v68; // r8
  __int64 v69; // rcx
  unsigned __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rsi
  __int64 v73; // rax
  unsigned __int64 v74; // r10
  signed __int64 v75; // rax
  __int64 v76; // r8
  __int64 v77; // rcx
  unsigned __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // r14
  signed __int64 v84; // rdx
  __int64 v85; // rdi
  __int64 v86; // rax
  unsigned __int64 v87; // r10
  signed __int64 v88; // rax
  int v89; // r9d
  __int64 v90; // r8
  __int64 v91; // rcx
  unsigned __int64 v92; // r8
  __int64 v93; // rdx
  __int64 v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // r10
  signed __int64 v97; // rax
  int v98; // r9d
  __int64 v99; // r8
  __int64 v100; // rcx
  unsigned __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // r8
  int v104; // eax
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  int v109; // eax
  unsigned __int8 CurrentIrql; // di
  _DWORD *v111; // r9
  unsigned __int8 v112; // al
  int v113; // eax
  bool v114; // zf
  __int64 v115; // rax
  signed __int32 v116[8]; // [rsp+0h] [rbp-3E8h] BYREF
  unsigned __int8 v117; // [rsp+30h] [rbp-3B8h]
  unsigned __int8 v118; // [rsp+31h] [rbp-3B7h]
  unsigned int v119; // [rsp+34h] [rbp-3B4h] BYREF
  unsigned int v120; // [rsp+38h] [rbp-3B0h]
  int v121; // [rsp+3Ch] [rbp-3ACh] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-3A8h]
  __int64 v123; // [rsp+48h] [rbp-3A0h]
  __int64 v124; // [rsp+50h] [rbp-398h]
  __int64 v125; // [rsp+58h] [rbp-390h]
  __int64 v126; // [rsp+60h] [rbp-388h]
  unsigned __int16 *v127[2]; // [rsp+68h] [rbp-380h] BYREF
  __int16 v128; // [rsp+78h] [rbp-370h]
  int v129; // [rsp+7Ah] [rbp-36Eh]
  __int16 v130; // [rsp+7Eh] [rbp-36Ah]
  _DWORD v131[68]; // [rsp+80h] [rbp-368h] BYREF
  _QWORD v132[34]; // [rsp+190h] [rbp-258h] BYREF
  _QWORD v133[34]; // [rsp+2A0h] [rbp-148h] BYREF
  unsigned int v134; // [rsp+3E0h] [rbp-8h]

  v117 = a2;
  v118 = a1;
  memset(v132, 0, 0x108uLL);
  v2 = v134;
  CurrentPrcb = KeGetCurrentPrcb();
  v123 = MEMORY[0xFFFFF78000000320];
  _disable();
  v2 >>= 9;
  LOBYTE(v2) = v2 & 1;
  v120 = v2;
  do
  {
    while ( 1 )
    {
      v3 = MEMORY[0xFFFFF78000000340];
      if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
        break;
      _mm_pause();
    }
    v4 = HalpPerformanceCounter;
    if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
    {
      v5 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
          v6 = *(_QWORD *)(HalpPerformanceCounter + 72)
             + KeGetPcr()->Prcb.Number * *(_DWORD *)(HalpPerformanceCounter + 80);
        else
          v6 = *(_QWORD *)(HalpPerformanceCounter + 72);
        v8 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v6)
             * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
           + MEMORY[0xFFFFF780000003B8];
      }
      else
      {
        if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
        {
          InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
          v60 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(InternalData);
          v61 = *(_QWORD *)(v4 + 208);
          v62 = v60;
        }
        else
        {
          do
          {
            v61 = *(_QWORD *)(v4 + 208);
            do
            {
              v63 = *(_QWORD *)(v4 + 200);
              v64 = HalpTimerGetInternalData(v4);
              v65 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v64);
              _InterlockedOr(v116, 0);
              v66 = *(_QWORD *)(v4 + 200);
            }
            while ( v63 != v66 );
          }
          while ( v61 != *(_QWORD *)(v4 + 208) );
          v67 = *(_DWORD *)(v4 + 220);
          if ( ((v63 ^ v65) & (1LL << ((unsigned __int8)v67 - 1))) != 0 )
          {
            if ( v67 == 64 )
              v68 = -1LL;
            else
              v68 = (1LL << v67) - 1;
            v69 = 0LL;
            if ( v67 != 64 )
              v69 = 1LL << v67;
            v70 = v63 & v68;
            v62 = v65 | v63 ^ v70;
            if ( v65 < v70 )
              v62 += v69;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v62, v66);
          }
          else
          {
            if ( v67 == 64 )
              v71 = -1LL;
            else
              v71 = (1LL << v67) - 1;
            v62 = v65 | v63 & ~v71;
          }
        }
        v8 = HalpTimerScaleCounter(v61 + v62, *(_QWORD *)(v4 + 192), 10000000LL);
      }
    }
    else
    {
      v5 = *(_QWORD *)(HalpPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v46 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v47 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v46);
        v48 = *(_QWORD *)(v4 + 208);
        v49 = v47;
      }
      else
      {
        do
        {
          v48 = *(_QWORD *)(v4 + 208);
          do
          {
            v72 = *(_QWORD *)(v4 + 200);
            v73 = HalpTimerGetInternalData(v4);
            v74 = (*(__int64 (__fastcall **)(__int64))(v4 + 112))(v73);
            _InterlockedOr(v116, 0);
            v75 = *(_QWORD *)(v4 + 200);
          }
          while ( v72 != v75 );
        }
        while ( v48 != *(_QWORD *)(v4 + 208) );
        v7 = *(unsigned int *)(v4 + 220);
        if ( ((v72 ^ v74) & (1LL << ((unsigned __int8)v7 - 1))) != 0 )
        {
          if ( (_DWORD)v7 == 64 )
            v76 = -1LL;
          else
            v76 = (1LL << v7) - 1;
          v77 = 0LL;
          if ( (_DWORD)v7 != 64 )
            v77 = 1LL << v7;
          v78 = v72 & v76;
          v49 = v74 | v72 ^ v78;
          if ( v74 < v78 )
            v49 += v77;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 200), v49, v75);
        }
        else
        {
          if ( (_DWORD)v7 == 64 )
            v79 = -1LL;
          else
            v79 = (1LL << v7) - 1;
          v49 = v74 | v72 & ~v79;
        }
      }
      v8 = v48 + v49;
    }
    if ( v4 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v80 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v80 = 10000000LL;
      v8 = HalpTimerScaleCounter(v8, v5, v80);
    }
    *((_QWORD *)&v9 + 1) = 0LL;
    v10 = MEMORY[0xFFFFF78000000350];
    if ( v8 > MEMORY[0xFFFFF78000000350] )
    {
      v11 = v8 - MEMORY[0xFFFFF78000000350];
      v124 = 0LL;
      if ( MEMORY[0xFFFFF78000000369] )
        v11 <<= MEMORY[0xFFFFF78000000369];
      v9 = v11 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
      v124 = *((_QWORD *)&v9 + 1);
      KiInterruptTimeErrorAccumulator += v9;
      if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v9 )
        v124 = ++*((_QWORD *)&v9 + 1);
    }
  }
  while ( MEMORY[0xFFFFF78000000340] != v3 );
  if ( *((_QWORD *)&v9 + 1) <= 0x1F4uLL )
  {
    v21 = MEMORY[0xFFFFF78000000008];
    v22 = MEMORY[0xFFFFF78000000320];
    goto LABEL_37;
  }
  _m_prefetchw((const void *)0xFFFFF78000000340LL);
  v12 = MEMORY[0xFFFFF78000000340];
  while ( (v12 & 1) != 0 )
  {
    v12 = MEMORY[0xFFFFF78000000340];
LABEL_148:
    _mm_pause();
  }
  v13 = v12;
  v12 = _InterlockedCompareExchange64((volatile signed __int64 *)0xFFFFF78000000340LL, v12 + 1, v12);
  if ( v13 != v12 )
    goto LABEL_148;
  v14 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5 )
  {
    v15 = 10000000LL;
    if ( HalpTimerReferencePage )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v16 = *(_QWORD *)(HalpPerformanceCounter + 72)
            + KeGetPcr()->Prcb.Number * *(_DWORD *)(HalpPerformanceCounter + 80);
      else
        v16 = *(_QWORD *)(HalpPerformanceCounter + 72);
      v17 = (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v16)
            * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64)
          + MEMORY[0xFFFFF780000003B8];
    }
    else
    {
      if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
      {
        v81 = HalpTimerGetInternalData(HalpPerformanceCounter);
        v82 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v81);
        v83 = *(_QWORD *)(v14 + 208);
        v84 = v82;
      }
      else
      {
        do
        {
          v83 = *(_QWORD *)(v14 + 208);
          do
          {
            v85 = *(_QWORD *)(v14 + 200);
            v86 = HalpTimerGetInternalData(v14);
            v87 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v86);
            _InterlockedOr(v116, 0);
            v88 = *(_QWORD *)(v14 + 200);
          }
          while ( v85 != v88 );
        }
        while ( v83 != *(_QWORD *)(v14 + 208) );
        v89 = *(_DWORD *)(v14 + 220);
        if ( ((v85 ^ v87) & (1LL << ((unsigned __int8)v89 - 1))) != 0 )
        {
          if ( v89 == 64 )
            v90 = -1LL;
          else
            v90 = (1LL << v89) - 1;
          v91 = 0LL;
          if ( v89 != 64 )
            v91 = 1LL << v89;
          v92 = v85 & v90;
          v84 = v87 | v85 ^ v92;
          if ( v87 < v92 )
            v84 += v91;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v84, v88);
        }
        else
        {
          if ( v89 == 64 )
            v93 = -1LL;
          else
            v93 = (1LL << v89) - 1;
          v84 = v87 | v85 & ~v93;
        }
      }
      v17 = HalpTimerScaleCounter(v83 + v84, *(_QWORD *)(v14 + 192), 10000000LL);
    }
  }
  else
  {
    v15 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
    {
      v51 = HalpTimerGetInternalData(HalpPerformanceCounter);
      v52 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v51);
      v53 = *(_QWORD *)(v14 + 208);
      v54 = v52;
    }
    else
    {
      do
      {
        v53 = *(_QWORD *)(v14 + 208);
        do
        {
          v94 = *(_QWORD *)(v14 + 200);
          v95 = HalpTimerGetInternalData(v14);
          v96 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v95);
          _InterlockedOr(v116, 0);
          v97 = *(_QWORD *)(v14 + 200);
        }
        while ( v94 != v97 );
      }
      while ( v53 != *(_QWORD *)(v14 + 208) );
      v98 = *(_DWORD *)(v14 + 220);
      if ( ((v94 ^ v96) & (1LL << ((unsigned __int8)v98 - 1))) != 0 )
      {
        if ( v98 == 64 )
          v99 = -1LL;
        else
          v99 = (1LL << v98) - 1;
        v100 = 0LL;
        if ( v98 != 64 )
          v100 = 1LL << v98;
        v101 = v94 & v99;
        v54 = v96 | v94 ^ v101;
        if ( v96 < v101 )
          v54 += v100;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v54, v97);
      }
      else
      {
        if ( v98 == 64 )
          v102 = -1LL;
        else
          v102 = (1LL << v98) - 1;
        v54 = v96 | v94 & ~v102;
      }
    }
    v17 = v53 + v54;
  }
  if ( v14 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v103 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v103 = 10000000LL;
    v17 = HalpTimerScaleCounter(v17, v15, v103);
  }
  *((_QWORD *)&v9 + 1) = 0LL;
  if ( v17 > MEMORY[0xFFFFF78000000348] )
  {
    v125 = 0LL;
    v18 = v17 - MEMORY[0xFFFFF78000000348];
    if ( MEMORY[0xFFFFF78000000368] )
      v18 <<= MEMORY[0xFFFFF78000000368];
    v9 = v18 * (unsigned __int128)MEMORY[0xFFFFF78000000358];
    v125 = *((_QWORD *)&v9 + 1);
    KiSystemTimeErrorAccumulator += v9;
    if ( KiSystemTimeErrorAccumulator < (unsigned __int64)v9 )
      v125 = ++*((_QWORD *)&v9 + 1);
  }
  v19 = *((_QWORD *)&v9 + 1) + MEMORY[0xFFFFF78000000014];
  *((_QWORD *)&v9 + 1) = 0LL;
  v7 = MEMORY[0xFFFFF78000000360];
  if ( v17 > MEMORY[0xFFFFF78000000350] )
  {
    v126 = 0LL;
    v20 = v17 - MEMORY[0xFFFFF78000000350];
    if ( MEMORY[0xFFFFF78000000369] )
      v20 <<= MEMORY[0xFFFFF78000000369];
    v9 = v20 * (unsigned __int128)MEMORY[0xFFFFF78000000360];
    v126 = *((_QWORD *)&v9 + 1);
    KiInterruptTimeErrorAccumulator += v9;
    if ( KiInterruptTimeErrorAccumulator < (unsigned __int64)v9 )
      v126 = ++*((_QWORD *)&v9 + 1);
  }
  v21 = MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v9 + 1);
  MEMORY[0xFFFFF7800000001C] = HIDWORD(v19);
  MEMORY[0xFFFFF78000000014] = v19;
  MEMORY[0xFFFFF78000000010] = (MEMORY[0xFFFFF78000000008] + *((_QWORD *)&v9 + 1)) >> 32;
  MEMORY[0xFFFFF78000000008] += *((_QWORD *)&v9 + 1);
  MEMORY[0xFFFFF78000000348] = v17;
  MEMORY[0xFFFFF78000000350] = v17;
  v22 = MEMORY[0xFFFFF78000000320];
  v10 = (unsigned int)KiTickOffset - *((_QWORD *)&v9 + 1);
  if ( v10 <= 0 )
  {
    v7 = (unsigned int)KeMaximumIncrement;
    *((_QWORD *)&v9 + 1) = 1LL;
    v10 += (unsigned int)KeMaximumIncrement;
    if ( v10 <= 0 )
    {
      v57 = KeNumberProcessorsGroup0[1];
      v58 = ((unsigned __int64)(((unsigned __int64)-v10
                               * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> v57)
          + 1;
      v7 = v58 * (unsigned int)KeMaximumIncrement;
      v10 += v7;
      *((_QWORD *)&v9 + 1) = v58 + 1;
    }
    v22 = *((_QWORD *)&v9 + 1) + MEMORY[0xFFFFF78000000320];
    MEMORY[0xFFFFF78000000328] = (*((_QWORD *)&v9 + 1) + MEMORY[0xFFFFF78000000320]) >> 32;
    MEMORY[0xFFFFF78000000320] += *((_QWORD *)&v9 + 1);
  }
  KiTickOffset = v10;
  ++MEMORY[0xFFFFF78000000340];
LABEL_37:
  v23 = KeGetCurrentPrcb();
  v24 = v120;
  v25 = v123;
  v121 = 0;
  SchedulerAssist = v23->SchedulerAssist;
  v27 = v134;
  if ( SchedulerAssist )
  {
    if ( v23->NestingLevel <= 1u )
    {
      v104 = SchedulerAssist[6];
      SchedulerAssist[6] = v104 + 1;
      if ( v104 == -1 )
LABEL_191:
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    v105 = v23->SchedulerAssist;
    if ( v105 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v106 = v105[6] - 1;
        v105[6] = v106;
        if ( !v106 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
    do
      KeYieldProcessorEx(&v121, *((__int64 *)&v9 + 1), v10, v7);
    while ( KiForceIdleLock );
    v107 = v23->SchedulerAssist;
    if ( v107 )
    {
      if ( v23->NestingLevel <= 1u )
      {
        v108 = v107[6];
        v107[6] = v108 + 1;
        if ( v108 == -1 )
          goto LABEL_191;
      }
    }
  }
  if ( KiForceIdleStartTime && v21 >= KiForceIdleStartTime && KiForceIdleState == 2 )
  {
    KiSetForceIdleState(1LL);
    if ( !*(&KiForceIdleStartDpc + 7) )
      WORD1(KiForceIdleStartDpc) = CurrentPrcb->Number + 2048;
    KiInsertQueueDpc((ULONG_PTR)&KiForceIdleStartDpc, 0);
  }
  v28 = ((KiForceIdleState - 1) & 0xFFFFFFFD) == 0;
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 )
  {
    if ( v29->NestingLevel <= 1u )
    {
      v109 = v30[6] - 1;
      v30[6] = v109;
      if ( !v109 )
        KiRemoveSystemWorkPriorityKick(v29);
    }
  }
  if ( v24 )
    _enable();
  if ( KeMinimumIncrement - 1 + (int)v21 - (int)KiLastNonHrTimerExpiration >= (unsigned int)KeNonHrTimeIncrement )
    KiLastNonHrTimerExpiration = v21;
  if ( KeMinimumIncrement - 1 + (int)v21 - (int)KiLastPseudoHrTimerExpiration >= (unsigned int)KePseudoHrTimeIncrement )
    KiLastPseudoHrTimerExpiration = v21;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v111 = KeGetCurrentPrcb()->SchedulerAssist;
      v111[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KiSetClockTimerKTimerDeadlines(CurrentPrcb, 0LL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v112 = KeGetCurrentIrql();
        if ( v112 <= 0xFu && CurrentIrql <= 0xFu && v112 >= 2u )
        {
          v7 = (__int64)KeGetCurrentPrcb();
          v10 = *(_QWORD *)(v7 + 35000);
          v113 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v114 = (v113 & *(_DWORD *)(v10 + 20)) == 0;
          *(_DWORD *)(v10 + 20) &= v113;
          if ( v114 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v22 != v25 && !--KiBalanceSetManagerCount )
  {
    KiBalanceSetManagerCount = KiBalanceSetManagerPeriod;
    KiInsertQueueDpc((ULONG_PTR)&KiBalanceSetManagerPeriodicDpc, 0);
  }
  if ( !KiClockTimerPerCpuTickScheduling )
  {
    v129 = 0;
    v130 = 0;
    v119 = 0;
    memset(&v131[2], 0, 0x100uLL);
    LODWORD(v133[0]) = 2097153;
    memset((char *)v133 + 4, 0, 0x104uLL);
    if ( PpmIdleDurationExpirationTimeout )
    {
      if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < v21
        && (unsigned __int8)PpmGetIdleConstrainedMask(v133) )
      {
        PpmIdleLastIdleDurationExpirationTime = v21;
        v131[0] = 2097153;
        memset(&v131[1], 0, 0x104uLL);
        v127[1] = (unsigned __int16 *)v133[1];
        v127[0] = (unsigned __int16 *)v133;
        v128 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v119, v127) )
        {
          Prcb = (struct _KPRCB *)KeGetPrcb(v119);
          if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= v21 )
            KeAddProcessorAffinityEx((unsigned __int16 *)v131, v119);
        }
        if ( !(unsigned int)KeIsEmptyAffinityEx(v131) )
        {
          PpmEventIdleDurationExpiration(v131);
          HalRequestIpi(0, (__int64)v131);
        }
      }
    }
  }
  if ( !v28 )
  {
    v31 = PpmCheckLastEffectiveExecutionTime;
    if ( PpmCheckLastEffectiveExecutionTime )
    {
      v32 = (unsigned int)KeTimeIncrement;
      v33 = MEMORY[0xFFFFF78000000008];
      if ( PpmCheckPeriod > (unsigned __int64)(unsigned int)KeTimeIncrement )
        v32 = PpmCheckPeriod;
      if ( v32 + PpmCheckLastEffectiveExecutionTime <= MEMORY[0xFFFFF78000000008] )
      {
        _disable();
        v55 = (v27 & 0x200) != 0;
        KxAcquireSpinLock(&PpmCheckExecutionLock);
        if ( PpmCheckLastActualExecutionTime + (v32 >> 1) <= v33 )
        {
          v56 = v33;
          if ( v31 != 1 && v31 + (unsigned int)KeMaximumIncrement + v32 > v33 )
            v56 = v32 + v31;
          if ( v31 == _InterlockedCompareExchange64(&PpmCheckLastEffectiveExecutionTime, v56, v31) )
          {
            PpmCheckLastActualExecutionTime = v33;
            KiInsertQueueDpc((ULONG_PTR)&PpmCheckStartDpc, 0);
          }
        }
        KxReleaseSpinLock(&PpmCheckExecutionLock);
        if ( v55 )
          _enable();
      }
    }
  }
  v34 = v21 >> 18;
  if ( KiGroupSchedulingEnabled && v22 > KiGenerationEndTick )
  {
    v35 = 1;
    KiGenerationEndTick += (unsigned int)KiGenerationTicks;
  }
  else
  {
    v35 = 0;
  }
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    LODWORD(v132[0]) = 2097153;
    memset((char *)v132 + 4, 0, 0x104uLL);
    KiForwardTick((__int64)CurrentPrcb, KeNumberProcessors_0, v34, v35, (unsigned __int16 *)v132);
    v10 = LOWORD(v132[0]);
    if ( KiClockCheckPending[0] < LOWORD(v132[0]) )
    {
      v37 = (wchar_t *)v132;
      v36 = KiClockCheckPending[0];
    }
    else
    {
      v36 = v132[0];
      v37 = KiClockCheckPending;
      v10 = KiClockCheckPending[0];
    }
    KiClockCheckPending[0] = v10;
    if ( (unsigned __int16)v10 > KiClockCheckPending[1] )
      KiClockCheckPending[0] = KiClockCheckPending[1];
    if ( v36 > KiClockCheckPending[1] )
      v36 = KiClockCheckPending[1];
    if ( (unsigned __int16)v10 > KiClockCheckPending[1] )
      v10 = KiClockCheckPending[1];
    v7 = 0LL;
    if ( v36 )
    {
      v38 = 0LL;
      v39 = v36;
      v7 = v36;
      do
      {
        *(_QWORD *)&KiClockCheckPending[v38 / 2 + 4] |= v132[v38 / 8 + 1];
        v38 += 8LL;
        --v39;
      }
      while ( v39 );
    }
    if ( (unsigned __int16)v7 < (unsigned __int16)v10 )
    {
      v40 = (unsigned __int16)v7 + 1LL;
      v41 = (char *)v37 - (char *)&unk_140C0B588;
      v42 = v10 - v7;
      v7 = (unsigned __int16)v10;
      v43 = v42;
      v44 = &KiClockCheckPending[4 * v40];
      do
      {
        *(_QWORD *)v44 = *(_QWORD *)((char *)v44 + v41 + 8);
        v44 += 4;
        --v43;
      }
      while ( v43 );
    }
    for ( *(_DWORD *)&KiClockCheckPending[2] = 0;
          (unsigned __int16)v7 < KiClockCheckPending[1];
          *(_QWORD *)&KiClockCheckPending[4 * v115 + 4] = 0LL )
    {
      v115 = (unsigned __int16)v7;
      LOWORD(v7) = v7 + 1;
    }
  }
  return KiUpdateRunTime(v118, v117, v10, v7);
}
