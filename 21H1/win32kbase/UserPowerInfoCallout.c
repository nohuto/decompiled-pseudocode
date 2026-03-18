/*
 * XREFs of UserPowerInfoCallout @ 0x1C005E654
 * Callers:
 *     W32CalloutDispatch @ 0x1C005D9C0 (W32CalloutDispatch.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwTraceDisplayReqChange @ 0x1C0050188 (EtwTraceDisplayReqChange.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00520FC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0054580 (SqmPowerState.c)
 *     CitDisplayRequestChange @ 0x1C00598B8 (CitDisplayRequestChange.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005AF20 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C005B4E4 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ?CitpCitTypeFromLinp@@YAGW4_LINP_SOURCE@@K@Z @ 0x1C005B7C8 (-CitpCitTypeFromLinp@@YAGW4_LINP_SOURCE@@K@Z.c)
 *     QueuePowerRequest @ 0x1C005C560 (QueuePowerRequest.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     HMUnlockObject @ 0x1C0080DA0 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00844F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     SetPendingInput @ 0x1C00CBA40 (SetPendingInput.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C00D1E44 (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0121270 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1C0125228 (--0-$CLockDomainExclusiveInUserCrit@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0125400 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125714 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     UserLogError @ 0x1C01444C0 (UserLogError.c)
 *     ?OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z @ 0x1C01A6BB8 (-OnInputSuppressedValueChanged@CBaseInput@@SAX_N@Z.c)
 *     IsModerncoreUserPowerInfoCalloutSupported @ 0x1C01FDAAC (IsModerncoreUserPowerInfoCalloutSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall UserPowerInfoCallout(__int64 a1, __int64 a2, int a3, int *a4, int a5, int *a6)
{
  int v6; // esi
  int *v7; // r15
  int v8; // r12d
  int v9; // r14d
  int v10; // r14d
  int v11; // r14d
  int v12; // r14d
  __int64 v13; // rcx
  LARGE_INTEGER *v14; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  PERESOURCE *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  struct tagKERNELHANDLETABLEENTRY *v34; // rdi
  int v35; // edi
  int v36; // ebx
  bool v37; // zf
  bool v38; // sf
  __int64 v39; // rcx
  char v41; // r15
  char v42; // r12
  __int64 v43; // r14
  __int64 v44; // rcx
  LARGE_INTEGER *v45; // rbx
  struct tagTHREADINFO *v46; // rbx
  struct tagTHREADINFO **v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  PVOID v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  struct _KTHREAD *v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  PERESOURCE *v63; // rbx
  __int64 v64; // rcx
  __int64 v65; // rcx
  struct tagKERNELHANDLETABLEENTRY *v66; // rdi
  __int64 v67; // rbx
  unsigned __int16 v68; // ax
  __int64 v69; // rdx
  int v70; // r8d
  __int64 v71; // rdx
  int v72; // r8d
  int v73; // r14d
  unsigned int *v74; // r13
  char v75; // r15
  char v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  LARGE_INTEGER *v80; // rbx
  struct tagTHREADINFO *v81; // rbx
  struct tagTHREADINFO **v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  PVOID v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // ebx
  __int64 v93; // rax
  __int64 v94; // rcx
  struct _KTHREAD *v95; // rdi
  __int64 v96; // rbx
  __int64 v97; // rcx
  __int64 *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  int v101; // ebx
  __int64 v102; // rax
  __int64 v103; // rax
  int v104; // ebx
  __int64 v105; // rax
  __int64 v106; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v108; // rax
  __int64 v109; // r8
  __int64 v110; // r9
  struct tagTHREADINFO *v111; // rbx
  struct tagTHREADINFO **v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  PVOID CurrentProcess; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r9
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v126; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v128; // rbx
  __int64 v129; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v132; // rcx
  PERESOURCE *DomainLockRef; // rdi
  __int64 v134; // rcx
  __int64 v135; // rcx
  struct tagKERNELHANDLETABLEENTRY *v136; // r15
  __int64 v137; // rcx
  PERESOURCE *v138; // rbx
  int v139; // r14d
  int v140; // r14d
  int v141; // r14d
  int v142; // r14d
  BOOL v143; // r14d
  __int64 v144; // rcx
  LARGE_INTEGER *v145; // rbx
  __int64 v146; // rax
  __int64 v147; // r8
  __int64 v148; // r9
  struct tagTHREADINFO *v149; // rbx
  struct tagTHREADINFO **v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  PVOID v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r9
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rax
  int v162; // ebx
  __int64 v163; // rax
  struct _KTHREAD *v164; // rdi
  __int64 v165; // rbx
  __int64 v166; // rcx
  __int64 *v167; // rax
  __int64 v168; // rax
  __int64 v169; // rcx
  PERESOURCE *v170; // rbx
  __int64 v171; // rcx
  __int64 v172; // rcx
  struct tagKERNELHANDLETABLEENTRY *v173; // rdi
  __int64 v174; // rdx
  int v175; // r8d
  char v176; // dl
  __int64 v177; // rcx
  LARGE_INTEGER *v178; // rbx
  __int64 v179; // rax
  __int64 v180; // r8
  __int64 v181; // r9
  struct tagTHREADINFO *v182; // rbx
  struct tagTHREADINFO **v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  PVOID v186; // rax
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r9
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rax
  int v195; // ebx
  __int64 v196; // rax
  struct _KTHREAD *v197; // rdi
  __int64 v198; // rbx
  __int64 v199; // rcx
  __int64 *v200; // rax
  __int64 v201; // rax
  __int64 v202; // rcx
  PERESOURCE *v203; // rbx
  __int64 v204; // rcx
  __int64 v205; // rcx
  struct tagKERNELHANDLETABLEENTRY *v206; // rdi
  __int64 v207; // rbx
  __int64 v208; // rcx
  LARGE_INTEGER *v209; // rbx
  __int64 v210; // rax
  __int64 v211; // r8
  __int64 v212; // r9
  struct tagTHREADINFO *v213; // rbx
  struct tagTHREADINFO **v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  PVOID v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r9
  __int64 v221; // r8
  __int64 v222; // r9
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rax
  int v226; // ebx
  __int64 v227; // rax
  struct _KTHREAD *v228; // rdi
  __int64 v229; // rbx
  __int64 v230; // rcx
  __int64 *v231; // rax
  __int64 v232; // rax
  __int64 v233; // rcx
  PERESOURCE *v234; // rbx
  __int64 v235; // rcx
  __int64 v236; // rcx
  struct tagKERNELHANDLETABLEENTRY *v237; // rdi
  __int64 v238; // rcx
  int v239; // eax
  __int64 v240; // rcx
  __int64 v241; // rax
  __int64 v242; // r8
  __int64 v243; // r9
  __int64 v244; // r8
  __int64 v245; // r9
  PERESOURCE *v246; // rax
  __int64 v247; // rcx
  PERESOURCE *v248; // rbx
  __int64 v249; // rcx
  __int64 v250; // rcx
  struct tagKERNELHANDLETABLEENTRY *v251; // rdi
  __int64 v252; // rax
  __int64 v253; // r8
  __int64 v254; // r9
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rax
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // r8
  __int64 v261; // r9
  __int64 v262; // rcx
  __int64 v263; // rcx
  LARGE_INTEGER *v264; // rbx
  __int64 v265; // rax
  __int64 v266; // r8
  __int64 v267; // r9
  struct tagTHREADINFO *v268; // rbx
  struct tagTHREADINFO **v269; // rax
  __int64 v270; // rdx
  __int64 v271; // rcx
  PVOID v272; // rax
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r9
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rdx
  __int64 v279; // rcx
  __int64 v280; // rax
  int v281; // ebx
  __int64 v282; // rax
  struct _KTHREAD *v283; // rdi
  __int64 v284; // rbx
  __int64 v285; // rcx
  __int64 *v286; // rax
  __int64 v287; // rax
  __int64 v288; // rcx
  PERESOURCE *v289; // rbx
  __int64 v290; // rcx
  __int64 v291; // rcx
  __int64 v292; // rcx
  PERESOURCE *v293; // rdi
  struct tagKERNELHANDLETABLEENTRY *v294; // r14
  __int64 v295; // rcx
  __int64 v296; // rcx
  LARGE_INTEGER *v297; // rbx
  __int64 v298; // rax
  __int64 v299; // r8
  __int64 v300; // r9
  struct tagTHREADINFO *v301; // rbx
  struct tagTHREADINFO **v302; // rax
  __int64 v303; // rdx
  __int64 v304; // rcx
  PVOID v305; // rax
  __int64 v306; // rdx
  __int64 v307; // rcx
  __int64 v308; // r9
  __int64 v309; // r8
  __int64 v310; // r9
  __int64 v311; // rdx
  __int64 v312; // rcx
  __int64 v313; // rax
  int v314; // ebx
  __int64 v315; // rax
  struct _KTHREAD *v316; // rdi
  __int64 v317; // rbx
  __int64 v318; // rcx
  __int64 *v319; // rax
  __int64 v320; // rax
  __int64 v321; // rcx
  PERESOURCE *v322; // rbx
  __int64 v323; // rcx
  __int64 v324; // rcx
  __int64 v325; // rcx
  PERESOURCE *v326; // rdi
  struct tagKERNELHANDLETABLEENTRY *v327; // r14
  __int64 v328; // rcx
  __int64 v329; // rcx
  LARGE_INTEGER *v330; // rbx
  __int64 v331; // rax
  __int64 v332; // r8
  __int64 v333; // r9
  struct tagTHREADINFO *v334; // rbx
  struct tagTHREADINFO **v335; // rax
  __int64 v336; // rdx
  __int64 v337; // rcx
  PVOID v338; // rax
  __int64 v339; // rdx
  __int64 v340; // rcx
  __int64 v341; // r9
  __int64 v342; // r8
  __int64 v343; // r9
  __int64 v344; // rdx
  __int64 v345; // rcx
  __int64 v346; // rax
  int v347; // ebx
  __int64 v348; // rax
  struct _KTHREAD *v349; // rdi
  __int64 v350; // rbx
  __int64 v351; // rcx
  __int64 *v352; // rax
  __int64 v353; // rax
  __int64 v354; // rcx
  PERESOURCE *v355; // rbx
  __int64 v356; // rcx
  __int64 v357; // rcx
  __int64 v358; // rcx
  PERESOURCE *v359; // rdi
  struct tagKERNELHANDLETABLEENTRY *v360; // r14
  __int64 v361; // rcx
  __int64 v362; // rcx
  LARGE_INTEGER *v363; // rbx
  __int64 v364; // rax
  __int64 v365; // r8
  __int64 v366; // r9
  struct tagTHREADINFO *v367; // rbx
  struct tagTHREADINFO **v368; // rax
  __int64 v369; // rdx
  __int64 v370; // rcx
  PVOID v371; // rax
  __int64 v372; // rdx
  __int64 v373; // rcx
  __int64 v374; // r9
  __int64 v375; // r8
  __int64 v376; // r9
  __int64 v377; // rdx
  __int64 v378; // rcx
  __int64 v379; // rax
  int v380; // ebx
  __int64 v381; // rax
  struct _KTHREAD *v382; // rdi
  __int64 v383; // rbx
  __int64 v384; // rcx
  __int64 *v385; // rax
  __int64 v386; // rax
  __int64 v387; // rcx
  PERESOURCE *v388; // rbx
  __int64 v389; // rcx
  __int64 v390; // rcx
  __int64 v391; // rcx
  PERESOURCE *v392; // rdi
  struct tagKERNELHANDLETABLEENTRY *v393; // r14
  __int64 v394; // rcx
  __int64 v395; // rcx
  LARGE_INTEGER *v396; // rbx
  __int64 v397; // rax
  __int64 v398; // r8
  __int64 v399; // r9
  struct tagTHREADINFO *v400; // rbx
  struct tagTHREADINFO **v401; // rax
  __int64 v402; // rdx
  __int64 v403; // rcx
  PVOID v404; // rax
  __int64 v405; // rdx
  __int64 v406; // rcx
  __int64 v407; // r9
  __int64 v408; // r8
  __int64 v409; // r9
  __int64 v410; // rdx
  __int64 v411; // rcx
  __int64 v412; // rax
  int v413; // ebx
  __int64 v414; // rax
  struct _KTHREAD *v415; // rdi
  __int64 v416; // rbx
  __int64 v417; // rcx
  __int64 *v418; // rax
  __int64 v419; // rax
  __int64 v420; // rcx
  PERESOURCE *v421; // rbx
  __int64 v422; // rcx
  __int64 v423; // rcx
  __int64 v424; // rcx
  PERESOURCE *v425; // rdi
  struct tagKERNELHANDLETABLEENTRY *v426; // r14
  __int64 v427; // rcx
  __int64 v428; // rcx
  LARGE_INTEGER *v429; // rbx
  __int64 v430; // rax
  __int64 v431; // r8
  __int64 v432; // r9
  struct tagTHREADINFO *v433; // rbx
  struct tagTHREADINFO **v434; // rax
  __int64 v435; // rdx
  __int64 v436; // rcx
  PVOID v437; // rax
  __int64 v438; // rdx
  __int64 v439; // rcx
  __int64 v440; // r9
  __int64 v441; // r8
  __int64 v442; // r9
  __int64 v443; // rdx
  __int64 v444; // rcx
  __int64 v445; // rax
  int v446; // ebx
  __int64 v447; // rax
  struct _KTHREAD *v448; // rdi
  __int64 v449; // rbx
  __int64 v450; // rcx
  __int64 *v451; // rax
  __int64 v452; // rax
  __int64 v453; // rcx
  PERESOURCE *v454; // rbx
  __int64 v455; // rcx
  __int64 v456; // rcx
  __int64 v457; // rcx
  PERESOURCE *v458; // rdi
  struct tagKERNELHANDLETABLEENTRY *v459; // r14
  __int64 v460; // rcx
  __int64 v461; // rcx
  LARGE_INTEGER *v462; // rbx
  __int64 v463; // rax
  __int64 v464; // r8
  __int64 v465; // r9
  struct tagTHREADINFO *v466; // rbx
  struct tagTHREADINFO **v467; // rax
  __int64 v468; // rdx
  __int64 v469; // rcx
  PVOID v470; // rax
  __int64 v471; // rdx
  __int64 v472; // rcx
  __int64 v473; // r9
  __int64 v474; // r8
  __int64 v475; // r9
  __int64 v476; // rdx
  __int64 v477; // rcx
  __int64 v478; // rax
  int v479; // ebx
  __int64 v480; // rax
  __int64 v481; // rcx
  struct _KTHREAD *v482; // rdi
  __int64 v483; // rbx
  __int64 v484; // rcx
  __int64 *v485; // rax
  __int64 v486; // rax
  __int64 v487; // rcx
  PERESOURCE *v488; // rbx
  __int64 v489; // rcx
  __int64 v490; // rcx
  __int64 v491; // rcx
  PERESOURCE *v492; // rdi
  struct tagKERNELHANDLETABLEENTRY *v493; // r14
  __int64 v494; // rcx
  __int64 v495; // rcx
  __int64 v496; // rcx
  LARGE_INTEGER *v497; // rbx
  __int64 v498; // rax
  __int64 v499; // r8
  __int64 v500; // r9
  struct tagTHREADINFO *v501; // rbx
  struct tagTHREADINFO **v502; // rax
  __int64 v503; // rdx
  __int64 v504; // rcx
  PVOID v505; // rax
  __int64 v506; // rdx
  __int64 v507; // rcx
  __int64 v508; // r9
  __int64 v509; // r8
  __int64 v510; // r9
  __int64 v511; // rdx
  __int64 v512; // rcx
  __int64 v513; // rax
  int v514; // ebx
  __int64 v515; // rax
  struct _KTHREAD *v516; // rdi
  __int64 v517; // rbx
  __int64 v518; // rcx
  __int64 *v519; // rax
  __int64 v520; // rax
  __int64 v521; // rcx
  PERESOURCE *v522; // rbx
  __int64 v523; // rcx
  __int64 v524; // rcx
  __int64 v525; // rcx
  PERESOURCE *v526; // rdi
  struct tagKERNELHANDLETABLEENTRY *v527; // r14
  enum POWER_MONITOR_REQUEST_REASON v528; // ecx
  __int64 v529; // rcx
  __int64 v530; // rcx
  LARGE_INTEGER *v531; // rbx
  __int64 v532; // rax
  __int64 v533; // r8
  __int64 v534; // r9
  struct tagTHREADINFO *v535; // rbx
  struct tagTHREADINFO **v536; // rax
  __int64 v537; // rdx
  __int64 v538; // rcx
  PVOID v539; // rax
  __int64 v540; // rdx
  __int64 v541; // rcx
  __int64 v542; // r9
  __int64 v543; // r8
  __int64 v544; // r9
  __int64 v545; // rdx
  __int64 v546; // rcx
  __int64 v547; // rax
  int v548; // ebx
  __int64 v549; // rax
  struct _KTHREAD *v550; // rdi
  __int64 v551; // rbx
  __int64 v552; // rcx
  __int64 *v553; // rax
  __int64 v554; // rax
  __int64 v555; // rcx
  PERESOURCE *v556; // rbx
  __int64 v557; // rcx
  __int64 v558; // rcx
  __int64 v559; // rcx
  PERESOURCE *v560; // rdi
  struct tagKERNELHANDLETABLEENTRY *v561; // r14
  __int64 v562; // rcx
  __int64 v563; // rcx
  LARGE_INTEGER *v564; // rbx
  __int64 v565; // rax
  __int64 v566; // r8
  __int64 v567; // r9
  struct tagTHREADINFO *v568; // rbx
  struct tagTHREADINFO **v569; // rax
  __int64 v570; // rdx
  __int64 v571; // rcx
  PVOID v572; // rax
  __int64 v573; // rdx
  __int64 v574; // rcx
  __int64 v575; // r9
  __int64 v576; // r8
  __int64 v577; // r9
  __int64 v578; // rdx
  __int64 v579; // rcx
  __int64 v580; // rax
  int v581; // ebx
  __int64 v582; // rax
  struct _KTHREAD *v583; // rdi
  __int64 v584; // rbx
  __int64 v585; // rcx
  __int64 *v586; // rax
  __int64 v587; // rax
  __int64 v588; // rcx
  PERESOURCE *v589; // rbx
  __int64 v590; // rcx
  __int64 v591; // rcx
  __int64 v592; // rcx
  PERESOURCE *v593; // rdi
  struct tagKERNELHANDLETABLEENTRY *v594; // r14
  __int64 v595; // rcx
  __int64 v596; // rcx
  LARGE_INTEGER *v597; // rbx
  __int64 v598; // rax
  __int64 v599; // r8
  __int64 v600; // r9
  struct tagTHREADINFO *v601; // rbx
  struct tagTHREADINFO **v602; // rax
  __int64 v603; // rdx
  __int64 v604; // rcx
  PVOID v605; // rax
  __int64 v606; // rdx
  __int64 v607; // rcx
  __int64 v608; // r9
  __int64 v609; // r8
  __int64 v610; // r9
  __int64 v611; // rdx
  __int64 v612; // rcx
  __int64 v613; // rax
  int v614; // ebx
  __int64 v615; // rax
  struct _KTHREAD *v616; // rdi
  __int64 v617; // rbx
  __int64 v618; // rcx
  __int64 *v619; // rax
  __int64 v620; // rax
  __int64 v621; // rcx
  PERESOURCE *v622; // rbx
  __int64 v623; // rcx
  __int64 v624; // rcx
  __int64 v625; // rcx
  PERESOURCE *v626; // rdi
  struct tagKERNELHANDLETABLEENTRY *v627; // r14
  __int64 v628; // rcx
  __int64 v629; // rcx
  LARGE_INTEGER *v630; // rbx
  __int64 v631; // rax
  __int64 v632; // r8
  __int64 v633; // r9
  struct tagTHREADINFO *v634; // rbx
  struct tagTHREADINFO **v635; // rax
  __int64 v636; // rdx
  __int64 v637; // rcx
  PVOID v638; // rax
  __int64 v639; // rdx
  __int64 v640; // rcx
  __int64 v641; // r9
  __int64 v642; // r8
  __int64 v643; // r9
  __int64 v644; // rdx
  __int64 v645; // rcx
  __int64 v646; // rax
  int v647; // ebx
  __int64 v648; // rax
  struct _KTHREAD *v649; // rdi
  __int64 v650; // rbx
  __int64 v651; // rcx
  __int64 *v652; // rax
  __int64 v653; // rax
  __int64 v654; // rcx
  PERESOURCE *v655; // rbx
  __int64 v656; // rcx
  __int64 v657; // rcx
  struct tagKERNELHANDLETABLEENTRY *v658; // rdi
  __int64 v659; // rcx
  __int64 v660; // rcx
  LARGE_INTEGER *v661; // rbx
  __int64 v662; // rax
  __int64 v663; // r8
  __int64 v664; // r9
  struct tagTHREADINFO *v665; // rbx
  struct tagTHREADINFO **v666; // rax
  __int64 v667; // rdx
  __int64 v668; // rcx
  PVOID v669; // rax
  __int64 v670; // rdx
  __int64 v671; // rcx
  __int64 v672; // r9
  __int64 v673; // r8
  __int64 v674; // r9
  __int64 v675; // rdx
  __int64 v676; // rcx
  __int64 v677; // rax
  int v678; // ebx
  __int64 v679; // rax
  struct _KTHREAD *v680; // rdi
  __int64 v681; // rbx
  __int64 v682; // rcx
  __int64 *v683; // rax
  __int64 v684; // rax
  __int64 v685; // rcx
  PERESOURCE *v686; // rbx
  __int64 v687; // rcx
  __int64 v688; // rcx
  struct tagKERNELHANDLETABLEENTRY *v689; // rdi
  __int64 v690; // rcx
  __int64 v691; // rcx
  LARGE_INTEGER *v692; // rbx
  __int64 v693; // rax
  __int64 v694; // r8
  __int64 v695; // r9
  struct tagTHREADINFO *v696; // rbx
  struct tagTHREADINFO **v697; // rax
  __int64 v698; // rdx
  __int64 v699; // rcx
  PVOID v700; // rax
  __int64 v701; // rdx
  __int64 v702; // rcx
  __int64 v703; // r9
  __int64 v704; // r8
  __int64 v705; // r9
  __int64 v706; // rdx
  __int64 v707; // rcx
  __int64 v708; // rax
  int v709; // ebx
  __int64 v710; // rax
  struct _KTHREAD *v711; // rdi
  __int64 v712; // rbx
  __int64 v713; // rcx
  __int64 *v714; // rax
  __int64 v715; // rax
  __int64 v716; // rcx
  PERESOURCE *v717; // rbx
  __int64 v718; // rcx
  __int64 v719; // rcx
  struct tagKERNELHANDLETABLEENTRY *v720; // rdi
  __int64 v721; // rcx
  __int64 v722; // rcx
  LARGE_INTEGER *v723; // rbx
  __int64 v724; // rax
  __int64 v725; // r8
  __int64 v726; // r9
  struct tagTHREADINFO *v727; // rbx
  struct tagTHREADINFO **v728; // rax
  __int64 v729; // rdx
  __int64 v730; // rcx
  PVOID v731; // rax
  __int64 v732; // rdx
  __int64 v733; // rcx
  __int64 v734; // r9
  __int64 v735; // r8
  __int64 v736; // r9
  __int64 v737; // rdx
  __int64 v738; // rcx
  __int64 v739; // rax
  int v740; // ebx
  __int64 v741; // rax
  struct _KTHREAD *v742; // rdi
  __int64 v743; // rbx
  __int64 v744; // rcx
  __int64 *v745; // rax
  __int64 v746; // rax
  __int64 v747; // rcx
  PERESOURCE *v748; // rbx
  __int64 v749; // rcx
  __int64 v750; // rcx
  struct tagKERNELHANDLETABLEENTRY *v751; // rdi
  __int64 v752; // rcx
  LARGE_INTEGER *v753; // rbx
  __int64 v754; // rax
  __int64 v755; // r8
  __int64 v756; // r9
  struct tagTHREADINFO *v757; // rbx
  struct tagTHREADINFO **v758; // rax
  __int64 v759; // rdx
  __int64 v760; // rcx
  PVOID v761; // rax
  __int64 v762; // rdx
  __int64 v763; // rcx
  __int64 v764; // r9
  __int64 v765; // r8
  __int64 v766; // r9
  __int64 v767; // rdx
  __int64 v768; // rcx
  __int64 v769; // rax
  int v770; // ebx
  __int64 v771; // rax
  struct _KTHREAD *v772; // rdi
  __int64 v773; // rbx
  __int64 v774; // rcx
  __int64 *v775; // rax
  __int64 v776; // rax
  __int64 v777; // rcx
  PERESOURCE *v778; // rbx
  __int64 v779; // rcx
  __int64 v780; // rcx
  __int64 v781; // rcx
  PERESOURCE *v782; // rdi
  struct tagKERNELHANDLETABLEENTRY *v783; // r14
  unsigned int v784; // [rsp+40h] [rbp-C0h]
  bool v785; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v786; // [rsp+48h] [rbp-B8h] BYREF
  int v787; // [rsp+58h] [rbp-A8h] BYREF
  int v788; // [rsp+5Ch] [rbp-A4h] BYREF
  int v789; // [rsp+60h] [rbp-A0h]
  int v790; // [rsp+64h] [rbp-9Ch] BYREF
  int v791; // [rsp+68h] [rbp-98h] BYREF
  int v792; // [rsp+6Ch] [rbp-94h] BYREF
  int v793; // [rsp+70h] [rbp-90h] BYREF
  int v794; // [rsp+74h] [rbp-8Ch] BYREF
  int v795; // [rsp+78h] [rbp-88h] BYREF
  int v796; // [rsp+7Ch] [rbp-84h] BYREF
  int v797; // [rsp+80h] [rbp-80h] BYREF
  int v798; // [rsp+84h] [rbp-7Ch] BYREF
  int v799; // [rsp+88h] [rbp-78h] BYREF
  int v800; // [rsp+8Ch] [rbp-74h] BYREF
  int v801; // [rsp+90h] [rbp-70h] BYREF
  int v802; // [rsp+94h] [rbp-6Ch] BYREF
  int v803; // [rsp+98h] [rbp-68h] BYREF
  int v804; // [rsp+9Ch] [rbp-64h] BYREF
  int v805; // [rsp+A0h] [rbp-60h] BYREF
  int v806; // [rsp+A4h] [rbp-5Ch] BYREF
  int v807; // [rsp+A8h] [rbp-58h] BYREF
  int v808; // [rsp+ACh] [rbp-54h] BYREF
  int v809; // [rsp+B0h] [rbp-50h] BYREF
  int v810; // [rsp+B4h] [rbp-4Ch] BYREF
  int v811; // [rsp+B8h] [rbp-48h] BYREF
  int v812; // [rsp+BCh] [rbp-44h] BYREF
  int v813; // [rsp+C0h] [rbp-40h] BYREF
  int v814; // [rsp+C4h] [rbp-3Ch] BYREF
  int v815; // [rsp+C8h] [rbp-38h] BYREF
  int v816; // [rsp+CCh] [rbp-34h] BYREF
  int v817; // [rsp+D0h] [rbp-30h] BYREF
  int v818; // [rsp+D4h] [rbp-2Ch] BYREF
  int v819; // [rsp+D8h] [rbp-28h] BYREF
  int v820; // [rsp+DCh] [rbp-24h] BYREF
  int v821; // [rsp+E0h] [rbp-20h] BYREF
  int v822; // [rsp+E4h] [rbp-1Ch] BYREF
  int v823; // [rsp+E8h] [rbp-18h] BYREF
  int v824; // [rsp+ECh] [rbp-14h] BYREF
  int v825; // [rsp+F0h] [rbp-10h] BYREF
  int v826; // [rsp+F4h] [rbp-Ch] BYREF
  int v827; // [rsp+F8h] [rbp-8h] BYREF
  int v828; // [rsp+FCh] [rbp-4h] BYREF
  int v829; // [rsp+100h] [rbp+0h] BYREF
  int v830; // [rsp+104h] [rbp+4h] BYREF
  int v831; // [rsp+108h] [rbp+8h] BYREF
  int v832; // [rsp+10Ch] [rbp+Ch] BYREF
  int v833; // [rsp+110h] [rbp+10h] BYREF
  int v834; // [rsp+114h] [rbp+14h] BYREF
  int v835; // [rsp+118h] [rbp+18h] BYREF
  int v836; // [rsp+11Ch] [rbp+1Ch] BYREF
  int v837; // [rsp+120h] [rbp+20h] BYREF
  int v838; // [rsp+124h] [rbp+24h] BYREF
  int v839; // [rsp+128h] [rbp+28h] BYREF
  int v840; // [rsp+12Ch] [rbp+2Ch] BYREF
  int v841; // [rsp+130h] [rbp+30h] BYREF
  int v842; // [rsp+134h] [rbp+34h] BYREF
  int v843; // [rsp+138h] [rbp+38h] BYREF
  int v844; // [rsp+13Ch] [rbp+3Ch] BYREF
  int v845; // [rsp+140h] [rbp+40h] BYREF
  int v846; // [rsp+144h] [rbp+44h] BYREF
  int v847; // [rsp+148h] [rbp+48h] BYREF
  int v848; // [rsp+14Ch] [rbp+4Ch] BYREF
  int v849; // [rsp+150h] [rbp+50h] BYREF
  int v850; // [rsp+154h] [rbp+54h] BYREF
  int v851; // [rsp+158h] [rbp+58h] BYREF
  int v852; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v853; // [rsp+160h] [rbp+60h] BYREF
  int v854; // [rsp+164h] [rbp+64h] BYREF
  int v855; // [rsp+168h] [rbp+68h] BYREF
  unsigned int *v856; // [rsp+170h] [rbp+70h]
  int v857; // [rsp+178h] [rbp+78h] BYREF
  tagDomLock *v858; // [rsp+180h] [rbp+80h] BYREF
  tagDomLock *v859; // [rsp+188h] [rbp+88h] BYREF
  tagDomLock *v860; // [rsp+190h] [rbp+90h] BYREF
  tagDomLock *v861; // [rsp+198h] [rbp+98h] BYREF
  tagDomLock *v862; // [rsp+1A0h] [rbp+A0h] BYREF
  tagDomLock *v863; // [rsp+1A8h] [rbp+A8h] BYREF
  tagDomLock *v864; // [rsp+1B0h] [rbp+B0h] BYREF
  tagDomLock *v865; // [rsp+1B8h] [rbp+B8h] BYREF
  tagDomLock *v866; // [rsp+1C0h] [rbp+C0h] BYREF
  PERESOURCE *v867; // [rsp+1C8h] [rbp+C8h] BYREF
  tagDomLock *v868; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v869; // [rsp+1D8h] [rbp+D8h]
  unsigned __int8 v870; // [rsp+1E0h] [rbp+E0h]
  GUID ActivityId; // [rsp+1E4h] [rbp+E4h] BYREF
  __int64 v872; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 v873; // [rsp+200h] [rbp+100h]
  GUID v874; // [rsp+204h] [rbp+104h] BYREF
  __int64 v875; // [rsp+218h] [rbp+118h]
  unsigned __int8 v876; // [rsp+220h] [rbp+120h]
  GUID v877; // [rsp+224h] [rbp+124h] BYREF
  __int64 v878; // [rsp+238h] [rbp+138h]
  unsigned __int8 v879; // [rsp+240h] [rbp+140h]
  GUID v880; // [rsp+244h] [rbp+144h] BYREF
  __int64 v881; // [rsp+258h] [rbp+158h]
  unsigned __int8 v882; // [rsp+260h] [rbp+160h]
  GUID v883; // [rsp+264h] [rbp+164h] BYREF
  __int64 v884; // [rsp+278h] [rbp+178h]
  unsigned __int8 v885; // [rsp+280h] [rbp+180h]
  GUID v886; // [rsp+284h] [rbp+184h] BYREF
  __int64 v887; // [rsp+298h] [rbp+198h]
  unsigned __int8 v888; // [rsp+2A0h] [rbp+1A0h]
  GUID v889; // [rsp+2A4h] [rbp+1A4h] BYREF
  __int64 v890; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 v891; // [rsp+2C0h] [rbp+1C0h]
  GUID v892; // [rsp+2C4h] [rbp+1C4h] BYREF
  __int64 v893; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int8 v894; // [rsp+2E0h] [rbp+1E0h]
  GUID v895; // [rsp+2E4h] [rbp+1E4h] BYREF
  __int64 v896; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int8 v897; // [rsp+300h] [rbp+200h]
  GUID v898; // [rsp+304h] [rbp+204h] BYREF
  __int64 v899; // [rsp+318h] [rbp+218h]
  unsigned __int8 v900; // [rsp+320h] [rbp+220h]
  GUID v901; // [rsp+324h] [rbp+224h] BYREF
  __int64 v902; // [rsp+338h] [rbp+238h]
  unsigned __int8 v903; // [rsp+340h] [rbp+240h]
  GUID v904; // [rsp+344h] [rbp+244h] BYREF
  __int64 v905; // [rsp+358h] [rbp+258h]
  unsigned __int8 v906; // [rsp+360h] [rbp+260h]
  GUID v907; // [rsp+364h] [rbp+264h] BYREF
  __int64 v908; // [rsp+378h] [rbp+278h]
  unsigned __int8 v909; // [rsp+380h] [rbp+280h]
  GUID v910; // [rsp+384h] [rbp+284h] BYREF
  __int64 v911; // [rsp+398h] [rbp+298h]
  unsigned __int8 v912; // [rsp+3A0h] [rbp+2A0h]
  GUID v913; // [rsp+3A4h] [rbp+2A4h] BYREF
  __int64 v914; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int8 v915; // [rsp+3C0h] [rbp+2C0h]
  GUID v916; // [rsp+3C4h] [rbp+2C4h] BYREF
  __int64 v917; // [rsp+3D8h] [rbp+2D8h]
  unsigned __int8 v918; // [rsp+3E0h] [rbp+2E0h]
  GUID v919; // [rsp+3E4h] [rbp+2E4h] BYREF
  __int64 v920; // [rsp+3F8h] [rbp+2F8h]
  unsigned __int8 v921; // [rsp+400h] [rbp+300h]
  GUID v922; // [rsp+404h] [rbp+304h] BYREF
  __int64 v923; // [rsp+418h] [rbp+318h]
  unsigned __int8 v924; // [rsp+420h] [rbp+320h]
  GUID v925; // [rsp+424h] [rbp+324h] BYREF
  __int64 v926; // [rsp+438h] [rbp+338h]
  unsigned __int8 v927; // [rsp+440h] [rbp+340h]
  GUID v928; // [rsp+444h] [rbp+344h] BYREF
  __int64 v929; // [rsp+458h] [rbp+358h]
  unsigned __int8 v930; // [rsp+460h] [rbp+360h]
  GUID v931; // [rsp+464h] [rbp+364h] BYREF
  __int64 v932; // [rsp+478h] [rbp+378h]
  unsigned __int8 v933; // [rsp+480h] [rbp+380h]
  GUID v934; // [rsp+484h] [rbp+384h] BYREF
  __int64 v935; // [rsp+498h] [rbp+398h]
  unsigned __int8 v936; // [rsp+4A0h] [rbp+3A0h]
  GUID v937; // [rsp+4A4h] [rbp+3A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v938; // [rsp+4B8h] [rbp+3B8h] BYREF
  int *v939; // [rsp+4D8h] [rbp+3D8h]
  __int64 v940; // [rsp+4E0h] [rbp+3E0h]
  struct _EVENT_DATA_DESCRIPTOR v941; // [rsp+4E8h] [rbp+3E8h] BYREF
  int *v942; // [rsp+508h] [rbp+408h]
  __int64 v943; // [rsp+510h] [rbp+410h]
  struct _EVENT_DATA_DESCRIPTOR v944; // [rsp+518h] [rbp+418h] BYREF
  int *v945; // [rsp+538h] [rbp+438h]
  __int64 v946; // [rsp+540h] [rbp+440h]
  struct _EVENT_DATA_DESCRIPTOR v947; // [rsp+548h] [rbp+448h] BYREF
  int *v948; // [rsp+568h] [rbp+468h]
  __int64 v949; // [rsp+570h] [rbp+470h]
  struct _EVENT_DATA_DESCRIPTOR v950; // [rsp+578h] [rbp+478h] BYREF
  int *v951; // [rsp+598h] [rbp+498h]
  __int64 v952; // [rsp+5A0h] [rbp+4A0h]
  struct _EVENT_DATA_DESCRIPTOR v953; // [rsp+5A8h] [rbp+4A8h] BYREF
  int *v954; // [rsp+5C8h] [rbp+4C8h]
  __int64 v955; // [rsp+5D0h] [rbp+4D0h]
  struct _EVENT_DATA_DESCRIPTOR v956; // [rsp+5D8h] [rbp+4D8h] BYREF
  int *v957; // [rsp+5F8h] [rbp+4F8h]
  __int64 v958; // [rsp+600h] [rbp+500h]
  struct _EVENT_DATA_DESCRIPTOR v959; // [rsp+608h] [rbp+508h] BYREF
  int *v960; // [rsp+628h] [rbp+528h]
  __int64 v961; // [rsp+630h] [rbp+530h]
  struct _EVENT_DATA_DESCRIPTOR v962; // [rsp+638h] [rbp+538h] BYREF
  int *v963; // [rsp+658h] [rbp+558h]
  __int64 v964; // [rsp+660h] [rbp+560h]
  struct _EVENT_DATA_DESCRIPTOR v965; // [rsp+668h] [rbp+568h] BYREF
  int *v966; // [rsp+688h] [rbp+588h]
  __int64 v967; // [rsp+690h] [rbp+590h]
  struct _EVENT_DATA_DESCRIPTOR v968; // [rsp+698h] [rbp+598h] BYREF
  int *v969; // [rsp+6B8h] [rbp+5B8h]
  __int64 v970; // [rsp+6C0h] [rbp+5C0h]
  struct _EVENT_DATA_DESCRIPTOR v971; // [rsp+6C8h] [rbp+5C8h] BYREF
  int *v972; // [rsp+6E8h] [rbp+5E8h]
  __int64 v973; // [rsp+6F0h] [rbp+5F0h]
  struct _EVENT_DATA_DESCRIPTOR v974; // [rsp+6F8h] [rbp+5F8h] BYREF
  int *v975; // [rsp+718h] [rbp+618h]
  __int64 v976; // [rsp+720h] [rbp+620h]
  struct _EVENT_DATA_DESCRIPTOR v977; // [rsp+728h] [rbp+628h] BYREF
  int *v978; // [rsp+748h] [rbp+648h]
  __int64 v979; // [rsp+750h] [rbp+650h]
  struct _EVENT_DATA_DESCRIPTOR v980; // [rsp+758h] [rbp+658h] BYREF
  int *v981; // [rsp+778h] [rbp+678h]
  __int64 v982; // [rsp+780h] [rbp+680h]
  struct _EVENT_DATA_DESCRIPTOR v983; // [rsp+788h] [rbp+688h] BYREF
  int *v984; // [rsp+7A8h] [rbp+6A8h]
  __int64 v985; // [rsp+7B0h] [rbp+6B0h]
  struct _EVENT_DATA_DESCRIPTOR v986; // [rsp+7B8h] [rbp+6B8h] BYREF
  int *v987; // [rsp+7D8h] [rbp+6D8h]
  __int64 v988; // [rsp+7E0h] [rbp+6E0h]
  struct _EVENT_DATA_DESCRIPTOR v989; // [rsp+7E8h] [rbp+6E8h] BYREF
  int *v990; // [rsp+808h] [rbp+708h]
  __int64 v991; // [rsp+810h] [rbp+710h]
  struct _EVENT_DATA_DESCRIPTOR v992; // [rsp+818h] [rbp+718h] BYREF
  int *v993; // [rsp+838h] [rbp+738h]
  __int64 v994; // [rsp+840h] [rbp+740h]
  struct _EVENT_DATA_DESCRIPTOR v995; // [rsp+848h] [rbp+748h] BYREF
  int *v996; // [rsp+868h] [rbp+768h]
  __int64 v997; // [rsp+870h] [rbp+770h]
  struct _EVENT_DATA_DESCRIPTOR v998; // [rsp+878h] [rbp+778h] BYREF
  int *v999; // [rsp+898h] [rbp+798h]
  __int64 v1000; // [rsp+8A0h] [rbp+7A0h]
  struct _EVENT_DATA_DESCRIPTOR v1001; // [rsp+8A8h] [rbp+7A8h] BYREF
  int *v1002; // [rsp+8C8h] [rbp+7C8h]
  __int64 v1003; // [rsp+8D0h] [rbp+7D0h]
  struct _EVENT_DATA_DESCRIPTOR v1004; // [rsp+8D8h] [rbp+7D8h] BYREF
  int *v1005; // [rsp+8F8h] [rbp+7F8h]
  __int64 v1006; // [rsp+900h] [rbp+800h]
  struct _EVENT_DATA_DESCRIPTOR v1007; // [rsp+908h] [rbp+808h] BYREF
  int *v1008; // [rsp+928h] [rbp+828h]
  __int64 v1009; // [rsp+930h] [rbp+830h]
  struct _EVENT_DATA_DESCRIPTOR v1010; // [rsp+938h] [rbp+838h] BYREF
  int *v1011; // [rsp+958h] [rbp+858h]
  __int64 v1012; // [rsp+960h] [rbp+860h]
  struct _EVENT_DATA_DESCRIPTOR v1013; // [rsp+968h] [rbp+868h] BYREF
  int *v1014; // [rsp+988h] [rbp+888h]
  __int64 v1015; // [rsp+990h] [rbp+890h]
  struct _EVENT_DATA_DESCRIPTOR v1016; // [rsp+998h] [rbp+898h] BYREF
  int *v1017; // [rsp+9B8h] [rbp+8B8h]
  __int64 v1018; // [rsp+9C0h] [rbp+8C0h]
  struct _EVENT_DATA_DESCRIPTOR v1019; // [rsp+9C8h] [rbp+8C8h] BYREF
  int *v1020; // [rsp+9E8h] [rbp+8E8h]
  __int64 v1021; // [rsp+9F0h] [rbp+8F0h]
  struct _EVENT_DATA_DESCRIPTOR v1022; // [rsp+9F8h] [rbp+8F8h] BYREF
  int *v1023; // [rsp+A18h] [rbp+918h]
  __int64 v1024; // [rsp+A20h] [rbp+920h]
  struct _EVENT_DATA_DESCRIPTOR v1025; // [rsp+A28h] [rbp+928h] BYREF
  int *v1026; // [rsp+A48h] [rbp+948h]
  __int64 v1027; // [rsp+A50h] [rbp+950h]
  struct _EVENT_DATA_DESCRIPTOR v1028; // [rsp+A58h] [rbp+958h] BYREF
  int *v1029; // [rsp+A78h] [rbp+978h]
  __int64 v1030; // [rsp+A80h] [rbp+980h]
  struct _EVENT_DATA_DESCRIPTOR v1031; // [rsp+A88h] [rbp+988h] BYREF
  int *v1032; // [rsp+AA8h] [rbp+9A8h]
  __int64 v1033; // [rsp+AB0h] [rbp+9B0h]
  struct _EVENT_DATA_DESCRIPTOR v1034; // [rsp+AB8h] [rbp+9B8h] BYREF
  int *v1035; // [rsp+AD8h] [rbp+9D8h]
  __int64 v1036; // [rsp+AE0h] [rbp+9E0h]
  struct _EVENT_DATA_DESCRIPTOR v1037; // [rsp+AE8h] [rbp+9E8h] BYREF
  int *v1038; // [rsp+B08h] [rbp+A08h]
  __int64 v1039; // [rsp+B10h] [rbp+A10h]
  struct _EVENT_DATA_DESCRIPTOR v1040; // [rsp+B18h] [rbp+A18h] BYREF
  int *v1041; // [rsp+B38h] [rbp+A38h]
  __int64 v1042; // [rsp+B40h] [rbp+A40h]
  struct _EVENT_DATA_DESCRIPTOR v1043; // [rsp+B48h] [rbp+A48h] BYREF
  int *v1044; // [rsp+B68h] [rbp+A68h]
  __int64 v1045; // [rsp+B70h] [rbp+A70h]
  struct _EVENT_DATA_DESCRIPTOR v1046; // [rsp+B78h] [rbp+A78h] BYREF
  int *v1047; // [rsp+B98h] [rbp+A98h]
  __int64 v1048; // [rsp+BA0h] [rbp+AA0h]
  struct _EVENT_DATA_DESCRIPTOR v1049; // [rsp+BA8h] [rbp+AA8h] BYREF
  int *v1050; // [rsp+BC8h] [rbp+AC8h]
  __int64 v1051; // [rsp+BD0h] [rbp+AD0h]
  struct _EVENT_DATA_DESCRIPTOR v1052; // [rsp+BD8h] [rbp+AD8h] BYREF
  int *v1053; // [rsp+BF8h] [rbp+AF8h]
  __int64 v1054; // [rsp+C00h] [rbp+B00h]
  struct _EVENT_DATA_DESCRIPTOR v1055; // [rsp+C08h] [rbp+B08h] BYREF
  int *v1056; // [rsp+C28h] [rbp+B28h]
  __int64 v1057; // [rsp+C30h] [rbp+B30h]
  struct _EVENT_DATA_DESCRIPTOR v1058; // [rsp+C38h] [rbp+B38h] BYREF
  int *v1059; // [rsp+C58h] [rbp+B58h]
  __int64 v1060; // [rsp+C60h] [rbp+B60h]
  struct _EVENT_DATA_DESCRIPTOR v1061; // [rsp+C68h] [rbp+B68h] BYREF
  int *v1062; // [rsp+C88h] [rbp+B88h]
  __int64 v1063; // [rsp+C90h] [rbp+B90h]
  struct _EVENT_DATA_DESCRIPTOR v1064; // [rsp+C98h] [rbp+B98h] BYREF
  int *v1065; // [rsp+CB8h] [rbp+BB8h]
  __int64 v1066; // [rsp+CC0h] [rbp+BC0h]
  struct _EVENT_DATA_DESCRIPTOR v1067; // [rsp+CC8h] [rbp+BC8h] BYREF
  int *v1068; // [rsp+CE8h] [rbp+BE8h]
  __int64 v1069; // [rsp+CF0h] [rbp+BF0h]
  struct _EVENT_DATA_DESCRIPTOR v1070; // [rsp+CF8h] [rbp+BF8h] BYREF
  int *v1071; // [rsp+D18h] [rbp+C18h]
  __int64 v1072; // [rsp+D20h] [rbp+C20h]
  struct _EVENT_DATA_DESCRIPTOR v1073; // [rsp+D28h] [rbp+C28h] BYREF
  int *v1074; // [rsp+D48h] [rbp+C48h]
  __int64 v1075; // [rsp+D50h] [rbp+C50h]
  struct _EVENT_DATA_DESCRIPTOR v1076; // [rsp+D58h] [rbp+C58h] BYREF
  int *v1077; // [rsp+D78h] [rbp+C78h]
  __int64 v1078; // [rsp+D80h] [rbp+C80h]
  struct _EVENT_DATA_DESCRIPTOR v1079; // [rsp+D88h] [rbp+C88h] BYREF
  int *v1080; // [rsp+DA8h] [rbp+CA8h]
  __int64 v1081; // [rsp+DB0h] [rbp+CB0h]
  struct _EVENT_DATA_DESCRIPTOR v1082; // [rsp+DB8h] [rbp+CB8h] BYREF
  int *v1083; // [rsp+DD8h] [rbp+CD8h]
  __int64 v1084; // [rsp+DE0h] [rbp+CE0h]
  struct _EVENT_DATA_DESCRIPTOR v1085; // [rsp+DE8h] [rbp+CE8h] BYREF
  int *v1086; // [rsp+E08h] [rbp+D08h]
  __int64 v1087; // [rsp+E10h] [rbp+D10h]
  struct _EVENT_DATA_DESCRIPTOR v1088; // [rsp+E18h] [rbp+D18h] BYREF
  int *v1089; // [rsp+E38h] [rbp+D38h]
  __int64 v1090; // [rsp+E40h] [rbp+D40h]
  struct _EVENT_DATA_DESCRIPTOR v1091; // [rsp+E48h] [rbp+D48h] BYREF
  int *v1092; // [rsp+E68h] [rbp+D68h]
  __int64 v1093; // [rsp+E70h] [rbp+D70h]
  struct _EVENT_DATA_DESCRIPTOR v1094; // [rsp+E78h] [rbp+D78h] BYREF
  int *v1095; // [rsp+E98h] [rbp+D98h]
  __int64 v1096; // [rsp+EA0h] [rbp+DA0h]
  struct _EVENT_DATA_DESCRIPTOR v1097; // [rsp+EA8h] [rbp+DA8h] BYREF
  int *v1098; // [rsp+EC8h] [rbp+DC8h]
  __int64 v1099; // [rsp+ED0h] [rbp+DD0h]
  struct _EVENT_DATA_DESCRIPTOR v1100; // [rsp+ED8h] [rbp+DD8h] BYREF
  int *v1101; // [rsp+EF8h] [rbp+DF8h]
  __int64 v1102; // [rsp+F00h] [rbp+E00h]
  struct _EVENT_DATA_DESCRIPTOR v1103; // [rsp+F08h] [rbp+E08h] BYREF
  int *v1104; // [rsp+F28h] [rbp+E28h]
  __int64 v1105; // [rsp+F30h] [rbp+E30h]
  struct _EVENT_DATA_DESCRIPTOR v1106; // [rsp+F38h] [rbp+E38h] BYREF
  int *v1107; // [rsp+F58h] [rbp+E58h]
  __int64 v1108; // [rsp+F60h] [rbp+E60h]
  struct _EVENT_DATA_DESCRIPTOR v1109; // [rsp+F68h] [rbp+E68h] BYREF
  int *v1110; // [rsp+F88h] [rbp+E88h]
  __int64 v1111; // [rsp+F90h] [rbp+E90h]
  struct _EVENT_DATA_DESCRIPTOR v1112; // [rsp+F98h] [rbp+E98h] BYREF
  int *v1113; // [rsp+FB8h] [rbp+EB8h]
  __int64 v1114; // [rsp+FC0h] [rbp+EC0h]
  struct _EVENT_DATA_DESCRIPTOR v1115; // [rsp+FC8h] [rbp+EC8h] BYREF
  int *v1116; // [rsp+FE8h] [rbp+EE8h]
  __int64 v1117; // [rsp+FF0h] [rbp+EF0h]
  struct _EVENT_DATA_DESCRIPTOR v1118; // [rsp+FF8h] [rbp+EF8h] BYREF
  int *v1119; // [rsp+1018h] [rbp+F18h]
  __int64 v1120; // [rsp+1020h] [rbp+F20h]
  struct _EVENT_DATA_DESCRIPTOR v1121; // [rsp+1028h] [rbp+F28h] BYREF
  int *v1122; // [rsp+1048h] [rbp+F48h]
  __int64 v1123; // [rsp+1050h] [rbp+F50h]
  struct _EVENT_DATA_DESCRIPTOR v1124; // [rsp+1058h] [rbp+F58h] BYREF
  int *v1125; // [rsp+1078h] [rbp+F78h]
  __int64 v1126; // [rsp+1080h] [rbp+F80h]
  struct _EVENT_DATA_DESCRIPTOR v1127; // [rsp+1088h] [rbp+F88h] BYREF
  int *v1128; // [rsp+10A8h] [rbp+FA8h]
  __int64 v1129; // [rsp+10B0h] [rbp+FB0h]
  struct _EVENT_DATA_DESCRIPTOR v1130; // [rsp+10B8h] [rbp+FB8h] BYREF
  int *v1131; // [rsp+10D8h] [rbp+FD8h]
  __int64 v1132; // [rsp+10E0h] [rbp+FE0h]
  struct _EVENT_DATA_DESCRIPTOR v1133; // [rsp+10E8h] [rbp+FE8h] BYREF
  int *v1134; // [rsp+1108h] [rbp+1008h]
  __int64 v1135; // [rsp+1110h] [rbp+1010h]
  struct _EVENT_DATA_DESCRIPTOR v1136; // [rsp+1118h] [rbp+1018h] BYREF
  int *v1137; // [rsp+1138h] [rbp+1038h]
  __int64 v1138; // [rsp+1140h] [rbp+1040h]
  struct _EVENT_DATA_DESCRIPTOR v1139; // [rsp+1148h] [rbp+1048h] BYREF
  int *v1140; // [rsp+1168h] [rbp+1068h]
  __int64 v1141; // [rsp+1170h] [rbp+1070h]
  struct _EVENT_DATA_DESCRIPTOR v1142; // [rsp+1178h] [rbp+1078h] BYREF
  int *v1143; // [rsp+1198h] [rbp+1098h]
  __int64 v1144; // [rsp+11A0h] [rbp+10A0h]

  v6 = 0;
  v7 = a4;
  v856 = (unsigned int *)a4;
  v8 = a3;
  v789 = a3;
  v9 = a1;
  v784 = 0;
  v786 = 0LL;
  if ( !gbPowerCalloutsReady )
    return 3221225473LL;
  if ( !(_DWORD)a1 )
  {
    if ( gbVideoInitialized )
      goto LABEL_4;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    ActivityId = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v870 = 1;
      v108 = PsGetCurrentThreadWin32Thread(v106);
      v869 = v108;
      if ( v108 && (*(int *)(v108 + 24) > 0 || *(_DWORD *)(v869 + 48)) )
      {
        EtwActivityIdControl(3u, &ActivityId);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v109, v110) )
          {
            v848 = v870;
            v940 = 4LL;
            v939 = &v848;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &ActivityId,
              0LL,
              3u,
              &v938);
          }
        }
      }
    }
    else
    {
      v869 = 0LL;
    }
    v111 = 0LL;
    while ( 1 )
    {
      v112 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v112 )
        v111 = *v112;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v114, v113);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v117, v116) == gpepCSRSS && v111 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v111 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v869
      && (*(_DWORD *)(v869 + 48) || *(int *)(v869 + 24) > 0) )
    {
      *(_DWORD *)(v869 + 44) = 1;
      *(GUID *)(v869 + 28) = ActivityId;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v118) )
        {
          v787 = v870;
          v943 = 4LL;
          v942 = &v787;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &ActivityId,
            0LL,
            3u,
            &v941);
          v119 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v119 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v119, v120) )
        {
          v788 = v870;
          v946 = 4LL;
          v945 = &v788;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &ActivityId,
            0LL,
            3u,
            &v944);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v111;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v123 = PsGetCurrentProcess(v122, v121),
          ProcessSessionId = PsGetProcessSessionIdEx(v123),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      CurrentThread = KeGetCurrentThread();
      v128 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v128 = *ThreadWin32Thread;
      }
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v129);
      v126 = CurrentProcessWin32Process;
      if ( v128
        && CurrentProcessWin32Process
        && (*(_DWORD *)(v128 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v128 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
      {
        DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v132);
        if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v134);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
        v136 = gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)v136 + 2);
            *((_QWORD *)v136 + 2) = 0LL;
            if ( !*(_DWORD *)(*(_QWORD *)v136 + 8LL) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v135);
            v138 = (PERESOURCE *)GetDomainLockRef(12LL);
            if ( v138 == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v137);
            ExReleaseResourceAndLeaveCriticalRegion(*v138);
            HMUnlockObject(*(_QWORD *)v136);
            tagDomLock::LockExclusive((tagDomLock *)v138);
            v136 = gpducstulHead;
          }
          while ( gpducstulHead );
          v8 = v789;
        }
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        v7 = (int *)v856;
      }
    }
    UserSessionSwitchLeaveCrit(v126);
  }
  if ( !gbVideoInitialized )
    return 3221225473LL;
LABEL_4:
  if ( !v9 )
  {
    if ( v8 != 20 || !v7 )
      return 3221225473LL;
    v262 = *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 - *(_QWORD *)v7;
    if ( *(_QWORD *)&GUID_CONSOLE_VIDEO_TIMEOUT.Data1 == *(_QWORD *)v7 )
      v262 = *(_QWORD *)GUID_CONSOLE_VIDEO_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
    if ( v262 )
    {
      v295 = *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&GUID_TS_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
        v295 = *(_QWORD *)GUID_TS_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
      if ( v295 )
      {
        v328 = *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 - *(_QWORD *)v7;
        if ( *(_QWORD *)&GUID_CONSOLE_INPUT_TIMEOUT.Data1 == *(_QWORD *)v7 )
          v328 = *(_QWORD *)GUID_CONSOLE_INPUT_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
        if ( v328 )
        {
          v361 = *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 - *(_QWORD *)v7;
          if ( *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 == *(_QWORD *)v7 )
            v361 = *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4 - *((_QWORD *)v7 + 1);
          if ( v361 )
          {
            v394 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v394 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v394 )
            {
              v396 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v396 )
                v396[1] = KeQueryPerformanceCounter(0LL);
              v904 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v903 = 1;
                v397 = PsGetCurrentThreadWin32Thread(v395);
                v902 = v397;
                if ( v397 && (*(int *)(v397 + 24) > 0 || *(_DWORD *)(v902 + 48)) )
                {
                  EtwActivityIdControl(3u, &v904);
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v398, v399) )
                    {
                      v820 = v903;
                      v1039 = 4LL;
                      v1038 = &v820;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199F7,
                        &v904,
                        0LL,
                        3u,
                        &v1037);
                    }
                  }
                }
              }
              else
              {
                v902 = 0LL;
              }
              v400 = 0LL;
              while ( 1 )
              {
                v401 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v401 )
                  v400 = *v401;
                v404 = (PVOID)PsGetCurrentProcess(v403, v402);
                if ( v404 )
                {
                  if ( v404 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v406, v405) == gpepCSRSS
                  && v400 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v400 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v902
                && (*(_DWORD *)(v902 + 48) || *(int *)(v902 + 24) > 0) )
              {
                *(_DWORD *)(v902 + 44) = 1;
                *(GUID *)(v902 + 28) = v904;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v407) )
                  {
                    v821 = v903;
                    v1042 = 4LL;
                    v1041 = &v821;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &v904,
                      0LL,
                      3u,
                      &v1040);
                    v408 = (unsigned int)dword_1C024C960;
                  }
                  if ( (unsigned int)v408 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v408, v409) )
                  {
                    v822 = v903;
                    v1045 = 4LL;
                    v1044 = &v822;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &v904,
                      0LL,
                      3u,
                      &v1043);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v400;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v412 = PsGetCurrentProcess(v411, v410),
                    v413 = PsGetProcessSessionIdEx(v412),
                    v414 = PsGetCurrentThreadProcess(),
                    v413 == (unsigned int)PsGetProcessSessionIdEx(v414)) )
              {
                v415 = KeGetCurrentThread();
                v416 = 0LL;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v418 = (__int64 *)PsGetThreadWin32Thread(v415);
                  if ( v418 )
                    v416 = *v418;
                }
                v419 = PsGetCurrentProcessWin32Process(v417);
                if ( v416 )
                {
                  if ( v419 )
                  {
                    if ( (*(_DWORD *)(v416 + 480) & 0x1000000) != 0 )
                    {
                      v61 = *(unsigned int *)(v416 + 1216);
                      if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v419 + 12) & 0x8000) != 0 )
                      {
                        v421 = (PERESOURCE *)GetDomainLockRef(12LL);
                        if ( v421 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v420);
                        if ( ExIsResourceAcquiredExclusiveLite(*v421) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v422);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v421);
                        while ( 1 )
                        {
                          v426 = gpducstulHead;
                          if ( !gpducstulHead )
                            break;
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                          *((_QWORD *)v426 + 2) = 0LL;
                          if ( !*(_DWORD *)(*(_QWORD *)v426 + 8LL) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v423);
                          v425 = (PERESOURCE *)GetDomainLockRef(12LL);
                          if ( v425 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v424);
                          ExReleaseResourceAndLeaveCriticalRegion(*v425);
                          HMUnlockObject(*(_QWORD *)v426);
                          tagDomLock::LockExclusive((tagDomLock *)v425);
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v421);
                      }
                    }
                  }
                }
              }
              dword_1C0253160 = v7[4];
              goto LABEL_91;
            }
            v427 = *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
              v427 = *(_QWORD *)GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
            if ( !v427 )
            {
              v429 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v429 )
                v429[1] = KeQueryPerformanceCounter(0LL);
              v907 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v906 = 1;
                v430 = PsGetCurrentThreadWin32Thread(v428);
                v905 = v430;
                if ( v430 && (*(int *)(v430 + 24) > 0 || *(_DWORD *)(v905 + 48)) )
                {
                  EtwActivityIdControl(3u, &v907);
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v431, v432) )
                    {
                      v823 = v906;
                      v1048 = 4LL;
                      v1047 = &v823;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199F7,
                        &v907,
                        0LL,
                        3u,
                        &v1046);
                    }
                  }
                }
              }
              else
              {
                v905 = 0LL;
              }
              v433 = 0LL;
              while ( 1 )
              {
                v434 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v434 )
                  v433 = *v434;
                v437 = (PVOID)PsGetCurrentProcess(v436, v435);
                if ( v437 )
                {
                  if ( v437 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v439, v438) == gpepCSRSS
                  && v433 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v433 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v905
                && (*(_DWORD *)(v905 + 48) || *(int *)(v905 + 24) > 0) )
              {
                *(_DWORD *)(v905 + 44) = 1;
                *(GUID *)(v905 + 28) = v907;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v440) )
                  {
                    v824 = v906;
                    v1051 = 4LL;
                    v1050 = &v824;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &v907,
                      0LL,
                      3u,
                      &v1049);
                    v441 = (unsigned int)dword_1C024C960;
                  }
                  if ( (unsigned int)v441 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v441, v442) )
                  {
                    v825 = v906;
                    v1054 = 4LL;
                    v1053 = &v825;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &v907,
                      0LL,
                      3u,
                      &v1052);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v433;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v445 = PsGetCurrentProcess(v444, v443),
                    v446 = PsGetProcessSessionIdEx(v445),
                    v447 = PsGetCurrentThreadProcess(),
                    v446 == (unsigned int)PsGetProcessSessionIdEx(v447)) )
              {
                v448 = KeGetCurrentThread();
                v449 = 0LL;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v451 = (__int64 *)PsGetThreadWin32Thread(v448);
                  if ( v451 )
                    v449 = *v451;
                }
                v452 = PsGetCurrentProcessWin32Process(v450);
                if ( v449 )
                {
                  if ( v452 )
                  {
                    if ( (*(_DWORD *)(v449 + 480) & 0x1000000) != 0 )
                    {
                      v61 = *(unsigned int *)(v449 + 1216);
                      if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v452 + 12) & 0x8000) != 0 )
                      {
                        v454 = (PERESOURCE *)GetDomainLockRef(12LL);
                        if ( v454 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v453);
                        if ( ExIsResourceAcquiredExclusiveLite(*v454) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v455);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v454);
                        while ( 1 )
                        {
                          v459 = gpducstulHead;
                          if ( !gpducstulHead )
                            break;
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                          *((_QWORD *)v459 + 2) = 0LL;
                          if ( !*(_DWORD *)(*(_QWORD *)v459 + 8LL) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v456);
                          v458 = (PERESOURCE *)GetDomainLockRef(12LL);
                          if ( v458 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v457);
                          ExReleaseResourceAndLeaveCriticalRegion(*v458);
                          HMUnlockObject(*(_QWORD *)v459);
                          tagDomLock::LockExclusive((tagDomLock *)v458);
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v454);
                      }
                    }
                  }
                }
              }
              dword_1C0253158 = v7[4];
              goto LABEL_91;
            }
            v460 = *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_VIDEO_ALS_OFFSET.Data1 == *(_QWORD *)v7 )
              v460 = *(_QWORD *)GUID_VIDEO_ALS_OFFSET.Data4 - *((_QWORD *)v7 + 1);
            if ( !v460 )
            {
              v462 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v462 )
                v462[1] = KeQueryPerformanceCounter(0LL);
              v910 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v909 = 1;
                v463 = PsGetCurrentThreadWin32Thread(v461);
                v908 = v463;
                if ( v463 && (*(int *)(v463 + 24) > 0 || *(_DWORD *)(v908 + 48)) )
                {
                  EtwActivityIdControl(3u, &v910);
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v464, v465) )
                    {
                      v826 = v909;
                      v1057 = 4LL;
                      v1056 = &v826;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199F7,
                        &v910,
                        0LL,
                        3u,
                        &v1055);
                    }
                  }
                }
              }
              else
              {
                v908 = 0LL;
              }
              v466 = 0LL;
              while ( 1 )
              {
                v467 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v467 )
                  v466 = *v467;
                v470 = (PVOID)PsGetCurrentProcess(v469, v468);
                if ( v470 )
                {
                  if ( v470 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v472, v471) == gpepCSRSS
                  && v466 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v466 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v908
                && (*(_DWORD *)(v908 + 48) || *(int *)(v908 + 24) > 0) )
              {
                *(_DWORD *)(v908 + 44) = 1;
                *(GUID *)(v908 + 28) = v910;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v473) )
                  {
                    v827 = v909;
                    v1060 = 4LL;
                    v1059 = &v827;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &v910,
                      0LL,
                      3u,
                      &v1058);
                    v474 = (unsigned int)dword_1C024C960;
                  }
                  if ( (unsigned int)v474 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v474, v475) )
                  {
                    v828 = v909;
                    v1063 = 4LL;
                    v1062 = &v828;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &v910,
                      0LL,
                      3u,
                      &v1061);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v466;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v478 = PsGetCurrentProcess(v477, v476),
                    v479 = PsGetProcessSessionIdEx(v478),
                    v480 = PsGetCurrentThreadProcess(),
                    v479 == (unsigned int)PsGetProcessSessionIdEx(v480)) )
              {
                v482 = KeGetCurrentThread();
                v483 = 0LL;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v485 = (__int64 *)PsGetThreadWin32Thread(v482);
                  if ( v485 )
                    v483 = *v485;
                }
                v486 = PsGetCurrentProcessWin32Process(v484);
                if ( v483 )
                {
                  if ( v486 )
                  {
                    if ( (*(_DWORD *)(v483 + 480) & 0x1000000) != 0 )
                    {
                      v481 = *(unsigned int *)(v483 + 1216);
                      if ( (v481 & 0x80u) == 0LL && (*(_DWORD *)(v486 + 12) & 0x8000) != 0 )
                      {
                        v488 = (PERESOURCE *)GetDomainLockRef(12LL);
                        if ( v488 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v487);
                        if ( ExIsResourceAcquiredExclusiveLite(*v488) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v489);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v488);
                        while ( 1 )
                        {
                          v493 = gpducstulHead;
                          if ( !gpducstulHead )
                            break;
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                          *((_QWORD *)v493 + 2) = 0LL;
                          if ( !*(_DWORD *)(*(_QWORD *)v493 + 8LL) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v490);
                          v492 = (PERESOURCE *)GetDomainLockRef(12LL);
                          if ( v492 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v491);
                          ExReleaseResourceAndLeaveCriticalRegion(*v492);
                          HMUnlockObject(*(_QWORD *)v493);
                          tagDomLock::LockExclusive((tagDomLock *)v492);
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v488);
                      }
                    }
                  }
                }
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v481);
              dword_1C0253168 = v7[4];
              goto LABEL_91;
            }
            v494 = *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 == *(_QWORD *)v7 )
              v494 = *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4 - *((_QWORD *)v7 + 1);
            if ( !v494 )
              goto LABEL_1335;
            v494 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
            if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
              v494 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
            if ( v494 )
            {
              v495 = *(_QWORD *)&GUID_BATTERY_COUNT.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_BATTERY_COUNT.Data1 == *(_QWORD *)v7 )
                v495 = *(_QWORD *)GUID_BATTERY_COUNT.Data4 - *((_QWORD *)v7 + 1);
              if ( v495 )
              {
                v529 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *(_QWORD *)v7 )
                  v529 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v529 )
                {
                  v531 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v531 )
                    v531[1] = KeQueryPerformanceCounter(0LL);
                  v916 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v915 = 1;
                    v532 = PsGetCurrentThreadWin32Thread(v530);
                    v914 = v532;
                    if ( v532 && (*(int *)(v532 + 24) > 0 || *(_DWORD *)(v914 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v916);
                      if ( (unsigned int)dword_1C024C960 > 6 )
                      {
                        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v533, v534) )
                        {
                          v832 = v915;
                          v1075 = 4LL;
                          v1074 = &v832;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C024C960,
                            (unsigned __int8 *)dword_1C02199F7,
                            &v916,
                            0LL,
                            3u,
                            &v1073);
                        }
                      }
                    }
                  }
                  else
                  {
                    v914 = 0LL;
                  }
                  v535 = 0LL;
                  while ( 1 )
                  {
                    v536 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v536 )
                      v535 = *v536;
                    v539 = (PVOID)PsGetCurrentProcess(v538, v537);
                    if ( v539 )
                    {
                      if ( v539 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v541, v540) == gpepCSRSS
                      && v535 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v535 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v914
                    && (*(_DWORD *)(v914 + 48) || *(int *)(v914 + 24) > 0) )
                  {
                    *(_DWORD *)(v914 + 44) = 1;
                    *(GUID *)(v914 + 28) = v916;
                    if ( (unsigned int)dword_1C024C960 > 6 )
                    {
                      if ( (unsigned __int8)tlgKeywordOn(
                                              &dword_1C024C960,
                                              0x2000LL,
                                              (unsigned int)dword_1C024C960,
                                              v542) )
                      {
                        v833 = v915;
                        v1078 = 4LL;
                        v1077 = &v833;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199A0,
                          &v916,
                          0LL,
                          3u,
                          &v1076);
                        v543 = (unsigned int)dword_1C024C960;
                      }
                      if ( (unsigned int)v543 > 6
                        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v543, v544) )
                      {
                        v834 = v915;
                        v1081 = 4LL;
                        v1080 = &v834;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199CD,
                          &v916,
                          0LL,
                          3u,
                          &v1079);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v535;
                  gbValidateHandleForIL = 1;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v547 = PsGetCurrentProcess(v546, v545),
                        v548 = PsGetProcessSessionIdEx(v547),
                        v549 = PsGetCurrentThreadProcess(),
                        v548 == (unsigned int)PsGetProcessSessionIdEx(v549)) )
                  {
                    v550 = KeGetCurrentThread();
                    v551 = 0LL;
                    if ( !(unsigned int)IsThreadCrossSessionAttached() )
                    {
                      v553 = (__int64 *)PsGetThreadWin32Thread(v550);
                      if ( v553 )
                        v551 = *v553;
                    }
                    v554 = PsGetCurrentProcessWin32Process(v552);
                    if ( v551 )
                    {
                      if ( v554 )
                      {
                        if ( (*(_DWORD *)(v551 + 480) & 0x1000000) != 0 )
                        {
                          v240 = *(unsigned int *)(v551 + 1216);
                          if ( (v240 & 0x80u) == 0LL && (*(_DWORD *)(v554 + 12) & 0x8000) != 0 )
                          {
                            v556 = (PERESOURCE *)GetDomainLockRef(12LL);
                            if ( v556 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v555);
                            if ( ExIsResourceAcquiredExclusiveLite(*v556) == 1 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v557);
                            ExEnterCriticalRegionAndAcquireResourceExclusive(*v556);
                            while ( 1 )
                            {
                              v561 = gpducstulHead;
                              if ( !gpducstulHead )
                                break;
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                              *((_QWORD *)v561 + 2) = 0LL;
                              if ( !*(_DWORD *)(*(_QWORD *)v561 + 8LL) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v558);
                              v560 = (PERESOURCE *)GetDomainLockRef(12LL);
                              if ( v560 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v559);
                              ExReleaseResourceAndLeaveCriticalRegion(*v560);
                              HMUnlockObject(*(_QWORD *)v561);
                              tagDomLock::LockExclusive((tagDomLock *)v560);
                            }
                            ExReleaseResourceAndLeaveCriticalRegion(*v556);
                          }
                        }
                      }
                    }
                  }
                  LOBYTE(v6) = v7[4] != 0;
                  dword_1C02531CC = v6;
                  goto LABEL_403;
                }
                v562 = *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_SYSTEM_AWAYMODE.Data1 == *(_QWORD *)v7 )
                  v562 = *(_QWORD *)GUID_SYSTEM_AWAYMODE.Data4 - *((_QWORD *)v7 + 1);
                if ( !v562 )
                {
                  v564 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v564 )
                    v564[1] = KeQueryPerformanceCounter(0LL);
                  v919 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v918 = 1;
                    v565 = PsGetCurrentThreadWin32Thread(v563);
                    v917 = v565;
                    if ( v565 && (*(int *)(v565 + 24) > 0 || *(_DWORD *)(v917 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v919);
                      if ( (unsigned int)dword_1C024C960 > 6 )
                      {
                        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v566, v567) )
                        {
                          v835 = v918;
                          v1084 = 4LL;
                          v1083 = &v835;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C024C960,
                            (unsigned __int8 *)dword_1C02199F7,
                            &v919,
                            0LL,
                            3u,
                            &v1082);
                        }
                      }
                    }
                  }
                  else
                  {
                    v917 = 0LL;
                  }
                  v568 = 0LL;
                  while ( 1 )
                  {
                    v569 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v569 )
                      v568 = *v569;
                    v572 = (PVOID)PsGetCurrentProcess(v571, v570);
                    if ( v572 )
                    {
                      if ( v572 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v574, v573) == gpepCSRSS
                      && v568 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v568 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v917
                    && (*(_DWORD *)(v917 + 48) || *(int *)(v917 + 24) > 0) )
                  {
                    *(_DWORD *)(v917 + 44) = 1;
                    *(GUID *)(v917 + 28) = v919;
                    if ( (unsigned int)dword_1C024C960 > 6 )
                    {
                      if ( (unsigned __int8)tlgKeywordOn(
                                              &dword_1C024C960,
                                              0x2000LL,
                                              (unsigned int)dword_1C024C960,
                                              v575) )
                      {
                        v836 = v918;
                        v1087 = 4LL;
                        v1086 = &v836;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199A0,
                          &v919,
                          0LL,
                          3u,
                          &v1085);
                        v576 = (unsigned int)dword_1C024C960;
                      }
                      if ( (unsigned int)v576 > 6
                        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v576, v577) )
                      {
                        v837 = v918;
                        v1090 = 4LL;
                        v1089 = &v837;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199CD,
                          &v919,
                          0LL,
                          3u,
                          &v1088);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v568;
                  gbValidateHandleForIL = 1;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v580 = PsGetCurrentProcess(v579, v578),
                        v581 = PsGetProcessSessionIdEx(v580),
                        v582 = PsGetCurrentThreadProcess(),
                        v581 == (unsigned int)PsGetProcessSessionIdEx(v582)) )
                  {
                    v583 = KeGetCurrentThread();
                    v584 = 0LL;
                    if ( !(unsigned int)IsThreadCrossSessionAttached() )
                    {
                      v586 = (__int64 *)PsGetThreadWin32Thread(v583);
                      if ( v586 )
                        v584 = *v586;
                    }
                    v587 = PsGetCurrentProcessWin32Process(v585);
                    if ( v584 )
                    {
                      if ( v587 )
                      {
                        if ( (*(_DWORD *)(v584 + 480) & 0x1000000) != 0 )
                        {
                          v61 = *(unsigned int *)(v584 + 1216);
                          if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v587 + 12) & 0x8000) != 0 )
                          {
                            v589 = (PERESOURCE *)GetDomainLockRef(12LL);
                            if ( v589 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v588);
                            if ( ExIsResourceAcquiredExclusiveLite(*v589) == 1 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v590);
                            ExEnterCriticalRegionAndAcquireResourceExclusive(*v589);
                            while ( 1 )
                            {
                              v594 = gpducstulHead;
                              if ( !gpducstulHead )
                                break;
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                              *((_QWORD *)v594 + 2) = 0LL;
                              if ( !*(_DWORD *)(*(_QWORD *)v594 + 8LL) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v591);
                              v593 = (PERESOURCE *)GetDomainLockRef(12LL);
                              if ( v593 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v592);
                              ExReleaseResourceAndLeaveCriticalRegion(*v593);
                              HMUnlockObject(*(_QWORD *)v594);
                              tagDomLock::LockExclusive((tagDomLock *)v593);
                            }
                            ExReleaseResourceAndLeaveCriticalRegion(*v589);
                          }
                        }
                      }
                    }
                  }
                  if ( !v7[4] )
                  {
                    dword_1C025319C = 0;
                    goto LABEL_91;
                  }
                  if ( gbTtmEnabled )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v61);
                  dword_1C025319C = 1;
                  LODWORD(v786) = 5;
                  *((_QWORD *)&v786 + 1) = 13LL;
                  goto LABEL_90;
                }
                v595 = *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 - *(_QWORD *)v7;
                if ( *(_QWORD *)&GUID_POWER_SAVING_STATUS.Data1 == *(_QWORD *)v7 )
                  v595 = *(_QWORD *)GUID_POWER_SAVING_STATUS.Data4 - *((_QWORD *)v7 + 1);
                if ( v595 )
                {
                  v628 = *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                  if ( *(_QWORD *)&GUID_ENERGY_SAVER_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                    v628 = *(_QWORD *)GUID_ENERGY_SAVER_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                  if ( v628 )
                  {
                    v659 = *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 - *(_QWORD *)v7;
                    if ( *(_QWORD *)&GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data1 == *(_QWORD *)v7 )
                      v659 = *(_QWORD *)GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS.Data4 - *((_QWORD *)v7 + 1);
                    if ( v659 )
                    {
                      v690 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)v7;
                      if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)v7 )
                        v690 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *((_QWORD *)v7 + 1);
                      if ( v690 )
                      {
                        v721 = *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 - *(_QWORD *)v7;
                        if ( *(_QWORD *)&GUID_INPUT_SUPPRESS_REQUESTED.Data1 == *(_QWORD *)v7 )
                          v721 = *(_QWORD *)GUID_INPUT_SUPPRESS_REQUESTED.Data4 - *((_QWORD *)v7 + 1);
                        if ( v721 )
                          return 3221225473LL;
                        v723 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v723 )
                          v723[1] = KeQueryPerformanceCounter(0LL);
                        v934 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v933 = 1;
                          v724 = PsGetCurrentThreadWin32Thread(v722);
                          v932 = v724;
                          if ( v724 && (*(int *)(v724 + 24) > 0 || *(_DWORD *)(v932 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v934);
                            if ( (unsigned int)dword_1C024C960 > 6 )
                            {
                              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v725, v726) )
                              {
                                v850 = v933;
                                v1129 = 4LL;
                                v1128 = &v850;
                                tlgWriteTransfer_EtwWriteTransfer(
                                  (__int64)&dword_1C024C960,
                                  (unsigned __int8 *)dword_1C02199F7,
                                  &v934,
                                  0LL,
                                  3u,
                                  &v1127);
                              }
                            }
                          }
                        }
                        else
                        {
                          v932 = 0LL;
                        }
                        v727 = 0LL;
                        while ( 1 )
                        {
                          v728 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v728 )
                            v727 = *v728;
                          v731 = (PVOID)PsGetCurrentProcess(v730, v729);
                          if ( v731 )
                          {
                            if ( v731 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v733, v732) == gpepCSRSS
                            && v727 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v727 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                          && v932
                          && (*(_DWORD *)(v932 + 48) || *(int *)(v932 + 24) > 0) )
                        {
                          *(_DWORD *)(v932 + 44) = 1;
                          *(GUID *)(v932 + 28) = v934;
                          if ( (unsigned int)dword_1C024C960 > 6 )
                          {
                            if ( (unsigned __int8)tlgKeywordOn(
                                                    &dword_1C024C960,
                                                    0x2000LL,
                                                    (unsigned int)dword_1C024C960,
                                                    v734) )
                            {
                              v851 = v933;
                              v1132 = 4LL;
                              v1131 = &v851;
                              tlgWriteTransfer_EtwWriteTransfer(
                                (__int64)&dword_1C024C960,
                                (unsigned __int8 *)dword_1C02199A0,
                                &v934,
                                0LL,
                                3u,
                                &v1130);
                              v735 = (unsigned int)dword_1C024C960;
                            }
                            if ( (unsigned int)v735 > 6
                              && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v735, v736) )
                            {
                              v852 = v933;
                              v1135 = 4LL;
                              v1134 = &v852;
                              tlgWriteTransfer_EtwWriteTransfer(
                                (__int64)&dword_1C024C960,
                                (unsigned __int8 *)dword_1C02199CD,
                                &v934,
                                0LL,
                                3u,
                                &v1133);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v727;
                        gbValidateHandleForIL = 1;
                        if ( !(unsigned __int8)KeIsAttachedProcess()
                          || (v739 = PsGetCurrentProcess(v738, v737),
                              v740 = PsGetProcessSessionIdEx(v739),
                              v741 = PsGetCurrentThreadProcess(),
                              v740 == (unsigned int)PsGetProcessSessionIdEx(v741)) )
                        {
                          v742 = KeGetCurrentThread();
                          v743 = 0LL;
                          if ( !(unsigned int)IsThreadCrossSessionAttached() )
                          {
                            v745 = (__int64 *)PsGetThreadWin32Thread(v742);
                            if ( v745 )
                              v743 = *v745;
                          }
                          v746 = PsGetCurrentProcessWin32Process(v744);
                          if ( v743
                            && v746
                            && (*(_DWORD *)(v743 + 480) & 0x1000000) != 0
                            && (*(_DWORD *)(v743 + 1216) & 0x80u) == 0
                            && (*(_DWORD *)(v746 + 12) & 0x8000) != 0 )
                          {
                            v748 = (PERESOURCE *)GetDomainLockRef(12LL);
                            if ( v748 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v747);
                            if ( ExIsResourceAcquiredExclusiveLite(*v748) == 1 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v749);
                            ExEnterCriticalRegionAndAcquireResourceExclusive(*v748);
                            while ( 1 )
                            {
                              v751 = gpducstulHead;
                              if ( !gpducstulHead )
                                break;
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                              *((_QWORD *)v751 + 2) = 0LL;
                              if ( !*(_DWORD *)(*(_QWORD *)v751 + 8LL) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v750);
                              CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v866);
                              HMUnlockObject(*(_QWORD *)v751);
                              tagDomLock::LockExclusive(v866);
                            }
                            ExReleaseResourceAndLeaveCriticalRegion(*v748);
                          }
                        }
                        CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>::CLockDomainExclusiveInUserCrit<DLT_POWERTRANSITIONSSTATE>(&v867);
                        dword_1C02531D0 = v7[4] != 0;
                        UserLogError((unsigned int)(-(unsigned __int8)dword_1C02531D0 - 2147482947));
                        CBaseInput::OnInputSuppressedValueChanged(v7[4] != 0);
                        ExReleaseResourceAndLeaveCriticalRegion(*v867);
                      }
                      else
                      {
                        if ( !v7[4] )
                          return 0LL;
                        v692 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                        if ( v692 )
                          v692[1] = KeQueryPerformanceCounter(0LL);
                        v931 = 0LL;
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                        {
                          v930 = 1;
                          v693 = PsGetCurrentThreadWin32Thread(v691);
                          v929 = v693;
                          if ( v693 && (*(int *)(v693 + 24) > 0 || *(_DWORD *)(v929 + 48)) )
                          {
                            EtwActivityIdControl(3u, &v931);
                            if ( (unsigned int)dword_1C024C960 > 6 )
                            {
                              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v694, v695) )
                              {
                                v847 = v930;
                                v1120 = 4LL;
                                v1119 = &v847;
                                tlgWriteTransfer_EtwWriteTransfer(
                                  (__int64)&dword_1C024C960,
                                  (unsigned __int8 *)dword_1C02199F7,
                                  &v931,
                                  0LL,
                                  3u,
                                  &v1118);
                              }
                            }
                          }
                        }
                        else
                        {
                          v929 = 0LL;
                        }
                        v696 = 0LL;
                        while ( 1 )
                        {
                          v697 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                          if ( v697 )
                            v696 = *v697;
                          v700 = (PVOID)PsGetCurrentProcess(v699, v698);
                          if ( v700 )
                          {
                            if ( v700 == g_pepDwm )
                              break;
                          }
                          if ( (PVOID)PsGetCurrentProcess(v702, v701) == gpepCSRSS
                            && v696 != (struct tagTHREADINFO *)gptiTSRequest
                            || gbDITInHitTest != 1
                            || v696 == gptiRit )
                          {
                            break;
                          }
                          ++gcDITHitTestWaiters;
                          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                        }
                        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                          && v929
                          && (*(_DWORD *)(v929 + 48) || *(int *)(v929 + 24) > 0) )
                        {
                          *(_DWORD *)(v929 + 44) = 1;
                          *(GUID *)(v929 + 28) = v931;
                          if ( (unsigned int)dword_1C024C960 > 6 )
                          {
                            if ( (unsigned __int8)tlgKeywordOn(
                                                    &dword_1C024C960,
                                                    0x2000LL,
                                                    (unsigned int)dword_1C024C960,
                                                    v703) )
                            {
                              v857 = v930;
                              v1123 = 4LL;
                              v1122 = &v857;
                              tlgWriteTransfer_EtwWriteTransfer(
                                (__int64)&dword_1C024C960,
                                (unsigned __int8 *)dword_1C02199A0,
                                &v931,
                                0LL,
                                3u,
                                &v1121);
                              v704 = (unsigned int)dword_1C024C960;
                            }
                            if ( (unsigned int)v704 > 6
                              && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v704, v705) )
                            {
                              v849 = v930;
                              v1126 = 4LL;
                              v1125 = &v849;
                              tlgWriteTransfer_EtwWriteTransfer(
                                (__int64)&dword_1C024C960,
                                (unsigned __int8 *)dword_1C02199CD,
                                &v931,
                                0LL,
                                3u,
                                &v1124);
                            }
                          }
                        }
                        EtwTraceAcquiredExclusiveUserCrit();
                        gptiCurrent = v696;
                        gbValidateHandleForIL = 1;
                        if ( !(unsigned __int8)KeIsAttachedProcess()
                          || (v708 = PsGetCurrentProcess(v707, v706),
                              v709 = PsGetProcessSessionIdEx(v708),
                              v710 = PsGetCurrentThreadProcess(),
                              v709 == (unsigned int)PsGetProcessSessionIdEx(v710)) )
                        {
                          v711 = KeGetCurrentThread();
                          v712 = 0LL;
                          if ( !(unsigned int)IsThreadCrossSessionAttached() )
                          {
                            v714 = (__int64 *)PsGetThreadWin32Thread(v711);
                            if ( v714 )
                              v712 = *v714;
                          }
                          v715 = PsGetCurrentProcessWin32Process(v713);
                          if ( v712 )
                          {
                            if ( v715 )
                            {
                              if ( (*(_DWORD *)(v712 + 480) & 0x1000000) != 0 )
                              {
                                v61 = *(unsigned int *)(v712 + 1216);
                                if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v715 + 12) & 0x8000) != 0 )
                                {
                                  v717 = (PERESOURCE *)GetDomainLockRef(12LL);
                                  if ( v717 == (PERESOURCE *)&gDomainDummyLock )
                                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v716);
                                  if ( ExIsResourceAcquiredExclusiveLite(*v717) == 1 )
                                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v718);
                                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v717);
                                  while ( 1 )
                                  {
                                    v720 = gpducstulHead;
                                    if ( !gpducstulHead )
                                      break;
                                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                                    *((_QWORD *)v720 + 2) = 0LL;
                                    if ( !*(_DWORD *)(*(_QWORD *)v720 + 8LL) )
                                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v719);
                                    CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v865);
                                    HMUnlockObject(*(_QWORD *)v720);
                                    tagDomLock::LockExclusive(v865);
                                  }
                                  ExReleaseResourceAndLeaveCriticalRegion(*v717);
                                }
                              }
                            }
                          }
                        }
                        gdwUpdateKeyboard |= 2u;
                      }
                    }
                    else
                    {
                      v661 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                      if ( v661 )
                        v661[1] = KeQueryPerformanceCounter(0LL);
                      v928 = 0LL;
                      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                      {
                        v927 = 1;
                        v662 = PsGetCurrentThreadWin32Thread(v660);
                        v926 = v662;
                        if ( v662 && (*(int *)(v662 + 24) > 0 || *(_DWORD *)(v926 + 48)) )
                        {
                          EtwActivityIdControl(3u, &v928);
                          if ( (unsigned int)dword_1C024C960 > 6 )
                          {
                            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v663, v664) )
                            {
                              v844 = v927;
                              v1111 = 4LL;
                              v1110 = &v844;
                              tlgWriteTransfer_EtwWriteTransfer(
                                (__int64)&dword_1C024C960,
                                (unsigned __int8 *)dword_1C02199F7,
                                &v928,
                                0LL,
                                3u,
                                &v1109);
                            }
                          }
                        }
                      }
                      else
                      {
                        v926 = 0LL;
                      }
                      v665 = 0LL;
                      while ( 1 )
                      {
                        v666 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                        if ( v666 )
                          v665 = *v666;
                        v669 = (PVOID)PsGetCurrentProcess(v668, v667);
                        if ( v669 )
                        {
                          if ( v669 == g_pepDwm )
                            break;
                        }
                        if ( (PVOID)PsGetCurrentProcess(v671, v670) == gpepCSRSS
                          && v665 != (struct tagTHREADINFO *)gptiTSRequest
                          || gbDITInHitTest != 1
                          || v665 == gptiRit )
                        {
                          break;
                        }
                        ++gcDITHitTestWaiters;
                        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                      }
                      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                        && v926
                        && (*(_DWORD *)(v926 + 48) || *(int *)(v926 + 24) > 0) )
                      {
                        *(_DWORD *)(v926 + 44) = 1;
                        *(GUID *)(v926 + 28) = v928;
                        if ( (unsigned int)dword_1C024C960 > 6 )
                        {
                          if ( (unsigned __int8)tlgKeywordOn(
                                                  &dword_1C024C960,
                                                  0x2000LL,
                                                  (unsigned int)dword_1C024C960,
                                                  v672) )
                          {
                            v845 = v927;
                            v1114 = 4LL;
                            v1113 = &v845;
                            tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_1C024C960,
                              (unsigned __int8 *)dword_1C02199A0,
                              &v928,
                              0LL,
                              3u,
                              &v1112);
                            v673 = (unsigned int)dword_1C024C960;
                          }
                          if ( (unsigned int)v673 > 6
                            && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v673, v674) )
                          {
                            v846 = v927;
                            v1117 = 4LL;
                            v1116 = &v846;
                            tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_1C024C960,
                              (unsigned __int8 *)dword_1C02199CD,
                              &v928,
                              0LL,
                              3u,
                              &v1115);
                          }
                        }
                      }
                      EtwTraceAcquiredExclusiveUserCrit();
                      gptiCurrent = v665;
                      gbValidateHandleForIL = 1;
                      if ( !(unsigned __int8)KeIsAttachedProcess()
                        || (v677 = PsGetCurrentProcess(v676, v675),
                            v678 = PsGetProcessSessionIdEx(v677),
                            v679 = PsGetCurrentThreadProcess(),
                            v678 == (unsigned int)PsGetProcessSessionIdEx(v679)) )
                      {
                        v680 = KeGetCurrentThread();
                        v681 = 0LL;
                        if ( !(unsigned int)IsThreadCrossSessionAttached() )
                        {
                          v683 = (__int64 *)PsGetThreadWin32Thread(v680);
                          if ( v683 )
                            v681 = *v683;
                        }
                        v684 = PsGetCurrentProcessWin32Process(v682);
                        if ( v681 )
                        {
                          if ( v684 )
                          {
                            if ( (*(_DWORD *)(v681 + 480) & 0x1000000) != 0 )
                            {
                              v61 = *(unsigned int *)(v681 + 1216);
                              if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v684 + 12) & 0x8000) != 0 )
                              {
                                v686 = (PERESOURCE *)GetDomainLockRef(12LL);
                                if ( v686 == (PERESOURCE *)&gDomainDummyLock )
                                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v685);
                                if ( ExIsResourceAcquiredExclusiveLite(*v686) == 1 )
                                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v687);
                                ExEnterCriticalRegionAndAcquireResourceExclusive(*v686);
                                while ( 1 )
                                {
                                  v689 = gpducstulHead;
                                  if ( !gpducstulHead )
                                    break;
                                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                                  *((_QWORD *)v689 + 2) = 0LL;
                                  if ( !*(_DWORD *)(*(_QWORD *)v689 + 8LL) )
                                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v688);
                                  CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v864);
                                  HMUnlockObject(*(_QWORD *)v689);
                                  tagDomLock::LockExclusive(v864);
                                }
                                ExReleaseResourceAndLeaveCriticalRegion(*v686);
                              }
                            }
                          }
                        }
                      }
                      dword_1C02531C8 = v7[4];
                    }
                  }
                  else
                  {
                    v630 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                    if ( v630 )
                      v630[1] = KeQueryPerformanceCounter(0LL);
                    v925 = 0LL;
                    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                    {
                      v924 = 1;
                      v631 = PsGetCurrentThreadWin32Thread(v629);
                      v923 = v631;
                      if ( v631 && (*(int *)(v631 + 24) > 0 || *(_DWORD *)(v923 + 48)) )
                      {
                        EtwActivityIdControl(3u, &v925);
                        if ( (unsigned int)dword_1C024C960 > 6 )
                        {
                          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v632, v633) )
                          {
                            v841 = v924;
                            v1102 = 4LL;
                            v1101 = &v841;
                            tlgWriteTransfer_EtwWriteTransfer(
                              (__int64)&dword_1C024C960,
                              (unsigned __int8 *)dword_1C02199F7,
                              &v925,
                              0LL,
                              3u,
                              &v1100);
                          }
                        }
                      }
                    }
                    else
                    {
                      v923 = 0LL;
                    }
                    v634 = 0LL;
                    while ( 1 )
                    {
                      v635 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                      if ( v635 )
                        v634 = *v635;
                      v638 = (PVOID)PsGetCurrentProcess(v637, v636);
                      if ( v638 )
                      {
                        if ( v638 == g_pepDwm )
                          break;
                      }
                      if ( (PVOID)PsGetCurrentProcess(v640, v639) == gpepCSRSS
                        && v634 != (struct tagTHREADINFO *)gptiTSRequest
                        || gbDITInHitTest != 1
                        || v634 == gptiRit )
                      {
                        break;
                      }
                      ++gcDITHitTestWaiters;
                      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                    }
                    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                      && v923
                      && (*(_DWORD *)(v923 + 48) || *(int *)(v923 + 24) > 0) )
                    {
                      *(_DWORD *)(v923 + 44) = 1;
                      *(GUID *)(v923 + 28) = v925;
                      if ( (unsigned int)dword_1C024C960 > 6 )
                      {
                        if ( (unsigned __int8)tlgKeywordOn(
                                                &dword_1C024C960,
                                                0x2000LL,
                                                (unsigned int)dword_1C024C960,
                                                v641) )
                        {
                          v842 = v924;
                          v1105 = 4LL;
                          v1104 = &v842;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C024C960,
                            (unsigned __int8 *)dword_1C02199A0,
                            &v925,
                            0LL,
                            3u,
                            &v1103);
                          v642 = (unsigned int)dword_1C024C960;
                        }
                        if ( (unsigned int)v642 > 6
                          && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v642, v643) )
                        {
                          v843 = v924;
                          v1108 = 4LL;
                          v1107 = &v843;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C024C960,
                            (unsigned __int8 *)dword_1C02199CD,
                            &v925,
                            0LL,
                            3u,
                            &v1106);
                        }
                      }
                    }
                    EtwTraceAcquiredExclusiveUserCrit();
                    gptiCurrent = v634;
                    gbValidateHandleForIL = 1;
                    if ( !(unsigned __int8)KeIsAttachedProcess()
                      || (v646 = PsGetCurrentProcess(v645, v644),
                          v647 = PsGetProcessSessionIdEx(v646),
                          v648 = PsGetCurrentThreadProcess(),
                          v647 == (unsigned int)PsGetProcessSessionIdEx(v648)) )
                    {
                      v649 = KeGetCurrentThread();
                      v650 = 0LL;
                      if ( !(unsigned int)IsThreadCrossSessionAttached() )
                      {
                        v652 = (__int64 *)PsGetThreadWin32Thread(v649);
                        if ( v652 )
                          v650 = *v652;
                      }
                      v653 = PsGetCurrentProcessWin32Process(v651);
                      if ( v650 )
                      {
                        if ( v653 )
                        {
                          if ( (*(_DWORD *)(v650 + 480) & 0x1000000) != 0 )
                          {
                            v61 = *(unsigned int *)(v650 + 1216);
                            if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v653 + 12) & 0x8000) != 0 )
                            {
                              v655 = (PERESOURCE *)GetDomainLockRef(12LL);
                              if ( v655 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v654);
                              if ( ExIsResourceAcquiredExclusiveLite(*v655) == 1 )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v656);
                              ExEnterCriticalRegionAndAcquireResourceExclusive(*v655);
                              while ( 1 )
                              {
                                v658 = gpducstulHead;
                                if ( !gpducstulHead )
                                  break;
                                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                                *((_QWORD *)v658 + 2) = 0LL;
                                if ( !*(_DWORD *)(*(_QWORD *)v658 + 8LL) )
                                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v657);
                                CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v863);
                                HMUnlockObject(*(_QWORD *)v658);
                                tagDomLock::LockExclusive(v863);
                              }
                              ExReleaseResourceAndLeaveCriticalRegion(*v655);
                            }
                          }
                        }
                      }
                    }
                    dword_1C025316C = v7[4];
                  }
                }
                else
                {
                  v597 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
                  if ( v597 )
                    v597[1] = KeQueryPerformanceCounter(0LL);
                  v922 = 0LL;
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
                  {
                    v921 = 1;
                    v598 = PsGetCurrentThreadWin32Thread(v596);
                    v920 = v598;
                    if ( v598 && (*(int *)(v598 + 24) > 0 || *(_DWORD *)(v920 + 48)) )
                    {
                      EtwActivityIdControl(3u, &v922);
                      if ( (unsigned int)dword_1C024C960 > 6 )
                      {
                        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v599, v600) )
                        {
                          v838 = v921;
                          v1093 = 4LL;
                          v1092 = &v838;
                          tlgWriteTransfer_EtwWriteTransfer(
                            (__int64)&dword_1C024C960,
                            (unsigned __int8 *)dword_1C02199F7,
                            &v922,
                            0LL,
                            3u,
                            &v1091);
                        }
                      }
                    }
                  }
                  else
                  {
                    v920 = 0LL;
                  }
                  v601 = 0LL;
                  while ( 1 )
                  {
                    v602 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                    if ( v602 )
                      v601 = *v602;
                    v605 = (PVOID)PsGetCurrentProcess(v604, v603);
                    if ( v605 )
                    {
                      if ( v605 == g_pepDwm )
                        break;
                    }
                    if ( (PVOID)PsGetCurrentProcess(v607, v606) == gpepCSRSS
                      && v601 != (struct tagTHREADINFO *)gptiTSRequest
                      || gbDITInHitTest != 1
                      || v601 == gptiRit )
                    {
                      break;
                    }
                    ++gcDITHitTestWaiters;
                    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                  }
                  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                    && v920
                    && (*(_DWORD *)(v920 + 48) || *(int *)(v920 + 24) > 0) )
                  {
                    *(_DWORD *)(v920 + 44) = 1;
                    *(GUID *)(v920 + 28) = v922;
                    if ( (unsigned int)dword_1C024C960 > 6 )
                    {
                      if ( (unsigned __int8)tlgKeywordOn(
                                              &dword_1C024C960,
                                              0x2000LL,
                                              (unsigned int)dword_1C024C960,
                                              v608) )
                      {
                        v839 = v921;
                        v1096 = 4LL;
                        v1095 = &v839;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199A0,
                          &v922,
                          0LL,
                          3u,
                          &v1094);
                        v609 = (unsigned int)dword_1C024C960;
                      }
                      if ( (unsigned int)v609 > 6
                        && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v609, v610) )
                      {
                        v840 = v921;
                        v1099 = 4LL;
                        v1098 = &v840;
                        tlgWriteTransfer_EtwWriteTransfer(
                          (__int64)&dword_1C024C960,
                          (unsigned __int8 *)dword_1C02199CD,
                          &v922,
                          0LL,
                          3u,
                          &v1097);
                      }
                    }
                  }
                  EtwTraceAcquiredExclusiveUserCrit();
                  gptiCurrent = v601;
                  gbValidateHandleForIL = 1;
                  if ( !(unsigned __int8)KeIsAttachedProcess()
                    || (v613 = PsGetCurrentProcess(v612, v611),
                        v614 = PsGetProcessSessionIdEx(v613),
                        v615 = PsGetCurrentThreadProcess(),
                        v614 == (unsigned int)PsGetProcessSessionIdEx(v615)) )
                  {
                    v616 = KeGetCurrentThread();
                    v617 = 0LL;
                    if ( !(unsigned int)IsThreadCrossSessionAttached() )
                    {
                      v619 = (__int64 *)PsGetThreadWin32Thread(v616);
                      if ( v619 )
                        v617 = *v619;
                    }
                    v620 = PsGetCurrentProcessWin32Process(v618);
                    if ( v617 )
                    {
                      if ( v620 )
                      {
                        if ( (*(_DWORD *)(v617 + 480) & 0x1000000) != 0 )
                        {
                          v61 = *(unsigned int *)(v617 + 1216);
                          if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v620 + 12) & 0x8000) != 0 )
                          {
                            v622 = (PERESOURCE *)GetDomainLockRef(12LL);
                            if ( v622 == (PERESOURCE *)&gDomainDummyLock )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v621);
                            if ( ExIsResourceAcquiredExclusiveLite(*v622) == 1 )
                              MicrosoftTelemetryAssertTriggeredNoArgsKM(v623);
                            ExEnterCriticalRegionAndAcquireResourceExclusive(*v622);
                            while ( 1 )
                            {
                              v627 = gpducstulHead;
                              if ( !gpducstulHead )
                                break;
                              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                              *((_QWORD *)v627 + 2) = 0LL;
                              if ( !*(_DWORD *)(*(_QWORD *)v627 + 8LL) )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v624);
                              v626 = (PERESOURCE *)GetDomainLockRef(12LL);
                              if ( v626 == (PERESOURCE *)&gDomainDummyLock )
                                MicrosoftTelemetryAssertTriggeredNoArgsKM(v625);
                              ExReleaseResourceAndLeaveCriticalRegion(*v626);
                              HMUnlockObject(*(_QWORD *)v627);
                              tagDomLock::LockExclusive((tagDomLock *)v626);
                            }
                            ExReleaseResourceAndLeaveCriticalRegion(*v622);
                          }
                        }
                      }
                    }
                  }
                  dword_1C02531C4 = v7[4];
                }
LABEL_91:
                UserSessionSwitchLeaveCrit(v61);
                return 0LL;
              }
              v497 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
              if ( v497 )
                v497[1] = KeQueryPerformanceCounter(0LL);
              v913 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v912 = 1;
                v498 = PsGetCurrentThreadWin32Thread(v496);
                v911 = v498;
                if ( v498 && (*(int *)(v498 + 24) > 0 || *(_DWORD *)(v911 + 48)) )
                {
                  EtwActivityIdControl(3u, &v913);
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v499, v500) )
                    {
                      v829 = v912;
                      v1066 = 4LL;
                      v1065 = &v829;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199F7,
                        &v913,
                        0LL,
                        3u,
                        &v1064);
                    }
                  }
                }
              }
              else
              {
                v911 = 0LL;
              }
              v501 = 0LL;
              while ( 1 )
              {
                v502 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v502 )
                  v501 = *v502;
                v505 = (PVOID)PsGetCurrentProcess(v504, v503);
                if ( v505 )
                {
                  if ( v505 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v507, v506) == gpepCSRSS
                  && v501 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v501 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v911
                && (*(_DWORD *)(v911 + 48) || *(int *)(v911 + 24) > 0) )
              {
                *(_DWORD *)(v911 + 44) = 1;
                *(GUID *)(v911 + 28) = v913;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v508) )
                  {
                    v830 = v912;
                    v1069 = 4LL;
                    v1068 = &v830;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &v913,
                      0LL,
                      3u,
                      &v1067);
                    v509 = (unsigned int)dword_1C024C960;
                  }
                  if ( (unsigned int)v509 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v509, v510) )
                  {
                    v831 = v912;
                    v1072 = 4LL;
                    v1071 = &v831;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &v913,
                      0LL,
                      3u,
                      &v1070);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v501;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v513 = PsGetCurrentProcess(v512, v511),
                    v514 = PsGetProcessSessionIdEx(v513),
                    v515 = PsGetCurrentThreadProcess(),
                    v514 == (unsigned int)PsGetProcessSessionIdEx(v515)) )
              {
                v516 = KeGetCurrentThread();
                v517 = 0LL;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v519 = (__int64 *)PsGetThreadWin32Thread(v516);
                  if ( v519 )
                    v517 = *v519;
                }
                v520 = PsGetCurrentProcessWin32Process(v518);
                if ( v517 )
                {
                  if ( v520 )
                  {
                    if ( (*(_DWORD *)(v517 + 480) & 0x1000000) != 0 )
                    {
                      v61 = *(unsigned int *)(v517 + 1216);
                      if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v520 + 12) & 0x8000) != 0 )
                      {
                        v522 = (PERESOURCE *)GetDomainLockRef(12LL);
                        if ( v522 == (PERESOURCE *)&gDomainDummyLock )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v521);
                        if ( ExIsResourceAcquiredExclusiveLite(*v522) == 1 )
                          MicrosoftTelemetryAssertTriggeredNoArgsKM(v523);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(*v522);
                        while ( 1 )
                        {
                          v527 = gpducstulHead;
                          if ( !gpducstulHead )
                            break;
                          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                          *((_QWORD *)v527 + 2) = 0LL;
                          if ( !*(_DWORD *)(*(_QWORD *)v527 + 8LL) )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v524);
                          v526 = (PERESOURCE *)GetDomainLockRef(12LL);
                          if ( v526 == (PERESOURCE *)&gDomainDummyLock )
                            MicrosoftTelemetryAssertTriggeredNoArgsKM(v525);
                          ExReleaseResourceAndLeaveCriticalRegion(*v526);
                          HMUnlockObject(*(_QWORD *)v527);
                          tagDomLock::LockExclusive((tagDomLock *)v526);
                        }
                        ExReleaseResourceAndLeaveCriticalRegion(*v522);
                      }
                    }
                  }
                }
              }
              if ( gbTtmEnabled || gProtocolType || dword_1C02531A8 )
                goto LABEL_91;
              v528 = MonitorRequestReasonBatteryCountChange;
            }
            else
            {
LABEL_1335:
              v753 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v494);
              if ( v753 )
                v753[1] = KeQueryPerformanceCounter(0LL);
              v937 = 0LL;
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
              {
                v936 = 1;
                v754 = PsGetCurrentThreadWin32Thread(v752);
                v935 = v754;
                if ( v754 && (*(int *)(v754 + 24) > 0 || *(_DWORD *)(v935 + 48)) )
                {
                  EtwActivityIdControl(3u, &v937);
                  if ( (unsigned int)dword_1C024C960 > 6 )
                  {
                    if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v755, v756) )
                    {
                      v853 = v936;
                      v1138 = 4LL;
                      v1137 = &v853;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_1C024C960,
                        (unsigned __int8 *)dword_1C02199F7,
                        &v937,
                        0LL,
                        3u,
                        &v1136);
                    }
                  }
                }
              }
              else
              {
                v935 = 0LL;
              }
              v757 = 0LL;
              while ( 1 )
              {
                v758 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                if ( v758 )
                  v757 = *v758;
                v761 = (PVOID)PsGetCurrentProcess(v760, v759);
                if ( v761 )
                {
                  if ( v761 == g_pepDwm )
                    break;
                }
                if ( (PVOID)PsGetCurrentProcess(v763, v762) == gpepCSRSS
                  && v757 != (struct tagTHREADINFO *)gptiTSRequest
                  || gbDITInHitTest != 1
                  || v757 == gptiRit )
                {
                  break;
                }
                ++gcDITHitTestWaiters;
                ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
              }
              if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
                && v935
                && (*(_DWORD *)(v935 + 48) || *(int *)(v935 + 24) > 0) )
              {
                *(_DWORD *)(v935 + 44) = 1;
                *(GUID *)(v935 + 28) = v937;
                if ( (unsigned int)dword_1C024C960 > 6 )
                {
                  if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v764) )
                  {
                    v854 = v936;
                    v1141 = 4LL;
                    v1140 = &v854;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199A0,
                      &v937,
                      0LL,
                      3u,
                      &v1139);
                    v765 = (unsigned int)dword_1C024C960;
                  }
                  if ( (unsigned int)v765 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v765, v766) )
                  {
                    v855 = v936;
                    v1144 = 4LL;
                    v1143 = &v855;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_1C024C960,
                      (unsigned __int8 *)dword_1C02199CD,
                      &v937,
                      0LL,
                      3u,
                      &v1142);
                  }
                }
              }
              EtwTraceAcquiredExclusiveUserCrit();
              gptiCurrent = v757;
              gbValidateHandleForIL = 1;
              if ( !(unsigned __int8)KeIsAttachedProcess()
                || (v769 = PsGetCurrentProcess(v768, v767),
                    v770 = PsGetProcessSessionIdEx(v769),
                    v771 = PsGetCurrentThreadProcess(),
                    v770 == (unsigned int)PsGetProcessSessionIdEx(v771)) )
              {
                v772 = KeGetCurrentThread();
                v773 = 0LL;
                if ( !(unsigned int)IsThreadCrossSessionAttached() )
                {
                  v775 = (__int64 *)PsGetThreadWin32Thread(v772);
                  if ( v775 )
                    v773 = *v775;
                }
                v776 = PsGetCurrentProcessWin32Process(v774);
                if ( v773
                  && v776
                  && (*(_DWORD *)(v773 + 480) & 0x1000000) != 0
                  && (*(_DWORD *)(v773 + 1216) & 0x80u) == 0
                  && (*(_DWORD *)(v776 + 12) & 0x8000) != 0 )
                {
                  v778 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v778 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v777);
                  if ( ExIsResourceAcquiredExclusiveLite(*v778) == 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v779);
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v778);
                  while ( 1 )
                  {
                    v783 = gpducstulHead;
                    if ( !gpducstulHead )
                      break;
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                    *((_QWORD *)v783 + 2) = 0LL;
                    if ( !*(_DWORD *)(*(_QWORD *)v783 + 8LL) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v780);
                    v782 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v782 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v781);
                    ExReleaseResourceAndLeaveCriticalRegion(*v782);
                    HMUnlockObject(*(_QWORD *)v783);
                    tagDomLock::LockExclusive((tagDomLock *)v782);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v778);
                }
              }
              if ( gSqmIsOptedIn && !gProtocolType )
                SqmPowerState();
              dword_1C02531A8 = v7[4] == 0;
              v61 = *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 - *(_QWORD *)v7;
              if ( *(_QWORD *)&GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data1 == *(_QWORD *)v7 )
                v61 = *(_QWORD *)GUID_ACDC_DISPLAY_BURST_SUPPRESS.Data4 - *((_QWORD *)v7 + 1);
              if ( !v61 || gbTtmEnabled || gProtocolType )
                goto LABEL_91;
              v528 = MonitorRequestReasonAcDcDisplayBurst;
            }
            PowerDisplayBurst(v528);
            goto LABEL_91;
          }
          v363 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v363 )
            v363[1] = KeQueryPerformanceCounter(0LL);
          v901 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v900 = 1;
            v364 = PsGetCurrentThreadWin32Thread(v362);
            v899 = v364;
            if ( v364 && (*(int *)(v364 + 24) > 0 || *(_DWORD *)(v899 + 48)) )
            {
              EtwActivityIdControl(3u, &v901);
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v365, v366) )
                {
                  v817 = v900;
                  v1030 = 4LL;
                  v1029 = &v817;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199F7,
                    &v901,
                    0LL,
                    3u,
                    &v1028);
                }
              }
            }
          }
          else
          {
            v899 = 0LL;
          }
          v367 = 0LL;
          while ( 1 )
          {
            v368 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v368 )
              v367 = *v368;
            v371 = (PVOID)PsGetCurrentProcess(v370, v369);
            if ( v371 )
            {
              if ( v371 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v373, v372) == gpepCSRSS && v367 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v367 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v899
            && (*(_DWORD *)(v899 + 48) || *(int *)(v899 + 24) > 0) )
          {
            *(_DWORD *)(v899 + 44) = 1;
            *(GUID *)(v899 + 28) = v901;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v374) )
              {
                v818 = v900;
                v1033 = 4LL;
                v1032 = &v818;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v901,
                  0LL,
                  3u,
                  &v1031);
                v375 = (unsigned int)dword_1C024C960;
              }
              if ( (unsigned int)v375 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v375, v376) )
              {
                v819 = v900;
                v1036 = 4LL;
                v1035 = &v819;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v901,
                  0LL,
                  3u,
                  &v1034);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v367;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v379 = PsGetCurrentProcess(v378, v377),
                v380 = PsGetProcessSessionIdEx(v379),
                v381 = PsGetCurrentThreadProcess(),
                v380 == (unsigned int)PsGetProcessSessionIdEx(v381)) )
          {
            v382 = KeGetCurrentThread();
            v383 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              v385 = (__int64 *)PsGetThreadWin32Thread(v382);
              if ( v385 )
                v383 = *v385;
            }
            v386 = PsGetCurrentProcessWin32Process(v384);
            if ( v383
              && v386
              && (*(_DWORD *)(v383 + 480) & 0x1000000) != 0
              && (*(_DWORD *)(v383 + 1216) & 0x80u) == 0
              && (*(_DWORD *)(v386 + 12) & 0x8000) != 0 )
            {
              v388 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v388 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v387);
              if ( ExIsResourceAcquiredExclusiveLite(*v388) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v389);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v388);
              while ( 1 )
              {
                v393 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                *((_QWORD *)v393 + 2) = 0LL;
                if ( !*(_DWORD *)(*(_QWORD *)v393 + 8LL) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v390);
                v392 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v392 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v391);
                ExReleaseResourceAndLeaveCriticalRegion(*v392);
                HMUnlockObject(*(_QWORD *)v393);
                tagDomLock::LockExclusive((tagDomLock *)v392);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v388);
            }
          }
          giDimTimeOutMs = 1000 * v7[4];
        }
        else
        {
          v330 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
          if ( v330 )
            v330[1] = KeQueryPerformanceCounter(0LL);
          v898 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v897 = 1;
            v331 = PsGetCurrentThreadWin32Thread(v329);
            v896 = v331;
            if ( v331 && (*(int *)(v331 + 24) > 0 || *(_DWORD *)(v896 + 48)) )
            {
              EtwActivityIdControl(3u, &v898);
              if ( (unsigned int)dword_1C024C960 > 6 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v332, v333) )
                {
                  v814 = v897;
                  v1021 = 4LL;
                  v1020 = &v814;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)&dword_1C024C960,
                    (unsigned __int8 *)dword_1C02199F7,
                    &v898,
                    0LL,
                    3u,
                    &v1019);
                }
              }
            }
          }
          else
          {
            v896 = 0LL;
          }
          v334 = 0LL;
          while ( 1 )
          {
            v335 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v335 )
              v334 = *v335;
            v338 = (PVOID)PsGetCurrentProcess(v337, v336);
            if ( v338 )
            {
              if ( v338 == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v340, v339) == gpepCSRSS && v334 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v334 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v896
            && (*(_DWORD *)(v896 + 48) || *(int *)(v896 + 24) > 0) )
          {
            *(_DWORD *)(v896 + 44) = 1;
            *(GUID *)(v896 + 28) = v898;
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v341) )
              {
                v815 = v897;
                v1024 = 4LL;
                v1023 = &v815;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199A0,
                  &v898,
                  0LL,
                  3u,
                  &v1022);
                v342 = (unsigned int)dword_1C024C960;
              }
              if ( (unsigned int)v342 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v342, v343) )
              {
                v816 = v897;
                v1027 = 4LL;
                v1026 = &v816;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199CD,
                  &v898,
                  0LL,
                  3u,
                  &v1025);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v334;
          gbValidateHandleForIL = 1;
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (v346 = PsGetCurrentProcess(v345, v344),
                v347 = PsGetProcessSessionIdEx(v346),
                v348 = PsGetCurrentThreadProcess(),
                v347 == (unsigned int)PsGetProcessSessionIdEx(v348)) )
          {
            v349 = KeGetCurrentThread();
            v350 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              v352 = (__int64 *)PsGetThreadWin32Thread(v349);
              if ( v352 )
                v350 = *v352;
            }
            v353 = PsGetCurrentProcessWin32Process(v351);
            if ( v350 )
            {
              if ( v353 )
              {
                if ( (*(_DWORD *)(v350 + 480) & 0x1000000) != 0 )
                {
                  v61 = *(unsigned int *)(v350 + 1216);
                  if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v353 + 12) & 0x8000) != 0 )
                  {
                    v355 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v355 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v354);
                    if ( ExIsResourceAcquiredExclusiveLite(*v355) == 1 )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v356);
                    ExEnterCriticalRegionAndAcquireResourceExclusive(*v355);
                    while ( 1 )
                    {
                      v360 = gpducstulHead;
                      if ( !gpducstulHead )
                        break;
                      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                      *((_QWORD *)v360 + 2) = 0LL;
                      if ( !*(_DWORD *)(*(_QWORD *)v360 + 8LL) )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v357);
                      v359 = (PERESOURCE *)GetDomainLockRef(12LL);
                      if ( v359 == (PERESOURCE *)&gDomainDummyLock )
                        MicrosoftTelemetryAssertTriggeredNoArgsKM(v358);
                      ExReleaseResourceAndLeaveCriticalRegion(*v359);
                      HMUnlockObject(*(_QWORD *)v360);
                      tagDomLock::LockExclusive((tagDomLock *)v359);
                    }
                    ExReleaseResourceAndLeaveCriticalRegion(*v355);
                  }
                }
              }
            }
          }
          if ( gProtocolType )
            goto LABEL_91;
          giPowerSessionActivityTimeOutMs = 1000 * v7[4];
          if ( giPowerSessionActivityTimeOutMs )
            gPowerAdaptiveState = 0;
        }
      }
      else
      {
        v297 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
        if ( v297 )
          v297[1] = KeQueryPerformanceCounter(0LL);
        v895 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v894 = 1;
          v298 = PsGetCurrentThreadWin32Thread(v296);
          v893 = v298;
          if ( v298 && (*(int *)(v298 + 24) > 0 || *(_DWORD *)(v893 + 48)) )
          {
            EtwActivityIdControl(3u, &v895);
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v299, v300) )
              {
                v811 = v894;
                v1012 = 4LL;
                v1011 = &v811;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199F7,
                  &v895,
                  0LL,
                  3u,
                  &v1010);
              }
            }
          }
        }
        else
        {
          v893 = 0LL;
        }
        v301 = 0LL;
        while ( 1 )
        {
          v302 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v302 )
            v301 = *v302;
          v305 = (PVOID)PsGetCurrentProcess(v304, v303);
          if ( v305 )
          {
            if ( v305 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v307, v306) == gpepCSRSS && v301 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v301 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v893
          && (*(_DWORD *)(v893 + 48) || *(int *)(v893 + 24) > 0) )
        {
          *(_DWORD *)(v893 + 44) = 1;
          *(GUID *)(v893 + 28) = v895;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v308) )
            {
              v812 = v894;
              v1015 = 4LL;
              v1014 = &v812;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &v895,
                0LL,
                3u,
                &v1013);
              v309 = (unsigned int)dword_1C024C960;
            }
            if ( (unsigned int)v309 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v309, v310) )
            {
              v813 = v894;
              v1018 = 4LL;
              v1017 = &v813;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &v895,
                0LL,
                3u,
                &v1016);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v301;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v313 = PsGetCurrentProcess(v312, v311),
              v314 = PsGetProcessSessionIdEx(v313),
              v315 = PsGetCurrentThreadProcess(),
              v314 == (unsigned int)PsGetProcessSessionIdEx(v315)) )
        {
          v316 = KeGetCurrentThread();
          v317 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            v319 = (__int64 *)PsGetThreadWin32Thread(v316);
            if ( v319 )
              v317 = *v319;
          }
          v320 = PsGetCurrentProcessWin32Process(v318);
          if ( v317 )
          {
            if ( v320 )
            {
              if ( (*(_DWORD *)(v317 + 480) & 0x1000000) != 0 )
              {
                v61 = *(unsigned int *)(v317 + 1216);
                if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v320 + 12) & 0x8000) != 0 )
                {
                  v322 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v322 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v321);
                  if ( ExIsResourceAcquiredExclusiveLite(*v322) == 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v323);
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v322);
                  while ( 1 )
                  {
                    v327 = gpducstulHead;
                    if ( !gpducstulHead )
                      break;
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                    *((_QWORD *)v327 + 2) = 0LL;
                    if ( !*(_DWORD *)(*(_QWORD *)v327 + 8LL) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v324);
                    v326 = (PERESOURCE *)GetDomainLockRef(12LL);
                    if ( v326 == (PERESOURCE *)&gDomainDummyLock )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v325);
                    ExReleaseResourceAndLeaveCriticalRegion(*v326);
                    HMUnlockObject(*(_QWORD *)v327);
                    tagDomLock::LockExclusive((tagDomLock *)v326);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v322);
                }
              }
            }
          }
        }
        if ( !gProtocolType || !dword_1C02511B4 )
          goto LABEL_91;
        giPowerSessionActivityTimeOutMs = 1000 * v7[4];
      }
    }
    else
    {
      v264 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(0LL);
      if ( v264 )
        v264[1] = KeQueryPerformanceCounter(0LL);
      v892 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v891 = 1;
        v265 = PsGetCurrentThreadWin32Thread(v263);
        v890 = v265;
        if ( v265 && (*(int *)(v265 + 24) > 0 || *(_DWORD *)(v890 + 48)) )
        {
          EtwActivityIdControl(3u, &v892);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v266, v267) )
            {
              v808 = v891;
              v1003 = 4LL;
              v1002 = &v808;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &v892,
                0LL,
                3u,
                &v1001);
            }
          }
        }
      }
      else
      {
        v890 = 0LL;
      }
      v268 = 0LL;
      while ( 1 )
      {
        v269 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v269 )
          v268 = *v269;
        v272 = (PVOID)PsGetCurrentProcess(v271, v270);
        if ( v272 )
        {
          if ( v272 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v274, v273) == gpepCSRSS && v268 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v268 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v890
        && (*(_DWORD *)(v890 + 48) || *(int *)(v890 + 24) > 0) )
      {
        *(_DWORD *)(v890 + 44) = 1;
        *(GUID *)(v890 + 28) = v892;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v275) )
          {
            v809 = v891;
            v1006 = 4LL;
            v1005 = &v809;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &v892,
              0LL,
              3u,
              &v1004);
            v276 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v276 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v276, v277) )
          {
            v810 = v891;
            v1009 = 4LL;
            v1008 = &v810;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &v892,
              0LL,
              3u,
              &v1007);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v268;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v280 = PsGetCurrentProcess(v279, v278),
            v281 = PsGetProcessSessionIdEx(v280),
            v282 = PsGetCurrentThreadProcess(),
            v281 == (unsigned int)PsGetProcessSessionIdEx(v282)) )
      {
        v283 = KeGetCurrentThread();
        v284 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v286 = (__int64 *)PsGetThreadWin32Thread(v283);
          if ( v286 )
            v284 = *v286;
        }
        v287 = PsGetCurrentProcessWin32Process(v285);
        if ( v284 )
        {
          if ( v287 )
          {
            if ( (*(_DWORD *)(v284 + 480) & 0x1000000) != 0 )
            {
              v61 = *(unsigned int *)(v284 + 1216);
              if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v287 + 12) & 0x8000) != 0 )
              {
                v289 = (PERESOURCE *)GetDomainLockRef(12LL);
                if ( v289 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v288);
                if ( ExIsResourceAcquiredExclusiveLite(*v289) == 1 )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v290);
                ExEnterCriticalRegionAndAcquireResourceExclusive(*v289);
                while ( 1 )
                {
                  v294 = gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                  *((_QWORD *)v294 + 2) = 0LL;
                  if ( !*(_DWORD *)(*(_QWORD *)v294 + 8LL) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v291);
                  v293 = (PERESOURCE *)GetDomainLockRef(12LL);
                  if ( v293 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v292);
                  ExReleaseResourceAndLeaveCriticalRegion(*v293);
                  HMUnlockObject(*(_QWORD *)v294);
                  tagDomLock::LockExclusive((tagDomLock *)v293);
                }
                ExReleaseResourceAndLeaveCriticalRegion(*v289);
              }
            }
          }
        }
      }
      if ( gProtocolType )
        goto LABEL_91;
      giPowerOffTimeOutMs = 1000 * v7[4];
    }
    if ( (int)IsModerncoreUserPowerInfoCalloutSupported() >= 0 && qword_1C0258518 )
      qword_1C0258518();
    goto LABEL_91;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v8 != 8 || !v7 )
      return 3221225473LL;
    v41 = *(_BYTE *)v7;
    v42 = *((_BYTE *)v856 + 1);
    v43 = (int)v856[1];
    v45 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v45 )
      v45[1] = KeQueryPerformanceCounter(0LL);
    v889 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v888 = 1;
      v257 = PsGetCurrentThreadWin32Thread(v44);
      v887 = v257;
      if ( v257 && (*(int *)(v257 + 24) > 0 || *(_DWORD *)(v887 + 48)) )
      {
        EtwActivityIdControl(3u, &v889);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v258, v259) )
          {
            v805 = v888;
            v994 = 4LL;
            v993 = &v805;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v889,
              0LL,
              3u,
              &v992);
          }
        }
      }
    }
    else
    {
      v887 = 0LL;
    }
    v46 = 0LL;
    while ( 1 )
    {
      v47 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v47 )
        v46 = *v47;
      v50 = (PVOID)PsGetCurrentProcess(v49, v48);
      if ( v50 )
      {
        if ( v50 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v52, v51) == gpepCSRSS && v46 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v46 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v887
      && (*(_DWORD *)(v887 + 48) || *(int *)(v887 + 24) > 0) )
    {
      *(_DWORD *)(v887 + 44) = 1;
      *(GUID *)(v887 + 28) = v889;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v53) )
        {
          v806 = v888;
          v997 = 4LL;
          v996 = &v806;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v889,
            0LL,
            3u,
            &v995);
          v260 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v260 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v260, v261) )
        {
          v807 = v888;
          v1000 = 4LL;
          v999 = &v807;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v889,
            0LL,
            3u,
            &v998);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v46;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v103 = PsGetCurrentProcess(v55, v54),
          v104 = PsGetProcessSessionIdEx(v103),
          v105 = PsGetCurrentThreadProcess(),
          v104 == (unsigned int)PsGetProcessSessionIdEx(v105)) )
    {
      v56 = KeGetCurrentThread();
      v57 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v59 = (__int64 *)PsGetThreadWin32Thread(v56);
        if ( v59 )
          v57 = *v59;
      }
      v60 = PsGetCurrentProcessWin32Process(v58);
      if ( v57 )
      {
        if ( v60 )
        {
          if ( (*(_DWORD *)(v57 + 480) & 0x1000000) != 0 )
          {
            v61 = *(unsigned int *)(v57 + 1216);
            if ( (v61 & 0x80u) == 0LL && (*(_DWORD *)(v60 + 12) & 0x8000) != 0 )
            {
              v63 = (PERESOURCE *)GetDomainLockRef(12LL);
              if ( v63 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v62);
              if ( ExIsResourceAcquiredExclusiveLite(*v63) == 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v64);
              ExEnterCriticalRegionAndAcquireResourceExclusive(*v63);
              while ( 1 )
              {
                v66 = gpducstulHead;
                if ( !gpducstulHead )
                  break;
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                *((_QWORD *)v66 + 2) = 0LL;
                if ( !*(_DWORD *)(*(_QWORD *)v66 + 8LL) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v65);
                CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v862);
                HMUnlockObject(*(_QWORD *)v66);
                tagDomLock::LockExclusive(v862);
              }
              ExReleaseResourceAndLeaveCriticalRegion(*v63);
            }
          }
        }
      }
    }
    if ( !v41 || !gbBlockSendInputResets )
    {
      v67 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
      CInputGlobals::UpdateLastInputTime((__int64)gpInputGlobals, v67, 5u);
      v68 = CitpCitTypeFromLinp(5, 0);
      CitpLastInputUpdate(v68, v67);
      if ( !v42 )
      {
        if ( dword_1C02531A0 )
        {
          if ( !*(_BYTE *)gpbIgnoreSleepInput )
            SetPendingInput((unsigned int)v43);
          goto LABEL_91;
        }
        LODWORD(v786) = 4;
        *((_QWORD *)&v786 + 1) = v43;
LABEL_90:
        QueuePowerRequest(&v786, 0);
        goto LABEL_91;
      }
    }
    goto LABEL_91;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v8 == 4 && v7 && a5 == 4 && a6 )
    {
      v12 = *v7;
      v14 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
      if ( v14 )
        v14[1] = KeQueryPerformanceCounter(0LL);
      v886 = 0LL;
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
      {
        v885 = 1;
        v252 = PsGetCurrentThreadWin32Thread(v13);
        v884 = v252;
        if ( v252 && (*(int *)(v252 + 24) > 0 || *(_DWORD *)(v884 + 48)) )
        {
          EtwActivityIdControl(3u, &v886);
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v253, v254) )
            {
              v802 = v885;
              v985 = 4LL;
              v984 = &v802;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199F7,
                &v886,
                0LL,
                3u,
                &v983);
            }
          }
        }
      }
      else
      {
        v884 = 0LL;
      }
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v16 )
          v15 = *v16;
        v19 = (PVOID)PsGetCurrentProcess(v18, v17);
        if ( v19 )
        {
          if ( v19 == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v15 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
        && v884
        && (*(_DWORD *)(v884 + 48) || *(int *)(v884 + 24) > 0) )
      {
        *(_DWORD *)(v884 + 44) = 1;
        *(GUID *)(v884 + 28) = v886;
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v22) )
          {
            v803 = v885;
            v988 = 4LL;
            v987 = &v803;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199A0,
              &v886,
              0LL,
              3u,
              &v986);
            v255 = (unsigned int)dword_1C024C960;
          }
          if ( (unsigned int)v255 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v255, v256) )
          {
            v804 = v885;
            v991 = 4LL;
            v990 = &v804;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199CD,
              &v886,
              0LL,
              3u,
              &v989);
          }
        }
      }
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v15;
      gbValidateHandleForIL = 1;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v100 = PsGetCurrentProcess(v24, v23),
            v101 = PsGetProcessSessionIdEx(v100),
            v102 = PsGetCurrentThreadProcess(),
            v101 == (unsigned int)PsGetProcessSessionIdEx(v102)) )
      {
        v25 = KeGetCurrentThread();
        v26 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached() )
        {
          v28 = (__int64 *)PsGetThreadWin32Thread(v25);
          if ( v28 )
            v26 = *v28;
        }
        v29 = PsGetCurrentProcessWin32Process(v27);
        if ( v26
          && v29
          && (*(_DWORD *)(v26 + 480) & 0x1000000) != 0
          && (*(_DWORD *)(v26 + 1216) & 0x80u) == 0
          && (*(_DWORD *)(v29 + 12) & 0x8000) != 0 )
        {
          v31 = (PERESOURCE *)GetDomainLockRef(12LL);
          if ( v31 == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
          if ( ExIsResourceAcquiredExclusiveLite(*v31) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*v31);
          while ( 1 )
          {
            v34 = gpducstulHead;
            if ( !gpducstulHead )
              break;
            gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
            *((_QWORD *)v34 + 2) = 0LL;
            if ( !*(_DWORD *)(*(_QWORD *)v34 + 8LL) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v33);
            CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v861);
            HMUnlockObject(*(_QWORD *)v34);
            tagDomLock::LockExclusive(v861);
          }
          ExReleaseResourceAndLeaveCriticalRegion(*v31);
        }
      }
      v35 = dword_1C0253148;
      v36 = dword_1C0253148 + v12;
      dword_1C0253148 += v12;
      if ( v35 == 1 )
      {
        v37 = v36 == 0;
        v38 = v36 < 0;
        if ( v36 )
        {
LABEL_46:
          v785 = !v38 && !v37;
          ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &v785, 1LL, 0LL, &gSessionId, 0, 0);
          UserSessionSwitchLeaveCrit(v39);
          if ( !v35 && v36 == 1 && dword_1C0253150 == 2 )
          {
            LODWORD(v786) = 4;
            *((_QWORD *)&v786 + 1) = 48LL;
            QueuePowerRequest(&v786, 0);
          }
          if ( v36 >= 0 )
            v6 = v36;
          *a6 = v6;
          return v784;
        }
        CitDisplayRequestChange(0);
        EtwTraceDisplayReqChange(0, v69, v70);
        if ( !gbBlockSendInputResets )
          CInputGlobals::UpdateLastInputTime(
            (__int64)gpInputGlobals,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
            0xAu);
      }
      else if ( !v35 && v36 == 1 )
      {
        CitDisplayRequestChange(1u);
        EtwTraceDisplayReqChange(1, v71, v72);
      }
      v37 = v36 == 0;
      v38 = v36 < 0;
      goto LABEL_46;
    }
    return 3221225485LL;
  }
  v73 = v11 - 1;
  if ( !v73 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v8 == 8 && v7 )
    {
      v74 = v856;
      v75 = 0;
      v76 = 0;
      v77 = *v856;
      if ( !(_DWORD)v77 )
      {
        v75 = 1;
        goto LABEL_131;
      }
      v78 = (unsigned int)(v77 - 1);
      if ( !(_DWORD)v78 )
      {
        v76 = 1;
LABEL_132:
        CInputGlobals::UpdateLastInputTime(
          (__int64)gpInputGlobals,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
          5u);
LABEL_133:
        if ( v75 )
        {
          if ( gSystemIsAoAc )
            SetInputMode(1LL);
          if ( !v76 )
          {
            LODWORD(v786) = 5;
            goto LABEL_136;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v77);
        }
        else if ( !v76 )
        {
          return v784;
        }
        LODWORD(v786) = 4;
LABEL_136:
        *((_QWORD *)&v786 + 1) = (int)v74[1];
        QueuePowerRequest(&v786, 0);
        return v784;
      }
      if ( (_DWORD)v78 == 1 )
      {
        v80 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v78);
        if ( v80 )
          v80[1] = KeQueryPerformanceCounter(0LL);
        v883 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v882 = 1;
          v241 = PsGetCurrentThreadWin32Thread(v79);
          v881 = v241;
          if ( v241 && (*(int *)(v241 + 24) > 0 || *(_DWORD *)(v881 + 48)) )
          {
            EtwActivityIdControl(3u, &v883);
            if ( (unsigned int)dword_1C024C960 > 6 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v242, v243) )
              {
                v799 = v882;
                v976 = 4LL;
                v975 = &v799;
                tlgWriteTransfer_EtwWriteTransfer(
                  (__int64)&dword_1C024C960,
                  (unsigned __int8 *)dword_1C02199F7,
                  &v883,
                  0LL,
                  3u,
                  &v974);
              }
            }
          }
        }
        else
        {
          v881 = 0LL;
        }
        v81 = 0LL;
        while ( 1 )
        {
          v82 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v82 )
            v81 = *v82;
          v85 = (PVOID)PsGetCurrentProcess(v84, v83);
          if ( v85 )
          {
            if ( v85 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v87, v86) == gpepCSRSS && v81 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v81 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v881
          && (*(_DWORD *)(v881 + 48) || *(int *)(v881 + 24) > 0) )
        {
          *(_DWORD *)(v881 + 44) = 1;
          *(GUID *)(v881 + 28) = v883;
          if ( (unsigned int)dword_1C024C960 > 6 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v88) )
            {
              v800 = v882;
              v979 = 4LL;
              v978 = &v800;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199A0,
                &v883,
                0LL,
                3u,
                &v977);
              v244 = (unsigned int)dword_1C024C960;
            }
            if ( (unsigned int)v244 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v244, v245) )
            {
              v801 = v882;
              v982 = 4LL;
              v981 = &v801;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_1C024C960,
                (unsigned __int8 *)dword_1C02199CD,
                &v883,
                0LL,
                3u,
                &v980);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v81;
        gbValidateHandleForIL = 1;
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v91 = PsGetCurrentProcess(v90, v89),
              v92 = PsGetProcessSessionIdEx(v91),
              v93 = PsGetCurrentThreadProcess(),
              v92 == (unsigned int)PsGetProcessSessionIdEx(v93)) )
        {
          v95 = KeGetCurrentThread();
          v96 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            v98 = (__int64 *)PsGetThreadWin32Thread(v95);
            if ( v98 )
              v96 = *v98;
          }
          v99 = PsGetCurrentProcessWin32Process(v97);
          if ( v96 )
          {
            if ( v99 )
            {
              if ( (*(_DWORD *)(v96 + 480) & 0x1000000) != 0 )
              {
                v94 = *(unsigned int *)(v96 + 1216);
                if ( (v94 & 0x80u) == 0LL && (*(_DWORD *)(v99 + 12) & 0x8000) != 0 )
                {
                  v246 = (PERESOURCE *)GetDomainLockRef(12LL);
                  v248 = v246;
                  if ( v246 == (PERESOURCE *)&gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v247);
                  if ( ExIsResourceAcquiredExclusiveLite(*v248) == 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v249);
                  ExEnterCriticalRegionAndAcquireResourceExclusive(*v248);
                  while ( 1 )
                  {
                    v251 = gpducstulHead;
                    if ( !gpducstulHead )
                      break;
                    gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
                    *((_QWORD *)v251 + 2) = 0LL;
                    if ( !*(_DWORD *)(*(_QWORD *)v251 + 8LL) )
                      MicrosoftTelemetryAssertTriggeredNoArgsKM(v250);
                    CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v860);
                    HMUnlockObject(*(_QWORD *)v251);
                    tagDomLock::LockExclusive(v860);
                  }
                  ExReleaseResourceAndLeaveCriticalRegion(*v248);
                }
              }
            }
          }
        }
        if ( gPowerTransitionsState )
          v784 = 255;
        else
          v76 = 1;
        UserSessionSwitchLeaveCrit(v94);
LABEL_131:
        if ( !v76 )
          goto LABEL_133;
        goto LABEL_132;
      }
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v78);
      return 0LL;
    }
    return 3221225473LL;
  }
  v139 = v73 - 1;
  if ( !v139 )
  {
    if ( v8 != 32 || !v7 )
      return 3221225485LL;
    v209 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v209 )
      v209[1] = KeQueryPerformanceCounter(0LL);
    v880 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v879 = 1;
      v210 = PsGetCurrentThreadWin32Thread(v208);
      v878 = v210;
      if ( v210 && (*(int *)(v210 + 24) > 0 || *(_DWORD *)(v878 + 48)) )
      {
        EtwActivityIdControl(3u, &v880);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v211, v212) )
          {
            v796 = v879;
            v967 = 4LL;
            v966 = &v796;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v880,
              0LL,
              3u,
              &v965);
          }
        }
      }
    }
    else
    {
      v878 = 0LL;
    }
    v213 = 0LL;
    while ( 1 )
    {
      v214 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v214 )
        v213 = *v214;
      v217 = (PVOID)PsGetCurrentProcess(v216, v215);
      if ( v217 )
      {
        if ( v217 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v219, v218) == gpepCSRSS && v213 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v213 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v878
      && (*(_DWORD *)(v878 + 48) || *(int *)(v878 + 24) > 0) )
    {
      *(_DWORD *)(v878 + 44) = 1;
      *(GUID *)(v878 + 28) = v880;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v220) )
        {
          v797 = v879;
          v970 = 4LL;
          v969 = &v797;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v880,
            0LL,
            3u,
            &v968);
          v221 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v221 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v221, v222) )
        {
          v798 = v879;
          v973 = 4LL;
          v972 = &v798;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v880,
            0LL,
            3u,
            &v971);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v213;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v225 = PsGetCurrentProcess(v224, v223),
          v226 = PsGetProcessSessionIdEx(v225),
          v227 = PsGetCurrentThreadProcess(),
          v226 == (unsigned int)PsGetProcessSessionIdEx(v227)) )
    {
      v228 = KeGetCurrentThread();
      v229 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v231 = (__int64 *)PsGetThreadWin32Thread(v228);
        if ( v231 )
          v229 = *v231;
      }
      v232 = PsGetCurrentProcessWin32Process(v230);
      if ( v229
        && v232
        && (*(_DWORD *)(v229 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v229 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v232 + 12) & 0x8000) != 0 )
      {
        v234 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v234 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v233);
        if ( ExIsResourceAcquiredExclusiveLite(*v234) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v235);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v234);
        while ( 1 )
        {
          v237 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          *((_QWORD *)v237 + 2) = 0LL;
          if ( !*(_DWORD *)(*(_QWORD *)v237 + 8LL) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v236);
          CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v859);
          HMUnlockObject(*(_QWORD *)v237);
          tagDomLock::LockExclusive(v859);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v234);
      }
    }
    dword_1C0253174 = *v7;
    v238 = (unsigned int)v7[1];
    dword_1C0253178 = v7[1];
    dword_1C025317C = v7[2];
    dword_1C0253180 = v7[3];
    dword_1C0253184 = v7[4];
    dword_1C0253188 = v7[5];
    dword_1C025318C = v7[6];
    dword_1C0253190 = v7[7];
    if ( !gProtocolType && !gbPowerHighPrecisionBrightnessSupported && (_DWORD)v238 != -1 )
    {
      if ( qword_1C0252AE8 )
      {
        LOBYTE(v238) = 1;
        v239 = qword_1C0252AE8(v238, v7);
      }
      else
      {
        v239 = -1073741637;
      }
      v784 = v239;
      LOBYTE(v6) = v239 >= 0;
      gbPowerHighPrecisionBrightnessSupported = v6;
    }
    v240 = (unsigned int)dword_1C0253174;
    dword_1C0253158 = dword_1C0253174;
    dword_1C025315C = dword_1C0253174;
    dword_1C0253160 = dword_1C0253184;
    dword_1C0253164 = dword_1C0253184;
    if ( dword_1C0253150 == 1 )
    {
      if ( dword_1C0253170 == dword_1C0253174 )
      {
LABEL_403:
        UserSessionSwitchLeaveCrit(v240);
        return v784;
      }
      LODWORD(v786) = 11;
      *((_QWORD *)&v786 + 1) = 1LL;
      QueuePowerRequest(&v786, 0);
    }
    if ( dword_1C0253150 == 2 && dword_1C0253170 != dword_1C0253184 )
    {
      LODWORD(v786) = 11;
      *((_QWORD *)&v786 + 1) = 2LL;
      QueuePowerRequest(&v786, 0);
    }
    goto LABEL_403;
  }
  v140 = v139 - 1;
  if ( !v140 )
  {
    if ( gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v178 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v178 )
      v178[1] = KeQueryPerformanceCounter(0LL);
    v877 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v876 = 1;
      v179 = PsGetCurrentThreadWin32Thread(v177);
      v875 = v179;
      if ( v179 && (*(int *)(v179 + 24) > 0 || *(_DWORD *)(v875 + 48)) )
      {
        EtwActivityIdControl(3u, &v877);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v180, v181) )
          {
            v793 = v876;
            v958 = 4LL;
            v957 = &v793;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v877,
              0LL,
              3u,
              &v956);
          }
        }
      }
    }
    else
    {
      v875 = 0LL;
    }
    v182 = 0LL;
    while ( 1 )
    {
      v183 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v183 )
        v182 = *v183;
      v186 = (PVOID)PsGetCurrentProcess(v185, v184);
      if ( v186 )
      {
        if ( v186 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v188, v187) == gpepCSRSS && v182 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v182 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v875
      && (*(_DWORD *)(v875 + 48) || *(int *)(v875 + 24) > 0) )
    {
      *(_DWORD *)(v875 + 44) = 1;
      *(GUID *)(v875 + 28) = v877;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v189) )
        {
          v794 = v876;
          v961 = 4LL;
          v960 = &v794;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v877,
            0LL,
            3u,
            &v959);
          v190 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v190 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v190, v191) )
        {
          v795 = v876;
          v964 = 4LL;
          v963 = &v795;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v877,
            0LL,
            3u,
            &v962);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v182;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v194 = PsGetCurrentProcess(v193, v192),
          v195 = PsGetProcessSessionIdEx(v194),
          v196 = PsGetCurrentThreadProcess(),
          v195 == (unsigned int)PsGetProcessSessionIdEx(v196)) )
    {
      v197 = KeGetCurrentThread();
      v198 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v200 = (__int64 *)PsGetThreadWin32Thread(v197);
        if ( v200 )
          v198 = *v200;
      }
      v201 = PsGetCurrentProcessWin32Process(v199);
      v61 = v201;
      if ( v198
        && v201
        && (*(_DWORD *)(v198 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v198 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v201 + 12) & 0x8000) != 0 )
      {
        v203 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v203 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v202);
        if ( ExIsResourceAcquiredExclusiveLite(*v203) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v204);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v203);
        while ( 1 )
        {
          v206 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          *((_QWORD *)v206 + 2) = 0LL;
          if ( !*(_DWORD *)(*(_QWORD *)v206 + 8LL) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v205);
          CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v868);
          HMUnlockObject(*(_QWORD *)v206);
          tagDomLock::LockExclusive(v868);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v203);
      }
    }
    if ( !gWakeInProgress )
      goto LABEL_91;
    v207 = gWakeInProgressReason;
    gWakeInProgressReason = MonitorRequestReasonUnknown;
    gWakeInProgress = 0;
    if ( gnPoSessionSwitchBlockCount < 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v61);
    LODWORD(v786) = 12;
    *((_QWORD *)&v786 + 1) = v207;
    goto LABEL_90;
  }
  v141 = v140 - 1;
  if ( !v141 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v8 != 8 || !v7 )
      return 3221225473LL;
    UserSessionSwitchBlock_Start();
    *((_QWORD *)&v786 + 1) = v7[1];
    LODWORD(v786) = 14;
    if ( *(_BYTE *)v7 )
      LODWORD(v786) = 13;
    v176 = 0;
    goto LABEL_280;
  }
  v142 = v141 - 1;
  if ( !v142 )
  {
    if ( !gbTtmEnabled )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v8 != 4 || !v7 )
      return 3221225473LL;
    v176 = 1;
    *((_QWORD *)&v786 + 1) = *v7;
    LODWORD(v786) = 15;
LABEL_280:
    QueuePowerRequest(&v786, v176);
    return 0LL;
  }
  if ( v142 != 1 )
    return 3221225473LL;
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( v8 == 1 && v7 && !a5 && !a6 )
  {
    v143 = *(_BYTE *)v7 != 0;
    v145 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
    if ( v145 )
      v145[1] = KeQueryPerformanceCounter(0LL);
    v874 = 0LL;
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
    {
      v873 = 1;
      v146 = PsGetCurrentThreadWin32Thread(v144);
      v872 = v146;
      if ( v146 && (*(int *)(v146 + 24) > 0 || *(_DWORD *)(v872 + 48)) )
      {
        EtwActivityIdControl(3u, &v874);
        if ( (unsigned int)dword_1C024C960 > 6 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v147, v148) )
          {
            v790 = v873;
            v949 = 4LL;
            v948 = &v790;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1C024C960,
              (unsigned __int8 *)dword_1C02199F7,
              &v874,
              0LL,
              3u,
              &v947);
          }
        }
      }
    }
    else
    {
      v872 = 0LL;
    }
    v149 = 0LL;
    while ( 1 )
    {
      v150 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v150 )
        v149 = *v150;
      v153 = (PVOID)PsGetCurrentProcess(v152, v151);
      if ( v153 )
      {
        if ( v153 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v155, v154) == gpepCSRSS && v149 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v149 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
      && v872
      && (*(_DWORD *)(v872 + 48) || *(int *)(v872 + 24) > 0) )
    {
      *(_DWORD *)(v872 + 44) = 1;
      *(GUID *)(v872 + 28) = v874;
      if ( (unsigned int)dword_1C024C960 > 6 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, (unsigned int)dword_1C024C960, v156) )
        {
          v791 = v873;
          v952 = 4LL;
          v951 = &v791;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199A0,
            &v874,
            0LL,
            3u,
            &v950);
          v157 = (unsigned int)dword_1C024C960;
        }
        if ( (unsigned int)v157 > 6 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 0x2000LL, v157, v158) )
        {
          v792 = v873;
          v955 = 4LL;
          v954 = &v792;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_1C024C960,
            (unsigned __int8 *)dword_1C02199CD,
            &v874,
            0LL,
            3u,
            &v953);
        }
      }
    }
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v149;
    gbValidateHandleForIL = 1;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (v161 = PsGetCurrentProcess(v160, v159),
          v162 = PsGetProcessSessionIdEx(v161),
          v163 = PsGetCurrentThreadProcess(),
          v162 == (unsigned int)PsGetProcessSessionIdEx(v163)) )
    {
      v164 = KeGetCurrentThread();
      v165 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
      {
        v167 = (__int64 *)PsGetThreadWin32Thread(v164);
        if ( v167 )
          v165 = *v167;
      }
      v168 = PsGetCurrentProcessWin32Process(v166);
      if ( v165
        && v168
        && (*(_DWORD *)(v165 + 480) & 0x1000000) != 0
        && (*(_DWORD *)(v165 + 1216) & 0x80u) == 0
        && (*(_DWORD *)(v168 + 12) & 0x8000) != 0 )
      {
        v170 = (PERESOURCE *)GetDomainLockRef(12LL);
        if ( v170 == (PERESOURCE *)&gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v169);
        if ( ExIsResourceAcquiredExclusiveLite(*v170) == 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v171);
        ExEnterCriticalRegionAndAcquireResourceExclusive(*v170);
        while ( 1 )
        {
          v173 = gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
          *((_QWORD *)v173 + 2) = 0LL;
          if ( !*(_DWORD *)(*(_QWORD *)v173 + 8LL) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v172);
          CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>::CUnLockDomainExclusiveInUserCrit<DLT_THREADLOCK>(&v858);
          HMUnlockObject(*(_QWORD *)v173);
          tagDomLock::LockExclusive(v858);
        }
        ExReleaseResourceAndLeaveCriticalRegion(*v170);
      }
    }
    CitDisplayRequestChange(v143);
    EtwTraceDisplayReqChange(v143, v174, v175);
    goto LABEL_91;
  }
  return 3221225485LL;
}
