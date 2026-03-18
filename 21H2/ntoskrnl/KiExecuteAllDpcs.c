/*
 * XREFs of KiExecuteAllDpcs @ 0x1402A9790
 * Callers:
 *     KiRetireDpcList @ 0x1402A8980 (KiRetireDpcList.c)
 *     KiExecuteDpc @ 0x1403CB9F0 (KiExecuteDpc.c)
 * Callees:
 *     KiChooseLowestRankedThread @ 0x140210224 (KiChooseLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KiInsertNewDpcRuntime @ 0x140248C84 (KiInsertNewDpcRuntime.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiSelectReadyThread @ 0x1402B4AE0 (KiSelectReadyThread.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1402F4380 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceLongDpcDetectionEvent @ 0x14062DC50 (EtwTraceLongDpcDetectionEvent.c)
 *     EtwTraceLongDpcMitigationEvent @ 0x14062DCD0 (EtwTraceLongDpcMitigationEvent.c)
 */

char __fastcall KiExecuteAllDpcs(__int64 a1, unsigned __int64 a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r15
  __int64 v7; // rsi
  __int64 v8; // r13
  bool v9; // bl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v12; // eax
  __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // r13
  _BYTE *v16; // rcx
  char v17; // bl
  char v18; // al
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  struct _KPRCB *v26; // r15
  _DWORD *v27; // rcx
  __int64 *v28; // r15
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  ULONG_PTR v31; // r10
  _QWORD *v32; // r13
  __int64 v33; // rcx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  _DWORD *v36; // rdx
  __int64 v37; // rbx
  _DWORD *v38; // rbx
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r12
  void (__fastcall *v42)(unsigned __int64, ULONG_PTR); // rax
  unsigned __int64 v43; // rax
  __int64 v44; // r10
  __int64 v45; // r11
  unsigned int v46; // r8d
  __int64 v47; // r12
  ULONG_PTR v48; // r9
  unsigned int v49; // r8d
  __int64 v50; // r8
  unsigned __int64 v51; // rax
  struct _KPRCB *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rsi
  char *v56; // r12
  char v57; // bl
  unsigned __int64 v58; // r13
  char v59; // al
  char v60; // al
  __int64 v61; // rcx
  __int64 v62; // r8
  char v63; // r12
  int v64; // ebx
  __int64 v65; // rdx
  __int64 ready; // rax
  __int64 v67; // r8
  __int64 v68; // rsi
  int v70; // ebx
  unsigned int v71; // edx
  bool v72; // zf
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r12d
  __int16 v76; // r13
  unsigned int v77; // ebx
  unsigned int v78; // ecx
  __int64 v79; // r8
  __int64 v80; // rcx
  __int16 v81; // ax
  _DWORD *v82; // rdx
  __int64 v83; // rbx
  int v84; // esi
  char v85; // r12
  __int64 v86; // r15
  __int64 v87; // rax
  int v88; // esi
  struct _KPRCB *v89; // r13
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rbx
  __int64 v93; // r13
  struct _KPRCB *v94; // rdx
  _DWORD *v95; // rcx
  ULONG_PTR v96; // rcx
  ULONG_PTR v97; // rcx
  struct _KPRCB *v98; // rcx
  _DWORD *v99; // rdx
  struct _KPRCB *v100; // rcx
  _DWORD *v101; // rdx
  _QWORD *v102; // r13
  char v103; // r12
  __int64 v104; // r15
  __int64 v105; // rax
  char *v106; // r15
  char v107; // bl
  char v108; // al
  char v109; // al
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // rcx
  __int64 v113; // rcx
  int ThreadEffectiveRankNonZero; // r8d
  __int64 v115; // rdx
  __int64 v116; // rdx
  int v117; // ecx
  __int64 v118; // rdx
  char v119; // r9
  _DWORD *v120; // rcx
  _DWORD *v121; // rcx
  _DWORD *v122; // rcx
  _DWORD *v123; // rcx
  int v124; // ecx
  __int64 v125; // rdx
  __int64 v126; // rdx
  _DWORD *v127; // rcx
  int v128; // eax
  int v129; // eax
  int v130; // eax
  __int64 v131; // rdx
  char v132; // al
  char v133; // al
  unsigned int v134; // edx
  char v135; // cl
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  __int64 v146; // rdx
  char v147; // al
  char v148; // al
  unsigned int v149; // ecx
  char v150; // cl
  __int64 v151; // rdx
  char v152; // al
  char v153; // al
  unsigned int v154; // edx
  char v155; // [rsp+30h] [rbp-1C8h]
  char v156; // [rsp+31h] [rbp-1C7h]
  unsigned __int8 v157; // [rsp+32h] [rbp-1C6h]
  _BYTE *v158; // [rsp+38h] [rbp-1C0h]
  ULONG_PTR v159; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v160; // [rsp+38h] [rbp-1C0h]
  struct _KPRCB *v161; // [rsp+38h] [rbp-1C0h]
  unsigned int BugCheckParameter3; // [rsp+40h] [rbp-1B8h]
  char BugCheckParameter3a; // [rsp+40h] [rbp-1B8h]
  int v164; // [rsp+48h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-1A0h] BYREF
  unsigned __int64 v167; // [rsp+60h] [rbp-198h]
  unsigned int v168; // [rsp+6Ch] [rbp-18Ch]
  int v169; // [rsp+70h] [rbp-188h]
  ULONG_PTR v170; // [rsp+78h] [rbp-180h]
  __int64 v171; // [rsp+80h] [rbp-178h] BYREF
  ULONG_PTR v172; // [rsp+88h] [rbp-170h]
  int v173; // [rsp+90h] [rbp-168h] BYREF
  _DWORD v174[3]; // [rsp+94h] [rbp-164h] BYREF
  int v175; // [rsp+A0h] [rbp-158h] BYREF
  int v176; // [rsp+A4h] [rbp-154h] BYREF
  _QWORD *v177; // [rsp+A8h] [rbp-150h] BYREF
  __int64 *v178; // [rsp+B0h] [rbp-148h]
  _DWORD *v179; // [rsp+B8h] [rbp-140h]
  __int64 v180; // [rsp+C0h] [rbp-138h]
  __int64 v181; // [rsp+C8h] [rbp-130h]
  __int64 v182; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v183; // [rsp+E0h] [rbp-118h]
  __int64 v184; // [rsp+E8h] [rbp-110h]
  __int64 v185; // [rsp+F0h] [rbp-108h]
  unsigned __int64 v186; // [rsp+F8h] [rbp-100h]
  _DWORD *v187; // [rsp+100h] [rbp-F8h]
  ULONG_PTR v188; // [rsp+118h] [rbp-E0h]
  ULONG_PTR v189; // [rsp+120h] [rbp-D8h]
  ULONG_PTR v190; // [rsp+128h] [rbp-D0h]
  __int64 v191; // [rsp+130h] [rbp-C8h]
  unsigned __int64 v192; // [rsp+138h] [rbp-C0h]
  __int128 v193; // [rsp+140h] [rbp-B8h] BYREF
  ULONG_PTR v194; // [rsp+158h] [rbp-A0h] BYREF
  __int128 v195; // [rsp+160h] [rbp-98h]
  __int128 v196; // [rsp+170h] [rbp-88h]
  _QWORD v197[2]; // [rsp+180h] [rbp-78h] BYREF
  _QWORD v198[4]; // [rsp+190h] [rbp-68h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+0h]

  v4 = a4;
  v179 = a3;
  v5 = a2;
  v167 = a2;
  v180 = a1;
  v185 = a1;
  v183 = a1;
  v186 = a2;
  v192 = a2;
  v187 = a3;
  v174[1] = a4;
  BugCheckParameter2 = 0LL;
  v193 = 0LL;
  v171 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v7 = 48LL * a4 + a1 + 13120;
  v184 = v7;
  if ( !*(_DWORD *)(v7 + 24) )
    return 1;
  if ( SBYTE4(PerfGlobalGroupMask) < 0 )
  {
    if ( a4 )
    {
      v81 = 3906;
      HIDWORD(v171) = 4200450;
    }
    else
    {
      v81 = 3908;
      HIDWORD(v171) = 4196866;
    }
    LOWORD(v171) = v81;
    v178 = &v171;
  }
  else
  {
    v178 = 0LL;
  }
  v191 = *(_QWORD *)(a1 + 11664);
  v8 = 48LL * a4 + a1 + 13120;
  v181 = v8;
  while ( 1 )
  {
    v9 = !v4 && (*(_DWORD *)(v7 + 40) || *(_DWORD *)(v7 + 24) >= (unsigned int)KiLongDpcQueueThreshold);
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      if ( !v9 )
        goto LABEL_35;
      LOBYTE(a2) = *(_DWORD *)(v7 + 40) != 0;
      EtwTraceLongDpcDetectionEvent(*(unsigned int *)(v7 + 24), a2);
    }
    if ( v9 )
    {
      v157 = 0;
      v156 = 0;
      v155 = 0;
      if ( v5 != *(_QWORD *)(a1 + 13112) )
      {
        _enable();
        CurrentPrcb = KeGetCurrentPrcb();
        v173 = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v128 = SchedulerAssist[6];
            SchedulerAssist[6] = v128 + 1;
            if ( v128 == -1 )
LABEL_212:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v120 = CurrentPrcb->SchedulerAssist;
          if ( v120 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v129 = v120[6] - 1;
              v120[6] = v129;
              if ( !v129 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v173);
          while ( *(_QWORD *)(a1 + 48) );
          v121 = CurrentPrcb->SchedulerAssist;
          if ( v121 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v130 = v121[6];
              v121[6] = v130 + 1;
              if ( v130 == -1 )
                goto LABEL_212;
            }
          }
        }
        v12 = *(_DWORD *)(a1 + 236);
        if ( (v12 & 0x1000) == 0 )
          *(_DWORD *)(a1 + 236) = v12 | 0x1000;
        if ( v5 != *(_QWORD *)(a1 + 24) )
        {
          v13 = *(_QWORD *)(a1 + 13112);
          if ( v13 )
          {
            if ( v5 != v13
              && *(char *)(v5 + 195) >= 16
              && (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(a1, *(_QWORD *)(v5 + 576)) )
            {
              v155 = 1;
            }
          }
        }
        v14 = *(_QWORD *)(a1 + 16);
        v172 = v14;
        v15 = *(_QWORD *)(a1 + 13112);
        if ( !v15 || v14 == v15 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
          v24 = KeGetCurrentPrcb();
          v82 = v24->SchedulerAssist;
          if ( !v82 )
            goto LABEL_32;
          if ( v24->NestingLevel > 1u )
            goto LABEL_32;
          v142 = v82[6] - 1;
          v82[6] = v142;
          if ( v142 )
            goto LABEL_32;
        }
        else
        {
          v156 = 1;
          v16 = *(_BYTE **)(a1 + 56);
          v158 = v16;
          v17 = *v16;
          if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
          {
            if ( *(char *)(v15 + 195) >= 16 || !*(_QWORD *)(v15 + 104) )
              goto LABEL_163;
            ThreadEffectiveRankNonZero = 0;
            v115 = *(_QWORD *)(v15 + 104);
            if ( v115 )
            {
              v116 = *(unsigned int *)(a1 + 216) + v115;
              if ( v116 )
              {
                ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v15, v116, 0LL, 0, 0LL);
                v16 = v158;
              }
            }
            if ( ThreadEffectiveRankNonZero )
              v18 = v17 ^ 1;
            else
LABEL_163:
              v18 = *(_BYTE *)(v15 + 195) ^ v17;
          }
          else
          {
            v18 = v17 ^ *(_BYTE *)(v15 + 195);
          }
          v19 = (v18 & 0x7F ^ v17) & 0x7F | (*(_BYTE *)(v15 + 119) << 7);
          *v16 = v19;
          v20 = *(_QWORD *)(a1 + 35000);
          if ( v20 )
          {
            if ( v15 == *(_QWORD *)(a1 + 24) )
              v131 = (unsigned int)KiVpThreadSystemWorkPriority;
            else
              v131 = v19 & 0x7F;
            KiSetSchedulerAssistPriority(v20, v131, 0LL);
          }
          v21 = *(_QWORD *)(a1 + 56);
          if ( KeHeteroSystem )
          {
            v132 = (*(_BYTE *)(v21 + 64) ^ *(_BYTE *)(v15 + 512)) & 7 ^ *(_BYTE *)(v21 + 64);
            v133 = (v132 ^ (8 * *(_BYTE *)(v15 + 516))) & 0x38 ^ v132;
            v134 = *(_DWORD *)(v15 + 80);
            if ( v134 <= *(_DWORD *)(v15 + 84) )
              v134 = *(_DWORD *)(v15 + 84);
            v135 = 64;
            if ( v134 < KiDynamicHeteroCpuPolicyExpectedCycles )
              v135 = 0;
            *(_BYTE *)(v21 + 64) = v135 | v133 & 0xBF;
          }
          *(_QWORD *)(a1 + 16) = v15;
          v22 = *(_QWORD *)(a1 + 35000);
          if ( v22 )
            *(_BYTE *)(v22 + 16) = v15 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v15 + 388) == 1 )
            *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v15 + 388) = 3;
          v23 = *(unsigned __int8 *)(a1 + 35);
          if ( (v23 & 1) == 0 )
          {
            v92 = *(_QWORD *)(a1 + 192);
            BugCheckParameter3a = *(_BYTE *)(a1 + 209);
            v93 = 1LL << BugCheckParameter3a;
            v170 = *(_QWORD *)(a1 + 34912);
            *(_BYTE *)(a1 + 13243) = 0;
            v164 = v23 + 1;
            *(_BYTE *)(a1 + 35) = v23 + 1;
            v94 = KeGetCurrentPrcb();
            v161 = v94;
            v174[0] = 0;
            v95 = v94->SchedulerAssist;
            if ( v95 )
            {
              if ( v94->NestingLevel <= 1u )
              {
                v136 = v95[6];
                v95[6] = v136 + 1;
                if ( v136 == -1 )
                  KiRemoveSystemWorkPriorityKick(v94);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)v92, 0LL) )
            {
              v122 = v161->SchedulerAssist;
              if ( v122 )
              {
                if ( v161->NestingLevel <= 1u )
                {
                  v137 = v122[6] - 1;
                  v122[6] = v137;
                  if ( !v137 )
                    KiRemoveSystemWorkPriorityKick(v161);
                }
              }
              do
                KeYieldProcessorEx(v174);
              while ( *(_QWORD *)v92 );
              v123 = v161->SchedulerAssist;
              if ( v123 )
              {
                if ( v161->NestingLevel <= 1u )
                {
                  v138 = v123[6];
                  v123[6] = v138 + 1;
                  if ( v138 == -1 )
                    KiRemoveSystemWorkPriorityKick(v161);
                }
              }
            }
            v5 = v167;
            if ( v164 == 1 )
              *(_QWORD *)(v92 + 8) &= ~(1LL << BugCheckParameter3a);
            *(_QWORD *)(v92 + 40) &= ~(1LL << BugCheckParameter3a);
            v96 = ~v170;
            *(_QWORD *)(v92 + 16) &= ~v170;
            v97 = *(_QWORD *)(v92 + 24) & v96;
            if ( (v170 & ~*(_QWORD *)(v92 + 40)) == v93 )
              v97 |= v93;
            *(_QWORD *)(v92 + 24) = v97;
            *(_QWORD *)(v92 + 32) &= ~*(_QWORD *)(a1 + 34936);
            _InterlockedAnd64((volatile signed __int64 *)v92, 0LL);
            v98 = KeGetCurrentPrcb();
            v99 = v98->SchedulerAssist;
            if ( v99 )
            {
              if ( v98->NestingLevel <= 1u )
              {
                v139 = v99[6] - 1;
                v99[6] = v139;
                if ( !v139 )
                  KiRemoveSystemWorkPriorityKick(v98);
              }
            }
          }
          v14 = v172;
          if ( v172 && v172 != *(_QWORD *)(a1 + 24) )
          {
            v157 = *(_BYTE *)(v172 + 195);
            KiEnterDeferredReadyState(v172);
            *(_BYTE *)(v14 + 565) = 1;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
            v100 = KeGetCurrentPrcb();
            v101 = v100->SchedulerAssist;
            if ( v101 )
            {
              if ( v100->NestingLevel <= 1u )
              {
                v140 = v101[6] - 1;
                v101[6] = v140;
                if ( !v140 )
                  KiRemoveSystemWorkPriorityKick(v100);
              }
            }
            v102 = (_QWORD *)(v14 + 216);
            *(_QWORD *)(v14 + 216) = 0LL;
            v103 = 0;
            v177 = 0LL;
            v104 = v183;
            do
            {
              KiDeferredReadySingleThread(a1, v102 - 27, &v177);
              ++v103;
              v102 = v177;
              if ( v177 )
                v177 = (_QWORD *)*v177;
              if ( (v103 & 0xF) != 0 )
              {
                v105 = v104 + 12760;
              }
              else
              {
                KiFlushSoftwareInterruptBatch(a1 + 12760);
                v105 = a1 + 12760;
              }
            }
            while ( v102 );
            v5 = v167;
            v4 = a4;
            KiFlushSoftwareInterruptBatch(v105);
LABEL_32:
            _disable();
            if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
            {
              if ( !v156 && !v155 )
              {
LABEL_34:
                v8 = v181;
                goto LABEL_35;
              }
              EtwTraceLongDpcMitigationEvent(v5, v14, *(unsigned __int8 *)(v5 + 195), v157, v156, v155);
            }
            if ( v155 )
              return 0;
            goto LABEL_34;
          }
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          if ( !v25 )
            goto LABEL_32;
          if ( v24->NestingLevel > 1u )
            goto LABEL_32;
          v141 = v25[6] - 1;
          v25[6] = v141;
          if ( v141 )
            goto LABEL_32;
        }
        KiRemoveSystemWorkPriorityKick(v24);
        goto LABEL_32;
      }
    }
