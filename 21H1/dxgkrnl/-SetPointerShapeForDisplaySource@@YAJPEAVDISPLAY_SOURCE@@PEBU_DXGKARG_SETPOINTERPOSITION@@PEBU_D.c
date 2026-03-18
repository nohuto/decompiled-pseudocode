/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C0114C30
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C01137F0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C0279A08 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000A490 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000A550 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000A5F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C00387B4 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD5D0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C0115F20 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0116074 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C011617C (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C0117204 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C013D524 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0149520 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12II@Z @ 0x1C01497FC (-_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C020ECC4 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C020F2E4 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0278A10 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C0279100 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        struct SESSION_VIEW *a4,
        void *const a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  _DXGKARG_SETPOINTERPOSITION v9; // xmm0
  struct DISPLAY_SOURCE *v10; // r12
  __int64 v11; // rax
  __int64 v13; // rsi
  unsigned int v14; // r14d
  struct DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rbx
  __int64 Width; // rdx
  __int64 XHot; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rcx
  bool v29; // bl
  bool v30; // r15
  __int64 v31; // r13
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _ERESOURCE *v41; // rbx
  bool v42; // r15
  int v43; // r12d
  int v44; // r13d
  bool v45; // sf
  __int64 v46; // rax
  __int64 v47; // r12
  __int64 v48; // rbx
  __int64 v49; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r15d
  __int64 v51; // r13
  __int64 v52; // r15
  __int64 v53; // r15
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // r13
  __int64 v61; // rdx
  __int64 v62; // r8
  void (__fastcall ***v63)(_QWORD, __int64); // rcx
  int v64; // ebx
  __int64 v65; // rcx
  char v66; // al
  UINT v67; // r8d
  UINT v68; // ecx
  __int64 v69; // rcx
  __int64 v70; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v71; // r13
  void *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  void *v76; // rcx
  __int64 v77; // rbx
  struct SESSION_VIEW *v78; // rbx
  __int64 v79; // r12
  const struct _DXGKARG_SETPOINTERSHAPE *v80; // r12
  void *v81; // rcx
  int v82; // r9d
  int v83; // r12d
  unsigned int v84; // edx
  int v85; // ecx
  int v86; // r8d
  int v87; // r10d
  int v88; // r11d
  __int64 v89; // rcx
  int v90; // ebx
  int v91; // eax
  __int64 v92; // rdx
  int v93; // r12d
  int v94; // r9d
  INT v95; // edx
  INT v96; // r8d
  signed int v97; // ebx
  int v98; // ecx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r15
  __int64 v102; // rdx
  __int64 v103; // rcx
  struct DXGTHREAD *v104; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  struct DISPLAY_SOURCE *v116; // rcx
  __int64 v117; // r15
  __int64 v118; // rdx
  __int64 v119; // rcx
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *v121; // r12
  int CurrentProcessSessionId; // r13d
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 ThreadWin32Thread; // rax
  int v131; // r13d
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  _QWORD *v136; // rax
  __int64 v137; // rdx
  __int64 Y; // rcx
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  struct SESSION_VIEW *v142; // rcx
  struct DISPLAY_SOURCE *v143; // rcx
  DISPLAY_SOURCE *v144; // r10
  __int64 v145; // rbx
  __int64 VidPnSourceId; // r12
  char v147; // r15
  INT v148; // r8d
  INT X; // r9d
  INT v150; // r13d
  __int64 v151; // rcx
  __int64 v152; // rbx
  int v153; // eax
  int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r12
  int PairingAdapters; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rbx
  struct DXGADAPTER *v162; // rsi
  __int64 v163; // rax
  __int64 v164; // r15
  struct DXGADAPTER *v165; // rbx
  __int64 v166; // rdx
  signed __int64 v167; // rcx
  struct DXGADAPTER *v168; // rcx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // rdx
  __int64 v172; // rcx
  struct DXGADAPTER *v173; // rcx
  struct DXGADAPTER *v174; // rcx
  struct DXGADAPTER *v175; // rcx
  struct DXGADAPTER *v176; // rcx
  _QWORD *v178; // rax
  int v179; // eax
  unsigned __int64 v180; // rcx
  SIZE_T v181; // rax
  SIZE_T v182; // rax
  PVOID v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  _QWORD *v188; // rax
  int v189; // eax
  __int64 v190; // rax
  int v191; // r9d
  __int64 v192; // rax
  __int64 v193; // rax
  UINT Height; // r8d
  UINT YHot; // eax
  _QWORD *v196; // rax
  int v197; // r13d
  __int64 v198; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  _QWORD *v202; // rax
  __int64 v203; // rax
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rdx
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rcx
  _QWORD *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rax
  INT v229; // eax
  int v230; // edx
  int v231; // r8d
  __int64 v232; // rax
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v234; // rbx
  _QWORD *v235; // rax
  unsigned __int8 v236; // cl
  _QWORD *v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v243; // rax
  unsigned __int8 v244; // cl
  _QWORD *v245; // rax
  __int64 v246; // rax
  __int64 v247; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v248; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v249; // rbx
  void *pPixels; // rcx
  _QWORD *v251; // rax
  _QWORD *v252; // rax
  __int64 v253; // rax
  _QWORD *v254; // rax
  _QWORD *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // rax
  __int64 v260; // rax
  _QWORD *v261; // rax
  __int64 v262; // rdx
  __int64 v263; // rax
  _QWORD *v264; // rax
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v266; // [rsp+30h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v267; // [rsp+38h] [rbp-D0h]
  int *v268; // [rsp+40h] [rbp-C8h]
  char v269; // [rsp+48h] [rbp-C0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v270; // [rsp+4Ch] [rbp-BCh]
  unsigned int v271; // [rsp+4Ch] [rbp-BCh]
  unsigned int v272; // [rsp+50h] [rbp-B8h]
  int v273; // [rsp+50h] [rbp-B8h]
  int v274; // [rsp+50h] [rbp-B8h]
  char v275; // [rsp+54h] [rbp-B4h]
  int v277; // [rsp+60h] [rbp-A8h]
  INT v278; // [rsp+60h] [rbp-A8h]
  unsigned __int8 CurrentIrql; // [rsp+60h] [rbp-A8h]
  unsigned __int8 v280; // [rsp+60h] [rbp-A8h]
  unsigned int v281; // [rsp+60h] [rbp-A8h]
  int v283; // [rsp+70h] [rbp-98h]
  INT v284; // [rsp+70h] [rbp-98h]
  __int64 v285; // [rsp+78h] [rbp-90h]
  INT v286; // [rsp+78h] [rbp-90h]
  INT v287; // [rsp+78h] [rbp-90h]
  int v288; // [rsp+80h] [rbp-88h] BYREF
  int v289; // [rsp+84h] [rbp-84h] BYREF
  struct DXGADAPTER *v290; // [rsp+88h] [rbp-80h] BYREF
  void *v291; // [rsp+90h] [rbp-78h]
  const struct _DXGKARG_SETPOINTERPOSITION *v292; // [rsp+98h] [rbp-70h]
  __int64 v293; // [rsp+A0h] [rbp-68h] BYREF
  char v294; // [rsp+A8h] [rbp-60h]
  int v295; // [rsp+B0h] [rbp-58h]
  int v296; // [rsp+B4h] [rbp-54h]
  int v297; // [rsp+B8h] [rbp-50h]
  unsigned int v298; // [rsp+BCh] [rbp-4Ch]
  struct DXGADAPTER *v299; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v300; // [rsp+C8h] [rbp-40h]
  __int64 v301; // [rsp+D0h] [rbp-38h] BYREF
  struct SESSION_VIEW *v302; // [rsp+D8h] [rbp-30h]
  int v303; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v304; // [rsp+E8h] [rbp-20h]
  char v305; // [rsp+F0h] [rbp-18h]
  int v306; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v307; // [rsp+100h] [rbp-8h]
  char v308; // [rsp+108h] [rbp+0h]
  struct tagRECT v309; // [rsp+110h] [rbp+8h] BYREF
  __int128 v310; // [rsp+120h] [rbp+18h]
  unsigned __int64 v311; // [rsp+130h] [rbp+28h] BYREF
  __int128 v312; // [rsp+138h] [rbp+30h] BYREF
  __int64 v313; // [rsp+148h] [rbp+40h]
  _QWORD v314[2]; // [rsp+150h] [rbp+48h] BYREF
  char v315; // [rsp+160h] [rbp+58h]
  unsigned __int64 v316; // [rsp+168h] [rbp+60h] BYREF
  _DXGKARG_SETPOINTERPOSITION v317; // [rsp+170h] [rbp+68h] BYREF
  char v318; // [rsp+188h] [rbp+80h] BYREF
  char v319; // [rsp+189h] [rbp+81h]
  char v320[8]; // [rsp+190h] [rbp+88h] BYREF
  __int64 v321; // [rsp+198h] [rbp+90h]
  struct DXGADAPTER *v322; // [rsp+1A0h] [rbp+98h]
  char v323; // [rsp+1A8h] [rbp+A0h]
  __int64 v324; // [rsp+1B0h] [rbp+A8h]
  char v325[8]; // [rsp+1D0h] [rbp+C8h] BYREF
  __int64 v326; // [rsp+1D8h] [rbp+D0h]
  struct DXGADAPTER *v327; // [rsp+1E0h] [rbp+D8h]
  char v328; // [rsp+1E8h] [rbp+E0h]
  char *v329; // [rsp+1F0h] [rbp+E8h]
  char v330; // [rsp+218h] [rbp+110h] BYREF
  char v331; // [rsp+219h] [rbp+111h]
  char v332[8]; // [rsp+220h] [rbp+118h] BYREF
  __int64 v333; // [rsp+228h] [rbp+120h]
  struct DXGADAPTER *v334; // [rsp+230h] [rbp+128h]
  char v335; // [rsp+238h] [rbp+130h]
  __int64 v336; // [rsp+240h] [rbp+138h]
  char v337[8]; // [rsp+260h] [rbp+158h] BYREF
  __int64 v338; // [rsp+268h] [rbp+160h]
  struct DXGADAPTER *v339; // [rsp+270h] [rbp+168h]
  char v340; // [rsp+278h] [rbp+170h]
  char *v341; // [rsp+280h] [rbp+178h]
  char v342[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2B0h] [rbp+1A8h] BYREF
  char v344[8]; // [rsp+2E0h] [rbp+1D8h] BYREF
  struct _KAPC_STATE v345; // [rsp+2E8h] [rbp+1E0h] BYREF

  v9 = *a2;
  v10 = this;
  v313 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v317 = v9;
  v302 = a4;
  v13 = *(_QWORD *)(v11 + 16);
  v292 = a2;
  v291 = a5;
  v312 = 0LL;
  if ( !v13 )
  {
    v184 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v184 + 24) = 1090LL;
    WdLogEvent5_WdAssertion(v184);
  }
  if ( !*(_QWORD *)(v13 + 2672) )
  {
    v185 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v185 + 24) = 1091LL;
    WdLogEvent5_WdAssertion(v185);
  }
  v14 = 0;
  v331 = 0;
  v336 = 0LL;
  v334 = (struct DXGADAPTER *)v13;
  v335 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v339 = (struct DXGADAPTER *)v13;
  v333 = -1LL;
  v340 = 0;
  v341 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v338 = -1LL;
  v275 = 0;
  v15 = (struct DXGADAPTER *)v13;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v339 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, 72);
      KeWaitForSingleObject((char *)v339 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v339, 0LL);
    v15 = v339;
  }
  v341 = 0LL;
  v340 = 1;
  if ( *((_DWORD *)v15 + 50) != 1 )
    goto LABEL_260;
  if ( v334 != v339 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v332, 0LL);
    v15 = (struct DXGADAPTER *)*((unsigned int *)v334 + 50);
    if ( (_DWORD)v15 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v332);
