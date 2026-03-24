/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C012C020
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007D94 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E30 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E84 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009FFC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000A05C (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A8B4 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019134 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AE00 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00365C0 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0037868 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C00DD33C (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     MonitorGetMonitorHandle @ 0x1C0129A20 (MonitorGetMonitorHandle.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C012BAB8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012F96C (MonitorReleaseMonitorHandle.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C012F9FC (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0136884 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C0136918 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C0139A6C (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C013AC5C (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C013ACA8 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0149470 (DxgkIsVirtualizationDisabledForTarget.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01646B8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C0168380 (MonitorGetWideColorModeEnforced.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01690F4 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C017480C (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020D41C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C0211EA8 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C0222C40 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C02696B0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C02699E4 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C02979C8 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C02A0134 (DxgkNotifyDisplayChange.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C3E6C (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02F3610 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02F382C (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C02F3D54 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C02F3E30 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02F45B8 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C02F4808 (MonitorSetAppOverride.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F4B1C (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02F4C44 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F4E8C (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  struct DXGADAPTER *DeviceInterfaces; // rsi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  int TargetBaseType; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGADAPTER *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  struct _DEVICE_OBJECT *v28; // rcx
  __int64 v29; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v35; // rcx
  PZZWSTR v36; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v41; // rax
  unsigned int v42; // edx
  struct _LUID v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  _QWORD *v70; // rax
  DXGSESSIONMODECHANGELOCK *v71; // rcx
  DXGSESSIONMODECHANGELOCK *v72; // rcx
  struct DXGADAPTER *v73; // r14
  __int64 v74; // rdx
  int MonitorHandle; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  struct HDXGMONITOR__ *v79; // rbx
  __int64 v80; // rax
  __int128 v81; // xmm0
  struct DXGGLOBAL *Global; // rax
  int v83; // eax
  __int64 v84; // rax
  struct DXGGLOBAL *v85; // rax
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  _QWORD *v99; // rax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  unsigned int v102; // edx
  __int64 v103; // rax
  struct DXGADAPTER *v104; // rbx
  __int64 v105; // rcx
  __int64 LowPart; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rax
  struct DXGADAPTER *v112; // rdx
  int v113; // ecx
  int v114; // eax
  int v115; // ecx
  int v116; // eax
  unsigned int v117; // edx
  struct _LUID v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned int v121; // edx
  int v122; // ecx
  __int64 v123; // rax
  struct DXGFASTMUTEX *v124; // r14
  int v125; // ebx
  __int64 v126; // rdx
  int v127; // eax
  unsigned int *v128; // rbx
  unsigned int *v129; // r12
  __int64 v130; // rcx
  __int64 v131; // rcx
  struct _LUID v132; // rbx
  __int64 v133; // r12
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  struct DXGADAPTER *v138; // r14
  __int64 HighPart; // rax
  int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  _QWORD *v147; // rax
  _QWORD *v148; // rax
  int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  _QWORD *v152; // rax
  struct HDXGMONITOR__ *v153; // rbx
  __int64 v154; // rdx
  int v155; // eax
  __int64 v156; // rdx
  __int64 v157; // rcx
  int v158; // r15d
  int v159; // eax
  __int64 v160; // rdx
  __int64 v161; // rcx
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rdx
  _QWORD *v166; // rax
  struct _DEVICE_OBJECT *v167; // rsi
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  struct DXGADAPTER *v172; // r14
  int v173; // eax
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  _QWORD *v180; // rax
  __int64 v181; // rdx
  _QWORD *v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  _QWORD *v186; // rax
  int v187; // eax
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rsi
  _QWORD *v191; // rax
  struct HDXGMONITOR__ *v192; // rsi
  __int64 v193; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v195; // rdx
  __int64 v196; // rcx
  _QWORD *v197; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  int v199; // eax
  __int64 v200; // rax
  unsigned int v201; // eax
  __int64 v202; // rax
  int WideColorModeEnforced; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v204; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  __int64 Value; // rcx
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // rax
  int v210; // eax
  __int64 v211; // rax
  int v212; // eax
  int SDRWhiteLevel; // eax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  _QWORD *v217; // rax
  __int64 v218; // rax
  int v219; // eax
  __int64 v220; // rdx
  __int64 v221; // rcx
  _QWORD *v222; // rax
  struct _LUID *v223; // rdx
  __int64 v224; // r8
  __int64 v225; // rdx
  struct DXGGLOBAL *v226; // rax
  __int64 v227; // rcx
  __int64 v228; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v230; // [rsp+28h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v231; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v232; // [rsp+58h] [rbp-B0h] BYREF
  bool v233; // [rsp+59h] [rbp-AFh] BYREF
  char v234; // [rsp+5Ah] [rbp-AEh] BYREF
  char v235; // [rsp+5Bh] [rbp-ADh]
  char v236; // [rsp+5Ch] [rbp-ACh] BYREF
  char v237; // [rsp+5Dh] [rbp-ABh]
  char v238; // [rsp+5Eh] [rbp-AAh]
  char v239; // [rsp+5Fh] [rbp-A9h] BYREF
  unsigned __int8 v240[4]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int8 v241[4]; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v242; // [rsp+68h] [rbp-A0h] BYREF
  int v243; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct DXGADAPTER *v244[2]; // [rsp+70h] [rbp-98h] BYREF
  struct HDXGMONITOR__ *v245; // [rsp+80h] [rbp-88h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v246; // [rsp+88h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v247; // [rsp+8Ch] [rbp-7Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v248; // [rsp+90h] [rbp-78h] BYREF
  int v249; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v250; // [rsp+98h] [rbp-70h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+A0h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v252; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v253; // [rsp+B0h] [rbp-58h] BYREF
  int v254; // [rsp+B8h] [rbp-50h]
  struct _LUID v255; // [rsp+C0h] [rbp-48h] BYREF
  struct HDXGMONITOR__ *v256; // [rsp+C8h] [rbp-40h] BYREF
  struct _LUID v257; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v258; // [rsp+D8h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v259; // [rsp+E0h] [rbp-28h] BYREF
  int v260; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v261; // [rsp+F0h] [rbp-18h]
  char v262; // [rsp+F8h] [rbp-10h]
  __int64 v263; // [rsp+100h] [rbp-8h] BYREF
  int v264; // [rsp+108h] [rbp+0h]
  char v265[8]; // [rsp+110h] [rbp+8h] BYREF
  struct DXGADAPTER *v266; // [rsp+118h] [rbp+10h]
  char v267; // [rsp+120h] [rbp+18h]
  char v268[8]; // [rsp+128h] [rbp+20h] BYREF
  struct DXGADAPTER *v269; // [rsp+130h] [rbp+28h]
  char v270; // [rsp+138h] [rbp+30h]
  DXGADAPTER *v271[2]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v272[16]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v273; // [rsp+160h] [rbp+58h] BYREF
  __int64 v274; // [rsp+170h] [rbp+68h]
  __int128 v275; // [rsp+178h] [rbp+70h]
  _OWORD v276[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v277[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v278[40]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v279[144]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v280[144]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v281[144]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v282[144]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v244[0] = 0LL;
  memset(v277, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v277[1]);
  v6 = 1;
  v260 = -1;
  v277[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v277[6]) = -1;
  LODWORD(v277[3]) = 39;
  v261 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v262 = 1;
    v260 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v262 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v260, 2184LL);
  LODWORD(v9) = -1073741811;
  if ( a2 )
  {
    v11 = *(_DWORD *)a2;
    v12 = 4294967274LL;
    LODWORD(DeviceInterfaces) = 0;
    if ( *(_DWORD *)a2 <= 0xFFFFFFEA )
    {
      if ( v11 != -22 )
      {
        if ( v11 <= 8 )
        {
          if ( v11 < 7 )
          {
            v14 = v11 - 2;
            if ( !v14 )
            {
              if ( !a1 )
              {
                v44 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                *(_QWORD *)(v44 + 24) = 5180LL;
                WdLogEvent5_WdAssertion(v44);
              }
              TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
              goto LABEL_261;
            }
            v15 = v14 - 1;
            if ( !v15 )
            {
              if ( !a1 )
              {
                v38 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                *(_QWORD *)(v38 + 24) = 5113LL;
                WdLogEvent5_WdAssertion(v38);
              }
              memset(v278, 0, sizeof(v278));
              v40 = 0;
              LODWORD(DeviceInterfaces) = -1071774970;
              do
              {
                if ( v40 >= 0x10 )
                  break;
                if ( v278[34] )
                {
                  v41 = WdLogNewEntry5_WdAssertion(v39, v7);
                  *(_QWORD *)(v41 + 24) = 5125LL;
                  WdLogEvent5_WdAssertion(v41);
                }
                memset(v278, 0, sizeof(v278));
                v42 = *(_DWORD *)(a2 + 16);
                v43 = *(struct _LUID *)(a2 + 8);
                v238 = 0;
                v237 = 0;
                LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                              v43,
                                              v42,
                                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v278[17],
                                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v278[17] + 1,
                                              (__int64)&v278[32] + 4);
                if ( (int)DeviceInterfaces >= 0 )
                {
                  v278[8] = *(_QWORD *)(a2 + 8);
                  HIDWORD(v278[9]) = *(_DWORD *)(a2 + 16);
                  HIDWORD(v278[2]) = 65537;
                  LODWORD(v278[9]) = v40;
                  LODWORD(v278[29]) = -13434880;
                  BYTE1(v278[22]) = (v237 == 0 ? 2 : 0) | (v238 == 0);
                  v278[6] = 0xCF00000000000LL;
                  LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(v278, a2 + 8, 0LL, 1LL, 0);
                  if ( (int)DeviceInterfaces >= 0 )
                  {
                    DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v278[10], a2 + 32);
                    *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
                  }
                  BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v278);
                  ++v40;
                }
              }
              while ( (_DWORD)DeviceInterfaces == -1071774970 );
              goto LABEL_262;
            }
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 == 2 )
              {
                if ( !a1 )
                {
                  v17 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
                  *(_QWORD *)(v17 + 24) = 5190LL;
                  WdLogEvent5_WdAssertion(v17);
                }
                TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
                goto LABEL_261;
              }
              goto LABEL_97;
            }
            DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, (struct _LUID *)(a2 + 8));
            v22 = v244[0];
            if ( !v244[0] )
            {
              v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
              v23[3] = *(unsigned int *)(a2 + 8);
              v23[4] = *(int *)(a2 + 12);
              v23[5] = -1073741811LL;
              WdLogEvent5_WdWarning(v23);
              goto LABEL_263;
            }
            v266 = v244[0];
            v267 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v265);
            if ( *((_DWORD *)v22 + 50) != 1 )
            {
              v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
              LODWORD(v9) = -1073741130;
              *(struct DXGADAPTER **)(v27 + 24) = v244[0];
              *(_QWORD *)(v27 + 32) = -1073741130LL;
              WdLogEvent5_WdWarning(v27);
LABEL_26:
              v35 = (DXGADAPTERSTOPRESETLOCKSHARED *)v265;
LABEL_27:
              DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v35);
              goto LABEL_263;
            }
            v9 = (struct _DEVICE_OBJECT *)v244[0];
            v28 = (struct _DEVICE_OBJECT *)*((_QWORD *)v244[0] + 27);
            if ( !v28 )
            {
              v29 = WdLogNewEntry5_WdError(0LL, v24);
              *(_QWORD *)(v29 + 24) = v9;
              WdLogEvent5_WdError(v29);
              LODWORD(v9) = -1073741275;
              goto LABEL_26;
            }
            DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v28);
            SymbolicLinkList = 0LL;
            v9 = DeviceAttachmentBaseRef;
            DeviceInterfaces = (struct DXGADAPTER *)IoGetDeviceInterfaces(
                                                      &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                                      DeviceAttachmentBaseRef,
                                                      0,
                                                      &SymbolicLinkList);
            ObfDereferenceObject(v9);
            if ( (int)DeviceInterfaces < 0 )
            {
              v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
              *(_QWORD *)(v34 + 24) = v9;
              *(_QWORD *)(v34 + 32) = DeviceInterfaces;
              WdLogEvent5_WdWarning(v34);
              LODWORD(v9) = (_DWORD)DeviceInterfaces;
              goto LABEL_26;
            }
            wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
            v36 = SymbolicLinkList;
            *(_WORD *)(a2 + 22) = 92;
            ExFreePoolWithTag(v36, 0);
            v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)v265;
            goto LABEL_29;
          }
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, (struct _LUID *)(a2 + 8));
          DeviceInterfaces = v244[0];
          if ( !v244[0] )
          {
LABEL_46:
            v49 = WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
            *(_QWORD *)(v49 + 24) = *(int *)(a2 + 12);
            *(_QWORD *)(v49 + 32) = *(unsigned int *)(a2 + 8);
            goto LABEL_263;
          }
          v232 = 0;
          v50 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v232, 0);
          v9 = (struct _DEVICE_OBJECT *)v50;
          if ( v50 < 0 )
          {
            v54 = WdLogNewEntry5_WdWarning(v52, v51, v53);
            *(_QWORD *)(v54 + 24) = v9;
            WdLogEvent5_WdWarning(v54);
LABEL_66:
            v71 = (DXGSESSIONMODECHANGELOCK *)&v232;
LABEL_203:
            DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v71);
            goto LABEL_263;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v279, DeviceInterfaces, 0LL);
          if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v279, 0LL) < 0 )
          {
            v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
            v58[3] = DeviceInterfaces;
            v58[4] = *((int *)DeviceInterfaces + 80);
            v58[5] = *((unsigned int *)DeviceInterfaces + 79);
            WdLogEvent5_WdWarning(v58);
            LODWORD(v9) = -1073741811;
LABEL_65:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v279, v59);
            goto LABEL_66;
          }
          v60 = *((_QWORD *)DeviceInterfaces + 337);
          if ( !v60 || !*(_BYTE *)(v60 + 250) )
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v57);
            v61[3] = DeviceInterfaces;
            v61[4] = *((int *)DeviceInterfaces + 80);
            v61[5] = *((unsigned int *)DeviceInterfaces + 79);
            WdLogEvent5_WdWarning(v61);
            LODWORD(v9) = -1073741637;
            goto LABEL_65;
          }
          if ( *(_DWORD *)a2 == 7 )
          {
            v239 = 0;
            if ( !a1 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v56, v55);
              *(_QWORD *)(v62 + 24) = 5269LL;
              WdLogEvent5_WdAssertion(v62);
            }
            v63 = *(unsigned int *)(a2 + 16);
            *(_DWORD *)(a2 + 20) = 0;
            LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(DeviceInterfaces, v63, &v239);
            if ( (int)DeviceInterfaces >= 0 )
              *(_DWORD *)(a2 + 20) = (v239 != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
          }
          else
          {
            if ( a1 || *(_DWORD *)a2 != 8 )
            {
              v65 = WdLogNewEntry5_WdAssertion(v56, v55);
              *(_QWORD *)(v65 + 24) = 5286LL;
              WdLogEvent5_WdAssertion(v65);
            }
            v66 = *(_DWORD *)(a2 + 16);
            v240[0] = 0;
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(DeviceInterfaces, v66, v240) >= 0 && v240[0] )
            {
              v70 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v69);
              v70[3] = *((int *)DeviceInterfaces + 80);
              v70[4] = *((unsigned int *)DeviceInterfaces + 79);
              v70[5] = *(unsigned int *)(a2 + 16);
              WdLogEvent5_WdWarning(v70);
              LODWORD(v9) = -1073741649;
              goto LABEL_65;
            }
            LOBYTE(v69) = *(_BYTE *)(a2 + 20) & 1;
            LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                          DeviceInterfaces,
                                          *(unsigned int *)(a2 + 16),
                                          v69,
                                          v277);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v279, v64);
          v72 = (DXGSESSIONMODECHANGELOCK *)&v232;
