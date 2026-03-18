/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000976C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00098A8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000CFBC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C00359D8 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DEF58 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E3340 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E33D8 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00E5C90 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E7C30 (MonitorReleaseMonitorHandle.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7CC0 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00E7F28 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E80B4 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00E84A4 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00EDE64 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0136FB0 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C013C160 (DxgkIsVirtualizationDisabledForTarget.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C0153810 (MonitorGetWideColorModeEnforced.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01604E8 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020949C (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C020DF28 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C021ECD4 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C02650DC (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0265404 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C0292FF8 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C029B764 (DxgkNotifyDisplayChange.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02BF57C (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C02EED40 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C02EEF5C (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C02EF484 (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C02EF560 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02EFCE8 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C02EFF38 (MonitorSetAppOverride.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F024C (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02F0374 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F05BC (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 DeviceInterfaces; // rbx
  struct DXGFASTMUTEX *v13; // rdi
  __int64 v14; // rdx
  int v15; // r14d
  int v16; // eax
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _LUID v21; // rbx
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rbx
  struct HDXGMONITOR__ *v40; // rbx
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int IsMonitorAndDriverWCGCapable; // eax
  unsigned __int8 v45; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // eax
  int WideColorModeEnforced; // eax
  __int64 v50; // rdx
  __int64 Value; // rcx
  int ColorDepthFromPickedWireFormat; // eax
  unsigned int v53; // ecx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  bool v57; // zf
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct _DEVICE_OBJECT *v67; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  PZZWSTR v72; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v73; // rcx
  int v74; // eax
  int LightweightDeviceAndContext; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned int v88; // edi
  unsigned int v89; // edx
  struct _LUID v90; // rcx
  unsigned int v91; // edx
  struct _LUID v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int v95; // edx
  int v96; // ecx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v103; // rcx
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  _QWORD *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rdx
  _QWORD *v121; // rax
  __int64 v122; // rax
  unsigned int v123; // edx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  _QWORD *v127; // rax
  bool v128; // zf
  __int64 v129; // rdx
  int MonitorHandle; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  struct HDXGMONITOR__ *v134; // r14
  __int64 v135; // rax
  __int128 v136; // xmm0
  struct DXGGLOBAL *Global; // rax
  __int64 v138; // rax
  struct DXGGLOBAL *v139; // rax
  int v140; // eax
  __int64 v141; // rax
  __int64 v142; // rcx
  _QWORD *v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  _QWORD *v150; // rax
  __int64 v151; // rdx
  unsigned int v152; // edx
  _QWORD *v153; // rax
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 LowPart; // rax
  __int64 v157; // rax
  unsigned int *v158; // r14
  unsigned int *v159; // r12
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // r12
  __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 HighPart; // rax
  int v168; // eax
  __int64 v169; // rdx
  __int64 v170; // rcx
  __int64 v171; // rax
  unsigned int v172; // r8d
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  _QWORD *v176; // rax
  _QWORD *v177; // rax
  int v178; // eax
  __int64 v179; // rdx
  __int64 v180; // rcx
  struct HDXGMONITOR__ *v181; // r14
  __int64 v182; // rdx
  int v183; // eax
  __int64 v184; // rdx
  __int64 v185; // rcx
  int v186; // r15d
  int v187; // eax
  _QWORD *v188; // rax
  _QWORD *v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rdx
  _QWORD *v192; // rax
  __int64 v193; // rax
  _QWORD *v194; // rax
  __int64 v195; // rdx
  _QWORD *v196; // rax
  _QWORD *v197; // rax
  _QWORD *v198; // rax
  __int64 v199; // rax
  _QWORD *v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  int v204; // eax
  __int64 v205; // rax
  int SDRWhiteLevel; // eax
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  _QWORD *v210; // rax
  __int64 v211; // rax
  int v212; // eax
  __int64 v213; // rdx
  __int64 v214; // rcx
  _QWORD *v215; // rax
  struct _LUID *v216; // rdx
  __int64 v217; // r8
  __int64 v218; // r11
  struct DXGGLOBAL *v219; // rax
  unsigned __int8 v220; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v221; // [rsp+59h] [rbp-AFh] BYREF
  char v222; // [rsp+5Ah] [rbp-AEh]
  char v223; // [rsp+5Bh] [rbp-ADh] BYREF
  char v224; // [rsp+5Ch] [rbp-ACh]
  char v225; // [rsp+5Dh] [rbp-ABh]
  char v226; // [rsp+5Eh] [rbp-AAh] BYREF
  unsigned __int8 v227; // [rsp+5Fh] [rbp-A9h] BYREF
  unsigned __int8 v228[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGADAPTER *v229[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v230; // [rsp+78h] [rbp-90h]
  int v231; // [rsp+7Ch] [rbp-8Ch]
  struct HDXGMONITOR__ *v232; // [rsp+80h] [rbp-88h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v233; // [rsp+88h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v234; // [rsp+8Ch] [rbp-7Ch] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v235; // [rsp+90h] [rbp-78h] BYREF
  int v236; // [rsp+94h] [rbp-74h] BYREF
  int v237; // [rsp+98h] [rbp-70h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+A0h] [rbp-68h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v239; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v240; // [rsp+B0h] [rbp-58h] BYREF
  int v241; // [rsp+B8h] [rbp-50h]
  struct _LUID v242; // [rsp+C0h] [rbp-48h] BYREF
  struct HDXGMONITOR__ *v243; // [rsp+C8h] [rbp-40h] BYREF
  struct _LUID v244; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v245; // [rsp+D8h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v246; // [rsp+E0h] [rbp-28h] BYREF
  int v247; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v248; // [rsp+F0h] [rbp-18h]
  char v249; // [rsp+F8h] [rbp-10h]
  char v250[8]; // [rsp+100h] [rbp-8h] BYREF
  struct DXGADAPTER *v251; // [rsp+108h] [rbp+0h]
  char v252; // [rsp+110h] [rbp+8h]
  char v253[8]; // [rsp+118h] [rbp+10h] BYREF
  struct DXGADAPTER *v254; // [rsp+120h] [rbp+18h]
  char v255; // [rsp+128h] [rbp+20h]
  __int64 v256; // [rsp+130h] [rbp+28h] BYREF
  int v257; // [rsp+138h] [rbp+30h]
  _BYTE v258[16]; // [rsp+140h] [rbp+38h] BYREF
  DXGADAPTER *v259[2]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v260; // [rsp+160h] [rbp+58h] BYREF
  __int64 v261; // [rsp+170h] [rbp+68h]
  __int128 v262; // [rsp+178h] [rbp+70h]
  _OWORD v263[2]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v264[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v265[40]; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE v266[144]; // [rsp+338h] [rbp+230h] BYREF
  _BYTE v267[144]; // [rsp+3C8h] [rbp+2C0h] BYREF
  _BYTE v268[144]; // [rsp+458h] [rbp+350h] BYREF
  _BYTE v269[144]; // [rsp+4E8h] [rbp+3E0h] BYREF

  v229[0] = 0LL;
  memset(v264, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v264[1]);
  v6 = 1;
  v247 = -1;
  v264[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v264[6]) = -1;
  LODWORD(v264[3]) = 39;
  v248 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v249 = 1;
    v247 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v249 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v247, 2184LL);
  LODWORD(v9) = -1073741811;
  if ( !a2 )
  {
    v98 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v98 + 24) = 4946LL;
    WdLogEvent5_WdAssertion(v98);
    goto LABEL_92;
  }
  v10 = *(_DWORD *)a2;
  v11 = 4294967274LL;
  LODWORD(DeviceInterfaces) = 0;
  if ( *(_DWORD *)a2 <= 0xFFFFFFEA )
  {
    if ( v10 == -22 )
    {
      LightweightDeviceAndContext = DxgkCreateLightweightDeviceAndContext((struct _LUID *)(a2 + 8));
LABEL_61:
      LODWORD(DeviceInterfaces) = LightweightDeviceAndContext;
      goto LABEL_9;
    }
    if ( v10 > 8 )
    {
      if ( v10 <= 0xB )
        goto LABEL_18;
      if ( v10 == 100 )
        goto LABEL_168;
      if ( v10 == -24 )
      {
        Global = DXGGLOBAL::GetGlobal(4294967274LL, v7);
        v7 = *(unsigned int *)(a2 + 16);
        if ( !*((_BYTE *)Global + 304544) )
        {
          *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 28) = v7;
          goto LABEL_9;
        }
        v256 = *(_QWORD *)(a2 + 8);
        v257 = v7;
        v240 = 0LL;
        v241 = 0;
        LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                      (struct DXGGLOBAL *)((char *)Global + 304496),
                                      (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v256,
                                      (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *)&v240);
        if ( (int)DeviceInterfaces < 0 )
          goto LABEL_9;
        *(_QWORD *)(a2 + 20) = v240;
        v97 = v241;
        goto LABEL_87;
      }
      if ( v10 != -23 )
      {
LABEL_148:
        LODWORD(DeviceInterfaces) = -1073741811;
        goto LABEL_9;
      }
      if ( IsCurrentProcessAdmin() )
      {
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, (struct _LUID *)(a2 + 8));
        v17 = v229[0];
        if ( v229[0] )
        {
          v129 = *(unsigned int *)(a2 + 16);
          v246 = 0LL;
          MonitorHandle = MonitorGetMonitorHandle(v229[0], v129, 0LL, &DxgkDisplayConfigDeviceInfo, &v246);
          v9 = (struct _DEVICE_OBJECT *)MonitorHandle;
          if ( MonitorHandle < 0 )
          {
            v133 = (_QWORD *)WdLogNewEntry5_WdError(v132, v131);
            v133[3] = *((int *)v17 + 80);
            v133[4] = *((unsigned int *)v17 + 79);
            v133[5] = *(unsigned int *)(a2 + 16);
            v133[6] = v9;
            WdLogEvent5_WdError(v133);
            goto LABEL_11;
          }
          v134 = v246;
          if ( !v246 )
          {
            v135 = WdLogNewEntry5_WdAssertion(v132, v131);
            *(_QWORD *)(v135 + 24) = 6025LL;
            WdLogEvent5_WdAssertion(v135);
          }
          v136 = *(_OWORD *)(a2 + 20);
          v259[0] = 0LL;
          v262 = v136;
          DXGADAPTER_REFERENCE::Assign(v259, v17);
          LODWORD(DeviceInterfaces) = MonitorSetAppOverride((DXGADAPTER_REFERENCE *)v259, v134, *(_QWORD *)(a2 + 40));
          MonitorReleaseMonitorHandle(v17, v134, &DxgkDisplayConfigDeviceInfo);
          goto LABEL_10;
        }
        goto LABEL_181;
      }
      LODWORD(v9) = -1073741790;
LABEL_92:
      v17 = v229[0];
      goto LABEL_11;
    }
    if ( v10 < 7 )
    {
      v58 = v10 - 2;
      if ( v58 )
      {
        v59 = v58 - 1;
        if ( !v59 )
        {
          if ( !a1 )
          {
            v104 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
            *(_QWORD *)(v104 + 24) = 5032LL;
            WdLogEvent5_WdAssertion(v104);
          }
          memset(v265, 0, sizeof(v265));
          v88 = 0;
          LODWORD(DeviceInterfaces) = -1071774970;
          do
          {
            if ( v88 >= 0x10 )
              break;
            if ( v265[34] )
            {
              v105 = WdLogNewEntry5_WdAssertion(v87, v7);
              *(_QWORD *)(v105 + 24) = 5044LL;
              WdLogEvent5_WdAssertion(v105);
            }
            memset(v265, 0, sizeof(v265));
            v89 = *(_DWORD *)(a2 + 16);
            v90 = *(struct _LUID *)(a2 + 8);
            v225 = 0;
            v224 = 0;
            LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                          v90,
                                          v89,
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v265[17],
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v265[17] + 1,
                                          (__int64)&v265[32] + 4);
            if ( (int)DeviceInterfaces >= 0 )
            {
              v265[8] = *(_QWORD *)(a2 + 8);
              HIDWORD(v265[9]) = *(_DWORD *)(a2 + 16);
              HIDWORD(v265[2]) = 65537;
              LODWORD(v265[9]) = v88;
              LODWORD(v265[29]) = -13434880;
              BYTE1(v265[22]) = (v224 == 0 ? 2 : 0) | (v225 == 0);
              v265[6] = 0xCF00000000000LL;
              LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(
                                            (__int64)v265,
                                            (struct _LUID *)(a2 + 8),
                                            0,
                                            1u,
                                            0);
              if ( (int)DeviceInterfaces >= 0 )
              {
                DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((__int64)&v265[10], a2 + 32);
                *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
              }
              BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v265);
              ++v88;
            }
          }
          while ( (_DWORD)DeviceInterfaces == -1071774970 );
          goto LABEL_9;
        }
        v60 = v59 - 1;
        if ( !v60 )
        {
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, (struct _LUID *)(a2 + 8));
          v17 = v229[0];
          if ( !v229[0] )
          {
            v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v62, v61, v63);
            v100[3] = *(unsigned int *)(a2 + 8);
            v100[4] = *(int *)(a2 + 12);
            v100[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v100);
            goto LABEL_11;
          }
          v251 = v229[0];
          v252 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v250);
          if ( *((_DWORD *)v17 + 50) == 1 )
          {
            v17 = v229[0];
            v67 = (struct _DEVICE_OBJECT *)*((_QWORD *)v229[0] + 27);
            if ( v67 )
            {
              DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v67);
              SymbolicLinkList = 0LL;
              v9 = DeviceAttachmentBaseRef;
              DeviceInterfaces = IoGetDeviceInterfaces(
                                   &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                   DeviceAttachmentBaseRef,
                                   0,
                                   &SymbolicLinkList);
              ObfDereferenceObject(v9);
              if ( (int)DeviceInterfaces >= 0 )
              {
                wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
                v72 = SymbolicLinkList;
                *(_WORD *)(a2 + 22) = 92;
                ExFreePoolWithTag(v72, 0);
                if ( !v252 )
                  goto LABEL_10;
                v73 = (DXGADAPTERSTOPRESETLOCKSHARED *)v250;
LABEL_51:
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v73);
                goto LABEL_10;
              }
              v102 = WdLogNewEntry5_WdWarning(v70, v69, v71);
              *(_QWORD *)(v102 + 24) = v9;
              *(_QWORD *)(v102 + 32) = DeviceInterfaces;
              WdLogEvent5_WdWarning(v102);
              LODWORD(v9) = DeviceInterfaces;
            }
            else
            {
              v101 = WdLogNewEntry5_WdError(0LL, v64);
              *(_QWORD *)(v101 + 24) = v17;
              WdLogEvent5_WdError(v101);
              LODWORD(v9) = -1073741275;
            }
          }
          else
          {
            v86 = WdLogNewEntry5_WdWarning(v65, v64, v66);
            v17 = v229[0];
            LODWORD(v9) = -1073741130;
            *(struct DXGADAPTER **)(v86 + 24) = v229[0];
            *(_QWORD *)(v86 + 32) = -1073741130LL;
            WdLogEvent5_WdWarning(v86);
          }
          if ( !v252 )
            goto LABEL_11;
          v103 = (DXGADAPTERSTOPRESETLOCKSHARED *)v250;
LABEL_98:
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v103);
          goto LABEL_11;
        }
        if ( v60 != 2 )
          goto LABEL_148;
        if ( !a1 )
        {
          v99 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
          *(_QWORD *)(v99 + 24) = 5109LL;
          WdLogEvent5_WdAssertion(v99);
        }
        LightweightDeviceAndContext = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      }
      else
      {
        if ( !a1 )
        {
          v106 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
          *(_QWORD *)(v106 + 24) = 5099LL;
          WdLogEvent5_WdAssertion(v106);
        }
        LightweightDeviceAndContext = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
      }
      goto LABEL_61;
    }
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, (struct _LUID *)(a2 + 8));
    v17 = v229[0];
    if ( !v229[0] )
      goto LABEL_181;
    v221 = 0;
    v107 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v221, 0);
    v9 = (struct _DEVICE_OBJECT *)v107;
    if ( v107 < 0 )
    {
      v111 = WdLogNewEntry5_WdWarning(v109, v108, v110);
      *(_QWORD *)(v111 + 24) = v9;
      WdLogEvent5_WdWarning(v111);
LABEL_119:
      v128 = v221 == 0;
      goto LABEL_234;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v266, v17, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v266, 0LL) >= 0 )
    {
      v117 = *((_QWORD *)v17 + 334);
      if ( v117 && *(_BYTE *)(v117 + 250) )
      {
        if ( *(_DWORD *)a2 == 7 )
        {
          v226 = 0;
          if ( !a1 )
          {
            v118 = WdLogNewEntry5_WdAssertion(v113, v112);
            *(_QWORD *)(v118 + 24) = 5188LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v119 = *(unsigned int *)(a2 + 16);
          *(_DWORD *)(a2 + 20) = 0;
          LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(v17, v119, &v226);
          if ( (int)DeviceInterfaces >= 0 )
            *(_DWORD *)(a2 + 20) = (v226 != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
        }
        else
        {
          if ( a1 || *(_DWORD *)a2 != 8 )
          {
            v122 = WdLogNewEntry5_WdAssertion(v113, v112);
            *(_QWORD *)(v122 + 24) = 5205LL;
            WdLogEvent5_WdAssertion(v122);
          }
          v123 = *(_DWORD *)(a2 + 16);
          v227 = 0;
          if ( (int)CheckGivenTargetIsPartOfCloneGroup(v17, v123, &v227) >= 0 && v227 )
          {
            v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v125, v124, v126);
            v127[3] = *((int *)v17 + 80);
            v127[4] = *((unsigned int *)v17 + 79);
            v127[5] = *(unsigned int *)(a2 + 16);
            WdLogEvent5_WdWarning(v127);
            LODWORD(v9) = -1073741649;
            goto LABEL_118;
          }
          LOBYTE(v126) = *(_BYTE *)(a2 + 20) & 1;
          LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                        v17,
                                        *(unsigned int *)(a2 + 16),
                                        v126,
                                        v264);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v266, v120);
        v57 = v221 == 0;
        goto LABEL_39;
      }
      v121 = (_QWORD *)WdLogNewEntry5_WdWarning(v113, v112, v114);
      v121[3] = v17;
      v121[4] = *((int *)v17 + 80);
      v121[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdWarning(v121);
      LODWORD(v9) = -1073741637;
    }
    else
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdWarning(v113, v112, v114);
      v115[3] = v17;
      v115[4] = *((int *)v17 + 80);
      v115[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdWarning(v115);
      LODWORD(v9) = -1073741811;
    }
LABEL_118:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v266, v116);
    goto LABEL_119;
  }
  switch ( v10 )
  {
    case 0xFFFFFFF2:
      v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967274LL, v7) + 1160);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v258, v13, 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v258);
      v15 = *((_DWORD *)v13 + 15);
      if ( v258[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v258, v14);
      *(_DWORD *)(a2 + 24) = v15;
      *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v13, v14);
      *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v13);
      v16 = *(_DWORD *)(a2 + 36);
      if ( (v16 & 2) != 0 )
        goto LABEL_9;
      v158 = (unsigned int *)(a2 + 20);
      v159 = (unsigned int *)(a2 + 16);
      if ( (v16 & 1) != 0 )
      {
        LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                      v13,
                                      *v158,
                                      (struct _LUID *)(a2 + 8),
                                      (unsigned int *)(a2 + 16));
        if ( (int)DeviceInterfaces >= 0 )
          goto LABEL_9;
        v143 = (_QWORD *)WdLogNewEntry5_WdError(v160, v7);
        v144 = *v158;
        goto LABEL_156;
      }
      LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                    v13,
                                    (const struct _LUID *)(a2 + 8),
                                    *v159,
                                    (unsigned int *)(a2 + 20));
      if ( (int)DeviceInterfaces >= 0 )
        goto LABEL_9;
      v143 = (_QWORD *)WdLogNewEntry5_WdError(v161, v7);
      v143[3] = *(int *)(a2 + 12);
      v143[4] = *(unsigned int *)(a2 + 8);
      v145 = *v159;
