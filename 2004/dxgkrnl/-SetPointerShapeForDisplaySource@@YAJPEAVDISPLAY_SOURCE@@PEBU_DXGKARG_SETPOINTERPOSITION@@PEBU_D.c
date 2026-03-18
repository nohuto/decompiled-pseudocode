/*
 * XREFs of ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C01202D0
 * Callers:
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C011FAB0 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH.c)
 *     DxgkRedrawCursorForPostCompositon @ 0x1C027DE68 (DxgkRedrawCursorForPostCompositon.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003FB0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00056F8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0039694 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F72C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FCD20 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD040 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011F918 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C01215B4 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOSITION@@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C0121708 (-FillClipParams@@YAXPEAU_DXGKARG_SETPOINTERSHAPE@@PEAVDISPLAY_SOURCE@@PEAU_DXGKARG_SETPOINTERPOS.c)
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C0121810 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 *     ?DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01218B0 (-DdiSetPointerShape@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERSHAPE@@@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C014CBE8 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12II@Z @ 0x1C0157354 (-_lambda_invoker_cdecl_@_lambda_103e920f2f8a7257353075347c127b30_@@CAJPEAVOUTPUTDUPL_MGR@@P82@EA.c)
 *     ?GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z @ 0x1C0212F14 (-GetClippedCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@_N@Z.c)
 *     ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1C0213534 (-GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1C027CE70 (-ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z.c)
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C027D560 (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 */