LABEL_69:
          DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(v72);
          goto LABEL_262;
        }
        if ( v11 > 0xB )
        {
          if ( v11 != 100 )
          {
            if ( v11 != -24 )
            {
              if ( v11 == -23 )
              {
                if ( !IsCurrentProcessAdmin() )
                {
                  LODWORD(v9) = -1073741790;
                  goto LABEL_263;
                }
                DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, (struct _LUID *)(a2 + 8));
                v73 = v244[0];
                if ( v244[0] )
                {
                  v74 = *(unsigned int *)(a2 + 16);
                  v259 = 0LL;
                  MonitorHandle = MonitorGetMonitorHandle(
                                    (__int64)v244[0],
                                    v74,
                                    0LL,
                                    &DxgkDisplayConfigDeviceInfo,
                                    &v259);
                  v9 = (struct _DEVICE_OBJECT *)MonitorHandle;
                  if ( MonitorHandle < 0 )
                  {
                    v78 = (_QWORD *)WdLogNewEntry5_WdError(v77, v76);
                    v78[3] = *((int *)v73 + 80);
                    v78[4] = *((unsigned int *)v73 + 79);
                    v78[5] = *(unsigned int *)(a2 + 16);
                    v78[6] = v9;
                    WdLogEvent5_WdError(v78);
                    goto LABEL_263;
                  }
                  v79 = v259;
                  if ( !v259 )
                  {
                    v80 = WdLogNewEntry5_WdAssertion(v77, v76);
                    *(_QWORD *)(v80 + 24) = 6116LL;
                    WdLogEvent5_WdAssertion(v80);
                  }
                  v81 = *(_OWORD *)(a2 + 20);
                  v271[0] = 0LL;
                  v275 = v81;
                  DXGADAPTER_REFERENCE::Assign(v271, v73);
                  LODWORD(DeviceInterfaces) = MonitorSetAppOverride(
                                                (DXGADAPTER_REFERENCE *)v271,
                                                v79,
                                                *(_QWORD *)(a2 + 40));
                  MonitorReleaseMonitorHandle(v73, v79, &DxgkDisplayConfigDeviceInfo);
LABEL_262:
                  LODWORD(v9) = (_DWORD)DeviceInterfaces;
                  goto LABEL_263;
                }
                goto LABEL_46;
              }
LABEL_97:
              LODWORD(DeviceInterfaces) = -1073741811;
              goto LABEL_262;
            }
            Global = DXGGLOBAL::GetGlobal(4294967274LL, v7);
            v7 = *(unsigned int *)(a2 + 16);
            if ( !*((_BYTE *)Global + 304664) )
            {
              *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 8);
              *(_DWORD *)(a2 + 28) = v7;
              goto LABEL_262;
            }
            v263 = *(_QWORD *)(a2 + 8);
            v264 = v7;
            v253 = 0LL;
            v254 = 0;
            LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                          (struct DXGGLOBAL *)((char *)Global + 304616),
                                          (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v263,
                                          (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v253);
            if ( (int)DeviceInterfaces < 0 )
              goto LABEL_262;
            *(_QWORD *)(a2 + 20) = v253;
            v83 = v254;
LABEL_86:
            *(_DWORD *)(a2 + 28) = v83;
            goto LABEL_262;
          }
          goto LABEL_120;
        }