LABEL_260:
      COREACCESS::Release((COREACCESS *)v337);
      v14 = -1073741130;
      goto LABEL_221;
    }
  }
  v331 = 1;
  v18 = *(_QWORD *)(v13 + 2672);
  v293 = v18 + 400;
  v294 = 0;
  if ( v18 == -400 )
  {
    v186 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v186 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v186);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v293 + 16) == CurrentThread )
  {
    v187 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v187 + 24) = 767LL;
    WdLogEvent5_WdAssertion(v187);
  }
  if ( v294 )
  {
    v188 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v188[5] = &v293;
    v188[3] = 275LL;
    v188[4] = 4LL;
    v188[6] = 0LL;
    v188[7] = 0LL;
    WdLogEvent5_WdCriticalError(v188);
  }
  v20 = v293;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 16) == KeGetCurrentThread() )
  {
    v189 = *(_DWORD *)(v20 + 24);
    if ( v189 <= 0 )
    {
      v190 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v190 + 24) = 659LL;
      WdLogEvent5_WdAssertion(v190);
      v189 = *(_DWORD *)(v20 + 24);
    }
    v24 = v189 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v191 = *(_DWORD *)(v20 + 28);
        if ( v191 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(XHot, &EventBlockThread, v23, v191);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 8));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    if ( *(_QWORD *)(v20 + 16) )
    {
      v192 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v192 + 24) = 683LL;
      WdLogEvent5_WdAssertion(v192);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v193 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v193 + 24) = 684LL;
      WdLogEvent5_WdAssertion(v193);
    }
    *(_QWORD *)(v20 + 16) = KeGetCurrentThread();
    v24 = 1;
  }
  *(_DWORD *)(v20 + 24) = v24;
  v294 = 1;
  if ( a9 )
  {
    if ( a3->Flags.Value != 2 )
      goto LABEL_283;
    Width = a3->Width;
    XHot = *(_QWORD *)(*((_QWORD *)v10 + 1) + 16LL);
    if ( (unsigned int)Width > *(_DWORD *)(XHot + 1992) )
      goto LABEL_283;
    Height = a3->Height;
    if ( Height > *(_DWORD *)(XHot + 1996) )
      goto LABEL_283;
    if ( a3->Pitch != 4 * (_DWORD)Width )
      goto LABEL_283;
    XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2672) + 80LL);
    if ( a3->VidPnSourceId >= (unsigned int)XHot )
      goto LABEL_283;
    if ( !a3->pPixels )
      goto LABEL_283;
    XHot = a3->XHot;
    if ( (unsigned int)XHot >= (unsigned int)Width )
      goto LABEL_283;
    YHot = a3->YHot;
    if ( YHot >= Height )
      goto LABEL_283;
    *((_DWORD *)v10 + 937) = XHot;
    *((_DWORD *)v10 + 938) = YHot;
    if ( (_DWORD)XHot == -1 && YHot == -1 )
      goto LABEL_283;
    Width = (unsigned int)(XHot + a2->X);
    if ( (int)Width < *((_DWORD *)v302 + 6)
      || (int)Width >= *((_DWORD *)v302 + 8)
      || (Width = a2->Y + YHot, (int)Width < *((_DWORD *)v302 + 7))
      || (int)Width >= *((_DWORD *)v302 + 9) )
    {
LABEL_283:
      v196 = (_QWORD *)WdLogNewEntry5_WdError(XHot, Width);
      v196[3] = *(int *)(v13 + 320);
      v196[4] = *(unsigned int *)(v13 + 316);
      v196[5] = *((unsigned int *)v10 + 4);
      WdLogEvent5_WdError(v196);
LABEL_284:
      v197 = -1073741811;
LABEL_291:
      LODWORD(v79) = v197;
      goto LABEL_241;
    }
  }
  if ( a8 )
  {
    if ( *(_DWORD *)(v13 + 1848) < 0x7000u )
    {
      v198 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v198 + 24) = 1137LL;
      WdLogEvent5_WdAssertion(v198);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(v10, 0);
    a3 = PristineCursor;
    if ( !PristineCursor->pPixels )
      goto LABEL_284;
    v298 = PristineCursor->Width;
    v297 = PristineCursor->Height * ((PristineCursor->Flags.Value & 1) + 1);
  }
  else
  {
    v297 = a7;
    v25 = a6;
    v298 = a6;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x100) == 0 )
  {
    v25 = **(unsigned int **)(v13 + 2576);
    if ( (v25 & 8) != 0 )
    {
LABEL_290:
      v197 = -1073741823;
      goto LABEL_291;
    }
  }
  v26 = *((unsigned int *)v10 + 4);
  v317.VidPnSourceId = v26;
  v27 = *(_QWORD *)(v13 + 2672);
  if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 80) )
  {
    v200 = WdLogNewEntry5_WdAssertion(v25, Width);
    *(_QWORD *)(v200 + 24) = 6048LL;
    WdLogEvent5_WdAssertion(v200);
  }
  v28 = 3968 * v26;
  if ( !*(_BYTE *)(3968 * v26 + *(_QWORD *)(v27 + 112) + 720) )
  {
    v178 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    LODWORD(v79) = -1073741823;
    v178[3] = -1073741823LL;
    v178[4] = *((unsigned int *)this + 4);
    v178[5] = a3->Flags.Value;
    v178[6] = a5;
    WdLogEvent5_WdError(v178);
    goto LABEL_241;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x20) != 0
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2672)) )
  {
    goto LABEL_290;
  }
  v29 = 1;
  v269 = 1;
  v30 = 1;
  v272 = *((_DWORD *)v10 + 267);
  if ( v272 == -1 )
    goto LABEL_293;
  v31 = *(_QWORD *)(v13 + 2672);
  if ( !v31 )
  {
    v201 = WdLogNewEntry5_WdError(v28, Width);
    *(_QWORD *)(v201 + 24) = 9255LL;
    WdLogEvent5_WdError(v201);
LABEL_293:
    v44 = -1073741811;
    goto LABEL_294;
  }
  v32 = *(_QWORD *)(v31 + 96);
  if ( v32 )
  {
    if ( v32 == -168 )
    {
      v207 = WdLogNewEntry5_WdAssertion(v28, Width);
      WdLogEvent5_WdAssertion(v207);
    }
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
    v36 = v32 + 128;
    v37 = *(_QWORD *)(v32 + 128);
    if ( v37 == v32 + 128 )
      goto LABEL_300;
    v38 = v37 - 16;
    if ( !v37 )
      v38 = 0LL;
    if ( !v38 )
      goto LABEL_300;
    while ( *(_DWORD *)(v38 + 44) != v272 )
    {
      v33 = *(_QWORD *)(v38 + 16);
      if ( v33 != v36 )
      {
        v38 = v33 - 16;
        if ( !v33 )
          v38 = 0LL;
        if ( v38 )
          continue;
      }
      goto LABEL_300;
    }
    if ( *(_DWORD *)(v38 + 432) != 1 )
      v38 = *(_QWORD *)(v38 + 440);
    if ( v38 )
    {
      if ( v32 == -168 )
      {
        v213 = WdLogNewEntry5_WdAssertion(v36, v33);
        WdLogEvent5_WdAssertion(v213);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      if ( *(_DWORD *)(v38 + 432) != 1 )
      {
        v214 = WdLogNewEntry5_WdAssertion(v40, v39);
        WdLogEvent5_WdAssertion(v214);
      }
      v41 = (struct _ERESOURCE *)(v38 + 296);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(v38 + 296), 1u);
      v42 = *(_DWORD *)(v38 + 592) || (*(_DWORD *)(v38 + 40) & 0x80u) != 0;
      ExReleaseResourceLite(v41);
      KeLeaveCriticalRegion();
      if ( v42 )
      {
        v30 = 1;
        v29 = 1;
        goto LABEL_54;
      }
    }
    else
    {
LABEL_300:
      v208 = WdLogNewEntry5_WdTrace(v36, v33, v34, v35);
      *(_QWORD *)(v208 + 24) = v272;
      *(_QWORD *)(v208 + 32) = v32;
      if ( v32 == -168 )
      {
        v211 = WdLogNewEntry5_WdAssertion(v210, v209);
        WdLogEvent5_WdAssertion(v211);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      v212 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v212 + 24) = v272;
      *(_QWORD *)(v212 + 32) = v13;
      WdLogEvent5_WdDmmEvent(v212);
    }
    v30 = *(_BYTE *)(v31 + 250) == 0;
    v29 = *(_BYTE *)(v31 + 249) == 0;
LABEL_54:
    v269 = v29;
    v43 = 0;
    goto LABEL_55;
  }
  v203 = WdLogNewEntry5_WdError(v28, Width);
  *(_QWORD *)(v203 + 24) = v13;
  WdLogEvent5_WdError(v203);
  v43 = -1073741811;
  v206 = WdLogNewEntry5_WdAssertion(v205, v204);
  *(_QWORD *)(v206 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v206);
