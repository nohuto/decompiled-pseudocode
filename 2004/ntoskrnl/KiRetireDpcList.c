/*
 * XREFs of KiRetireDpcList @ 0x140299420
 * Callers:
 *     KiIdleLoop @ 0x1403FABA0 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x1403FE110 (KyRetireDpcList.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x14021F560 (HalpTimerGetInternalData.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     KiTimer2Expiration @ 0x14027F560 (KiTimer2Expiration.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x140281580 (KiProcessExpiredTimerList.c)
 *     KiExecuteAllDpcs @ 0x14029A020 (KiExecuteAllDpcs.c)
 *     KiRemoveEntryTimer @ 0x140327590 (KiRemoveEntryTimer.c)
 *     KiSelectActiveTimerTable @ 0x140338FF4 (KiSelectActiveTimerTable.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     HalpTimerScaleCounter @ 0x1403939C0 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiBeginCounterAccumulation @ 0x140516900 (KiBeginCounterAccumulation.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r11
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ebx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // edx
  _QWORD *v28; // rdx
  bool v29; // zf
  signed __int16 result; // ax
  __int64 active; // rax
  _QWORD *v32; // r9
  unsigned __int64 *v33; // r11
  unsigned __int64 v34; // r15
  __int64 v35; // r8
  unsigned int v36; // r14d
  unsigned __int8 v37; // r11
  int v38; // r10d
  unsigned __int64 v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned __int64 v51; // r11
  __int64 v52; // r10
  unsigned int v53; // esi
  unsigned int v54; // ecx
  unsigned int v55; // r14d
  __int64 v56; // r9
  unsigned int v57; // ebx
  __int64 v58; // r8
  int v59; // r13d
  __int64 v60; // r15
  unsigned int v61; // edi
  __int64 v62; // rsi
  _QWORD *v63; // rbx
  __int64 v64; // r11
  unsigned int v65; // eax
  struct _KPRCB *v66; // r12
  _DWORD *v67; // rcx
  unsigned int v68; // edx
  _QWORD *v69; // rax
  ULONG_PTR v70; // r12
  unsigned __int64 v71; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  char v74; // al
  __int64 v75; // r10
  __int64 v76; // rcx
  __int64 v77; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // rcx
  ULONG_PTR v80; // rdi
  _QWORD *v81; // rdi
  _QWORD *v82; // rax
  ULONG_PTR v83; // rdx
  unsigned __int64 v84; // rax
  struct _KPRCB *v85; // rcx
  __int64 InternalData; // rax
  _QWORD *i; // rcx
  char v88; // al
  __int64 v89; // r10
  __int64 v90; // r8
  __int64 v91; // rbx
  __int64 v92; // rax
  unsigned __int64 v93; // r9
  signed __int64 v94; // rax
  int v95; // r8d
  __int64 v96; // rdx
  _DWORD *v97; // rcx
  _DWORD *v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rbx
  __int64 v103; // r9
  unsigned int *v104; // r10
  __int64 v105; // r11
  unsigned __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // r15
  signed __int64 v110; // rdx
  __int64 v111; // rbx
  __int64 v112; // rax
  unsigned __int64 v113; // r10
  signed __int64 v114; // rax
  int v115; // r9d
  __int64 v116; // r8
  __int64 v117; // rcx
  unsigned __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // r10
  __int64 v121; // rcx
  unsigned __int64 v122; // rcx
  int v123; // eax
  int v124; // eax
  int v125; // eax
  struct _KPRCB *v126; // rcx
  _DWORD *v127; // rdx
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  struct _KPRCB *v133; // rcx
  _DWORD *v134; // rdx
  int v135; // eax
  int v136; // eax
  __int64 v137; // rax
  signed __int32 v138[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v139; // [rsp+30h] [rbp-D0h]
  unsigned int v140; // [rsp+34h] [rbp-CCh]
  unsigned int v141; // [rsp+38h] [rbp-C8h]
  __int64 v142; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v143; // [rsp+48h] [rbp-B8h]
  int v144; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v145; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  int v147; // [rsp+68h] [rbp-98h]
  int v148; // [rsp+6Ch] [rbp-94h]
  __int64 v149; // [rsp+70h] [rbp-90h]
  unsigned int v150; // [rsp+78h] [rbp-88h]
  volatile signed __int64 *v151; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v152; // [rsp+88h] [rbp-78h] BYREF
  int v153; // [rsp+90h] [rbp-70h] BYREF
  int v154; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v155; // [rsp+98h] [rbp-68h]
  __int64 v156; // [rsp+A0h] [rbp-60h]
  __int64 v157; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-50h]
  __int128 v159; // [rsp+B8h] [rbp-48h]
  __int64 v160; // [rsp+C8h] [rbp-38h]
  __int128 v161; // [rsp+D0h] [rbp-30h]
  __int64 v162; // [rsp+E0h] [rbp-20h]
  __int128 v163; // [rsp+E8h] [rbp-18h]
  __int64 v164; // [rsp+F8h] [rbp-8h]
  __int128 v165; // [rsp+100h] [rbp+0h]
  __int64 v166; // [rsp+110h] [rbp+10h]
  __int128 v167; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v168[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v169[34]; // [rsp+140h] [rbp+40h] BYREF

  v1 = a1;
  v149 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v169, 0, sizeof(v169));
  v156 = v2;
  do
  {
    *(_BYTE *)(v1 + 32) = 1;
    v3 = __rdtsc();
    v4 = v3 - *(_QWORD *)(v1 + 32448);
    v5 = v4 + *(_QWORD *)(v2 + 72);
    v6 = v4 + *(unsigned int *)(v2 + 80);
    *(_QWORD *)(v2 + 72) = v5;
    *(_QWORD *)(v1 + 32448) = v3;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    v7 = *(unsigned __int8 *)(v2 + 2);
    *(_DWORD *)(v2 + 80) = v6;
    if ( (v7 & 0x3E) != 0 )
    {
      if ( (v7 & 0x10) != 0 )
      {
        v5 = *(_QWORD *)(v1 + 32448) - *(_QWORD *)(v1 + 32456);
        *(_QWORD *)(v1 + 8LL * *(unsigned __int8 *)(v2 + 124) + 32464) += v5;
        LOBYTE(v7) = v7 & 0xEF;
        *(_QWORD *)(v1 + 32456) = 0LL;
      }
      if ( (v7 & 0x20) != 0 )
      {
        v8 = *(_QWORD *)(v2 + 1528);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v1 + 33128);
          v10 = *(_QWORD *)(v1 + 33136);
          if ( v9 && v10 )
          {
            if ( *(_BYTE *)(v10 + 100) )
            {
              v11 = *(_DWORD *)(v10 + 116);
            }
            else
            {
              v11 = *(_DWORD *)(v10 + 72);
              if ( v11 >= *(_DWORD *)(v9 + 368) )
                v11 = *(_DWORD *)(v9 + 368);
            }
          }
          else
          {
            v11 = 100;
          }
          if ( v11 < 0x4B )
            v12 = v11 / 0x19;
          else
            v12 = 3;
          v13 = *(unsigned __int8 *)(v1 + 33208);
          v14 = v12;
          v143 = 0LL;
          v15 = v13 + 2LL * v12;
          v16 = *(_QWORD *)(v8 + 8 * v15);
          v5 = v8 + 8 * v15;
          v17 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v16;
          v18 = *(_DWORD *)(v8 + 192);
          if ( v17 > v18 )
          {
            LODWORD(v143) = v17;
            v5 = v17 - v18;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v143) = 1;
            else
              HIDWORD(v143) = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
            *(_QWORD *)(v8 + 192) = v143;
          }
          else
          {
            v19 = v18 - v17;
            if ( v19 < 0x20 )
              *(_DWORD *)(v8 + 196) |= 1 << v19;
          }
          if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(v2 + 512) == 2 )
          {
            v5 = 2 * v14;
            *(_QWORD *)(v8 + 16 * v14 + 8) += v4;
          }
          if ( *(_QWORD *)(v2 + 1472) )
          {
            *(_QWORD *)(v8 + 8 * (v13 + 2 * (v14 + 8))) += v4;
            v5 = *(_QWORD *)(*(_QWORD *)(v2 + 1472) + 1528LL) + 8 * (v13 + 2 * (v14 + 4));
            _InterlockedExchangeAdd64((volatile signed __int64 *)v5, v4);
          }
        }
        LOBYTE(v7) = v7 & 0xDF;
      }
      if ( (v7 & 0x40) != 0 )
      {
        v101 = *(_QWORD *)(v2 + 968);
        if ( v101 )
          *(_BYTE *)(v101 + 64) = 0;
        LOBYTE(v7) = v7 & 0xBF;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v76 = *(_QWORD *)(v2 + 104);
        if ( v76 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v76); i; i = (_QWORD *)i[51] )
            *i += v4;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0 )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(v1 + 192) + 136LL);
          if ( (*(_QWORD *)(v2 + 576) & v5) != v5 )
            *(_QWORD *)(v1 + 32488) += v4;
        }
        if ( *(_BYTE *)(v2 + 125) )
        {
          if ( (unsigned __int8)*(_DWORD *)(v2 + 512) == 2 )
            *(_QWORD *)(v1 + 32504) += v4;
          else
            *(_QWORD *)(v1 + 32496) += v4;
        }
        v77 = *(_QWORD *)(v2 + 360);
        if ( v77 )
        {
          v102 = *(_QWORD *)(v77 + 32);
          if ( v102 )
          {
            v103 = 1LL;
            if ( KiHwCountersCount )
            {
              v104 = (unsigned int *)&KiHwCounters;
              v105 = (unsigned int)KiHwCountersCount;
              v7 = v77 + 48;
              do
              {
                if ( (v102 & v103) != 0 )
                {
                  v106 = __readpmc(*v104);
                  v5 = (unsigned __int64)HIDWORD(v106) << 32;
                  *(_QWORD *)(v7 + 8) += (unsigned int)(v106 - *(_DWORD *)v7);
                  *(_QWORD *)v7 = v106;
                }
                v103 *= 2LL;
                ++v104;
                v7 += 24LL;
                --v105;
              }
              while ( v105 );
            }
          }
        }
      }
    }
    v20 = *(unsigned __int16 *)(v1 + 12588);
    *(_WORD *)(v1 + 12588) = 1;
    v148 = v20;
    if ( (v20 & 8) == 0 )
      goto LABEL_28;
    LOBYTE(v5) = 1;
    active = KiSelectActiveTimerTable(v1, v5, v7, 0xFFFFF78000000014uLL);
    if ( !active )
    {
      _enable();
      v169[1] = *v32;
LABEL_92:
      _disable();
      goto LABEL_28;
    }
    v34 = *v33;
    v35 = KiLastNonHrTimerExpiration;
    v36 = *(_DWORD *)(active + 16912);
    v143 = *v33;
    v37 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v38 = v37;
    if ( (KiVelocityFlags & 0x2000) != 0 )
      v38 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
    v139 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v39 = v34 >> 18;
    v144 = v38;
    if ( v37 )
    {
      *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(active + 16912) = v39;
    }
    if ( (_BYTE)v38 )
    {
      v40 = *(_DWORD *)(active + 16916);
      *(_QWORD *)(active + 16904) = v35;
      *(_DWORD *)(active + 16916) = v34 >> 18;
      if ( v36 < v40 )
        v40 = v36;
      v36 = v40;
    }
    if ( v37 || (_BYTE)v38 )
    {
      _enable();
      v169[1] = MEMORY[0xFFFFF78000000014];
      v167 = 0LL;
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(v1 + 33) )
          goto LABEL_92;
        v41 = KiProcessorBlock[0];
      }
      else
      {
        v41 = v1;
      }
      v142 = v41 + 14656;
      if ( v41 == -14656 )
        goto LABEL_91;
      v42 = v1 + 16LL * *(unsigned int *)(v1 + 35584);
      *(_DWORD *)(v1 + 35584) = ((unsigned __int8)*(_DWORD *)(v1 + 35584) + 1) & 0xF;
      v43 = HalpPerformanceCounter;
      *(_QWORD *)(v42 + 35592) = v34;
      if ( *(_DWORD *)(v43 + 228) == 5 )
      {
        v157 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          InternalData = HalpTimerGetInternalData(v43);
          v47 = ((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v43 + 112))(InternalData)
               * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64;
          v48 = MEMORY[0xFFFFF780000003B8] + v47;
LABEL_66:
          if ( v43 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
          {
            v90 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
            if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
              v90 = 10000000LL;
            v48 = HalpTimerScaleCounter(v48, v157, v90);
          }
          *(_QWORD *)(v42 + 35600) = v48;
          if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          {
            *(_QWORD *)&v167 = v34;
            v168[0] = &v167;
            BYTE8(v167) = 0;
            v168[1] = 16LL;
            EtwTraceKernelEvent((int)v168, 1, 0x40020000u, 3920, 1538);
          }
          v49 = v39 - v36 + 1;
          v150 = v49;
          if ( v49 <= 0x100 )
          {
LABEL_70:
            v147 = v49;
            v50 = 256 - v49;
            v145 = v34;
            v51 = v34;
            if ( 256 - v49 > 0x18 )
              v50 = 24;
            goto LABEL_72;
          }
          v64 = (v39 - v49 + 1) << 18;
          do
          {
            if ( v49 <= 0x100 )
              goto LABEL_70;
            v51 = v64 + 0x4000000;
            v147 = 256;
            v145 = v51;
            v50 = 0;
LABEL_72:
            v52 = v142;
            v160 = 0LL;
            v53 = 0;
            v54 = v36 + v147;
            v151 = 0LL;
            v55 = v36 - 1;
            v155 = v54;
            v56 = 0LL;
            v57 = v55;
            v159 = 0LL;
            v58 = v54 - 1;
            v140 = 0;
            v141 = v58;
            v59 = v58 + v50;
            BYTE3(v159) = -64;
            do
            {
              v60 = v52 + 32 * ((unsigned __int8)++v57 + 16LL);
              if ( v53 <= (unsigned int)v58 || *(_QWORD *)(v60 + 24) <= v51 )
              {
                if ( v60 + 8 != *(_QWORD *)(v60 + 8) )
                {
LABEL_112:
                  CurrentPrcb = KeGetCurrentPrcb();
                  BugCheckParameter4 = (ULONG_PTR)CurrentPrcb;
                  v153 = 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
                  {
                    v80 = (ULONG_PTR)CurrentPrcb;
                    goto LABEL_114;
                  }
                  v123 = SchedulerAssist[6];
                  v80 = BugCheckParameter4;
                  SchedulerAssist[6] = v123 + 1;
                  if ( v123 == -1 )
LABEL_204:
                    KiRemoveSystemWorkPriorityKick(v80);
LABEL_114:
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
                  {
                    v99 = *(_QWORD *)(v80 + 33976);
                    if ( v99 )
                    {
                      if ( *(_BYTE *)(v80 + 32) <= 1u )
                      {
                        v124 = *(_DWORD *)(v99 + 24) - 1;
                        *(_DWORD *)(v99 + 24) = v124;
                        if ( !v124 )
                          KiRemoveSystemWorkPriorityKick(v80);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v153, v47, v58, v56);
                    while ( *(_QWORD *)v60 );
                    v100 = *(_QWORD *)(v80 + 33976);
                    if ( v100 )
                    {
                      if ( *(_BYTE *)(v80 + 32) <= 1u )
                      {
                        v125 = *(_DWORD *)(v100 + 24);
                        *(_DWORD *)(v100 + 24) = v125 + 1;
                        if ( v125 == -1 )
                          goto LABEL_204;
                      }
                    }
                  }
                  v56 = v140;
                  v81 = (_QWORD *)(v60 + 8);
                  v151 = (volatile signed __int64 *)v60;
                  while ( 1 )
                  {
                    v82 = (_QWORD *)*v81;
                    v51 = v145;
                    if ( v81 == (_QWORD *)*v81 )
                      goto LABEL_119;
                    v83 = (ULONG_PTR)(v82 - 4);
                    v84 = *(v82 - 1);
                    BugCheckParameter3 = v83;
                    if ( v84 > v145 )
                      break;
                    v164 = 0LL;
                    v88 = (BYTE3(v159) ^ v56) & 0x3F ^ BYTE3(v159) ^ *(_BYTE *)(v83 + 3);
                    BYTE3(v159) ^= (BYTE3(v159) ^ v56) & 0x3F;
                    v163 = 0LL;
                    BYTE3(v163) = v88;
                    _InterlockedXor((volatile signed __int32 *)v83, v163);
                    v89 = v142;
                    BugCheckParameter4 = _InterlockedExchange64(
                                           (volatile __int64 *)(v142 + 8LL * (unsigned int)v56),
                                           v83);
                    KiRemoveEntryTimer(v89, v83, (unsigned __int8)v57, &v151);
                    v56 = ++v140;
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, BugCheckParameter3, BugCheckParameter4);
                    if ( (_DWORD)v56 == 64 )
                    {
                      _InterlockedAnd64(v151, 0LL);
                      v126 = KeGetCurrentPrcb();
                      v127 = v126->SchedulerAssist;
                      if ( v127 )
                      {
                        if ( v126->NestingLevel <= 1u )
                        {
                          v128 = v127[6] - 1;
                          v127[6] = v128;
                          if ( !v128 )
                            KiRemoveSystemWorkPriorityKick(v126);
                        }
                      }
                      KiProcessExpiredTimerList(v149, (__int64)v169, v142, 0x40u);
                      v56 = 0LL;
                      v140 = 0;
                      if ( v81 == (_QWORD *)*v81 )
                        goto LABEL_220;
                      goto LABEL_112;
                    }
                  }
                  *(_QWORD *)(v60 + 24) = v84;
LABEL_119:
                  _InterlockedAnd64(v151, 0LL);
                  v85 = KeGetCurrentPrcb();
                  v47 = (__int64)v85->SchedulerAssist;
                  if ( v47 )
                  {
                    if ( v85->NestingLevel <= 1u )
                    {
                      v129 = *(_DWORD *)(v47 + 24) - 1;
                      *(_DWORD *)(v47 + 24) = v129;
                      if ( !v129 )
                      {
                        KiRemoveSystemWorkPriorityKick(v85);
                        v56 = v140;
LABEL_220:
                        v51 = v145;
                      }
                    }
                  }
                  v58 = v141;
                  v52 = v142;
                }
                ++v53;
              }
            }
            while ( v57 != v59 );
            if ( (_DWORD)v56 )
            {
              KiProcessExpiredTimerList(v149, (__int64)v169, v52, v56);
              v58 = v141;
              v52 = v142;
            }
            if ( (_BYTE)v144 )
            {
              v152 = 0LL;
              v61 = 0;
              v162 = 0LL;
              v47 = 0LL;
              v161 = 0LL;
              v140 = 0;
              BYTE3(v161) = -64;
              do
              {
                v62 = v52 + 32 * ((unsigned __int8)++v55 + 272LL);
                if ( v61 <= (unsigned int)v58 || *(_QWORD *)(v62 + 24) <= v145 )
                {
                  v63 = (_QWORD *)(v62 + 8);
                  if ( v63 != (_QWORD *)*v63 )
                  {
                    do
                    {
                      v66 = KeGetCurrentPrcb();
                      v154 = 0;
                      v67 = v66->SchedulerAssist;
                      if ( v67 )
                      {
                        if ( v66->NestingLevel <= 1u )
                        {
                          v130 = v67[6];
                          v67[6] = v130 + 1;
                          if ( v130 == -1 )
LABEL_225:
                            KiRemoveSystemWorkPriorityKick(v66);
                        }
                      }
                      while ( _interlockedbittestandset64((volatile signed __int32 *)v62, 0LL) )
                      {
                        v97 = v66->SchedulerAssist;
                        if ( v97 )
                        {
                          if ( v66->NestingLevel <= 1u )
                          {
                            v131 = v97[6] - 1;
                            v97[6] = v131;
                            if ( !v131 )
                              KiRemoveSystemWorkPriorityKick(v66);
                          }
                        }
                        do
                          KeYieldProcessorEx(&v154, v47, v58, v56);
                        while ( *(_QWORD *)v62 );
                        v98 = v66->SchedulerAssist;
                        if ( v98 )
                        {
                          if ( v66->NestingLevel <= 1u )
                          {
                            v132 = v98[6];
                            v98[6] = v132 + 1;
                            if ( v132 == -1 )
                              goto LABEL_225;
                          }
                        }
                      }
                      v68 = v140;
                      v152 = (volatile signed __int64 *)v62;
                      do
                      {
                        v69 = (_QWORD *)*v63;
                        if ( v63 == (_QWORD *)*v63 )
                          goto LABEL_99;
                        v70 = (ULONG_PTR)(v69 - 4);
                        v71 = *(v69 - 1);
                        if ( v71 > v145 )
                        {
                          *(_QWORD *)(v62 + 24) = v71;
LABEL_99:
                          _InterlockedAnd64(v152, 0LL);
                          v72 = KeGetCurrentPrcb();
                          v73 = v72->SchedulerAssist;
                          if ( v73 )
                          {
                            if ( v72->NestingLevel <= 1u )
                            {
                              v136 = v73[6] - 1;
                              v73[6] = v136;
                              if ( !v136 )
                                KiRemoveSystemWorkPriorityKick(v72);
                            }
                          }
                          v47 = v140;
                          goto LABEL_101;
                        }
                        v166 = 0LL;
                        v74 = (BYTE3(v161) ^ v68) & 0x3F ^ BYTE3(v161) ^ *(_BYTE *)(v70 + 3);
                        BYTE3(v161) ^= (BYTE3(v161) ^ v68) & 0x3F;
                        v165 = 0LL;
                        BYTE3(v165) = v74;
                        _InterlockedXor((volatile signed __int32 *)v70, v165);
                        v75 = v142;
                        BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v142 + 8LL * v68), v70);
                        KiRemoveEntryTimer(v75, v70, (unsigned __int8)v55, &v152);
                        v68 = ++v140;
                        if ( BugCheckParameter4 )
                          KeBugCheckEx(0xC7u, 8uLL, 1uLL, v70, BugCheckParameter4);
                      }
                      while ( v68 != 64 );
                      _InterlockedAnd64(v152, 0LL);
                      v133 = KeGetCurrentPrcb();
                      v134 = v133->SchedulerAssist;
                      if ( v134 )
                      {
                        if ( v133->NestingLevel <= 1u )
                        {
                          v135 = v134[6] - 1;
                          v134[6] = v135;
                          if ( !v135 )
                            KiRemoveSystemWorkPriorityKick(v133);
                        }
                      }
                      KiProcessExpiredTimerList(v149, (__int64)v169, v142, 0x40u);
                      v47 = 0LL;
                      v140 = 0;
                    }
                    while ( v63 != (_QWORD *)*v63 );
LABEL_101:
                    v58 = v141;
                    v52 = v142;
                  }
                  ++v61;
                }
              }
              while ( v55 != v59 );
              v1 = v149;
              if ( (_DWORD)v47 )
                KiProcessExpiredTimerList(v149, (__int64)v169, v52, v47);
            }
            else
            {
              v1 = v149;
            }
            v29 = v150 == v147;
            v49 = v150 - v147;
            v36 = v155;
            v64 = v145;
            v34 = v143;
            v150 -= v147;
          }
          while ( !v29 );
          v2 = v156;
          LOBYTE(v20) = v148;
          LOBYTE(v38) = v144;
          v37 = v139;
          if ( (*(_BYTE *)(v1 + 12588) & 8) == 0 )
          {
            v65 = *(_DWORD *)(v1 + 32424);
            *(_DWORD *)(v1 + 32420) = 0;
            if ( v65 >= KeTimeIncrement )
              *(_DWORD *)(v1 + 32424) = v65 - KeTimeIncrement;
            else
              *(_DWORD *)(v1 + 32424) = 0;
          }
          goto LABEL_91;
        }
        if ( *(_DWORD *)(v43 + 220) == 64 )
        {
          v107 = HalpTimerGetInternalData(v43);
          v108 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v107);
          v109 = *(_QWORD *)(v43 + 208);
          v110 = v108;
        }
        else
        {
          do
          {
            v109 = *(_QWORD *)(v43 + 208);
            do
            {
              v111 = *(_QWORD *)(v43 + 200);
              v112 = HalpTimerGetInternalData(v43);
              v113 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v112);
              _InterlockedOr(v138, 0);
              v114 = *(_QWORD *)(v43 + 200);
            }
            while ( v111 != v114 );
          }
          while ( v109 != *(_QWORD *)(v43 + 208) );
          v115 = *(_DWORD *)(v43 + 220);
          if ( ((v111 ^ v113) & (1LL << ((unsigned __int8)v115 - 1))) != 0 )
          {
            v116 = 1LL << v115;
            v117 = -1LL;
            if ( v115 != 64 )
              v117 = v116 - 1;
            v118 = v111 & v117;
            v110 = v113 | v111 ^ v118;
            if ( v113 < v118 )
              v110 += v116;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v110, v114);
          }
          else
          {
            if ( v115 == 64 )
              v119 = -1LL;
            else
              v119 = (1LL << v115) - 1;
            v110 = v113 | v111 & ~v119;
          }
        }
        v48 = HalpTimerScaleCounter(v109 + v110, *(_QWORD *)(v43 + 192), 10000000LL);
      }
      else
      {
        v29 = *(_DWORD *)(v43 + 220) == 64;
        v157 = *(_QWORD *)(v43 + 192);
        if ( v29 )
        {
          v44 = HalpTimerGetInternalData(v43);
          v45 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v44);
          v46 = *(_QWORD *)(v43 + 208);
          v47 = v45;
        }
        else
        {
          do
          {
            v46 = *(_QWORD *)(v43 + 208);
            do
            {
              v91 = *(_QWORD *)(v43 + 200);
              v92 = HalpTimerGetInternalData(v43);
              v93 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v92);
              _InterlockedOr(v138, 0);
              v94 = *(_QWORD *)(v43 + 200);
            }
            while ( v91 != v94 );
          }
          while ( v46 != *(_QWORD *)(v43 + 208) );
          v95 = *(_DWORD *)(v43 + 220);
          if ( ((v91 ^ v93) & (1LL << ((unsigned __int8)v95 - 1))) != 0 )
          {
            v120 = 1LL << v95;
            v121 = -1LL;
            if ( v95 != 64 )
              v121 = v120 - 1;
            v122 = v91 & v121;
            v47 = v93 | v91 ^ v122;
            if ( v93 < v122 )
              v47 += v120;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v47, v94);
          }
          else
          {
            if ( v95 == 64 )
              v96 = -1LL;
            else
              v96 = (1LL << v95) - 1;
            v47 = v93 | v91 & ~v96;
          }
        }
        v48 = v46 + v47;
      }
      v34 = v143;
      goto LABEL_66;
    }
    _enable();
    v169[1] = MEMORY[0xFFFFF78000000014];
LABEL_91:
    if ( !*(_BYTE *)(v1 + 33) )
      goto LABEL_92;
    KiTimer2Expiration(v1, v34, v37, v38, (__int64)v169);
    _disable();
LABEL_28:
    KiExecuteAllDpcs(v1, v2, v169, 0LL);
    if ( (v20 & 4) != 0 )
    {
      _enable();
      KeSignalGate(v1 + 31616, 0LL);
      _disable();
    }
    v21 = __rdtsc();
    v22 = v21 - *(_QWORD *)(v1 + 32448);
    *(_QWORD *)(v1 + 32568) += v22;
    v23 = *(_BYTE *)(v2 + 2);
    if ( (v23 & 0x20) != 0 )
    {
      v24 = *(_QWORD *)(v1 + 33128);
      v25 = *(_QWORD *)(v1 + 33136);
      if ( v24 && v25 )
      {
        if ( *(_BYTE *)(v25 + 100) )
        {
          v26 = *(_DWORD *)(v25 + 116);
        }
        else
        {
          v26 = *(_DWORD *)(v25 + 72);
          if ( v26 >= *(_DWORD *)(v24 + 368) )
            v26 = *(_DWORD *)(v24 + 368);
        }
      }
      else
      {
        v26 = 100;
      }
      if ( v26 < 0x4B )
        v27 = v26 / 0x19;
      else
        v27 = 3;
      v28 = (_QWORD *)(v1 + 8 * (*(unsigned __int8 *)(v1 + 33208) + 2 * (v27 + 2036LL)));
      *v28 += v22;
      v23 = *(_BYTE *)(v2 + 2);
    }
    if ( (v23 & 0x40) != 0 )
    {
      v137 = *(_QWORD *)(v2 + 968);
      if ( v137 )
        *(_BYTE *)(v137 + 64) = 1;
    }
    *(_QWORD *)(v1 + 32448) = v21;
    if ( (*(_BYTE *)(v2 + 2) & 0x10) != 0 )
      *(_QWORD *)(v1 + 32456) = v21;
    if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
      KiBeginCounterAccumulation(v2, 0LL);
    v29 = *(_BYTE *)(v1 + 6) == 0;
    *(_BYTE *)(v1 + 32) = 0;
    if ( !v29 )
      *(_BYTE *)(v1 + 6) = 0;
    result = _InterlockedCompareExchange16((volatile signed __int16 *)(v1 + 12588), 0, 1);
  }
  while ( result != 1 );
  *(_QWORD *)(v1 + 12512) = 0LL;
  return result;
}