__int64 __fastcall SetPointerShapeForDisplaySource(
        struct DISPLAY_SOURCE *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
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
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // r12d
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
  char v65; // al
  UINT v66; // r8d
  UINT v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  struct _DXGKARG_SETPOINTERSHAPE *v70; // r13
  void *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  void *v75; // rcx
  __int64 v76; // rbx
  struct _DXGKARG_SETPOINTERSHAPE *v77; // r15
  struct SESSION_VIEW *v78; // rbx
  const struct tagRECT *v79; // rdx
  __int64 v80; // r12
  int v81; // r12d
  void *v82; // rcx
  int v83; // r9d
  int v84; // r15d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v85; // edx
  int v86; // ecx
  int v87; // r8d
  int v88; // r10d
  int v89; // r11d
  __int64 v90; // rcx
  int v91; // ebx
  int v92; // eax
  __int64 v93; // rdx
  int v94; // r15d
  int v95; // r9d
  INT v96; // edx
  INT v97; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v98; // ebx
  int v99; // ecx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r15
  __int64 v103; // rdx
  __int64 v104; // rcx
  struct DXGTHREAD *v105; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  _QWORD *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  struct DISPLAY_SOURCE *v117; // rcx
  __int64 v118; // r15
  __int64 v119; // rdx
  __int64 v120; // rcx
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *v122; // r12
  int CurrentProcessSessionId; // r13d
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbx
  void *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 ThreadWin32Thread; // rax
  int v132; // r13d
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  _QWORD *v137; // rax
  __int64 v138; // rdx
  __int64 Y; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  struct SESSION_VIEW *v143; // rcx
  struct DISPLAY_SOURCE *v144; // rcx
  DISPLAY_SOURCE *v145; // r10
  __int64 v146; // rbx
  __int64 VidPnSourceId; // r12
  char v148; // r15
  INT v149; // r8d
  INT X; // r9d
  INT v151; // r13d
  __int64 v152; // rcx
  __int64 v153; // rbx
  int v154; // eax
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r12
  int PairingAdapters; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rbx
  struct DXGADAPTER *v163; // rsi
  __int64 v164; // rax
  __int64 v165; // r15
  struct DXGADAPTER *v166; // rbx
  __int64 v167; // rdx
  signed __int64 v168; // rcx
  struct DXGADAPTER *v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // rdx
  __int64 v173; // rcx
  struct DXGADAPTER *v174; // rcx
  struct DXGADAPTER *v175; // rcx
  struct DXGADAPTER *v176; // rcx
  struct DXGADAPTER *v177; // rcx
  _QWORD *v179; // rax
  int v180; // eax
  unsigned __int64 v181; // rcx
  SIZE_T v182; // rax
  SIZE_T v183; // rax
  PVOID v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  _QWORD *v189; // rax
  int v190; // eax
  __int64 v191; // rax
  int v192; // r9d
  __int64 v193; // rax
  __int64 v194; // rax
  UINT Height; // r8d
  UINT YHot; // eax
  _QWORD *v197; // rax
  int v198; // r13d
  __int64 v199; // rax
  struct _DXGKARG_SETPOINTERSHAPE *PristineCursor; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  _QWORD *v203; // rax
  __int64 v204; // rax
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rax
  __int64 v213; // rax
  __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rcx
  _QWORD *v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rax
  __int64 v229; // rax
  INT v230; // eax
  int v231; // edx
  int v232; // r8d
  __int64 v233; // rax
  struct _DXGKARG_SETPOINTERSHAPE *ClippedCursor; // rax
  const struct _DXGKARG_SETPOINTERSHAPE *v235; // rbx
  _QWORD *v236; // rax
  unsigned __int8 v237; // cl
  _QWORD *v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  __int64 v241; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD *v244; // rax
  unsigned __int8 v245; // cl
  _QWORD *v246; // rax
  __int64 v247; // rax
  __int64 v248; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v249; // rax
  struct _DXGKARG_SETPOINTERSHAPE *v250; // rbx
  void *pPixels; // rcx
  _QWORD *v252; // rax
  _QWORD *v253; // rax
  __int64 v254; // rax
  _QWORD *v255; // rax
  _QWORD *v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rcx
  __int64 v259; // r8
  __int64 v260; // rax
  __int64 v261; // rax
  _QWORD *v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rax
  _QWORD *v265; // rax
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  struct _DXGKARG_SETPOINTERSHAPE *v267; // [rsp+30h] [rbp-D8h]
  struct _DXGK_DRIVERCAPS *v268; // [rsp+38h] [rbp-D0h]
  int *v269; // [rsp+40h] [rbp-C8h]
  char v270; // [rsp+48h] [rbp-C0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v271; // [rsp+4Ch] [rbp-BCh]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v272; // [rsp+4Ch] [rbp-BCh]
  unsigned int v273; // [rsp+50h] [rbp-B8h]
  int v274; // [rsp+50h] [rbp-B8h]
  int v275; // [rsp+50h] [rbp-B8h]
  char v276; // [rsp+54h] [rbp-B4h]
  int v277; // [rsp+58h] [rbp-B0h]
  INT v278; // [rsp+58h] [rbp-B0h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v280; // [rsp+58h] [rbp-B0h]
  unsigned int v281; // [rsp+58h] [rbp-B0h]
  __int64 v284; // [rsp+70h] [rbp-98h]
  INT v285; // [rsp+70h] [rbp-98h]
  INT v286; // [rsp+70h] [rbp-98h]
  int v287[2]; // [rsp+78h] [rbp-90h] BYREF
  const struct _DXGKARG_SETPOINTERPOSITION *v288; // [rsp+80h] [rbp-88h]
  struct DXGADAPTER *v289; // [rsp+88h] [rbp-80h] BYREF
  void *v290; // [rsp+90h] [rbp-78h]
  __int64 v291; // [rsp+98h] [rbp-70h] BYREF
  char v292; // [rsp+A0h] [rbp-68h]
  int v293; // [rsp+A8h] [rbp-60h]
  int v294; // [rsp+ACh] [rbp-5Ch]
  __int128 v295; // [rsp+B0h] [rbp-58h]
  int v296; // [rsp+C0h] [rbp-48h]
  unsigned int v297; // [rsp+C4h] [rbp-44h]
  struct DXGADAPTER *v298; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v299; // [rsp+D0h] [rbp-38h]
  __int64 v300; // [rsp+D8h] [rbp-30h] BYREF
  struct SESSION_VIEW *v301; // [rsp+E0h] [rbp-28h]
  int v302; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v303; // [rsp+F0h] [rbp-18h]
  char v304; // [rsp+F8h] [rbp-10h]
  int v305; // [rsp+100h] [rbp-8h] BYREF
  __int64 v306; // [rsp+108h] [rbp+0h]
  char v307; // [rsp+110h] [rbp+8h]
  struct tagRECT v308; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v309; // [rsp+128h] [rbp+20h] BYREF
  __int128 v310; // [rsp+130h] [rbp+28h] BYREF
  __int64 v311; // [rsp+140h] [rbp+38h]
  _QWORD v312[2]; // [rsp+148h] [rbp+40h] BYREF
  char v313; // [rsp+158h] [rbp+50h]
  unsigned __int64 v314; // [rsp+160h] [rbp+58h] BYREF
  _DXGKARG_SETPOINTERPOSITION v315; // [rsp+168h] [rbp+60h] BYREF
  char v316; // [rsp+178h] [rbp+70h] BYREF
  char v317; // [rsp+179h] [rbp+71h]
  char v318[8]; // [rsp+180h] [rbp+78h] BYREF
  __int64 v319; // [rsp+188h] [rbp+80h]
  struct DXGADAPTER *v320; // [rsp+190h] [rbp+88h]
  char v321; // [rsp+198h] [rbp+90h]
  __int64 v322; // [rsp+1A0h] [rbp+98h]
  char v323[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v324; // [rsp+1C8h] [rbp+C0h]
  struct DXGADAPTER *v325; // [rsp+1D0h] [rbp+C8h]
  char v326; // [rsp+1D8h] [rbp+D0h]
  char *v327; // [rsp+1E0h] [rbp+D8h]
  char v328; // [rsp+208h] [rbp+100h] BYREF
  char v329; // [rsp+209h] [rbp+101h]
  char v330[8]; // [rsp+210h] [rbp+108h] BYREF
  __int64 v331; // [rsp+218h] [rbp+110h]
  struct DXGADAPTER *v332; // [rsp+220h] [rbp+118h]
  char v333; // [rsp+228h] [rbp+120h]
  __int64 v334; // [rsp+230h] [rbp+128h]
  char v335[8]; // [rsp+250h] [rbp+148h] BYREF
  __int64 v336; // [rsp+258h] [rbp+150h]
  struct DXGADAPTER *v337; // [rsp+260h] [rbp+158h]
  char v338; // [rsp+268h] [rbp+160h]
  char *v339; // [rsp+270h] [rbp+168h]
  char v340[8]; // [rsp+298h] [rbp+190h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2A0h] [rbp+198h] BYREF
  char v342[8]; // [rsp+2D0h] [rbp+1C8h] BYREF
  struct _KAPC_STATE v343; // [rsp+2D8h] [rbp+1D0h] BYREF

  v9 = *a2;
  v10 = this;
  v311 = 0LL;
  v11 = *((_QWORD *)this + 1);
  v315 = v9;
  v301 = a4;
  v13 = *(_QWORD *)(v11 + 16);
  v288 = a2;
  v290 = a5;
  v310 = 0LL;
  if ( !v13 )
  {
    v185 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v185 + 24) = 1090LL;
    WdLogEvent5_WdAssertion(v185);
  }
  if ( !*(_QWORD *)(v13 + 2696) )
  {
    v186 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v186 + 24) = 1091LL;
    WdLogEvent5_WdAssertion(v186);
  }
  v14 = 0;
  v329 = 0;
  v334 = 0LL;
  v332 = (struct DXGADAPTER *)v13;
  v333 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v337 = (struct DXGADAPTER *)v13;
  v331 = -1LL;
  v338 = 0;
  v339 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
  v336 = -1LL;
  v276 = 0;
  v15 = (struct DXGADAPTER *)v13;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v13 + 184) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v337 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, 72);
      KeWaitForSingleObject((char *)v337 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v337, 0LL);
    v15 = v337;
  }
  v339 = 0LL;
  v338 = 1;
  if ( *((_DWORD *)v15 + 50) != 1 )
    goto LABEL_260;
  if ( v332 != v337 )
  {
    COREACCESS::AcquireShared((COREACCESS *)v330, 0LL);
    v15 = (struct DXGADAPTER *)*((unsigned int *)v332 + 50);
    if ( (_DWORD)v15 != 1 )
    {
      COREACCESS::Release((COREACCESS *)v330);
LABEL_260:
      COREACCESS::Release((COREACCESS *)v335);
      v14 = -1073741130;
      goto LABEL_221;
    }
  }
  v329 = 1;
  v18 = *(_QWORD *)(v13 + 2696);
  v291 = v18 + 400;
  v292 = 0;
  if ( v18 == -400 )
  {
    v187 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v187 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v187);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v291 + 16) == CurrentThread )
  {
    v188 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v188 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v188);
  }
  if ( v292 )
  {
    v189 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v189[5] = &v291;
    v189[3] = 275LL;
    v189[4] = 4LL;
    v189[6] = 0LL;
    v189[7] = 0LL;
    WdLogEvent5_WdCriticalError(v189);
  }
  v20 = v291;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v20 + 16) == KeGetCurrentThread() )
  {
    v190 = *(_DWORD *)(v20 + 24);
    if ( v190 <= 0 )
    {
      v191 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v191 + 24) = 661LL;
      WdLogEvent5_WdAssertion(v191);
      v190 = *(_DWORD *)(v20 + 24);
    }
    v24 = v190 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v20, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v192 = *(_DWORD *)(v20 + 28);
        if ( v192 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(XHot, &EventBlockThread, v23, v192);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v20 + 8));
      ExAcquirePushLockExclusiveEx(v20, 0LL);
    }
    if ( *(_QWORD *)(v20 + 16) )
    {
      v193 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v193 + 24) = 685LL;
      WdLogEvent5_WdAssertion(v193);
    }
    if ( *(_DWORD *)(v20 + 24) )
    {
      v194 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v194 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v194);
    }
    *(_QWORD *)(v20 + 16) = KeGetCurrentThread();
    v24 = 1;
  }
  *(_DWORD *)(v20 + 24) = v24;
  v292 = 1;
  if ( a9 )
  {
    if ( a3->Flags.Value != 2 )
      goto LABEL_283;
    Width = a3->Width;
    XHot = *(_QWORD *)(*((_QWORD *)v10 + 1) + 16LL);
    if ( (unsigned int)Width > *(_DWORD *)(XHot + 2016) )
      goto LABEL_283;
    Height = a3->Height;
    if ( Height > *(_DWORD *)(XHot + 2020) )
      goto LABEL_283;
    if ( a3->Pitch != 4 * (_DWORD)Width )
      goto LABEL_283;
    XHot = *(unsigned int *)(*(_QWORD *)(XHot + 2696) + 80LL);
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
    if ( (int)Width < *((_DWORD *)v301 + 6)
      || (int)Width >= *((_DWORD *)v301 + 8)
      || (Width = a2->Y + YHot, (int)Width < *((_DWORD *)v301 + 7))
      || (int)Width >= *((_DWORD *)v301 + 9) )
    {
LABEL_283:
      v197 = (_QWORD *)WdLogNewEntry5_WdError(XHot, Width);
      v197[3] = *(int *)(v13 + 320);
      v197[4] = *(unsigned int *)(v13 + 316);
      v197[5] = *((unsigned int *)v10 + 4);
      WdLogEvent5_WdError(v197);
LABEL_284:
      v198 = -1073741811;
LABEL_291:
      LODWORD(v80) = v198;
      goto LABEL_241;
    }
  }
  if ( a8 )
  {
    if ( *(_DWORD *)(v13 + 1872) < 0x7000u )
    {
      v199 = WdLogNewEntry5_WdAssertion(XHot, Width);
      *(_QWORD *)(v199 + 24) = 1137LL;
      WdLogEvent5_WdAssertion(v199);
    }
    PristineCursor = DISPLAY_SOURCE::GetPristineCursor(v10, 0);
    a3 = PristineCursor;
    if ( !PristineCursor->pPixels )
      goto LABEL_284;
    v297 = PristineCursor->Width;
    v296 = PristineCursor->Height * ((PristineCursor->Flags.Value & 1) + 1);
  }
  else
  {
    v296 = a7;
    v25 = a6;
    v297 = a6;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x100) == 0 )
  {
    v25 = **(unsigned int **)(v13 + 2600);
    if ( (v25 & 8) != 0 )
    {
LABEL_290:
      v198 = -1073741823;
      goto LABEL_291;
    }
  }
  v26 = *((unsigned int *)v10 + 4);
  v315.VidPnSourceId = v26;
  v27 = *(_QWORD *)(v13 + 2696);
  if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 80) )
  {
    v201 = WdLogNewEntry5_WdAssertion(v25, Width);
    *(_QWORD *)(v201 + 24) = 6068LL;
    WdLogEvent5_WdAssertion(v201);
  }
  v28 = 3968 * v26;
  if ( !*(_BYTE *)(3968 * v26 + *(_QWORD *)(v27 + 112) + 720) )
  {
    v179 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    LODWORD(v80) = -1073741823;
    v179[3] = -1073741823LL;
    v179[4] = *((unsigned int *)this + 4);
    v179[5] = a3->Flags.Value;
    v179[6] = a5;
    WdLogEvent5_WdError(v179);
    goto LABEL_241;
  }
  if ( (*(_DWORD *)(v13 + 348) & 0x20) != 0
    && !ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v13 + 2696)) )
  {
    goto LABEL_290;
  }
  v29 = 1;
  v270 = 1;
  v30 = 1;
  v273 = *((_DWORD *)v10 + 267);
  if ( v273 == -1 )
    goto LABEL_293;
  v31 = *(_QWORD *)(v13 + 2696);
  if ( !v31 )
  {
    v202 = WdLogNewEntry5_WdError(v28, Width);
    *(_QWORD *)(v202 + 24) = 9255LL;
    WdLogEvent5_WdError(v202);
LABEL_293:
    v44 = -1073741811;
    goto LABEL_294;
  }
  v32 = *(_QWORD *)(v31 + 96);
  if ( v32 )
  {
    if ( v32 == -168 )
    {
      v208 = WdLogNewEntry5_WdAssertion(v28, Width);
      WdLogEvent5_WdAssertion(v208);
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
    while ( *(_DWORD *)(v38 + 44) != v273 )
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
        v214 = WdLogNewEntry5_WdAssertion(v36, v33);
        WdLogEvent5_WdAssertion(v214);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      if ( *(_DWORD *)(v38 + 432) != 1 )
      {
        v215 = WdLogNewEntry5_WdAssertion(v40, v39);
        WdLogEvent5_WdAssertion(v215);
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
      v209 = WdLogNewEntry5_WdTrace(v36, v33, v34, v35);
      *(_QWORD *)(v209 + 24) = v273;
      *(_QWORD *)(v209 + 32) = v32;
      if ( v32 == -168 )
      {
        v212 = WdLogNewEntry5_WdAssertion(v211, v210);
        WdLogEvent5_WdAssertion(v212);
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v32 + 168));
      v213 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v213 + 24) = v273;
      *(_QWORD *)(v213 + 32) = v13;
      WdLogEvent5_WdDmmEvent(v213);
    }
    v30 = *(_BYTE *)(v31 + 250) == 0;
    v29 = *(_BYTE *)(v31 + 249) == 0;