LABEL_55:
  v44 = v43;
  v45 = v43 < 0;
  v10 = this;
  if ( v45 )
  {
LABEL_294:
    v202 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    v202[3] = *((unsigned int *)v10 + 4);
    v202[4] = *(int *)(v13 + 320);
    v202[5] = *(unsigned int *)(v13 + 316);
    v202[6] = v44;
    WdLogEvent5_WdError(v202);
  }
  if ( v29 && v30 && !*((_BYTE *)v10 + 668) )
  {
    LODWORD(v79) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2672), a3);
    if ( (int)v79 < 0 )
      goto LABEL_241;
    goto LABEL_129;
  }
  v46 = *((unsigned int *)v10 + 4);
  v47 = *((_QWORD *)v10 + 1);
  v277 = v46;
  if ( v29 )
  {
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v47, (unsigned int)v46, 1LL);
    goto LABEL_75;
  }
  if ( !*(_BYTE *)(v47 + 249) )
  {
    CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    goto LABEL_75;
  }
  v48 = 3968 * v46;
  v285 = v46;
  v49 = *(unsigned int *)(3968 * v46 + *(_QWORD *)(v47 + 112) + 1040);
  if ( (_DWORD)v49 == 1 )
    goto LABEL_60;
  v49 = (unsigned int)(v49 - 2);
  if ( (_DWORD)v49 )
  {
    v49 = (unsigned int)(v49 - 1);
    if ( (_DWORD)v49 )
    {
      if ( (_DWORD)v49 != 1 )
      {
        v215 = WdLogNewEntry5_WdError(v49, Width);
        *(_QWORD *)(v215 + 24) = *(int *)(v48 + *(_QWORD *)(v47 + 112) + 1040);
        *(_QWORD *)(v215 + 32) = *(_QWORD *)(v47 + 16);
        WdLogEvent5_WdError(v215);
LABEL_60:
        CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
        goto LABEL_61;
      }
      CurrentOrientation = D3DKMDT_VPPR_ROTATE270;
    }
    else
    {
      CurrentOrientation = D3DKMDT_VPPR_ROTATE180;
    }
  }
  else
  {
    CurrentOrientation = D3DKMDT_VPPR_ROTATE90;
  }
