/*
 * XREFs of PpmIdleExecuteTransition @ 0x1402702D0
 * Callers:
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 * Callees:
 *     PpmConvertTime @ 0x140205BBC (PpmConvertTime.c)
 *     KePrepareClockTimerForIdle @ 0x140241D70 (KePrepareClockTimerForIdle.c)
 *     PpmExitCoordinatedIdle @ 0x140271DF0 (PpmExitCoordinatedIdle.c)
 *     PpmUpdatePerformanceFeedback @ 0x140271E60 (PpmUpdatePerformanceFeedback.c)
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 *     KeResumeClockTimerFromIdle @ 0x1402729D0 (KeResumeClockTimerFromIdle.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     HalRequestIpi @ 0x140359720 (HalRequestIpi.c)
 *     PpmGetExitSamplingCountdown @ 0x14035D380 (PpmGetExitSamplingCountdown.c)
 *     HalpTimerScaleCounter @ 0x140392DF0 (HalpTimerScaleCounter.c)
 *     PpmPerfArbitratorApplyProcessorState @ 0x1403957A4 (PpmPerfArbitratorApplyProcessorState.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1403F7010 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     KdCallPowerHandlers @ 0x14050B0D4 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x14050B510 (KdPowerTransitionEx.c)
 *     KeIsSubsetAffinityEx @ 0x14050DB80 (KeIsSubsetAffinityEx.c)
 *     KeQueryWakeSource @ 0x14050EBEC (KeQueryWakeSource.c)
 *     KeWakeProcessor @ 0x140513F60 (KeWakeProcessor.c)
 *     KeUpdatePendingQosRequest @ 0x140519360 (KeUpdatePendingQosRequest.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140560C0C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmIdleSetSynchronizationState @ 0x1405612D0 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleTransitionStall @ 0x140561498 (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateConcurrency @ 0x140561530 (PpmIdleUpdateConcurrency.c)
 *     PpmTestAndLockProcessor @ 0x140561F2C (PpmTestAndLockProcessor.c)
 *     PpmPerfFeedbackCounterUpdate @ 0x140568D38 (PpmPerfFeedbackCounterUpdate.c)
 *     PpmEventEnterPlatformIdleState @ 0x140573C9C (PpmEventEnterPlatformIdleState.c)
 */