LABEL_54:
    v270 = v29;
    v43 = 0;
    goto LABEL_55;
  }
  v204 = WdLogNewEntry5_WdError(v28, Width);
  *(_QWORD *)(v204 + 24) = v13;
  WdLogEvent5_WdError(v204);
  v43 = -1073741811;
  v207 = WdLogNewEntry5_WdAssertion(v206, v205);
  *(_QWORD *)(v207 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v207);
LABEL_55:
  v44 = v43;
  v45 = v43 < 0;
  v10 = this;
  if ( v45 )
  {
LABEL_294:
    v203 = (_QWORD *)WdLogNewEntry5_WdError(v28, Width);
    v203[3] = *((unsigned int *)v10 + 4);
    v203[4] = *(int *)(v13 + 320);
    v203[5] = *(unsigned int *)(v13 + 316);
    v203[6] = v44;
    WdLogEvent5_WdError(v203);
  }
  if ( v29 && v30 && !*((_BYTE *)v10 + 668) )
  {
    LODWORD(v80) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2696), a3);
    if ( (int)v80 < 0 )
      goto LABEL_241;
    goto LABEL_129;
  }
  v46 = *((unsigned int *)v10 + 4);
  v47 = *((_QWORD *)v10 + 1);
  v277 = *((_DWORD *)v10 + 4);
  *(_QWORD *)&v295 = v47;
  if ( v29 )
  {
    CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v47, (unsigned int)v46, 1);
    v271 = CurrentOrientation;
    goto LABEL_75;
  }
  if ( !*(_BYTE *)(v47 + 249) )
  {
    CurrentOrientation = D3DKMDT_VPPR_IDENTITY;
    v271 = D3DKMDT_VPPR_IDENTITY;
    goto LABEL_75;
  }
  v48 = 3968 * v46;
  v284 = v46;
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
        v216 = WdLogNewEntry5_WdError(v49, Width);
        *(_QWORD *)(v216 + 24) = *(int *)(v48 + *(_QWORD *)(v47 + 112) + 1040);
        *(_QWORD *)(v216 + 32) = *(_QWORD *)(v47 + 16);
        WdLogEvent5_WdError(v216);
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
  v271 = CurrentOrientation;
  if ( !v51 )
  {
    v217 = WdLogNewEntry5_WdError(v49, Width);
    *(_QWORD *)(v217 + 24) = 0LL;
    WdLogEvent5_WdError(v217);
    goto LABEL_75;
  }
  v52 = *(_QWORD *)(v51 + 2696);
  if ( !v52 || (v53 = *(_QWORD *)(v52 + 88)) == 0 )
  {
    v218 = WdLogNewEntry5_WdError(v49, Width);
    *(_QWORD *)(v218 + 24) = v51;
    WdLogEvent5_WdError(v218);
    goto LABEL_75;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v53 + 40));
  v58 = *(_QWORD *)(v53 + 88);
  if ( !v58 )
  {
    v300 = 0LL;
    goto LABEL_315;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v58 + 32));
  v59 = *(_QWORD *)(v53 + 88);
  v300 = v59;
  if ( !v59 )
  {
LABEL_315:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v55, v54, v56, v57) + 24) = v51;
LABEL_327:
    auto_rc<DMMVIDPN const>::reset(&v300, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v227);
    goto LABEL_75;
  }
  v60 = v59 + 96;
  v293 = -1;
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
      v221 = WdLogNewEntry5_WdTrace(v55, v61, v62, 0LL);
      v225 = v284;
      *(_QWORD *)(v221 + 24) = v284;
      *(_QWORD *)(v221 + 32) = v60;