LABEL_158:
      v143[5] = v145;
      goto LABEL_159;
    case 0xFFFFFFF4:
      *(_DWORD *)(a2 + 20) = 0;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, (struct _LUID *)(a2 + 8));
      v17 = v229[0];
      if ( v229[0] )
      {
        v254 = v229[0];
        v255 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v253);
        if ( *((_DWORD *)v17 + 50) == 1 )
        {
          v17 = v229[0];
          *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v229[0] + 504) >> 2)) & 1;
          v83 = *(_DWORD *)(a2 + 20) ^ ((unsigned __int8)*(_DWORD *)(a2 + 20) ^ (unsigned __int8)(*((_DWORD *)v17 + 504) >> 2)) & 2;
          *(_DWORD *)(a2 + 20) = v83;
          v84 = v83 ^ ((unsigned __int8)v83 ^ (unsigned __int8)(*((_DWORD *)v17 + 504) >> 2)) & 4;
          *(_DWORD *)(a2 + 20) = v84;
          v85 = v84 ^ ((unsigned __int8)v84 ^ (unsigned __int8)(32 * *((_DWORD *)v17 + 504))) & 0x20;
          *(_DWORD *)(a2 + 20) = v85;
          *(_DWORD *)(a2 + 20) = v85 ^ ((unsigned __int8)v85 ^ (unsigned __int8)(8 * *((_DWORD *)v17 + 504))) & 0x10;
          if ( !v255 )
            goto LABEL_10;
          v73 = (DXGADAPTERSTOPRESETLOCKSHARED *)v253;
          goto LABEL_51;
        }
        v157 = WdLogNewEntry5_WdTrace(v80, v7, v81, v82);
        LODWORD(v9) = -1073741130;
        v17 = v229[0];
        *(struct DXGADAPTER **)(v157 + 24) = v229[0];
        *(_QWORD *)(v157 + 32) = -1073741130LL;
        if ( !v255 )
          goto LABEL_11;
        v103 = (DXGADAPTERSTOPRESETLOCKSHARED *)v253;
        goto LABEL_98;
      }
      goto LABEL_181;
    case 0xFFFFFFF3:
      v91 = *(_DWORD *)(a2 + 16);
      v92 = *(struct _LUID *)(a2 + 8);
      v228[0] = 0;
      v228[1] = 0;
      v234 = D3DKMDT_VOT_HD15;
      v235 = D3DKMDT_VOT_HD15;
      v236 = 0;
      LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(v92, v91, &v234, &v235, (__int64)&v236);
      if ( (int)DeviceInterfaces < 0 )
      {
        v143 = (_QWORD *)WdLogNewEntry5_WdError(v94, v93);
        v143[3] = *(int *)(a2 + 12);
        v143[4] = *(unsigned int *)(a2 + 8);
        v145 = *(unsigned int *)(a2 + 16);
        goto LABEL_158;
      }
      v95 = (v228[0] != 0) | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
      v96 = -(v228[1] != 0);
      *(_DWORD *)(a2 + 20) = v234;
      *(_DWORD *)(a2 + 24) = v235;
      v97 = v236;
      v7 = v96 & 2 | v95 & 0xFFFFFFFD;
      *(_DWORD *)(a2 + 32) = v7;