LABEL_186:
        v132 = *(struct _LUID *)(a2 + 8);
        v167 = (struct _DEVICE_OBJECT *)*(unsigned int *)(a2 + 16);
        v257 = v132;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, &v257);
        v172 = v244[0];
        if ( !v244[0] )
        {
          v105 = WdLogNewEntry5_WdTrace(v169, v168, v170, v171);
          HighPart = v257.HighPart;
          goto LABEL_188;
        }
        v236 = 0;
        v173 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v236, 0);
        v9 = (struct _DEVICE_OBJECT *)v173;
        if ( v173 < 0 )
        {
          v176 = WdLogNewEntry5_WdError(v175, v174);
          *(_QWORD *)(v176 + 24) = v9;
          WdLogEvent5_WdError(v176);
LABEL_202:
          v71 = (DXGSESSIONMODECHANGELOCK *)&v236;
          goto LABEL_203;
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v282, v172, 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v282, 0LL) < 0 )
        {
          v180 = (_QWORD *)WdLogNewEntry5_WdError(v178, v177);
          v180[3] = v172;
          v180[4] = *((int *)v172 + 80);
          v180[5] = *((unsigned int *)v172 + 79);
          WdLogEvent5_WdError(v180);
          LODWORD(v9) = -1073741811;
LABEL_201:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v282, v181);
          goto LABEL_202;
        }
        if ( !*((_QWORD *)v172 + 337) )
        {
          v182 = (_QWORD *)WdLogNewEntry5_WdWarning(v178, v177, v179);
          v182[3] = v172;
          v182[4] = *((int *)v172 + 80);
          v182[5] = *((unsigned int *)v172 + 79);
          WdLogEvent5_WdWarning(v182);
          LODWORD(v9) = -1073741637;
          goto LABEL_201;
        }
        v241[0] = 0;
        v9 = v167;
        if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v172, (unsigned int)v167, v241) == -1073741275 )
        {
          v186 = (_QWORD *)WdLogNewEntry5_WdWarning(v184, v183, v185);
          v186[3] = *((int *)v172 + 80);
          v186[4] = *((unsigned int *)v172 + 79);
          v186[5] = v167;
          v186[6] = -1073741275LL;
          WdLogEvent5_WdWarning(v186);
          v232 = 0;
        }
        else
        {
          v232 = v241[0];
        }
        v245 = 0LL;
        v187 = MonitorGetMonitorHandle((__int64)v172, (unsigned int)v167, 0LL, &DxgkDisplayConfigDeviceInfo, &v245);
        v190 = v187;
        if ( v187 < 0 )
        {
          v191 = (_QWORD *)WdLogNewEntry5_WdError(v189, v188);
          v191[3] = *((int *)v172 + 80);
          v191[4] = *((unsigned int *)v172 + 79);
          v191[5] = v9;
          v191[6] = v190;
          WdLogEvent5_WdError(v191);
          LODWORD(v9) = v190;
          goto LABEL_201;
        }
        v192 = v245;
        if ( !v245 )
        {
          v193 = WdLogNewEntry5_WdAssertion(v189, v188);
          *(_QWORD *)(v193 + 24) = 5837LL;
          WdLogEvent5_WdAssertion(v193);
        }
        v242 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v192, &v242);
        DeviceInterfaces = (struct DXGADAPTER *)IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable >= 0 )
        {
          v235 = 0;
          IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v245);
          DeviceInterfaces = (struct DXGADAPTER *)IsMonitorAndDriverWCGCapable;
          if ( IsMonitorAndDriverWCGCapable >= 0 )
          {
            v246.Value = 0;
            v252 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            v233 = 0;
            v199 = IsCurrentModeAdvancedColor(v172, (unsigned int)v9, &v246, &v252, &v233);
            DeviceInterfaces = (struct DXGADAPTER *)v199;
            if ( v199 >= 0 )
            {
              if ( v232 && v233 )
              {
                v200 = WdLogNewEntry5_WdAssertion(v196, v195);
                *(_QWORD *)(v200 + 24) = 5888LL;
                WdLogEvent5_WdAssertion(v200);
              }
              v201 = *(_DWORD *)a2;
              if ( *(_DWORD *)a2 == 9 )
              {
                if ( !a1 )
                {
                  v202 = WdLogNewEntry5_WdAssertion(v196, v195);
                  *(_QWORD *)(v202 + 24) = 5898LL;
                  WdLogEvent5_WdAssertion(v202);
                }
                v241[1] = 0;
                WideColorModeEnforced = MonitorGetWideColorModeEnforced(v245, &v241[1]);
                DeviceInterfaces = (struct DXGADAPTER *)WideColorModeEnforced;
                if ( WideColorModeEnforced >= 0 )
                {
                  if ( (v242 & 1) == 0 && !v235 || v232 )
                    v6 = 0;
                  v204.0 = v246.0;
                  *(_DWORD *)(a2 + 20) = (v241[1] != 0 ? 4 : 0) | (v233 ? 2 : 0) | v6 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                  ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v204);
                  Value = v246.Value;
                  *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                  *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(Value);
                  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal(
                                                                                           v208,
                                                                                           v207)
                                                                              + 304564) == 0
                                                                            ? 8
                                                                            : 0);
                  goto LABEL_259;
                }
              }
              else
              {
                if ( v201 != 10 )
                {
                  if ( v201 == 11 )
                  {
                    if ( !a1 )
                    {
                      v211 = WdLogNewEntry5_WdAssertion(v196, v195);
                      *(_QWORD *)(v211 + 24) = 5974LL;
                      WdLogEvent5_WdAssertion(v211);
                    }
                    v212 = 1000;
                    v243 = 1000;
                    if ( v233 && (v242 & 1) != 0 )
                    {
                      SDRWhiteLevel = MonitorGetSDRWhiteLevel(v245, &v243);
                      DeviceInterfaces = (struct DXGADAPTER *)SDRWhiteLevel;
                      if ( SDRWhiteLevel >= 0 )
                      {
                        v212 = v243;
                      }
                      else
                      {
                        v217 = (_QWORD *)WdLogNewEntry5_WdWarning(v215, v214, v216);
                        v217[3] = *((int *)v172 + 80);
                        v217[4] = *((unsigned int *)v172 + 79);
                        v217[5] = v9;
                        v217[6] = DeviceInterfaces;
                        WdLogEvent5_WdWarning(v217);
                        v212 = 3000;
                      }
                    }
                    *(_DWORD *)(a2 + 20) = v212;
                    goto LABEL_259;
                  }
                  if ( v201 == -18 )
                  {
                    if ( a1 )
                    {
                      v218 = WdLogNewEntry5_WdAssertion(v196, v195);
                      *(_QWORD *)(v218 + 24) = 6003LL;
                      WdLogEvent5_WdAssertion(v218);
                    }
                    if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                    {
                      LODWORD(DeviceInterfaces) = -1073741811;
                    }
                    else if ( v233 && (v242 & 1) != 0 )
                    {
                      v219 = MonitorSetSDRWhiteLevel(v245);
                      DeviceInterfaces = (struct DXGADAPTER *)v219;
                      if ( v219 >= 0 )
                      {
                        if ( v219 )
                        {
                          if ( v219 == 255 )
                            LODWORD(DeviceInterfaces) = 0;
                        }
                        else
                        {
                          if ( !*(_BYTE *)(a2 + 24) )
                            goto LABEL_259;
                          TriggerSDRWhiteLevelChangedWnf();
                          v258 = 0LL;
                          memset(v276, 0, sizeof(v276));
                          LODWORD(v276[0]) = 13;
                          DXGADAPTER::IsAdapterSessionized(v172, v223, 0LL, &v258);
                          SMgrGdiCallout(
                            v276,
                            v258,
                            v224,
                            0LL,
                            v224 & (unsigned __int64)v230,
                            v224 & (unsigned __int64)v231);
                        }
                      }
                      else
                      {
                        v222 = (_QWORD *)WdLogNewEntry5_WdError(v221, v220);
                        v222[3] = *((int *)v172 + 80);
                        v222[4] = *((unsigned int *)v172 + 79);
                        v222[5] = v9;
                        v222[6] = DeviceInterfaces;
                        WdLogEvent5_WdError(v222);
                      }
                    }
                    else
                    {
                      LODWORD(DeviceInterfaces) = -1073741637;
                    }
                    if ( *(_BYTE *)(a2 + 24) )
                      DxgkNotifyDisplayChange(0LL);
                  }
LABEL_259:
                  MonitorReleaseMonitorHandle(v172, v245, &DxgkDisplayConfigDeviceInfo);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v282, v225);
                  v72 = (DXGSESSIONMODECHANGELOCK *)&v236;
                  goto LABEL_69;
                }
                if ( a1 )
                {
                  v209 = WdLogNewEntry5_WdAssertion(v196, v195);
                  *(_QWORD *)(v209 + 24) = 5928LL;
                  WdLogEvent5_WdAssertion(v209);
                }
                if ( (v242 & 1) == 0 && !v235 || v232 )
                {
                  LODWORD(DeviceInterfaces) = -1073741637;
                  goto LABEL_259;
                }
                LOBYTE(v195) = *(_BYTE *)(a2 + 20) & 1;
                v210 = MonitorEnableDisableAdvancedColor(v245, v195);
                DeviceInterfaces = (struct DXGADAPTER *)v210;
                if ( v210 >= 0 )
                {
                  if ( v210 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v233 )
                    LODWORD(DeviceInterfaces) = 0;
                  goto LABEL_259;
                }
              }
            }
          }
        }
        v197 = (_QWORD *)WdLogNewEntry5_WdError(v196, v195);
        v197[3] = *((int *)v172 + 80);
        v197[4] = *((unsigned int *)v172 + 79);
        v197[5] = v9;
        v197[6] = DeviceInterfaces;
        WdLogEvent5_WdError(v197);
        goto LABEL_259;
      }
      TargetBaseType = DxgkCreateLightweightDeviceAndContext((struct _LUID *)(a2 + 8));