LABEL_326:
      v226 = (_QWORD *)WdLogNewEntry5_WdTrace(v225, v222, v223, v224);
      v226[3] = 0LL;
      v226[4] = v284;
      v226[5] = v60;
      v226[6] = -1071774919LL;
      goto LABEL_327;
    }
LABEL_325:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v55, v61, v62, 0LL) + 24) = v60;
    goto LABEL_326;
  }
  while ( *(_DWORD *)(v55[11] + 24LL) != v277 )
  {
    v219 = v55[1];
    v55 = (_QWORD *)(v219 - 8);
    if ( v219 == v62 )
      v55 = 0LL;
    if ( !v55 )
      goto LABEL_319;
  }
  v293 = *(_DWORD *)(v55[12] + 24LL);
  v63 = (void (__fastcall ***)(_QWORD, __int64))(v59 + 24);
  v64 = _InterlockedDecrement((volatile signed __int32 *)(v59 + 32));
  if ( v64 )
  {
    if ( v64 < 0 )
    {
      v220 = WdLogNewEntry5_WdError(v63, v61);
      *(_QWORD *)(v220 + 24) = v64;
      WdLogEvent5_WdError(v220);
    }
  }
  else if ( v63 )
  {
    (**v63)(v63, 1LL);
  }
  v299 = v293;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v53 + 40), v61);
  v287[0] = 0;
  if ( (int)MonitorGetMonitorOrientationsFromTarget(*(_QWORD *)(v295 + 16), v299, v287) < 0 )
  {
    v65 = 0;
    v287[0] = 0;
  }
  else
  {
    v65 = v287[0];
  }
  CurrentOrientation = ((v65 + (_BYTE)CurrentOrientation - 1) & 3) + 1;
  v271 = CurrentOrientation;
