/*
 * XREFs of UserPowerInfoCallout @ 0x1C0066874
 * Callers:
 *     W32CalloutDispatch @ 0x1C0065BE0 (W32CalloutDispatch.c)
 * Callees:
 *     EtwTraceDisplayReqChange @ 0x1C005E9BC (EtwTraceDisplayReqChange.c)
 *     SqmPowerState @ 0x1C00611A0 (SqmPowerState.c)
 *     CitDisplayRequestChange @ 0x1C00615A0 (CitDisplayRequestChange.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00616A0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     CitLastInputUpdate @ 0x1C0061BD0 (CitLastInputUpdate.c)
 *     SetPendingInput @ 0x1C0062000 (SetPendingInput.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00630F0 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     QueuePowerRequest @ 0x1C0064F40 (QueuePowerRequest.c)
 *     HMUnlockObject @ 0x1C0087E70 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C008B5C0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0091650 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00918C0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     IsValidGuiThreadContext @ 0x1C0092A5C (IsValidGuiThreadContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0092B88 (EnterCritAvoidingDitHitTestHazard.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0093EA8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled @ 0x1C00CE9B8 (Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C011F470 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011F784 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C013E170 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01A0E58 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C01F807C (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     ModerncoreUserPowerInfoCallout @ 0x1C01F81DC (ModerncoreUserPowerInfoCallout.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  BOOL v33; // r15d
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
  __int64 v47; // rdx
  int v48; // r8d
  __int64 v49; // rcx
  char v50; // dl
  LARGE_INTEGER *v51; // rbx
  struct tagTHREADINFO *v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  struct tagKERNELHANDLETABLEENTRY *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  PERESOURCE *v64; // rbx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rbx
  LARGE_INTEGER *v68; // rbx
  struct tagTHREADINFO *v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  struct tagKERNELHANDLETABLEENTRY *v74; // r15
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  PERESOURCE *v78; // rbx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // rcx
  char v83; // r13
  char v84; // r12
  __int64 v85; // rcx
  LARGE_INTEGER *v86; // rbx
  struct tagTHREADINFO *v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  struct tagKERNELHANDLETABLEENTRY *v93; // r15
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  PERESOURCE *v97; // rbx
  __int64 v98; // r8
  __int64 v99; // r9
  int v100; // r15d
  LARGE_INTEGER *v101; // rbx
  struct tagTHREADINFO *v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  struct tagKERNELHANDLETABLEENTRY *v107; // rsi
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  PERESOURCE *v111; // rbx
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // esi
  int v115; // ebx
  bool v116; // zf
  bool v117; // sf
  __int64 v118; // rdx
  int v119; // r8d
  __int64 v120; // rdx
  int v121; // r8d
  __int64 v122; // rcx
  char v123; // r12
  char v124; // r13
  __int64 v125; // r15
  LARGE_INTEGER *v126; // rbx
  struct tagTHREADINFO *v127; // rbx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  struct tagKERNELHANDLETABLEENTRY *v132; // rsi
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  PERESOURCE *v136; // rbx
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rbx
  LARGE_INTEGER *v140; // rbx
  struct tagTHREADINFO *v141; // rbx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  struct tagKERNELHANDLETABLEENTRY *v146; // r15
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  PERESOURCE *v150; // rbx
  __int64 v151; // r8
  __int64 v152; // r9
  LARGE_INTEGER *v153; // rbx
  struct tagTHREADINFO *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  struct tagKERNELHANDLETABLEENTRY *v159; // r15
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  PERESOURCE *v163; // rbx
  __int64 v164; // r8
  __int64 v165; // r9
  LARGE_INTEGER *v166; // rbx
  struct tagTHREADINFO *v167; // rbx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  struct tagKERNELHANDLETABLEENTRY *v172; // r15
  __int64 v173; // rax
  __int64 v174; // rdx
  __int64 v175; // rcx
  PERESOURCE *v176; // rbx
  __int64 v177; // r8
  __int64 v178; // r9
  LARGE_INTEGER *v179; // rbx
  struct tagTHREADINFO *v180; // rbx
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  struct tagKERNELHANDLETABLEENTRY *v185; // r15
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  PERESOURCE *v189; // rbx
  __int64 v190; // r8
  __int64 v191; // r9
  LARGE_INTEGER *v192; // rbx
  struct tagTHREADINFO *v193; // rbx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  struct tagKERNELHANDLETABLEENTRY *v198; // r15
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  PERESOURCE *v202; // rbx
  __int64 v203; // r8
  __int64 v204; // r9
  LARGE_INTEGER *v205; // rbx
  struct tagTHREADINFO *v206; // rbx
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  __int64 v210; // r9
  struct tagKERNELHANDLETABLEENTRY *v211; // r15
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  PERESOURCE *v215; // rbx
  __int64 v216; // r8
  __int64 v217; // r9
  LARGE_INTEGER *v218; // rbx
  struct tagTHREADINFO *v219; // rbx
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  struct tagKERNELHANDLETABLEENTRY *v228; // r15
  __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rcx
  PERESOURCE *v232; // rbx
  __int64 v233; // r8
  __int64 v234; // r9
  LARGE_INTEGER *v235; // rbx
  struct tagTHREADINFO *v236; // rbx
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  __int64 v240; // r9
  struct tagKERNELHANDLETABLEENTRY *v241; // r15
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  PERESOURCE *v245; // rbx
  __int64 v246; // r8
  __int64 v247; // r9
  enum POWER_MONITOR_REQUEST_REASON v248; // ecx
  LARGE_INTEGER *v249; // rbx
  struct tagTHREADINFO *v250; // rbx
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // r9
  struct tagKERNELHANDLETABLEENTRY *v255; // rsi
  __int64 v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rcx
  PERESOURCE *v259; // rbx
  __int64 v260; // r8
  __int64 v261; // r9
  LARGE_INTEGER *v262; // rbx
  struct tagTHREADINFO *v263; // rbx
  __int64 v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  struct tagKERNELHANDLETABLEENTRY *v268; // r15
  __int64 v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rcx
  PERESOURCE *v272; // rbx
  __int64 v273; // r8
  __int64 v274; // r9
  LARGE_INTEGER *v275; // rbx
  struct tagTHREADINFO *v276; // rbx
  __int64 v277; // rdx
  __int64 v278; // r8
  __int64 v279; // r9
  __int64 v280; // rdx
  __int64 v281; // rcx
  __int64 v282; // r8
  __int64 v283; // r9
  struct tagKERNELHANDLETABLEENTRY *v284; // r15
  __int64 v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rcx
  PERESOURCE *v288; // rbx
  __int64 v289; // r8
  __int64 v290; // r9
  LARGE_INTEGER *v291; // rbx
  struct tagTHREADINFO *v292; // rbx
  __int64 v293; // rdx
  __int64 v294; // rcx
  __int64 v295; // r8
  __int64 v296; // r9
  struct tagKERNELHANDLETABLEENTRY *v297; // r15
  __int64 v298; // rax
  __int64 v299; // rdx
  __int64 v300; // rcx
  PERESOURCE *v301; // rbx
  __int64 v302; // r8
  __int64 v303; // r9
  LARGE_INTEGER *v304; // rbx
  struct tagTHREADINFO *v305; // rbx
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  struct tagKERNELHANDLETABLEENTRY *v310; // r15
  __int64 v311; // rax
  __int64 v312; // rdx
  __int64 v313; // rcx
  PERESOURCE *v314; // rbx
  __int64 v315; // r8
  __int64 v316; // r9
  LARGE_INTEGER *v317; // rbx
  struct tagTHREADINFO *v318; // rbx
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // r8
  __int64 v322; // r9
  struct tagKERNELHANDLETABLEENTRY *v323; // r15
  __int64 v324; // rax
  __int64 v325; // rdx
  __int64 v326; // rcx
  PERESOURCE *v327; // rbx
  __int64 v328; // r8
  __int64 v329; // r9
  LARGE_INTEGER *v330; // rbx
  struct tagTHREADINFO *v331; // rbx
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  __int64 v335; // r9
  struct tagKERNELHANDLETABLEENTRY *v336; // rsi
  __int64 v337; // rax
  __int64 v338; // rdx
  __int64 v339; // rcx
  PERESOURCE *v340; // rbx
  __int64 v341; // r8
  __int64 v342; // r9
  LARGE_INTEGER *v343; // rbx
  struct tagTHREADINFO *v344; // rbx
  __int64 v345; // rdx
  __int64 v346; // rcx
  __int64 v347; // r8
  __int64 v348; // r9
  struct tagKERNELHANDLETABLEENTRY *v349; // r15
  __int64 v350; // rax
  __int64 v351; // rdx
  __int64 v352; // rcx
  PERESOURCE *v353; // rbx
  __int64 v354; // r8
  __int64 v355; // r9
  __int64 v356; // rdx
  __int64 v357; // rcx
  tagDomLock *v358; // rbx
  __int64 v359; // r8
  __int64 v360; // r9
  bool v362; // [rsp+4Ch] [rbp-BCh] BYREF
  __int128 v363; // [rsp+50h] [rbp-B8h] BYREF
  PERESOURCE *v364; // [rsp+60h] [rbp-A8h] BYREF
  PERESOURCE *v365; // [rsp+68h] [rbp-A0h] BYREF
  PERESOURCE *v366; // [rsp+70h] [rbp-98h] BYREF
  PERESOURCE *v367; // [rsp+78h] [rbp-90h] BYREF
  PERESOURCE *v368; // [rsp+80h] [rbp-88h] BYREF
  PERESOURCE *v369; // [rsp+88h] [rbp-80h] BYREF
  PERESOURCE *v370; // [rsp+90h] [rbp-78h] BYREF
  PERESOURCE *v371; // [rsp+98h] [rbp-70h] BYREF
  PERESOURCE *v372; // [rsp+A0h] [rbp-68h] BYREF
  PERESOURCE *v373; // [rsp+A8h] [rbp-60h] BYREF
  PERESOURCE *v374; // [rsp+B0h] [rbp-58h] BYREF
  PERESOURCE *v375; // [rsp+B8h] [rbp-50h] BYREF
  PERESOURCE *v376; // [rsp+C0h] [rbp-48h] BYREF
  PERESOURCE *v377; // [rsp+C8h] [rbp-40h] BYREF
  PERESOURCE *v378; // [rsp+D0h] [rbp-38h] BYREF
  PERESOURCE *v379; // [rsp+D8h] [rbp-30h] BYREF
  PERESOURCE *v380; // [rsp+E0h] [rbp-28h] BYREF
  PERESOURCE *v381; // [rsp+E8h] [rbp-20h] BYREF
  PERESOURCE *v382; // [rsp+F0h] [rbp-18h] BYREF
  PERESOURCE *v383; // [rsp+F8h] [rbp-10h] BYREF
  PERESOURCE *v384; // [rsp+100h] [rbp-8h] BYREF
  PERESOURCE *v385; // [rsp+108h] [rbp+0h] BYREF
  PERESOURCE *v386; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v387[32]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v388[32]; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v389[32]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v390[32]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v391[32]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v392[32]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v393[32]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v394[32]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v395[32]; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v396[32]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v397[32]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v398[32]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v399[32]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v400[32]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v401[32]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v402[32]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v403[32]; // [rsp+318h] [rbp+210h] BYREF
  _BYTE v404[32]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v405[32]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v406[32]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v407[32]; // [rsp+398h] [rbp+290h] BYREF
  _BYTE v408[32]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _BYTE v409[32]; // [rsp+3D8h] [rbp+2D0h] BYREF

  v6 = a6;
  v7 = 0;
  v364 = (PERESOURCE *)a6;
  v9 = a3;
  v10 = a1;
  v11 = 0;
  v363 = 0LL;
  if ( !gbPowerCalloutsReady )
    return (unsigned int)-1073741823;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_17;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v387, 1);
    v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v387);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v386);
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
      ExReleaseResourceAndLeaveCriticalRegion(*v386);
      v6 = v364;
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
      v140 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v140 )
        v140[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v394, 1);
      v141 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v394);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v141;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v370);
        v146 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v146 + 2);
            v147 = *(_QWORD *)v146;
            *((_QWORD *)v146 + 2) = 0LL;
            if ( !*(_DWORD *)(v147 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v143, v142, v144, v145);
            v150 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v150 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v149, v148, v151, v152);
            ExReleaseResourceAndLeaveCriticalRegion(*v150);
            HMUnlockObject(*(_QWORD *)v146);
            tagDomLock::LockExclusive((tagDomLock *)v150);
            v146 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v370);
      }
      if ( gProtocolType )
        goto LABEL_190;
      giPowerOffTimeOutMs = 1000 * a4[4];
    }
    else if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
           && *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v153 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v153 )
        v153[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v395, 1);
      v154 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v395);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v154;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v371);
        v159 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v159 + 2);
            v160 = *(_QWORD *)v159;
            *((_QWORD *)v159 + 2) = 0LL;
            if ( !*(_DWORD *)(v160 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v156, v155, v157, v158);
            v163 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v163 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v162, v161, v164, v165);
            ExReleaseResourceAndLeaveCriticalRegion(*v163);
            HMUnlockObject(*(_QWORD *)v159);
            tagDomLock::LockExclusive((tagDomLock *)v163);
            v159 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v371);
      }
      if ( !gProtocolType || !dword_1C024B1B4 )
        goto LABEL_190;
      giPowerSessionActivityTimeOutMs = 1000 * a4[4];
    }
    else if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)a4
           && *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 == *((_QWORD *)a4 + 1) )
    {
      v166 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v166 )
        v166[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v396, 1);
      v167 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v396);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v167;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v372);
        v172 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v172 + 2);
            v173 = *(_QWORD *)v172;
            *((_QWORD *)v172 + 2) = 0LL;
            if ( !*(_DWORD *)(v173 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v169, v168, v170, v171);
            v176 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v176 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v175, v174, v177, v178);
            ExReleaseResourceAndLeaveCriticalRegion(*v176);
            HMUnlockObject(*(_QWORD *)v172);
            tagDomLock::LockExclusive((tagDomLock *)v176);
            v172 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v372);
      }
      if ( gProtocolType )
        goto LABEL_190;
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
          v192 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v192 )
            v192[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v398, 1);
          v193 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v398);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v193;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v374);
            v198 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v198 + 2);
                v199 = *(_QWORD *)v198;
                *((_QWORD *)v198 + 2) = 0LL;
                if ( !*(_DWORD *)(v199 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v195, v194, v196, v197);
                v202 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v202 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v201, v200, v203, v204);
                ExReleaseResourceAndLeaveCriticalRegion(*v202);
                HMUnlockObject(*(_QWORD *)v198);
                tagDomLock::LockExclusive((tagDomLock *)v202);
                v198 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v374);
          }
          dword_1C024D150 = a4[4];
          goto LABEL_190;
        }
        if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
        {
          v205 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v205 )
            v205[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v399, 1);
          v206 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v399);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v206;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v375);
            v211 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v211 + 2);
                v212 = *(_QWORD *)v211;
                *((_QWORD *)v211 + 2) = 0LL;
                if ( !*(_DWORD *)(v212 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v208, v207, v209, v210);
                v215 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v215 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v214, v213, v216, v217);
                ExReleaseResourceAndLeaveCriticalRegion(*v215);
                HMUnlockObject(*(_QWORD *)v211);
                tagDomLock::LockExclusive((tagDomLock *)v215);
                v211 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v375);
          }
          dword_1C024D148 = a4[4];
          goto LABEL_190;
        }
        if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 == *((_QWORD *)a4 + 1) )
        {
          v218 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v218 )
            v218[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v400, 1);
          v219 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v400);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v219;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v376);
            v228 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v228 + 2);
                v229 = *(_QWORD *)v228;
                *((_QWORD *)v228 + 2) = 0LL;
                if ( !*(_DWORD *)(v229 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v225, v224, v226, v227);
                v232 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v232 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v231, v230, v233, v234);
                ExReleaseResourceAndLeaveCriticalRegion(*v232);
                HMUnlockObject(*(_QWORD *)v228);
                tagDomLock::LockExclusive((tagDomLock *)v232);
                v228 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v376);
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v221, v220, v222, v223);
          dword_1C024D158 = a4[4];
          goto LABEL_190;
        }
        if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 == *((_QWORD *)a4 + 1)
          || *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
          && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1) )
        {
          v235 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v235 )
            v235[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v401, 1);
          v236 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v401);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v236;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v377);
            v241 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v241 + 2);
                v242 = *(_QWORD *)v241;
                *((_QWORD *)v241 + 2) = 0LL;
                if ( !*(_DWORD *)(v242 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v238, v237, v239, v240);
                v245 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v245 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v244, v243, v246, v247);
                ExReleaseResourceAndLeaveCriticalRegion(*v245);
                HMUnlockObject(*(_QWORD *)v241);
                tagDomLock::LockExclusive((tagDomLock *)v245);
                v241 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v377);
          }
          if ( gSqmIsOptedIn && !gProtocolType )
            SqmPowerState();
          dword_1C024D198 = a4[4] == 0;
          if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)a4
            && *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 == *((_QWORD *)a4 + 1)
            || gbTtmEnabled
            || gProtocolType )
          {
            goto LABEL_190;
          }
          v248 = MonitorRequestReasonAcDcDisplayBurst;
        }
        else
        {
          if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 != *(_QWORD *)a4
            || *(_QWORD *)GUID_BATTERY_COUNT.Data4 != *((_QWORD *)a4 + 1) )
          {
            if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)a4
              && *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 == *((_QWORD *)a4 + 1) )
            {
              v262 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
              if ( v262 )
                v262[1] = KeQueryPerformanceCounter(0LL);
              InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v403, 1);
              v263 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
              InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v403);
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v263;
              gbValidateHandleForIL = 1;
              if ( (unsigned int)IsValidGuiThreadContext() )
              {
                CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v379);
                v268 = gpducstulHead;
                if ( gpducstulHead )
                {
                  do
                  {
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v268 + 2);
                    v269 = *(_QWORD *)v268;
                    *((_QWORD *)v268 + 2) = 0LL;
                    if ( !*(_DWORD *)(v269 + 8) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v265, v264, v266, v267);
                    v272 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v272 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v271, v270, v273, v274);
                    ExReleaseResourceAndLeaveCriticalRegion(*v272);
                    HMUnlockObject(*(_QWORD *)v268);
                    tagDomLock::LockExclusive((tagDomLock *)v272);
                    v268 = gpducstulHead;
                  }
                  while ( gpducstulHead );
                  v11 = 0;
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v379);
              }
              LOBYTE(v7) = a4[4] != 0;
              dword_1C024D1BC = v7;
              goto LABEL_190;
            }
            if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 != *(_QWORD *)a4
              || *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 != *((_QWORD *)a4 + 1) )
            {
              if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v291 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v291 )
                  v291[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v405, 1);
                v292 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v405);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v292;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v381);
                  v297 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v297 + 2);
                      v298 = *(_QWORD *)v297;
                      *((_QWORD *)v297 + 2) = 0LL;
                      if ( !*(_DWORD *)(v298 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v294, v293, v295, v296);
                      v301 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v301 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v300, v299, v302, v303);
                      ExReleaseResourceAndLeaveCriticalRegion(*v301);
                      HMUnlockObject(*(_QWORD *)v297);
                      tagDomLock::LockExclusive((tagDomLock *)v301);
                      v297 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v381);
                }
                dword_1C024D1B4 = a4[4];
                goto LABEL_190;
              }
              if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v304 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v304 )
                  v304[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v406, 1);
                v305 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v406);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v305;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v382);
                  v310 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v310 + 2);
                      v311 = *(_QWORD *)v310;
                      *((_QWORD *)v310 + 2) = 0LL;
                      if ( !*(_DWORD *)(v311 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v307, v306, v308, v309);
                      v314 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v314 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v313, v312, v315, v316);
                      ExReleaseResourceAndLeaveCriticalRegion(*v314);
                      HMUnlockObject(*(_QWORD *)v310);
                      tagDomLock::LockExclusive((tagDomLock *)v314);
                      v310 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v382);
                }
                dword_1C024D15C = a4[4];
                goto LABEL_190;
              }
              if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 == *((_QWORD *)a4 + 1) )
              {
                v317 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v317 )
                  v317[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v407, 1);
                v318 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v407);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v318;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v383);
                  v323 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v323 + 2);
                      v324 = *(_QWORD *)v323;
                      *((_QWORD *)v323 + 2) = 0LL;
                      if ( !*(_DWORD *)(v324 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v320, v319, v321, v322);
                      v327 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v327 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v326, v325, v328, v329);
                      ExReleaseResourceAndLeaveCriticalRegion(*v327);
                      HMUnlockObject(*(_QWORD *)v323);
                      tagDomLock::LockExclusive((tagDomLock *)v327);
                      v323 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v383);
                }
                dword_1C024D1B8 = a4[4];
                goto LABEL_190;
              }
              if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 == *((_QWORD *)a4 + 1) )
              {
                if ( !a4[4] )
                  return v11;
                v330 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v330 )
                  v330[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v408, 1);
                v331 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v408);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v331;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v384);
                  v336 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v336 + 2);
                      v337 = *(_QWORD *)v336;
                      *((_QWORD *)v336 + 2) = 0LL;
                      if ( !*(_DWORD *)(v337 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v333, v332, v334, v335);
                      v340 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v340 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v339, v338, v341, v342);
                      ExReleaseResourceAndLeaveCriticalRegion(*v340);
                      HMUnlockObject(*(_QWORD *)v336);
                      tagDomLock::LockExclusive((tagDomLock *)v340);
                      v336 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v384);
                }
                gdwUpdateKeyboard |= 2u;
                goto LABEL_190;
              }
              if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)a4
                && *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 == *((_QWORD *)a4 + 1) )
              {
                v343 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v343 )
                  v343[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v409, 1);
                v344 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v409);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v344;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v385);
                  v349 = gpducstulHead;
                  if ( gpducstulHead )
                  {
                    do
                    {
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v349 + 2);
                      v350 = *(_QWORD *)v349;
                      *((_QWORD *)v349 + 2) = 0LL;
                      if ( !*(_DWORD *)(v350 + 8) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v346, v345, v347, v348);
                      v353 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v353 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v352, v351, v354, v355);
                      ExReleaseResourceAndLeaveCriticalRegion(*v353);
                      HMUnlockObject(*(_QWORD *)v349);
                      tagDomLock::LockExclusive((tagDomLock *)v353);
                      v349 = gpducstulHead;
                    }
                    while ( gpducstulHead );
                    v11 = 0;
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v385);
                }
                v358 = (tagDomLock *)GetDomainLockRef(13LL);
                if ( v358 == (tagDomLock *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v357, v356, v359, v360);
                tagDomLock::LockExclusive(v358);
                dword_1C024D1C0 = a4[4] != 0;
                UserLogError((unsigned int)(-(unsigned __int8)dword_1C024D1C0 - 2147482947));
                CBaseInput::OnInputSuppressedValueChanged(a4[4] != 0);
                ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v358);
                goto LABEL_190;
              }
              return (unsigned int)-1073741823;
            }
            v275 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
            if ( v275 )
              v275[1] = KeQueryPerformanceCounter(0LL);
            InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v404, 1);
            v276 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
            InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v404);
            EtwTraceAcquiredExclusiveUserCrit();
            gptiCurrent = v276;
            gbValidateHandleForIL = 1;
            if ( (unsigned int)IsValidGuiThreadContext() )
            {
              CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v380);
              v284 = gpducstulHead;
              if ( gpducstulHead )
              {
                do
                {
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v284 + 2);
                  v285 = *(_QWORD *)v284;
                  *((_QWORD *)v284 + 2) = 0LL;
                  if ( !*(_DWORD *)(v285 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v281, v280, v282, v283);
                  v288 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v288 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v287, v286, v289, v290);
                  ExReleaseResourceAndLeaveCriticalRegion(*v288);
                  HMUnlockObject(*(_QWORD *)v284);
                  tagDomLock::LockExclusive((tagDomLock *)v288);
                  v284 = gpducstulHead;
                }
                while ( gpducstulHead );
                v11 = 0;
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v380);
            }
            if ( !a4[4] )
            {
              dword_1C024D18C = 0;
              goto LABEL_190;
            }
            if ( gbTtmEnabled )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v277, v278, v279);
            dword_1C024D18C = 1;
            LODWORD(v363) = 5;
            *((_QWORD *)&v363 + 1) = 13LL;
            goto LABEL_75;
          }
          v249 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
          if ( v249 )
            v249[1] = KeQueryPerformanceCounter(0LL);
          InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v402, 1);
          v250 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v402);
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v250;
          gbValidateHandleForIL = 1;
          if ( (unsigned int)IsValidGuiThreadContext() )
          {
            CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v378);
            v255 = gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v255 + 2);
                v256 = *(_QWORD *)v255;
                *((_QWORD *)v255 + 2) = 0LL;
                if ( !*(_DWORD *)(v256 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v252, v251, v253, v254);
                v259 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v259 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v258, v257, v260, v261);
                ExReleaseResourceAndLeaveCriticalRegion(*v259);
                HMUnlockObject(*(_QWORD *)v255);
                tagDomLock::LockExclusive((tagDomLock *)v259);
                v255 = gpducstulHead;
              }
              while ( gpducstulHead );
              v11 = 0;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*v378);
          }
          if ( gbTtmEnabled || gProtocolType || dword_1C024D198 )
            goto LABEL_190;
          v248 = MonitorRequestReasonBatteryCountChange;
        }
        PowerDisplayBurst(v248);
        goto LABEL_190;
      }
      v179 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v179 )
        v179[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v397, 1);
      v180 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v397);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v180;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v373);
        v185 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v185 + 2);
            v186 = *(_QWORD *)v185;
            *((_QWORD *)v185 + 2) = 0LL;
            if ( !*(_DWORD *)(v186 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v182, v181, v183, v184);
            v189 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v189 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v188, v187, v190, v191);
            ExReleaseResourceAndLeaveCriticalRegion(*v189);
            HMUnlockObject(*(_QWORD *)v185);
            tagDomLock::LockExclusive((tagDomLock *)v189);
            v185 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v373);
      }
      giDimTimeOutMs = 1000 * a4[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 )
      ModerncoreUserPowerInfoCallout();
    goto LABEL_190;
  }
  v26 = v10 - 1;
  if ( !v26 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( v9 != 8 || !a4 )
      return (unsigned int)-1073741823;
    v123 = *(_BYTE *)a4;
    v124 = *((_BYTE *)a4 + 1);
    v125 = a4[1];
    v126 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v126 )
      v126[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v393, 1);
    v127 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v393);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v127;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v369);
      v132 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v132 + 2);
          v133 = *(_QWORD *)v132;
          *((_QWORD *)v132 + 2) = 0LL;
          if ( !*(_DWORD *)(v133 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v129, v128, v130, v131);
          v136 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v136 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v135, v134, v137, v138);
          ExReleaseResourceAndLeaveCriticalRegion(*v136);
          HMUnlockObject(*(_QWORD *)v132);
          tagDomLock::LockExclusive((tagDomLock *)v136);
          v132 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v369);
    }
    if ( v123 && gbBlockSendInputResets )
      goto LABEL_190;
    v139 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v139, 5u);
    CitLastInputUpdate(5, v139, 0LL, 0);
    if ( v124 )
      goto LABEL_190;
    if ( dword_1C024D190 )
    {
      if ( !*(_BYTE *)gpbIgnoreSleepInput )
        SetPendingInput(v125);
      goto LABEL_190;
    }
    LODWORD(v363) = 4;
    *((_QWORD *)&v363 + 1) = v125;
    goto LABEL_75;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
    if ( v9 != 4 || !a4 || a5 != 4 || !v6 )
      return (unsigned int)-1073741811;
    v100 = *a4;
    v101 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v101 )
      v101[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v392, 1);
    v102 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v392);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v102;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v368);
      v107 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v107 + 2);
          v108 = *(_QWORD *)v107;
          *((_QWORD *)v107 + 2) = 0LL;
          if ( !*(_DWORD *)(v108 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v104, v103, v105, v106);
          v111 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v111 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v110, v109, v112, v113);
          ExReleaseResourceAndLeaveCriticalRegion(*v111);
          HMUnlockObject(*(_QWORD *)v107);
          tagDomLock::LockExclusive((tagDomLock *)v111);
          v107 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v368);
    }
    v114 = dword_1C024D138;
    v115 = dword_1C024D138 + v100;
    dword_1C024D138 += v100;
    if ( v114 == 1 )
    {
      v116 = v115 == 0;
      v117 = v115 < 0;
      if ( v115 )
        goto LABEL_166;
      CitDisplayRequestChange(0);
      EtwTraceDisplayReqChange(0, v118, v119);
      if ( !gbBlockSendInputResets )
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          0xAu);
    }
    else if ( !v114 && v115 == 1 )
    {
      CitDisplayRequestChange(1u);
      EtwTraceDisplayReqChange(1, v120, v121);
    }
    v116 = v115 == 0;
    v117 = v115 < 0;
LABEL_166:
    v362 = !v117 && !v116;
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v362, 1LL, 0LL, &gSessionId, 0, 0);
    UserSessionSwitchLeaveCrit(v122);
    if ( !v114 && v115 == 1 && dword_1C024D140 == 2 )
    {
      LODWORD(v363) = 4;
      *((_QWORD *)&v363 + 1) = 48LL;
      QueuePowerRequest(&v363, 0);
    }
    if ( v115 >= 0 )
      v7 = v115;
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
                v34 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
                if ( v34 )
                  v34[1] = KeQueryPerformanceCounter(0LL);
                InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v388, 1);
                v35 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
                InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v388);
                EtwTraceAcquiredExclusiveUserCrit();
                gptiCurrent = v35;
                gbValidateHandleForIL = 1;
                if ( (unsigned int)IsValidGuiThreadContext() )
                {
                  CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v364);
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
                  ExReleaseResourceAndLeaveCriticalRegion(*v364);
                }
                CitDisplayRequestChange(v33);
                EtwTraceDisplayReqChange(v33, v47, v48);
                goto LABEL_190;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741823;
          }
          if ( !gbTtmEnabled )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
          if ( v9 != 4 || !a4 )
            return (unsigned int)-1073741823;
          v50 = 1;
          *((_QWORD *)&v363 + 1) = *a4;
          LODWORD(v363) = 15;
LABEL_50:
          QueuePowerRequest(&v363, v50);
          return v11;
        }
        if ( !gbTtmEnabled )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
        if ( v9 != 8 || !a4 )
          return (unsigned int)-1073741823;
        UserSessionSwitchBlock_Start();
        *((_QWORD *)&v363 + 1) = a4[1];
        LODWORD(v363) = 14;
        if ( *(_BYTE *)a4 )
          LODWORD(v363) = 13;
LABEL_57:
        v50 = 0;
        goto LABEL_50;
      }
      if ( gbTtmEnabled )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
      v51 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v51 )
        v51[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v389, 1);
      v52 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v389);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v52;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v365);
        v60 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v60 + 2);
            v61 = *(_QWORD *)v60;
            *((_QWORD *)v60 + 2) = 0LL;
            if ( !*(_DWORD *)(v61 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v56, v58, v59);
            v64 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v64 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v63, v62, v65, v66);
            ExReleaseResourceAndLeaveCriticalRegion(*v64);
            HMUnlockObject(*(_QWORD *)v60);
            tagDomLock::LockExclusive((tagDomLock *)v64);
            v60 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v365);
      }
      if ( !gWakeInProgress )
        goto LABEL_190;
      v67 = gWakeInProgressReason;
      gWakeInProgressReason = MonitorRequestReasonUnknown;
      gWakeInProgress = 0;
      if ( gnPoSessionSwitchBlockCount < 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v49, v53, v54, v55);
      LODWORD(v363) = 12;
      *((_QWORD *)&v363 + 1) = v67;
      goto LABEL_75;
    }
    if ( v9 == 32 && a4 )
    {
      v68 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v68 )
        v68[1] = KeQueryPerformanceCounter(0LL);
      InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v390, 1);
      v69 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v390);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v69;
      gbValidateHandleForIL = 1;
      if ( (unsigned int)IsValidGuiThreadContext() )
      {
        CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v366);
        v74 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v74 + 2);
            v75 = *(_QWORD *)v74;
            *((_QWORD *)v74 + 2) = 0LL;
            if ( !*(_DWORD *)(v75 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v71, v70, v72, v73);
            v78 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v78 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v77, v76, v79, v80);
            ExReleaseResourceAndLeaveCriticalRegion(*v78);
            HMUnlockObject(*(_QWORD *)v74);
            tagDomLock::LockExclusive((tagDomLock *)v78);
            v74 = gpducstulHead;
          }
          while ( gpducstulHead );
          v11 = 0;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v366);
      }
      dword_1C024D164 = *a4;
      v81 = (unsigned int)a4[1];
      dword_1C024D168 = a4[1];
      dword_1C024D16C = a4[2];
      dword_1C024D170 = a4[3];
      dword_1C024D174 = a4[4];
      dword_1C024D178 = a4[5];
      dword_1C024D17C = a4[6];
      dword_1C024D180 = a4[7];
      if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v81 != -1 )
      {
        if ( qword_1C024CAC8 )
        {
          LOBYTE(v81) = 1;
          v11 = qword_1C024CAC8(v81, a4);
        }
        else
        {
          v11 = -1073741637;
        }
        LOBYTE(v7) = (v11 & 0x80000000) == 0;
        gbPowerHighPrecisionBrightnessSupported = v7;
      }
      v49 = (unsigned int)dword_1C024D164;
      dword_1C024D148 = dword_1C024D164;
      dword_1C024D14C = dword_1C024D164;
      dword_1C024D150 = dword_1C024D174;
      dword_1C024D154 = dword_1C024D174;
      if ( dword_1C024D140 == 1 )
      {
        if ( dword_1C024D160 == dword_1C024D164 )
          goto LABEL_190;
        LODWORD(v363) = 11;
        *((_QWORD *)&v363 + 1) = 1LL;
        QueuePowerRequest(&v363, 0);
      }
      if ( dword_1C024D140 != 2 || dword_1C024D160 == dword_1C024D174 )
        goto LABEL_190;
      LODWORD(v363) = 11;
      *((_QWORD *)&v363 + 1) = 2LL;
LABEL_75:
      QueuePowerRequest(&v363, 0);
LABEL_190:
      UserSessionSwitchLeaveCrit(v49);
      return v11;
    }
    return (unsigned int)-1073741811;
  }
  if ( gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( v9 != 8 || !a4 )
    return (unsigned int)-1073741823;
  v82 = (unsigned int)*a4;
  v83 = 0;
  v84 = 0;
  if ( (_DWORD)v82 )
  {
    v85 = (unsigned int)(v82 - 1);
    if ( !(_DWORD)v85 )
    {
      v84 = 1;
LABEL_128:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5u);
      goto LABEL_129;
    }
    if ( (_DWORD)v85 != 1 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v85, a2, a3, a4);
      return v11;
    }
    v86 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v85);
    if ( v86 )
      v86[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v391, 1);
    v87 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v391);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v87;
    gbValidateHandleForIL = 1;
    if ( (unsigned int)IsValidGuiThreadContext() )
    {
      CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v367);
      v93 = gpducstulHead;
      if ( gpducstulHead )
      {
        do
        {
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v93 + 2);
          v94 = *(_QWORD *)v93;
          *((_QWORD *)v93 + 2) = 0LL;
          if ( !*(_DWORD *)(v94 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v90, v89, v91, v92);
          v97 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v97 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v96, v95, v98, v99);
          ExReleaseResourceAndLeaveCriticalRegion(*v97);
          HMUnlockObject(*(_QWORD *)v93);
          tagDomLock::LockExclusive((tagDomLock *)v97);
          v93 = gpducstulHead;
        }
        while ( gpducstulHead );
        v11 = 0;
      }
      ExReleaseResourceAndLeaveCriticalRegion(*v367);
    }
    if ( gPowerTransitionsState )
      v11 = 255;
    else
      v84 = 1;
    UserSessionSwitchLeaveCrit(v88);
  }
  else
  {
    v83 = 1;
  }
  if ( v84 )
    goto LABEL_128;
LABEL_129:
  if ( !v83 )
  {
    if ( !v84 )
      return v11;
    goto LABEL_139;
  }
  if ( !gSystemIsAoAc )
  {
LABEL_135:
    if ( !v84 )
    {
      LODWORD(v363) = 5;
LABEL_140:
      *((_QWORD *)&v363 + 1) = a4[1];
      goto LABEL_57;
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v82, a2, a3, a4);
LABEL_139:
    LODWORD(v363) = 4;
    goto LABEL_140;
  }
  if ( !(unsigned int)Feature_Servicing_FixExtraSuppression_26190189__private_IsEnabled()
    || gPowerTransitionsState
    || qword_1C024D19C )
  {
    SetInputMode(1LL);
    goto LABEL_135;
  }
  return v11;
}
