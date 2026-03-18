/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0196940
 * Callers:
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C031999C (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0319C90 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C000C040 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C000EE78 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000EEA8 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0013DA8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002F03C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer @ 0x1C002F0B6 (McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C004A8A0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0062FBC (DxgkGetAdapterMiracastInfo.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C016E478 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C0178780 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C017D4D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0195B48 (-GetAllocationsForAllPlanes@ADAPTER_DISPLAY@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01965F0 (-SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01CE260 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C01D9004 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@IW4_D3DDDIFORMAT@@E@Z @ 0x1C01DB908 (-CreateNewPlaneConfig@DISPLAY_SOURCE@@AEAAXIPEBVDXGALLOCATION@@EIPEBUtagRECT@@11W4_D3DDDI_ROTATI.c)
 *     ?CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z @ 0x1C02BF8FC (-CreateNewPostCompositionConfig@DISPLAY_SOURCE@@AEAAXEPEBUtagRECT@@0@Z.c)
 *     ?PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z @ 0x1C02C1664 (-PostCompositionConfigsMatch@@YAEPEAU_POST_COMPOSITION_CONFIG@@EPEBUtagRECT@@1@Z.c)
 *     ?SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z @ 0x1C02C2904 (-SetPostCompositionConfigUnsafe@DISPLAY_SOURCE@@QEAAXEPEBUtagRECT@@0@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C03193E0 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0319550 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C03197F0 (InverseXformMPORect3.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C0319F98 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  DXGCONTEXT *v5; // r13
  unsigned int v6; // r15d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 VidPnSourceId; // r10
  __int64 v12; // r9
  __int64 PresentPlaneCount; // rcx
  __int64 v14; // r14
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 Value; // edx
  unsigned int v16; // edi
  DXGALLOCATIONREFERENCE *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // r12
  __int64 v29; // r12
  unsigned int v30; // ebx
  unsigned __int8 *v31; // rdi
  int *v32; // r14
  bool v33; // si
  DXGCONTEXT *v34; // r13
  __int64 v35; // rbx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rdx
  char v42; // r14
  __int64 v43; // rbx
  LONG *v44; // rcx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v45; // r12
  LONG v46; // r8d
  LONG v47; // r10d
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *pPostComposition; // rdx
  enum D3DDDI_COLOR_SPACE_TYPE v49; // eax
  unsigned __int8 v50; // dl
  unsigned __int8 v51; // r8
  D3DDDI_FLIPINTERVAL_TYPE v52; // ebx
  unsigned __int8 v53; // r9
  unsigned __int8 v54; // r10
  unsigned __int8 v55; // bl
  enum _D3DDDIFORMAT v56; // r8d
  unsigned int v57; // r11d
  __int64 v58; // rdi
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r14
  DXGALLOCATIONREFERENCE *v61; // r8
  unsigned int v62; // r12d
  __int64 v63; // r10
  __int64 v64; // rbx
  struct _EX_RUNDOWN_REF **v65; // r14
  unsigned int v66; // edi
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // r8
  int v71; // ecx
  struct _EX_RUNDOWN_REF *v72; // rdx
  struct DXGTHREAD *DxgThread; // rax
  bool v74; // zf
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v84; // rbx
  __int64 v85; // rdi
  __int64 v86; // r13
  int v87; // r12d
  __int64 v88; // rcx
  __int64 v89; // r8
  KIRQL CurrentIrql; // al
  struct _DXGKARG_PRESENT *v91; // r14
  struct DXGTHREAD *v92; // rbx
  int v93; // esi
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r14
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  ULONGLONG Alignment; // rbx
  int v101; // ecx
  int v102; // edx
  int v103; // eax
  int v104; // r14d
  int v105; // esi
  int v106; // eax
  int v107; // ecx
  LONG v108; // r11d
  LONG v109; // edi
  int v110; // edx
  int v111; // r9d
  LONG v112; // r8d
  LONG v113; // r10d
  int v114; // ecx
  unsigned int v115; // r11d
  char v116; // r10
  __int64 v117; // r9
  _DWORD *v118; // rdx
  int v119; // r8d
  __int64 v120; // rax
  enum _D3DDDI_ROTATION *v121; // rbx
  _DWORD *v122; // r9
  D3DDDI_HDR_METADATA_TYPE v123; // esi
  __int64 v124; // r8
  unsigned int v125; // edi
  unsigned int v126; // r14d
  unsigned int v127; // r12d
  unsigned int v128; // r13d
  __int64 v129; // rax
  __int64 v130; // rdx
  int v131; // ecx
  __int16 v132; // ax
  __int64 v133; // rdi
  PSLIST_HEADER v134; // rsi
  _DWORD *v135; // rbx
  __int64 v136; // rax
  int v137; // edx
  unsigned int v138; // eax
  __int64 v139; // rax
  int v140; // r8d
  int v141; // edx
  int v142; // ecx
  int v143; // edx
  unsigned int v144; // eax
  int v145; // ecx
  int v146; // ecx
  int v147; // ecx
  int v148; // eax
  int v149; // ecx
  int v150; // ecx
  int v151; // ecx
  int v152; // ecx
  int v153; // ecx
  int v154; // edx
  UINT Duration; // eax
  int hAdapter; // eax
  unsigned int v157; // r9d
  int v158; // r8d
  __int64 v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rcx
  int v162; // eax
  bool v163; // si
  __int64 v164; // rdi
  int v165; // esi
  __int64 v166; // rsi
  __int64 v167; // rdi
  __int64 v168; // rcx
  unsigned int v169; // eax
  unsigned int v170; // ecx
  __int64 v171; // rax
  __int64 v172; // r14
  __int64 v173; // rsi
  __int64 v174; // rdi
  __int64 v175; // rax
  DXGALLOCATIONREFERENCE *v176; // r12
  int v177; // r13d
  __int64 v178; // rcx
  __int64 v179; // rdi
  __int64 v180; // rcx
  __int64 v181; // r8
  int v182; // eax
  const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v183; // r8
  unsigned int v184; // ecx
  __int64 v185; // rsi
  int v186; // r14d
  DXGALLOCATIONREFERENCE *v187; // rbx
  D3DKMT_MULTIPLANE_OVERLAY3 *v188; // rdx
  __int64 LayerIndex; // r10
  __int64 v190; // rdi
  unsigned int *p_Flags; // rax
  const struct DXGALLOCATION *v192; // rdx
  const struct tagRECT *v193; // r8
  unsigned int v194; // r11d
  const struct tagRECT *v195; // r12
  unsigned int v196; // r9d
  const struct tagRECT *v197; // r13
  __int64 v198; // rdi
  __int64 v199; // rdi
  unsigned int v200; // ecx
  enum D3DDDI_COLOR_SPACE_TYPE v201; // eax
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v202; // r8
  __int64 v203; // rax
  int v204; // eax
  __int64 v205; // rdi
  int v206; // eax
  int v207; // eax
  __int64 v208; // r14
  __int64 v209; // rsi
  __int64 v210; // r12
  __int64 v211; // rcx
  __int64 v212; // r8
  char v213; // r12
  int v214; // eax
  __int64 v215; // rsi
  __int64 v216; // rdi
  __int64 v217; // rcx
  __int64 v218; // r8
  int v219; // eax
  __int64 v220; // r9
  __int64 v221; // rcx
  char v222; // al
  __int64 v223; // rdi
  int v224; // eax
  int v225; // eax
  __int64 v226; // r9
  __int64 v227; // rcx
  DXGALLOCATIONREFERENCE *v228; // rcx
  int v229; // eax
  __int64 v230; // rdx
  const struct DXGALLOCATION *v232; // rdx
  enum _D3DDDIFORMAT v233; // ecx
  __int64 v234; // rax
  int v235; // esi
  __int64 v236; // rdx
  struct _EX_RUNDOWN_REF *v237; // rdx
  int v238; // r9d
  __int64 v239; // rdi
  __int64 (__fastcall *v240)(__int64, __int64, __int64, __int64); // rax
  __int64 v241; // rdx
  __int64 v242; // r8
  __int64 v243; // rcx
  int v244; // eax
  unsigned int v245; // ebx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  __int64 v247; // r14
  D3DKMT_MULTIPLANE_OVERLAY3 *v248; // rsi
  D3DKMT_HANDLE v249; // ebx
  __int64 v250; // rcx
  __int64 v251; // r8
  int v252; // r9d
  __int64 v253; // rax
  __int64 v254; // r8
  int v255; // ecx
  struct _EX_RUNDOWN_REF *v256; // rdx
  const wchar_t *v257; // r9
  __int64 v258; // rbx
  __int64 v259; // rcx
  int v260; // ecx
  __int64 v261; // rax
  bool v262; // cf
  unsigned __int64 v263; // rax
  __int64 v264; // rax
  int v265; // eax
  int v266; // r9d
  __int64 v267; // rcx
  const wchar_t *v268; // r9
  unsigned __int64 Rotation; // r8
  int left; // ecx
  LONG right; // r9d
  LONG bottom; // eax
  __m128i SrcRect; // xmm0
  int v274; // r11d
  UINT v275; // eax
  D3DKMT_MULTIPLANE_OVERLAY3 **v276; // rax
  int v277; // r9d
  unsigned int *v278; // rax
  __int64 v279; // rcx
  __int64 v280; // r8
  struct DXGTHREAD *v281; // rax
  KIRQL v282; // al
  _DWORD *v283; // rdx
  int v284; // edx
  int v285; // r9d
  int v286; // ecx
  int v287; // r8d
  int v288; // ecx
  ULONGLONG v289; // rax
  __int64 v290; // rdx
  __int64 v291; // r9
  unsigned int *v292; // rax
  __int64 v293; // rcx
  __int64 v294; // r8
  unsigned int HDRMetaDataType; // ecx
  unsigned int v296; // ecx
  _OWORD *pHDRMetaData; // rax
  _QWORD *v298; // rax
  int v299; // eax
  char *v300; // rdx
  __int64 v301; // r8
  char *v302; // rdx
  __int64 v303; // rdx
  ADAPTER_DISPLAY *v304; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v306; // rax
  __int64 v307; // rcx
  __int64 v308; // r8
  __int64 v309; // r9
  int v310; // eax
  int v311; // r9d
  struct _POST_COMPOSITION_CONFIG *v312; // rcx
  unsigned __int8 v313; // dl
  int v314; // r9d
  int v315; // eax
  int v316; // r9d
  __int64 v317; // rax
  _DWORD *v318; // rdi
  __int64 v319; // rdx
  __int64 v320; // rcx
  __int64 v321; // r8
  __int64 v322; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v324; // r9
  __int64 *v325; // rax
  struct _DXGKARG_PRESENT *v326; // [rsp+20h] [rbp-130h]
  __int64 v327; // [rsp+30h] [rbp-120h]
  __int64 v328; // [rsp+38h] [rbp-118h]
  __int64 v329; // [rsp+40h] [rbp-110h]
  int v330; // [rsp+B0h] [rbp-A0h]
  enum D3DDDI_COLOR_SPACE_TYPE v331; // [rsp+D0h] [rbp-80h]
  enum D3DDDI_COLOR_SPACE_TYPE v332; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v333; // [rsp+D4h] [rbp-7Ch]
  unsigned __int8 v334; // [rsp+D5h] [rbp-7Bh]
  unsigned __int8 v335; // [rsp+D6h] [rbp-7Ah]
  char v336; // [rsp+D7h] [rbp-79h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v337; // [rsp+D8h] [rbp-78h]
  char v338; // [rsp+DCh] [rbp-74h]
  char v339; // [rsp+DDh] [rbp-73h]
  unsigned int v340; // [rsp+E0h] [rbp-70h]
  struct DXGALLOCATION *v341; // [rsp+E0h] [rbp-70h]
  LONG v342; // [rsp+E8h] [rbp-68h]
  UINT v343; // [rsp+E8h] [rbp-68h]
  PSLIST_HEADER SListHead; // [rsp+F0h] [rbp-60h]
  PSLIST_HEADER SListHeada; // [rsp+F0h] [rbp-60h]
  enum _D3DDDI_ROTATION v346; // [rsp+F8h] [rbp-58h]
  enum _D3DDDI_ROTATION v347; // [rsp+F8h] [rbp-58h]
  enum _D3DDDI_ROTATION v348; // [rsp+F8h] [rbp-58h]
  int v349; // [rsp+FCh] [rbp-54h]
  int v350; // [rsp+FCh] [rbp-54h]
  LONG v351; // [rsp+100h] [rbp-50h]
  int v352; // [rsp+100h] [rbp-50h]
  int v353; // [rsp+104h] [rbp-4Ch]
  unsigned int v354; // [rsp+104h] [rbp-4Ch]
  LONG v355; // [rsp+108h] [rbp-48h]
  unsigned int v356; // [rsp+108h] [rbp-48h]
  int v357; // [rsp+10Ch] [rbp-44h]
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v359; // [rsp+118h] [rbp-38h]
  enum D3DKMT_MULTIPLANE_OVERLAY_BLEND v360; // [rsp+118h] [rbp-38h]
  int v361; // [rsp+11Ch] [rbp-34h]
  __int64 v363; // [rsp+128h] [rbp-28h]
  DXGALLOCATIONREFERENCE *v365; // [rsp+130h] [rbp-20h]
  __int64 v366; // [rsp+138h] [rbp-18h]
  __int64 v367; // [rsp+138h] [rbp-18h]
  PSLIST_ENTRY v368; // [rsp+138h] [rbp-18h]
  enum _D3DDDIFORMAT v369; // [rsp+140h] [rbp-10h]
  enum _D3DDDIFORMAT v370; // [rsp+140h] [rbp-10h]
  int v371; // [rsp+148h] [rbp-8h]
  unsigned __int64 v372; // [rsp+150h] [rbp+0h]
  const struct tagRECT *v373; // [rsp+150h] [rbp+0h]
  __int64 v374; // [rsp+160h] [rbp+10h] BYREF
  char v375; // [rsp+168h] [rbp+18h]
  __int64 v376; // [rsp+170h] [rbp+20h] BYREF
  char v377; // [rsp+178h] [rbp+28h]
  __int64 v378; // [rsp+180h] [rbp+30h]
  char v379; // [rsp+188h] [rbp+38h]
  struct _EX_RUNDOWN_REF *v380; // [rsp+190h] [rbp+40h] BYREF
  __int64 v381; // [rsp+198h] [rbp+48h]
  int v382; // [rsp+1A0h] [rbp+50h] BYREF
  __int64 v383; // [rsp+1A8h] [rbp+58h]
  char v384; // [rsp+1B0h] [rbp+60h]
  struct DXGTHREAD *v385; // [rsp+1B8h] [rbp+68h] BYREF
  struct DXGTHREAD *v386; // [rsp+1C0h] [rbp+70h] BYREF
  struct _EX_RUNDOWN_REF *v387; // [rsp+1C8h] [rbp+78h] BYREF
  struct _EX_RUNDOWN_REF *v388; // [rsp+1D0h] [rbp+80h] BYREF
  struct _EX_RUNDOWN_REF *v389; // [rsp+1D8h] [rbp+88h] BYREF
  struct _EX_RUNDOWN_REF *v390; // [rsp+1E0h] [rbp+90h] BYREF
  __int128 v391; // [rsp+1E8h] [rbp+98h] BYREF
  __int128 v392; // [rsp+1F8h] [rbp+A8h]
  __int128 v393; // [rsp+208h] [rbp+B8h]
  tagRECT v394; // [rsp+218h] [rbp+C8h] BYREF
  struct DXGALLOCATION *v395; // [rsp+228h] [rbp+D8h]
  struct DXGCONTEXT **v396; // [rsp+230h] [rbp+E0h]
  struct tagRECT v397; // [rsp+238h] [rbp+E8h] BYREF
  __int128 v398; // [rsp+248h] [rbp+F8h] BYREF
  char v399[8]; // [rsp+258h] [rbp+108h] BYREF
  DXGPUSHLOCK *v400; // [rsp+260h] [rbp+110h]
  int v401; // [rsp+268h] [rbp+118h]
  __int128 v402; // [rsp+288h] [rbp+138h] BYREF
  __int128 v403; // [rsp+298h] [rbp+148h]
  DXGALLOCATIONREFERENCE *v404; // [rsp+2A8h] [rbp+158h]
  _BYTE v405[32]; // [rsp+2B0h] [rbp+160h] BYREF
  unsigned int v406; // [rsp+2D0h] [rbp+180h]
  char v407[8]; // [rsp+2D8h] [rbp+188h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+2E0h] [rbp+190h] BYREF
  struct _DXGKARG_PRESENT v409; // [rsp+310h] [rbp+1C0h] BYREF
  _D3DKMT_PRESENT v410; // [rsp+3C0h] [rbp+270h] BYREF
  enum _D3DDDIFORMAT v411[4]; // [rsp+9A0h] [rbp+850h] BYREF
  __int128 v412; // [rsp+9B0h] [rbp+860h]
  __int64 v413; // [rsp+9C0h] [rbp+870h]
  unsigned __int8 v414[16]; // [rsp+9C8h] [rbp+878h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = this;
  v6 = 0;
  v396 = a4;
  v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v8 + 184)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 168)) )
  {
    WdLogSingleEntry1(1LL, 3163LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3163LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)v5 + 2);
  v10 = v9;
  if ( *(_QWORD *)(v9 + 1848) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) )
  {
    WdLogSingleEntry1(1LL, 3164LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter() == GetRenderAdapter()",
      3164LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v9 = *((_QWORD *)v5 + 2);
    v10 = v9;
  }
  *((_BYTE *)v5 + 442) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v337 = a2->VidPnSourceId;
  v12 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 2632LL);
  PresentPlaneCount = a2->PresentPlaneCount;
  v340 = v12;
  if ( (unsigned int)PresentPlaneCount > (unsigned int)v12 )
  {
    WdLogSingleEntry3(3LL, PresentPlaneCount, v12, -1073741811LL);
    return 3221225485LL;
  }
  v14 = (unsigned int)VidPnSourceId;
  v363 = a2->VidPnSourceId;
  if ( (*(_DWORD *)(v9 + 4 * VidPnSourceId + 1208) & 0x200) == 0 )
  {
    v244 = DXGCONTEXT::CheckDevicePresentSettings(v5, 1, 0, VidPnSourceId);
    v245 = v244;
    if ( v244 >= 0 )
    {
      LODWORD(v58) = -1071775739;
      WdLogSingleEntry3(3LL, -1071775739LL, v5, v14);
      return (unsigned int)v58;
    }
    WdLogSingleEntry3(3LL, v244, v5, v14);
    return v245;
  }
  Value = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 3) != 0 )
  {
    if ( (unsigned int)PresentPlaneCount > 1 )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry2(2LL, v5, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkPresentMultiPlaneOverlay doesn't support Stereo on more than 1 plane. Context 0x%I64x, Returning 0x%I64x",
        (__int64)v5,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v58;
    }
    if ( (a2->Flags.Value & 3) == 3 )
    {
      WdLogSingleEntry1(2LL, 3227LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono and FlipStereo cannot be set together. STATUS_INVALID_PARAMETER",
        3227LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
    if ( (*(_BYTE *)&Value & 6) == 6 )
    {
      WdLogSingleEntry1(2LL, 3233LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"FlipStereoTemporaryMono cannot be used with FlipStereoPreferRight. STATUS_INVALID_PARAMETER",
        3233LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
    ppPresentPlanes = a2->ppPresentPlanes;
    v247 = *(_QWORD *)(v10 + 40);
    v380 = 0LL;
    v248 = *ppPresentPlanes;
    v249 = *(*ppPresentPlanes)->pAllocationList;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v247 + 248, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v252 = *(_DWORD *)(v247 + 272);
        if ( v252 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v250, (const EVENT_DESCRIPTOR *)"g", v251, v252);
      }
      ExAcquirePushLockSharedEx(v247 + 248, 0LL);
    }
    v253 = (v249 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v253 < *(_DWORD *)(v247 + 296) )
    {
      v254 = *(_QWORD *)(v247 + 280);
      v255 = *(_DWORD *)(v254 + 16 * v253 + 8);
      if ( ((v249 >> 25) & 0x60) == (*(_BYTE *)(v254 + 16 * v253 + 8) & 0x60)
        && (v255 & 0x2000) == 0
        && (v255 & 0x1F) != 0 )
      {
        if ( (v255 & 0x1F) == 5 )
        {
          v256 = *(struct _EX_RUNDOWN_REF **)(v254 + 16LL * (unsigned int)v253);
LABEL_392:
          DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v387, v256);
          ExReleasePushLockSharedEx(v247 + 248, 0LL);
          KeLeaveCriticalRegion();
          DXGALLOCATIONREFERENCE::MoveAssign(&v380, &v387);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v387);
          LODWORD(v58) = -1073741811;
          if ( v380 )
          {
            if ( (*(_DWORD *)(v380[6].Count + 4) & 0x1000) != 0 )
            {
              v260 = *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v5 + 2) + 1848LL) + 2792LL),
                                   a2->VidPnSourceId)
                     + 10);
              if ( (v260 & 0x10) != 0 )
              {
                if ( (v260 & 0x20) != 0 || (*(_BYTE *)&a2->Flags.0 & 2) == 0 )
                {
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v380);
                  v14 = v363;
                  v12 = v340;
                  LODWORD(VidPnSourceId) = v363;
                  goto LABEL_9;
                }
                v258 = 3264LL;
                WdLogSingleEntry1(2LL, 3264LL);
                v257 = L"FlipStereoTemporaryMono flag is set but the current display mode does not support it. STATUS_GRAP"
                        "HICS_PRESENT_MODE_CHANGED";
              }
              else
              {
                v258 = 3258LL;
                WdLogSingleEntry1(2LL, 3258LL);
                v257 = L"Stereo flag is set but the current display mode does not support stereo. STATUS_GRAPHICS_PRESENT_MODE_CHANGED";
              }
              LODWORD(v58) = -1071775739;
            }
            else
            {
              v258 = 3251LL;
              WdLogSingleEntry1(2LL, 3251LL);
              v257 = L"FlipStereoTemporaryMono and FlipStereo can only be used with stereo primary allocations. STATUS_INVALID_PARAMETER";
            }
            v5 = 0LL;
            v259 = 0LL;
          }
          else
          {
            WdLogSingleEntry3(2LL, -1073741811LL, v5, *v248->pAllocationList);
            v257 = L"ret = 0x%I64x Context 0x%I64x: Invalid allocation handle for plane 0 specified: 0x%I64x";
            v258 = -1073741811LL;
            v259 = *v248->pAllocationList;
          }
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v257, v258, (__int64)v5, v259, 0LL, 0LL);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v380);
          return (unsigned int)v58;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v256 = 0LL;
    goto LABEL_392;
  }
