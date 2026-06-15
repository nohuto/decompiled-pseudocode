/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019E70
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016E00 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001C5F0 (AudioSessionManagerGetCurrentSession.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CEBF0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800CF130 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800D0690 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x1800052E0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJ$$QEAVCListWorker@1.c)
 *     ??8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z @ 0x18000537C (--8CAudioSessionInstanceId@@QEBA_NAEBV0@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006A00 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001B520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001B670 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18002B400 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002BE20 (--0CAudioSession@@IEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800541C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800C7478 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800CA1EC (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x1800CD10C (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800CD814 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     _lambda_da2549763b2484cb2cd636c002fd2274_::operator() @ 0x1800CDF34 (_lambda_da2549763b2484cb2cd636c002fd2274_--operator().c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800CE5CC (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800CF394 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800CFE40 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 */

// Hidden C++ exception states: #wind=51
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // r15
  struct _RTL_CRITICAL_SECTION *v9; // rdi
  CAudioSession *v10; // rsi
  char *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // rdx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 *j; // r14
  int v20; // edx
  char *v21; // r15
  int v22; // eax
  __int64 v23; // rax
  char *v24; // r13
  struct CAudioSessionInstanceId *v25; // r15
  unsigned __int16 *v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // esi
  unsigned __int16 *v29; // rcx
  int v30; // eax
  unsigned int v31; // r12d
  __int64 m; // rbx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  int v36; // ebx
  int v37; // r13d
  DWORD LastError; // ebx
  int v39; // r12d
  _QWORD *v40; // r15
  _QWORD *v41; // r14
  CAudioSession *v42; // rdi
  struct _RTL_CRITICAL_SECTION *v43; // rbx
  struct _RTL_CRITICAL_SECTION *v44; // rdi
  CAudioSession *v45; // r12
  int v46; // r14d
  _QWORD *v47; // rdi
  _QWORD *v48; // rsi
  DWORD v49; // ebx
  unsigned int v50; // edi
  CAudioSession *v51; // rax
  CAudioSession *v52; // rbx
  CAudioSession *v53; // rcx
  GUID v54; // xmm6
  struct IAudioProcess *v55; // rbx
  struct CAudioSessionInstanceId *v56; // rsi
  int v57; // eax
  unsigned int v58; // ebx
  CAudioSessionManager *v59; // r14
  struct _RTL_CRITICAL_SECTION *v60; // rbx
  struct _RTL_CRITICAL_SECTION *v61; // rdi
  char *v62; // r15
  char *v63; // r14
  unsigned __int16 *v64; // rbx
  __int64 v65; // rsi
  unsigned int v66; // esi
  unsigned __int16 *v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  __int64 ii; // rbx
  CAudioSession *v71; // rbx
  CAudioSessionManager *v72; // rsi
  struct _RTL_CRITICAL_SECTION *v73; // r13
  CAudioSessionManager *v74; // rdi
  int v75; // eax
  unsigned int v76; // ebx
  int v77; // eax
  unsigned int v78; // ebx
  CAudioSession *v79; // r15
  unsigned int v80; // ebx
  unsigned int v81; // esi
  unsigned int v82; // edi
  unsigned int *v83; // rax
  unsigned int *v84; // r14
  _WORD *v85; // rdx
  unsigned int *v86; // r8
  unsigned __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // r11
  __int64 v90; // rcx
  int v91; // ebx
  __int64 v92; // r10
  CAudioSessionManager *v93; // r9
  _WORD *v94; // rcx
  _WORD *v95; // rdx
  unsigned __int64 v96; // rax
  int v97; // r8d
  int v98; // r10d
  __int64 v99; // r9
  HANDLE ProcessHeap; // rax
  CAudioSession *v101; // rbx
  CAudioSession *v102; // rdi
  __int64 v103; // rdi
  void *v104; // rax
  __int64 v105; // rcx
  int v106; // ecx
  int v108; // eax
  unsigned int v109; // edi
  DWORD v110; // ebx
  CPerEndpointVolumeAudioSession *v111; // rax
  __int64 Node; // rax
  int v113; // eax
  unsigned int v114; // ebx
  char *v115; // [rsp+20h] [rbp-668h]
  char v116; // [rsp+40h] [rbp-648h]
  CAudioSession *v117; // [rsp+48h] [rbp-640h] BYREF
  CAudioSession *v118; // [rsp+50h] [rbp-638h]
  CAudioSession *v119; // [rsp+58h] [rbp-630h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-628h]
  struct CAudioSessionInstanceId *v121; // [rsp+68h] [rbp-620h]
  unsigned int v122; // [rsp+70h] [rbp-618h]
  volatile signed __int32 *v123; // [rsp+78h] [rbp-610h] BYREF
  struct IAudioProcess *v124; // [rsp+80h] [rbp-608h]
  int v125; // [rsp+88h] [rbp-600h]
  int v126; // [rsp+8Ch] [rbp-5FCh]
  CAudioSessionManager *v127; // [rsp+90h] [rbp-5F8h]
  __int64 v128; // [rsp+98h] [rbp-5F0h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-5E8h] BYREF
  CAudioSessionManager *v130; // [rsp+A8h] [rbp-5E0h] BYREF
  struct CAudioSessionInstanceId *v131; // [rsp+B0h] [rbp-5D8h]
  CAudioSession **v132; // [rsp+B8h] [rbp-5D0h]
  char v133; // [rsp+C0h] [rbp-5C8h]
  int v134; // [rsp+C8h] [rbp-5C0h]
  int v135; // [rsp+CCh] [rbp-5BCh]
  int v136; // [rsp+D0h] [rbp-5B8h]
  int v137; // [rsp+D4h] [rbp-5B4h]
  WINBOOL fPending; // [rsp+D8h] [rbp-5B0h] BYREF
  int v139; // [rsp+DCh] [rbp-5ACh] BYREF
  unsigned int v140; // [rsp+E0h] [rbp-5A8h] BYREF
  LPCRITICAL_SECTION v141; // [rsp+E8h] [rbp-5A0h]
  CAudioSession *v142; // [rsp+F0h] [rbp-598h]
  unsigned int v143; // [rsp+F8h] [rbp-590h]
  LPVOID Context; // [rsp+100h] [rbp-588h] BYREF
  LPCRITICAL_SECTION v145; // [rsp+108h] [rbp-580h]
  unsigned int v146; // [rsp+110h] [rbp-578h]
  unsigned int v147; // [rsp+114h] [rbp-574h]
  unsigned int v148; // [rsp+118h] [rbp-570h]
  unsigned int v149; // [rsp+11Ch] [rbp-56Ch]
  unsigned int v150; // [rsp+120h] [rbp-568h]
  unsigned int v151; // [rsp+124h] [rbp-564h] BYREF
  LPCRITICAL_SECTION v152; // [rsp+128h] [rbp-560h]
  _DWORD v153[4]; // [rsp+130h] [rbp-558h] BYREF
  int v154; // [rsp+140h] [rbp-548h]
  CAudioSession *v155; // [rsp+148h] [rbp-540h] BYREF
  CAudioSession **v156; // [rsp+150h] [rbp-538h]
  CAudioSessionManager *v157; // [rsp+158h] [rbp-530h]
  char v158; // [rsp+160h] [rbp-528h]
  int v159; // [rsp+168h] [rbp-520h]
  _WORD *v160; // [rsp+170h] [rbp-518h]
  __int64 v161; // [rsp+178h] [rbp-510h]
  struct CAudioSession **v162; // [rsp+180h] [rbp-508h]
  CAudioSession *v163; // [rsp+188h] [rbp-500h]
  __int64 v164; // [rsp+190h] [rbp-4F8h] BYREF
  CAudioSession *v165; // [rsp+198h] [rbp-4F0h]
  unsigned int *v166; // [rsp+1A0h] [rbp-4E8h]
  __int64 v167; // [rsp+1A8h] [rbp-4E0h]
  int v168; // [rsp+1B0h] [rbp-4D8h]
  int v169; // [rsp+1B4h] [rbp-4D4h]
  unsigned int v170; // [rsp+1B8h] [rbp-4D0h]
  int v171; // [rsp+1BCh] [rbp-4CCh]
  int v172; // [rsp+1C0h] [rbp-4C8h]
  int v173; // [rsp+1C4h] [rbp-4C4h]
  int v174; // [rsp+1C8h] [rbp-4C0h]
  int v175; // [rsp+1CCh] [rbp-4BCh]
  int v176; // [rsp+1D0h] [rbp-4B8h]
  unsigned int v177; // [rsp+1D4h] [rbp-4B4h]
  unsigned int v178; // [rsp+1D8h] [rbp-4B0h]
  int v179; // [rsp+1DCh] [rbp-4ACh]
  int v180; // [rsp+1E0h] [rbp-4A8h]
  int v181; // [rsp+1E8h] [rbp-4A0h]
  int v182; // [rsp+1F0h] [rbp-498h]
  int v183; // [rsp+1F8h] [rbp-490h]
  int v184; // [rsp+200h] [rbp-488h]
  int v185; // [rsp+204h] [rbp-484h]
  int v186; // [rsp+208h] [rbp-480h]
  int v187; // [rsp+20Ch] [rbp-47Ch]
  unsigned int v188; // [rsp+210h] [rbp-478h]
  int v189; // [rsp+214h] [rbp-474h]
  int v190; // [rsp+218h] [rbp-470h]
  int v191; // [rsp+21Ch] [rbp-46Ch]
  int v192; // [rsp+228h] [rbp-460h]
  int v193; // [rsp+230h] [rbp-458h]
  int v194; // [rsp+238h] [rbp-450h]
  unsigned int v195; // [rsp+23Ch] [rbp-44Ch]
  int v196; // [rsp+240h] [rbp-448h]
  unsigned int v197; // [rsp+244h] [rbp-444h]
  unsigned int v198; // [rsp+248h] [rbp-440h]
  int v199; // [rsp+24Ch] [rbp-43Ch]
  unsigned int v200; // [rsp+250h] [rbp-438h]
  unsigned int v201; // [rsp+254h] [rbp-434h]
  unsigned __int16 *i; // [rsp+258h] [rbp-430h]
  unsigned __int16 *v203; // [rsp+260h] [rbp-428h]
  char *v204; // [rsp+268h] [rbp-420h]
  unsigned __int16 *k; // [rsp+270h] [rbp-418h]
  _QWORD *v206; // [rsp+278h] [rbp-410h]
  char *v207; // [rsp+280h] [rbp-408h]
  __int64 v208; // [rsp+288h] [rbp-400h]
  __int64 v209; // [rsp+290h] [rbp-3F8h]
  __int64 *v210; // [rsp+298h] [rbp-3F0h]
  _QWORD *v211; // [rsp+2A0h] [rbp-3E8h]
  unsigned __int16 *n; // [rsp+2A8h] [rbp-3E0h]
  _QWORD *v213; // [rsp+2B0h] [rbp-3D8h]
  char *v214; // [rsp+2B8h] [rbp-3D0h]
  __int64 v215; // [rsp+2C0h] [rbp-3C8h]
  __int64 v216; // [rsp+2C8h] [rbp-3C0h]
  _QWORD v217[4]; // [rsp+2D0h] [rbp-3B8h] BYREF
  CAudioSessionManager *v218; // [rsp+2F0h] [rbp-398h]
  _WORD *v219; // [rsp+2F8h] [rbp-390h]
  unsigned __int64 v220; // [rsp+300h] [rbp-388h]
  __int64 v221; // [rsp+308h] [rbp-380h]
  _WORD *v222; // [rsp+310h] [rbp-378h]
  unsigned __int64 v223; // [rsp+318h] [rbp-370h]
  __int64 v224; // [rsp+320h] [rbp-368h]
  void *v225; // [rsp+328h] [rbp-360h]
  _QWORD *v226; // [rsp+330h] [rbp-358h]
  _DWORD v227[2]; // [rsp+338h] [rbp-350h] BYREF
  __int64 v228; // [rsp+340h] [rbp-348h]
  int v229; // [rsp+348h] [rbp-340h]
  int v230; // [rsp+34Ch] [rbp-33Ch]
  void **v231; // [rsp+350h] [rbp-338h]
  unsigned int *v232; // [rsp+358h] [rbp-330h]
  CAudioSession *v233; // [rsp+360h] [rbp-328h]
  CAudioSession **v234; // [rsp+368h] [rbp-320h]
  char v235; // [rsp+370h] [rbp-318h]
  union _RTL_RUN_ONCE *v236; // [rsp+378h] [rbp-310h] BYREF
  int v237; // [rsp+380h] [rbp-308h]
  __int64 v238; // [rsp+388h] [rbp-300h]
  char *v239; // [rsp+390h] [rbp-2F8h]
  __int64 *v240; // [rsp+398h] [rbp-2F0h]
  char *v241; // [rsp+3A0h] [rbp-2E8h]
  __int64 *v242; // [rsp+3A8h] [rbp-2E0h]
  __int64 v243; // [rsp+3B0h] [rbp-2D8h]
  __int64 v244; // [rsp+3B8h] [rbp-2D0h]
  __int64 v245; // [rsp+3C0h] [rbp-2C8h]
  __int64 v246; // [rsp+3C8h] [rbp-2C0h]
  unsigned __int16 *v247; // [rsp+3D0h] [rbp-2B8h]
  __int64 v248; // [rsp+3D8h] [rbp-2B0h]
  __int64 v249; // [rsp+3E0h] [rbp-2A8h]
  char *v250; // [rsp+3E8h] [rbp-2A0h]
  __int64 v251; // [rsp+3F0h] [rbp-298h]
  char *v252; // [rsp+3F8h] [rbp-290h]
  __int64 v253; // [rsp+400h] [rbp-288h]
  __int64 v254; // [rsp+408h] [rbp-280h]
  __int64 v255; // [rsp+410h] [rbp-278h]
  __int64 v256; // [rsp+418h] [rbp-270h]
  LPCRITICAL_SECTION v257; // [rsp+420h] [rbp-268h]
  char *v258; // [rsp+428h] [rbp-260h]
  char *v259; // [rsp+430h] [rbp-258h]
  char *v260; // [rsp+438h] [rbp-250h]
  char *v261; // [rsp+440h] [rbp-248h]
  char *v262; // [rsp+448h] [rbp-240h]
  char *v263; // [rsp+450h] [rbp-238h]
  _QWORD *v264; // [rsp+458h] [rbp-230h]
  __int64 v265; // [rsp+460h] [rbp-228h]
  CAudioSession *v266; // [rsp+468h] [rbp-220h]
  char *v267; // [rsp+470h] [rbp-218h]
  struct _RTL_CRITICAL_SECTION *v268; // [rsp+478h] [rbp-210h]
  LPCRITICAL_SECTION v269; // [rsp+480h] [rbp-208h]
  LPCRITICAL_SECTION v270; // [rsp+488h] [rbp-200h]
  CAudioSession *v271; // [rsp+490h] [rbp-1F8h]
  char *v272; // [rsp+498h] [rbp-1F0h]
  char *v273; // [rsp+4A0h] [rbp-1E8h]
  CPerEndpointVolumeAudioSession *v274; // [rsp+4A8h] [rbp-1E0h]
  CAudioSession *v275; // [rsp+4B0h] [rbp-1D8h]
  char *v276; // [rsp+4B8h] [rbp-1D0h]
  struct _RTL_CRITICAL_SECTION *v277; // [rsp+4C0h] [rbp-1C8h]
  __int64 v278; // [rsp+4C8h] [rbp-1C0h]
  __int64 v279; // [rsp+4D0h] [rbp-1B8h]
  unsigned __int16 *v280; // [rsp+4D8h] [rbp-1B0h]
  char *v281; // [rsp+4E0h] [rbp-1A8h]
  char v282; // [rsp+4E8h] [rbp-1A0h] BYREF
  __int64 v283; // [rsp+4F0h] [rbp-198h]
  CAudioSession *v284; // [rsp+500h] [rbp-188h]
  unsigned int *v285; // [rsp+508h] [rbp-180h]
  unsigned int *v286; // [rsp+510h] [rbp-178h]
  _WORD *v287; // [rsp+518h] [rbp-170h]
  _DWORD *v288; // [rsp+520h] [rbp-168h]
  unsigned __int64 v289; // [rsp+528h] [rbp-160h]
  _WORD *v290; // [rsp+530h] [rbp-158h]
  _WORD *v291; // [rsp+538h] [rbp-150h]
  unsigned __int64 v292; // [rsp+540h] [rbp-148h]
  CAudioSession *v293; // [rsp+548h] [rbp-140h]
  __int64 v294; // [rsp+550h] [rbp-138h]
  void *v295; // [rsp+558h] [rbp-130h]
  __int64 v296; // [rsp+560h] [rbp-128h]
  char *v297; // [rsp+568h] [rbp-120h]
  char *v298; // [rsp+570h] [rbp-118h]
  unsigned __int16 *v299; // [rsp+578h] [rbp-110h]
  unsigned __int16 *v300; // [rsp+580h] [rbp-108h]
  GUID v301; // [rsp+590h] [rbp-F8h]
  GUID v302; // [rsp+5A0h] [rbp-E8h]
  struct _RTL_CRITICAL_SECTION *v303; // [rsp+5B0h] [rbp-D8h]
  __int64 v304; // [rsp+5B8h] [rbp-D0h]
  __int64 v305; // [rsp+5C0h] [rbp-C8h]
  char v306[24]; // [rsp+5C8h] [rbp-C0h] BYREF
  __int64 v307; // [rsp+5E0h] [rbp-A8h]
  int v308; // [rsp+5E8h] [rbp-A0h]
  int v309; // [rsp+5ECh] [rbp-9Ch]
  void *v310; // [rsp+5F0h] [rbp-98h]
  int v311; // [rsp+5F8h] [rbp-90h]
  int v312; // [rsp+5FCh] [rbp-8Ch]
  void *v313; // [rsp+600h] [rbp-88h]
  int v314; // [rsp+608h] [rbp-80h]
  int v315; // [rsp+60Ch] [rbp-7Ch]
  int *v316; // [rsp+610h] [rbp-78h]
  int v317; // [rsp+618h] [rbp-70h]
  int v318; // [rsp+61Ch] [rbp-6Ch]
  int *v319; // [rsp+620h] [rbp-68h]
  int v320; // [rsp+628h] [rbp-60h]
  int v321; // [rsp+62Ch] [rbp-5Ch]
  wil::details::in1diag3 *retaddr; // [rsp+688h] [rbp+0h]

  v122 = a4;
  v7 = a3;
  v121 = a3;
  v124 = a2;
  v127 = this;
  v217[2] = this;
  v218 = this;
  v217[3] = a2;
  v217[1] = a3;
  v153[2] = a4;
  v162 = a7;
  v116 = 1;
  *a7 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v298 = (char *)this + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  lpCriticalSection = v9;
  v118 = 0LL;
  v119 = 0LL;
  v155 = 0LL;
  v10 = 0LL;
  v163 = 0LL;
  v303 = v9;
  EnterCriticalSection(v9);
  v11 = (char *)this + 56;
  v204 = (char *)this + 56;
  v305 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  v123 = (volatile signed __int32 *)(v305 + 24);
  v229 = CAudioSessionInstanceId::ToString(v7, &v123);
  if ( v229 < 0 )
  {
    v203 = (unsigned __int16 *)(v123 - 6);
    if ( _InterlockedExchangeAdd(v123 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v203 + 8LL))(*(_QWORD *)v203);
    v15 = 0;
    v147 = 0;
    v118 = v119;
    v10 = v163;
    v11 = v204;
  }
  else
  {
    v12 = v123;
    v13 = *((int *)v123 - 4);
    v230 = v13;
    v299 = (unsigned __int16 *)(v123 - 6);
    v168 = 1 - *((_DWORD *)v123 - 2);
    v169 = *((_DWORD *)v123 - 3) - v13;
    if ( (v168 | v169) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v123, (unsigned int)v13);
      v12 = v123;
    }
    _o__wcsupr_s(v12, (int)v13 + 1);
    if ( (int)v13 < 0 || (int)v13 > *((_DWORD *)v123 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v123 - 4) = v13;
    *((_WORD *)v123 + v13) = 0;
    v14 = (unsigned __int16 *)v123;
    if ( !v123 )
      ATL::AtlThrowImpl(-2147467259);
    v15 = 0;
    v146 = 0;
    for ( i = (unsigned __int16 *)v123; ; i = v14 )
    {
      v16 = *v14;
      if ( !(_WORD)v16 )
        break;
      v15 = v16 + 33 * v15;
      v146 = v15;
      ++v14;
    }
    v300 = (unsigned __int16 *)(v123 - 6);
    ATL::CStringData::Release((ATL::CStringData *)(v123 - 6));
    v147 = v15;
  }
  v170 = v15;
  if ( *((_DWORD *)v11 + 4) == 17 )
    v17 = v15 % 0x11;
  else
    v17 = v15 % *((_DWORD *)v11 + 4);
  v171 = v17;
  v18 = *(_QWORD *)v11;
  if ( v18 )
  {
    for ( j = *(__int64 **)(v18 + 8 * v17); ; j = (__int64 *)j[11] )
    {
      v210 = j;
      if ( !j )
        break;
      v172 = *((_DWORD *)j + 24);
      if ( v172 == v15 )
      {
        v304 = *(_QWORD *)v7;
        v238 = *j;
        if ( !(unsigned int)_o__wcsicmp(v238, v304) )
        {
          v239 = (char *)v7 + 56;
          v240 = j + 7;
          v20 = *((_DWORD *)j + 16);
          if ( v20 == *((_DWORD *)v7 + 16) && (v20 || *((_DWORD *)j + 14) == *((_DWORD *)v7 + 14)) )
          {
            v21 = (char *)v7 + 8;
            v241 = v21;
            v242 = j + 1;
            v22 = *((_DWORD *)j + 12);
            if ( v22 == *((_DWORD *)v21 + 10) )
            {
              if ( v22 || (v243 = *(_QWORD *)v21, v244 = j[1], !(unsigned int)_o__wcsicmp(v244, v243)) )
              {
                v23 = j[3] - *((_QWORD *)v21 + 2);
                if ( !v23 )
                  v23 = j[4] - *((_QWORD *)v21 + 3);
                if ( !v23 )
                {
                  v24 = (char *)v127 + 56;
                  v207 = (char *)v127 + 56;
                  v245 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
                  v128 = v245 + 24;
                  v25 = v121;
                  v173 = CAudioSessionInstanceId::ToString(v121, &v128);
                  if ( v173 < 0 )
                  {
                    v206 = (_QWORD *)(v128 - 24);
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v128 - 24 + 16), 0xFFFFFFFF) <= 1 )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v206 + 8LL))(*v206);
                    v28 = 0;
                    v143 = 0;
                    v118 = v119;
                    v24 = v207;
                  }
                  else
                  {
                    v26 = (unsigned __int16 *)v128;
                    v27 = *(int *)(v128 - 16);
                    v174 = v27;
                    v246 = v128 - 24;
                    v175 = 1 - *(_DWORD *)(v128 - 24 + 16);
                    v176 = *(_DWORD *)(v128 - 24 + 12) - v27;
                    if ( (v175 | v176) < 0 )
                    {
                      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v128, (unsigned int)v27);
                      v26 = (unsigned __int16 *)v128;
                    }
                    _o__wcsupr_s(v26, (int)v27 + 1);
                    if ( (int)v27 < 0 || (int)v27 > *((_DWORD *)v26 - 3) )
                      ATL::AtlThrowImpl(-2147024809);
                    *((_DWORD *)v26 - 4) = v27;
                    v26[v27] = 0;
                    v28 = 0;
                    v148 = 0;
                    v29 = v26;
                    for ( k = v26; ; k = v29 )
                    {
                      v30 = *v29;
                      if ( !(_WORD)v30 )
                        break;
                      v28 = v30 + 33 * v28;
                      v148 = v28;
                      ++v29;
                    }
                    v247 = v26 - 12;
                    ATL::CStringData::Release((ATL::CStringData *)(v26 - 12));
                    v143 = v28;
                  }
                  v177 = v28;
                  if ( *((_DWORD *)v24 + 4) == 17 )
                    v31 = v28 % 0x11;
                  else
                    v31 = v28 % *((_DWORD *)v24 + 4);
                  v178 = v31;
                  if ( *(_QWORD *)v24 )
                  {
                    for ( m = *(_QWORD *)(*(_QWORD *)v24 + 8LL * v31); ; m = *(_QWORD *)(m + 88) )
                    {
                      v208 = m;
                      if ( !m )
                        break;
                      v179 = *(_DWORD *)(m + 96);
                      if ( v179 == v28 )
                      {
                        v248 = *(_QWORD *)v25;
                        v249 = *(_QWORD *)m;
                        if ( !(unsigned int)_o__wcsicmp(v249, v248) )
                        {
                          v250 = (char *)v25 + 56;
                          v251 = m + 56;
                          v33 = *(_DWORD *)(m + 64);
                          if ( v33 == *((_DWORD *)v25 + 16) && (v33 || *(_DWORD *)(m + 56) == *((_DWORD *)v25 + 14)) )
                          {
                            v252 = (char *)v25 + 8;
                            v253 = m + 8;
                            v34 = *(_DWORD *)(m + 48);
                            if ( v34 == *((_DWORD *)v25 + 12)
                              && (v34
                               || (v254 = *((_QWORD *)v25 + 1),
                                   v255 = *(_QWORD *)(m + 8),
                                   !(unsigned int)_o__wcsicmp(v255, v254))) )
                            {
                              v35 = *(_QWORD *)(m + 24) - *((_QWORD *)v25 + 3);
                              if ( !v35 )
                                v35 = *(_QWORD *)(m + 32) - *((_QWORD *)v25 + 4);
                              v25 = v121;
                              if ( !v35 )
                              {
                                v209 = m;
                                goto LABEL_52;
                              }
                            }
                            else
                            {
                              v25 = v121;
                            }
                          }
                        }
                      }
                    }
                  }
                  m = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                        v24,
                        v25,
                        v31,
                        v28);
                  v209 = m;
LABEL_52:
                  v10 = *(CAudioSession **)(m + 80);
                  v163 = v10;
                  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    v256 = *((_QWORD *)v25 + 9);
                    WPP_SF_SS(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      10,
                      (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                      0,
                      v256);
                  }
                  break;
                }
              }
            }
            v7 = v121;
          }
        }
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
  v155 = v10;
  if ( v10 )
  {
    v36 = 0;
    v37 = -2147024894;
  }
  else
  {
    v37 = -2147024894;
    v36 = -2147024894;
  }
  v180 = v36;
  if ( v9 )
    LeaveCriticalSection(v9);
  if ( v36 >= 0 )
  {
    if ( lpCriticalSection )
    {
      v257 = lpCriticalSection;
      LastError = GetLastError();
      LeaveCriticalSection(lpCriticalSection);
      SetLastError(LastError);
    }
    lpCriticalSection = 0LL;
    v258 = (char *)v10 + 616;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
    v259 = (char *)v10 + 616;
    if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 32LL))(v10) != 2 )
    {
      v39 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v124 + 40LL))(v124);
      v181 = v39;
      v260 = (char *)v10 + 736;
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
      v261 = (char *)v10 + 736;
      v262 = (char *)v10 + 776;
      v40 = (_QWORD *)*((_QWORD *)v10 + 97);
      v211 = v40;
      v263 = (char *)v10 + 784;
      v41 = (_QWORD *)*((_QWORD *)v10 + 98);
      v264 = v41;
      while ( v40 != v41 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v40 + 40LL))(*v40) == v39 )
        {
          if ( v10 != (CAudioSession *)-736LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
          goto LABEL_74;
        }
        v211 = ++v40;
      }
      if ( v10 != (CAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
      v108 = CAudioSession::RegisterOwnerProcess(v10, v124);
      v109 = v108;
      v182 = v108;
      if ( v108 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x116,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v108,
          (int)v115);
        if ( v10 != (CAudioSession *)-616LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v155);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        return v109;
      }
LABEL_74:
      *((_QWORD *)v10 + 49) = GetTickCount64();
      v265 = -10000LL * *((unsigned int *)v10 + 78);
      v164 = v265;
      LODWORD(v115) = 100;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)v10 + 75),
        &v164,
        0LL);
      v42 = v118;
      v266 = v118;
      v118 = v10;
      v119 = v10;
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( v42 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    if ( v10 != (CAudioSession *)-616LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 616));
    v43 = (struct _RTL_CRITICAL_SECTION *)((char *)v127 + 16);
    v267 = (char *)v127 + 16;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v127 + 16));
    v141 = v43;
    v44 = v43;
    v268 = v43;
    if ( lpCriticalSection )
    {
      v269 = lpCriticalSection;
      v110 = GetLastError();
      LeaveCriticalSection(lpCriticalSection);
      SetLastError(v110);
    }
    lpCriticalSection = v44;
    v141 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v118 )
  {
    v45 = v118;
    if ( (v122 & 0x20) != 0 )
      *((_DWORD *)v118 + 120) = 1;
    goto LABEL_86;
  }
  if ( lpCriticalSection )
  {
    v270 = lpCriticalSection;
    v49 = GetLastError();
    LeaveCriticalSection(lpCriticalSection);
    SetLastError(v49);
  }
  lpCriticalSection = 0LL;
  v117 = 0LL;
  v50 = v122;
  if ( (v122 & 8) == 0 )
  {
    v111 = (CPerEndpointVolumeAudioSession *)operator new(0x410uLL, (const struct std::nothrow_t *)&std::nothrow);
    v274 = v111;
    if ( v111 )
    {
      v52 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v111);
      v142 = v52;
      goto LABEL_96;
    }
    goto LABEL_214;
  }
  v51 = (CAudioSession *)operator new(0x420uLL, (const struct std::nothrow_t *)&std::nothrow);
  v52 = v51;
  v271 = v51;
  if ( !v51 )
  {
LABEL_214:
    v52 = 0LL;
    goto LABEL_95;
  }
  CAudioSession::CAudioSession(v51);
  *(_QWORD *)v52 = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
  *((_QWORD *)v52 + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
  *((_QWORD *)v52 + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
  *((_QWORD *)v52 + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
  *((_QWORD *)v52 + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
  *((_BYTE *)v52 + 984) = 1;
  v272 = (char *)v52 + 992;
  *((_QWORD *)v52 + 124) = 0LL;
  v273 = (char *)v52 + 1000;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)v52 + 25, 0, 0);
  *((_QWORD *)v52 + 130) = 0LL;
LABEL_95:
  v142 = v52;
LABEL_96:
  v53 = v117;
  v275 = v117;
  v117 = v52;
  if ( v275 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v53 + 16LL))(v53);
    v52 = v117;
  }
  if ( !v52 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)0x8007000ELL,
      (int)v115);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  v54 = GUID_00000000_0000_0000_0000_000000000000;
  v301 = GUID_00000000_0000_0000_0000_000000000000;
  if ( (v50 & 4) != 0 )
  {
    v56 = v121;
  }
  else
  {
    v55 = v124;
    v56 = v121;
    if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v124 + 440LL))(v124) )
    {
      v54 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, char *, __int64))(*(_QWORD *)v55 + 456LL))(
                       v55,
                       v306,
                       (__int64)v121 + 24);
      v301 = v54;
    }
    v52 = v117;
  }
  v302 = v54;
  LODWORD(v115) = a5;
  v57 = (*(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, _QWORD))(*(_QWORD *)v52 + 240LL))(
          v52,
          v124,
          v56,
          v50);
  v58 = v57;
  v183 = v57;
  if ( v57 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x163,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v57,
      a5);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v58;
  }
  v59 = v127;
  v60 = (struct _RTL_CRITICAL_SECTION *)((char *)v127 + 16);
  v145 = (LPCRITICAL_SECTION)((char *)v127 + 16);
  v276 = (char *)v127 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v127 + 16));
  v152 = v60;
  v119 = 0LL;
  v118 = 0LL;
  v165 = 0LL;
  v277 = v60;
  EnterCriticalSection(v60);
  v61 = v60;
  v62 = (char *)v59 + 56;
  v63 = v62;
  v214 = v62;
  v278 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
  v129 = v278 + 24;
  v184 = CAudioSessionInstanceId::ToString(v56, &v129);
  if ( v184 < 0 )
  {
    v213 = (_QWORD *)(v129 - 24);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v129 - 24 + 16), 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v213 + 8LL))(*v213);
    v66 = 0;
    v150 = 0;
    v145 = v152;
    v118 = v165;
    v63 = v214;
  }
  else
  {
    v64 = (unsigned __int16 *)v129;
    v65 = *(int *)(v129 - 16);
    v185 = v65;
    v279 = v129 - 24;
    v186 = 1 - *(_DWORD *)(v129 - 24 + 16);
    v187 = *(_DWORD *)(v129 - 24 + 12) - v65;
    if ( (v186 | v187) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v129, (unsigned int)v65);
      v64 = (unsigned __int16 *)v129;
    }
    _o__wcsupr_s(v64, (int)v65 + 1);
    if ( (int)v65 < 0 || (int)v65 > *((_DWORD *)v64 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v64 - 4) = v65;
    v64[v65] = 0;
    v66 = 0;
    v149 = 0;
    v67 = v64;
    for ( n = v64; ; n = v67 )
    {
      v68 = *v67;
      if ( !(_WORD)v68 )
        break;
      v66 = v68 + 33 * v66;
      v149 = v66;
      ++v67;
    }
    v280 = v64 - 12;
    ATL::CStringData::Release((ATL::CStringData *)(v64 - 12));
    v150 = v66;
  }
  v188 = v66;
  if ( *((_DWORD *)v63 + 4) == 17 )
    v69 = v66 % 0x11;
  else
    v69 = v66 % *((_DWORD *)v63 + 4);
  v189 = v69;
  if ( *(_QWORD *)v63 )
  {
    for ( ii = *(_QWORD *)(*(_QWORD *)v63 + 8 * v69); ; ii = *(_QWORD *)(ii + 88) )
    {
      v216 = ii;
      if ( !ii )
        break;
      v190 = *(_DWORD *)(ii + 96);
      if ( v190 == v66 && CAudioSessionInstanceId::operator==(ii, (__int64)v121) )
      {
        v281 = v62;
        v115 = &v282;
        Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
                 v62,
                 v121,
                 v153,
                 &v151);
        v215 = Node;
        if ( !Node )
        {
          Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                   v62,
                   v121,
                   v153[0],
                   v151);
          v215 = Node;
        }
        v71 = *(CAudioSession **)(Node + 80);
        v118 = v71;
        v165 = v71;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v283 = *((_QWORD *)v121 + 9);
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            10,
            (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
            0,
            v283);
        }
        goto LABEL_119;
      }
    }
  }
  v71 = v118;