LABEL_261:
      LODWORD(DeviceInterfaces) = TargetBaseType;
      goto LABEL_262;
    }
    if ( v11 == -19 )
    {
      v226 = DXGGLOBAL::GetGlobal(4294967274LL, v7);
      TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(v226, SendColorimetricControlToDriverCallback, a2, 4LL);
      goto LABEL_261;
    }
    if ( v11 == -18 )
      goto LABEL_186;
    if ( v11 != -16 )
    {
      switch ( v11 )
      {
        case 0xFFFFFFF2:
          v124 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967274LL, v7) + 1272);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v272, v124, 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v272);
          v125 = *((_DWORD *)v124 + 15);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v272);
          *(_DWORD *)(a2 + 24) = v125;
          *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v124, v126);
          *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v124);
          v127 = *(_DWORD *)(a2 + 36);
          if ( (v127 & 2) != 0 )
            goto LABEL_262;
          v128 = (unsigned int *)(a2 + 20);
          v129 = (unsigned int *)(a2 + 16);
          if ( (v127 & 1) != 0 )
          {
            LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                          v124,
                                          *v128,
                                          (struct _LUID *)(a2 + 8),
                                          (unsigned int *)(a2 + 16));
            if ( (int)DeviceInterfaces >= 0 )
              goto LABEL_262;
            v89 = (_QWORD *)WdLogNewEntry5_WdError(v130, v7);
            v90 = *v128;
