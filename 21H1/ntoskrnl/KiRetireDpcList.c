/*
 * XREFs of KiRetireDpcList @ 0x140206910
 * Callers:
 *     KiIdleLoop @ 0x1403F9910 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x1403FCE80 (KyRetireDpcList.c)
 * Callees:
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     KiTimer2Expiration @ 0x140242E60 (KiTimer2Expiration.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KiRemoveEntryTimer @ 0x1402EDC60 (KiRemoveEntryTimer.c)
 *     KiSelectActiveTimerTable @ 0x1402FBFC4 (KiSelectActiveTimerTable.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     HalpTimerScaleCounter @ 0x140392DF0 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KiBeginCounterAccumulation @ 0x1405162B0 (KiBeginCounterAccumulation.c)
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
  __int64 v34; // rdx
  unsigned __int64 v35; // r15
  __int64 v36; // r8
  unsigned int v37; // r14d
  bool v38; // r11
  BOOL v39; // r10d
  unsigned __int64 v40; // r12
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rsi
  ULONG_PTR v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r15
  signed __int64 v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // ecx
  int v51; // eax
  unsigned __int64 v52; // r11
  __int64 v53; // r10
  unsigned int v54; // esi
  unsigned int v55; // ecx
  unsigned int v56; // r14d
  __int64 v57; // r9
  unsigned int v58; // ebx
  unsigned int v59; // r8d
  int v60; // r13d
  __int64 v61; // r15
  unsigned int v62; // edi
  unsigned int v63; // edx
  __int64 v64; // rsi
  _QWORD *v65; // rbx
  __int64 v66; // r11
  unsigned int v67; // eax
  struct _KPRCB *v68; // r12
  _DWORD *v69; // rcx
  unsigned int v70; // edx
  _QWORD *v71; // rax
  ULONG_PTR v72; // r12
  unsigned __int64 v73; // rax
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  char v76; // al
  __int64 v77; // r10
  __int64 v78; // rcx
  __int64 v79; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // rcx
  ULONG_PTR v82; // rdi
  _QWORD *v83; // rdi
  _QWORD *v84; // rax
  ULONG_PTR v85; // rdx
  unsigned __int64 v86; // rax
  struct _KPRCB *v87; // rcx
  _DWORD *v88; // rdx
  __int64 InternalData; // rax
  _QWORD *i; // rcx
  char v91; // al
  __int64 v92; // r10
  __int64 v93; // r8
  __int64 v94; // rbx
  __int64 v95; // rax
  unsigned __int64 v96; // r9
  signed __int64 v97; // rax
  int v98; // r8d
  __int64 v99; // rdx
  _DWORD *v100; // rcx
  _DWORD *v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rbx
  __int64 v106; // r9
  unsigned int *v107; // r10
  __int64 v108; // r11
  unsigned __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r15
  signed __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // rax
  unsigned __int64 v116; // r10
  signed __int64 v117; // rax
  int v118; // r9d
  __int64 v119; // r8
  __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // r10
  __int64 v124; // rcx
  unsigned __int64 v125; // rcx
  int v126; // eax
  int v127; // eax
  int v128; // eax
  struct _KPRCB *v129; // rcx
  _DWORD *v130; // rdx
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  struct _KPRCB *v136; // rcx
  _DWORD *v137; // rdx
  int v138; // eax
  int v139; // eax
  __int64 v140; // rax
  signed __int32 v141[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v142; // [rsp+30h] [rbp-D0h]
  unsigned int v143; // [rsp+34h] [rbp-CCh]
  unsigned int v144; // [rsp+38h] [rbp-C8h]
  __int64 v145; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v146; // [rsp+48h] [rbp-B8h]
  BOOL v147; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v148; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  int v150; // [rsp+68h] [rbp-98h]
  int v151; // [rsp+6Ch] [rbp-94h]
  __int64 v152; // [rsp+70h] [rbp-90h]
  unsigned int v153; // [rsp+78h] [rbp-88h]
  volatile signed __int64 *v154; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v155; // [rsp+88h] [rbp-78h] BYREF
  int v156; // [rsp+90h] [rbp-70h] BYREF
  int v157; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v158; // [rsp+98h] [rbp-68h]
  __int64 v159; // [rsp+A0h] [rbp-60h]
  __int64 v160; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-50h]
  __int128 v162; // [rsp+B8h] [rbp-48h]
  __int64 v163; // [rsp+C8h] [rbp-38h]
  __int128 v164; // [rsp+D0h] [rbp-30h]
  __int64 v165; // [rsp+E0h] [rbp-20h]
  __int128 v166; // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F8h] [rbp-8h]
  __int128 v168; // [rsp+100h] [rbp+0h]
  __int64 v169; // [rsp+110h] [rbp+10h]
  __int128 v170; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v171[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v172[34]; // [rsp+140h] [rbp+40h] BYREF

  v1 = a1;
  v152 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v172, 0, sizeof(v172));
  v159 = v2;
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
          v146 = 0LL;
          v15 = v13 + 2LL * v12;
          v16 = *(_QWORD *)(v8 + 8 * v15);
          v5 = v8 + 8 * v15;
          v17 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v16;
          v18 = *(_DWORD *)(v8 + 192);
          if ( v17 > v18 )
          {
            LODWORD(v146) = v17;
            v5 = v17 - v18;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v146) = 1;
            else
              HIDWORD(v146) = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
            *(_QWORD *)(v8 + 192) = v146;
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
        v104 = *(_QWORD *)(v2 + 968);
        if ( v104 )
          *(_BYTE *)(v104 + 64) = 0;
        LOBYTE(v7) = v7 & 0xBF;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v78 = *(_QWORD *)(v2 + 104);
        if ( v78 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v78); i; i = (_QWORD *)i[51] )
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
        v79 = *(_QWORD *)(v2 + 360);
        if ( v79 )
        {
          v105 = *(_QWORD *)(v79 + 32);
          if ( v105 )
          {
            v106 = 1LL;
            if ( KiHwCountersCount )
            {
              v107 = (unsigned int *)&KiHwCounters;
              v108 = (unsigned int)KiHwCountersCount;
              v7 = v79 + 48;
              do
              {
                if ( (v105 & v106) != 0 )
                {
                  v109 = __readpmc(*v107);
                  v5 = (unsigned __int64)HIDWORD(v109) << 32;
                  *(_QWORD *)(v7 + 8) += (unsigned int)(v109 - *(_DWORD *)v7);
                  *(_QWORD *)v7 = v109;
                }
                v106 *= 2LL;
                ++v107;
                v7 += 24LL;
                --v108;
              }
              while ( v108 );
            }
          }
        }
      }
    }
    v20 = *(unsigned __int16 *)(v1 + 12588);
    *(_WORD *)(v1 + 12588) = 1;
    v151 = v20;
    if ( (v20 & 8) == 0 )
      goto LABEL_28;
    LOBYTE(v5) = 1;
    active = KiSelectActiveTimerTable(v1, v5, v7, 0xFFFFF78000000014uLL);
    v34 = active;
    if ( !active )
    {
      _enable();
      v172[1] = *v32;
LABEL_92:
      _disable();
      goto LABEL_28;
    }
    v35 = *v33;
    v36 = KiLastNonHrTimerExpiration;
    v37 = *(_DWORD *)(active + 16912);
    v146 = *v33;
    v38 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v39 = v38;
    if ( (KiVelocityFlags & 0x2000) != 0 )
      v39 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
    v142 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v40 = v35 >> 18;
    v147 = v39;
    if ( v38 )
    {
      *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(active + 16912) = v40;
    }
    if ( v39 )
    {
      v41 = *(_DWORD *)(active + 16916);
      *(_QWORD *)(active + 16904) = v36;
      *(_DWORD *)(active + 16916) = v35 >> 18;
      if ( v37 < v41 )
        v41 = v37;
      v37 = v41;
    }
    if ( v38 || v39 )
    {
      _enable();
      v172[1] = MEMORY[0xFFFFF78000000014];
      v170 = 0LL;
      if ( KiSerializeTimerExpiration )
      {
        if ( !*(_BYTE *)(v1 + 33) )
          goto LABEL_92;
        v42 = KiProcessorBlock[0];
      }
      else
      {
        v42 = v1;
      }
      v145 = v42 + 14656;
      if ( v42 == -14656 )
        goto LABEL_91;
      v43 = v1 + 16LL * *(unsigned int *)(v1 + 35584);
      *(_DWORD *)(v1 + 35584) = ((unsigned __int8)*(_DWORD *)(v1 + 35584) + 1) & 0xF;
      v44 = HalpPerformanceCounter;
      *(_QWORD *)(v43 + 35592) = v35;
      if ( *(_DWORD *)(v44 + 228) == 5 )
      {
        v160 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          InternalData = HalpTimerGetInternalData(v44, v34);
          v49 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v44 + 112))(InternalData)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
LABEL_66:
          if ( v44 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
          {
            v93 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
            if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
              v93 = 10000000LL;
            v49 = HalpTimerScaleCounter(v49, v160, v93);
          }
          *(_QWORD *)(v43 + 35600) = v49;
          if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          {
            *(_QWORD *)&v170 = v35;
            v171[0] = &v170;
            BYTE8(v170) = 0;
            v171[1] = 16LL;
            EtwTraceKernelEvent((unsigned int)v171, 1, 1073872896, 3920, 1538);
          }
          v50 = v40 - v37 + 1;
          v153 = v50;
          if ( v50 <= 0x100 )
          {
LABEL_70:
            v150 = v50;
            v51 = 256 - v50;
            v148 = v35;
            v52 = v35;
            if ( 256 - v50 > 0x18 )
              v51 = 24;
            goto LABEL_72;
          }
          v66 = (v40 - v50 + 1) << 18;
          do
          {
            if ( v50 <= 0x100 )
              goto LABEL_70;
            v52 = v66 + 0x4000000;
            v150 = 256;
            v148 = v52;
            v51 = 0;
LABEL_72:
            v53 = v145;
            v163 = 0LL;
            v54 = 0;
            v55 = v37 + v150;
            v154 = 0LL;
            v56 = v37 - 1;
            v158 = v55;
            v57 = 0LL;
            v58 = v56;
            v162 = 0LL;
            v59 = v55 - 1;
            v143 = 0;
            v144 = v55 - 1;
            v60 = v55 - 1 + v51;
            BYTE3(v162) = -64;
            do
            {
              v61 = v53 + 32 * ((unsigned __int8)++v58 + 16LL);
              if ( v54 <= v59 || *(_QWORD *)(v61 + 24) <= v52 )
              {
                if ( v61 + 8 != *(_QWORD *)(v61 + 8) )
                {
LABEL_112:
                  CurrentPrcb = KeGetCurrentPrcb();
                  BugCheckParameter4 = (ULONG_PTR)CurrentPrcb;
                  v156 = 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
                  {
                    v82 = (ULONG_PTR)CurrentPrcb;
                    goto LABEL_114;
                  }
                  v126 = SchedulerAssist[6];
                  v82 = BugCheckParameter4;
                  SchedulerAssist[6] = v126 + 1;
                  if ( v126 == -1 )
LABEL_204:
                    KiRemoveSystemWorkPriorityKick(v82);
LABEL_114:
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v61, 0LL) )
                  {
                    v102 = *(_QWORD *)(v82 + 33976);
                    if ( v102 )
                    {
                      if ( *(_BYTE *)(v82 + 32) <= 1u )
                      {
                        v127 = *(_DWORD *)(v102 + 24) - 1;
                        *(_DWORD *)(v102 + 24) = v127;
                        if ( !v127 )
                          KiRemoveSystemWorkPriorityKick(v82);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v156);
                    while ( *(_QWORD *)v61 );
                    v103 = *(_QWORD *)(v82 + 33976);
                    if ( v103 )
                    {
                      if ( *(_BYTE *)(v82 + 32) <= 1u )
                      {
                        v128 = *(_DWORD *)(v103 + 24);
                        *(_DWORD *)(v103 + 24) = v128 + 1;
                        if ( v128 == -1 )
                          goto LABEL_204;
                      }
                    }
                  }
                  v57 = v143;
                  v83 = (_QWORD *)(v61 + 8);
                  v154 = (volatile signed __int64 *)v61;
                  while ( 1 )
                  {
                    v84 = (_QWORD *)*v83;
                    v52 = v148;
                    if ( v83 == (_QWORD *)*v83 )
                      goto LABEL_119;
                    v85 = (ULONG_PTR)(v84 - 4);
                    v86 = *(v84 - 1);
                    BugCheckParameter3 = v85;
                    if ( v86 > v148 )
                      break;
                    v167 = 0LL;
                    v91 = (BYTE3(v162) ^ v57) & 0x3F ^ BYTE3(v162) ^ *(_BYTE *)(v85 + 3);
                    BYTE3(v162) ^= (BYTE3(v162) ^ v57) & 0x3F;
                    v166 = 0LL;
                    BYTE3(v166) = v91;
                    _InterlockedXor((volatile signed __int32 *)v85, v166);
                    v92 = v145;
                    BugCheckParameter4 = _InterlockedExchange64(
                                           (volatile __int64 *)(v145 + 8LL * (unsigned int)v57),
                                           v85);
                    KiRemoveEntryTimer(v92, v85, (unsigned __int8)v58, &v154);
                    v57 = ++v143;
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, BugCheckParameter3, BugCheckParameter4);
                    if ( (_DWORD)v57 == 64 )
                    {
                      _InterlockedAnd64(v154, 0LL);
                      v129 = KeGetCurrentPrcb();
                      v130 = v129->SchedulerAssist;
                      if ( v130 )
                      {
                        if ( v129->NestingLevel <= 1u )
                        {
                          v131 = v130[6] - 1;
                          v130[6] = v131;
                          if ( !v131 )
                            KiRemoveSystemWorkPriorityKick(v129);
                        }
                      }
                      KiProcessExpiredTimerList(v152, v172, v145, 64LL);
                      v57 = 0LL;
                      v143 = 0;
                      if ( v83 == (_QWORD *)*v83 )
                        goto LABEL_220;
                      goto LABEL_112;
                    }
                  }
                  *(_QWORD *)(v61 + 24) = v86;
LABEL_119:
                  _InterlockedAnd64(v154, 0LL);
                  v87 = KeGetCurrentPrcb();
                  v88 = v87->SchedulerAssist;
                  if ( v88 )
                  {
                    if ( v87->NestingLevel <= 1u )
                    {
                      v132 = v88[6] - 1;
                      v88[6] = v132;
                      if ( !v132 )
                      {
                        KiRemoveSystemWorkPriorityKick(v87);
                        v57 = v143;
LABEL_220:
                        v52 = v148;
                      }
                    }
                  }
                  v59 = v144;
                  v53 = v145;
                }
                ++v54;
              }
            }
            while ( v58 != v60 );
            if ( (_DWORD)v57 )
            {
              KiProcessExpiredTimerList(v152, v172, v53, v57);
              v59 = v144;
              v53 = v145;
            }
            if ( v147 )
            {
              v155 = 0LL;
              v62 = 0;
              v165 = 0LL;
              v63 = 0;
              v164 = 0LL;
              v143 = 0;
              BYTE3(v164) = -64;
              do
              {
                v64 = v53 + 32 * ((unsigned __int8)++v56 + 272LL);
                if ( v62 <= v59 || *(_QWORD *)(v64 + 24) <= v148 )
                {
                  v65 = (_QWORD *)(v64 + 8);
                  if ( v65 != (_QWORD *)*v65 )
                  {
                    do
                    {
                      v68 = KeGetCurrentPrcb();
                      v157 = 0;
                      v69 = v68->SchedulerAssist;
                      if ( v69 )
                      {
                        if ( v68->NestingLevel <= 1u )
                        {
                          v133 = v69[6];
                          v69[6] = v133 + 1;
                          if ( v133 == -1 )
LABEL_225:
                            KiRemoveSystemWorkPriorityKick(v68);
                        }
                      }
                      while ( _interlockedbittestandset64((volatile signed __int32 *)v64, 0LL) )
                      {
                        v100 = v68->SchedulerAssist;
                        if ( v100 )
                        {
                          if ( v68->NestingLevel <= 1u )
                          {
                            v134 = v100[6] - 1;
                            v100[6] = v134;
                            if ( !v134 )
                              KiRemoveSystemWorkPriorityKick(v68);
                          }
                        }
                        do
                          KeYieldProcessorEx(&v157);
                        while ( *(_QWORD *)v64 );
                        v101 = v68->SchedulerAssist;
                        if ( v101 )
                        {
                          if ( v68->NestingLevel <= 1u )
                          {
                            v135 = v101[6];
                            v101[6] = v135 + 1;
                            if ( v135 == -1 )
                              goto LABEL_225;
                          }
                        }
                      }
                      v70 = v143;
                      v155 = (volatile signed __int64 *)v64;
                      do
                      {
                        v71 = (_QWORD *)*v65;
                        if ( v65 == (_QWORD *)*v65 )
                          goto LABEL_99;
                        v72 = (ULONG_PTR)(v71 - 4);
                        v73 = *(v71 - 1);
                        if ( v73 > v148 )
                        {
                          *(_QWORD *)(v64 + 24) = v73;
LABEL_99:
                          _InterlockedAnd64(v155, 0LL);
                          v74 = KeGetCurrentPrcb();
                          v75 = v74->SchedulerAssist;
                          if ( v75 )
                          {
                            if ( v74->NestingLevel <= 1u )
                            {
                              v139 = v75[6] - 1;
                              v75[6] = v139;
                              if ( !v139 )
                                KiRemoveSystemWorkPriorityKick(v74);
                            }
                          }
                          v63 = v143;
                          goto LABEL_101;
                        }
                        v169 = 0LL;
                        v76 = (BYTE3(v164) ^ v70) & 0x3F ^ BYTE3(v164) ^ *(_BYTE *)(v72 + 3);
                        BYTE3(v164) ^= (BYTE3(v164) ^ v70) & 0x3F;
                        v168 = 0LL;
                        BYTE3(v168) = v76;
                        _InterlockedXor((volatile signed __int32 *)v72, v168);
                        v77 = v145;
                        BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v145 + 8LL * v70), v72);
                        KiRemoveEntryTimer(v77, v72, (unsigned __int8)v56, &v155);
                        v70 = ++v143;
                        if ( BugCheckParameter4 )
                          KeBugCheckEx(0xC7u, 8uLL, 1uLL, v72, BugCheckParameter4);
                      }
                      while ( v70 != 64 );
                      _InterlockedAnd64(v155, 0LL);
                      v136 = KeGetCurrentPrcb();
                      v137 = v136->SchedulerAssist;
                      if ( v137 )
                      {
                        if ( v136->NestingLevel <= 1u )
                        {
                          v138 = v137[6] - 1;
                          v137[6] = v138;
                          if ( !v138 )
                            KiRemoveSystemWorkPriorityKick(v136);
                        }
                      }
                      KiProcessExpiredTimerList(v152, v172, v145, 64LL);
                      v63 = 0;
                      v143 = 0;
                    }
                    while ( v65 != (_QWORD *)*v65 );
LABEL_101:
                    v59 = v144;
                    v53 = v145;
                  }
                  ++v62;
                }
              }
              while ( v56 != v60 );
              v1 = v152;
              if ( v63 )
                KiProcessExpiredTimerList(v152, v172, v53, v63);
            }
            else
            {
              v1 = v152;
            }
            v29 = v153 == v150;
            v50 = v153 - v150;
            v37 = v158;
            v66 = v148;
            v35 = v146;
            v153 -= v150;
          }
          while ( !v29 );
          v2 = v159;
          LOBYTE(v20) = v151;
          LOBYTE(v39) = v147;
          v38 = v142;
          if ( (*(_BYTE *)(v1 + 12588) & 8) == 0 )
          {
            v67 = *(_DWORD *)(v1 + 32424);
            *(_DWORD *)(v1 + 32420) = 0;
            if ( v67 >= KeTimeIncrement )
              *(_DWORD *)(v1 + 32424) = v67 - KeTimeIncrement;
            else
              *(_DWORD *)(v1 + 32424) = 0;
          }
          goto LABEL_91;
        }
        if ( *(_DWORD *)(v44 + 220) == 64 )
        {
          v110 = HalpTimerGetInternalData(v44, v34);
          v111 = (*(__int64 (__fastcall **)(__int64))(v44 + 112))(v110);
          v112 = *(_QWORD *)(v44 + 208);
          v113 = v111;
        }
        else
        {
          do
          {
            v112 = *(_QWORD *)(v44 + 208);
            do
            {
              v114 = *(_QWORD *)(v44 + 200);
              v115 = HalpTimerGetInternalData(v44, v34);
              v116 = (*(__int64 (__fastcall **)(__int64))(v44 + 112))(v115);
              _InterlockedOr(v141, 0);
              v117 = *(_QWORD *)(v44 + 200);
            }
            while ( v114 != v117 );
          }
          while ( v112 != *(_QWORD *)(v44 + 208) );
          v118 = *(_DWORD *)(v44 + 220);
          if ( ((v114 ^ v116) & (1LL << ((unsigned __int8)v118 - 1))) != 0 )
          {
            v119 = 1LL << v118;
            v120 = -1LL;
            if ( v118 != 64 )
              v120 = v119 - 1;
            v121 = v114 & v120;
            v113 = v116 | v114 ^ v121;
            if ( v116 < v121 )
              v113 += v119;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 200), v113, v117);
          }
          else
          {
            if ( v118 == 64 )
              v122 = -1LL;
            else
              v122 = (1LL << v118) - 1;
            v113 = v116 | v114 & ~v122;
          }
        }
        v49 = HalpTimerScaleCounter(v112 + v113, *(_QWORD *)(v44 + 192), 10000000LL);
      }
      else
      {
        v29 = *(_DWORD *)(v44 + 220) == 64;
        v160 = *(_QWORD *)(v44 + 192);
        if ( v29 )
        {
          v45 = HalpTimerGetInternalData(v44, v34);
          v46 = (*(__int64 (__fastcall **)(__int64))(v44 + 112))(v45);
          v47 = *(_QWORD *)(v44 + 208);
          v48 = v46;
        }
        else
        {
          do
          {
            v47 = *(_QWORD *)(v44 + 208);
            do
            {
              v94 = *(_QWORD *)(v44 + 200);
              v95 = HalpTimerGetInternalData(v44, v34);
              v96 = (*(__int64 (__fastcall **)(__int64))(v44 + 112))(v95);
              _InterlockedOr(v141, 0);
              v97 = *(_QWORD *)(v44 + 200);
            }
            while ( v94 != v97 );
          }
          while ( v47 != *(_QWORD *)(v44 + 208) );
          v98 = *(_DWORD *)(v44 + 220);
          if ( ((v94 ^ v96) & (1LL << ((unsigned __int8)v98 - 1))) != 0 )
          {
            v123 = 1LL << v98;
            v124 = -1LL;
            if ( v98 != 64 )
              v124 = v123 - 1;
            v125 = v94 & v124;
            v48 = v96 | v94 ^ v125;
            if ( v96 < v125 )
              v48 += v123;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 200), v48, v97);
          }
          else
          {
            if ( v98 == 64 )
              v99 = -1LL;
            else
              v99 = (1LL << v98) - 1;
            v48 = v96 | v94 & ~v99;
          }
        }
        v49 = v47 + v48;
      }
      v35 = v146;
      goto LABEL_66;
    }
    _enable();
    v172[1] = MEMORY[0xFFFFF78000000014];
LABEL_91:
    if ( !*(_BYTE *)(v1 + 33) )
      goto LABEL_92;
    KiTimer2Expiration(v1, v35, v38, v39, (__int64)v172);
    _disable();
LABEL_28:
    KiExecuteAllDpcs(v1, v2, v172, 0LL);
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
      v140 = *(_QWORD *)(v2 + 968);
      if ( v140 )
        *(_BYTE *)(v140 + 64) = 1;
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