LABEL_119:
  if ( v71 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v71 + 8LL))(v71);
  v119 = v71;
  if ( v71 )
    v37 = 0;
  v191 = v37;
  if ( v61 )
    LeaveCriticalSection(v61);
  if ( v37 >= 0 )
  {
    CAudioSession::ForceExpire(v117);
    v73 = v145;
    v45 = v118;
  }
  else
  {
    v125 = 0;
    v217[0] = v117;
    v72 = v127;
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      (char *)v127 + 56,
      v121,
      v217);
    v73 = v145;
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v117 + 8LL))(v117);
    v74 = v218;
    v130 = v218;
    v131 = v121;
    v132 = &v117;
    v133 = 1;
    v75 = (*(__int64 (__fastcall **)(CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v117 + 224LL))(v117, v72);
    v76 = v75;
    v192 = v75;
    if ( v75 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v75,
        (int)v115);
      if ( v133 )
      {
        v133 = 0;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
          (char *)v130 + 56,
          v131);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v132 + 16LL))(*v132);
      }
      if ( v73 )
        LeaveCriticalSection(v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v76;
    }
    v156 = &v117;
    v157 = v74;
    v158 = 1;
    v77 = (*(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v117 + 224LL))(
            v117,
            g_PolicyEventsHandler);
    v78 = v77;
    v193 = v77;
    if ( v77 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v77,
        (int)v115);
      if ( v158 )
      {
        v158 = 0;
        (*(void (__fastcall **)(CAudioSession *, CAudioSessionManager *))(*(_QWORD *)*v156 + 232LL))(*v156, v157);
      }
      if ( v133 )
      {
        v133 = 0;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
          (char *)v130 + 56,
          v131);
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v132 + 16LL))(*v132);
      }
      if ( v73 )
        LeaveCriticalSection(v73);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v117);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      return v78;
    }
    v234 = &v117;
    v235 = 1;
    v79 = v117;
    v284 = v117;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, 0LL);
    }
    v194 = *(_DWORD *)(*((_QWORD *)v79 + 91) - 16LL);
    v80 = 2 * v194 + 2;
    v195 = v80;
    v196 = *(_DWORD *)(*((_QWORD *)v72 + 37) - 16LL);
    v81 = 2 * v196 + 2;
    v197 = v81;
    v82 = v81 + 2 * v194 + 74;
    v198 = v82;
    v83 = (unsigned int *)operator new[](v82, (const struct std::nothrow_t *)&std::nothrow);
    v84 = v83;
    v285 = v83;
    v286 = v83;
    if ( v83 )
    {
      *v83 = v82;
      v83[1] = 64;
      v83[6] = v80;
      v83[12] = v81;
      v83[13] = v80 + 72;
      v85 = (_WORD *)*((_QWORD *)v79 + 91);
      v287 = v85;
      v86 = v83 + 18;
      v288 = v83 + 18;
      v87 = (unsigned __int64)v80 >> 1;
      v289 = v87;
      v88 = 0;
      v154 = 0;
      if ( !v87 )
      {
        v88 = -2147024809;
        v154 = -2147024809;
      }
      v134 = v88;
      v89 = 2147483646LL;
      if ( v88 < 0 )
      {
        if ( v87 )
          *(_WORD *)v86 = 0;
      }
      else
      {
        v90 = 2147483646LL;
        v221 = 2147483646LL;
        v219 = v85;
        v220 = (unsigned __int64)v80 >> 1;
        v166 = v84 + 18;
        v91 = 0;
        v159 = 0;
        v92 = 0LL;
        v167 = 0LL;
        while ( v87 )
        {
          if ( !v90 || !*v85 )
            goto LABEL_139;
          *(_WORD *)v86 = *v85;
          v86 = (unsigned int *)((char *)v86 + 2);
          v166 = v86;
          v219 = ++v85;
          v220 = --v87;
          v221 = --v90;
          v167 = ++v92;
        }
        v86 = (unsigned int *)((char *)v86 - 2);
        v166 = v86;
        v167 = v92 - 1;
        v91 = -2147024774;
        v159 = -2147024774;
LABEL_139:
        *(_WORD *)v86 = 0;
        v134 = v91;
      }
      v93 = v127;
      v94 = (_WORD *)*((_QWORD *)v127 + 37);
      v290 = v94;
      v95 = (_WORD *)((char *)v84 + v84[13]);
      v291 = v95;
      v96 = (unsigned __int64)v81 >> 1;
      v292 = v96;
      v97 = 0;
      v135 = 0;
      if ( !v96 )
      {
        v97 = -2147024809;
        v135 = -2147024809;
      }
      v137 = v97;
      if ( v97 < 0 )
      {
        if ( v96 )
          *v95 = 0;
      }
      else
      {
        v224 = 2147483646LL;
        v222 = v94;
        v223 = (unsigned __int64)v81 >> 1;
        v160 = v95;
        v98 = 0;
        v136 = 0;
        v99 = 0LL;
        v161 = 0LL;
        while ( v96 )
        {
          if ( !v89 || !*v94 )
            goto LABEL_151;
          *v95++ = *v94;
          v160 = v95;
          v222 = ++v94;
          v223 = --v96;
          v224 = --v89;
          v161 = ++v99;
        }
        v160 = --v95;
        v161 = v99 - 1;
        v98 = -2147024774;
        v136 = -2147024774;
LABEL_151:
        *v95 = 0;
        v137 = v98;
        v93 = v127;
      }
      v231 = &CAudioSessionManagerNotification::`vftable';
      v232 = v84;
      v233 = v79;
      CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v93 + 192));
    }
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v84);
    v101 = v117;
    v102 = v118;
    v293 = v118;
    v45 = v117;
    v119 = v117;
    if ( v117 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v117 + 8LL))(v117);
    if ( v102 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v102 + 16LL))(v102);
    v116 = 0;
    v235 = 0;
    v158 = 0;
    v133 = 0;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v236 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_18019E7E8;
      qword_18019E7E8 = &AudioSrvTelemetryProvider::`vftable';
      qword_18019E800 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v237 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v236);
    }
    v103 = *((_QWORD *)Context + 1);
    v294 = v103;
    if ( *(_DWORD *)v103 > 4u )
    {
      v199 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v124 + 40LL))(v124);
      v139 = v199;
      v140 = v122;
      v104 = (void *)*((_QWORD *)v101 + 91);
      v295 = v104;
      v319 = &v139;
      v320 = 4;
      v321 = 0;
      v316 = (int *)&v140;
      v317 = 4;
      v318 = 0;
      if ( v104 )
      {
        v225 = v104;
        v105 = -1LL;
        do
          ++v105;
        while ( *((_WORD *)v104 + v105) );
        v296 = v105;
        v106 = 2 * v105 + 2;
      }
      else
      {
        v104 = &unk_18015C724;
        v225 = &unk_18015C724;
        v106 = 2;
      }
      v126 = v106;
      v313 = v104;
      v314 = v106;
      v315 = 0;
      v227[0] = 184549376;
      v227[1] = 4;
      v228 = 0LL;
      v307 = *(_QWORD *)(v103 + 8);
      v308 = **(unsigned __int16 **)(v103 + 8);
      v309 = 2;
      v310 = &unk_180166B53;
      v311 = 69;
      v312 = 1;
      v200 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      v201 = v200;
      LODWORD(v115) = 5;
      EtwEventWriteTransfer(*(_QWORD *)(v103 + 32), v227, 0LL);
    }
    if ( v158 )
    {
      v158 = 0;
      (*(void (__fastcall **)(CAudioSession *, CAudioSessionManager *))(*(_QWORD *)*v156 + 232LL))(*v156, v157);
    }
    if ( v133 )
    {
      v133 = 0;
      lambda_da2549763b2484cb2cd636c002fd2274_::operator()(&v130);
    }
  }
  if ( v73 )
    LeaveCriticalSection(v73);
  if ( v117 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v117 + 16LL))(v117);
LABEL_86:
  v46 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v124 + 40LL))(v124);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v45 + 736));
  v297 = (char *)v45 + 736;
  v47 = (_QWORD *)*((_QWORD *)v45 + 97);
  v226 = v47;
  v48 = (_QWORD *)*((_QWORD *)v45 + 98);
  while ( v47 != v48 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v47 + 40LL))(*v47) == v46 )
    {
      if ( v45 != (CAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v45 + 736));
      goto LABEL_186;
    }
    v226 = ++v47;
  }
  if ( v45 != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v45 + 736));
  v113 = CAudioSession::RegisterOwnerProcess(v45, v124);
  v114 = v113;
  if ( v113 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v113,
      (int)v115);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v119);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return v114;
  }
LABEL_186:
  if ( v116 )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v45 + 256LL))(v45);
  v119 = 0LL;
  *v162 = v45;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