__int64 __fastcall PpmIdleExecuteTransition(
        ULONG_PTR BugCheckParameter4,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rdi
  unsigned __int16 v9; // bp
  __int64 v11; // r15
  int v12; // r12d
  unsigned __int16 *v13; // r14
  unsigned int v14; // esi
  __int64 v15; // rbx
  unsigned int v16; // edi
  _BYTE *v17; // rbx
  __int64 v18; // rcx
  __int64 Prcb; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned int v22; // edx
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int8 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rcx
  unsigned __int8 v28; // bl
  unsigned int v29; // edi
  unsigned __int64 v30; // rdx
  char v31; // r14
  char v32; // si
  bool v33; // di
  __int64 v34; // rbx
  int v35; // r9d
  unsigned __int64 v36; // rax
  int v37; // eax
  unsigned int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // r11
  int v41; // edi
  __int64 v42; // r10
  __int64 v43; // rsi
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rbx
  int v46; // eax
  unsigned __int64 v47; // rbx
  __int64 v48; // rdx
  signed __int64 v49; // rax
  __int64 v50; // rbx
  char v51; // bp
  unsigned int v52; // r14d
  signed __int64 v53; // rdi
  int v54; // r8d
  unsigned __int64 *v55; // r9
  __int64 v56; // r10
  unsigned __int64 v57; // rdx
  int v58; // eax
  int v59; // eax
  int ExitSamplingCountdown; // eax
  char v61; // r9
  int v62; // eax
  int v63; // ecx
  signed __int64 v64; // rdi
  __int64 v65; // rbx
  __int64 v66; // rsi
  unsigned int v67; // ebx
  __int64 v68; // rdx
  __int64 v69; // rdi
  unsigned __int8 v70; // r11
  struct _KPRCB *CurrentPrcb; // rbx
  int v72; // edi
  int v73; // eax
  int v74; // r8d
  KSPIN_LOCK *v75; // rax
  KSPIN_LOCK *v76; // rcx
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rcx
  __int64 v81; // rdi
  __int64 (__fastcall *v82)(__int64, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v83; // r12d
  __int64 v84; // rsi
  __int64 v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rdx
  int v89; // ecx
  __int16 v90; // cx
  __int64 v91; // rdx
  unsigned __int8 v92; // bl
  char v93; // r8
  struct _KPRCB *v104; // rbx
  __int64 Number; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // rax
  unsigned __int8 v109; // al
  unsigned __int8 v110; // r8
  __int16 v111; // di
  unsigned __int8 v112; // al
  __int64 v113; // rbx
  signed __int16 v114; // tt
  __int64 v115; // rsi
  unsigned int v116; // ebx
  __int64 v117; // rdx
  signed __int16 v118; // tt
  char v119; // al
  char v120; // al
  struct _KPRCB *v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rcx
  unsigned __int64 v124; // rax
  ULONG_PTR v125; // rdi
  __int64 v126; // rsi
  __int64 v127; // rbx
  __int64 v128; // rax
  unsigned __int64 v129; // r8
  signed __int64 v130; // rax
  int v131; // r10d
  unsigned __int64 v132; // rcx
  __int64 v133; // r9
  __int64 v134; // rdx
  unsigned __int64 v135; // rcx
  signed __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rcx
  __int64 v141; // rax
  __int64 v142; // rsi
  unsigned __int128 v143; // rax
  bool v144; // zf
  __int64 v145; // rbx
  __int64 InternalData; // rax
  unsigned __int64 v147; // r8
  int v148; // r10d
  unsigned __int64 v149; // rcx
  __int64 v150; // r9
  __int64 v151; // rcx
  unsigned __int64 v152; // rcx
  __int64 v153; // rcx
  __int64 v154; // r8
  bool v155; // di
  __int64 v156; // rax
  ULONG_PTR v157; // rbx
  unsigned __int64 v158; // rbx
  unsigned __int64 v159; // rcx
  unsigned __int8 v160; // al
  int v161; // eax
  int v162; // ecx
  int *v163; // rcx
  int v164; // r8d
  __int64 v165; // rbx
  __int64 v166; // r8
  unsigned __int64 v167; // rsi
  unsigned __int16 v168; // di
  unsigned int v169; // ecx
  unsigned __int64 v170; // rdx
  unsigned int v171; // ebp
  __int64 v172; // rbx
  __int64 v173; // r14
  unsigned __int32 v174; // eax
  unsigned __int32 v175; // r8d
  signed __int32 v176; // ecx
  int v177; // r12d
  int v178; // r13d
  __int64 v179; // rdi
  int v180; // ebx
  __int64 result; // rax
  signed __int32 v182[8]; // [rsp+0h] [rbp-3F8h] BYREF
  volatile unsigned __int8 DeepSleep; // [rsp+50h] [rbp-3A8h]
  unsigned __int8 v184; // [rsp+51h] [rbp-3A7h]
  char v185; // [rsp+52h] [rbp-3A6h]
  char v186; // [rsp+53h] [rbp-3A5h]
  unsigned __int8 v187; // [rsp+54h] [rbp-3A4h]
  char v188; // [rsp+55h] [rbp-3A3h]
  char v189; // [rsp+56h] [rbp-3A2h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-3A0h]
  __int64 v191; // [rsp+60h] [rbp-398h]
  signed __int64 v192; // [rsp+68h] [rbp-390h]
  unsigned int v193; // [rsp+70h] [rbp-388h]
  int v194; // [rsp+74h] [rbp-384h]
  int v195; // [rsp+78h] [rbp-380h] BYREF
  int v196; // [rsp+7Ch] [rbp-37Ch]
  unsigned int v197; // [rsp+80h] [rbp-378h]
  __int64 v198; // [rsp+88h] [rbp-370h]
  int v199; // [rsp+90h] [rbp-368h]
  PKSPIN_LOCK SpinLock; // [rsp+98h] [rbp-360h]
  unsigned __int16 *v201; // [rsp+A0h] [rbp-358h]
  int v202; // [rsp+A8h] [rbp-350h] BYREF
  __int64 v203; // [rsp+B0h] [rbp-348h]
  unsigned __int16 *v204; // [rsp+B8h] [rbp-340h]
  unsigned __int64 v205; // [rsp+C0h] [rbp-338h]
  unsigned __int16 v206; // [rsp+C8h] [rbp-330h]
  int v207; // [rsp+CAh] [rbp-32Eh]
  __int16 v208; // [rsp+CEh] [rbp-32Ah]
  int v209; // [rsp+D0h] [rbp-328h]
  int v210; // [rsp+D4h] [rbp-324h]
  __int64 v211; // [rsp+D8h] [rbp-320h]
  unsigned __int64 v212; // [rsp+E0h] [rbp-318h] BYREF
  __int64 v213; // [rsp+E8h] [rbp-310h]
  __int64 v214; // [rsp+F0h] [rbp-308h]
  __int64 v215; // [rsp+F8h] [rbp-300h]
  __int64 v216; // [rsp+100h] [rbp-2F8h]
  ULONG_PTR v217; // [rsp+108h] [rbp-2F0h]
  _QWORD v218[2]; // [rsp+110h] [rbp-2E8h] BYREF
  __int128 v219; // [rsp+120h] [rbp-2D8h] BYREF
  __int64 v220; // [rsp+130h] [rbp-2C8h]
  __int128 v221; // [rsp+138h] [rbp-2C0h] BYREF
  __int128 v222; // [rsp+148h] [rbp-2B0h]
  __int128 v223; // [rsp+158h] [rbp-2A0h]
  __int128 v224; // [rsp+168h] [rbp-290h] BYREF
  __int64 v225; // [rsp+178h] [rbp-280h] BYREF
  int v226; // [rsp+180h] [rbp-278h]
  int v227; // [rsp+184h] [rbp-274h]
  _QWORD v228[2]; // [rsp+188h] [rbp-270h] BYREF
  _QWORD v229[3]; // [rsp+198h] [rbp-260h] BYREF
  _OWORD v230[8]; // [rsp+1B0h] [rbp-248h] BYREF
  __int64 v231; // [rsp+230h] [rbp-1C8h]
  _QWORD v232[22]; // [rsp+240h] [rbp-1B8h] BYREF
  _DWORD v233[44]; // [rsp+2F0h] [rbp-108h] BYREF
  int v234; // [rsp+3F0h] [rbp-8h]

  v8 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v9 = 0;
  v231 = 0LL;
  DeepSleep = 0;
  v185 = 0;
  LOBYTE(v199) = 0;
  v11 = 0LL;
  LOBYTE(v194) = 0;
  v12 = 0;
  v188 = 0;
  v186 = 0;
  v203 = *(_QWORD *)(v8 + 488);
  v217 = BugCheckParameter4;
  memset(v230, 0, sizeof(v230));
  v216 = v8 + 792;
  v215 = a4;
  v193 = a3;
  LODWORD(BugCheckParameter2) = a2;
  LODWORD(SpinLock) = 0;
  v198 = 0LL;
  v196 = 0;
  v195 = 7;
  v202 = -1;
  v191 = v8;
  v211 = v8 + 248LL * (unsigned int)a2;
  v189 = 0;
  LODWORD(v192) = 0;
  if ( !a8 || *(_BYTE *)(v8 + 539) || *(_BYTE *)(v8 + 248LL * (unsigned int)a2 + 1061) )
  {
    v184 = 0;
    v187 = 3;
  }
  else
  {
    v184 = 1;
    v187 = 4;
  }
  v197 = 3;
  if ( !*(_BYTE *)v8 )
  {
    if ( a8 )
    {
      LOBYTE(a2) = 1;
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, a2);
    }
    v13 = (unsigned __int16 *)(v8 + 240);
    v201 = (unsigned __int16 *)(v8 + 240);
    *(_QWORD *)(v8 + 240) = 1310721LL;
    memset((void *)(v8 + 248), 0, 0xA0uLL);
    v14 = *(_DWORD *)(v8 + 548);
    v15 = *(_QWORD *)(v8 + 552);
    v220 = 0LL;
    v218[1] = &v219;
    v16 = 0;
    v218[0] = 1LL;
    v219 = 0LL;
    LOBYTE(v219) = 1;
    BYTE2(v219) = 1;
    if ( v14 )
    {
      v17 = (_BYTE *)(v15 + 4);
      while ( 1 )
      {
        if ( *v17 != 0xFF )
        {
          v18 = *((unsigned int *)v17 - 1);
          DWORD1(v219) = (unsigned __int8)*v17;
          Prcb = KeGetPrcb(v18);
          LODWORD(v192) = PpmTestAndLockProcessor(Prcb, v13, v218);
          v12 = v192;
          if ( (int)v192 < 0 )
            break;
        }
        ++v16;
        v17 += 8;
        if ( v16 >= v14 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      v21 = *((_QWORD *)v13 + 1);
      v205 = v21;
      v221 = 0LL;
      v207 = 0;
      v222 = 0LL;
      v208 = 0;
      v206 = 0;
      v204 = v13;
LABEL_15:
      while ( 1 )
      {
        v209 = 0;
        v22 = v13 ? *v13 : v206 + 1;
        if ( !v21 )
          break;
LABEL_21:
        _BitScanForward64(&v23, v21);
        v21 &= ~(1LL << v23);
        v209 = v23;
        v205 = v21;
        v24 = KeGetPrcb((unsigned int)KiProcessorNumberToIndexMappingTable[64 * v206 + (unsigned __int8)v23]);
        v222 = (unsigned __int64)v24;
        v25 = *(_QWORD *)(v24 + 0x8000);
        *(_QWORD *)&v221 = 0LL;
        *((_QWORD *)&v221 + 1) = PopIdleTransitionTimeout;
        v26 = *(unsigned __int8 (__fastcall **)(__int64))(v25 + 472);
        v27 = *(_QWORD *)(v25 + 488);
        BYTE12(v222) = 1;
        if ( !v26(v27) )
        {
          while ( (*(_DWORD *)(v24 + 32832) & 0xFF000000) == 0x5000000 )
          {
            PpmIdleTransitionStall(&v221);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(v25 + 472))(*(_QWORD *)(v25 + 488)) )
            {
              v21 = v205;
              goto LABEL_15;
            }
          }
          v12 = -1073741782;
          LODWORD(v192) = -1073741782;
          goto LABEL_27;
        }
      }
      while ( 1 )
      {
        v20 = ++v206;
        if ( v206 >= v22 )
          break;
        v205 = *(_QWORD *)&v13[4 * v206 + 4];
        v21 = v205;
        if ( v205 )
          goto LABEL_21;
      }
      v12 = 0;
      LODWORD(v192) = 0;
    }
LABEL_27:
    if ( v12 < 0 )
    {
      if ( a8 )
        PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
      v28 = 0;
      v29 = 1;
      v197 = 1;
      goto LABEL_308;
    }
    v8 = v191;
  }
  v20 = 0LL;
  v30 = *(unsigned __int16 *)(v8 + 240);
  v201 = (unsigned __int16 *)(v8 + 240);
  if ( (_WORD)v30 )
  {
    while ( !*(_QWORD *)(v8 + 240 + 8LL * (unsigned __int16)v20 + 8) )
    {
      LOWORD(v20) = v20 + 1;
      if ( (unsigned __int16)v20 >= (unsigned __int16)v30 )
        goto LABEL_37;
    }
    *(_WORD *)(v8 + 48) |= 0x20u;
  }
LABEL_37:
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0LL;
  v35 = 512;
  v214 = 2LL;
  if ( PpmPerfQosEnabled && PpmPerfQosManageIdleProcessors && *(_DWORD *)(BugCheckParameter4 + 33264) != 2 )
  {
    v34 = *(_QWORD *)(BugCheckParameter4 + 33136);
    if ( v34 && *(_BYTE *)(v34 + 125) )
    {
      v32 = 1;
      _disable();
      v33 = (v234 & 0x200) != 0;
      KxAcquireSpinLock((PKSPIN_LOCK)(v34 + 128));
      v35 = 512;
    }
    if ( (*(_BYTE *)(BugCheckParameter4 + 33272) & 4) == 0 )
    {
      v30 = __rdtsc();
      v20 = v30 - *(_QWORD *)(BugCheckParameter4 + 33248);
      v36 = *(_QWORD *)(BugCheckParameter4 + 33256);
      if ( v20 < v36 && !*(_BYTE *)(BugCheckParameter4 + 33213) )
      {
        v37 = *(_DWORD *)(BugCheckParameter4 + 236);
        v31 = 1;
        if ( (v37 & 0x300) == 0 )
        {
          LOBYTE(v9) = 1;
          v38 = v37 & 0xFFFFFCFF | 0x200;
LABEL_52:
          *(_DWORD *)(BugCheckParameter4 + 236) = v38;
          KeUpdatePendingQosRequest(BugCheckParameter4);
          goto LABEL_53;
        }
        goto LABEL_53;
      }
      *(_QWORD *)(BugCheckParameter4 + 33248) = v30;
      *(_BYTE *)(BugCheckParameter4 + 33213) = v20 >= 2 * v36;
    }
    *(_DWORD *)(BugCheckParameter4 + 33264) = 2;
    LOBYTE(v30) = 1;
    PpmPerfArbitratorApplyProcessorState(BugCheckParameter4, v30, 0LL, 512LL);
    *(_BYTE *)(BugCheckParameter4 + 236) = 2;
  }
  v39 = *(_DWORD *)(BugCheckParameter4 + 236);
  if ( (v39 & 0x300) != 0 )
  {
    v38 = v39 & 0xFFFFFCFF;
    goto LABEL_52;
  }
LABEL_53:
  if ( v32 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(v34 + 128));
    if ( v33 )
      _enable();
  }
  if ( (_BYTE)v9 )
  {
    v9 = 0;
    v12 = -1073741802;
    v29 = 0;
    v197 = 0;
    LODWORD(v192) = -1073741802;
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    v11 = 0LL;
    v28 = 0;
    goto LABEL_307;
  }
  v40 = v184;
  v41 = BugCheckParameter2;
  v42 = v211;
  *(_BYTE *)(BugCheckParameter4 + 32816) = v184;
  *(_DWORD *)(BugCheckParameter4 + 32820) = v41;
  if ( a8 )
  {
    LOBYTE(v30) = 2;
    *(_BYTE *)(BugCheckParameter4 + 32817) = *(_BYTE *)(v42 + 1058) == 0;
    PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, v30);
  }
  v43 = v191;
  if ( v31 || *(_BYTE *)(v191 + 6) || *(_BYTE *)(v191 + 7) )
  {
    v44 = -1LL;
    v188 = 1;
    if ( *(_BYTE *)(v191 + 6) )
    {
      v45 = *(_QWORD *)(v191 + 520);
      if ( v45 <= KeMaximumIncrement )
        v45 = KeMaximumIncrement;
      v44 = a7 + KeMaximumIncrement + v45;
    }
    if ( *(_BYTE *)(v191 + 7) )
    {
      v46 = PpmCurrentProfile[342 * dword_140C23ECC + 24];
      if ( v44 >= a7 + (unsigned __int64)(unsigned int)(10 * v46) )
        v44 = a7 + (unsigned int)(10 * v46);
    }
    if ( v31 && v44 >= a7 + PpmPerfQosIdleExpirationTimeout )
      v44 = a7 + PpmPerfQosIdleExpirationTimeout;
    *(_QWORD *)(BugCheckParameter4 + 32808) = v44;
    _interlockedbittestandset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
  }
  if ( *(_BYTE *)(v42 + 1057) || v31 )
    goto LABEL_135;
  v47 = *(_QWORD *)(BugCheckParameter4 + 200);
  v48 = *(_QWORD *)(BugCheckParameter4 + 192);
  v185 = 1;
  _m_prefetchw((const void *)(v48 + 64));
  v49 = _InterlockedOr64((volatile signed __int64 *)(v48 + 64), v47);
  v50 = *(_QWORD *)(BugCheckParameter4 + 0x8000);
  v51 = 0;
  v52 = v193;
  v53 = v49;
  v192 = v49;
  v196 = 0;
  if ( v40 )
  {
    v196 = 1;
  }
  else if ( v193 == -1 )
  {
    v54 = 0;
    if ( *(_WORD *)(v50 + 240) )
    {
      v55 = (unsigned __int64 *)(v50 + 248);
      v56 = *(unsigned __int16 *)(v50 + 240);
      do
      {
        v57 = *v55++;
        v54 += (unsigned int)((0x101010101010101LL
                             * ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                               + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                               + ((((v57 - ((v57 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                 + (((v57 - ((v57 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
        --v56;
      }
      while ( v56 );
      v53 = v192;
      v52 = v193;
      v43 = v191;
    }
    if ( v54 != (_DWORD)KeNumberProcessors_0 - 1 )
      goto LABEL_95;
    v40 = v184;
    v196 = 2;
  }
  v58 = *(_DWORD *)(v50 + 12);
  if ( !v58 || (v59 = v58 - 1, (*(_DWORD *)(v50 + 12) = v59) == 0) )
  {
    ExitSamplingCountdown = PpmGetExitSamplingCountdown();
    v51 = 0;
    *(_DWORD *)(v50 + 12) = ExitSamplingCountdown;
    if ( ExitSamplingCountdown )
      v51 = v61;
  }
  if ( v51 )
  {
    *(_BYTE *)(v50 + 3) = 1;
    if ( !v40 )
    {
LABEL_95:
      LODWORD(SpinLock) = 1;
      goto LABEL_96;
    }
    *(_QWORD *)(v50 + 56) = -1LL;
  }
  if ( !v40 )
    goto LABEL_95;
LABEL_96:
  v62 = ((__int64 (__fastcall *)(_QWORD))off_140C00740[0])((unsigned int)SpinLock);
  v63 = *(_DWORD *)(BugCheckParameter4 + 12504);
  v12 = v62;
  LODWORD(v192) = v62;
  if ( v63 )
  {
    v12 = -2147483631;
    goto LABEL_98;
  }
  if ( v62 < 0 )
  {
LABEL_99:
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    v9 = 0;
    v29 = 0;
    v197 = 0;
    v28 = 0;
LABEL_297:
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 64LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    if ( DeepSleep && *(_BYTE *)(BugCheckParameter4 + 32410) )
      KeWakeProcessor();
    if ( (_BYTE)v194 && v12 >= 0 )
      v163 = &v202;
    else
      v163 = 0LL;
    KeResumeClockTimerFromIdle(v163);
    off_140C00750();
    KeAccumulateTicks(BugCheckParameter4, *(_DWORD *)(BugCheckParameter4 + 12596), MEMORY[0xFFFFF78000000320], 0, 0);
    goto LABEL_306;
  }
  if ( *(_BYTE *)v43 == 1 )
  {
    v64 = *(_QWORD *)(BugCheckParameter4 + 200) | v53;
    v65 = *(unsigned __int8 *)(BugCheckParameter4 + 208);
    memset(v232, 0, 0xA8uLL);
    v66 = PpmPlatformStates;
    if ( PpmPlatformStates )
    {
      LODWORD(v232[0]) = 1310721;
      memset((char *)v232 + 4, 0, 0xA4uLL);
      if ( (_WORD)v65 )
        LOWORD(v232[0]) = v65 + 1;
      v232[v65 + 1] |= v64;
      v67 = 0;
      v68 = v191;
      v69 = *(_QWORD *)(v191 + 752);
      if ( *(_DWORD *)(v69 + 4) )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v69 + 4LL * v67 + 8) == -1 )
          {
            if ( (unsigned int)KeIsSubsetAffinityEx(
                                 v66 + 384LL * *(unsigned int *)(*(_QWORD *)(v68 + 784) + 24LL * v67 + 4) + 128,
                                 v232) )
            {
              v12 = -1073741802;
LABEL_98:
              LODWORD(v192) = v12;
              goto LABEL_99;
            }
            v68 = v191;
          }
          if ( ++v67 >= *(_DWORD *)(v69 + 4) )
            goto LABEL_112;
        }
      }
      v43 = v191;
    }
    else
    {
LABEL_112:
      v43 = v191;
    }
  }
  if ( v51 )
    *(_WORD *)(v43 + 48) |= 0x200u;
  v70 = v184;
  if ( v184 )
  {
    v189 = 1;
    _InterlockedIncrement(&PpmNonInterruptibleCount);
    CurrentPrcb = KeGetCurrentPrcb();
    v72 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      off_140C00888[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
      v70 = v184;
    }
    if ( CurrentPrcb->Number == v72 )
      ++dword_140C31568;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  if ( *(_BYTE *)(v43 + 540) )
  {
    LOBYTE(v73) = v194;
    if ( v51 )
    {
      v73 = (unsigned __int8)v194;
      if ( !v70 )
        v73 = 1;
      v194 = v73;
    }
    if ( a5 && v52 != -1 && PpmDripsStateIndex != -1 )
    {
      v74 = (unsigned __int8)v199;
      if ( *(_BYTE *)v43 == 1 )
        v74 = 1;
      v199 = v74;
    }
    KePrepareClockTimerForIdle(a5, (unsigned __int8)v199, *(_QWORD *)(v43 + 520), v73);
  }
  v41 = BugCheckParameter2;
LABEL_135:
  v75 = *(KSPIN_LOCK **)(BugCheckParameter4 + 33192);
  SpinLock = v75;
  if ( v75 )
  {
    PpmIdleUpdateConcurrency(v75);
    v76 = *(KSPIN_LOCK **)(BugCheckParameter4 + 33200);
    if ( v76 )
      PpmIdleUpdateConcurrency(v76);
  }
  *(_DWORD *)(v43 + 20) = v41;
  v77 = __rdtsc();
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
  {
    v78 = __readmsr(0xDB2u);
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v78 = 0LL;
  }
  v79 = a6 - *(_QWORD *)(BugCheckParameter4 + 32880);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter4 + 32896), v79);
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32968) += PpmConvertTime(
                                                 v79,
                                                 v77 - *(_QWORD *)(BugCheckParameter4 + 32848),
                                                 v78 - *(_QWORD *)(BugCheckParameter4 + 32960));
  v80 = *(_QWORD *)(BugCheckParameter4 + 32848);
  *(_QWORD *)(BugCheckParameter4 + 32880) = a6;
  if ( v77 > v80 )
    *(_QWORD *)(BugCheckParameter4 + 32856) += v77 - v80;
  *(_QWORD *)(BugCheckParameter4 + 32848) = v77;
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32960) = v78;
  LOBYTE(v35) = 1;
  PpmUpdatePerformanceFeedback(BugCheckParameter4, 0, 0, v35, 0LL);
  if ( PopSnapEnergyCounters )
    PopSnapEnergyCounters(*(unsigned int *)(BugCheckParameter4 + 36), 0LL, 0LL);
  v81 = v191;
  _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 32800), a6);
  v82 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v191 + 416);
  if ( v82 )
  {
    v12 = v82(v203, (unsigned int)BugCheckParameter2, v193, *(unsigned int *)(v191 + 796), *(_QWORD *)(v191 + 808));
    LODWORD(v192) = v12;
  }
  if ( v12 >= 0 )
  {
    v83 = v193;
    v84 = *(_QWORD *)(v191 + 808);
    LODWORD(v85) = *(_DWORD *)(v191 + 796);
    v186 = 1;
    if ( v193 != -1 )
    {
      v86 = PpmPlatformStates + 384LL * v193;
      PpmEventEnterPlatformIdleState(v193);
      if ( !qword_140C4FF80 && v193 == dword_140C4FFC0 )
        _InterlockedCompareExchange64(&qword_140C4FF80, MEMORY[0xFFFFF78000000008], 0LL);
      if ( a5 )
      {
        *(_BYTE *)(PpmPlatformStates + 56) = 1;
        ++*(_DWORD *)(*(_QWORD *)(PpmPlatformStates + 48) + 8LL);
      }
      if ( *(_BYTE *)(v86 + 120) )
      {
        LOBYTE(v87) = 1;
        KdPowerTransitionEx(2147483652LL, v87);
        KdCallPowerHandlers(4LL);
      }
      v81 = v191;
    }
    if ( (_DWORD)v85 )
    {
      if ( *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v225 = v84;
        v226 = 4 * v85;
        v227 = 0;
        EtwTraceKernelEvent((unsigned int)&v225, 1, 1073774592, 4671, 1538);
      }
      do
      {
        v85 = (unsigned int)(v85 - 1);
        v88 = PpmPlatformStates + 384LL * *(unsigned int *)(v84 + 4 * v85);
        *(_QWORD *)(v88 + 328) = a6;
        v89 = *(_DWORD *)(v88 + 320);
        if ( !*(_DWORD *)(PpmPlatformStates + 4) )
          v89 ^= ((unsigned __int16)v89 ^ (unsigned __int16)KeGetPcr()->Prcb.Number) & 0xFFF;
        *(_DWORD *)(v88 + 320) = v89 & 0xF8FFFFFF | 0x4000000;
      }
      while ( (_DWORD)v85 );
    }
    if ( v83 != -1 )
      *(_WORD *)(v81 + 48) |= 0x10u;
    v90 = *(_WORD *)(v81 + 48);
    v91 = *(_QWORD *)(v81 + 512);
    v92 = *(_BYTE *)(v81 + 541);
    v224 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      LODWORD(v224) = BugCheckParameter2;
      WORD2(v224) = v90;
      *((_QWORD *)&v224 + 1) = v91;
      v228[0] = &v224;
      WORD3(v224) = v92;
      v228[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v228, 1, 1073774592, 4665, 1538);
    }
    if ( a8 )
      PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, v187);
    if ( v185 )
    {
      DeepSleep = 0;
      if ( *(_BYTE *)(v211 + 1056) >= 2u && (HvlEnlightenments & 4) == 0 )
      {
        v93 = byte_140C10DC0;
        v223 = 0LL;
        if ( byte_140C10DC0 == -1 )
        {
          _RAX = 1LL;
          __asm { cpuid }
          v93 = 0;
          *(_QWORD *)&v223 = __PAIR64__(_RBX, _RAX);
          *((_QWORD *)&v223 + 1) = __PAIR64__(_RDX, _RCX);
          if ( (int)_RCX < 0 )
          {
            _RAX = 1073741825LL;
            __asm { cpuid }
            *(_QWORD *)&v223 = __PAIR64__(_RBX, _RAX);
            v93 = (_DWORD)_RAX == 1986945624;
            *((_QWORD *)&v223 + 1) = __PAIR64__(_RDX, _RCX);
          }
          byte_140C10DC0 = v93;
        }
        if ( !v93 )
        {
          v104 = KeGetCurrentPrcb();
          if ( v104->CpuVendor == 1 )
          {
            DeepSleep = 0;
          }
          else
          {
            Number = v104->Number;
            v104->DeepSleep = 1;
            _InterlockedOr64(
              (volatile signed __int64 *)(8LL * ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                        + 12759912
                                        + 0x140000000LL),
              1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F));
            if ( !v104->DeepSleep )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(8LL
                                          * ((unsigned int)KiProcessorIndexToNumberMappingTable[v104->Number] >> 6)
                                          + 12759912
                                          + 0x140000000LL),
                ~(1LL << (KiProcessorIndexToNumberMappingTable[v104->Number] & 0x3F)));
              if ( KiFlushPcid )
              {
                v106 = __readcr3();
                __writecr3(v106);
                if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  KiSetUserTbFlushPending();
              }
              else
              {
                v107 = __readcr4();
                if ( (v107 & 0x20080) != 0 )
                {
                  __writecr4(v107 ^ 0x80);
                  __writecr4(v107);
                }
                else
                {
                  v108 = __readcr3();
                  __writecr3(v108);
                }
              }
            }
            DeepSleep = v104->DeepSleep;
          }
        }
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter4 + 249) & 1) != 0 && (v109 = *(_BYTE *)(BugCheckParameter4 + 250)) != 0 )
    {
      *(_BYTE *)(BugCheckParameter4 + 248) |= 1u;
      v110 = v109;
    }
    else
    {
      v110 = 0;
    }
    _m_prefetchw((const void *)(BugCheckParameter4 + 254));
    v111 = *(_WORD *)(BugCheckParameter4 + 254) & 4;
    if ( v111 )
    {
      if ( (*(_BYTE *)(BugCheckParameter4 + 248) & 1) != 0 )
      {
        v112 = *(_BYTE *)(BugCheckParameter4 + 250);
        if ( (v112 & 3) == 0 )
        {
          v110 |= 2u;
          *(_BYTE *)(BugCheckParameter4 + 250) = v112 | 2;
          __writemsr(0x48u, v112 | 2u);
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(BugCheckParameter4 + 254), 2u);
      v113 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v113 + 254));
      do
        v114 = *(_WORD *)(v113 + 254);
      while ( v114 != _InterlockedCompareExchange16((volatile signed __int16 *)(v113 + 254), v114 & 0xFFE4 | 0xA, v114) );
    }
    v115 = v191;
    v116 = BugCheckParameter2;
    LODWORD(v192) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(v191 + 424))(
                      v203,
                      v215,
                      (unsigned int)BugCheckParameter2,
                      v83,
                      v110,
                      *(_DWORD *)(v191 + 796),
                      *(_QWORD *)(v191 + 808));
    v12 = v192;
    if ( v111 )
    {
      v117 = *(_QWORD *)(BugCheckParameter4 + 11696);
      _m_prefetchw((const void *)(v117 + 254));
      do
        v118 = *(_WORD *)(v117 + 254);
      while ( v118 != _InterlockedCompareExchange16((volatile signed __int16 *)(v117 + 254), v118 & 0xFFF5 | 2, v118) );
      if ( (*(_WORD *)(BugCheckParameter4 + 254) & 0x10) == 0 )
      {
        v119 = *(_BYTE *)(BugCheckParameter4 + 250);
        if ( (v119 & 2) != 0 )
        {
          *(_BYTE *)(BugCheckParameter4 + 250) = v119 & 0xFD;
          __writemsr(0x48u, v119 & 0xFD);
        }
      }
    }
    *(_BYTE *)(BugCheckParameter4 + 248) &= ~1u;
    if ( DeepSleep )
    {
      v120 = *(_BYTE *)(BugCheckParameter4 + 32410);
      DeepSleep = 0;
      if ( v120 )
      {
        v121 = KeGetCurrentPrcb();
        v122 = v121->Number;
        v121->DeepSleep = 0;
        _InterlockedAnd64(
          &qword_140C2B368[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v122] >> 6],
          ~(1LL << (KiProcessorIndexToNumberMappingTable[v122] & 0x3F)));
        v123 = __readcr4();
        v116 = BugCheckParameter2;
        if ( (v123 & 0x20080) != 0 )
        {
          __writecr4(v123 ^ 0x80);
          __writecr4(v123);
        }
        else
        {
          v124 = __readcr3();
          __writecr3(v124);
        }
      }
    }
    if ( *(int *)(v115 + 64) < 0 )
    {
      if ( v12 >= 0 )
        v12 = *(_DWORD *)(v115 + 64);
      LODWORD(v192) = v12;
    }
    v212 = 0LL;
    if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
    {
      v212 = __PAIR64__(v12, v116);
      v229[0] = &v212;
      v229[1] = 8LL;
      EtwTraceKernelEvent((unsigned int)v229, 1, 1073774592, 4666, 1538);
    }
  }
  v125 = HalpPerformanceCounter;
  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
  {
    v144 = *(_DWORD *)(HalpPerformanceCounter + 220) == 64;
    v213 = *(_QWORD *)(HalpPerformanceCounter + 192);
    if ( v144 )
    {
      if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
        v153 = *(_QWORD *)(HalpPerformanceCounter + 72)
             + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
      else
        v153 = *(_QWORD *)(HalpPerformanceCounter + 72);
      *(_QWORD *)&v143 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v153);
      v142 = *(_QWORD *)(v125 + 208);
      *((_QWORD *)&v143 + 1) = v143;
    }
    else
    {
      do
      {
        v142 = *(_QWORD *)(v125 + 208);
        do
        {
          v145 = *(_QWORD *)(v125 + 200);
          InternalData = HalpTimerGetInternalData(v125);
          v147 = (*(__int64 (__fastcall **)(__int64))(v125 + 112))(InternalData);
          _InterlockedOr(v182, 0);
          *(_QWORD *)&v143 = *(_QWORD *)(v125 + 200);
        }
        while ( v145 != (_QWORD)v143 );
      }
      while ( v142 != *(_QWORD *)(v125 + 208) );
      v148 = *(_DWORD *)(v125 + 220);
      v149 = v145 ^ v147;
      if ( _bittest64((const __int64 *)&v149, (unsigned __int8)(v148 - 1)) )
      {
        v150 = 1LL << v148;
        v151 = -1LL;
        if ( v148 != 64 )
          v151 = v150 - 1;
        v152 = v145 & v151;
        *((_QWORD *)&v143 + 1) = v147 | v145 ^ v152;
        if ( v147 < v152 )
          *((_QWORD *)&v143 + 1) += v150;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 200), *((signed __int64 *)&v143 + 1), v143);
      }
      else if ( v148 == 64 )
      {
        *((_QWORD *)&v143 + 1) = v147;
      }
      else
      {
        *((_QWORD *)&v143 + 1) = v147 | v145 & ~((1LL << v148) - 1);
      }
    }
    goto LABEL_259;
  }
  v213 = 10000000LL;
  if ( HalpTimerReferencePage )
  {
    if ( (*(_DWORD *)(HalpPerformanceCounter + 224) & 0x10000) != 0 )
      v140 = *(_QWORD *)(HalpPerformanceCounter + 72)
           + *(_DWORD *)(HalpPerformanceCounter + 80) * KeGetPcr()->Prcb.Number;
    else
      v140 = *(_QWORD *)(HalpPerformanceCounter + 72);
    v141 = (*(__int64 (__fastcall **)(__int64))(HalpPerformanceCounter + 112))(v140);
    v142 = MEMORY[0xFFFFF780000003B8];
    v143 = (unsigned __int64)v141 * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1);