LABEL_61:
  v51 = *(_QWORD *)(v47 + 16);
  v270 = CurrentOrientation;
  if ( !v51 )
  {
    v216 = WdLogNewEntry5_WdError(v49, Width);
    *(_QWORD *)(v216 + 24) = 0LL;
    WdLogEvent5_WdError(v216);
    goto LABEL_75;
  }
  v52 = *(_QWORD *)(v51 + 2672);
  if ( !v52 || (v53 = *(_QWORD *)(v52 + 88)) == 0 )
  {
    v217 = WdLogNewEntry5_WdError(v49, Width);
    *(_QWORD *)(v217 + 24) = v51;
    WdLogEvent5_WdError(v217);
    CurrentOrientation = v270;
    goto LABEL_75;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v53 + 40));
  v58 = *(_QWORD *)(v53 + 88);
  if ( !v58 )
  {
    v301 = 0LL;
    goto LABEL_315;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v58 + 32));
  v59 = *(_QWORD *)(v53 + 88);
  v301 = v59;
  if ( !v59 )
  {
LABEL_315:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v55, v54, v56, v57) + 24) = v51;
LABEL_327:
    auto_rc<DMMVIDPN const>::reset(&v301, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v226);
    CurrentOrientation = v270;
    goto LABEL_75;
  }
  v60 = v59 + 96;
  v295 = -1;
  v61 = *(_QWORD *)(v59 + 120);
  v62 = v59 + 120;
  if ( v61 == v59 + 120 )
    goto LABEL_325;
  v55 = (_QWORD *)(v61 - 8);
  if ( v61 == 8 )
  {
LABEL_319:
    if ( v61 != v62 && v61 != 8 )
    {
      v220 = WdLogNewEntry5_WdTrace(v55, v61, v62, 0LL);
      v224 = v285;
      *(_QWORD *)(v220 + 24) = v285;
      *(_QWORD *)(v220 + 32) = v60;
LABEL_326:
      v225 = (_QWORD *)WdLogNewEntry5_WdTrace(v224, v221, v222, v223);
      v225[3] = 0LL;
      v225[4] = v285;
      v225[5] = v60;
      v225[6] = -1071774919LL;
      goto LABEL_327;
    }
LABEL_325:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v55, v61, v62, 0LL) + 24) = v60;
    goto LABEL_326;
  }
  while ( *(_DWORD *)(v55[11] + 24LL) != v277 )
  {
    v218 = v55[1];
    v55 = (_QWORD *)(v218 - 8);
    if ( v218 == v62 )
      v55 = 0LL;
    if ( !v55 )
      goto LABEL_319;
  }
  v295 = *(_DWORD *)(v55[12] + 24LL);
  v63 = (void (__fastcall ***)(_QWORD, __int64))(v59 + 24);
  v64 = _InterlockedDecrement((volatile signed __int32 *)(v59 + 32));
  if ( v64 )
  {
    if ( v64 < 0 )
    {
      v219 = WdLogNewEntry5_WdError(v63, v61);
      *(_QWORD *)(v219 + 24) = v64;
      WdLogEvent5_WdError(v219);
    }
  }
  else if ( v63 )
  {
    (**v63)(v63, 1LL);
  }
  v300 = v295;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v61);
  v65 = *(_QWORD *)(v47 + 16);
  v288 = 0;
  if ( (int)MonitorGetMonitorOrientationsFromTarget(v65, v300, &v288) < 0 )
  {
    v66 = 0;
    v288 = 0;
  }
  else
  {
    v66 = v288;
  }
  CurrentOrientation = ((v66 + (_BYTE)v270 - 1) & 3) + 1;
