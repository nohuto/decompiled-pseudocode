/*
 * XREFs of KiRetireDpcList @ 0x1402EAF00
 * Callers:
 *     KiIdleLoop @ 0x140402B30 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x140406980 (KyRetireDpcList.c)
 * Callees:
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     KiRemoveEntryTimer @ 0x1402EBFE0 (KiRemoveEntryTimer.c)
 *     KiSelectActiveTimerTable @ 0x1402EC2B0 (KiSelectActiveTimerTable.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiTimer2Expiration @ 0x1402ED030 (KiTimer2Expiration.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     HalpTimerScaleCounter @ 0x140396440 (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiBeginCounterAccumulation @ 0x14051BFF0 (KiBeginCounterAccumulation.c)
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
  bool v37; // r11
  BOOL v38; // r10d
  unsigned __int64 v39; // r12
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r15
  signed __int64 v47; // rdx
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
  unsigned int v58; // r8d
  int v59; // r13d
  __int64 v60; // r15
  unsigned int v61; // edi
  unsigned int v62; // edx
  __int64 v63; // rsi
  _QWORD *v64; // rbx
  __int64 v65; // r11
  unsigned int v66; // eax
  struct _KPRCB *v67; // r12
  _DWORD *v68; // rcx
  unsigned int v69; // edx
  _QWORD *v70; // rax
  ULONG_PTR v71; // r12
  unsigned __int64 v72; // rax
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  char v75; // al
  __int64 v76; // r10
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // rcx
  ULONG_PTR v81; // rdi
  _QWORD *v82; // rdi
  _QWORD *v83; // rax
  ULONG_PTR v84; // rdx
  unsigned __int64 v85; // rax
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  __int64 InternalData; // rax
  _QWORD *i; // rcx
  char v90; // al
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rbx
  __int64 v94; // rax
  unsigned __int64 v95; // r9
  signed __int64 v96; // rax
  int v97; // r8d
  __int64 v98; // rdx
  _DWORD *v99; // rcx
  _DWORD *v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rbx
  __int64 v105; // r9
  unsigned int *v106; // r10
  __int64 v107; // r11
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r15
  signed __int64 v112; // rdx
  __int64 v113; // rbx
  __int64 v114; // rax
  unsigned __int64 v115; // r10
  signed __int64 v116; // rax
  int v117; // r9d
  __int64 v118; // r8
  __int64 v119; // rcx
  unsigned __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // r10
  __int64 v123; // rcx
  unsigned __int64 v124; // rcx
  int v125; // eax
  int v126; // eax
  int v127; // eax
  struct _KPRCB *v128; // rcx
  _DWORD *v129; // rdx
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  struct _KPRCB *v135; // rcx
  _DWORD *v136; // rdx
  int v137; // eax
  int v138; // eax
  __int64 v139; // rax
  signed __int32 v140[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v141; // [rsp+30h] [rbp-D0h]
  unsigned int v142; // [rsp+34h] [rbp-CCh]
  unsigned int v143; // [rsp+38h] [rbp-C8h]
  __int64 v144; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v145; // [rsp+48h] [rbp-B8h]
  BOOL v146; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v147; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  int v149; // [rsp+68h] [rbp-98h]
  int v150; // [rsp+6Ch] [rbp-94h]
  __int64 v151; // [rsp+70h] [rbp-90h]
  unsigned int v152; // [rsp+78h] [rbp-88h]
  volatile signed __int64 *v153; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v154; // [rsp+88h] [rbp-78h] BYREF
  int v155; // [rsp+90h] [rbp-70h] BYREF
  int v156; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int v157; // [rsp+98h] [rbp-68h]
  __int64 v158; // [rsp+A0h] [rbp-60h]
  __int64 v159; // [rsp+A8h] [rbp-58h]
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp-50h]
  __int128 v161; // [rsp+B8h] [rbp-48h]
  __int64 v162; // [rsp+C8h] [rbp-38h]
  __int128 v163; // [rsp+D0h] [rbp-30h]
  __int64 v164; // [rsp+E0h] [rbp-20h]
  __int128 v165; // [rsp+E8h] [rbp-18h]
  __int64 v166; // [rsp+F8h] [rbp-8h]
  __int128 v167; // [rsp+100h] [rbp+0h]
  __int64 v168; // [rsp+110h] [rbp+10h]
  __int128 v169; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v170[3]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v171[34]; // [rsp+140h] [rbp+40h] BYREF

  v1 = a1;
  v151 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  memset(v171, 0, sizeof(v171));
  v158 = v2;
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
          v145 = 0LL;
          v15 = v13 + 2LL * v12;
          v16 = *(_QWORD *)(v8 + 8 * v15);
          v5 = v8 + 8 * v15;
          v17 = KiTimelineBitmapTime;
          *(_QWORD *)v5 = v4 + v16;
          v18 = *(_DWORD *)(v8 + 192);
          if ( v17 > v18 )
          {
            LODWORD(v145) = v17;
            v5 = v17 - v18;
            if ( (unsigned int)v5 >= 0x20 )
              HIDWORD(v145) = 1;
            else
              HIDWORD(v145) = (*(_DWORD *)(v8 + 196) << (v17 - v18)) | 1;
            *(_QWORD *)(v8 + 192) = v145;
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
        v103 = *(_QWORD *)(v2 + 968);
        if ( v103 )
          *(_BYTE *)(v103 + 64) = 0;
        LOBYTE(v7) = v7 & 0xBF;
      }
      if ( (v7 & 0x3E) != 0 )
      {
        v77 = *(_QWORD *)(v2 + 104);
        if ( v77 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v77); i; i = (_QWORD *)i[51] )
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
        v78 = *(_QWORD *)(v2 + 360);
        if ( v78 )
        {
          v104 = *(_QWORD *)(v78 + 32);
          if ( v104 )
          {
            v105 = 1LL;
            if ( KiHwCountersCount )
            {
              v106 = (unsigned int *)&KiHwCounters;
              v107 = (unsigned int)KiHwCountersCount;
              v7 = v78 + 48;
              do
              {
                if ( (v104 & v105) != 0 )
                {
                  v108 = __readpmc(*v106);
                  v5 = (unsigned __int64)HIDWORD(v108) << 32;
                  *(_QWORD *)(v7 + 8) += (unsigned int)(v108 - *(_DWORD *)v7);
                  *(_QWORD *)v7 = v108;
                }
                v105 *= 2LL;
                ++v106;
                v7 += 24LL;
                --v107;
              }
              while ( v107 );
            }
          }
        }
      }
    }
    v20 = *(unsigned __int16 *)(v1 + 12588);
    *(_WORD *)(v1 + 12588) = 1;
    v150 = v20;
    if ( (v20 & 8) == 0 )
      goto LABEL_28;
    LOBYTE(v5) = 1;
    active = KiSelectActiveTimerTable(v1, v5, v7, 0xFFFFF78000000014uLL);
    if ( !active )
    {
      _enable();
      v171[1] = *v32;
LABEL_92:
      _disable();
      goto LABEL_28;
    }
    v34 = *v33;
    v35 = KiLastNonHrTimerExpiration;
    v36 = *(_DWORD *)(active + 16912);
    v145 = *v33;
    v37 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v38 = v37;
    if ( (KiVelocityFlags & 0x2000) != 0 )
      v38 = KiLastNonHrTimerExpiration != *(_QWORD *)(active + 16904);
    v141 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(active + 16896);
    v39 = v34 >> 18;
    v146 = v38;
    if ( v37 )
    {
      *(_QWORD *)(active + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(active + 16912) = v39;
    }
    if ( v38 )
    {
      v40 = *(_DWORD *)(active + 16916);
      *(_QWORD *)(active + 16904) = v35;
      *(_DWORD *)(active + 16916) = v34 >> 18;
      if ( v36 < v40 )
        v40 = v36;
      v36 = v40;
    }
    if ( v37 || v38 )
    {
      _enable();
      v171[1] = MEMORY[0xFFFFF78000000014];
      v169 = 0LL;
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
      v144 = v41 + 14656;
      if ( v41 == -14656 )
        goto LABEL_91;
      v42 = v1 + 16LL * *(unsigned int *)(v1 + 35584);
      *(_DWORD *)(v1 + 35584) = ((unsigned __int8)*(_DWORD *)(v1 + 35584) + 1) & 0xF;
      v43 = HalpPerformanceCounter;
      *(_QWORD *)(v42 + 35592) = v34;
      if ( *(_DWORD *)(v43 + 228) == 5 )
      {
        v159 = 10000000LL;
        if ( HalpTimerReferencePage )
        {
          InternalData = HalpTimerGetInternalData(v43);
          v48 = MEMORY[0xFFFFF780000003B8]
              + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v43 + 112))(InternalData)
                * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
LABEL_66:
          if ( v43 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
          {
            v92 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
            if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
              v92 = 10000000LL;
            v48 = HalpTimerScaleCounter(v48, v159, v92);
          }
          *(_QWORD *)(v42 + 35600) = v48;
          if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
          {
            *(_QWORD *)&v169 = v34;
            v170[0] = &v169;
            BYTE8(v169) = 0;
            v170[1] = 16LL;
            EtwTraceKernelEvent((int)v170, 1, 0x40020000u, 3920, 1538);
          }
          v49 = v39 - v36 + 1;
          v152 = v49;
          if ( v49 <= 0x100 )
          {
LABEL_70:
            v149 = v49;
            v50 = 256 - v49;
            v147 = v34;
            v51 = v34;
            if ( 256 - v49 > 0x18 )
              v50 = 24;
            goto LABEL_72;
          }
          v65 = (v39 - v49 + 1) << 18;
          do
          {
            if ( v49 <= 0x100 )
              goto LABEL_70;
            v51 = v65 + 0x4000000;
            v149 = 256;
            v147 = v51;
            v50 = 0;
LABEL_72:
            v52 = v144;
            v162 = 0LL;
            v53 = 0;
            v54 = v36 + v149;
            v153 = 0LL;
            v55 = v36 - 1;
            v157 = v54;
            v56 = 0LL;
            v57 = v55;
            v161 = 0LL;
            v58 = v54 - 1;
            v142 = 0;
            v143 = v54 - 1;
            v59 = v54 - 1 + v50;
            BYTE3(v161) = -64;
            do
            {
              v60 = v52 + 32 * ((unsigned __int8)++v57 + 16LL);
              if ( v53 <= v58 || *(_QWORD *)(v60 + 24) <= v51 )
              {
                if ( v60 + 8 != *(_QWORD *)(v60 + 8) )
                {
LABEL_112:
                  CurrentPrcb = KeGetCurrentPrcb();
                  BugCheckParameter4 = (ULONG_PTR)CurrentPrcb;
                  v155 = 0;
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  if ( !SchedulerAssist || CurrentPrcb->NestingLevel > 1u )
                  {
                    v81 = (ULONG_PTR)CurrentPrcb;
                    goto LABEL_114;
                  }
                  v125 = SchedulerAssist[6];
                  v81 = BugCheckParameter4;
                  SchedulerAssist[6] = v125 + 1;
                  if ( v125 == -1 )
LABEL_204:
                    KiRemoveSystemWorkPriorityKick(v81);
LABEL_114:
                  while ( _interlockedbittestandset64((volatile signed __int32 *)v60, 0LL) )
                  {
                    v101 = *(_QWORD *)(v81 + 33976);
                    if ( v101 )
                    {
                      if ( *(_BYTE *)(v81 + 32) <= 1u )
                      {
                        v126 = *(_DWORD *)(v101 + 24) - 1;
                        *(_DWORD *)(v101 + 24) = v126;
                        if ( !v126 )
                          KiRemoveSystemWorkPriorityKick(v81);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v155);
                    while ( *(_QWORD *)v60 );
                    v102 = *(_QWORD *)(v81 + 33976);
                    if ( v102 )
                    {
                      if ( *(_BYTE *)(v81 + 32) <= 1u )
                      {
                        v127 = *(_DWORD *)(v102 + 24);
                        *(_DWORD *)(v102 + 24) = v127 + 1;
                        if ( v127 == -1 )
                          goto LABEL_204;
                      }
                    }
                  }
                  v56 = v142;
                  v82 = (_QWORD *)(v60 + 8);
                  v153 = (volatile signed __int64 *)v60;
                  while ( 1 )
                  {
                    v83 = (_QWORD *)*v82;
                    v51 = v147;
                    if ( v82 == (_QWORD *)*v82 )
                      goto LABEL_119;
                    v84 = (ULONG_PTR)(v83 - 4);
                    v85 = *(v83 - 1);
                    BugCheckParameter3 = v84;
                    if ( v85 > v147 )
                      break;
                    v166 = 0LL;
                    v90 = (BYTE3(v161) ^ v56) & 0x3F ^ BYTE3(v161) ^ *(_BYTE *)(v84 + 3);
                    BYTE3(v161) ^= (BYTE3(v161) ^ v56) & 0x3F;
                    v165 = 0LL;
                    BYTE3(v165) = v90;
                    _InterlockedXor((volatile signed __int32 *)v84, v165);
                    v91 = v144;
                    BugCheckParameter4 = _InterlockedExchange64(
                                           (volatile __int64 *)(v144 + 8LL * (unsigned int)v56),
                                           v84);
                    KiRemoveEntryTimer(v91, v84, (unsigned __int8)v57, &v153);
                    v56 = ++v142;
                    if ( BugCheckParameter4 )
                      KeBugCheckEx(0xC7u, 8uLL, 1uLL, BugCheckParameter3, BugCheckParameter4);
                    if ( (_DWORD)v56 == 64 )
                    {
                      _InterlockedAnd64(v153, 0LL);
                      v128 = KeGetCurrentPrcb();
                      v129 = v128->SchedulerAssist;
                      if ( v129 )
                      {
                        if ( v128->NestingLevel <= 1u )
                        {
                          v130 = v129[6] - 1;
                          v129[6] = v130;
                          if ( !v130 )
                            KiRemoveSystemWorkPriorityKick(v128);
                        }
                      }
                      KiProcessExpiredTimerList(v151, v171, v144, 64LL);
                      v56 = 0LL;
                      v142 = 0;
                      if ( v82 == (_QWORD *)*v82 )
                        goto LABEL_220;
                      goto LABEL_112;
                    }
                  }
                  *(_QWORD *)(v60 + 24) = v85;
LABEL_119:
                  _InterlockedAnd64(v153, 0LL);
                  v86 = KeGetCurrentPrcb();
                  v87 = v86->SchedulerAssist;
                  if ( v87 )
                  {
                    if ( v86->NestingLevel <= 1u )
                    {
                      v131 = v87[6] - 1;
                      v87[6] = v131;
                      if ( !v131 )
                      {
                        KiRemoveSystemWorkPriorityKick(v86);
                        v56 = v142;
LABEL_220:
                        v51 = v147;
                      }
                    }
                  }
                  v58 = v143;
                  v52 = v144;
                }
                ++v53;
              }
            }
            while ( v57 != v59 );
            if ( (_DWORD)v56 )
            {
              KiProcessExpiredTimerList(v151, v171, v52, v56);
              v58 = v143;
              v52 = v144;
            }
            if ( v146 )
            {
              v154 = 0LL;
              v61 = 0;
              v164 = 0LL;
              v62 = 0;
              v163 = 0LL;
              v142 = 0;
              BYTE3(v163) = -64;
              do
              {
                v63 = v52 + 32 * ((unsigned __int8)++v55 + 272LL);
                if ( v61 <= v58 || *(_QWORD *)(v63 + 24) <= v147 )
                {
                  v64 = (_QWORD *)(v63 + 8);
                  if ( v64 != (_QWORD *)*v64 )
                  {
                    do
                    {
                      v67 = KeGetCurrentPrcb();
                      v156 = 0;
                      v68 = v67->SchedulerAssist;
                      if ( v68 )
                      {
                        if ( v67->NestingLevel <= 1u )
                        {
                          v132 = v68[6];
                          v68[6] = v132 + 1;
                          if ( v132 == -1 )
LABEL_225:
                            KiRemoveSystemWorkPriorityKick(v67);
                        }
                      }
                      while ( _interlockedbittestandset64((volatile signed __int32 *)v63, 0LL) )
                      {
                        v99 = v67->SchedulerAssist;
                        if ( v99 )
                        {
                          if ( v67->NestingLevel <= 1u )
                          {
                            v133 = v99[6] - 1;
                            v99[6] = v133;
                            if ( !v133 )
                              KiRemoveSystemWorkPriorityKick(v67);
                          }
                        }
                        do
                          KeYieldProcessorEx(&v156);
                        while ( *(_QWORD *)v63 );
                        v100 = v67->SchedulerAssist;
                        if ( v100 )
                        {
                          if ( v67->NestingLevel <= 1u )
                          {
                            v134 = v100[6];
                            v100[6] = v134 + 1;
                            if ( v134 == -1 )
                              goto LABEL_225;
                          }
                        }
                      }
                      v69 = v142;
                      v154 = (volatile signed __int64 *)v63;
                      do
                      {
                        v70 = (_QWORD *)*v64;
                        if ( v64 == (_QWORD *)*v64 )
                          goto LABEL_99;
                        v71 = (ULONG_PTR)(v70 - 4);
                        v72 = *(v70 - 1);
                        if ( v72 > v147 )
                        {
                          *(_QWORD *)(v63 + 24) = v72;
LABEL_99:
                          _InterlockedAnd64(v154, 0LL);
                          v73 = KeGetCurrentPrcb();
                          v74 = v73->SchedulerAssist;
                          if ( v74 )
                          {
                            if ( v73->NestingLevel <= 1u )
                            {
                              v138 = v74[6] - 1;
                              v74[6] = v138;
                              if ( !v138 )
                                KiRemoveSystemWorkPriorityKick(v73);
                            }
                          }
                          v62 = v142;
                          goto LABEL_101;
                        }
                        v168 = 0LL;
                        v75 = (BYTE3(v163) ^ v69) & 0x3F ^ BYTE3(v163) ^ *(_BYTE *)(v71 + 3);
                        BYTE3(v163) ^= (BYTE3(v163) ^ v69) & 0x3F;
                        v167 = 0LL;
                        BYTE3(v167) = v75;
                        _InterlockedXor((volatile signed __int32 *)v71, v167);
                        v76 = v144;
                        BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v144 + 8LL * v69), v71);
                        KiRemoveEntryTimer(v76, v71, (unsigned __int8)v55, &v154);
                        v69 = ++v142;
                        if ( BugCheckParameter4 )
                          KeBugCheckEx(0xC7u, 8uLL, 1uLL, v71, BugCheckParameter4);
                      }
                      while ( v69 != 64 );
                      _InterlockedAnd64(v154, 0LL);
                      v135 = KeGetCurrentPrcb();
                      v136 = v135->SchedulerAssist;
                      if ( v136 )
                      {
                        if ( v135->NestingLevel <= 1u )
                        {
                          v137 = v136[6] - 1;
                          v136[6] = v137;
                          if ( !v137 )
                            KiRemoveSystemWorkPriorityKick(v135);
                        }
                      }
                      KiProcessExpiredTimerList(v151, v171, v144, 64LL);
                      v62 = 0;
                      v142 = 0;
                    }
                    while ( v64 != (_QWORD *)*v64 );
LABEL_101:
                    v58 = v143;
                    v52 = v144;
                  }
                  ++v61;
                }
              }
              while ( v55 != v59 );
              v1 = v151;
              if ( v62 )
                KiProcessExpiredTimerList(v151, v171, v52, v62);
            }
            else
            {
              v1 = v151;
            }
            v29 = v152 == v149;
            v49 = v152 - v149;
            v36 = v157;
            v65 = v147;
            v34 = v145;
            v152 -= v149;
          }
          while ( !v29 );
          v2 = v158;
          LOBYTE(v20) = v150;
          LOBYTE(v38) = v146;
          v37 = v141;
          if ( (*(_BYTE *)(v1 + 12588) & 8) == 0 )
          {
            v66 = *(_DWORD *)(v1 + 32424);
            *(_DWORD *)(v1 + 32420) = 0;
            if ( v66 >= KeTimeIncrement )
              *(_DWORD *)(v1 + 32424) = v66 - KeTimeIncrement;
            else
              *(_DWORD *)(v1 + 32424) = 0;
          }
          goto LABEL_91;
        }
        if ( *(_DWORD *)(v43 + 220) == 64 )
        {
          v109 = HalpTimerGetInternalData(v43);
          v110 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v109);
          v111 = *(_QWORD *)(v43 + 208);
          v112 = v110;
        }
        else
        {
          do
          {
            v111 = *(_QWORD *)(v43 + 208);
            do
            {
              v113 = *(_QWORD *)(v43 + 200);
              v114 = HalpTimerGetInternalData(v43);
              v115 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v114);
              _InterlockedOr(v140, 0);
              v116 = *(_QWORD *)(v43 + 200);
            }
            while ( v113 != v116 );
          }
          while ( v111 != *(_QWORD *)(v43 + 208) );
          v117 = *(_DWORD *)(v43 + 220);
          if ( ((v113 ^ v115) & (1LL << ((unsigned __int8)v117 - 1))) != 0 )
          {
            v118 = 1LL << v117;
            v119 = -1LL;
            if ( v117 != 64 )
              v119 = v118 - 1;
            v120 = v113 & v119;
            v112 = v115 | v113 ^ v120;
            if ( v115 < v120 )
              v112 += v118;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v112, v116);
          }
          else
          {
            if ( v117 == 64 )
              v121 = -1LL;
            else
              v121 = (1LL << v117) - 1;
            v112 = v115 | v113 & ~v121;
          }
        }
        v48 = HalpTimerScaleCounter(v111 + v112, *(_QWORD *)(v43 + 192), 10000000LL);
      }
      else
      {
        v29 = *(_DWORD *)(v43 + 220) == 64;
        v159 = *(_QWORD *)(v43 + 192);
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
              v93 = *(_QWORD *)(v43 + 200);
              v94 = HalpTimerGetInternalData(v43);
              v95 = (*(__int64 (__fastcall **)(__int64))(v43 + 112))(v94);
              _InterlockedOr(v140, 0);
              v96 = *(_QWORD *)(v43 + 200);
            }
            while ( v93 != v96 );
          }
          while ( v46 != *(_QWORD *)(v43 + 208) );
          v97 = *(_DWORD *)(v43 + 220);
          if ( ((v93 ^ v95) & (1LL << ((unsigned __int8)v97 - 1))) != 0 )
          {
            v122 = 1LL << v97;
            v123 = -1LL;
            if ( v97 != 64 )
              v123 = v122 - 1;
            v124 = v93 & v123;
            v47 = v95 | v93 ^ v124;
            if ( v95 < v124 )
              v47 += v122;
            _InterlockedCompareExchange64((volatile signed __int64 *)(v43 + 200), v47, v96);
          }
          else
          {
            if ( v97 == 64 )
              v98 = -1LL;
            else
              v98 = (1LL << v97) - 1;
            v47 = v95 | v93 & ~v98;
          }
        }
        v48 = v46 + v47;
      }
      v34 = v145;
      goto LABEL_66;
    }
    _enable();
    v171[1] = MEMORY[0xFFFFF78000000014];
LABEL_91:
    if ( !*(_BYTE *)(v1 + 33) )
      goto LABEL_92;
    KiTimer2Expiration(v1, v34, v37, v38, (__int64)v171);
    _disable();
LABEL_28:
    KiExecuteAllDpcs(v1, v2, v171, 0LL);
    if ( (v20 & 4) != 0 )
    {
      _enable();
      KeSignalGate(v1 + 31616, 0);
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
      v139 = *(_QWORD *)(v2 + 968);
      if ( v139 )
        *(_BYTE *)(v139 + 64) = 1;
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