LABEL_110:
            v89[3] = v90;
LABEL_111:
            WdLogEvent5_WdError(v89);
            goto LABEL_262;
          }
          LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                        v124,
                                        (const struct _LUID *)(a2 + 8),
                                        *v129,
                                        (unsigned int *)(a2 + 20));
          if ( (int)DeviceInterfaces >= 0 )
            goto LABEL_262;
          v89 = (_QWORD *)WdLogNewEntry5_WdError(v131, v7);
          v89[3] = *(int *)(a2 + 12);
          v89[4] = *(unsigned int *)(a2 + 8);
          v123 = *v129;
          break;
        case 0xFFFFFFF3:
          v117 = *(_DWORD *)(a2 + 16);
          v118 = *(struct _LUID *)(a2 + 8);
          v240[1] = 0;
          v240[2] = 0;
          v247 = D3DKMDT_VOT_HD15;
          v248 = D3DKMDT_VOT_HD15;
          v249 = 0;
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(v118, v117, &v247, &v248, (__int64)&v249);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v121 = (v240[1] != 0) | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
            v122 = -(v240[2] != 0);
            *(_DWORD *)(a2 + 20) = v247;
            *(_DWORD *)(a2 + 24) = v248;
            v83 = v249;
            v7 = v122 & 2 | v121 & 0xFFFFFFFD;
            *(_DWORD *)(a2 + 32) = v7;
            goto LABEL_86;
          }
          v89 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119);
          v89[3] = *(int *)(a2 + 12);
          v89[4] = *(unsigned int *)(a2 + 8);
          v123 = *(unsigned int *)(a2 + 16);
          break;
        case 0xFFFFFFF4:
          *(_DWORD *)(a2 + 20) = 0;
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, (struct _LUID *)(a2 + 8));
          v104 = v244[0];
          if ( v244[0] )
          {
            v269 = v244[0];
            v270 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v268);
            if ( *((_DWORD *)v104 + 50) != 1 )
            {
              v111 = WdLogNewEntry5_WdTrace(v108, v107, v109, v110);
              LODWORD(v9) = -1073741130;
              *(struct DXGADAPTER **)(v111 + 24) = v244[0];
              *(_QWORD *)(v111 + 32) = -1073741130LL;
              v35 = (DXGADAPTERSTOPRESETLOCKSHARED *)v268;
              goto LABEL_27;
            }
            v112 = v244[0];
            *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v244[0] + 510) >> 2)) & 1;
            v113 = *(_DWORD *)(a2 + 20) ^ (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v112 + 510) >> 2)) & 2;
            *(_DWORD *)(a2 + 20) = v113;
            v114 = v113 ^ ((unsigned __int8)v113 ^ (unsigned __int8)(*((_DWORD *)v112 + 510) >> 2)) & 4;
            *(_DWORD *)(a2 + 20) = v114;
            v115 = v114 ^ ((unsigned __int8)v114 ^ (unsigned __int8)(32 * *((_DWORD *)v112 + 510))) & 0x20;
            *(_DWORD *)(a2 + 20) = v115;
            v116 = v115 ^ ((unsigned __int8)v115 ^ (unsigned __int8)(8 * *((_DWORD *)v112 + 510))) & 0x10;
            v37 = (DXGADAPTERSTOPRESETLOCKSHARED *)v268;
            *(_DWORD *)(a2 + 20) = v116;