LABEL_75:
  v67 = *(_DWORD *)(v13 + 1992);
  if ( a3->Width > v67 )
    goto LABEL_290;
  v68 = a3->Height;
  Width = *(unsigned int *)(v13 + 1996);
  if ( v68 > (unsigned int)Width )
    goto LABEL_290;
  Width = v67 * (unsigned int)Width;
  if ( a3->Pitch * ((a3->Flags.Value & 1) + 1) * v68 > 4 * (unsigned __int64)(unsigned int)Width )
  {
    LODWORD(v79) = -1073741823;
    goto LABEL_241;
  }
  v69 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v69 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v69 + 168)) )
  {
    v227 = WdLogNewEntry5_WdAssertion(v70, Width);
    *(_QWORD *)(v227 + 24) = 5136LL;
    WdLogEvent5_WdAssertion(v227);
  }
  if ( !*((_QWORD *)this + 101) )
  {
    v180 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1992LL)
                        * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 1996LL));
    v181 = 4 * v180;
    if ( !is_mul_ok(v180, 4uLL) )
      v181 = -1LL;
    *((_QWORD *)this + 101) = operator new[](v181, 0x4B677844u, PagedPool);
  }
  v71 = (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
  v72 = (void *)*((_QWORD *)this + 101);
  if ( !v72 )
  {
    LODWORD(v79) = -1073741801;
    goto LABEL_241;
  }
  memset(v72, 0, 4 * *(unsigned int *)(v13 + 1996) * (unsigned __int64)*(unsigned int *)(v13 + 1992));
  v73 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v73 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v73 + 168)) )
  {
    v228 = WdLogNewEntry5_WdAssertion(v75, v74);
    *(_QWORD *)(v228 + 24) = 5161LL;
    WdLogEvent5_WdAssertion(v228);
  }
  v76 = (void *)*((_QWORD *)this + 106);
  v77 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v76 )
    goto LABEL_87;
  v182 = 4LL * (unsigned int)(*(_DWORD *)(v77 + 1992) * *(_DWORD *)(v77 + 1996));
  if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v77 + 1992) * *(_DWORD *)(v77 + 1996)), 4uLL) )
    v182 = -1LL;
  v183 = operator new[](v182, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 106) = v183;
  v76 = v183;
  if ( v183 )