LABEL_259:
    v139 = *((_QWORD *)&v143 + 1) + v142;
    v198 = v139;
    goto LABEL_260;
  }
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    v137 = HalpTimerGetInternalData(HalpPerformanceCounter);
    v138 = (*(__int64 (__fastcall **)(__int64))(v125 + 112))(v137);
    v126 = *(_QWORD *)(v125 + 208);
    v136 = v138;
  }
  else
  {
    do
    {
      v126 = *(_QWORD *)(v125 + 208);
      do
      {
        v127 = *(_QWORD *)(v125 + 200);
        v128 = HalpTimerGetInternalData(v125);
        v129 = (*(__int64 (__fastcall **)(__int64))(v125 + 112))(v128);
        _InterlockedOr(v182, 0);
        v130 = *(_QWORD *)(v125 + 200);
      }
      while ( v127 != v130 );
    }
    while ( v126 != *(_QWORD *)(v125 + 208) );
    v131 = *(_DWORD *)(v125 + 220);
    v132 = v127 ^ v129;
    if ( _bittest64((const __int64 *)&v132, (unsigned __int8)(v131 - 1)) )
    {
      v133 = 1LL << v131;
      v134 = -1LL;
      if ( v131 != 64 )
        v134 = v133 - 1;
      v135 = v134 & v127;
      v136 = v129 | v127 ^ v134 & v127;
      if ( v129 < v135 )
        v136 += v133;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 200), v136, v130);
    }
    else if ( v131 == 64 )
    {
      v136 = v129;
    }
    else
    {
      v136 = v129 | v127 & ~((1LL << v131) - 1);
    }
  }
  v139 = HalpTimerScaleCounter(v126 + v136, *(_QWORD *)(v125 + 192), 10000000LL);
  v198 = v139;