LABEL_35:
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v7 + 16);
    }
    else
    {
      v26 = KeGetCurrentPrcb();
      v27 = v26->SchedulerAssist;
      if ( v27 )
      {
        if ( v26->NestingLevel <= 1u )
        {
          v143 = v27[6];
          v27[6] = v143 + 1;
          if ( v143 == -1 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 16), 0LL) )
      {
        v127 = v26->SchedulerAssist;
        if ( v127 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v144 = v127[6] - 1;
            v127[6] = v144;
            if ( !v144 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 16));
      }
      v5 = v167;
    }
    if ( *(int *)(v7 + 24) <= 1 )
    {
      _InterlockedAnd16((volatile signed __int16 *)(v180 + 2LL * v4 + 13244), 0xFFEDu);
      *(_DWORD *)(v7 + 40) = 0;
      if ( !*(_DWORD *)(v7 + 24) )
        break;
    }
    v28 = *(__int64 **)v8;
    v29 = **(_QWORD **)v8;
    *(_QWORD *)v8 = v29;
    if ( !v29 )
      *(_QWORD *)(v8 + 8) = v8;
    v30 = (unsigned __int64)(v28 - 1);
    BugCheckParameter2 = *(_QWORD *)(v30 + 24);
    v31 = *(_QWORD *)(v30 + 32);
    v159 = v31;
    v32 = *(_QWORD **)(v30 + 56);
    v170 = (ULONG_PTR)v32;
    *(_QWORD *)(v30 + 56) = 0LL;
    --*(_DWORD *)(v7 + 24);
    *(_QWORD *)(v7 + 32) = v30;
    v33 = *(_QWORD *)(a1 + 35000);
    if ( v33 && !v4 )
      --*(_DWORD *)(v33 + 28);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseSpinLockInstrumented(v7 + 16, retaddr);
      v31 = v159;
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 16), 0LL);
    }
    v34 = KeGetCurrentPrcb();
    v35 = v34->SchedulerAssist;
    if ( v35 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v145 = v35[6] - 1;
        v35[6] = v145;
        if ( !v145 )
        {
          KiRemoveSystemWorkPriorityKick(v34);
          v31 = v159;
        }
      }
    }
    _enable();
    if ( (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0 )
    {
      *(_QWORD *)&v193 = BugCheckParameter2;
      *((_QWORD *)&v193 + 1) = 0x7E35C6C7F3DD7277LL
                             * (KiWaitNever ^ __ROR8__(
                                                BugCheckParameter2 ^ _byteswap_uint64(v30 ^ KiWaitAlways),
                                                KiWaitNever));
      v197[0] = &v193;
      v197[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v197, 1, 537133056, 3941, 4196866);
      v31 = v159;
    }
    if ( v178 )
    {
      v169 = 0;
      v70 = 0;
      if ( qword_140D328E0 )
      {
        v71 = *(_DWORD *)(qword_140D328E0 + 4248);
        v72 = !_BitScanForward((unsigned int *)&v73, v71);
        v169 = v73;
        if ( !v72 )
        {
          do
          {
            v71 &= v71 - 1;
            v74 = 32LL * (unsigned int)v73 + qword_140D328E0 + 4284;
            if ( v74 && (*(_DWORD *)(v74 + 4) & 0x80u) != 0 )
              v70 |= 1 << *(_BYTE *)(qword_140D328E0 + 2 * v73 + 4233);
            v72 = !_BitScanForward((unsigned int *)&v73, v71);
          }
          while ( !v72 );
          v169 = v73;
        }
      }
      else
      {
        LOBYTE(v70) = 30;
      }
      if ( (v70 & 2) != 0 )
        *(LARGE_INTEGER *)&v195 = KeQueryPerformanceCounter(0LL);
      else
        *(_QWORD *)&v195 = 0LL;
      if ( (v70 & 4) != 0 )
        *((_QWORD *)&v195 + 1) = RtlGetSystemTimePrecise();
      else
        *((_QWORD *)&v195 + 1) = 0LL;
      if ( (v70 & 8) != 0 )
        *(_QWORD *)&v196 = __rdtsc();
      else
        *(_QWORD *)&v196 = 0LL;
      if ( (v70 & 0x10) != 0 )
      {
        v182 = 0LL;
        ((void (__fastcall *)(__int64 *))off_140C02030[0])(&v182);
        *((_QWORD *)&v196 + 1) = v182;
      }
      else
      {
        *((_QWORD *)&v196 + 1) = 0LL;
      }
      v31 = v159;
    }
    v36 = v179;
    v37 = (*v179)++ & 0xF;
    v38 = &v36[4 * v37 + 4];
    *(_QWORD *)v38 = BugCheckParameter2;
    v38[2] = MEMORY[0xFFFFF78000000320];
    BugCheckParameter3 = *(_DWORD *)(v167 + 484);
    *(_DWORD *)(a1 + 33116) = 0;
    v39 = *(_QWORD *)(a1 + 34984);
    if ( v39 && *(_QWORD *)(a1 + 34992) != v39 && *(_DWORD *)(a1 + 32428) < *(_DWORD *)(a1 + 32436) )
      *(_QWORD *)(a1 + 34992) = v39;
    v40 = __rdtsc();
    v41 = v40;
    v172 = v40;
    *(_QWORD *)(a1 + 11664) = v32;
    if ( v32 != (_QWORD *)1 )
      v32[4] = v40;
    v42 = (void (__fastcall *)(unsigned __int64, ULONG_PTR))BugCheckParameter2;
    if ( !a4 )
    {
      *(_QWORD *)(a1 + 13088) = BugCheckParameter2;
      *(_QWORD *)(a1 + 13104) = v41;
      *(_BYTE *)(a1 + 13242) = 1;
    }
    v42(v30, v31);
    v5 = v167;
    v43 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v43) << 32;
    v160 = v43;
    if ( !a4 )
    {
      *(_BYTE *)(a1 + 13242) = 0;
      v44 = v43 - v41;
      v45 = *(_QWORD *)(a1 + 13072);
      if ( v45 )
      {
        v46 = *(_DWORD *)(v45 + 4);
        v47 = -1LL << (*(_BYTE *)(v45 + 4) & 0x1F);
        v48 = BugCheckParameter2 & v47;
        v190 = (BugCheckParameter2 & v47) >> 56;
        v189 = (BugCheckParameter2 & v47) >> 48;
        v188 = (BugCheckParameter2 & v47) >> 40;
        v170 = (BugCheckParameter2 & v47) >> 24;
        v172 = (BugCheckParameter2 & v47) >> 16;
        v49 = v46 >> 5;
        if ( v49 )
        {
          v194 = BugCheckParameter2 & v47;
          a2 = ((_DWORD)v190
              + 37
              * ((unsigned __int8)v189
               + 37
               * ((unsigned __int8)v188
                + 37
                * ((unsigned __int8)((BugCheckParameter2 & v47) >> 32)
                 + 37
                 * ((unsigned __int8)v170
                  + 37
                  * ((unsigned __int8)v172
                   + 37
                   * ((unsigned __int8)((unsigned __int16)(BugCheckParameter2 & v47) >> 8)
                    + 37 * ((unsigned __int8)v48 + 11623883)))))))) & (v49 - 1);
          v50 = *(_QWORD *)(v45 + 8) + 8 * a2;
          while ( 1 )
          {
            v50 = *(_QWORD *)v50;
            if ( (v50 & 1) != 0 )
              break;
            if ( v48 == (v47 & *(_QWORD *)(v50 + 8)) )
            {
              *(_QWORD *)(v50 + 16) = (*(_QWORD *)(v50 + 16) >> 2) + ((unsigned __int64)(3 * v44) >> 2);
              *(_BYTE *)(v50 + 24) = 1;
              goto LABEL_62;
            }
          }
        }
        KiInsertNewDpcRuntime(v45, BugCheckParameter2, v44);
LABEL_62:
        v43 = v160;
      }
      *(_QWORD *)(a1 + 13088) = 0LL;
      *(_QWORD *)(a1 + 13096) = 1LL;
      *(_QWORD *)(a1 + 13104) = 0LL;
    }
    if ( v32 != (_QWORD *)1 )
    {
      v51 = v43 - v32[4];
      v32[3] += v51;
      ++v32[5];
      v32[10] += v51;
      ++v32[11];
    }
    v38[3] = MEMORY[0xFFFFF78000000320];
    if ( BugCheckParameter3 != *(_DWORD *)(v5 + 484) )
      KeBugCheckEx(0xC7u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(unsigned int *)(v5 + 484));
    if ( v178 )
    {
      v75 = *((_DWORD *)v178 + 1);
      v76 = *(_WORD *)v178;
      v198[2] = &BugCheckParameter2;
      v198[3] = 8LL;
      v77 = *(_DWORD *)(EtwpHostSiloState + 4248);
      v72 = !_BitScanForward(&v78, v77);
      v168 = v78;
      if ( !v72 )
      {
        do
        {
          v77 &= v77 - 1;
          v79 = v78;
          a2 = EtwpHostSiloState;
          v80 = 32LL * v78 + EtwpHostSiloState + 4284;
          if ( v80 && (*(_DWORD *)(v80 + 4) & 0x80u) != 0 )
          {
            v198[0] = &v194 + *(unsigned __int8 *)(EtwpHostSiloState + 2 * v79 + 4233);
            v198[1] = 8LL;
            EtwpLogKernelEvent(
              (unsigned int)v198,
              EtwpHostSiloState,
              *(unsigned __int8 *)(EtwpHostSiloState + 2 * v79 + 4232),
              2,
              v76,
              v75);
          }
          v72 = !_BitScanForward(&v78, v77);
        }
        while ( !v72 );
        v168 = v78;
      }
    }
    _disable();
    v4 = a4;
    v8 = v181;
    if ( !*(_DWORD *)(v7 + 24) )
      goto LABEL_69;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)(v7 + 16));