LABEL_87:
    memset(v76, 0, 4 * *(unsigned int *)(v77 + 1996) * (unsigned __int64)*(unsigned int *)(v77 + 1992));
  Width = (__int64)this + 824;
  if ( !*((_QWORD *)this + 106) )
  {
    LODWORD(v79) = -1073741801;
    goto LABEL_241;
  }
  v78 = v302;
  v289 = 0;
  if ( !*((_BYTE *)this + 668) )
  {
    LODWORD(v79) = ScaleCursorShape(
                     (const struct tagRECT *)((char *)this + 652),
                     (const struct tagRECT *)((char *)v302 + 24),
                     CurrentOrientation,
                     a3,
                     (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
                     v71,
                     (const struct _DXGK_DRIVERCAPS *)(v13 + 1968),
                     &v289);
    if ( (int)v79 >= 0 )
      goto LABEL_91;
LABEL_241:
    v179 = v79;
LABEL_242:
    v14 = v179;
    goto LABEL_219;
  }
  v309.right = *((_DWORD *)this + 168);
  v309.bottom = *((_DWORD *)this + 169);
  *(_QWORD *)&v309.left = 0LL;
  LODWORD(v79) = ScaleCursorShape(
                   &v309,
                   (const struct tagRECT *)((char *)v302 + 24),
                   CurrentOrientation,
                   a3,
                   (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
                   v71,
                   (const struct _DXGK_DRIVERCAPS *)(v13 + 1968),
                   &v289);
  if ( (int)v79 < 0 )
    goto LABEL_241;
LABEL_91:
  if ( v289 )
  {
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY && !v269 )
    {
      RotateCursorShape(
        (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824),
        v71,
        CurrentOrientation,
        (const struct _DXGK_DRIVERCAPS *)(v13 + 1968));
      goto LABEL_95;
    }
    v80 = (const struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
LABEL_94:
    v81 = (void *)*((_QWORD *)this + 101);
    v71->Flags.Value = v80->Flags.Value;
    *((_DWORD *)this + 197) = v80->Width;
    *((_DWORD *)this + 198) = v80->Height;
    *((_DWORD *)this + 199) = v80->Pitch;
    memmove(v81, v80->pPixels, v80->Pitch * v80->Height * ((v80->Flags.Value & 1) + 1));
    *((_DWORD *)this + 204) = v80->XHot;
    *((_DWORD *)this + 205) = v80->YHot;
    goto LABEL_95;
  }
  if ( CurrentOrientation == D3DKMDT_VPPR_IDENTITY || v269 )
  {
    v80 = a3;
    goto LABEL_94;
  }
  RotateCursorShape(a3, v71, CurrentOrientation, (const struct _DXGK_DRIVERCAPS *)(v13 + 1968));
LABEL_95:
  v82 = *((_DWORD *)v78 + 9) - *((_DWORD *)v78 + 7);
  v83 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
  v84 = *((_DWORD *)this + 169);
  v85 = *((_DWORD *)this + 168);
  v271 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
  v86 = *((_DWORD *)v78 + 8) - *((_DWORD *)v78 + 6);
  v278 = v84;
  v286 = v85;
  v310 = *(_OWORD *)((char *)this + 652);
  v273 = v83;
  if ( *((_BYTE *)this + 668) )
  {
    v83 = v85;
    v273 = v85;
    v89 = v84;
    v271 = v84;
    v88 = 0;
    v283 = 0;
    v87 = 0;
    v296 = 0;
  }
  else
  {
    v87 = DWORD1(v310);
    v88 = v310;
    v89 = v271;
    v278 = HIDWORD(v310);
    v286 = DWORD2(v310);
    v296 = DWORD1(v310);
    v283 = v310;
  }
  if ( ((CurrentOrientation - 1) & 0xFFFFFFFD) != 0 )
  {
    v90 = (int)v89 * v292->X / v86;
    v91 = v83 * v292->Y;
LABEL_251:
    v92 = (unsigned int)(v91 >> 31);
    LODWORD(v92) = v91 % v82;
    v93 = v91 / v82;
    goto LABEL_102;
  }
  v89 = (unsigned int)(v83 * v292->X);
  if ( v86 == 1280 )
    v90 = (int)v89 / 1280;
  else
    v90 = (int)v89 / v86;
  v91 = v271 * v292->Y;
  if ( v82 != 1024 )
    goto LABEL_251;
  v92 = (v91 >> 31) & 0x3FF;
  v93 = v91 / 1024;
LABEL_102:
  if ( v269 )
  {
    v317.X = v90 + v88;
    v229 = v93 + v87;
LABEL_351:
    v317.Y = v229;
    goto LABEL_112;
  }
  if ( CurrentOrientation < D3DKMDT_VPPR_ROTATE90 )
    goto LABEL_104;
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE90 )
  {
    v94 = v273;
    v95 = v93 + v88;
    v231 = v87 - *((_DWORD *)this + 198) - v90;
    v97 = v271;
    v96 = v271 + v231;
    goto LABEL_108;
  }
  v89 = (unsigned int)(CurrentOrientation - 3);
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE180 )
  {
    v94 = v273;
    v230 = v88 - *((_DWORD *)this + 197) - v90;
    v97 = v271;
    v95 = v273 + v230;
    v96 = v271 + v87 - *((_DWORD *)this + 198) - v93;
    goto LABEL_108;
  }
  if ( CurrentOrientation == D3DKMDT_VPPR_ROTATE270 )
  {
    v94 = v273;
    v96 = v90 + v87;
    v95 = v273 + v88 - *((_DWORD *)this + 197) - v93;
  }
  else
  {
LABEL_104:
    if ( CurrentOrientation != D3DKMDT_VPPR_IDENTITY )
    {
      v232 = WdLogNewEntry5_WdAssertion(v89, v92);
      *(_QWORD *)(v232 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v232);
      v87 = v296;
      v88 = v283;
    }
    v94 = v273;
    v95 = v90 + v88;
    v96 = v93 + v87;
  }
  v97 = v271;
LABEL_108:
  v98 = v95 + *((_DWORD *)this + 197);
  v317.Y = v96;
  v317.X = v95;
  if ( v98 < v88 || v95 > v286 || v96 + *((_DWORD *)this + 198) < v87 || v96 > v278 )
  {
    v317.X = v88 + v94 / 2;
    v229 = v87 + v97 / 2;
    goto LABEL_351;
  }
LABEL_112:
  FillClipParams(v71, this, &v317, (struct CURSOR_CLIP_PARAMS *)&v312);
  if ( HIDWORD(v313) )
  {
    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
    v234 = ClippedCursor;
    if ( !ClippedCursor->pPixels )
    {
      LODWORD(v79) = -1073741801;
      goto LABEL_241;
    }
    ClipCurrentCursor(v71, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v312);
    v234->VidPnSourceId = *((_DWORD *)this + 4);
    LODWORD(v79) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2672), v234);
    if ( (int)v79 < 0 )
      goto LABEL_241;
    *((_BYTE *)this + 726) = 1;
  }
  else
  {
    *((_DWORD *)this + 200) = *((_DWORD *)this + 4);
    v101 = *(_QWORD *)(v13 + 2672);
    v303 = -1;
    v304 = 0LL;
    if ( (qword_1C00AE9B0 & 2) != 0 )
    {
      v305 = 1;
      v303 = 5018;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v99, &EventProfilerEnter, v100, 5018);
    }
    else
    {
      v305 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v303, 5018LL);
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v101 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4324LL));
    CurrentIrql = KeGetCurrentIrql();
    v104 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v103, v102), (v104 = Current) != 0LL) )
      v274 = *((_DWORD *)Current + 8);
    else
      v274 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v342,
      *(struct DXGADAPTER **)(v101 + 16));
    v79 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETPOINTERSHAPE *))(*(_QWORD *)(v101 + 16) + 472LL))(
            *(_QWORD *)(*(_QWORD *)(v101 + 16) + 272LL),
            v71);
    if ( v342[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v235 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v107, v106);
      v235[3] = 275LL;
      v235[4] = 16LL;
      v235[5] = v101;
      v235[6] = CurrentIrql;
      v236 = KeGetCurrentIrql();
      v235[7] = v236;
      WdLogEvent5_WdCriticalError(v235);
    }
    if ( v104 && *((_DWORD *)v104 + 8) != v274 )
    {
      v237 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v107, v106);
      v237[3] = 275LL;
      v237[4] = 38LL;
      v237[5] = *((int *)v104 + 8);
      v237[6] = v274;
      v237[7] = 0LL;
      WdLogEvent5_WdCriticalError(v237);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v101 + 16) + 4324LL));
    v110 = (_QWORD *)WdLogNewEntry5_WdTrace(v107, v106, v108, v109);
    v110[3] = v79;
    v111 = *(_QWORD *)(*(_QWORD *)(v101 + 16) + 272LL);
    v110[4] = v111;
    v110[5] = v71->Flags.Value;
    v110[6] = *((unsigned int *)this + 197);
    v112 = *((unsigned int *)this + 198);
    v110[7] = v112;
    if ( (_DWORD)v79 && (_DWORD)v79 != -1073741801 && (_DWORD)v79 != -1073741637 )
    {
      v238 = WdLogNewEntry5_WdError(v112, v111);
      *(_QWORD *)(v238 + 24) = v79;
      WdLogEvent5_WdError(v238);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v101 + 16));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v303, v113);
    if ( v305 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v114, &EventProfilerExit, v115, v303);
    if ( (int)v79 < 0 )
      goto LABEL_241;
    v116 = this;
    *((_BYTE *)this + 726) = 0;
  }