LABEL_9:
  v406 = 0;
  v16 = a2->ContextCount * v12;
  v17 = 0LL;
  v404 = 0LL;
  if ( v16 <= 4 )
  {
    v17 = (DXGALLOCATIONREFERENCE *)v405;
    v404 = (DXGALLOCATIONREFERENCE *)v405;
    if ( !v16 )
    {
LABEL_15:
      v406 = v16;
      goto LABEL_16;
    }
    v18 = 0LL;
    v19 = v16;
    while ( 1 )
    {
      *(_QWORD *)((char *)v17 + v18) = 0LL;
      v18 += 8LL;
      if ( !--v19 )
        break;
      v17 = v404;
    }
LABEL_14:
    v17 = v404;
    goto LABEL_15;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v16 >= 8 )
  {
    v261 = 8LL * v16;
    if ( !is_mul_ok(v16, 8uLL) )
      v261 = -1LL;
    v262 = __CFADD__(v261, 8LL);
    v263 = v261 + 8;
    if ( v262 )
      v263 = -1LL;
    v264 = operator new[](v263, 0x4B677844u, 256LL, v12);
    if ( v264 )
    {
      v17 = (DXGALLOCATIONREFERENCE *)(v264 + 8);
      *(_QWORD *)v264 = v16;
      `vector constructor iterator'(
        (char *)(v264 + 8),
        8LL,
        v16,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      LODWORD(v12) = v340;
      LODWORD(VidPnSourceId) = v337;
      v404 = v17;
      goto LABEL_15;
    }
    LODWORD(v12) = v340;
    LODWORD(VidPnSourceId) = v337;
    goto LABEL_14;
  }
LABEL_16:
  v20 = *((_QWORD *)v5 + 2);
  v21 = *(_QWORD *)(v20 + 1848);
  if ( v21 == *(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) )
  {
    ADAPTER_DISPLAY::GetAllocationsForAllPlanes(
      *(ADAPTER_DISPLAY **)(v21 + 2792),
      VidPnSourceId,
      (struct _EX_RUNDOWN_REF **)v17,
      v12);
  }
  else
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v399, (struct _KTHREAD **)(v20 + 304), 0);
    DXGPUSHLOCK::AcquireExclusive(v400);
    v237 = *(struct _EX_RUNDOWN_REF **)(v20 + 8 * v14 + 1016);
    v401 = 2;
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v388, v237);
    DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v17, &v388);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v388);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v399);
  }
  v379 = 0;
  v22 = *((_QWORD *)v5 + 2);
  v395 = *(struct DXGALLOCATION **)v404;
  v23 = *(_QWORD *)(*(_QWORD *)(v22 + 1848) + 2792LL);
  v378 = v23 + 608;
  if ( v23 == -608 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v378 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  v24 = v378;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v378 + 24) == KeGetCurrentThread() )
  {
    v265 = *(_DWORD *)(v378 + 32);
    if ( v265 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v265 = *(_DWORD *)(v378 + 32);
    }
    v27 = v265 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v378 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v266 = *(_DWORD *)(v378 + 36);
        if ( v266 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, v266);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v378 + 16));
      ExAcquirePushLockExclusiveEx(v378 + 8, 0LL);
    }
    if ( *(_QWORD *)(v378 + 24) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v378 + 32) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v378 + 24) = KeGetCurrentThread();
    v27 = 1;
  }
  *(_DWORD *)(v24 + 32) = v27;
  v28 = *(_QWORD *)(v23 + 128);
  v379 = 1;
  v29 = 4000 * v14 + v28;
  v381 = 4000 * v14;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(v29 + 8) + 632LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 9453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
      9453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v30 = 0;
  v31 = v414;
  v32 = (int *)(v29 + 1144);
  do
  {
    v33 = 0;
    if ( v30 < *(_DWORD *)(v29 + 3760) )
    {
      v229 = *v32;
      if ( *v32 != -1
        || v32[1] != -1
        && (WdLogSingleEntry1(1LL, 9067LL),
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
              9067LL,
              0LL,
              0LL,
              0LL,
              0LL),
            v229 = *v32,
            *v32 != -1) )
      {
        v230 = 168LL * v30 + v29 + 80LL * v229 + 1152;
        if ( v230 )
          v33 = (*(_BYTE *)(v230 + 8) & 2) != 0;
      }
    }
    *v31 = v33;
    ++v30;
    ++v31;
    v32 += 42;
  }
  while ( v30 < 0xA );
  v34 = this;
  if ( v379 )
  {
    v35 = v378;
    v379 = 0;
    if ( *(struct _KTHREAD **)(v378 + 24) != KeGetCurrentThread() )
      WdLogSingleEntry5(0LL, 275LL, 4LL, v378, 0LL, 0LL);
    v36 = *(_DWORD *)(v378 + 32);
    if ( v36 <= 0 )
    {
      WdLogSingleEntry1(1LL, 516LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
      v36 = *(_DWORD *)(v378 + 32);
    }
    v37 = v36 - 1;
    *(_DWORD *)(v378 + 32) = v37;
    if ( !v37 )
    {
      *(_QWORD *)(v35 + 24) = 0LL;
      ExReleasePushLockExclusiveEx(v35 + 8, 0LL);
    }
    KeLeaveCriticalRegion();
  }
  v413 = 0LL;
  v38 = *((_QWORD *)this + 2);
  *(_OWORD *)v411 = 0LL;
  v412 = 0LL;
  v39 = *(_QWORD *)(v38 + 16);
  v40 = *(_QWORD *)(v39 + 16);
  if ( *(_DWORD *)(v40 + 412) == 1297040209
    && *(int *)(v40 + 2692) <= 1300
    && (v267 = *(_QWORD *)(v40 + 216),
        v402 = 0LL,
        v403 = 0LL,
        DxgkGetAdapterMiracastInfo(v267, (__int64)&v402),
        (BYTE8(v403) & 4) != 0)
    || !*(_BYTE *)(*(_QWORD *)(v39 + 16) + 2628LL)
    || (v41 = *((_QWORD *)this + 2), *(_QWORD *)(v41 + 1848) != *(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL)) )
  {
    v41 = *((_QWORD *)this + 2);
    v42 = 1;
  }
  else
  {
    v42 = 0;
  }
  v338 = v42;
  v43 = *(_QWORD *)(*(_QWORD *)(v41 + 1848) + 2792LL);
  if ( v337 >= *(_DWORD *)(v43 + 96) )
  {
    WdLogSingleEntry1(1LL, 5533LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      5533LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v44 = (LONG *)(*(_QWORD *)(v43 + 128) + v381 + 1008);
  if ( !v44 )
  {
    LODWORD(v58) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, this, v363);
    v329 = 0LL;
    v268 = L"ret = 0x%I64x Context 0x%I64x Failed to obtain display mode, VidPnSourceId 0x%I64x";
    v328 = 0LL;
    v327 = v363;
    goto LABEL_457;
  }
  v45 = a2;
  v46 = *v44;
  v47 = v44[1];
  v342 = v47;
  pPostComposition = a2->pPostComposition;
  v353 = 0;
  v351 = 0;
  v355 = *v44;
  v336 = 0;
  v357 = 0;
  v371 = 0;
  if ( pPostComposition )
  {
    if ( pPostComposition->Flags.Value )
    {
      Rotation = pPostComposition->Flags.Value;
      goto LABEL_541;
    }
    if ( pPostComposition->Rotation != D3DDDI_ROTATION_IDENTITY )
    {
      Rotation = pPostComposition->Rotation;
      goto LABEL_541;
    }
    if ( pPostComposition->SrcRect.left >= pPostComposition->SrcRect.right
      || pPostComposition->SrcRect.top >= pPostComposition->SrcRect.bottom
      || (left = pPostComposition->DstRect.left, right = pPostComposition->DstRect.right, left >= right)
      || (bottom = pPostComposition->DstRect.bottom, pPostComposition->DstRect.top >= bottom)
      || left < 0
      || v46 < right
      || pPostComposition->DstRect.top < 0
      || v47 < bottom )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry2(3LL, this, -1073741811LL);
      goto LABEL_317;
    }
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2738LL) || v42 )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry2(3LL, -1073741811LL, this);
      goto LABEL_317;
    }
    SrcRect = (__m128i)pPostComposition->SrcRect;
    v274 = _mm_cvtsi128_si32(SrcRect);
    v355 = *(_QWORD *)&pPostComposition->SrcRect.right;
    v353 = v274;
    if ( v274 || SrcRect.m128i_i32[2] != v46 || SrcRect.m128i_i32[1] || SrcRect.m128i_i32[3] != v47 )
    {
      v342 = HIDWORD(*(_OWORD *)&pPostComposition->SrcRect);
      v336 = 1;
      v371 = SrcRect.m128i_i32[3] - SrcRect.m128i_i32[1];
      v357 = SrcRect.m128i_i32[2] - v274;
      v351 = HIDWORD(*(_QWORD *)&pPostComposition->SrcRect.left);
    }
    else
    {
      v342 = HIDWORD(*(_OWORD *)&pPostComposition->SrcRect);
      v351 = HIDWORD(*(_QWORD *)&pPostComposition->SrcRect.left);
    }
  }
  else
  {
    v336 = 0;
    v357 = 0;
    v371 = 0;
    if ( v42 )
    {
      v275 = a2->PresentPlaneCount;
      if ( v275 == 1 )
      {
        v276 = a2->ppPresentPlanes;
        if ( !(*v276)->LayerIndex )
        {
          v336 = 0;
          v357 = 0;
          v371 = 0;
          if ( ((*v276)->InputFlags.Value & 1) != 0 )
            goto LABEL_51;
        }
        LODWORD(v58) = -1073741811;
        WdLogSingleEntry3(2LL, -1073741811LL, this, 1LL);
        v268 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and plane 0 is not enabled";
      }
      else
      {
        LODWORD(v58) = -1073741811;
        WdLogSingleEntry3(2LL, -1073741811LL, this, v275);
        v268 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and 0x%I64x planes are specified";
      }
      v329 = 0LL;
      v328 = 0LL;
      v327 = a2->PresentPlaneCount;
      goto LABEL_457;
    }
  }
LABEL_51:
  v49 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v359 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE;
  v50 = 0;
  v331 = D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709;
  v51 = 0;
  v334 = 0;
  v52 = D3DDDI_FLIPINTERVAL_ONE;
  v335 = 0;
  v333 = 0;
  v361 = -1;
  v349 = 1;
  v339 = 0;
  if ( !a2->PresentPlaneCount )
  {
LABEL_543:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 16LL) + 2738LL) )
    {
      v52 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
      v349 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, 3791LL);
      v50 = v334;
      v51 = v333;
    }
LABEL_163:
    if ( !v335 && !v50 && !v51 )
    {
      WdLogSingleEntry2(4LL, 0LL, v34);
      LODWORD(v58) = 0;
      goto LABEL_317;
    }
    memset(&v409, 0, sizeof(v409));
    v131 = 4;
    if ( !v42 )
      v131 = 4100;
    v132 = v131 ^ ((unsigned __int16)*(_DWORD *)&v45->Flags.0 << 8);
    v409.FlipInterval = v52;
    v409.Flags.Value = v131 ^ v132 & 0x700 | 8;
    v133 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
    v134 = (PSLIST_HEADER)(v133 + 1280);
    ++*(_DWORD *)(v133 + 1300);
    SListHeada = (PSLIST_HEADER)(v133 + 1280);
    v368 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v133 + 1280));
    v135 = v368;
    if ( !v368 )
    {
      v240 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v133 + 1328);
      v241 = *(unsigned int *)(v133 + 1324);
      v242 = *(unsigned int *)(v133 + 1320);
      v243 = *(unsigned int *)(v133 + 1316);
      ++*(_DWORD *)(v133 + 1304);
      v368 = (PSLIST_ENTRY)v240(v243, v241, v242, v133 + 1280);
      v135 = v368;
      if ( !v368 )
      {
        WdLogSingleEntry1(6LL, 3827LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate VidSchSubmitData",
          3827LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v58) = -1073741801;
        goto LABEL_314;
      }
    }
    v136 = *(_QWORD *)(v133 + 16);
    if ( *(int *)(v136 + 2424) < 0x2000 )
    {
      v137 = 1;
      if ( !*(_BYTE *)(v136 + 2724) )
      {
        v138 = 1304;
LABEL_171:
        memset(v135, 0, v138);
        v139 = *(_QWORD *)(v133 + 16);
        v140 = *(_DWORD *)(v139 + 2632);
        if ( *(int *)(v139 + 2424) < 0x2000 )
        {
          v141 = 1;
          if ( !*(_BYTE *)(v139 + 2724) )
          {
            *((_BYTE *)v135 + 356) = 0;
LABEL_174:
            v145 = *v135 | 0x30020;
            *v135 = v145;
            v146 = v145 | 1;
            v135[28] = v45->PresentCount;
            if ( v339 )
              v146 |= 0x400000u;
            v147 = v146 | 4;
            *v135 = v147;
            v148 = v147;
            if ( !v42 && v45->ContextCount <= 1 )
            {
              v148 = v147 | 0x800000;
              *v135 = v147 | 0x800000;
            }
            v149 = v148 ^ ((unsigned __int8)v148 ^ (unsigned __int8)(v45->Flags.Value >> 1)) & 8;
            *v135 = v149;
            v150 = ((unsigned __int8)v149 ^ (unsigned __int8)(v45->Flags.Value >> 1)) & 0x10 ^ v149;
            *v135 = v150;
            v151 = (v150 ^ (v45->Flags.Value << 19)) & 0x80000 ^ v150;
            *v135 = v151;
            v152 = (v151 ^ (v45->Flags.Value << 19)) & 0x100000 ^ v151;
            *v135 = v152;
            v153 = (v152 ^ (v45->Flags.Value << 19)) & 0x200000 ^ v152;
            *v135 = v153;
            v154 = v153 ^ (v153 ^ (v45->Flags.Value << 21)) & 0x20000000;
            *v135 = v154;
            if ( (v45->Flags.Value & 0x40) != 0 )
              Duration = v45->Duration;
            else
              Duration = 0;
            v135[36] = Duration;
            if ( (v45->Flags.Value & 0x40) != 0 )
              hAdapter = v45[1].hAdapter;
            else
              hAdapter = 1;
            v157 = v337;
            v158 = v154;
            v135[29] = v337;
            v135[31] = v349;
            v135[38] = hAdapter;
            v135[30] = 5;
            if ( (v45->Flags.Value & 0x200) != 0 && !v349 )
            {
              v158 = v154 | 0x10000000;
              *v135 = v154 | 0x10000000;
            }
            v159 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 1848LL) + 2792LL);
            if ( (*(_DWORD *)(v159 + 24) & 0x10) != 0 )
            {
              if ( v337 >= *(_DWORD *)(v159 + 96) )
              {
                WdLogSingleEntry1(1LL, 5813LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < m_NumVidPnSources",
                  5813LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v157 = v337;
              }
              if ( !*(_BYTE *)(*(_QWORD *)(v159 + 128) + v381 + 764) )
              {
                *v135 |= 0x40000000u;
                v135[90] = 0;
LABEL_189:
                v158 = *v135;
                goto LABEL_190;
              }
              v158 = *v135 ^ (*v135 ^ (v45->Flags.Value << 23)) & 0x40000000;
              *v135 = v158;
              v135[90] = v45->HDRMetaDataType;
              HDRMetaDataType = v45->HDRMetaDataType;
              if ( (v158 & 0x40000000) != 0 )
              {
                if ( HDRMetaDataType )
                {
                  v296 = HDRMetaDataType - 1;
                  if ( v296 )
                  {
                    if ( v296 != 1 )
                    {
                      WdLogSingleEntry1(1LL, 3903LL);
                      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 3903LL, 0LL, 0LL, 0LL, 0LL);
                      *v135 &= ~0x40000000u;
                      v157 = v337;
                      goto LABEL_189;
                    }
                    pHDRMetaData = v45->pHDRMetaData;
                    *(_OWORD *)(v135 + 91) = *pHDRMetaData;
                    *(_OWORD *)(v135 + 95) = pHDRMetaData[1];
                    *(_OWORD *)(v135 + 99) = pHDRMetaData[2];
                    *(_OWORD *)(v135 + 103) = pHDRMetaData[3];
                    *(_QWORD *)(v135 + 107) = *((_QWORD *)pHDRMetaData + 8);
                  }
                  else
                  {
                    v298 = v45->pHDRMetaData;
                    *(_OWORD *)(v135 + 91) = *(_OWORD *)v298;
                    *(_QWORD *)(v135 + 95) = v298[2];
                    v135[97] = *((_DWORD *)v298 + 6);
                  }
                }
              }
              else
              {
                if ( HDRMetaDataType > 2 )
                {
                  WdLogSingleEntry1(1LL, 3913LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10P"
                              "LUS == pArgs->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pArgs->HDRMetaDataType",
                    3913LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v157 = v337;
                }
                if ( v45->pHDRMetaData || v45->HDRMetaDataSize )
                {
                  WdLogSingleEntry1(1LL, 3916LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"NULL == pArgs->pHDRMetaData && NULL == pArgs->HDRMetaDataSize",
                    3916LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v157 = v337;
                }
                v158 = *v135 | 0x40000000;
                *v135 = v158;
                if ( v45->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
                {
                  v135[90] = 134217729;
                }
                else if ( v45->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
                {
                  v135[90] = -2147483646;
                }
              }
            }
LABEL_190:
            if ( v45->pPostComposition )
            {
              *v135 = v158 | 0x80000000;
              *(RECT *)(v135 + 109) = v45->pPostComposition->SrcRect;
              *(RECT *)(v135 + 113) = v45->pPostComposition->DstRect;
            }
            v160 = *((_QWORD *)v34 + 2);
            v161 = *(_QWORD *)(v160 + 1848);
            if ( v161 != *(_QWORD *)(*(_QWORD *)(v160 + 16) + 16LL) )
            {
              if ( v161 )
              {
                v325 = (__int64 *)v45->ppPresentPlanes;
                v58 = *v325;
                if ( *(_DWORD *)*v325 )
                {
                  WdLogSingleEntry1(1LL, 4067LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pPlane0->LayerIndex == 0",
                    4067LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                memset(&v410, 0, sizeof(v410));
                ConvertMPOThunkToLegacyPresentThunk(&v410, v45, (const struct _D3DKMT_MULTIPLANE_OVERLAY3 *)v58);
                LODWORD(v58) = DXGCONTEXT::DisplayOnlyPresent(
                                 v34,
                                 &v410,
                                 *(struct DXGALLOCATION **)v404,
                                 v337,
                                 &v409,
                                 a3);
                UpdatePostComposition(
                  v337,
                  0,
                  0,
                  0,
                  *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 1848LL) + 2792LL));
                goto LABEL_310;
              }
              WdLogSingleEntry2(1LL, v160, -1073741822LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"DxgkPresent is called for flip on a render only device 0x%I64x, returning 0x%I64x.",
                *((_QWORD *)v34 + 2),
                -1073741822LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v58) = -1073741811;
              goto LABEL_314;
            }
            v162 = *(_DWORD *)(v160 + 4 * v363 + 1784);
            if ( v135[30] != v162 && v162 )
            {
              if ( (v45->Flags.Value & 8) != 0 )
              {
                LODWORD(v58) = -1071775739;
                WdLogSingleEntry1(4LL, -1071775739LL);
                goto LABEL_314;
              }
              WdLogSingleEntry1(4LL, v160);
              COREDEVICEACCESS::Release(a3);
              DXGDEVICE::FlushScheduler(*((_QWORD **)v34 + 2), 3u, v363, 1);
              v299 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              LODWORD(v58) = v299;
              if ( v299 < 0 )
              {
                WdLogSingleEntry1(4LL, v299);
                COREDEVICEACCESS::AcquireSharedUncheck(a3, v300);
                goto LABEL_314;
              }
              v157 = v363;
            }
            v163 = (v45->Flags.Value & 8) == 0;
            if ( *((_BYTE *)v34 + 441) )
            {
LABEL_198:
              v166 = *((_QWORD *)v34 + 2);
              v167 = *(_QWORD *)(*(_QWORD *)(v166 + 1848) + 2792LL);
              v168 = *(_QWORD *)(v167 + 16);
              if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v168 + 184)
                && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v168 + 168)) )
              {
                WdLogSingleEntry1(1LL, 6088LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"IsCoreResourceSharedOwner()",
                  6088LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v169 = *(_DWORD *)(v167 + 96);
              v170 = v363;
              if ( (unsigned int)v363 >= v169 )
              {
                WdLogSingleEntry1(1LL, 6089LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < m_NumVidPnSources",
                  6089LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v169 = *(_DWORD *)(v167 + 96);
                v170 = v363;
              }
              if ( v170 >= v169 )
              {
                v239 = v170;
              }
              else
              {
                if ( v166 == *(_QWORD *)(*(_QWORD *)(v167 + 128) + v381 + 728) )
                {
                  v171 = *((_QWORD *)v34 + 2);
                  v172 = v170;
                  v173 = *(_QWORD *)(v171 + 1848);
                  if ( !v173 )
                    goto LABEL_211;
                  v174 = *(_QWORD *)(v173 + 2792);
                  if ( !v174 )
                  {
                    WdLogSingleEntry1(1LL, 10119LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"IsDisplayAdapter()",
                      10119LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                    v174 = *(_QWORD *)(v173 + 2792);
                    if ( !v174 )
                    {
LABEL_349:
                      if ( *(_DWORD *)(*((_QWORD *)v34 + 2) + 432LL) == 1 )
                      {
                        v235 = -1071775738;
                        WdLogSingleEntry3(4LL, -1071775738LL, v34, v363);
                        v236 = -1071775738LL;
                        goto LABEL_351;
                      }
                      WdLogSingleEntry3(4LL, 0LL, v34, v363);
                      WdLogSingleEntry2(4LL, -1071774920LL, v34);
                      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(v34, v45, v404, v411, v361, v135[34]);
                      LODWORD(v58) = 0;
                      v134 = SListHeada;
                      *(_DWORD *)(*((_QWORD *)v34 + 2) + 4 * v172 + 1784) = v135[30];
LABEL_314:
                      if ( v135 )
                      {
                        ++*((_DWORD *)&v134[1].HeaderX64 + 3);
                        if ( ExQueryDepthSList(v134) >= LOWORD(v134[1].Alignment) )
                        {
                          ++LODWORD(v134[2].Alignment);
                          ((void (__fastcall *)(_DWORD *, PSLIST_HEADER))v134[3].Region)(v135, v134);
                        }
                        else
                        {
                          ExpInterlockedPushEntrySList(v134, (PSLIST_ENTRY)v135);
                        }
                      }
                      goto LABEL_317;
                    }
                    v170 = v337;
                  }
                  if ( v170 >= *(_DWORD *)(v174 + 96) )
                  {
                    WdLogSingleEntry1(1LL, 6126LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"VidPnSourceId < m_NumVidPnSources",
                      6126LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  if ( *(_BYTE *)(*(_QWORD *)(v174 + 128) + 4000 * v172 + 760) )
                  {
                    v171 = *((_QWORD *)v34 + 2);
LABEL_211:
                    if ( *(_DWORD *)(v171 + 432) != 1 || (*(_DWORD *)(v171 + 4 * v172 + 1208) & 0x100) != 0 )
                    {
                      if ( *((_QWORD *)v34 + 45) )
                      {
                        WdLogSingleEntry1(1LL, 4026LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pPresentDmaBuffer == NULL",
                          4026LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      v352 = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                               v34,
                               v45,
                               v335,
                               v334,
                               v333,
                               v404,
                               v414,
                               &v409,
                               (struct VIDSCH_SUBMIT_DATA_BASE *)v135,
                               v396);
                      LODWORD(v58) = v352;
                      if ( v352 < 0 )
                        goto LABEL_309;
                      v175 = *((_QWORD *)v34 + 2);
                      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v175 + 1848) + 2792LL) + 128LL)
                                     + 4000 * v172
                                     + 1088) == -1 )
                      {
                        WdLogSingleEntry1(1LL, 4043LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"!NT_SUCCESS(Status) || (GetDisplayAdapter(VidPnSourceId)->GetDisplayCore()->MapVidPnS"
                                    "ourceToVidPnTarget(VidPnSourceId) != D3DDDI_ID_UNINITIALIZED)",
                          4043LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v175 = *((_QWORD *)v34 + 2);
                      }
                      v176 = v404;
                      v177 = v135[34];
                      v350 = v177;
                      v178 = *(_QWORD *)(*(_QWORD *)(v175 + 1848) + 2792LL);
                      v365 = v404;
                      v374 = v178 + 608;
                      v375 = 0;
                      if ( v178 == -608 )
                      {
                        WdLogSingleEntry1(1LL, 573LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pMutex != NULL",
                          573LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( *(struct _KTHREAD **)(v374 + 24) == KeGetCurrentThread() )
                      {
                        WdLogSingleEntry1(1LL, 580LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"!m_pMutex->IsOwner()",
                          580LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      v179 = v374;
                      KeEnterCriticalRegion();
                      if ( *(struct _KTHREAD **)(v374 + 24) == KeGetCurrentThread() )
                      {
                        v310 = *(_DWORD *)(v374 + 32);
                        if ( v310 <= 0 )
                        {
                          WdLogSingleEntry1(1LL, 472LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_OwnerAcquireCount > 0",
                            472LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          v310 = *(_DWORD *)(v374 + 32);
                        }
                        v182 = v310 + 1;
                      }
                      else
                      {
                        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v374 + 8, 0LL) )
                        {
                          if ( bTracingEnabled )
                          {
                            v311 = *(_DWORD *)(v374 + 36);
                            if ( v311 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              McTemplateK0q_EtwWriteTransfer(v180, (const EVENT_DESCRIPTOR *)"g", v181, v311);
                          }
                          _InterlockedIncrement64((volatile signed __int64 *)(v374 + 16));
                          ExAcquirePushLockExclusiveEx(v374 + 8, 0LL);
                        }
                        if ( *(_QWORD *)(v374 + 24) )
                        {
                          WdLogSingleEntry1(1LL, 496LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"NULL == m_OwningThread",
                            496LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        if ( *(_DWORD *)(v374 + 32) )
                        {
                          WdLogSingleEntry1(1LL, 497LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"0 == m_OwnerAcquireCount",
                            497LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        *(_QWORD *)(v374 + 24) = KeGetCurrentThread();
                        v182 = 1;
                      }
                      v183 = a2;
                      *(_DWORD *)(v179 + 32) = v182;
                      v375 = 1;
                      v184 = 0;
                      v185 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL) + 128LL)
                           + 4000LL * a2->VidPnSourceId;
                      if ( *(_DWORD *)(v185 + 3764) )
                      {
                        do
                        {
                          v234 = v184++;
                          *(_BYTE *)(v234 + v185 + 2904) = 0;
                        }
                        while ( v184 < *(_DWORD *)(v185 + 3764) );
                      }
                      *(_DWORD *)(v185 + 3764) = 0;
                      v186 = 0;
                      *(_BYTE *)(v185 + 3720) = 0;
                      if ( a2->PresentPlaneCount )
                      {
                        v187 = v176;
                        while ( 1 )
                        {
                          v188 = v183->ppPresentPlanes[v186];
                          LayerIndex = v188->LayerIndex;
                          v343 = v188->LayerIndex;
                          if ( (v188->InputFlags.Value & 1) != 0 )
                            break;
                          v397 = 0LL;
                          DISPLAY_SOURCE::SetMultiplaneOverlayConfigUnsafe(
                            (DISPLAY_SOURCE *)v185,
                            LayerIndex,
                            0LL,
                            0,
                            0,
                            &v397,
                            &v397,
                            &v397,
                            D3DDDI_ROTATION_IDENTITY,
                            D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE,
                            D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                            0,
                            D3DDDIFMT_UNKNOWN,
                            0);
LABEL_261:
                          v183 = a2;
                          if ( ++v186 >= a2->PresentPlaneCount )
                          {
                            v135 = v368;
                            v176 = v365;
                            v177 = v350;
                            goto LABEL_263;
                          }
                        }
                        v190 = (unsigned int)LayerIndex;
                        v370 = v411[LayerIndex];
                        p_Flags = &v188->pPlaneAttributes->Flags;
                        v192 = (const struct DXGALLOCATION *)*((_QWORD *)v187 + LayerIndex);
                        v341 = v192;
                        v193 = (const struct tagRECT *)(p_Flags + 1);
                        v194 = p_Flags[20];
                        v195 = (const struct tagRECT *)(p_Flags + 9);
                        v196 = *p_Flags;
                        v197 = (const struct tagRECT *)(p_Flags + 5);
                        v332 = p_Flags[18];
                        v360 = p_Flags[14];
                        v348 = p_Flags[13];
                        v354 = v194;
                        v373 = (const struct tagRECT *)(p_Flags + 1);
                        v356 = *p_Flags;
                        if ( *(struct _KTHREAD **)(*(_QWORD *)(v185 + 8) + 632LL) != KeGetCurrentThread() )
                        {
                          WdLogSingleEntry1(1LL, 9323LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
                            9323LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          v193 = v373;
                          LODWORD(LayerIndex) = v190;
                          v196 = v356;
                          v192 = v341;
                          v194 = v354;
                        }
                        if ( !v192 )
                        {
                          WdLogSingleEntry1(1LL, 9324LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!Enabled || pAllocation != NULL",
                            9324LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          v193 = v373;
                          LODWORD(LayerIndex) = v190;
                          v196 = v356;
                          v192 = v341;
                          v194 = v354;
                        }
                        if ( (unsigned int)LayerIndex >= *(_DWORD *)(v185 + 3760) )
                          goto LABEL_342;
                        v198 = 168 * v190;
                        if ( *(_DWORD *)(v198 + v185 + 1144) != -1 )
                          goto LABEL_239;
                        if ( *(_DWORD *)(v198 + v185 + 1148) == -1
                          || (WdLogSingleEntry1(1LL, 9067LL),
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
                                9067LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL),
                              v193 = v373,
                              LODWORD(LayerIndex) = v343,
                              v196 = v356,
                              v192 = v341,
                              v194 = v354,
                              *(_DWORD *)(v198 + v185 + 1144) == -1) )
                        {
LABEL_342:
                          v199 = 0LL;
                        }
                        else
                        {
LABEL_239:
                          _mm_lfence();
                          v199 = v198 + 80LL * *(int *)(v198 + v185 + 1144) + v185 + 1152;
                          if ( v199 )
                          {
                            v200 = *(_DWORD *)(v199 + 8);
                            if ( ((v200 >> 4) & 1) == ((v196 & 1) != 0)
                              && ((v200 >> 5) & 1) == ((v196 & 2) != 0)
                              && *(_DWORD *)(v199 + 12) == v193->left
                              && *(_DWORD *)(v199 + 20) == v193->right
                              && *(_DWORD *)(v199 + 16) == v193->top
                              && *(_DWORD *)(v199 + 24) == v193->bottom
                              && *(_DWORD *)(v199 + 28) == v197->left
                              && *(_DWORD *)(v199 + 36) == v197->right
                              && *(_DWORD *)(v199 + 32) == v197->top
                              && *(_DWORD *)(v199 + 40) == v197->bottom
                              && *(_DWORD *)(v199 + 44) == v195->left
                              && *(_DWORD *)(v199 + 52) == v195->right
                              && *(_DWORD *)(v199 + 48) == v195->top
                              && *(_DWORD *)(v199 + 56) == v195->bottom
                              && *(_DWORD *)(v199 + 60) == v348 )
                            {
                              v201 = v332;
                              if ( ((v200 >> 2) & 1) == (v360 == D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND)
                                && *(_DWORD *)(v199 + 64) == v332
                                && *(_DWORD *)(v199 + 68) == v194 )
                              {
                                if ( *(_DWORD *)(v185 + 3760) <= (unsigned int)LayerIndex )
                                {
                                  WdLogSingleEntry1(1LL, 9332LL);
                                  DxgkLogInternalTriageEvent(
                                    0LL,
                                    262146,
                                    -1,
                                    (__int64)L"m_MaxPlanesUsed > PlaneIndex",
                                    9332LL,
                                    0LL,
                                    0LL,
                                    0LL,
                                    0LL);
                                }
                                *(_DWORD *)(v199 + 8) |= 3u;
                                *(_QWORD *)v199 = v341;
                                goto LABEL_261;
                              }
                              v192 = v341;
                              goto LABEL_333;
                            }
                            v192 = v341;
                          }
                        }
                        v201 = v332;
LABEL_333:
                        v233 = v370;
                        if ( v370 == (D3DDDIFMT_FORCE_UINT|0x80000000) && v199 )
                          v233 = *(_DWORD *)(v199 + 72);
                        DISPLAY_SOURCE::CreateNewPlaneConfig(
                          (DISPLAY_SOURCE *)v185,
                          LayerIndex,
                          v192,
                          1u,
                          v196,
                          v193,
                          v197,
                          v195,
                          v348,
                          v360,
                          v201,
                          v194,
                          v233,
                          0);
                        if ( v343 >= *(_DWORD *)(v185 + 3760) )
                          *(_DWORD *)(v185 + 3760) = v343 + 1;
                        if ( v343 )
                          *(_BYTE *)(v185 + 3768) = 1;
                        goto LABEL_261;
                      }
LABEL_263:
                      v202 = v183->pPostComposition;
                      if ( v202 )
                      {
                        DISPLAY_SOURCE::SetPostCompositionConfigUnsafe(
                          (DISPLAY_SOURCE *)v185,
                          1u,
                          &v202->SrcRect,
                          &v202->DstRect);
                      }
                      else
                      {
                        v203 = *(_QWORD *)(v185 + 8);
                        v394 = 0LL;
                        if ( *(struct _KTHREAD **)(v203 + 632) != KeGetCurrentThread() )
                        {
                          WdLogSingleEntry1(1LL, 9386LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_DisplayCore->IsDisplayStateMutexOwner()",
                            9386LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        v204 = *(_DWORD *)(v185 + 2824);
                        if ( v204 != -1
                          || *(_DWORD *)(v185 + 2828) != -1
                          && (WdLogSingleEntry1(1LL, 9081LL),
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"(pQueue->HeadIndex != CONFIG_INDEX_INVALID) || (pQueue->TailIndex == CONFIG_INDEX_INVALID)",
                                9081LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL),
                              v204 = *(_DWORD *)(v185 + 2824),
                              v204 != -1) )
                        {
                          v312 = (struct _POST_COMPOSITION_CONFIG *)(v185 + 4 * (v204 + 8LL * v204 + 708));
                          if ( v312 )
                          {
                            if ( !PostCompositionConfigsMatch(v312, 0, &v394, &v394) )
                              DISPLAY_SOURCE::CreateNewPostCompositionConfig((DISPLAY_SOURCE *)v185, v313, &v394, &v394);
                          }
                        }
                      }
                      if ( !v375 )
                        WdLogSingleEntry5(0LL, 275LL, 4LL, &v374, 0LL, 0LL);
                      v205 = v374;
                      v375 = 0;
                      if ( *(struct _KTHREAD **)(v374 + 24) != KeGetCurrentThread() )
                        WdLogSingleEntry5(0LL, 275LL, 4LL, v374, 0LL, 0LL);
                      v206 = *(_DWORD *)(v205 + 32);
                      if ( v206 <= 0 )
                      {
                        WdLogSingleEntry1(1LL, 516LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_OwnerAcquireCount > 0",
                          516LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                        v206 = *(_DWORD *)(v205 + 32);
                      }
                      v207 = v206 - 1;
                      *(_DWORD *)(v205 + 32) = v207;
                      if ( !v207 )
                      {
                        *(_QWORD *)(v205 + 24) = 0LL;
                        ExReleasePushLockExclusiveEx(v205 + 8, 0LL);
                      }
                      KeLeaveCriticalRegion();
                      if ( v361 > -1 )
                      {
                        v208 = *((_QWORD *)v176 + v361);
                        v209 = *((_QWORD *)this + 2);
                        v210 = a2->VidPnSourceId;
                        if ( v209 != -304 && *(struct _KTHREAD **)(v209 + 312) == KeGetCurrentThread() )
                        {
                          WdLogSingleEntry1(1LL, 1425LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
                            1425LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        KeEnterCriticalRegion();
                        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v209 + 304, 0LL) )
                        {
                          if ( bTracingEnabled )
                          {
                            v314 = *(_DWORD *)(v209 + 328);
                            if ( v314 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              McTemplateK0q_EtwWriteTransfer(v211, (const EVENT_DESCRIPTOR *)"g", v212, v314);
                          }
                          ExAcquirePushLockExclusiveEx(v209 + 304, 0LL);
                        }
                        *(_QWORD *)(v209 + 8 * v210 + 1016) = v208;
                        *(_DWORD *)(v209 + 4 * v210 + 1144) = v177;
                        *(_QWORD *)(v209 + 312) = 0LL;
                        ExReleasePushLockExclusiveEx(v209 + 304, 0LL);
                        KeLeaveCriticalRegion();
                      }
                      if ( v375 )
                        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v374);
                      v34 = this;
                      v213 = 0;
                      v214 = v135[30];
                      v377 = 0;
                      *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v363 + 1784) = v214;
                      v215 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2792LL);
                      v376 = v215 + 464;
                      if ( v215 == -464 )
                      {
                        WdLogSingleEntry1(1LL, 573LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"m_pMutex != NULL",
                          573LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( *(struct _KTHREAD **)(v376 + 24) == KeGetCurrentThread() )
                      {
                        WdLogSingleEntry1(1LL, 580LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"!m_pMutex->IsOwner()",
                          580LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                      if ( v377 )
                        WdLogSingleEntry5(0LL, 275LL, 4LL, &v376, 0LL, 0LL);
                      v216 = v376;
                      KeEnterCriticalRegion();
                      if ( *(struct _KTHREAD **)(v216 + 24) == KeGetCurrentThread() )
                      {
                        v315 = *(_DWORD *)(v216 + 32);
                        if ( v315 <= 0 )
                        {
                          WdLogSingleEntry1(1LL, 472LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"m_OwnerAcquireCount > 0",
                            472LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                          v315 = *(_DWORD *)(v216 + 32);
                        }
                        v219 = v315 + 1;
                      }
                      else
                      {
                        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v216 + 8, 0LL) )
                        {
                          if ( bTracingEnabled )
                          {
                            v316 = *(_DWORD *)(v216 + 36);
                            if ( v316 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                              McTemplateK0q_EtwWriteTransfer(v217, (const EVENT_DESCRIPTOR *)"g", v218, v316);
                          }
                          _InterlockedIncrement64((volatile signed __int64 *)(v216 + 16));
                          ExAcquirePushLockExclusiveEx(v216 + 8, 0LL);
                        }
                        if ( *(_QWORD *)(v216 + 24) )
                        {
                          WdLogSingleEntry1(1LL, 496LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"NULL == m_OwningThread",
                            496LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        if ( *(_DWORD *)(v216 + 32) )
                        {
                          WdLogSingleEntry1(1LL, 497LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"0 == m_OwnerAcquireCount",
                            497LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        *(_QWORD *)(v216 + 24) = KeGetCurrentThread();
                        v219 = 1;
                      }
                      v220 = v381;
                      *(_DWORD *)(v216 + 32) = v219;
                      v221 = v220 + *(_QWORD *)(v215 + 128);
                      v377 = 1;
                      v222 = *(_BYTE *)(v221 + 704);
                      if ( v336 )
                      {
                        if ( v222 && *(_DWORD *)(v221 + 708) == v357 && *(_DWORD *)(v221 + 712) == v371 )
                          goto LABEL_299;
                        *(_DWORD *)(v221 + 708) = v357;
                        *(_DWORD *)(v220 + *(_QWORD *)(v215 + 128) + 712) = v371;
                        *(_BYTE *)(v220 + *(_QWORD *)(v215 + 128) + 704) = v336;
                      }
                      else
                      {
                        if ( !v222 )
                        {
LABEL_299:
                          v223 = v376;
                          v377 = 0;
                          if ( *(struct _KTHREAD **)(v376 + 24) != KeGetCurrentThread() )
                            WdLogSingleEntry5(0LL, 275LL, 4LL, v376, 0LL, 0LL);
                          v224 = *(_DWORD *)(v223 + 32);
                          if ( v224 <= 0 )
                          {
                            WdLogSingleEntry1(1LL, 516LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"m_OwnerAcquireCount > 0",
                              516LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                            v224 = *(_DWORD *)(v223 + 32);
                          }
                          v225 = v224 - 1;
                          *(_DWORD *)(v223 + 32) = v225;
                          if ( !v225 )
                          {
                            *(_QWORD *)(v223 + 24) = 0LL;
                            ExReleasePushLockExclusiveEx(v223 + 8, 0LL);
                          }
                          KeLeaveCriticalRegion();
                          if ( v213 )
                          {
                            v317 = operator new[](0x18uLL, 0x4B677844u, 256LL, v226);
                            v318 = (_DWORD *)v317;
                            if ( v317 )
                            {
                              *(_QWORD *)(v317 + 8) = 0LL;
                              *(_QWORD *)(v317 + 16) = 0LL;
                              *(_QWORD *)v317 = 0LL;
                              DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v317, *(struct DXGADAPTER **)(v215 + 16));
                              v318[4] = v337;
                              Current = DXGPROCESS::GetCurrent(v320, v319, v321, v322);
                              DXGWORKQUEUE::QueueWork(
                                (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 96LL),
                                (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
                                v318,
                                v324);
                            }
                          }
                          if ( v377 )
                            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v376);
                          LODWORD(v58) = v352;
LABEL_309:
                          v134 = SListHeada;
LABEL_310:
                          v227 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 16LL);
                          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v227 + 184)
                            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v227 + 168))
                            && (_DWORD)v58 != -1073741130 )
                          {
                            WdLogSingleEntry1(1LL, 4089LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner() || Status == STATUS_DEVICE_REMOVED",
                              4089LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          if ( *((_QWORD *)v34 + 45) )
                          {
                            WdLogSingleEntry1(1LL, 4090LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"m_pPresentDmaBuffer == NULL",
                              4090LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          goto LABEL_314;
                        }
                        *(_DWORD *)(v221 + 708) = 0;
                        *(_DWORD *)(v220 + *(_QWORD *)(v215 + 128) + 712) = 0;
                        *(_BYTE *)(v220 + *(_QWORD *)(v215 + 128) + 704) = 0;
                      }
                      v213 = 1;
                      if ( !v377 )
                        WdLogSingleEntry5(0LL, 275LL, 4LL, &v376, 0LL, 0LL);
                      goto LABEL_299;
                    }
                    WdLogSingleEntry3(4LL, -1071775739LL, v34, v363);
                    v236 = -1071775739LL;
                    v235 = -1071775739;
LABEL_351:
                    WdLogSingleEntry2(4LL, v236, v34);
                    LODWORD(v58) = v235;
                    v134 = SListHeada;
                    goto LABEL_314;
                  }
                  goto LABEL_349;
                }
                v239 = v363;
              }
              WdLogSingleEntry3(3LL, -1071775744LL, v34, v363);
              v303 = *((_QWORD *)v34 + 2);
              if ( (*(_DWORD *)(*(_QWORD *)(v303 + 40) + 424LL) & 4) != 0
                && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                   *(ADAPTER_DISPLAY **)(*(_QWORD *)(v303 + 1848) + 2792LL),
                                   v363) == 1 )
              {
                v304 = *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 1848LL) + 2792LL);
                if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v304 + 16) + 4000 * v239 + 752) + 424LL) & 4) != 0 )
                {
                  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v304, v363);
                  WdLogSingleEntry3(2LL, *((_QWORD *)v34 + 2), v363, VidPnSourceOwner);
                  v306 = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 1848LL) + 2792LL),
                           v363);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM dev"
                              "ice (0x%I64x) has shared ownership, likely Dwm device leak",
                    *((_QWORD *)v34 + 2),
                    v363,
                    (__int64)v306,
                    0LL,
                    0LL);
                  LOBYTE(v307) = 1;
                  *(_BYTE *)(*((_QWORD *)v34 + 2) + 1906LL) = 1;
                  if ( (unsigned __int8)WdIsDebuggerPresent(v307) )
                  {
                    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
                    __debugbreak();
                  }
                  else
                  {
                    wil_details_FeatureReporting_ReportUsageToService(
                      (__int64)&Feature_Dwm_Ownership_Leak_Bugchek__private_reporting,
                      0xA84D9Au,
                      v308,
                      v309,
                      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
                      0);
                  }
                }
              }
              v235 = -1071775744;
              v236 = -1071775744LL;
              goto LABEL_351;
            }
            LODWORD(v164) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL) + 624LL)
                                                                                          + 8LL)
                                                                              + 184LL))(
                              *(_QWORD *)(*((_QWORD *)v34 + 2) + 768LL),
                              v157,
                              0LL);
            if ( (_DWORD)v164 == -1071775486 )
            {
              if ( !v163 )
              {
LABEL_581:
                WdLogSingleEntry2(4LL, (int)v164, v34);
                if ( (_DWORD)v164 != -1071775486 && (_DWORD)v164 != -1073741130 && (_DWORD)v164 != -1071775232 )
                {
                  WdLogSingleEntry1(1LL, 3628LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (ST"
                              "ATUS_GRAPHICS_GPU_EXCEPTION_ON_DEVICE == ntStatus)",
                    3628LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
LABEL_197:
                v165 = v164;
                if ( (int)v164 >= 0 )
                  goto LABEL_198;
LABEL_580:
                WdLogSingleEntry2(4LL, v165, v34);
                LODWORD(v58) = v165;
                v134 = SListHeada;
                goto LABEL_314;
              }
              COREDEVICEACCESS::Release(a3);
              LOBYTE(v301) = 1;
              v164 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL)
                                                                                            + 624LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                       *(_QWORD *)(*((_QWORD *)v34 + 2) + 768LL),
                       (unsigned int)v363,
                       v301);
              v165 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
              if ( v165 < 0 )
              {
                WdLogSingleEntry1(4LL, v164);
                COREDEVICEACCESS::AcquireSharedUncheck(a3, v302);
                goto LABEL_580;
              }
            }
            if ( (int)v164 >= 0 )
              goto LABEL_197;
            goto LABEL_581;
          }
        }
        else
        {
          v141 = *(_DWORD *)(v139 + 288);
        }
        v142 = 8 * v141;
        *((_BYTE *)v135 + 356) = 1;
        v135[152] = v141;
        v143 = v141 << 6;
        v135[151] = v140;
        v135[153] = v140 * (v143 + ((v142 + 231) & 0xFFFFFFF8)) + 16;
        v144 = v140 * (v143 + ((v142 + 231) & 0xFFFFFFF8)) + 616;
        v135[138] = v144;
        v135[139] = v142 + v144;
        goto LABEL_174;
      }
    }
    else
    {
      v137 = *(_DWORD *)(v136 + 288);
    }
    v138 = *(_DWORD *)(v136 + 2632) * ((v137 << 6) + ((8 * v137 + 231) & 0xFFFFFFF8)) + 8 * (v137 + 77);
    goto LABEL_171;
  }
  v53 = 0;
  v361 = -1;
  v54 = 0;
  v334 = 0;
  v55 = 0;
  v335 = 0;
  v333 = 0;
  v56 = D3DDDIFMT_UNKNOWN;
  v349 = 1;
  v339 = 0;
  while ( 1 )
  {
    v57 = v340;
    v58 = (__int64)v45->ppPresentPlanes[v49];
    SListHead = (PSLIST_HEADER)v58;
    v59 = *(unsigned int *)v58;
    v346 = (int)v59;
    v60 = (unsigned int)v59;
    v372 = v59;
    if ( (unsigned int)v59 >= v340 || (_mm_lfence(), ((1 << v59) & v56) != 0) )
    {
LABEL_540:
      Rotation = v59;
LABEL_541:
      LODWORD(v58) = -1073741811;
      v290 = (__int64)v34;
      v291 = -1073741811LL;
LABEL_542:
      WdLogSingleEntry3(3LL, v290, Rotation, v291);
      goto LABEL_317;
    }
    v369 = (1 << v59) | v56;
    if ( (*(_DWORD *)(v58 + 4) & 1) == 0 )
    {
      if ( *((_QWORD *)v404 + v59) || v414[v59] )
        v333 = v55 + 1;
      v390 = 0LL;
      DXGALLOCATIONREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)v404 + v59, &v390);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v390);
      goto LABEL_151;
    }
    v61 = v404;
    if ( *((_QWORD *)v404 + v59) || v414[v59] )
      v334 = v53 + 1;
    else
      v335 = v54 + 1;
    v62 = 0;
    if ( *(_DWORD *)(v58 + 16) )
    {
      v63 = *((_QWORD *)v34 + 2);
      while ( 1 )
      {
        v64 = *(_QWORD *)(v63 + 40);
        v366 = (unsigned int)v59 + v57 * v62;
        v65 = (struct _EX_RUNDOWN_REF **)((char *)v61 + 8 * v366);
        v66 = *(_DWORD *)(*(_QWORD *)(v58 + 24) + 4LL * v62);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v64 + 248, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v277 = *(_DWORD *)(v64 + 272);
            if ( v277 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v67, (const EVENT_DESCRIPTOR *)"g", v68, v277);
          }
          ExAcquirePushLockSharedEx(v64 + 248, 0LL);
        }
        v69 = (v66 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v69 >= *(_DWORD *)(v64 + 296) )
          goto LABEL_327;
        v70 = *(_QWORD *)(v64 + 280);
        v71 = *(_DWORD *)(v70 + 16 * v69 + 8);
        if ( ((v66 >> 25) & 0x60) != (*(_BYTE *)(v70 + 16 * v69 + 8) & 0x60) || (v71 & 0x2000) != 0 || (v71 & 0x1F) == 0 )
          goto LABEL_327;
        if ( (v71 & 0x1F) != 5 )
          break;
        v72 = *(struct _EX_RUNDOWN_REF **)(v70 + 16LL * (unsigned int)v69);
LABEL_67:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v389, v72);
        ExReleasePushLockSharedEx(v64 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( *v65 )
          ExReleaseRundownProtection(*v65 + 11);
        *v65 = v389;
        v389 = 0LL;
        if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
        {
          v385 = 0LL;
          if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v385) >= 0 )
          {
            DxgThread = v385;
            if ( v385 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v385 = DxgThread) != 0LL) )
            {
              if ( *((_DWORD *)DxgThread + 12) )
                WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
            }
          }
        }
        v61 = v404;
        if ( !*((_QWORD *)v404 + v366) )
        {
          LODWORD(v58) = -1073741811;
          Rotation = (unsigned __int64)this;
          v290 = -1073741811LL;
          v291 = *(unsigned int *)(SListHead[1].Region + 4LL * v62);
          goto LABEL_542;
        }
        v34 = this;
        v63 = *((_QWORD *)this + 2);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v366) + 8LL) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v63 + 16) + 16LL) )
        {
          LODWORD(v58) = -1073741811;
          WdLogSingleEntry3(2LL, *((_QWORD *)this + 2), *((_QWORD *)v404 + v366), -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)this + 2),
            *((_QWORD *)v404 + v366),
            -1073741811LL,
            0LL,
            0LL);
          goto LABEL_317;
        }
        v58 = (__int64)SListHead;
        ++v62;
        LODWORD(v59) = v346;
        v57 = v340;
        if ( v62 >= LODWORD(SListHead[1].Alignment) )
        {
          v60 = (unsigned int)v346;
          goto LABEL_78;
        }
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_327:
      v72 = 0LL;
      goto LABEL_67;
    }
LABEL_78:
    _mm_lfence();
    v74 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 4LL) & 0x2000) == 0;
    _mm_lfence();
    if ( v74 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 4LL) & 8) == 0 )
      {
        _mm_lfence();
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 4LL) & 1) == 0 )
        {
          _mm_lfence();
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 4LL) & 2) == 0 )
          {
            _mm_lfence();
            v278 = *(unsigned int **)(v58 + 24);
            LODWORD(v58) = -1073741811;
            WdLogSingleEntry5(
              2LL,
              -1073741811LL,
              v34,
              *((_QWORD *)v404 + v60),
              *(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL),
              *v278);
            v268 = L"0x%I64x 0x%I64x Source of Flip must be primary 0x%I64x 0x%I64x 0x%I64x";
            v329 = *(unsigned int *)SListHead[1].Region;
            v328 = *(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL);
            v327 = *((_QWORD *)v404 + v60);
            goto LABEL_457;
          }
        }
      }
      _mm_lfence();
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 4LL) & 1) != 0 )
        v361 = v59;
    }
    else
    {
      v232 = (const struct DXGALLOCATION *)*((_QWORD *)v404 + v60);
      if ( (*(_DWORD *)(*((_QWORD *)v232 + 6) + 4LL) & 0x20) == 0
        && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)v34 + 2), v232) )
      {
        _mm_lfence();
        v292 = *(unsigned int **)(v58 + 24);
        LODWORD(v58) = -1071775739;
        WdLogSingleEntry5(
          4LL,
          -1071775739LL,
          v34,
          *((_QWORD *)v404 + v60),
          *(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL),
          *v292);
        goto LABEL_317;
      }
    }
    _mm_lfence();
    v391 = 0LL;
    v382 = -1;
    v392 = 0LL;
    v383 = 0LL;
    v393 = 0LL;
    v75 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 16LL);
    v76 = *((_QWORD *)v34 + 2);
    *(_QWORD *)&v391 = v75;
    v77 = *(_QWORD *)(v76 + 16);
    v367 = v77;
    if ( (qword_1C012F870 & 2) != 0 )
    {
      v384 = 1;
      v382 = 5003;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v75, &EventProfilerEnter, (__int64)v61, 5003);
    }
    else
    {
      v384 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v382, 5003);
    v81 = v391;
    if ( !(_QWORD)v391 )
    {
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v382);
      if ( v384 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v293, &EventProfilerExit, v294, v382);
      LODWORD(v58) = -1073741811;
LABEL_459:
      _mm_lfence();
      WdLogSingleEntry4(
        2LL,
        (int)v58,
        v34,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 16LL),
        *((_QWORD *)v404 + v60));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
        (int)v58,
        (__int64)v34,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v60) + 48LL) + 16LL),
        *((_QWORD *)v404 + v60),
        0LL);
      goto LABEL_317;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v77 + 16) + 209LL) )
    {
      v391 = *(_OWORD *)(v391 + 64);
      v392 = *(_OWORD *)(v81 + 80);
      v393 = *(_OWORD *)(v81 + 96);
      HIDWORD(v393) = -1;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v382);
      if ( v384 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v279, &EventProfilerExit, v280, v382);
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v391, v78, v79, v80);
      ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
      v84 = ProcessDxgProcess;
      if ( (!ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) != 0)
        && (v281 = DXGTHREAD::GetCurrent()) != 0LL
        && (v85 = *((_QWORD *)v281 + 3)) != 0
        || (v85 = v84) != 0 )
      {
        v86 = v85 + 152;
        if ( v85 != -152 && *(struct _KTHREAD **)(v85 + 160) == KeGetCurrentThread() )
        {
          WdLogSingleEntry1(1LL, 1425LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
            1425LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v87 = 0;
        if ( v85 )
        {
          KeEnterCriticalRegion();
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v85 + 152, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v238 = *(_DWORD *)(v85 + 176);
              if ( v238 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                McTemplateK0q_EtwWriteTransfer(v88, (const EVENT_DESCRIPTOR *)"g", v89, v238);
            }
            ExAcquirePushLockExclusiveEx(v85 + 152, 0LL);
          }
          v87 = 2;
          *(_QWORD *)(v85 + 160) = KeGetCurrentThread();
        }
      }
      else
      {
        v86 = 0LL;
        v87 = 0;
      }
      DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v77 + 16), 1);
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v77 + 16) + 4484LL));
      CurrentIrql = KeGetCurrentIrql();
      v91 = (struct _DXGKARG_PRESENT *)CurrentIrql;
      v92 = 0LL;
      if ( CurrentIrql < 2u
        && (v386 = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &v386) >= 0)
        && ((v92 = v386) != 0LL || (v386 = DxgkThreadObjectCreateDxgThread(), (v92 = v386) != 0LL)) )
      {
        v93 = *((_DWORD *)v92 + 12);
      }
      else
      {
        v93 = 0;
      }
      DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
        (DXGVALIDATIONPROCESSATTACH *)v407,
        *(struct DXGADAPTER **)(v367 + 16));
      v58 = (*(int (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(v367 + 16) + 480LL))(
              *(_QWORD *)(*(_QWORD *)(v367 + 16) + 280LL),
              &v391);
      if ( v407[0] )
        KeUnstackDetachProcess(&ApcState);
      if ( (_BYTE)v91 == KeGetCurrentIrql() )
      {
        v96 = v367;
      }
      else
      {
        v282 = KeGetCurrentIrql();
        v326 = v91;
        v96 = v367;
        WdLogSingleEntry5(0LL, 275LL, 16LL, v367, v326, v282);
      }
      if ( v92 )
      {
        v95 = *((int *)v92 + 12);
        if ( (_DWORD)v95 != v93 )
          WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v92 + 12), v93, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v96 + 16) + 4484LL));
      v97 = (_QWORD *)WdLogNewEntry5_WdTrace(v95, v94);
      v97[3] = v58;
      v97[4] = v391;
      v97[5] = DWORD2(v391);
      v97[6] = HIDWORD(v391);
      v97[7] = (int)v392;
      if ( (_DWORD)v58 )
      {
        WdLogSingleEntry1(2LL, v58);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
          v58,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(v96 + 16));
      if ( v87 == 2 )
      {
        *(_QWORD *)(v86 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v86, 0LL);
        KeLeaveCriticalRegion();
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v382);
      if ( v384 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v98, &EventProfilerExit, v99, v382);
      v34 = this;
      v60 = v372;
      if ( (int)v58 < 0 )
        goto LABEL_459;
    }
    v411[v60] = v392;
    Alignment = SListHead[3].Alignment;
    v101 = *(_DWORD *)(Alignment + 4);
    v102 = *(_DWORD *)(Alignment + 12);
    if ( v101 >= v102 || (v103 = *(_DWORD *)(Alignment + 16), *(_DWORD *)(Alignment + 8) >= v103) )
    {
LABEL_456:
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v34, (unsigned int)v331);
      v329 = 0LL;
      v268 = L"ret = 0x%I64x Context 0x%I64x Source rect is invalid, index 0x%I64x";
      v328 = 0LL;
      v327 = (unsigned int)v331;
      goto LABEL_457;
    }
    v104 = DWORD2(v391);
    v105 = HIDWORD(v391);
    if ( v101 < 0 || SDWORD2(v391) < v102 || *(int *)(Alignment + 8) < 0 || SHIDWORD(v391) < v103 )
      break;
    v106 = *(_DWORD *)(Alignment + 36);
    v107 = *(_DWORD *)(Alignment + 44);
    if ( v106 >= v107 || (v108 = *(_DWORD *)(Alignment + 40), v109 = *(_DWORD *)(Alignment + 48), v108 >= v109) )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v34, (unsigned int)v331);
      v329 = 0LL;
      v268 = L"ret = 0x%I64x Context 0x%I64x Clip rect is invalid, index 0x%I64x";
      v328 = 0LL;
      v327 = (unsigned int)v331;
      goto LABEL_457;
    }
    v110 = *(_DWORD *)(Alignment + 20);
    v111 = *(_DWORD *)(Alignment + 28);
    if ( v110 >= v111 || (v112 = *(_DWORD *)(Alignment + 24), v113 = *(_DWORD *)(Alignment + 32), v112 >= v113) )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v34, (unsigned int)v331);
      v329 = 0LL;
      v268 = L"ret = 0x%I64x Context 0x%I64x Destination rect is invalid, index 0x%I64x";
      v328 = 0LL;
      v327 = (unsigned int)v331;
      goto LABEL_457;
    }
    if ( v353 > v106
      || v355 < v107
      || (v34 = this, v351 > v108)
      || v342 < v109
      || v110 > v106
      || v111 < v107
      || v112 > v108
      || v113 < v109 )
    {
      LODWORD(v58) = -1073741811;
      WdLogSingleEntry3(2LL, -1073741811LL, v34, (unsigned int)v331);
      v329 = 0LL;
      v268 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
      v328 = 0LL;
      v327 = (unsigned int)v331;
      goto LABEL_457;
    }
    v114 = *(_DWORD *)(Alignment + 52);
    if ( v114 != 1 )
    {
      if ( v114 )
      {
        if ( (unsigned int)(v114 - 2) > 2 )
        {
          LODWORD(v58) = -1073741811;
          WdLogSingleEntry4(2LL, -1073741811LL, this, (unsigned int)v331, *(int *)(Alignment + 52));
          v268 = L"ret = 0x%I64x Context 0x%I64x rotation is not valid, index 0x%I64x, rotation 0xI64x";
          v329 = 0LL;
          v328 = *(int *)(SListHead[3].Alignment + 52);
          v327 = (unsigned int)v331;
          goto LABEL_457;
        }
      }
      else
      {
        *(_DWORD *)(Alignment + 52) = 1;
      }
    }
    v115 = *(_DWORD *)(Alignment + 60);
    v116 = 1;
    v117 = 0LL;
    if ( v115 )
    {
      while ( v116 )
      {
        v118 = (_DWORD *)(*(_QWORD *)(Alignment + 64) + 16LL * (unsigned int)v117);
        v119 = v118[2];
        if ( *v118 >= v119 || v118[1] >= v118[3] )
          v116 = 0;
        if ( *(_DWORD *)(Alignment + 4) > *v118
          || *(_DWORD *)(Alignment + 12) < v119
          || *(_DWORD *)(Alignment + 8) > v118[1]
          || *(_DWORD *)(Alignment + 16) < v118[3] )
        {
          v116 = 0;
        }
        v117 = (unsigned int)(v117 + 1);
        if ( (unsigned int)v117 >= v115 )
        {
          if ( v116 )
            goto LABEL_142;
          break;
        }
      }
      *(_DWORD *)(Alignment + 60) = 0;
    }
LABEL_142:
    v58 = (__int64)SListHead;
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2706LL) )
    {
      v283 = (_DWORD *)SListHead[3].Alignment;
      if ( v283[5] != v283[9] || v283[7] != v283[11] || v283[6] != v283[10] || v283[8] != v283[12] )
      {
        v398 = 0LL;
        InverseXformMPORect3(&v398, v283, v283 + 9, v117);
        *(_OWORD *)(Alignment + 4) = v398;
        *(_OWORD *)(Alignment + 20) = *(_OWORD *)(SListHead[3].Alignment + 36);
        v284 = *(_DWORD *)(Alignment + 4);
        v285 = *(_DWORD *)(Alignment + 12);
        if ( v284 >= v285 || *(_DWORD *)(Alignment + 8) >= *(_DWORD *)(Alignment + 16) )
          goto LABEL_456;
        v286 = *(_DWORD *)(Alignment + 20);
        v287 = *(_DWORD *)(Alignment + 28);
        if ( v286 >= v287 || *(_DWORD *)(Alignment + 24) >= *(_DWORD *)(Alignment + 32) )
        {
          LODWORD(v58) = -1073741811;
          WdLogSingleEntry3(2LL, -1073741811LL, this, (unsigned int)v331);
          v329 = 0LL;
          v268 = L"ret = 0x%I64x Context 0x%I64x Dest rect is invalid, index 0x%I64x";
          v328 = 0LL;
          v327 = (unsigned int)v331;
          goto LABEL_457;
        }
        if ( v284 < 0 || v104 < v285 || *(int *)(Alignment + 8) < 0 || v105 < *(_DWORD *)(Alignment + 16) )
          break;
        if ( v353 > v286 || v355 < v287 || v351 > *(_DWORD *)(Alignment + 24) || v342 < *(_DWORD *)(Alignment + 32) )
        {
          LODWORD(v58) = -1073741811;
          WdLogSingleEntry3(2LL, -1073741811LL, this, (unsigned int)v331);
          v329 = 0LL;
          v268 = L"ret = 0x%I64x Context 0x%I64x Dest rect is outside of screen rect, index 0x%I64x";
          v328 = 0LL;
          v327 = (unsigned int)v331;
          goto LABEL_457;
        }
      }
    }
    if ( v346 )
      goto LABEL_149;
    if ( v395 )
    {
      v120 = *((_QWORD *)v395 + 6);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v404 + 48LL) + 4LL) & 0x2000) != 0 )
      {
        if ( (*(_DWORD *)(v120 + 4) & 0x2000) != 0 )
          goto LABEL_147;
      }
      else if ( (*(_DWORD *)(v120 + 4) & 0x2000) == 0 )
      {
        goto LABEL_147;
      }
      v339 = 1;
    }
LABEL_147:
    if ( (*(_DWORD *)(Alignment + 28) - *(_DWORD *)(Alignment + 20) != *(_DWORD *)(Alignment + 12)
                                                                     - *(_DWORD *)(Alignment + 4)
       || *(_DWORD *)(Alignment + 32) - *(_DWORD *)(Alignment + 24) != *(_DWORD *)(Alignment + 16)
                                                                     - *(_DWORD *)(Alignment + 8))
      && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2658LL) )
    {
      v371 = *(_DWORD *)(Alignment + 16) - *(_DWORD *)(Alignment + 8);
      v336 = 1;
      v357 = *(_DWORD *)(Alignment + 12) - *(_DWORD *)(Alignment + 4);
    }
LABEL_149:
    if ( v338 )
    {
      v288 = *(_DWORD *)(Alignment + 20);
      if ( v288 != *(_DWORD *)(Alignment + 4)
        || *(_DWORD *)(Alignment + 28) != *(_DWORD *)(Alignment + 12)
        || *(_DWORD *)(Alignment + 24) != *(_DWORD *)(Alignment + 8)
        || *(_DWORD *)(Alignment + 32) != *(_DWORD *)(Alignment + 16)
        || v288 != *(_DWORD *)(Alignment + 36)
        || *(_DWORD *)(Alignment + 28) != *(_DWORD *)(Alignment + 44)
        || *(_DWORD *)(Alignment + 24) != *(_DWORD *)(Alignment + 40)
        || *(_DWORD *)(Alignment + 32) != *(_DWORD *)(Alignment + 48) )
      {
        LODWORD(v58) = -1073741811;
        WdLogSingleEntry2(2LL, -1073741811LL, this);
        v329 = 0LL;
        v268 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and Source/Dest/Clip rect"
                "s are not identical";
        v328 = 0LL;
        v327 = 0LL;
        goto LABEL_457;
      }
      v289 = SListHead[3].Alignment;
      if ( *(_DWORD *)(v289 + 52) != 1 )
      {
        LODWORD(v58) = -1073741811;
        WdLogSingleEntry3(2LL, -1073741811LL, this, *(unsigned int *)(v289 + 52));
        v268 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and rotation 0x%I64x is specified";
        v329 = 0LL;
        v328 = 0LL;
        v327 = *(unsigned int *)(SListHead[3].Alignment + 52);
        goto LABEL_457;
      }
      _mm_lfence();
      if ( v337 != ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v372) + 48LL) + 4LL) >> 6) & 0xF) )
      {
        _mm_lfence();
        LODWORD(v58) = -1073741811;
        WdLogSingleEntry4(
          2LL,
          -1073741811LL,
          this,
          v363,
          (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v372) + 48LL) + 4LL) >> 6) & 0xF);
        v268 = L"0x%I64x Context 0x%I64x PresentMPO fails because the driver doesn't support MPO and VidPnSourceId (0x%I64"
                "x) doesn't match the surface VidPnSOurceId (0x%I64x)";
        v329 = 0LL;
        v328 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v404 + v372) + 48LL) + 4LL) >> 6) & 0xF;
        v327 = v363;
        goto LABEL_457;
      }
    }
    v45 = a2;
LABEL_151:
    if ( (*(_DWORD *)(v58 + 4) & 1) != 0 )
    {
      v59 = *(int *)(v58 + 8);
      if ( (_DWORD)v59 )
      {
        if ( (_DWORD)v59 != 1 )
          goto LABEL_540;
        v359 = D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND;
      }
    }
    if ( bTracingEnabled )
    {
      v121 = *(enum _D3DDDI_ROTATION **)(v58 + 48);
      v122 = SListHead;
      v123 = v45->HDRMetaDataType;
      v124 = *(unsigned int *)v121;
      v125 = *((_DWORD *)v121 + 20);
      v126 = *((_DWORD *)v121 + 18);
      v127 = *((_DWORD *)v121 + 14);
      v128 = *((_DWORD *)v121 + 13);
      v347 = *v121;
      if ( *(_DWORD *)SListHead[1].Region )
      {
        v129 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 648LL)
                                                             + 8LL)
                                                 + 352LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 656LL));
        v124 = (unsigned int)v347;
        v130 = v129;
        v122 = SListHead;
      }
      else
      {
        v130 = 0LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
        McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
          v122[1] & 1,
          v130,
          v124,
          v337,
          *v122,
          v122[1] & 1,
          v130,
          v124,
          *((_DWORD *)v121 + 1),
          *((_DWORD *)v121 + 3),
          *((_DWORD *)v121 + 2),
          *((_DWORD *)v121 + 4),
          *((_DWORD *)v121 + 5),
          *((_DWORD *)v121 + 7),
          *((_DWORD *)v121 + 6),
          *((_DWORD *)v121 + 8),
          *((_DWORD *)v121 + 9),
          *((_DWORD *)v121 + 11),
          *((_DWORD *)v121 + 10),
          *((_DWORD *)v121 + 12),
          v128,
          v127,
          v330,
          v126,
          v123,
          v125);
      v45 = a2;
      v34 = this;
    }
    v49 = v331 + 1;
    v331 = v49;
    if ( v49 >= v45->PresentPlaneCount )
    {
      v42 = v338;
      v52 = D3DDDI_FLIPINTERVAL_ONE;
      v50 = v334;
      v51 = v333;
      if ( v359 )
        goto LABEL_163;
      goto LABEL_543;
    }
    v56 = v369;
    v53 = v334;
    v54 = v335;
    v55 = v333;
  }
  LODWORD(v58) = -1073741811;
  WdLogSingleEntry3(2LL, -1073741811LL, v34, (unsigned int)v331);
  v329 = 0LL;
  v268 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
  v328 = 0LL;
  v327 = (unsigned int)v331;
LABEL_457:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v268, -1073741811LL, (__int64)v34, v327, v328, v329);
LABEL_317:
  v228 = v404;
  if ( v404 == (DXGALLOCATIONREFERENCE *)v405 )
  {
    if ( v406 )
    {
      while ( 1 )
      {
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v228 + v6++);
        if ( v6 >= v406 )
          break;
        v228 = v404;
      }
    }
  }
  else if ( v404 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v404);
  }
  return (unsigned int)v58;
}