LABEL_260:
  if ( v125 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
  {
    v154 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
    if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
      v154 = 10000000LL;
    v139 = HalpTimerScaleCounter(v139, v213, v154);
    v198 = v139;
  }
  _InterlockedExchange64((volatile __int64 *)(BugCheckParameter4 + 32800), 0LL);
  if ( *(_BYTE *)(BugCheckParameter4 + 32977) )
  {
    _disable();
    v155 = (v234 & 0x200) != 0;
    KxAcquireSpinLock((PKSPIN_LOCK)(BugCheckParameter4 + 32840));
    v156 = 2LL;
    v157 = BugCheckParameter4 + 32864;
    do
    {
      if ( *(_QWORD *)v157 && *(_BYTE *)(*(_QWORD *)v157 + 34LL) )
      {
        PpmPerfFeedbackCounterUpdate();
        v156 = v214;
      }
      v157 += 8LL;
      v214 = --v156;
    }
    while ( v156 );
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter4 + 32840));
    if ( v155 )
      _enable();
  }
  v158 = __rdtsc();
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    v159 = __readmsr(0xDB2u);
  else
    v159 = 0LL;
  *(_QWORD *)(BugCheckParameter4 + 32880) = v139;
  *(_QWORD *)(BugCheckParameter4 + 32848) = v158;
  if ( (*(_QWORD *)(BugCheckParameter4 + 34208) & 0x8000000000LL) != 0 )
    *(_QWORD *)(BugCheckParameter4 + 32960) = v159;
  v20 = (unsigned __int64)SpinLock;
  if ( SpinLock )
  {
    PpmIdleUpdateConcurrency(SpinLock);
    v20 = *(_QWORD *)(BugCheckParameter4 + 33200);
    if ( v20 )
      PpmIdleUpdateConcurrency((PKSPIN_LOCK)v20);
  }
  *(_QWORD *)(BugCheckParameter4 + 32784) = v139 - a6;
  if ( a8 )
  {
    v160 = PpmIdleSetSynchronizationState(BugCheckParameter4 + 32832, 0LL);
    if ( v12 >= 0 && v160 != 8 && v184 )
      KeBugCheckEx(0xA0u, 0x702uLL, (unsigned int)BugCheckParameter2, v160, BugCheckParameter4);
    *(_BYTE *)(BugCheckParameter4 + 32817) = 0;
  }
  v28 = v186;
  if ( v185 )
  {
    if ( v186
      && v12 >= 0
      && PpmPlatformStates
      && *(_BYTE *)(PpmPlatformStates + 56)
      && PpmDripsStateIndex != -1
      && *(_DWORD *)(384LL * (unsigned int)PpmDripsStateIndex + PpmPlatformStates + 320) )
    {
      v161 = KeQueryWakeSource(&v195, v230);
      v162 = v195;
      v29 = 3;
      if ( v161 < 0 )
        v162 = 3;
      v195 = v162;
    }
    else
    {
      v29 = 3;
    }
    goto LABEL_297;
  }
  v29 = 3;