LABEL_129:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v268) = v317.Flags.0;
    LODWORD(v267) = v317.Y;
    LODWORD(v266) = v317.X;
    LODWORD(Timeout) = v317.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)v116, &EventSetPointerPosition, v115, v291, Timeout, v266, v267, v268);
  }
  v117 = *(_QWORD *)(v13 + 2672);
  v306 = -1;
  v307 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v308 = 1;
    v306 = 5019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v116, &EventProfilerEnter, v115, 5019);
  }
  else
  {
    v308 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v306, 5019LL);
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v117 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v117 + 16) + 4324LL));
  v280 = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( v280 >= 2u )
    goto LABEL_253;
  v121 = KeGetCurrentThread();
  if ( !v121 )
  {
    v239 = WdLogNewEntry5_WdAssertion(v119, v118);
    *(_QWORD *)(v239 + 24) = 496LL;
    WdLogEvent5_WdAssertion(v239);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v119);
  CurrentProcess = PsGetCurrentProcess(v124, v123);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(v121) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v127 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v127 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v240 = PsGetCurrentProcess(v129, v128),
         ProcessSessionId = PsGetProcessSessionIdEx(v240),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(v121)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
      {
        ThreadProperty = 0LL;
        goto LABEL_253;
      }
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v131 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_148;
  }
LABEL_253:
  v131 = 0;
