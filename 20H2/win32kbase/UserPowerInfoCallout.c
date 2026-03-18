/*
 * XREFs of UserPowerInfoCallout @ 0x1C002A474
 * Callers:
 *     W32CalloutDispatch @ 0x1C00297E0 (W32CalloutDispatch.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0042780 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0045B00 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C004B600 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C004B870 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C004CDDC (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C004CF08 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C004D618 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     CitLastInputUpdate @ 0x1C00658C0 (CitLastInputUpdate.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0066200 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     QueuePowerRequest @ 0x1C006FFD0 (QueuePowerRequest.c)
 *     SetPendingInput @ 0x1C0071CA0 (SetPendingInput.c)
 *     SqmPowerState @ 0x1C0071F00 (SqmPowerState.c)
 *     CitDisplayRequestChange @ 0x1C00B9C78 (CitDisplayRequestChange.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00BA148 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EtwTraceDisplayReqChange @ 0x1C00BED9C (EtwTraceDisplayReqChange.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011D120 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011D434 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C013BE20 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C019EAB8 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C01F674C (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     ModerncoreUserPowerInfoCallout @ 0x1C01F68AC (ModerncoreUserPowerInfoCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, __int64 a3, int *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // r13
  int v7; // edi
  int v9; // r12d
  int v10; // r15d
  unsigned int v11; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagKERNELHANDLETABLEENTRY *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r15d
  int v27; // r15d
  int v28; // r15d
  int v29; // r15d
  int v30; // r15d
  int v31; // r15d
  int v32; // r15d
  unsigned int v33; // r15d
  LARGE_INTEGER *v34; // rbx
  struct tagTHREADINFO *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  struct tagKERNELHANDLETABLEENTRY *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  PERESOURCE *v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  LARGE_INTEGER *v48; // rbx
  struct tagTHREADINFO *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  struct tagKERNELHANDLETABLEENTRY *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  PERESOURCE *v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  LARGE_INTEGER *v65; // rbx
  struct tagTHREADINFO *v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  struct tagKERNELHANDLETABLEENTRY *v71; // r15
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  PERESOURCE *v75; // rbx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rcx
  char v80; // r13
  char v81; // r12
  __int64 v82; // rcx
  LARGE_INTEGER *v83; // rbx
  struct tagTHREADINFO *v84; // rbx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  struct tagKERNELHANDLETABLEENTRY *v90; // r15
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  PERESOURCE *v94; // rbx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // r15d
  LARGE_INTEGER *v98; // rbx
  struct tagTHREADINFO *v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  struct tagKERNELHANDLETABLEENTRY *v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  PERESOURCE *v108; // rbx
  __int64 v109; // r8
  __int64 v110; // r9
  int v111; // esi
  int v112; // ebx
  bool v113; // zf
  bool v114; // sf
  __int64 v115; // rcx
  char v116; // r12
  char v117; // r13
  __int64 v118; // r15
  LARGE_INTEGER *v119; // rbx
  struct tagTHREADINFO *v120; // rbx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  struct tagKERNELHANDLETABLEENTRY *v125; // rsi
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  PERESOURCE *v129; // rbx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rbx
  LARGE_INTEGER *v133; // rbx
  struct tagTHREADINFO *v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  struct tagKERNELHANDLETABLEENTRY *v139; // r15
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  PERESOURCE *v143; // rbx
  __int64 v144; // r8
  __int64 v145; // r9
  LARGE_INTEGER *v146; // rbx
  struct tagTHREADINFO *v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  struct tagKERNELHANDLETABLEENTRY *v152; // r15
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  PERESOURCE *v156; // rbx
  __int64 v157; // r8
  __int64 v158; // r9
  LARGE_INTEGER *v159; // rbx
  struct tagTHREADINFO *v160; // rbx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  struct tagKERNELHANDLETABLEENTRY *v165; // r15
  __int64 v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  PERESOURCE *v169; // rbx
  __int64 v170; // r8
  __int64 v171; // r9
  LARGE_INTEGER *v172; // rbx
  struct tagTHREADINFO *v173; // rbx
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  struct tagKERNELHANDLETABLEENTRY *v178; // r15
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  PERESOURCE *v182; // rbx
  __int64 v183; // r8
  __int64 v184; // r9
  LARGE_INTEGER *v185; // rbx
  struct tagTHREADINFO *v186; // rbx
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  struct tagKERNELHANDLETABLEENTRY *v191; // r15
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  PERESOURCE *v195; // rbx
  __int64 v196; // r8
  __int64 v197; // r9
  LARGE_INTEGER *v198; // rbx
  struct tagTHREADINFO *v199; // rbx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  struct tagKERNELHANDLETABLEENTRY *v204; // r15
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  PERESOURCE *v208; // rbx
  __int64 v209; // r8
  __int64 v210; // r9
  LARGE_INTEGER *v211; // rbx
  struct tagTHREADINFO *v212; // rbx
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // r9
  struct tagKERNELHANDLETABLEENTRY *v221; // r15
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  PERESOURCE *v225; // rbx
  __int64 v226; // r8
  __int64 v227; // r9
  LARGE_INTEGER *v228; // rbx
  struct tagTHREADINFO *v229; // rbx
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // r9
  struct tagKERNELHANDLETABLEENTRY *v234; // r15
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  PERESOURCE *v238; // rbx
  __int64 v239; // r8
  __int64 v240; // r9
  enum POWER_MONITOR_REQUEST_REASON v241; // ecx
  LARGE_INTEGER *v242; // rbx
  struct tagTHREADINFO *v243; // rbx
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r8
  __int64 v247; // r9
  struct tagKERNELHANDLETABLEENTRY *v248; // rsi
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  PERESOURCE *v252; // rbx
  __int64 v253; // r8
  __int64 v254; // r9
  LARGE_INTEGER *v255; // rbx
  struct tagTHREADINFO *v256; // rbx
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // r9
  struct tagKERNELHANDLETABLEENTRY *v261; // r15
  __int64 v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rcx
  PERESOURCE *v265; // rbx
  __int64 v266; // r8
  __int64 v267; // r9
  LARGE_INTEGER *v268; // rbx
  struct tagTHREADINFO *v269; // rbx
  __int64 v270; // rdx
  __int64 v271; // r8
  __int64 v272; // r9
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  __int64 v276; // r9
  struct tagKERNELHANDLETABLEENTRY *v277; // r15
  __int64 v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rcx
  PERESOURCE *v281; // rbx
  __int64 v282; // r8
  __int64 v283; // r9
  LARGE_INTEGER *v284; // rbx
  struct tagTHREADINFO *v285; // rbx
  __int64 v286; // rdx
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // r9
  struct tagKERNELHANDLETABLEENTRY *v290; // r15
  __int64 v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  PERESOURCE *v294; // rbx
  __int64 v295; // r8
  __int64 v296; // r9
  LARGE_INTEGER *v297; // rbx
  struct tagTHREADINFO *v298; // rbx
  __int64 v299; // rdx
  __int64 v300; // rcx
  __int64 v301; // r8
  __int64 v302; // r9
  struct tagKERNELHANDLETABLEENTRY *v303; // r15
  __int64 v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rcx
  PERESOURCE *v307; // rbx
  __int64 v308; // r8
  __int64 v309; // r9
  LARGE_INTEGER *v310; // rbx
  struct tagTHREADINFO *v311; // rbx
  __int64 v312; // rdx
  __int64 v313; // rcx
  __int64 v314; // r8
  __int64 v315; // r9
  struct tagKERNELHANDLETABLEENTRY *v316; // r15
  __int64 v317; // rax
  __int64 v318; // rdx
  __int64 v319; // rcx
  PERESOURCE *v320; // rbx
  __int64 v321; // r8
  __int64 v322; // r9
  LARGE_INTEGER *v323; // rbx
  struct tagTHREADINFO *v324; // rbx
  __int64 v325; // rdx
  __int64 v326; // rcx
  __int64 v327; // r8
  __int64 v328; // r9
  struct tagKERNELHANDLETABLEENTRY *v329; // rsi
  __int64 v330; // rax
  __int64 v331; // rdx
  __int64 v332; // rcx
  PERESOURCE *v333; // rbx
  __int64 v334; // r8
  __int64 v335; // r9
  LARGE_INTEGER *v336; // rbx
  struct tagTHREADINFO *v337; // rbx
  __int64 v338; // rdx
  __int64 v339; // rcx
  __int64 v340; // r8
  __int64 v341; // r9
  struct tagKERNELHANDLETABLEENTRY *v342; // r15
  __int64 v343; // rax
  __int64 v344; // rdx
  __int64 v345; // rcx
  PERESOURCE *v346; // rbx
  __int64 v347; // r8
  __int64 v348; // r9
  __int64 v349; // rdx
  __int64 v350; // rcx
  tagDomLock *v351; // rbx
  __int64 v352; // r8
  __int64 v353; // r9
  bool v355; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 v356; // [rsp+50h] [rbp-B8h] BYREF
  PERESOURCE *v357; // [rsp+60h] [rbp-A8h] BYREF
  PERESOURCE *v358; // [rsp+68h] [rbp-A0h] BYREF
  PERESOURCE *v359; // [rsp+70h] [rbp-98h] BYREF
  PERESOURCE *v360; // [rsp+78h] [rbp-90h] BYREF
  PERESOURCE *v361; // [rsp+80h] [rbp-88h] BYREF
  PERESOURCE *v362; // [rsp+88h] [rbp-80h] BYREF
  PERESOURCE *v363; // [rsp+90h] [rbp-78h] BYREF
  PERESOURCE *v364; // [rsp+98h] [rbp-70h] BYREF
  PERESOURCE *v365; // [rsp+A0h] [rbp-68h] BYREF
  PERESOURCE *v366; // [rsp+A8h] [rbp-60h] BYREF
  PERESOURCE *v367; // [rsp+B0h] [rbp-58h] BYREF
  PERESOURCE *v368; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v369; // [rsp+C0h] [rbp-48h] BYREF
  PERESOURCE *v370; // [rsp+C8h] [rbp-40h] BYREF
  PERESOURCE *v371; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE *v372; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE *v373; // [rsp+E0h] [rbp-28h] BYREF
  PERESOURCE *v374; // [rsp+E8h] [rbp-20h] BYREF
  PERESOURCE *v375; // [rsp+F0h] [rbp-18h] BYREF
  PERESOURCE *v376; // [rsp+F8h] [rbp-10h] BYREF
  PERESOURCE *v377; // [rsp+100h] [rbp-8h] BYREF
  PERESOURCE *v378; // [rsp+108h] [rbp+0h] BYREF
  PERESOURCE *v379; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v380[32]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v381[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v382[32]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v383[32]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v384[32]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v385[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v386[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v387[32]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v388[32]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v389[32]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v390[32]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v391[32]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v392[32]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v393[32]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v394[32]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v395[32]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v396[32]; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v397[32]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v398[32]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v399[32]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v400[32]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v401[32]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v402[32]; // [rsp+3D8h] [rbp+2D0h] BYREF

  v6 = a6;
  v7 = 0;
  v357 = (PERESOURCE *)a6;
  v9 = a3;
  v10 = a1;
  v11 = 0;
  v356 = 0LL;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_17;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v380, 1);
    v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v380);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v379);
      v19 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v19 + 2);
          v20 = *(_QWORD *)v19;
          *((_QWORD *)v19 + 2) = 0LL;
          if ( !*(_DWORD *)(v20 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v24, v25);
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          HMUnlockObject(*(_QWORD *)v19);
          tagDomLock::LockExclusive((tagDomLock *)DomainLockRef);
          v19 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v379);
      v6 = v357;
    }
    UserSessionSwitchLeaveCrit(v14);
  }
  if ( !gbVideoInitialized )
    return (unsigned int)-1073741823;
LABEL_17:
  if ( !v10 )
  {
    if ( v9 != 20 || !a4 )
      return (unsigned int)-1073741823;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)a4
      && *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v133 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v133 )
        v133[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v387, 1);
      v134 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v387);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v134;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v363);
        v139 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v139 + 2);
            v140 = *(_QWORD *)v139;
            *((_QWORD *)v139 + 2) = 0LL;
            if ( !*(_DWORD *)(v140 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v136, v135, v137, v138);
            v143 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v143 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v142, v141, v144, v145);
            ExReleaseResourceAndLeaveCriticalRegion(*v143);
            HMUnlockObject(*(_QWORD *)v139);
            tagDomLock::LockExclusive((tagDomLock *)v143);
            v139 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v363);
      }
      if ( gProtocolType )
        goto LABEL_189;
      giPowerOffTimeOutMs = 1000 * a4[4];
    }
    else if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
           && *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v146 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v146 )
        v146[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v388, 1);
      v147 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v388);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v147;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v364);
        v152 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v152 + 2);
            v153 = *(_QWORD *)v152;
            *((_QWORD *)v152 + 2) = 0LL;
            if ( !*(_DWORD *)(v153 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v149, v148, v150, v151);
            v156 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v156 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v155, v154, v157, v158);
            ExReleaseResourceAndLeaveCriticalRegion(*v156);
            HMUnlockObject(*(_QWORD *)v152);
            tagDomLock::LockExclusive((tagDomLock *)v156);
            v152 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v364);
      }
      if ( !gProtocolType || !dword_1C02491B4 )
        goto LABEL_189;
      giPowerSessionActivityTimeOutMs = 1000 * a4[4];
    }
    else if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
           && *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v159 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v159 )
        v159[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v389, 1);
      v160 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v389);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v160;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v365);
        v165 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v165 + 2);
            v166 = *(_QWORD *)v165;
            *((_QWORD *)v165 + 2) = 0LL;
            if ( !*(_DWORD *)(v166 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v162, v161, v163, v164);
            v169 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v169 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v168, v167, v170, v171);
            ExReleaseResourceAndLeaveCriticalRegion(*v169);
            HMUnlockObject(*(_QWORD *)v165);
            tagDomLock::LockExclusive((tagDomLock *)v169);
            v165 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v365);
      }
      if ( gProtocolType )
        goto LABEL_189;
      giPowerSessionActivityTimeOutMs = 1000 * a4[4];
      if ( giPowerSessionActivityTimeOutMs )
        gPowerAdaptiveState = 0;
    }
    else
    {
      if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 != *(_QWORD *)a4
        || *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 != *((_QWORD *)a4 + 1) )
      {
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
        {
          v185 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( v185 )
            v185[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v391, 1);
          v186 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v391);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v186;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v367);
            v191 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v191 + 2);
                v192 = *(_QWORD *)v191;
                *((_QWORD *)v191 + 2) = 0LL;
                if ( !*(_DWORD *)(v192 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v188, v187, v189, v190);
                v195 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v195 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v194, v193, v196, v197);
                ExReleaseResourceAndLeaveCriticalRegion(*v195);
                HMUnlockObject(*(_QWORD *)v191);
                tagDomLock::LockExclusive((tagDomLock *)v195);
                v191 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v367);
          }
          dword_1C024B160 = a4[4];
          goto LABEL_189;
        }
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
        {
          v198 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( v198 )
            v198[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v392, 1);
          v199 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v392);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v199;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v368);
            v204 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v204 + 2);
                v205 = *(_QWORD *)v204;
                *((_QWORD *)v204 + 2) = 0LL;
                if ( !*(_DWORD *)(v205 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v201, v200, v202, v203);
                v208 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v208 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v207, v206, v209, v210);
                ExReleaseResourceAndLeaveCriticalRegion(*v208);
                HMUnlockObject(*(_QWORD *)v204);
                tagDomLock::LockExclusive((tagDomLock *)v208);
                v204 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v368);
          }
          dword_1C024B158 = a4[4];
          goto LABEL_189;
        }
        if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 == *((_QWORD *)a4 + 1) )
        {
          v211 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( v211 )
            v211[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v393, 1);
          v212 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v393);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v212;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v369);
            v221 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v221 + 2);
                v222 = *(_QWORD *)v221;
                *((_QWORD *)v221 + 2) = 0LL;
                if ( !*(_DWORD *)(v222 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v218, v217, v219, v220);
                v225 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v225 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v224, v223, v226, v227);
                ExReleaseResourceAndLeaveCriticalRegion(*v225);
                HMUnlockObject(*(_QWORD *)v221);
                tagDomLock::LockExclusive((tagDomLock *)v225);
                v221 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v369);
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v214, v213, v215, v216);
          dword_1C024B168 = a4[4];
          goto LABEL_189;
        }
        if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1)
          || *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1) )
        {
          v228 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( v228 )
            v228[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v394, 1);
          v229 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v394);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v229;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v370);
            v234 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v234 + 2);
                v235 = *(_QWORD *)v234;
                *((_QWORD *)v234 + 2) = 0LL;
                if ( !*(_DWORD *)(v235 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v231, v230, v232, v233);
                v238 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v238 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v237, v236, v239, v240);
                ExReleaseResourceAndLeaveCriticalRegion(*v238);
                HMUnlockObject(*(_QWORD *)v234);
                tagDomLock::LockExclusive((tagDomLock *)v238);
                v234 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v370);
          }
          if ( gSqmIsOptedIn && !gProtocolType )
            SqmPowerState();
          dword_1C024B1A8 = a4[4] == 0;
          if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1)
            || gbTtmEnabled
            || gProtocolType )
          {
            goto LABEL_189;
          }
          v241 = MonitorRequestReasonAcDcDisplayBurst;
        }
        else
        {
          if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
          {
            if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
            {
              v255 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
              if ( v255 )
                v255[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v396, 1);
              v256 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v396);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v256;
              gbValidateHandleForIL = 1;
              if ( (unsigned int)IsValidGuiThreadContext() )
              {
                CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v372);
                v261 = gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v261 + 2);
                    v262 = *(_QWORD *)v261;
                    *((_QWORD *)v261 + 2) = 0LL;
                    if ( !*(_DWORD *)(v262 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v258, v257, v259, v260);
                    v265 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v265 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v264, v263, v266, v267);
                    ExReleaseResourceAndLeaveCriticalRegion(*v265);
                    HMUnlockObject(*(_QWORD *)v261);
                    tagDomLock::LockExclusive((tagDomLock *)v265);
                    v261 = gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v11 = 0;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v372);
              }
              LOBYTE(v7) = a4[4] != 0;
              dword_1C024B1CC = v7;
              goto LABEL_189;
            }
            if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 != *(_QWORD *)a4
              || *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 != *((_QWORD *)a4 + 1) )
            {
              if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v284 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v284 )
                  v284[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v398, 1);
                v285 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v398);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v285;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v374);
                  v290 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v290 + 2);
                      v291 = *(_QWORD *)v290;
                      *((_QWORD *)v290 + 2) = 0LL;
                      if ( !*(_DWORD *)(v291 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v287, v286, v288, v289);
                      v294 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v294 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v293, v292, v295, v296);
                      ExReleaseResourceAndLeaveCriticalRegion(*v294);
                      HMUnlockObject(*(_QWORD *)v290);
                      tagDomLock::LockExclusive((tagDomLock *)v294);
                      v290 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v374);
                }
                dword_1C024B1C4 = a4[4];
                goto LABEL_189;
              }
              if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v297 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v297 )
                  v297[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v399, 1);
                v298 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v399);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v298;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v375);
                  v303 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v303 + 2);
                      v304 = *(_QWORD *)v303;
                      *((_QWORD *)v303 + 2) = 0LL;
                      if ( !*(_DWORD *)(v304 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v300, v299, v301, v302);
                      v307 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v307 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v306, v305, v308, v309);
                      ExReleaseResourceAndLeaveCriticalRegion(*v307);
                      HMUnlockObject(*(_QWORD *)v303);
                      tagDomLock::LockExclusive((tagDomLock *)v307);
                      v303 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v375);
                }
                dword_1C024B16C = a4[4];
                goto LABEL_189;
              }
              if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v310 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v310 )
                  v310[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v400, 1);
                v311 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v400);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v311;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v376);
                  v316 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v316 + 2);
                      v317 = *(_QWORD *)v316;
                      *((_QWORD *)v316 + 2) = 0LL;
                      if ( !*(_DWORD *)(v317 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v313, v312, v314, v315);
                      v320 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v320 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v319, v318, v321, v322);
                      ExReleaseResourceAndLeaveCriticalRegion(*v320);
                      HMUnlockObject(*(_QWORD *)v316);
                      tagDomLock::LockExclusive((tagDomLock *)v320);
                      v316 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v376);
                }
                dword_1C024B1C8 = a4[4];
                goto LABEL_189;
              }
              if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
              {
                if ( !a4[4] )
                  return v11;
                v323 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v323 )
                  v323[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v401, 1);
                v324 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v401);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v324;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v377);
                  v329 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v329 + 2);
                      v330 = *(_QWORD *)v329;
                      *((_QWORD *)v329 + 2) = 0LL;
                      if ( !*(_DWORD *)(v330 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v326, v325, v327, v328);
                      v333 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v333 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v332, v331, v334, v335);
                      ExReleaseResourceAndLeaveCriticalRegion(*v333);
                      HMUnlockObject(*(_QWORD *)v329);
                      tagDomLock::LockExclusive((tagDomLock *)v333);
                      v329 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v377);
                }
                gdwUpdateKeyboard |= 2u;
                goto LABEL_189;
              }
              if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 == *((_QWORD *)a4 + 1) )
              {
                v336 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v336 )
                  v336[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v402, 1);
                v337 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v402);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v337;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v378);
                  v342 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v342 + 2);
                      v343 = *(_QWORD *)v342;
                      *((_QWORD *)v342 + 2) = 0LL;
                      if ( !*(_DWORD *)(v343 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v339, v338, v340, v341);
                      v346 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v346 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v345, v344, v347, v348);
                      ExReleaseResourceAndLeaveCriticalRegion(*v346);
                      HMUnlockObject(*(_QWORD *)v342);
                      tagDomLock::LockExclusive((tagDomLock *)v346);
                      v342 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v378);
                }
                v351 = (tagDomLock *)GetDomainLockRef(13LL);
                if ( v351 == (tagDomLock *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v350, v349, v352, v353);
                tagDomLock::LockExclusive(v351);
                dword_1C024B1D0 = a4[4] != 0;
                UserLogError((unsigned int)(-(unsigned __int8)dword_1C024B1D0 - 2147482947));
                CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
                ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v351);
                goto LABEL_189;
              }
              return (unsigned int)-1073741823;
            }
            v268 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
            if ( v268 )
              v268[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v397, 1);
            v269 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v397);
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v269;
            gbValidateHandleForIL = 1;
            if ( (unsigned int)IsValidGuiThreadContext() )
            {
              CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v373);
              v277 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v277 + 2);
                  v278 = *(_QWORD *)v277;
                  *((_QWORD *)v277 + 2) = 0LL;
                  if ( !*(_DWORD *)(v278 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v274, v273, v275, v276);
                  v281 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v281 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v280, v279, v282, v283);
                  ExReleaseResourceAndLeaveCriticalRegion(*v281);
                  HMUnlockObject(*(_QWORD *)v277);
                  tagDomLock::LockExclusive((tagDomLock *)v281);
                  v277 = gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v373);
            }
            if ( !a4[4] )
            {
              dword_1C024B19C = 0;
              goto LABEL_189;
            }
            if ( gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v270, v271, v272);
            dword_1C024B19C = 1;
            LODWORD(v356) = 5;
            *((_QWORD *)&v356 + 1) = 13LL;
            goto LABEL_75;
          }
          v242 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
          if ( v242 )
            v242[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v395, 1);
          v243 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v395);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v243;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v371);
            v248 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v248 + 2);
                v249 = *(_QWORD *)v248;
                *((_QWORD *)v248 + 2) = 0LL;
                if ( !*(_DWORD *)(v249 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v245, v244, v246, v247);
                v252 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v252 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v251, v250, v253, v254);
                ExReleaseResourceAndLeaveCriticalRegion(*v252);
                HMUnlockObject(*(_QWORD *)v248);
                tagDomLock::LockExclusive((tagDomLock *)v252);
                v248 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v371);
          }
          if ( gbTtmEnabled || gProtocolType || dword_1C024B1A8 )
            goto LABEL_189;
          v241 = MonitorRequestReasonBatteryCountChange;
        }
        PowerDisplayBurst(v241);
        goto LABEL_189;
      }
      v172 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v172 )
        v172[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v390, 1);
      v173 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v390);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v173;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v366);
        v178 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v178 + 2);
            v179 = *(_QWORD *)v178;
            *((_QWORD *)v178 + 2) = 0LL;
            if ( !*(_DWORD *)(v179 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v175, v174, v176, v177);
            v182 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v182 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v181, v180, v183, v184);
            ExReleaseResourceAndLeaveCriticalRegion(*v182);
            HMUnlockObject(*(_QWORD *)v178);
            tagDomLock::LockExclusive((tagDomLock *)v182);
            v178 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v366);
      }
      giDimTimeOutMs = 1000 * a4[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_189;
  }
  v26 = v10 - 1;
  if ( !v26 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( v9 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v116 = *(_BYTE *)a4;
    v117 = *((_BYTE *)a4 + 1);
    v118 = a4[1];
    v119 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v119 )
      v119[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v386, 1);
    v120 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v386);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v120;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v362);
      v125 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v125 + 2);
          v126 = *(_QWORD *)v125;
          *((_QWORD *)v125 + 2) = 0LL;
          if ( !*(_DWORD *)(v126 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v122, v121, v123, v124);
          v129 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v129 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v128, v127, v130, v131);
          ExReleaseResourceAndLeaveCriticalRegion(*v129);
          HMUnlockObject(*(_QWORD *)v125);
          tagDomLock::LockExclusive((tagDomLock *)v129);
          v125 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v362);
    }
    if ( v116 && gbBlockSendInputResets )
      goto LABEL_189;
    v132 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    CInputGlobals::UpdateLastInputTime(gpInputGlobals, v132, 5LL);
    CitLastInputUpdate(5LL, (unsigned int)v132, 0LL, 0LL);
    if ( v117 )
      goto LABEL_189;
    if ( dword_1C024B1A0 )
    {
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput((unsigned int)v118);
      goto LABEL_189;
    }
    LODWORD(v356) = 4;
    *((_QWORD *)&v356 + 1) = v118;
    goto LABEL_75;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( v9 != 4 || !a4 || a5 != 4 || !v6 )
      return (unsigned int)-1073741811;
    v97 = *a4;
    v98 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v98 )
      v98[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v385, 1);
    v99 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v385);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v99;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v361);
      v104 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v104 + 2);
          v105 = *(_QWORD *)v104;
          *((_QWORD *)v104 + 2) = 0LL;
          if ( !*(_DWORD *)(v105 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v101, v100, v102, v103);
          v108 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v108 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v107, v106, v109, v110);
          ExReleaseResourceAndLeaveCriticalRegion(*v108);
          HMUnlockObject(*(_QWORD *)v104);
          tagDomLock::LockExclusive((tagDomLock *)v108);
          v104 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v361);
    }
    v111 = dword_1C024B148;
    v112 = dword_1C024B148 + v97;
    dword_1C024B148 += v97;
    if ( v111 == 1 )
    {
      v113 = v112 == 0;
      v114 = v112 < 0;
      if ( v112 )
        goto LABEL_165;
      CitDisplayRequestChange(0);
      EtwTraceDisplayReqChange(0LL);
      if ( !gbBlockSendInputResets )
        CInputGlobals::UpdateLastInputTime(
          gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          10LL);
    }
    else if ( !v111 && v112 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange(1LL);
    }
    v113 = v112 == 0;
    v114 = v112 < 0;
LABEL_165:
    v355 = !v114 && !v113;
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v355, 1LL, 0LL, &gSessionId, 0, 0);
    UserSessionSwitchLeaveCrit(v115);
    if ( !v111 && v112 == 1 && dword_1C024B150 == 2 )
    {
      LODWORD(v356) = 4;
      *((_QWORD *)&v356 + 1) = 48LL;
      QueuePowerRequest(&v356, 0LL);
    }
    if ( v112 >= 0 )
      v7 = v112;
    *v6 = v7;
    return v11;
  }
  v28 = v27 - 1;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            if ( v32 == 1 )
            {
              if ( !gbTtmEnabled )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
              if ( v9 == 1 && a4 && !a5 && !v6 )
              {
                v33 = *(_BYTE *)a4 != 0;
                v34 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                if ( v34 )
                  v34[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v381, 1);
                v35 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v381);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v35;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v357);
                  v40 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v40 + 2);
                      v41 = *(_QWORD *)v40;
                      *((_QWORD *)v40 + 2) = 0LL;
                      if ( !*(_DWORD *)(v41 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38, v39);
                      v44 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v44 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42, v45, v46);
                      ExReleaseResourceAndLeaveCriticalRegion(*v44);
                      HMUnlockObject(*(_QWORD *)v40);
                      tagDomLock::LockExclusive((tagDomLock *)v44);
                      v40 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v357);
                }
                CitDisplayRequestChange(v33);
                EtwTraceDisplayReqChange(v33);
                goto LABEL_189;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
          if ( v9 != 4 || !a4 )
            return (unsigned int)-1073741823;
          LOBYTE(a2) = 1;
          *((_QWORD *)&v356 + 1) = *a4;
          LODWORD(v356) = 15;
LABEL_50:
          QueuePowerRequest(&v356, a2);
          return v11;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
        if ( v9 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v356 + 1) = a4[1];
        LODWORD(v356) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v356) = 13;
LABEL_57:
        a2 = 0LL;
        goto LABEL_50;
      }
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v48 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v48 )
        v48[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v382, 1);
      v49 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v382);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v49;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v358);
        v57 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v57 + 2);
            v58 = *(_QWORD *)v57;
            *((_QWORD *)v57 + 2) = 0LL;
            if ( !*(_DWORD *)(v58 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v54, v53, v55, v56);
            v61 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v61 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v60, v59, v62, v63);
            ExReleaseResourceAndLeaveCriticalRegion(*v61);
            HMUnlockObject(*(_QWORD *)v57);
            tagDomLock::LockExclusive((tagDomLock *)v61);
            v57 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v358);
      }
      if ( !gWakeInProgress )
        goto LABEL_189;
      v64 = gWakeInProgressReason;
      gWakeInProgressReason = MonitorRequestReasonUnknown;
      gWakeInProgress = 0;
      if ( gnPoSessionSwitchBlockCount < 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v50, v51, v52);
      LODWORD(v356) = 12;
      *((_QWORD *)&v356 + 1) = v64;
      goto LABEL_75;
    }
    if ( v9 == 32 && a4 )
    {
      v65 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v65 )
        v65[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v383, 1);
      v66 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v383);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v66;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v359);
        v71 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v71 + 2);
            v72 = *(_QWORD *)v71;
            *((_QWORD *)v71 + 2) = 0LL;
            if ( !*(_DWORD *)(v72 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v69, v70);
            v75 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v75 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v74, v73, v76, v77);
            ExReleaseResourceAndLeaveCriticalRegion(*v75);
            HMUnlockObject(*(_QWORD *)v71);
            tagDomLock::LockExclusive((tagDomLock *)v75);
            v71 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v359);
      }
      dword_1C024B174 = *a4;
      v78 = (unsigned int)a4[1];
      dword_1C024B178 = a4[1];
      dword_1C024B17C = a4[2];
      dword_1C024B180 = a4[3];
      dword_1C024B184 = a4[4];
      dword_1C024B188 = a4[5];
      dword_1C024B18C = a4[6];
      dword_1C024B190 = a4[7];
      if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v78 != -1 )
      {
        if ( qword_1C024AAC8 )
        {
          LOBYTE(v78) = 1;
          v11 = qword_1C024AAC8(v78, a4);
        }
        else
        {
          v11 = -1073741637;
        }
        LOBYTE(v7) = (v11 & 0x80000000) == 0;
        gbPowerHighPrecisionBrightnessSupported = v7;
      }
      v47 = (unsigned int)dword_1C024B174;
      dword_1C024B158 = dword_1C024B174;
      dword_1C024B15C = dword_1C024B174;
      dword_1C024B160 = dword_1C024B184;
      dword_1C024B164 = dword_1C024B184;
      if ( dword_1C024B150 == 1 )
      {
        if ( dword_1C024B170 == dword_1C024B174 )
          goto LABEL_189;
        LODWORD(v356) = 11;
        *((_QWORD *)&v356 + 1) = 1LL;
        QueuePowerRequest(&v356, 0LL);
      }
      if ( dword_1C024B150 != 2 || dword_1C024B170 == dword_1C024B184 )
        goto LABEL_189;
      LODWORD(v356) = 11;
      *((_QWORD *)&v356 + 1) = 2LL;
LABEL_75:
      QueuePowerRequest(&v356, 0LL);
LABEL_189:
      UserSessionSwitchLeaveCrit(v47);
      return v11;
    }
    return (unsigned int)-1073741811;
  }
  if ( gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v9 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v79 = (unsigned int)*a4;
  v80 = 0;
  v81 = 0;
  if ( (_DWORD)v79 )
  {
    v82 = (unsigned int)(v79 - 1);
    if ( !(_DWORD)v82 )
    {
      v81 = 1;
LABEL_128:
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5LL);
      goto LABEL_129;
    }
    if ( (_DWORD)v82 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, a2, a3, a4);
      return v11;
    }
    v83 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v83 )
      v83[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v384, 1);
    v84 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v384);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v84;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v360);
      v90 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v90 + 2);
          v91 = *(_QWORD *)v90;
          *((_QWORD *)v90 + 2) = 0LL;
          if ( !*(_DWORD *)(v91 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v87, v86, v88, v89);
          v94 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v94 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v93, v92, v95, v96);
          ExReleaseResourceAndLeaveCriticalRegion(*v94);
          HMUnlockObject(*(_QWORD *)v90);
          tagDomLock::LockExclusive((tagDomLock *)v94);
          v90 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v360);
    }
    if ( gPowerTransitionsState )
      v11 = 255;
    else
      v81 = 1;
    UserSessionSwitchLeaveCrit(v85);
  }
  else
  {
    v80 = 1;
  }
  if ( v81 )
    goto LABEL_128;
LABEL_129:
  if ( !v80 )
  {
    if ( !v81 )
      return v11;
    goto LABEL_138;
  }
  if ( !gSystemIsAoAc )
  {
LABEL_134:
    if ( !v81 )
    {
      LODWORD(v356) = 5;
LABEL_139:
      *((_QWORD *)&v356 + 1) = a4[1];
      goto LABEL_57;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v79, a2, a3, a4);
LABEL_138:
    LODWORD(v356) = 4;
    goto LABEL_139;
  }
  if ( gPowerTransitionsState || qword_1C024B1AC )
  {
    SetInputMode(1LL);
    goto LABEL_134;
  }
  return v11;
}