LABEL_75:
  v66 = *(_DWORD *)(v13 + 2016);
  if ( a3->Width > v66 )
    goto LABEL_290;
  v67 = a3->Height;
  Width = *(unsigned int *)(v13 + 2020);
  if ( v67 > (unsigned int)Width )
    goto LABEL_290;
  Width = v66 * (unsigned int)Width;
  if ( a3->Pitch * ((a3->Flags.Value & 1) + 1) * v67 > 4 * (unsigned __int64)(unsigned int)Width )
  {
    LODWORD(v80) = -1073741823;
    goto LABEL_241;
  }
  v68 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v68 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v68 + 168)) )
  {
    v228 = WdLogNewEntry5_WdAssertion(v69, Width);
    *(_QWORD *)(v228 + 24) = 5136LL;
    WdLogEvent5_WdAssertion(v228);
  }
  if ( !*((_QWORD *)this + 101) )
  {
    v181 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2016LL)
                        * *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 2020LL));
    v182 = 4 * v181;
    if ( !is_mul_ok(v181, 4uLL) )
      v182 = -1LL;
    *((_QWORD *)this + 101) = operator new[](v182, 0x4B677844u, PagedPool);
  }
  v70 = (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 784);
  v71 = (void *)*((_QWORD *)this + 101);
  if ( !v71 )
  {
    LODWORD(v80) = -1073741801;
    goto LABEL_241;
  }
  memset(v71, 0, 4 * *(unsigned int *)(v13 + 2020) * (unsigned __int64)*(unsigned int *)(v13 + 2016));
  v72 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v72 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v72 + 168)) )
  {
    v229 = WdLogNewEntry5_WdAssertion(v74, v73);
    *(_QWORD *)(v229 + 24) = 5161LL;
    WdLogEvent5_WdAssertion(v229);
  }
  v75 = (void *)*((_QWORD *)this + 106);
  v76 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
  if ( v75 )
    goto LABEL_87;
  v183 = 4LL * (unsigned int)(*(_DWORD *)(v76 + 2016) * *(_DWORD *)(v76 + 2020));
  if ( !is_mul_ok((unsigned int)(*(_DWORD *)(v76 + 2016) * *(_DWORD *)(v76 + 2020)), 4uLL) )
    v183 = -1LL;
  v184 = operator new[](v183, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 106) = v184;
  v75 = v184;
  if ( v184 )
LABEL_87:
    memset(v75, 0, 4 * *(unsigned int *)(v76 + 2020) * (unsigned __int64)*(unsigned int *)(v76 + 2016));
  v77 = (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 824);
  if ( !*((_QWORD *)this + 106) )
  {
    LODWORD(v80) = -1073741801;
    goto LABEL_241;
  }
  v78 = v301;
  v287[1] = 0;
  v79 = (const struct tagRECT *)((char *)v301 + 24);
  if ( !*((_BYTE *)this + 668) )
  {
    LODWORD(v80) = ScaleCursorShape(
                     (const struct tagRECT *)((char *)this + 652),
                     v79,
                     CurrentOrientation,
                     a3,
                     v77,
                     v70,
                     (const struct _DXGK_DRIVERCAPS *)(v13 + 1992),
                     &v287[1]);
    if ( (int)v80 >= 0 )
      goto LABEL_91;
LABEL_241:
    v180 = v80;
LABEL_242:
    v14 = v180;
    goto LABEL_219;
  }
  v308.right = *((_DWORD *)this + 168);
  v308.bottom = *((_DWORD *)this + 169);
  *(_QWORD *)&v308.left = 0LL;
  LODWORD(v80) = ScaleCursorShape(
                   &v308,
                   v79,
                   CurrentOrientation,
                   a3,
                   v77,
                   v70,
                   (const struct _DXGK_DRIVERCAPS *)(v13 + 1992),
                   &v287[1]);
  if ( (int)v80 < 0 )
    goto LABEL_241;
LABEL_91:
  v81 = v271;
  if ( v287[1] )
  {
    if ( v271 != D3DKMDT_VPPR_IDENTITY && !v270 )
    {
      RotateCursorShape(v77, v70, v271, (const struct _DXGK_DRIVERCAPS *)(v13 + 1992));
      goto LABEL_95;
    }
LABEL_94:
    v82 = (void *)*((_QWORD *)this + 101);
    v70->Flags.Value = v77->Flags.Value;
    *((_DWORD *)this + 197) = v77->Width;
    *((_DWORD *)this + 198) = v77->Height;
    *((_DWORD *)this + 199) = v77->Pitch;
    memmove(v82, v77->pPixels, v77->Pitch * v77->Height * ((v77->Flags.Value & 1) + 1));
    *((_DWORD *)this + 204) = v77->XHot;
    *((_DWORD *)this + 205) = v77->YHot;
    goto LABEL_95;
  }
  if ( v271 == D3DKMDT_VPPR_IDENTITY || v270 )
  {
    v77 = a3;
    goto LABEL_94;
  }
  RotateCursorShape(a3, v70, v271, (const struct _DXGK_DRIVERCAPS *)(v13 + 1992));
LABEL_95:
  v83 = *((_DWORD *)v78 + 9) - *((_DWORD *)v78 + 7);
  v84 = *((_DWORD *)this + 165) - *((_DWORD *)this + 163);
  v85 = *((_DWORD *)this + 169);
  v86 = *((_DWORD *)this + 168);
  v272 = *((_DWORD *)this + 166) - *((_DWORD *)this + 164);
  v87 = *((_DWORD *)v78 + 8) - *((_DWORD *)v78 + 6);
  v278 = v85;
  v285 = v86;
  v295 = *(_OWORD *)((char *)this + 652);
  v274 = v84;
  if ( *((_BYTE *)this + 668) )
  {
    v84 = v86;
    v274 = v86;
    v90 = (unsigned int)v85;
    v272 = v85;
    v89 = 0;
    LODWORD(v295) = 0;
    v88 = 0;
    v294 = 0;
  }
  else
  {
    v88 = DWORD1(v295);
    v89 = v295;
    v90 = (unsigned int)v272;
    v278 = HIDWORD(v295);
    v285 = DWORD2(v295);
    v294 = DWORD1(v295);
  }
  if ( ((v81 - 1) & 0xFFFFFFFD) != 0 )
  {
    v91 = (int)v90 * v288->X / v87;
    v92 = v84 * v288->Y;
LABEL_251:
    v93 = (unsigned int)(v92 >> 31);
    LODWORD(v93) = v92 % v83;
    v94 = v92 / v83;
    goto LABEL_102;
  }
  v90 = (unsigned int)(v84 * v288->X);
  if ( v87 == 1280 )
    v91 = (int)v90 / 1280;
  else
    v91 = (int)v90 / v87;
  v92 = v272 * v288->Y;
  if ( v83 != 1024 )
    goto LABEL_251;
  v93 = (v92 >> 31) & 0x3FF;
  v94 = v92 / 1024;