LABEL_306:
  v11 = v198;
LABEL_307:
  v13 = v201;
LABEL_308:
  LOBYTE(v20) = 1;
  ((void (__fastcall *)(unsigned __int64))off_140C009A8[0])(v20);
  if ( v188 )
  {
    _interlockedbittestandreset64(
      (volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter4 + 192) + 72LL),
      *(unsigned __int8 *)(BugCheckParameter4 + 209));
    *(_QWORD *)(BugCheckParameter4 + 32808) = -1LL;
  }
  v164 = v28;
  v165 = v216;
  LODWORD(SpinLock) = PpmExitCoordinatedIdle(
                        BugCheckParameter4,
                        v216,
                        v164,
                        v12,
                        v29 != 3,
                        v11,
                        a5,
                        (__int64)v230,
                        v195);
  if ( v29 == 3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(v191 + 456))(
      v203,
      (unsigned int)BugCheckParameter2,
      (unsigned int)SpinLock,
      *(unsigned int *)(v165 + 4),
      *(_QWORD *)(v165 + 16));
  }
  else if ( !*(_BYTE *)v191 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(v191 + 464))(v203, v29);
  }
  v166 = *(_QWORD *)(v165 + 16);
  for ( LODWORD(v165) = *(_DWORD *)(v165 + 4);
        (_DWORD)v165;
        *(_DWORD *)(384LL * *(unsigned int *)(v166 + 4 * v165) + PpmPlatformStates + 320) = 0 )
  {
    v165 = (unsigned int)(v165 - 1);
  }
  if ( v189 )
    _InterlockedDecrement(&PpmNonInterruptibleCount);
  v233[0] = 1310721;
  memset(&v233[1], 0, 0xA4uLL);
  LODWORD(v11) = KeGetPcr()->Prcb.Number;
  v167 = *((_QWORD *)v13 + 1);
  v168 = 0;
  while ( 1 )
  {
    v210 = 0;
    v169 = v13 ? *v13 : v168 + 1;
    if ( !v167 )
      break;
LABEL_325:
    _BitScanForward64(&v170, v167);
    v167 &= ~(1LL << v170);
    v210 = v170;
    v171 = KiProcessorNumberToIndexMappingTable[64 * v168 + (unsigned __int8)v170];
    v172 = KeGetPrcb(v171);
    v173 = *(_QWORD *)(v172 + 0x8000);
    _m_prefetchw((const void *)(v172 + 32832));
    v174 = *(_DWORD *)(v172 + 32832);
    do
    {
      v175 = v174;
      v176 = v174 ^ (v174 ^ (v174 - 1)) & 0xFFFFFF;
      if ( (v176 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v174) == 5 )
        {
          v176 = v176 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v174) == 7 )
        {
          v176 = v176 & 0xFFFFFF | 0x6000000;
        }
      }
      v174 = _InterlockedCompareExchange((volatile signed __int32 *)(v172 + 32832), v176, v174);
    }
    while ( v174 != v175 );
    if ( HIBYTE(v176) == 6 )
      KeAddProcessorAffinityEx(v233, v171);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v173
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v11] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v11] & 0x3F)));
    v13 = v201;
    KeRemoveProcessorAffinityEx(v201, v171);
    v9 = 0;
  }
  while ( ++v168 < v169 )
  {
    v167 = *(_QWORD *)&v13[4 * v168 + 4];
    if ( v167 )
      goto LABEL_325;
  }
  v177 = (int)SpinLock;
  v178 = v217;
  if ( LOWORD(v233[0]) )
  {
    while ( !*(_QWORD *)&v233[2 * v9 + 2] )
    {
      if ( ++v9 >= LOWORD(v233[0]) )
        goto LABEL_340;
    }
    HalRequestIpi(0LL, v233);
  }
LABEL_340:
  v179 = v191;
  v180 = v192;
  if ( *(_BYTE *)(v191 + 3) )
    PpmIdleCompleteExitLatencyTrace(v178, v192, v184, v198, v202, v196, BugCheckParameter2, v177);
  result = v197;
  *(_DWORD *)(v179 + 68) = v197;
  *(_DWORD *)(v179 + 64) = v180;
  return result;
}