LABEL_87:
      *(_DWORD *)(a2 + 28) = v97;
      goto LABEL_9;
    case 0xFFFFFFED:
      v219 = DXGGLOBAL::GetGlobal(4294967274LL, v7);
      LightweightDeviceAndContext = DXGGLOBAL::IterateAdaptersWithCallback(
                                      v219,
                                      SendColorimetricControlToDriverCallback,
                                      a2,
                                      4LL);
      goto LABEL_61;
  }
  if ( v10 != -18 )
  {
    if ( v10 != -16 )
    {
      if ( v10 != -10 )
      {
        if ( v10 != -6 )
        {
          if ( v10 == -5 )
          {
            if ( !a1 )
            {
              v138 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
              *(_QWORD *)(v138 + 24) = 5236LL;
              WdLogEvent5_WdAssertion(v138);
            }
            v139 = DXGGLOBAL::GetGlobal(v11, v7);
            v140 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)v139 + 282));
            if ( (unsigned int)(v140 - 1) <= 3 )
              v6 = v140;
            *(_DWORD *)(a2 + 20) = v6;
            goto LABEL_9;
          }
          goto LABEL_148;
        }
        if ( a1 )
        {
          v141 = WdLogNewEntry5_WdAssertion(4294967274LL, v7);
          *(_QWORD *)(v141 + 24) = 5246LL;
          WdLogEvent5_WdAssertion(v141);
        }
        if ( !g_OSTestSigningEnabled || *(_DWORD *)(a2 + 20) )
        {
          v142 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v142 - 1) <= 3 )
          {
            v146 = (unsigned int)(v142 - 1);
            if ( (_DWORD)v146 )
            {
              v146 = (unsigned int)(v146 - 1);
              if ( (_DWORD)v146 )
              {
                v146 = (unsigned int)(v146 - 1);
                if ( (_DWORD)v146 )
                {
                  if ( (_DWORD)v146 == 1 )
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
            *((_DWORD *)DXGGLOBAL::GetGlobal(v146, v7) + 282) = v6;
            goto LABEL_9;
          }
          LODWORD(DeviceInterfaces) = -1073741811;
          v143 = (_QWORD *)WdLogNewEntry5_WdError(v142, v7);
          v144 = *(int *)(a2 + 20);
          v143[4] = -1073741811LL;
LABEL_156:
          v143[3] = v144;
LABEL_159:
          WdLogEvent5_WdError(v143);
          goto LABEL_9;
        }
        *((_DWORD *)DXGGLOBAL::GetGlobal(v11, v7) + 282) = 0;
LABEL_9:
        v17 = v229[0];
LABEL_10:
        LODWORD(v9) = DeviceInterfaces;
        goto LABEL_11;
      }
LABEL_168:
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, (struct _LUID *)(a2 + 8));
      v17 = v229[0];
      if ( v229[0] )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v267, v229[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v267, 0LL) >= 0 )
        {
          if ( (*((_DWORD *)v17 + 87) & 0x100) == 0 )
          {
            v150 = (_QWORD *)WdLogNewEntry5_WdWarning(v148, v147, v149);
            v150[3] = v17;
            v150[4] = *((int *)v17 + 80);
            v150[5] = *((unsigned int *)v17 + 79);
            WdLogEvent5_WdWarning(v150);
            LODWORD(v9) = -1073741637;
LABEL_180:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v267, v151);
            goto LABEL_11;
          }
          if ( *(_DWORD *)a2 == -10 )
          {
            if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                        *((ADAPTER_DISPLAY **)v17 + 334),
                        *(_DWORD *)(a2 + 16),
                        (struct _LUID *)(a2 + 20)) >= 0 )
            {
LABEL_174:
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v267, v147);
              goto LABEL_10;
            }
          }
          else
          {
            if ( *(_DWORD *)a2 != 100 )
            {
              v154 = WdLogNewEntry5_WdAssertion(v148, v147);
              *(_QWORD *)(v154 + 24) = 5343LL;
              WdLogEvent5_WdAssertion(v154);
              goto LABEL_180;
            }
            v152 = *(_DWORD *)(a2 + 16);
            v261 = 0LL;
            v260 = 0LL;
            if ( (int)DXGADAPTER::GetVirtualMonitorInfo(v17, v152, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&v260) >= 0 )
            {
              *(_DWORD *)(a2 + 20) = DWORD1(v260);
              goto LABEL_174;
            }
          }
        }
        v153 = (_QWORD *)WdLogNewEntry5_WdWarning(v148, v147, v149);
        v153[3] = v17;
        v153[4] = *((int *)v17 + 80);
        v153[5] = *((unsigned int *)v17 + 79);
        WdLogEvent5_WdWarning(v153);
        goto LABEL_180;
      }