LABEL_102:
  if ( v270 )
  {
    v315.X = v91 + v89;
    v230 = v94 + v88;
LABEL_350:
    v315.Y = v230;
    goto LABEL_112;
  }
  if ( v81 < 2 )
    goto LABEL_104;
  if ( v81 == 2 )
  {
    v95 = v274;
    v96 = v94 + v89;
    v232 = v88 - *((_DWORD *)this + 198) - v91;
    v98 = v272;
    v97 = v272 + v232;
    goto LABEL_108;
  }
  v90 = (unsigned int)(v81 - 3);
  if ( v81 == 3 )
  {
    v95 = v274;
    v231 = v89 - *((_DWORD *)this + 197) - v91;
    v98 = v272;
    v96 = v274 + v231;
    v97 = v272 + v88 - *((_DWORD *)this + 198) - v94;
    goto LABEL_108;
  }
  if ( v81 == 4 )
  {
    v95 = v274;
    v97 = v91 + v88;
    v96 = v274 + v89 - *((_DWORD *)this + 197) - v94;
  }
  else
  {
LABEL_104:
    if ( v81 != 1 )
    {
      v233 = WdLogNewEntry5_WdAssertion(v90, v93);
      *(_QWORD *)(v233 + 24) = 686LL;
      WdLogEvent5_WdAssertion(v233);
      v88 = v294;
      v89 = v295;
    }
    v95 = v274;
    v96 = v91 + v89;
    v97 = v94 + v88;
  }
  v98 = v272;
LABEL_108:
  v99 = v96 + *((_DWORD *)this + 197);
  v315.Y = v97;
  v315.X = v96;
  if ( v99 < v89 || v96 > v285 || v97 + *((_DWORD *)this + 198) < v88 || v97 > v278 )
  {
    v315.X = v89 + v95 / 2;
    v230 = v88 + v98 / 2;
    goto LABEL_350;
  }
LABEL_112:
  FillClipParams(v70, this, &v315, (struct CURSOR_CLIP_PARAMS *)&v310);
  if ( HIDWORD(v311) )
  {
    ClippedCursor = DISPLAY_SOURCE::GetClippedCursor(this, 1);
    v235 = ClippedCursor;
    if ( !ClippedCursor->pPixels )
    {
      LODWORD(v80) = -1073741801;
      goto LABEL_241;
    }
    ClipCurrentCursor(v70, ClippedCursor, (struct CURSOR_CLIP_PARAMS *)&v310);
    v235->VidPnSourceId = *((_DWORD *)this + 4);
    LODWORD(v80) = ADAPTER_DISPLAY::DdiSetPointerShape(*(ADAPTER_DISPLAY **)(v13 + 2696), v235);
    if ( (int)v80 < 0 )
      goto LABEL_241;
    *((_BYTE *)this + 726) = 1;
  }
  else
  {
    *((_DWORD *)this + 200) = *((_DWORD *)this + 4);
    v102 = *(_QWORD *)(v13 + 2696);
    v302 = -1;
    v303 = 0LL;
    if ( (qword_1C00B09B0 & 2) != 0 )
    {
      v304 = 1;
      v302 = 5018;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v100, &EventProfilerEnter, v101, 5018);
    }
    else
    {
      v304 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v302, 5018LL);
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v102 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v102 + 16) + 4364LL));
    CurrentIrql = KeGetCurrentIrql();
    v105 = 0LL;
    if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v104, v103), (v105 = Current) != 0LL) )
      v275 = *((_DWORD *)Current + 8);
    else
      v275 = 0;
    DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
      (DXGVALIDATIONPROCESSATTACH *)v340,
      *(struct DXGADAPTER **)(v102 + 16));
    v80 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_SETPOINTERSHAPE *))(*(_QWORD *)(v102 + 16) + 472LL))(
            *(_QWORD *)(*(_QWORD *)(v102 + 16) + 272LL),
            v70);
    if ( v340[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( CurrentIrql != KeGetCurrentIrql() )
    {
      v236 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v108, v107);
      v236[3] = 275LL;
      v236[4] = 16LL;
      v236[5] = v102;
      v236[6] = CurrentIrql;
      v237 = KeGetCurrentIrql();
      v236[7] = v237;
      WdLogEvent5_WdCriticalError(v236);
    }
    if ( v105 && *((_DWORD *)v105 + 8) != v275 )
    {
      v238 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v108, v107);
      v238[3] = 275LL;
      v238[4] = 38LL;
      v238[5] = *((int *)v105 + 8);
      v238[6] = v275;
      v238[7] = 0LL;
      WdLogEvent5_WdCriticalError(v238);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v102 + 16) + 4364LL));
    v111 = (_QWORD *)WdLogNewEntry5_WdTrace(v108, v107, v109, v110);
    v111[3] = v80;
    v112 = *(_QWORD *)(*(_QWORD *)(v102 + 16) + 272LL);
    v111[4] = v112;
    v111[5] = v70->Flags.Value;
    v111[6] = *((unsigned int *)this + 197);
    v113 = *((unsigned int *)this + 198);
    v111[7] = v113;
    if ( (_DWORD)v80 && (_DWORD)v80 != -1073741801 && (_DWORD)v80 != -1073741637 )
    {
      v239 = WdLogNewEntry5_WdError(v113, v112);
      *(_QWORD *)(v239 + 24) = v80;
      WdLogEvent5_WdError(v239);
    }
    DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v102 + 16));
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v302, v114);
    if ( v304 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v115, &EventProfilerExit, v116, v302);
    if ( (int)v80 < 0 )
      goto LABEL_241;
    v117 = this;
    *((_BYTE *)this + 726) = 0;
  }