LABEL_29:
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED(v37);
            goto LABEL_262;
          }
LABEL_136:
          v105 = WdLogNewEntry5_WdTrace(v93, v92, v94, v95);
          *(_QWORD *)(v105 + 24) = *(int *)(a2 + 12);
          LowPart = *(unsigned int *)(a2 + 8);
LABEL_189:
          *(_QWORD *)(v105 + 32) = LowPart;
          LODWORD(v9) = -1073741811;
          goto LABEL_263;
        case 0xFFFFFFF6:
LABEL_120:
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, (struct _LUID *)(a2 + 8));
          v9 = (struct _DEVICE_OBJECT *)v244[0];
          if ( v244[0] )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v280, v244[0], 0LL);
            if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v280, 0LL) < 0 )
              goto LABEL_122;
            if ( (HIDWORD(v9[1].DriverObject) & 0x100) == 0 )
            {
              v101 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, v96, v98);
              v101[3] = v9;
              v101[4] = SLODWORD(v9->Reserved);
              v101[5] = HIDWORD(v9->DeviceObjectExtension);
              WdLogEvent5_WdWarning(v101);
              LODWORD(v9) = -1073741637;
LABEL_134:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v280, v100);
              goto LABEL_263;
            }
            if ( *(_DWORD *)a2 == -10 )
            {
              if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                          (ADAPTER_DISPLAY *)v9[8].DriverObject,
                          *(_DWORD *)(a2 + 16),
                          (struct _LUID *)(a2 + 20)) < 0 )
                goto LABEL_122;
            }
            else
            {
              if ( *(_DWORD *)a2 != 100 )
              {
                v103 = WdLogNewEntry5_WdAssertion(v97, v96);
                *(_QWORD *)(v103 + 24) = 5424LL;
                WdLogEvent5_WdAssertion(v103);
                goto LABEL_133;
              }
              v102 = *(_DWORD *)(a2 + 16);
              v274 = 0LL;
              v273 = 0LL;
              if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                          (DXGADAPTER *)v9,
                          v102,
                          (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v273) < 0 )
              {
LABEL_122:
                v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v97, v96, v98);
                v99[3] = v9;
                v99[4] = SLODWORD(v9->Reserved);
                v99[5] = HIDWORD(v9->DeviceObjectExtension);
                WdLogEvent5_WdWarning(v99);