LABEL_181:
      v155 = WdLogNewEntry5_WdTrace(v77, v76, v78, v79);
      *(_QWORD *)(v155 + 24) = *(int *)(a2 + 12);
      LowPart = *(unsigned int *)(a2 + 8);
LABEL_226:
      *(_QWORD *)(v155 + 32) = LowPart;
      goto LABEL_11;
    }
    v21 = *(struct _LUID *)(a2 + 8);
    v162 = *(unsigned int *)(a2 + 16);
    v242 = v21;
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, &v242);
    v17 = v229[0];
    if ( !v229[0] )
    {
      v155 = WdLogNewEntry5_WdTrace(v164, v163, v165, v166);
      HighPart = v242.HighPart;
LABEL_225:
      *(_QWORD *)(v155 + 24) = HighPart;
      LowPart = v21.LowPart;
      goto LABEL_226;
    }
    v220 = 0;
    v168 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v220, 0);
    v9 = (struct _DEVICE_OBJECT *)v168;
    if ( v168 < 0 )
    {
      v171 = WdLogNewEntry5_WdError(v170, v169);
      *(_QWORD *)(v171 + 24) = v9;
      WdLogEvent5_WdError(v171);
LABEL_223:
      v128 = v220 == 0;
      goto LABEL_234;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v268, v17, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v268, 1LL, v172) < 0 )
    {
      v176 = (_QWORD *)WdLogNewEntry5_WdError(v174, v173);
      v176[3] = v17;
      v176[4] = *((int *)v17 + 80);
      v176[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdError(v176);
      LODWORD(v9) = -1073741811;
LABEL_222:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v268, v173);
      goto LABEL_223;
    }
    if ( !*((_QWORD *)v17 + 334) )
    {
      v177 = (_QWORD *)WdLogNewEntry5_WdWarning(v174, v173, v175);
      v177[3] = v17;
      v177[4] = *((int *)v17 + 80);
      v177[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdWarning(v177);
LABEL_197:
      LODWORD(v9) = -1073741637;
      goto LABEL_222;
    }
    if ( *(_DWORD *)(a2 + 64) && (*((int *)v17 + 576) < 9216 || (*((_DWORD *)v17 + 504) & 8) == 0) )
      goto LABEL_197;
    v243 = 0LL;
    LOBYTE(v175) = 1;
    v178 = MonitorGetMonitorHandle(v17, (unsigned int)v162, v175, &DxgkDisplayConfigDeviceInfo, &v243);
    DeviceInterfaces = v178;
    if ( v178 < 0 )
      goto LABEL_210;
    v181 = v243;
    v231 = 0;
    MonitorIsMonitorAndLinkHDRCapable(v243);
    if ( (v231 & 1) != 0 && *(_DWORD *)(a2 + 64) )
    {
      MonitorReleaseMonitorHandle(v17, v181, &DxgkDisplayConfigDeviceInfo);
      goto LABEL_197;
    }
    v228[2] = 0;
    MonitorGetWideColorModeEnforced(v181, &v228[2]);
    LOBYTE(v182) = *(_DWORD *)(a2 + 64) != 0;
    v183 = MonitorSetEnforceWideColorMode(v181, v182);
    DeviceInterfaces = v183;
    if ( v183 < 0 )
    {
      v192 = (_QWORD *)WdLogNewEntry5_WdError(v185, v184);
      v192[3] = *((int *)v17 + 80);
      v192[4] = *((unsigned int *)v17 + 79);
      v192[5] = v162;
      v192[6] = DeviceInterfaces;
      WdLogEvent5_WdError(v192);
      goto LABEL_220;
    }
    v186 = v228[2];
    if ( !v228[2] || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
    {
      LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                    (_DWORD)v181,
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
      v187 = MonitorSetDefaultAdvancedColorParams(v181);
      DeviceInterfaces = v187;
      if ( v187 < 0 )
      {
LABEL_210:
        v188 = (_QWORD *)WdLogNewEntry5_WdError(v180, v179);
        v188[3] = *((int *)v17 + 80);
        v188[4] = *((unsigned int *)v17 + 79);
        v188[5] = v162;
        v188[6] = DeviceInterfaces;
        WdLogEvent5_WdError(v188);
LABEL_221:
        LODWORD(v9) = DeviceInterfaces;
        goto LABEL_222;
      }
    }
    if ( (int)DeviceInterfaces <= -1 )
    {
      v189 = (_QWORD *)WdLogNewEntry5_WdError(v180, v179);
      v189[3] = *((int *)v17 + 80);
      v189[4] = *((unsigned int *)v17 + 79);
      v189[6] = (int)DeviceInterfaces;
      v189[5] = v162;
      WdLogEvent5_WdError(v189);
      LOBYTE(v190) = v186;
      MonitorSetEnforceWideColorMode(v181, v190);
LABEL_220:
      MonitorReleaseMonitorHandle(v17, v181, &DxgkDisplayConfigDeviceInfo);
      goto LABEL_221;
    }
    MonitorReleaseMonitorHandle(v17, v181, &DxgkDisplayConfigDeviceInfo);
    if ( *(_DWORD *)(a2 + 64) == v186 )
    {
      if ( (_DWORD)DeviceInterfaces != 255 )
        LODWORD(DeviceInterfaces) = 255;
    }
    else
    {
      LODWORD(DeviceInterfaces) = 259;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v268, v191);
    v57 = v220 == 0;
LABEL_39:
    if ( !v57 )
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_10;
  }
LABEL_18:
  v21 = *(struct _LUID *)(a2 + 8);
  v22 = *(_DWORD *)(a2 + 16);
  v244 = v21;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v229, &v244);
  v17 = v229[0];
  if ( !v229[0] )
  {
    v155 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
    HighPart = v244.HighPart;
    goto LABEL_225;
  }
  v223 = 0;
  v27 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v223, 0);
  v9 = (struct _DEVICE_OBJECT *)v27;
  if ( v27 < 0 )
  {
    v193 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v193 + 24) = v9;
    WdLogEvent5_WdError(v193);
  }
  else
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v269, v17, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v269, 0LL) < 0 )
    {
      v194 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v194[3] = v17;
      v194[4] = *((int *)v17 + 80);
      v194[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdError(v194);
      LODWORD(v9) = -1073741811;
    }
    else if ( *((_QWORD *)v17 + 334) )
    {
      v228[3] = 0;
      if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v17, v22, &v228[3]) == -1073741275 )
      {
        v197 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
        v197[3] = *((int *)v17 + 80);
        v197[4] = *((unsigned int *)v17 + 79);
        v197[5] = v22;
        v197[6] = -1073741275LL;
        WdLogEvent5_WdWarning(v197);
        v220 = 0;
      }
      else
      {
        v220 = v228[3];
      }
      v232 = 0LL;
      v36 = MonitorGetMonitorHandle(v17, v22, 0LL, &DxgkDisplayConfigDeviceInfo, &v232);
      v39 = v36;
      if ( v36 >= 0 )
      {
        v40 = v232;
        if ( !v232 )
        {
          v199 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v199 + 24) = 5756LL;
          WdLogEvent5_WdAssertion(v199);
        }
        v230 = 0;
        IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v40);
        DeviceInterfaces = IsMonitorAndLinkHDRCapable;
        if ( IsMonitorAndLinkHDRCapable >= 0 )
        {
          v222 = 0;
          IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v232);
          DeviceInterfaces = IsMonitorAndDriverWCGCapable;
          if ( IsMonitorAndDriverWCGCapable >= 0 )
          {
            v233.Value = 0;
            v239 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            v45 = IsCurrentModeAdvancedColor(v17, v22, &v233, &v239);
            v221 = v45;
            if ( v220 && v45 )
            {
              v201 = WdLogNewEntry5_WdAssertion(v47, v46);
              *(_QWORD *)(v201 + 24) = 5797LL;
              WdLogEvent5_WdAssertion(v201);
            }
            v48 = *(_DWORD *)a2;
            if ( *(_DWORD *)a2 == 9 )
            {
              if ( !a1 )
              {
                v202 = WdLogNewEntry5_WdAssertion(v47, v46);
                *(_QWORD *)(v202 + 24) = 5807LL;
                WdLogEvent5_WdAssertion(v202);
              }
              v228[4] = 0;
              WideColorModeEnforced = MonitorGetWideColorModeEnforced(v232, &v228[4]);
              DeviceInterfaces = WideColorModeEnforced;
              if ( WideColorModeEnforced >= 0 )
              {
                if ( (v230 & 1) == 0 && !v222 || v220 )
                  v6 = 0;
                v50 = (v228[4] != 0 ? 4 : 0) | (v221 != 0 ? 2 : 0) | v6 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                Value = v233.Value;
                *(_DWORD *)(a2 + 20) = v50;
                ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(Value, v50);
                v53 = v233.Value;
                *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(v53);
                *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL::GetGlobal(v55, v54)
                                                                            + 304444) == 0
                                                                          ? 8
                                                                          : 0);
                goto LABEL_38;
              }
            }
            else
            {
              if ( v48 != 10 )
              {
                if ( v48 == 11 )
                {
                  if ( !a1 )
                  {
                    v205 = WdLogNewEntry5_WdAssertion(v47, v46);
                    *(_QWORD *)(v205 + 24) = 5883LL;
                    WdLogEvent5_WdAssertion(v205);
                  }
                  v74 = 1000;
                  v237 = 1000;
                  if ( v221 && (v230 & 1) != 0 )
                  {
                    SDRWhiteLevel = MonitorGetSDRWhiteLevel(v232, &v237);
                    DeviceInterfaces = SDRWhiteLevel;
                    if ( SDRWhiteLevel >= 0 )
                    {
                      v74 = v237;
                    }
                    else
                    {
                      v210 = (_QWORD *)WdLogNewEntry5_WdWarning(v208, v207, v209);
                      v210[3] = *((int *)v17 + 80);
                      v210[4] = *((unsigned int *)v17 + 79);
                      v210[5] = v22;
                      v210[6] = DeviceInterfaces;
                      WdLogEvent5_WdWarning(v210);
                      v74 = 3000;
                    }
                  }
                  *(_DWORD *)(a2 + 20) = v74;
                  goto LABEL_38;
                }
                if ( v48 == -18 )
                {
                  if ( a1 )
                  {
                    v211 = WdLogNewEntry5_WdAssertion(v47, v46);
                    *(_QWORD *)(v211 + 24) = 5912LL;
                    WdLogEvent5_WdAssertion(v211);
                  }
                  if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                  {
                    LODWORD(DeviceInterfaces) = -1073741811;
                  }
                  else if ( v221 && (v230 & 1) != 0 )
                  {
                    v212 = MonitorSetSDRWhiteLevel(v232);
                    DeviceInterfaces = v212;
                    if ( v212 >= 0 )
                    {
                      if ( v212 )
                      {
                        if ( v212 == 255 )
                          LODWORD(DeviceInterfaces) = 0;
                      }
                      else
                      {
                        if ( !*(_BYTE *)(a2 + 24) )
                          goto LABEL_38;
                        TriggerSDRWhiteLevelChangedWnf();
                        memset(v263, 0, sizeof(v263));
                        LODWORD(v263[0]) = 13;
                        v245 = 0LL;
                        DXGADAPTER::IsAdapterSessionized(v17, v216, 0LL, &v245);
                        SMgrGdiCallout(v263, v245, v217, 0LL, v218, v218);
                      }
                    }
                    else
                    {
                      v215 = (_QWORD *)WdLogNewEntry5_WdError(v214, v213);
                      v215[3] = *((int *)v17 + 80);
                      v215[4] = *((unsigned int *)v17 + 79);
                      v215[5] = v22;
                      v215[6] = DeviceInterfaces;
                      WdLogEvent5_WdError(v215);
                    }
                  }
                  else
                  {
                    LODWORD(DeviceInterfaces) = -1073741637;
                  }
                  if ( *(_BYTE *)(a2 + 24) )
                    DxgkNotifyDisplayChange(0LL);
                }
LABEL_38:
                MonitorReleaseMonitorHandle(v17, v232, &DxgkDisplayConfigDeviceInfo);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v269, v56);
                v57 = v223 == 0;
                goto LABEL_39;
              }
              if ( a1 )
              {
                v203 = WdLogNewEntry5_WdAssertion(v47, v46);
                *(_QWORD *)(v203 + 24) = 5837LL;
                WdLogEvent5_WdAssertion(v203);
              }
              if ( (v230 & 1) == 0 && !v222 || v220 )
              {
                LODWORD(DeviceInterfaces) = -1073741637;
                goto LABEL_38;
              }
              LOBYTE(v46) = *(_BYTE *)(a2 + 20) & 1;
              v204 = MonitorEnableDisableAdvancedColor(v232, v46);
              DeviceInterfaces = v204;
              if ( v204 >= 0 )
              {
                if ( v204 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v221 )
                  LODWORD(DeviceInterfaces) = 0;
                goto LABEL_38;
              }
            }
          }
        }
        v200 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
        v200[3] = *((int *)v17 + 80);
        v200[4] = *((unsigned int *)v17 + 79);
        v200[5] = v22;
        v200[6] = DeviceInterfaces;
        WdLogEvent5_WdError(v200);
        goto LABEL_38;
      }
      v198 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
      v198[3] = *((int *)v17 + 80);
      v198[4] = *((unsigned int *)v17 + 79);
      v198[5] = v22;
      v198[6] = v39;
      WdLogEvent5_WdError(v198);
      LODWORD(v9) = v39;
    }
    else
    {
      v196 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      v196[3] = v17;
      v196[4] = *((int *)v17 + 80);
      v196[5] = *((unsigned int *)v17 + 79);
      WdLogEvent5_WdWarning(v196);
      LODWORD(v9) = -1073741637;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v269, v195);
  }
  v128 = v223 == 0;
LABEL_234:
  if ( !v128 )
    DxgkReleaseSessionModeChangeLock();
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v247, v7);
  if ( v249 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v247);
  if ( v17 )
    DXGADAPTER::ReleaseReferenceNoTracking(v17);
  return (unsigned int)v9;
}