LABEL_129:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v269) = v315.Flags.0;
    LODWORD(v268) = v315.Y;
    LODWORD(v267) = v315.X;
    LODWORD(Timeout) = v315.VidPnSourceId;
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)v117, &EventSetPointerPosition, v116, v290, Timeout, v267, v268, v269);
  }
  v118 = *(_QWORD *)(v13 + 2696);
  v305 = -1;
  v306 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v307 = 1;
    v305 = 5019;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)v117, &EventProfilerEnter, v116, 5019);
  }
  else
  {
    v307 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v305, 5019LL);
  DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v118 + 16), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v118 + 16) + 4364LL));
  v280 = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( v280 >= 2u )
    goto LABEL_253;
  v122 = KeGetCurrentThread();
  if ( !v122 )
  {
    v240 = WdLogNewEntry5_WdAssertion(v120, v119);
    *(_QWORD *)(v240 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v240);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v120, v119);
  CurrentProcess = PsGetCurrentProcess(v125, v124);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(v122) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v128 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v128 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v241 = PsGetCurrentProcess(v130, v129),
         ProcessSessionId = PsGetProcessSessionIdEx(v241),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(v122)) != 0
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
    v132 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_148;
  }
LABEL_253:
  v132 = 0;
LABEL_148:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v342,
    *(struct DXGADAPTER **)(v118 + 16));
  v80 = (*(int (__fastcall **)(_QWORD, _DXGKARG_SETPOINTERPOSITION *))(*(_QWORD *)(v118 + 16) + 464LL))(
          *(_QWORD *)(*(_QWORD *)(v118 + 16) + 272LL),
          &v315);
  if ( v342[0] )
    KeUnstackDetachProcess(&v343);
  if ( v280 != KeGetCurrentIrql() )
  {
    v244 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v134, v133);
    v244[3] = 275LL;
    v244[4] = 16LL;
    v244[5] = v118;
    v244[6] = v280;
    v245 = KeGetCurrentIrql();
    v244[7] = v245;
    WdLogEvent5_WdCriticalError(v244);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v132 )
  {
    v246 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v134, v133);
    v246[3] = 275LL;
    v246[4] = 38LL;
    v246[5] = *((int *)ThreadProperty + 8);
    v246[6] = v132;
    v246[7] = 0LL;
    WdLogEvent5_WdCriticalError(v246);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v118 + 16) + 4364LL));
  v137 = (_QWORD *)WdLogNewEntry5_WdTrace(v134, v133, v135, v136);
  v137[3] = v80;
  v138 = *(_QWORD *)(*(_QWORD *)(v118 + 16) + 272LL);
  v137[4] = v138;
  v137[5] = *(_BYTE *)&v315.Flags.0 & 1;
  v137[6] = v315.X;
  Y = v315.Y;
  v137[7] = v315.Y;
  if ( (_DWORD)v80 )
  {
    v247 = WdLogNewEntry5_WdError(Y, v138);
    *(_QWORD *)(v247 + 24) = v80;
    WdLogEvent5_WdError(v247);
  }
  DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v118 + 16));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v305, v140);
  if ( v307 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v141, &EventProfilerExit, v142, v305);
  if ( (int)v80 < 0 )
    goto LABEL_241;
  v143 = (struct SESSION_VIEW *)*((_QWORD *)v301 + 6);
  if ( v143 == (struct SESSION_VIEW *)((char *)v301 + 48) )
    v144 = 0LL;
  else
    v144 = (struct SESSION_VIEW *)((char *)v143 - 56);
  v145 = this;
  if ( this == v144 )
    v276 = 1;
  v146 = *(_QWORD *)(v13 + 2696);
  VidPnSourceId = v315.VidPnSourceId;
  v148 = *(_BYTE *)&v315.Flags.0 & 1;
  Width = (unsigned int)v288->X;
  v149 = v315.Y;
  X = v315.X;
  v151 = v288->Y;
  v281 = v288->X;
  v286 = v315.Y;
  LODWORD(v295) = v315.X;
  if ( v315.VidPnSourceId >= *(_DWORD *)(v146 + 80) )
  {
    v248 = WdLogNewEntry5_WdAssertion(v144, Width);
    *(_QWORD *)(v248 + 24) = 5753LL;
    WdLogEvent5_WdAssertion(v248);
    Width = v281;
    v149 = v286;
    X = v295;
    v145 = this;
  }
  v152 = 3968 * VidPnSourceId;
  *(_BYTE *)(*(_QWORD *)(v146 + 112) + 3968 * VidPnSourceId + 725) = v148;
  if ( v148 )
  {
    *(_DWORD *)(*(_QWORD *)(v146 + 112) + v152 + 728) = X;
    *(_DWORD *)(*(_QWORD *)(v146 + 112) + v152 + 732) = v149;
    *(_DWORD *)(*(_QWORD *)(v146 + 112) + v152 + 680) = Width;
    *(_DWORD *)(*(_QWORD *)(v146 + 112) + v152 + 684) = v151;
  }
  if ( !a8 && *(_DWORD *)(v13 + 1872) >= 0x7000u )
  {
    v249 = DISPLAY_SOURCE::GetPristineCursor(v145, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v250 = v249;
    pPixels = (void *)v249->pPixels;
    if ( !pPixels )
    {
      v180 = -1073741801;
      goto LABEL_242;
    }
    v249->Flags.Value = a3->Flags.Value;
    v249->Width = a3->Width;
    v249->Height = a3->Height;
    v249->Pitch = a3->Pitch;
    memmove(pPixels, a3->pPixels, a3->Pitch * a3->Height * ((a3->Flags.Value & 1) + 1));
    v250->XHot = a3->XHot;
    v250->YHot = a3->YHot;
  }
  if ( !v276 )
    goto LABEL_219;
  if ( !v292 )
  {
    v252 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v152, Width);
    v252[5] = &v291;
    v252[3] = 275LL;
    v252[4] = 4LL;
    v252[6] = 0LL;
    v252[7] = 0LL;
    WdLogEvent5_WdCriticalError(v252);
  }
  v153 = v291;
  v292 = 0;
  if ( *(struct _KTHREAD **)(v291 + 16) != KeGetCurrentThread() )
  {
    v253 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v152, Width);
    v253[3] = 275LL;
    v253[4] = 4LL;
    v253[5] = v153;
    v253[6] = 0LL;
    v253[7] = 0LL;
    WdLogEvent5_WdCriticalError(v253);
  }
  v154 = *(_DWORD *)(v153 + 24);
  if ( v154 <= 0 )
  {
    v254 = WdLogNewEntry5_WdAssertion(v152, Width);
    *(_QWORD *)(v254 + 24) = 705LL;
    WdLogEvent5_WdAssertion(v254);
    v154 = *(_DWORD *)(v153 + 24);
  }
  v155 = v154 - 1;
  *(_DWORD *)(v153 + 24) = v155;
  if ( !v155 )
  {
    *(_QWORD *)(v153 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v153, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v332 != v337 )
    COREACCESS::Release((COREACCESS *)v330);
  if ( !v338 )
  {
    v255 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v157, v156);
    v255[5] = v335;
    v255[3] = 275LL;
    v255[4] = 4LL;
    v255[6] = 0LL;
    v255[7] = 0LL;
    WdLogEvent5_WdCriticalError(v255);
  }
  v338 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v337 + 23) )
    DXGADAPTER::ReleaseCoreResource(v337, v339);
  v339 = 0LL;
  v329 = 0;
  v158 = v288->VidPnSourceId;
  v298 = 0LL;
  v289 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v13, (unsigned int)v158, &v298, &v309, &v289, &v314, 0);
  v162 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v256 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160);
    v256[3] = v13;
    v256[4] = v158;
    v256[5] = v162;
    WdLogEvent5_WdError(v256);
    v260 = WdLogNewEntry5_WdWarning(v258, v257, v259);
    *(_QWORD *)(v260 + 24) = v13;
    *(_QWORD *)(v260 + 32) = v162;
    WdLogEvent5_WdWarning(v260);
    goto LABEL_219;
  }
  v163 = v289;
  if ( !v298 || !v289 )
  {
    v261 = WdLogNewEntry5_WdAssertion(v161, v160);
    *(_QWORD *)(v261 + 24) = 3143LL;
    WdLogEvent5_WdAssertion(v261);
  }
  v164 = *((_QWORD *)v163 + 337);
  v312[1] = v163;
  v165 = *(_QWORD *)(v164 + 104);
  _InterlockedIncrement64((volatile signed __int64 *)v163 + 3);
  v312[0] = -1LL;
  KeEnterCriticalRegion();
  v166 = v289;
  ExAcquirePushLockSharedEx((char *)v289 + 136, 0LL);
  v313 = 1;
  v317 = 0;
  v320 = v166;
  v321 = 0;
  v322 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v163 + 3);
  v325 = v289;
  v319 = -1LL;
  v326 = 0;
  v327 = 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v163 + 3);
  v324 = -1LL;
  v168 = _InterlockedExchangeAdd64((volatile signed __int64 *)v298 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v168 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v298 + 2), v298);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v163 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v289 + 2), v289);
  if ( v326 )
  {
    v262 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v168, v167);
    v262[5] = v323;
    v262[3] = 275LL;
    v262[4] = 4LL;
    v262[6] = 0LL;
    v262[7] = 0LL;
    WdLogEvent5_WdCriticalError(v262);
  }
  v169 = v325;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v325 + 23) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v325 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v170, &EventBlockThread, v171, 72);
      KeWaitForSingleObject((char *)v325 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(v325, 0LL);
    v169 = v325;
  }
  v327 = 0LL;
  v326 = 1;
  if ( *((_DWORD *)v169 + 50) == 1 )
  {
    if ( v320 == v325
      || (COREACCESS::AcquireShared((COREACCESS *)v318, 0LL),
          v169 = (struct DXGADAPTER *)*((unsigned int *)v320 + 50),
          (_DWORD)v169 == 1) )
    {
      v317 = 1;
      if ( (unsigned int)v158 < *(_DWORD *)(v165 + 52) )
      {
        _lambda_103e920f2f8a7257353075347c127b30_::_lambda_invoker_cdecl_(
          v165,
          (unsigned int)OUTPUTDUPL_MGR::ProcessPointerShapeChange,
          (_DWORD)v288,
          (_DWORD)a3,
          v297,
          v296);
        if ( v317 )
        {
          if ( v320 != v325 )
            COREACCESS::Release((COREACCESS *)v318);
          if ( !v326 )
          {
            v265 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v173, v172);
            v265[5] = v323;
            v265[3] = 275LL;
            v265[4] = 4LL;
            v265[6] = 0LL;
            v265[7] = 0LL;
            WdLogEvent5_WdCriticalError(v265);
          }
          v326 = 0;
          v174 = v325;
          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v325 + 23) )
          {
            DXGADAPTER::ReleaseCoreResource(v325, v327);
            v174 = v325;
          }
          v327 = 0LL;
          v317 = 0;
        }
        else
        {
          v174 = v325;
        }
        if ( v174 )
        {
          if ( v326 )
          {
            COREACCESS::Release((COREACCESS *)v323);
            v174 = v325;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v174 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v174 + 2), v174);
        }
        v175 = v320;
        if ( v320 )
        {
          if ( v321 )
          {
            COREACCESS::Release((COREACCESS *)v318);
            v175 = v320;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v175 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v175 + 2), v175);
        }
        ExReleasePushLockSharedEx((char *)v166 + 136, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v163 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v289 + 2), v289);
        goto LABEL_219;
      }
      v264 = WdLogNewEntry5_WdError(v169, v167);
      *(_QWORD *)(v264 + 24) = v158;
      WdLogEvent5_WdError(v264);
      goto LABEL_383;
    }
    COREACCESS::Release((COREACCESS *)v318);
  }
  COREACCESS::Release((COREACCESS *)v323);
LABEL_383:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v316, v263);
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v312);
LABEL_219:
  if ( v292 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v291, Width);
LABEL_221:
  if ( v329 )
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v328);
  v176 = v337;
  if ( v337 )
  {
    if ( v338 )
    {
      COREACCESS::Release((COREACCESS *)v335);
      v176 = v337;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v176 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v176 + 2), v176);
  }
  v177 = v332;
  if ( v332 )
  {
    if ( v333 )
    {
      COREACCESS::Release((COREACCESS *)v330);
      v177 = v332;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v177 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v177 + 2), v177);
  }
  return v14;
}