LABEL_133:
                LODWORD(v9) = -1073741811;
                goto LABEL_134;
              }
              *(_DWORD *)(a2 + 20) = DWORD1(v273);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v280, v96);
            goto LABEL_262;
          }
          goto LABEL_136;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            v87 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
            *(_QWORD *)(v87 + 24) = 5327LL;
            WdLogEvent5_WdAssertion(v87);
          }
          if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal(v12, v7) + 310) = 0;
            goto LABEL_262;
          }
          v88 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v88 - 1) <= 3 )
          {
            v91 = (unsigned int)(v88 - 1);
            if ( (_DWORD)v91 )
            {
              v91 = (unsigned int)(v91 - 1);
              if ( (_DWORD)v91 )
              {
                v91 = (unsigned int)(v91 - 1);
                if ( (_DWORD)v91 )
                {
                  if ( (_DWORD)v91 == 1 )
                    v6 = 4;
                }
                else
                {
                  v6 = 3;
                }
              }
              else
              {
                v6 = 2;
              }
            }
            *((_DWORD *)DXGGLOBAL::GetGlobal(v91, v7) + 310) = v6;
            goto LABEL_262;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          v89 = (_QWORD *)WdLogNewEntry5_WdError(v88, v7);
          v90 = *(int *)(a2 + 20);
          v89[4] = -1073741811LL;
          goto LABEL_110;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            v84 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
            *(_QWORD *)(v84 + 24) = 5317LL;
            WdLogEvent5_WdAssertion(v84);
          }
          v85 = DXGGLOBAL::GetGlobal(v12, v7);
          v86 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)v85 + 310));
          if ( (unsigned int)(v86 - 1) <= 3 )
            v6 = v86;
          *(_DWORD *)(a2 + 20) = v6;
          goto LABEL_262;
        default:
          goto LABEL_97;
      }
      v89[5] = v123;
      goto LABEL_111;
    }
    v132 = *(struct _LUID *)(a2 + 8);
    v133 = *(unsigned int *)(a2 + 16);
    v255 = v132;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v244, &v255);
    v138 = v244[0];
    if ( !v244[0] )
    {
      v105 = WdLogNewEntry5_WdTrace(v135, v134, v136, v137);
      HighPart = v255.HighPart;
LABEL_188:
      *(_QWORD *)(v105 + 24) = HighPart;
      LowPart = v132.LowPart;
      goto LABEL_189;
    }
    v234 = 0;
    v140 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v234, 0);
    v9 = (struct _DEVICE_OBJECT *)v140;
    if ( v140 < 0 )
    {
      v143 = WdLogNewEntry5_WdError(v142, v141);
      *(_QWORD *)(v143 + 24) = v9;
      WdLogEvent5_WdError(v143);
LABEL_185:
      v71 = (DXGSESSIONMODECHANGELOCK *)&v234;
      goto LABEL_203;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v281, v138, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v281, 1LL) < 0 )
    {
      v147 = (_QWORD *)WdLogNewEntry5_WdError(v145, v144);
      v147[3] = v138;
      v147[4] = *((int *)v138 + 80);
      v147[5] = *((unsigned int *)v138 + 79);
      WdLogEvent5_WdError(v147);
      LODWORD(v9) = -1073741811;
LABEL_184:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v281, v144);
      goto LABEL_185;
    }
    if ( !*((_QWORD *)v138 + 337) )
    {
      v148 = (_QWORD *)WdLogNewEntry5_WdWarning(v145, v144, v146);
      v148[3] = v138;
      v148[4] = *((int *)v138 + 80);
      v148[5] = *((unsigned int *)v138 + 79);
      WdLogEvent5_WdWarning(v148);
LABEL_166:
      LODWORD(v9) = -1073741637;
      goto LABEL_184;
    }
    if ( *(_DWORD *)(a2 + 64) && (*((int *)v138 + 582) < 9216 || (*((_DWORD *)v138 + 510) & 8) == 0) )
      goto LABEL_166;
    v256 = 0LL;
    LOBYTE(v146) = 1;
    v149 = MonitorGetMonitorHandle((__int64)v138, (unsigned int)v133, v146, &DxgkDisplayConfigDeviceInfo, &v256);
    v9 = (struct _DEVICE_OBJECT *)v149;
    if ( v149 < 0 )
    {
      v152 = (_QWORD *)WdLogNewEntry5_WdError(v151, v150);
      v152[3] = *((int *)v138 + 80);
      v152[4] = *((unsigned int *)v138 + 79);
      v152[5] = v133;
      v152[6] = v9;
      WdLogEvent5_WdError(v152);
      goto LABEL_184;
    }
    v153 = v256;
    v250 = 0;
    MonitorIsMonitorAndLinkHDRCapable(v256, &v250);
    if ( (v250 & 1) != 0 && *(_DWORD *)(a2 + 64) )
    {
      MonitorReleaseMonitorHandle(v138, v153, &DxgkDisplayConfigDeviceInfo);
      goto LABEL_166;
    }
    v240[3] = 0;
    MonitorGetWideColorModeEnforced(v153, &v240[3]);
    LOBYTE(v154) = *(_DWORD *)(a2 + 64) != 0;
    v155 = MonitorSetEnforceWideColorMode(v153, v154);
    DeviceInterfaces = (struct DXGADAPTER *)v155;
    if ( v155 < 0 )
    {
      v166 = (_QWORD *)WdLogNewEntry5_WdError(v157, v156);
      v166[3] = *((int *)v138 + 80);
      v166[4] = *((unsigned int *)v138 + 79);
      v166[5] = v133;
      v166[6] = DeviceInterfaces;
      WdLogEvent5_WdError(v166);
    }
    else
    {
      v158 = v240[3];
      if ( !v240[3] || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
      {
        LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                      (_DWORD)v153,
                                      (int)a2 + 20,
                                      (int)a2 + 28,
                                      (int)a2 + 36,
                                      a2 + 44,
                                      *(_DWORD *)(a2 + 52),
                                      *(_DWORD *)(a2 + 56),
                                      *(_DWORD *)(a2 + 60));
      }
      else
      {
        v159 = MonitorSetDefaultAdvancedColorParams(v153);
        DeviceInterfaces = (struct DXGADAPTER *)v159;
        if ( v159 < 0 )
        {
          v162 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160);
          v162[3] = *((int *)v138 + 80);
          v162[4] = *((unsigned int *)v138 + 79);
          v162[5] = v133;
          v162[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v162);
LABEL_183:
          LODWORD(v9) = (_DWORD)DeviceInterfaces;
          goto LABEL_184;
        }
      }
      if ( (int)DeviceInterfaces > -1 )
      {
        MonitorReleaseMonitorHandle(v138, v153, &DxgkDisplayConfigDeviceInfo);
        if ( *(_DWORD *)(a2 + 64) == v158 )
        {
          if ( (_DWORD)DeviceInterfaces != 255 )
            LODWORD(DeviceInterfaces) = 255;
        }
        else
        {
          LODWORD(DeviceInterfaces) = 259;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v281, v165);
        v72 = (DXGSESSIONMODECHANGELOCK *)&v234;
        goto LABEL_69;
      }
      v163 = (_QWORD *)WdLogNewEntry5_WdError(v161, v160);
      v163[3] = *((int *)v138 + 80);
      v163[4] = *((unsigned int *)v138 + 79);
      v163[6] = (int)DeviceInterfaces;
      v163[5] = v133;
      WdLogEvent5_WdError(v163);
      LOBYTE(v164) = v158;
      MonitorSetEnforceWideColorMode(v153, v164);
    }
    MonitorReleaseMonitorHandle(v138, v153, &DxgkDisplayConfigDeviceInfo);
    goto LABEL_183;
  }
  v10 = WdLogNewEntry5_WdAssertion(v8, v7);
  *(_QWORD *)(v10 + 24) = 5027LL;
  WdLogEvent5_WdAssertion(v10);
LABEL_263:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v260, v7);
  if ( v262 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v227, &EventProfilerExit, v228, v260);
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(v244);
  return (unsigned int)v9;
}