LABEL_69:
  *(_QWORD *)(a1 + 11664) = v191;
  if ( (*(_DWORD *)(a1 + 236) & 0x1000) != 0 && v5 != *(_QWORD *)(a1 + 13112) )
  {
    _enable();
    v52 = KeGetCurrentPrcb();
    v175 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(v52, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(v52, 0LL);
      do
        KeYieldProcessorEx(&v175);
      while ( *(_QWORD *)(a1 + 48) );
    }
    *(_DWORD *)(a1 + 236) &= ~0x1000u;
    v55 = *(_QWORD *)(a1 + 13112);
    if ( v55 && *(_QWORD *)(a1 + 16) == v55 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v56 = *(char **)(a1 + 56);
      v57 = *v56;
      v58 = v192;
      if ( (*(_BYTE *)(v5 + 2) & 4) != 0 )
      {
        if ( *(char *)(v192 + 195) >= 16 || !*(_QWORD *)(v5 + 104) )
          goto LABEL_170;
        v117 = 0;
        v53 = *(_QWORD *)(v5 + 104);
        if ( v53 )
        {
          v53 += *(unsigned int *)(a1 + 216);
          if ( v53 )
            v117 = KiGetThreadEffectiveRankNonZero(v5, v53, v54, 0, 0LL);
        }
        if ( v117 )
          v59 = v57 ^ 1;
        else
LABEL_170:
          v59 = *(_BYTE *)(v58 + 195) ^ v57;
      }
      else
      {
        v59 = *(_BYTE *)(v192 + 195) ^ v57;
      }
      v60 = (v59 & 0x7F ^ v57) & 0x7F | (*(_BYTE *)(v5 + 119) << 7);
      *v56 = v60;
      v61 = *(_QWORD *)(a1 + 35000);
      if ( v61 )
      {
        if ( v5 == *(_QWORD *)(a1 + 24) )
          v146 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v146 = v60 & 0x7F;
        KiSetSchedulerAssistPriority(v61, v146, 0LL);
      }
      v62 = *(_QWORD *)(a1 + 56);
      v63 = 64;
      if ( KeHeteroSystem )
      {
        v147 = (*(_BYTE *)(v62 + 64) ^ *(_BYTE *)(v5 + 512)) & 7 ^ *(_BYTE *)(v62 + 64);
        v148 = (v147 ^ (8 * *(_BYTE *)(v5 + 516))) & 0x38 ^ v147;
        v53 = *(unsigned int *)(v5 + 80);
        v149 = *(_DWORD *)(v5 + 84);
        if ( (unsigned int)v53 <= v149 )
          v53 = v149;
        v150 = 64;
        if ( (unsigned int)v53 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v150 = 0;
        *(_BYTE *)(v62 + 64) = v150 | v148 & 0xBF;
      }
      *(_BYTE *)(v55 + 388) = 2;
      if ( v5 == *(_QWORD *)(a1 + 24) )
      {
        v83 = *(_QWORD *)(a1 + 192);
        v84 = *(unsigned __int8 *)(a1 + 35);
        v85 = *(_BYTE *)(a1 + 209);
        v86 = *(_QWORD *)(a1 + 34912);
        v87 = *(_QWORD *)(a1 + 35000);
        if ( v87 )
          *(_BYTE *)(v87 + 16) = 1;
        *(_BYTE *)(a1 + 13243) = 1;
        if ( (v84 & 1) != 0 )
        {
          v88 = v84 - 1;
          *(_BYTE *)(a1 + 35) = v88;
          v89 = KeGetCurrentPrcb();
          v176 = 0;
          while ( 1 )
          {
            LOBYTE(v53) = 1;
            KiSetVpThreadSpinLockCount(v89, v53);
            if ( !_interlockedbittestandset64((volatile signed __int32 *)v83, 0LL) )
              break;
            KiSetVpThreadSpinLockCount(v89, 0LL);
            do
              KeYieldProcessorEx(&v176);
            while ( *(_QWORD *)v83 );
          }
          if ( !v88 )
            *(_QWORD *)(v83 + 8) |= 1LL << v85;
          v90 = *(_QWORD *)(v83 + 40) | (1LL << v85);
          *(_QWORD *)(v83 + 40) = v90;
          if ( (v86 & v90) == v86 )
          {
            *(_QWORD *)(v83 + 16) |= v86;
          }
          else
          {
            v113 = v86 & ~v90;
            if ( ((v113 - 1) & v113) == 0 )
              *(_QWORD *)(v83 + 24) |= v113;
          }
          *(_QWORD *)(v83 + 24) &= ~(1LL << v85);
          v91 = *(_QWORD *)(a1 + 34936);
          if ( (*(_QWORD *)(v83 + 40) & v91) == v91 )
            *(_QWORD *)(v83 + 32) |= v91;
          _InterlockedAnd64((volatile signed __int64 *)v83, 0LL);
          KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
        }
      }
      else if ( *(_BYTE *)(v58 + 195) != 31 )
      {
        if ( (v64 = *(char *)(v58 + 195), (v65 = *(_QWORD *)(v5 + 104)) != 0)
          && (v118 = *(unsigned int *)(a1 + 216) + v65) != 0
          && ((struct _KPRCB *)a1 == KeGetCurrentPrcb() || v5 != *(_QWORD *)(a1 + 8) ? (v119 = 1) : (v119 = 0),
              (unsigned int)KiGetThreadEffectiveRankNonZero(v5, v118, v62, v119, 0LL)) )
        {
          ready = KiChooseLowestRankedThread((struct _KPRCB *)a1, (_KTHREAD *)v5, v64 + 1);
        }
        else
        {
          ready = KiSelectReadyThread((unsigned int)(v64 + 1), a1);
        }
        v68 = ready;
        if ( ready )
        {
          v106 = *(char **)(a1 + 56);
          v107 = *v106;
          if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
          {
            if ( *(char *)(ready + 195) >= 16 || !*(_QWORD *)(ready + 104) )
              goto LABEL_201;
            v124 = 0;
            v125 = *(_QWORD *)(ready + 104);
            if ( v125 )
            {
              v126 = *(unsigned int *)(a1 + 216) + v125;
              if ( v126 )
                v124 = KiGetThreadEffectiveRankNonZero(ready, v126, v67, 0, 0LL);
            }
            if ( v124 )
              v108 = v107 ^ 1;
            else
LABEL_201:
              v108 = *(_BYTE *)(v68 + 195) ^ v107;
          }
          else
          {
            v108 = v107 ^ *(_BYTE *)(ready + 195);
          }
          v109 = (v108 & 0x7F ^ v107) & 0x7F | (*(_BYTE *)(v68 + 119) << 7);
          *v106 = v109;
          v110 = *(_QWORD *)(a1 + 35000);
          if ( v110 )
          {
            if ( v68 == *(_QWORD *)(a1 + 24) )
              v151 = (unsigned int)KiVpThreadSystemWorkPriority;
            else
              v151 = v109 & 0x7F;
            KiSetSchedulerAssistPriority(v110, v151, 0LL);
          }
          v111 = *(_QWORD *)(a1 + 56);
          if ( KeHeteroSystem )
          {
            v152 = (*(_BYTE *)(v111 + 64) ^ *(_BYTE *)(v68 + 512)) & 7 ^ *(_BYTE *)(v111 + 64);
            v153 = (v152 ^ (8 * *(_BYTE *)(v68 + 516))) & 0x38 ^ v152;
            v154 = *(_DWORD *)(v68 + 80);
            if ( v154 <= *(_DWORD *)(v68 + 84) )
              v154 = *(_DWORD *)(v68 + 84);
            if ( v154 < KiDynamicHeteroCpuPolicyExpectedCycles )
              v63 = 0;
            *(_BYTE *)(v111 + 64) = v63 | v153 & 0xBF;
          }
          *(_QWORD *)(a1 + 16) = v68;
          v112 = *(_QWORD *)(a1 + 35000);
          if ( v112 )
            *(_BYTE *)(v112 + 16) = v68 == *(_QWORD *)(a1 + 24);
          if ( *(_BYTE *)(v68 + 388) == 1 )
            *(_DWORD *)(v68 + 132) = *(_DWORD *)(v68 + 132) - *(_DWORD *)(v68 + 436) + MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(v68 + 388) = 3;
        }
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    _disable();
  }
  return 1;
}