LABEL_148:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v344,
    *(struct DXGADAPTER **)(v117 + 16));
  v79 = (*(int (__fastcall **)(_QWORD, _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v117 + 16) + 464LL))(
          *(_QWORD *)(*(_QWORD *)(v117 + 16) + 272LL),
          &v317);
  if ( v344[0] )
    KeUnstackDetachProcess(&v345);
  if ( v280 != KeGetCurrentIrql() )
  {
    v243 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
    v243[3] = 275LL;
    v243[4] = 16LL;
    v243[5] = v117;
    v243[6] = v280;
    v244 = KeGetCurrentIrql();
    v243[7] = v244;
    WdLogEvent5_WdCriticalError(v243);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v131 )
  {
    v245 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v133, v132);
    v245[3] = 275LL;
    v245[4] = 38LL;
    v245[5] = *((int *)ThreadProperty + 8);
    v245[6] = v131;
    v245[7] = 0LL;
    WdLogEvent5_WdCriticalError(v245);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v117 + 16) + 4324LL));
  v136 = (_QWORD *)WdLogNewEntry5_WdTrace(v133, v132, v134, v135);
  v136[3] = v79;
  v137 = *(_QWORD *)(*(_QWORD *)(v117 + 16) + 272LL);
  v136[4] = v137;
  v136[5] = *(_BYTE *)&v317.Flags.0 & 1;
  v136[6] = v317.X;
  Y = v317.Y;
  v136[7] = v317.Y;
  if ( (_DWORD)v79 )
  {
    v246 = WdLogNewEntry5_WdError(Y, v137);
    *(_QWORD *)(v246 + 24) = v79;
    WdLogEvent5_WdError(v246);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v117 + 16));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v306, v139);
  if ( v308 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v140, &EventProfilerExit, v141, v306);
  if ( (int)v79 < 0 )
    goto LABEL_241;
  v142 = (struct SESSION_VIEW *)*((_QWORD *)v302 + 6);
  if ( v142 == (struct SESSION_VIEW *)((char *)v302 + 48) )
    v143 = 0LL;
  else
    v143 = (struct SESSION_VIEW *)((char *)v142 - 56);
  v144 = this;
  if ( this == v143 )
    v275 = 1;
  v145 = *(_QWORD *)(v13 + 2672);
  VidPnSourceId = v317.VidPnSourceId;
  v147 = *(_BYTE *)&v317.Flags.0 & 1;
  Width = (unsigned int)v292->X;
  v148 = v317.Y;
  X = v317.X;
  v150 = v292->Y;
  v281 = v292->X;
  v287 = v317.Y;
  v284 = v317.X;
  if ( v317.VidPnSourceId >= *(_DWORD *)(v145 + 80) )
  {
    v247 = WdLogNewEntry5_WdAssertion(v143, Width);
    *(_QWORD *)(v247 + 24) = 5733LL;
    WdLogEvent5_WdAssertion(v247);
    Width = v281;
    v148 = v287;
    X = v284;
    v144 = this;
  }
  v151 = 3968 * VidPnSourceId;
  *(_BYTE *)(*(_QWORD *)(v145 + 112) + 3968 * VidPnSourceId + 725) = v147;
  if ( v147 )
  {
    *(_DWORD *)(*(_QWORD *)(v145 + 112) + v151 + 728) = X;
    *(_DWORD *)(*(_QWORD *)(v145 + 112) + v151 + 732) = v148;
    *(_DWORD *)(*(_QWORD *)(v145 + 112) + v151 + 680) = Width;
    *(_DWORD *)(*(_QWORD *)(v145 + 112) + v151 + 684) = v150;
  }
  if ( !a8 && *(_DWORD *)(v13 + 1848) >= 0x7000u )
  {
    v248 = DISPLAY_SOURCE::GetPristineCursor(v144, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v249 = v248;
    pPixels = (void *)v248->pPixels;
    if ( !pPixels )
    {
      v179 = -1073741801;
      goto LABEL_242;
    }
    v248->Flags.Value = a3->Flags.Value;
    v248->Width = a3->Width;
    v248->Height = a3->Height;
    v248->Pitch = a3->Pitch;
    memmove(pPixels, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v249->XHot = a3->XHot;
    v249->YHot = a3->YHot;
  }
  if ( !v275 )
    goto LABEL_219;
  if ( !v294 )
  {
    v251 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v151, Width);
    v251[5] = &v293;
    v251[3] = 275LL;
    v251[4] = 4LL;
    v251[6] = 0LL;
    v251[7] = 0LL;
    WdLogEvent5_WdCriticalError(v251);
  }
  v152 = v293;
  v294 = 0;
  if ( *(struct _KTHREAD **)(v293 + 16) != KeGetCurrentThread() )
  {
    v252 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v151, Width);
    v252[3] = 275LL;
    v252[4] = 4LL;
    v252[5] = v152;
    v252[6] = 0LL;
    v252[7] = 0LL;
    WdLogEvent5_WdCriticalError(v252);
  }
  v153 = *(_DWORD *)(v152 + 24);
  if ( v153 <= 0 )
  {
    v253 = WdLogNewEntry5_WdAssertion(v151, Width);
    *(_QWORD *)(v253 + 24) = 703LL;
    WdLogEvent5_WdAssertion(v253);
    v153 = *(_DWORD *)(v152 + 24);
  }
  v154 = v153 - 1;
  *(_DWORD *)(v152 + 24) = v154;
  if ( !v154 )
  {
    *(_QWORD *)(v152 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v152, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v334 != v339 )
    COREACCESS::Release((COREACCESS *)v332);
  if ( !v340 )
  {
    v254 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v156, v155);
    v254[5] = v337;
    v254[3] = 275LL;
    v254[4] = 4LL;
    v254[6] = 0LL;
    v254[7] = 0LL;
    WdLogEvent5_WdCriticalError(v254);
  }
  v340 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v339 + 23) )
    DXGADAPTER::ReleaseCoreResource(v339, v341);
  v341 = 0LL;
  v331 = 0;
  v157 = v292->VidPnSourceId;
  v299 = 0LL;
  v290 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v13, (unsigned int)v157, &v299, &v311, &v290, &v316, 0);
  v161 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v255 = (_QWORD *)WdLogNewEntry5_WdError(v160, v159);
    v255[3] = v13;
    v255[4] = v157;
    v255[5] = v161;
    WdLogEvent5_WdError(v255);
    v259 = WdLogNewEntry5_WdWarning(v257, v256, v258);
    *(_QWORD *)(v259 + 24) = v13;
    *(_QWORD *)(v259 + 32) = v161;
    WdLogEvent5_WdWarning(v259);
    goto LABEL_219;
  }
  v162 = v290;
  if ( !v299 || !v290 )
  {
    v260 = WdLogNewEntry5_WdAssertion(v160, v159);
    *(_QWORD *)(v260 + 24) = 3143LL;
    WdLogEvent5_WdAssertion(v260);
  }
  v163 = *((_QWORD *)v162 + 334);
  v314[1] = v162;
  v164 = *(_QWORD *)(v163 + 104);
  _InterlockedIncrement64((volatile signed __int64 *)v162 + 3);
  v314[0] = -1LL;
  KeEnterCriticalRegion();
  v165 = v290;
  ExAcquirePushLockSharedEx((char *)v290 + 136, 0LL);
  v315 = 1;
  v319 = 0;
  v322 = v165;
  v323 = 0;
  v324 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v162 + 3);
  v327 = v290;
  v321 = -1LL;
  v328 = 0;
  v329 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v162 + 3);
  v326 = -1LL;
  v167 = _InterlockedExchangeAdd64((volatile signed __int64 *)v299 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v167 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v299 + 2), v299);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v162 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v290 + 2), v290);
  if ( v328 )
  {
    v261 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v167, v166);
    v261[5] = v325;
    v261[3] = 275LL;
    v261[4] = 4LL;
    v261[6] = 0LL;
    v261[7] = 0LL;
    WdLogEvent5_WdCriticalError(v261);
  }
  v168 = v327;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v327 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v327 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v169, &EventBlockThread, v170, 72);
      KeWaitForSingleObject((char *)v327 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v327, 0LL);
    v168 = v327;
  }
  v329 = 0LL;
  v328 = 1;
  if ( *((_DWORD *)v168 + 50) == 1 )
  {
    if ( v322 == v327
      || (COREACCESS::AcquireShared((COREACCESS *)v320, 0LL),
          v168 = (struct DXGADAPTER *)*((unsigned int *)v322 + 50),
          (_DWORD)v168 == 1) )
    {
      v319 = 1;
      if ( (unsigned int)v157 < *(_DWORD *)(v164 + 52) )
      {
        _lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_(
          v164,
          (unsigned int)OUTPUTDUPL_MGR::ProcessPointerShapeChange,
          (_DWORD)v292,
          (_DWORD)a3,
          v298,
          v297);
        if ( v319 )
        {
          if ( v322 != v327 )
            COREACCESS::Release((COREACCESS *)v320);
          if ( !v328 )
          {
            v264 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v172, v171);
            v264[5] = v325;
            v264[3] = 275LL;
            v264[4] = 4LL;
            v264[6] = 0LL;
            v264[7] = 0LL;
            WdLogEvent5_WdCriticalError(v264);
          }
          v328 = 0;
          v173 = v327;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v327 + 23) )
          {
            DXGADAPTER::ReleaseCoreResource(v327, v329);
            v173 = v327;
          }
          v329 = 0LL;
          v319 = 0;
        }
        else
        {
          v173 = v327;
        }
        if ( v173 )
        {
          if ( v328 )
          {
            COREACCESS::Release((COREACCESS *)v325);
            v173 = v327;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v173 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v173 + 2), v173);
        }
        v174 = v322;
        if ( v322 )
        {
          if ( v323 )
          {
            COREACCESS::Release((COREACCESS *)v320);
            v174 = v322;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v174 + 2), v174);
        }
        ExReleasePushLockSharedEx((char *)v165 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v162 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v290 + 2), v290);
        goto LABEL_219;
      }
      v263 = WdLogNewEntry5_WdError(v168, v166);
      *(_QWORD *)(v263 + 24) = v157;
      WdLogEvent5_WdError(v263);
      goto LABEL_384;
    }
    COREACCESS::Release((COREACCESS *)v320);
  }
  COREACCESS::Release((COREACCESS *)v325);
LABEL_384:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v318, v262);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v314);
LABEL_219:
  if ( v294 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v293, Width);
LABEL_221:
  if ( v331 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v330);
  v175 = v339;
  if ( v339 )
  {
    if ( v340 )
    {
      COREACCESS::Release((COREACCESS *)v337);
      v175 = v339;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v175 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v175 + 2), v175);
  }
  v176 = v334;
  if ( v334 )
  {
    if ( v335 )
    {
      COREACCESS::Release((COREACCESS *)v332);
      v176 = v334;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v176 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v176 + 2), v176);
  }
  return v14;
}
