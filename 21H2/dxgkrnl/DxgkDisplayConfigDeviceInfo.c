/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F208 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C000F25C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F2B0 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0026CEC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0043CF4 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C0163BCC (MonitorGetPseudoSpecializedState.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018A1E0 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01A0570 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C01A9898 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C01A9974 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     MonitorGetIsAutoColorManagementSupported @ 0x1C01A9AC4 (MonitorGetIsAutoColorManagementSupported.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C01B2BF0 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C01B53E0 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01BC760 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C01D7DA0 (DxgkIsVirtualizationDisabledForTarget.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E316C (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01E3A50 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01E6AE0 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02BBB60 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C02C0798 (-DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z.c)
 *     DxgkCreateLightweightDeviceAndContext @ 0x1C02D0B18 (DxgkCreateLightweightDeviceAndContext.c)
 *     ?TriggerCabcWnf@@YAJ_N@Z @ 0x1C02F2B08 (-TriggerCabcWnf@@YAJ_N@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C02F2BA8 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C030A218 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030A574 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFIER_HOST@1@@Z @ 0x1C033D650 (-FindMappingFromGuestId@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER_GUEST@1@PEAUPATH_IDENTIFI.c)
 *     DxgkNotifyDisplayChange @ 0x1C034961C (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03B02CC (MonitorEnableBoostRefreshRateEnabledByDefault.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03B03A8 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C03B066C (MonitorGetSDRWhiteLevel.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C03B06F4 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C03B07D0 (MonitorIsMonitorVirtualModeDisabled.c)
 *     MonitorSetAdvancedColorParams @ 0x1C03B0D88 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C03B0ED4 (MonitorSetAppOverride.c)
 *     MonitorSetAutoColorManagementSupported @ 0x1C03B1114 (MonitorSetAutoColorManagementSupported.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03B1328 (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(bool a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r14
  unsigned int v9; // eax
  __int64 DeviceInterfaces; // r12
  struct DXGFASTMUTEX *v11; // rbx
  int v12; // edi
  int v13; // eax
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _LUID v18; // rbx
  struct DXGADAPTER *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // bl
  int v23; // eax
  struct DXGADAPTER *const v24; // rdx
  int v25; // eax
  int v26; // eax
  int MonitorHandle; // eax
  struct _LUID v28; // r14
  PZZWSTR v29; // rdi
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE LinkInfo; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rdx
  bool v34; // di
  unsigned int v35; // eax
  int v36; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v37; // ecx
  int ColorDepthFromPickedWireFormat; // eax
  __int64 Value; // rcx
  bool v40; // zf
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  int TargetBaseType; // eax
  struct _DEVICE_OBJECT *v50; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rax
  struct _DEVICE_OBJECT *v52; // rbx
  PZZWSTR v53; // rcx
  unsigned int v54; // edx
  struct _LUID v55; // rcx
  unsigned int v56; // edx
  int v57; // ecx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE LowPart; // eax
  unsigned int v59; // ebx
  unsigned int v60; // edx
  int v61; // eax
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // edx
  __int64 v66; // r8
  bool v67; // zf
  int IsBoostRefreshRateEnabledByDefault; // eax
  bool v69; // al
  __int64 v70; // rax
  int v71; // eax
  int v72; // eax
  __int64 v73; // r8
  unsigned int v74; // edx
  int SourceConnectedToTargetInClientVidPn; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v77; // eax
  int RegistryValues; // eax
  __int64 v79; // rdx
  int v80; // eax
  __int64 v81; // rdi
  int PseudoSpecializedState; // eax
  struct DXGGLOBAL *Global; // rax
  unsigned int v84; // edx
  struct _LUID v85; // rbx
  __int64 v86; // rdi
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  int v90; // eax
  __int64 v91; // r14
  bool v92; // r13
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rbx
  const wchar_t *v98; // r9
  struct DXGADAPTER *v99; // rdi
  __int64 v100; // rbx
  int v101; // eax
  int v102; // eax
  int v103; // eax
  struct DXGADAPTER *v104; // rdi
  struct _LUID *v105; // rdx
  __int64 v106; // r8
  __int64 v107; // rax
  struct DXGGLOBAL *v108; // rax
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rbx
  bool *v112; // rax
  void *p_DestinationString; // r8
  __int64 v114; // r9
  void *v115; // rdx
  __int128 v116; // xmm0
  int v117; // r9d
  unsigned int *v118; // rdi
  unsigned int *v119; // rsi
  unsigned int *v120; // r14
  __int64 v121; // rax
  const wchar_t *v122; // r9
  __int64 v123; // rcx
  struct DXGGLOBAL *v124; // rax
  int v125; // eax
  struct DXGGLOBAL *v126; // rax
  unsigned int v127; // edx
  __int64 v128; // rax
  bool *v129; // [rsp+28h] [rbp-E0h]
  int v130; // [rsp+30h] [rbp-D8h]
  struct _UNICODE_STRING *v131; // [rsp+38h] [rbp-D0h]
  bool v132[4]; // [rsp+58h] [rbp-B0h] BYREF
  bool v133; // [rsp+5Ch] [rbp-ACh]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v134[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGADAPTER *v135[2]; // [rsp+68h] [rbp-A0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v136; // [rsp+78h] [rbp-90h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v137[3]; // [rsp+7Ch] [rbp-8Ch] BYREF
  struct _LUID v138[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int64 v140; // [rsp+A8h] [rbp-60h]
  PZZWSTR SymbolicLinkList[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v142; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v143; // [rsp+D0h] [rbp-38h]
  char v144; // [rsp+D8h] [rbp-30h]
  _OWORD v145[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v146[44]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v147[10]; // [rsp+268h] [rbp+160h] BYREF

  v132[1] = a1;
  v135[0] = 0LL;
  memset(v147, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v147[1]);
  v6 = 1;
  v142 = -1;
  v147[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v147[6]) = -1;
  LODWORD(v147[3]) = 39;
  v143 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v144 = 1;
    v142 = 2184;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2184);
  }
  else
  {
    v144 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v142, 2184);
  LODWORD(v8) = -1073741811;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 5088LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pRequestPacket != NULL", 5088LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_98;
  }
  v9 = *(_DWORD *)a2;
  LODWORD(DeviceInterfaces) = 0;
  if ( *(_DWORD *)a2 <= 0xFFFFFFE8 )
  {
    if ( v9 == -24 )
    {
      Global = DXGGLOBAL_GetGlobal();
      v84 = *(_DWORD *)(a2 + 16);
      if ( !*((_BYTE *)Global + 304912) )
      {
        *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(a2 + 28) = v84;
        goto LABEL_10;
      }
      *(_QWORD *)&DestinationString.Length = *(_QWORD *)(a2 + 8);
      DestinationString.Buffer = (wchar_t *)v84;
      v138[0] = 0LL;
      v138[1].LowPart = 0;
      LODWORD(DeviceInterfaces) = REMOTEMONITORMAPPING::FindMappingFromGuestId(
                                    (struct DXGGLOBAL *)((char *)Global + 304864),
                                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_GUEST *)&DestinationString,
                                    (struct REMOTEMONITORMAPPING::PATH_IDENTIFIER_HOST *)v138);
      if ( (int)DeviceInterfaces < 0 )
        goto LABEL_10;
      *(struct _LUID *)(a2 + 20) = v138[0];
      LowPart = v138[1].LowPart;
      goto LABEL_79;
    }
    if ( v9 <= 0xB )
    {
      if ( v9 >= 9 )
      {
LABEL_19:
        v18 = *(struct _LUID *)(a2 + 8);
        v19 = (struct DXGADAPTER *)*(unsigned int *)(a2 + 16);
        v138[0] = v18;
        v136 = (int)v19;
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, v138);
        v14 = v135[0];
        if ( !v135[0] )
        {
          v107 = WdLogNewEntry5_WdTrace(v21, v20);
          LODWORD(DeviceInterfaces) = -1073741811;
          *(_QWORD *)(v107 + 24) = v138[0].HighPart;
          *(_QWORD *)(v107 + 32) = v18.LowPart;
          goto LABEL_11;
        }
        v22 = 0;
        v132[0] = 0;
        v23 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v132, 0);
        v8 = v23;
        if ( v23 < 0 )
        {
          WdLogSingleEntry1(2LL, v23);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
            v8,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        else
        {
          BYTE1(v146[0]) = 0;
          COREACCESS::COREACCESS((COREACCESS *)&v146[1], v14);
          COREACCESS::COREACCESS((COREACCESS *)&v146[9], v24);
          if ( *(_DWORD *)a2 == 10 || *(_DWORD *)a2 == -18 )
            v25 = COREADAPTERACCESS::AcquireExclusive((__int64)v146);
          else
            v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v146, 0LL);
          if ( v25 < 0 )
          {
            WdLogSingleEntry3(2LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter-"
                        ">GetLuid() = <0x%I64x, 0x%I64x>)",
              (__int64)v14,
              *((int *)v14 + 102),
              *((unsigned int *)v14 + 101),
              0LL,
              0LL);
            LODWORD(v8) = -1073741811;
          }
          else if ( *((_QWORD *)v14 + 349) )
          {
            v132[2] = 0;
            v26 = CheckGivenTargetIsPartOfCloneGroup(v14, (unsigned int)v19, (unsigned __int8 *)&v132[2]);
            LODWORD(DeviceInterfaces) = -1073741275;
            v135[0] = v19;
            if ( v26 == -1073741275 )
            {
              WdLogSingleEntry4(3LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v19, -1073741275LL);
              v133 = 0;
            }
            else
            {
              v133 = v132[2];
            }
            v138[0] = 0LL;
            MonitorHandle = MonitorGetMonitorHandle(
                              (__int64)v14,
                              (unsigned int)v19,
                              0,
                              &DxgkDisplayConfigDeviceInfo,
                              (DXGMONITOR **)v138);
            v8 = MonitorHandle;
            if ( MonitorHandle >= 0 )
            {
              v28 = v138[0];
              if ( v138[0] )
              {
                v134[0].Value = 0;
                MONITOR_MGR::AcquireMonitorShared(SymbolicLinkList, *(_QWORD *)v138);
                v29 = SymbolicLinkList[0];
                if ( SymbolicLinkList[0] )
                {
                  *(_QWORD *)&DestinationString.Length = 0LL;
                  LODWORD(DestinationString.Buffer) = 0;
                  LinkInfo = (unsigned int)DXGMONITOR::_GetLinkInfo(
                                             (DXGMONITOR *)SymbolicLinkList[0],
                                             (struct _DXGK_MONITORLINKINFO *)&DestinationString);
                  v137[0] = LinkInfo;
                  if ( LinkInfo == -1073741275 )
                  {
                    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)SymbolicLinkList);
LABEL_34:
                    v132[2] = 0;
                    v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorIsMonitorAndDriverWCGCapable)(v28, &v132[2]);
                    LODWORD(DeviceInterfaces) = v31;
                    if ( v31 < 0 )
                    {
                      v19 = v135[0];
                      v97 = v31;
                      WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v31);
                      v98 = L"MonitorIsMonitorAndDriverWCGCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
                    }
                    else
                    {
                      v134[0].Value = 0;
                      v137[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                      v132[3] = 0;
                      v32 = IsCurrentModeAdvancedColor(v14, v136, v134, v137, &v132[3]);
                      LODWORD(DeviceInterfaces) = v32;
                      if ( v32 < 0 )
                      {
                        v19 = v135[0];
                        v97 = v32;
                        WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v32);
                        v98 = L"IsCurrentModeAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
                      }
                      else
                      {
                        v34 = v132[3];
                        if ( v133 && v132[3] )
                        {
                          WdLogSingleEntry1(1LL, 6110LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!bCurrentModeAdvancedColor",
                            6110LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        v35 = *(_DWORD *)a2;
                        if ( *(_DWORD *)a2 == 9 )
                        {
                          if ( !v132[1] )
                          {
                            WdLogSingleEntry1(1LL, 6120LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"i_bGetDeviceInfo",
                              6120LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          v132[3] = 0;
                          v36 = ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorGetIsAutoColorManagementSupported)(
                                  v28,
                                  &v132[3]);
                          LODWORD(DeviceInterfaces) = v36;
                          if ( v36 < 0 )
                          {
                            v99 = v135[0];
                            v100 = v36;
                            WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v36);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              -1,
                              (__int64)L"MonitorGetIsAutoColorManagementSupported() failed on adapter:0x%I64x%08I64x targe"
                                        "t:0x%I64x (Status = 0x%I64x).",
                              *((int *)v14 + 102),
                              *((unsigned int *)v14 + 101),
                              (__int64)v99,
                              v100,
                              0LL);
                          }
                          else
                          {
                            if ( (v22 & 1) == 0 && !v132[2] || v133 )
                              v6 = 0;
                            v37.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v134[0];
                            *(_DWORD *)(a2 + 20) = (v132[3] ? 4 : 0) | (v34 ? 2 : 0) | v6 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                            ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v37);
                            Value = v134[0].Value;
                            *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                            *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(Value);
                            *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 20) & 0xFFFFFFF7 | (*((_BYTE *)DXGGLOBAL_GetGlobal()
                                                                                        + 304812) == 0
                                                                                      ? 8
                                                                                      : 0);
                          }
                          goto LABEL_45;
                        }
                        if ( v35 != 10 )
                        {
                          if ( v35 == 11 )
                          {
                            if ( !v132[1] )
                            {
                              WdLogSingleEntry1(1LL, 6196LL);
                              DxgkLogInternalTriageEvent(
                                0LL,
                                262146,
                                -1,
                                (__int64)L"i_bGetDeviceInfo",
                                6196LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL);
                            }
                            v41 = 1000;
                            v136 = 1000;
                            if ( v34 && (v22 & 1) != 0 )
                            {
                              v102 = ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorGetSDRWhiteLevel)(v28, &v136);
                              LODWORD(DeviceInterfaces) = v102;
                              if ( v102 >= 0 )
                              {
                                v41 = v136;
                              }
                              else
                              {
                                WdLogSingleEntry4(3LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v102);
                                v41 = 3000;
                              }
                            }
                            *(_DWORD *)(a2 + 20) = v41;
                            goto LABEL_45;
                          }
                          if ( v35 != -18 )
                            goto LABEL_45;
                          if ( v132[1] )
                          {
                            WdLogSingleEntry1(1LL, 6225LL);
                            DxgkLogInternalTriageEvent(
                              0LL,
                              262146,
                              -1,
                              (__int64)L"!i_bGetDeviceInfo",
                              6225LL,
                              0LL,
                              0LL,
                              0LL,
                              0LL);
                          }
                          if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                          {
                            LODWORD(DeviceInterfaces) = -1073741811;
                          }
                          else
                          {
                            if ( v34 && (v22 & 1) != 0 )
                            {
                              v103 = ((__int64 (__fastcall *)(_QWORD))MonitorSetSDRWhiteLevel)(v28);
                              DeviceInterfaces = v103;
                              if ( v103 < 0 )
                              {
                                v104 = v135[0];
                                WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v103);
                                DxgkLogInternalTriageEvent(
                                  0LL,
                                  0x40000,
                                  -1,
                                  (__int64)L"MonitorSetSDRWhiteLevel() failed on adapter:0x%I64x%08I64x target:0x%I64x (St"
                                            "atus = 0x%I64x).",
                                  *((int *)v14 + 102),
                                  *((unsigned int *)v14 + 101),
                                  (__int64)v104,
                                  DeviceInterfaces,
                                  0LL);
                                goto LABEL_270;
                              }
                              if ( v103 )
                              {
                                if ( v103 == 255 )
                                  LODWORD(DeviceInterfaces) = 0;
                                goto LABEL_270;
                              }
                              if ( *(_BYTE *)(a2 + 24) )
                              {
                                TriggerSDRWhiteLevelChangedWnf();
                                SymbolicLinkList[0] = 0LL;
                                memset(v145, 0, sizeof(v145));
                                LODWORD(v145[0]) = 13;
                                DXGADAPTER::IsAdapterSessionized(v14, v105, 0LL, (unsigned __int64 *)SymbolicLinkList);
                                SMgrGdiCallout(v145, SymbolicLinkList[0], v106, 0LL, 0LL, 0LL);
                                goto LABEL_270;
                              }
LABEL_45:
                              MonitorReleaseMonitorHandle((__int64)v14, *(_QWORD *)v138, &DxgkDisplayConfigDeviceInfo);
                              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
                              v40 = !v132[0];
                              goto LABEL_46;
                            }
                            LODWORD(DeviceInterfaces) = -1073741637;
                          }
LABEL_270:
                          if ( *(_BYTE *)(a2 + 24) )
                            DxgkNotifyDisplayChange(0LL);
                          goto LABEL_45;
                        }
                        if ( v132[1] )
                        {
                          WdLogSingleEntry1(1LL, 6150LL);
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            -1,
                            (__int64)L"!i_bGetDeviceInfo",
                            6150LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        if ( (v22 & 1) == 0 && !v132[2] || v133 )
                        {
                          LODWORD(DeviceInterfaces) = -1073741637;
                          goto LABEL_45;
                        }
                        LOBYTE(v33) = *(_BYTE *)(a2 + 20) & 1;
                        v101 = ((__int64 (__fastcall *)(_QWORD, _QWORD))MonitorEnableDisableAdvancedColor)(v28, v33);
                        LODWORD(DeviceInterfaces) = v101;
                        if ( v101 >= 0 )
                        {
                          if ( v101 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v34 )
                            LODWORD(DeviceInterfaces) = 0;
                          goto LABEL_45;
                        }
                        v19 = v135[0];
                        v97 = v101;
                        WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v135[0], v101);
                        v98 = L"MonitorEnableDisableAdvancedColor() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
                      }
                    }
LABEL_228:
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)v98,
                      *((int *)v14 + 102),
                      *((unsigned int *)v14 + 101),
                      (__int64)v19,
                      v97,
                      0LL);
                    goto LABEL_45;
                  }
                  if ( LinkInfo >= D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 )
                  {
                    DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
                      *((DxgMonitor::MonitorColorState **)v29 + 28),
                      (const struct _DXGK_MONITORLINKINFO *)&DestinationString,
                      (union MONITOR_AND_LINK_HDR_CAPS *)v134);
                    ExReleaseResourceLite((PERESOURCE)(v29 + 12));
                    KeLeaveCriticalRegion();
                    v22 = (char)v134[0].0;
                    goto LABEL_34;
                  }
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)SymbolicLinkList);
                  SLODWORD(DeviceInterfaces) = v137[0];
                }
                else
                {
                  WdLogSingleEntry1(2LL, -1073741275LL);
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)SymbolicLinkList);
                }
                v19 = v135[0];
              }
              else
              {
                WdLogSingleEntry1(1LL, 6059LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"MonitorHandle != NULL",
                  6059LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                LODWORD(DeviceInterfaces) = -1073741811;
              }
              v97 = (int)DeviceInterfaces;
              WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v19, (int)DeviceInterfaces);
              v98 = L"MonitorIsMonitorAndLinkHDRCapable() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).";
              goto LABEL_228;
            }
            WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v19, MonitorHandle);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v14 + 102),
              *((unsigned int *)v14 + 101),
              (__int64)v19,
              v8,
              0LL);
          }
          else
          {
            WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
            LODWORD(v8) = -1073741637;
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
        }
        v67 = !v132[0];
        goto LABEL_131;
      }
      switch ( v9 )
      {
        case 2u:
          if ( !a1 )
          {
            WdLogSingleEntry1(1LL, 5244LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5244LL, 0LL, 0LL, 0LL, 0LL);
          }
          TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          goto LABEL_64;
        case 3u:
          if ( !a1 )
          {
            WdLogSingleEntry1(1LL, 5174LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5174LL, 0LL, 0LL, 0LL, 0LL);
          }
          memset(v146, 0, sizeof(v146));
          v59 = 0;
          LODWORD(DeviceInterfaces) = -1071774970;
          do
          {
            if ( v59 >= 0x10 )
              break;
            if ( v146[38] )
            {
              WdLogSingleEntry1(1LL, 5186LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"PathForTarget.Descriptors[0].pDevMode == NULL",
                5186LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            memset(v146, 0, sizeof(v146));
            v60 = *(_DWORD *)(a2 + 16);
            v132[1] = 0;
            v132[2] = 0;
            v132[0] = 0;
            LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                          *(struct _LUID *)(a2 + 8),
                                          v60,
                                          (__int64)v132,
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v146[18],
                                          (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v146[18] + 1,
                                          (__int64)&v146[33] + 4);
            if ( (int)DeviceInterfaces >= 0 )
            {
              v146[9] = *(_QWORD *)(a2 + 8);
              HIDWORD(v146[10]) = *(_DWORD *)(a2 + 16);
              HIDWORD(v146[2]) = 65537;
              LODWORD(v146[10]) = v59;
              LODWORD(v146[30]) = -13434880;
              BYTE1(v146[23]) = (!v132[0] ? 4 : 0) | (!v132[2] ? 2 : 0) | !v132[1];
              v146[7] = 0xCF00000000000LL;
              LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(v146, a2 + 8, 0LL, 1LL, 0);
              if ( (int)DeviceInterfaces >= 0 )
              {
                DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v146[11], a2 + 32);
                *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
              }
              BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v146);
              ++v59;
            }
          }
          while ( (_DWORD)DeviceInterfaces == -1071774970 );
          goto LABEL_10;
        case 6u:
          if ( !a1 )
          {
            WdLogSingleEntry1(1LL, 5254LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5254LL, 0LL, 0LL, 0LL, 0LL);
          }
          TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
          goto LABEL_64;
        case 4u:
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
          v14 = v135[0];
          if ( !v135[0] )
          {
            WdLogSingleEntry3(3LL, *(unsigned int *)(a2 + 8), *(int *)(a2 + 12), -1073741811LL);
            goto LABEL_12;
          }
          DestinationString.Buffer = (wchar_t *)v135[0];
          LOBYTE(v140) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v14 + 50) == 1 )
          {
            v14 = v135[0];
            v50 = (struct _DEVICE_OBJECT *)*((_QWORD *)v135[0] + 27);
            if ( v50 )
            {
              DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v50);
              SymbolicLinkList[0] = 0LL;
              v52 = DeviceAttachmentBaseRef;
              DeviceInterfaces = IoGetDeviceInterfaces(
                                   &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                                   DeviceAttachmentBaseRef,
                                   0,
                                   SymbolicLinkList);
              ObfDereferenceObject(v52);
              if ( (int)DeviceInterfaces < 0 )
              {
                WdLogSingleEntry2(3LL, v52, DeviceInterfaces);
              }
              else
              {
                wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList[0], 0xFFFFFFFFFFFFFFFFuLL);
                v53 = SymbolicLinkList[0];
                *(_WORD *)(a2 + 22) = 92;
                ExFreePoolWithTag(v53, 0);
              }
            }
            else
            {
              WdLogSingleEntry1(2LL, v135[0]);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Adapter 0x%I64x had no FDO",
                (__int64)v14,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(DeviceInterfaces) = -1073741275;
            }
          }
          else
          {
            v14 = v135[0];
            WdLogSingleEntry2(3LL, v135[0], -1073741130LL);
            LODWORD(DeviceInterfaces) = -1073741130;
          }
          goto LABEL_58;
      }
      if ( v9 - 7 > 1 )
        goto LABEL_310;
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
      v14 = v135[0];
      if ( !v135[0] )
        goto LABEL_295;
      v132[1] = 0;
      v61 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v132[1], 0);
      v8 = v61;
      if ( v61 < 0 )
        goto LABEL_102;
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v146, v14, 0LL);
      if ( *(_DWORD *)a2 == 7 )
        v62 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v146, 0LL);
      else
        v62 = COREADAPTERACCESS::AcquireExclusive((__int64)v146);
      if ( v62 < 0 )
      {
        WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
        LODWORD(v8) = -1073741811;
LABEL_126:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
        goto LABEL_127;
      }
      v63 = *((_QWORD *)v14 + 349);
      if ( !v63 || !*(_BYTE *)(v63 + 290) )
      {
        WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
        LODWORD(v8) = -1073741637;
        goto LABEL_126;
      }
      if ( *(_DWORD *)a2 == 7 )
      {
        v132[0] = 0;
        if ( !a1 )
        {
          WdLogSingleEntry1(1LL, 5340LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5340LL, 0LL, 0LL, 0LL, 0LL);
        }
        v64 = *(unsigned int *)(a2 + 16);
        *(_DWORD *)(a2 + 20) = 0;
        LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(v14, v64, v132);
        if ( (int)DeviceInterfaces >= 0 )
          *(_DWORD *)(a2 + 20) = v132[0] | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
      }
      else
      {
        if ( a1 || *(_DWORD *)a2 != 8 )
        {
          WdLogSingleEntry1(1LL, 5357LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(!i_bGetDeviceInfo)&& (io_pRequestPacket->type == DISPLAYCONFIG_DEVICE_INFO_SET_SUPPORT_VIRTUAL_RESOLUTION)",
            5357LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v65 = *(_DWORD *)(a2 + 16);
        v132[0] = 0;
        if ( (int)CheckGivenTargetIsPartOfCloneGroup(v14, v65, (unsigned __int8 *)v132) >= 0 && v132[0] )
        {
          WdLogSingleEntry3(3LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), *(unsigned int *)(a2 + 16));
          LODWORD(v8) = -1073741649;
          goto LABEL_126;
        }
        LOBYTE(v66) = *(_BYTE *)(a2 + 20) & 1;
        LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(v14, *(unsigned int *)(a2 + 16), v66, v147);
      }
LABEL_123:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
      v40 = !v132[1];
      goto LABEL_46;
    }
    switch ( v9 )
    {
      case 0xCu:
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
        v14 = v135[0];
        if ( v135[0] )
        {
          v79 = *(unsigned int *)(a2 + 16);
          v138[0] = 0LL;
          v80 = MonitorGetMonitorHandle((__int64)v135[0], v79, 0, &DxgkDisplayConfigDeviceInfo, (DXGMONITOR **)v138);
          v8 = v80;
          if ( v80 < 0 )
          {
            WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), *(unsigned int *)(a2 + 16), v80);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
              *((int *)v14 + 102),
              *((unsigned int *)v14 + 101),
              *(unsigned int *)(a2 + 16),
              v8,
              0LL);
            goto LABEL_12;
          }
          v81 = (__int64)v138[0];
          if ( !*(_QWORD *)v138 )
          {
            WdLogSingleEntry1(1LL, 6427LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6427LL, 0LL, 0LL, 0LL, 0LL);
          }
          v132[0] = 0;
          v132[1] = 0;
          v132[2] = 0;
          PseudoSpecializedState = MonitorGetPseudoSpecializedState(v81, &v132[1], &v132[2], v132);
          DeviceInterfaces = PseudoSpecializedState;
          if ( PseudoSpecializedState >= 0 )
          {
            *(_DWORD *)(a2 + 20) = (v132[1] ? 2 : 0) | (v132[2] ? 4 : 0) | v132[0] | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
          }
          else
          {
            WdLogSingleEntry1(2LL, PseudoSpecializedState);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to call MonitorGetPseudoSpecializedState with status 0x%I64x",
              DeviceInterfaces,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          MonitorReleaseMonitorHandle((__int64)v14, v81, &DxgkDisplayConfigDeviceInfo);
          goto LABEL_11;
        }
        goto LABEL_295;
      case 0xDu:
        goto LABEL_275;
      case 0x64u:
        goto LABEL_326;
    }
    if ( v9 <= 0xFFFFFFE2 )
      goto LABEL_310;
    if ( v9 <= 0xFFFFFFE4 )
    {
      if ( *(_DWORD *)(a2 + 4) >= 0x18u )
      {
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
        v14 = v135[0];
        if ( !v135[0] )
          goto LABEL_295;
        if ( *((_QWORD *)v135[0] + 349) )
        {
          if ( *(_DWORD *)a2 == -28 )
          {
            v77 = TriggerCabcWnf(*(_BYTE *)(a2 + 20) != 0);
            DeviceInterfaces = v77;
            if ( v77 < 0 )
            {
              WdLogSingleEntry1(2LL, v77);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"TriggerCabcWnf failed 0x%I64x",
                DeviceInterfaces,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else
          {
            v134[0].Value = 0;
            v137[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
            v146[2] = L"DisableCABC";
            v146[0] = 0LL;
            v146[3] = v134;
            LODWORD(v146[1]) = 288;
            v146[5] = v137;
            LODWORD(v146[4]) = 0x4000000;
            LODWORD(v146[6]) = 4;
            v146[7] = 0LL;
            LODWORD(v146[8]) = 0;
            memset(&v146[9], 0, 40);
            RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", v146, 0LL, 0LL);
            LODWORD(DeviceInterfaces) = RegistryValues;
            if ( RegistryValues < 0 )
              WdLogSingleEntry1(3LL, RegistryValues);
            *(_BYTE *)(a2 + 20) = v134[0].Value != 0;
          }
          goto LABEL_11;
        }
        goto LABEL_162;
      }
    }
    else
    {
      if ( v9 > 0xFFFFFFE6 )
        goto LABEL_310;
      if ( *(_DWORD *)(a2 + 4) >= 0x18u )
      {
        DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
        v14 = v135[0];
        if ( !v135[0] )
          goto LABEL_295;
        if ( *((_QWORD *)v135[0] + 349) )
        {
          if ( *(_DWORD *)a2 != -26 )
          {
            v132[1] = 0;
            v71 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v132[1], 0);
            v8 = v71;
            if ( v71 < 0 )
            {
LABEL_102:
              WdLogSingleEntry1(3LL, v8);
LABEL_127:
              v67 = !v132[1];
LABEL_131:
              if ( !v67 )
                DxgkReleaseSessionModeChangeLock();
              goto LABEL_12;
            }
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v146, v14, 0LL);
            v72 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v146, 0LL);
            LODWORD(v8) = v72;
            if ( v72 < 0 )
            {
              WdLogSingleEntry4(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v72);
              goto LABEL_126;
            }
            LOBYTE(v73) = *(_BYTE *)(a2 + 20) != 0;
            LODWORD(DeviceInterfaces) = MonitorEnableBoostRefreshRateEnabledByDefault(
                                          v14,
                                          *(unsigned int *)(a2 + 16),
                                          v73);
            if ( (_DWORD)DeviceInterfaces == -1073741802 )
            {
              v74 = *(_DWORD *)(a2 + 16);
              v134[0].Value = 0;
              SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                                       v14,
                                                       v74,
                                                       (unsigned int *)v134);
              LODWORD(DeviceInterfaces) = SourceConnectedToTargetInClientVidPn;
              if ( SourceConnectedToTargetInClientVidPn == -1071774884
                || SourceConnectedToTargetInClientVidPn == -1071774912 )
              {
                LODWORD(DeviceInterfaces) = 0;
              }
              else if ( SourceConnectedToTargetInClientVidPn >= 0 )
              {
                DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v14 + 349), v134[0].Value);
                if ( *(_BYTE *)(a2 + 20) || *((_DWORD *)DisplayModeInfo + 18) >= 2u )
                  LODWORD(DeviceInterfaces) = -1073741802;
              }
            }
            goto LABEL_123;
          }
          v132[0] = 0;
          DestinationString.Buffer = (wchar_t *)v135[0];
          LOBYTE(v140) = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          if ( *((_DWORD *)v14 + 50) != 1 )
            goto LABEL_336;
          v14 = v135[0];
          IsBoostRefreshRateEnabledByDefault = MonitorIsBoostRefreshRateEnabledByDefault(
                                                 v135[0],
                                                 *(unsigned int *)(a2 + 16),
                                                 v132);
          LODWORD(DeviceInterfaces) = IsBoostRefreshRateEnabledByDefault;
          if ( IsBoostRefreshRateEnabledByDefault == -1073741632 )
          {
            LODWORD(DeviceInterfaces) = 0;
            v69 = 0;
          }
          else
          {
            if ( IsBoostRefreshRateEnabledByDefault < 0 )
              goto LABEL_58;
            v69 = v132[0];
          }
          *(_BYTE *)(a2 + 20) = v69;
LABEL_58:
          if ( (_BYTE)v140 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
          goto LABEL_11;
        }
LABEL_162:
        WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
        LODWORD(v8) = -1073741637;
        goto LABEL_12;
      }
    }
    v70 = WdLogNewEntry5_WdTrace(4294967272LL, v7);
    LODWORD(v8) = -1073741789;
    *(_QWORD *)(v70 + 24) = *(unsigned int *)(a2 + 4);
    *(_QWORD *)(v70 + 32) = -1073741789LL;
    goto LABEL_98;
  }
  if ( v9 <= 0xFFFFFFF2 )
  {
    if ( v9 == -14 )
    {
      v11 = (struct DXGGLOBAL *)((char *)DXGGLOBAL_GetGlobal() + 1416);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&DestinationString, v11, 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&DestinationString);
      v12 = *((_DWORD *)v11 + 17);
      if ( LOBYTE(DestinationString.Buffer) )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&DestinationString);
      *(_DWORD *)(a2 + 24) = v12;
      *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v11);
      *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v11);
      v13 = *(_DWORD *)(a2 + 36);
      if ( (v13 & 2) != 0 )
        goto LABEL_10;
      v118 = (unsigned int *)(a2 + 20);
      v119 = (unsigned int *)(a2 + 16);
      v120 = (unsigned int *)(a2 + 8);
      if ( (v13 & 1) != 0 )
      {
        LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                      v11,
                                      *v118,
                                      (struct _LUID *)(a2 + 8),
                                      (unsigned int *)(a2 + 16));
        if ( (int)DeviceInterfaces < 0 )
        {
          WdLogSingleEntry1(2LL, *v118);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to find source/adapter from hash 0x%I64x",
            *v118,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_10;
      }
      LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                    v11,
                                    (const struct _LUID *)(a2 + 8),
                                    *v119,
                                    (unsigned int *)(a2 + 20));
      if ( (int)DeviceInterfaces < 0 )
      {
        WdLogSingleEntry3(2LL, *(int *)(a2 + 12), *v120, *v119);
        v121 = *v119;
        v122 = L"Failed to find has for adapter <0x%I64x, 0x%I64x>, source:0x%I64x";
        v123 = *v120;
LABEL_339:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v122, *(int *)(a2 + 12), v123, v121, 0LL, 0LL);
      }
LABEL_10:
      v14 = v135[0];
LABEL_11:
      LODWORD(v8) = DeviceInterfaces;
      goto LABEL_12;
    }
    if ( v9 != -23 )
    {
      switch ( v9 )
      {
        case 0xFFFFFFEA:
          TargetBaseType = DxgkCreateLightweightDeviceAndContext((struct _LUID *)(a2 + 8));
          break;
        case 0xFFFFFFED:
          v108 = DXGGLOBAL_GetGlobal();
          TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(
                             (__int64)v108,
                             (__int64 (__fastcall *)(_QWORD *, __int64))SendColorimetricControlToDriverCallback,
                             a2,
                             4LL);
          break;
        case 0xFFFFFFEE:
          goto LABEL_19;
        case 0xFFFFFFF0:
          v85 = *(struct _LUID *)(a2 + 8);
          v86 = *(unsigned int *)(a2 + 16);
          v138[0] = v85;
          DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, v138);
          v14 = v135[0];
          if ( v135[0] )
          {
            v132[1] = 0;
            v89 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v132[1], 0);
            DeviceInterfaces = v89;
            if ( v89 < 0 )
            {
              WdLogSingleEntry1(2LL, v89);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
                DeviceInterfaces,
                0LL,
                0LL,
                0LL,
                0LL);
LABEL_219:
              v40 = !v132[1];
LABEL_46:
              if ( !v40 )
                DxgkReleaseSessionModeChangeLock();
              goto LABEL_11;
            }
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v146, v14, 0LL);
            if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v146) < 0 )
            {
              WdLogSingleEntry3(2LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapte"
                          "r->GetLuid() = <0x%I64x, 0x%I64x>)",
                (__int64)v14,
                *((int *)v14 + 102),
                *((unsigned int *)v14 + 101),
                0LL,
                0LL);
LABEL_217:
              LODWORD(DeviceInterfaces) = v8;
              goto LABEL_218;
            }
            if ( *((_QWORD *)v14 + 349) )
            {
              if ( !*(_DWORD *)(a2 + 64) || *((int *)v14 + 606) >= 9216 && (*((_DWORD *)v14 + 534) & 8) != 0 )
              {
                v138[0] = 0LL;
                v90 = MonitorGetMonitorHandle(
                        (__int64)v14,
                        (unsigned int)v86,
                        1u,
                        &DxgkDisplayConfigDeviceInfo,
                        (DXGMONITOR **)v138);
                v8 = v90;
                if ( v90 < 0 )
                {
                  WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v86, v90);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                    *((int *)v14 + 102),
                    *((unsigned int *)v14 + 101),
                    v86,
                    v8,
                    0LL);
                  goto LABEL_217;
                }
                v91 = (__int64)v138[0];
                v134[0].Value = 0;
                MonitorIsMonitorAndLinkHDRCapable(*(_QWORD *)v138, v134);
                if ( (*(_BYTE *)&v134[0].0 & 1) == 0 || !*(_DWORD *)(a2 + 64) )
                {
                  v132[0] = 0;
                  MonitorGetIsAutoColorManagementSupported(v91, v132);
                  v92 = v132[0];
                  if ( !v132[0] || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
                  {
                    LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                                  v91,
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
                    v93 = MonitorSetDefaultAdvancedColorParams(v91);
                    DeviceInterfaces = v93;
                    if ( v93 < 0 )
                    {
                      WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), v86, v93);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"MonitorSetDefaultAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x "
                                  "(Status = 0x%I64x).",
                        *((int *)v14 + 102),
                        *((unsigned int *)v14 + 101),
                        v86,
                        DeviceInterfaces,
                        0LL);
LABEL_218:
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
                      goto LABEL_219;
                    }
                  }
                  if ( (int)DeviceInterfaces > -1 )
                  {
                    MonitorReleaseMonitorHandle((__int64)v14, v91, &DxgkDisplayConfigDeviceInfo);
                    if ( (_DWORD)DeviceInterfaces != 255 )
                      LODWORD(DeviceInterfaces) = 255;
                  }
                  else
                  {
                    WdLogSingleEntry4(
                      2LL,
                      *((int *)v14 + 102),
                      *((unsigned int *)v14 + 101),
                      v86,
                      (int)DeviceInterfaces);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"MonitorSetAdvancedColorParams() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
                      *((int *)v14 + 102),
                      *((unsigned int *)v14 + 101),
                      v86,
                      (int)DeviceInterfaces,
                      0LL);
                    LOBYTE(v94) = v92;
                    MonitorSetAutoColorManagementSupported(v91, v94);
                    MonitorReleaseMonitorHandle((__int64)v14, v91, &DxgkDisplayConfigDeviceInfo);
                  }
                  goto LABEL_218;
                }
                MonitorReleaseMonitorHandle((__int64)v14, v91, &DxgkDisplayConfigDeviceInfo);
              }
            }
            else
            {
              WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
            }
            LODWORD(v8) = -1073741637;
            goto LABEL_217;
          }
          v95 = WdLogNewEntry5_WdTrace(v88, v87);
          *(_QWORD *)(v95 + 24) = v138[0].HighPart;
          v96 = v85.LowPart;
LABEL_296:
          *(_QWORD *)(v95 + 32) = v96;
          goto LABEL_12;
        default:
LABEL_310:
          LODWORD(DeviceInterfaces) = -1073741811;
          goto LABEL_10;
      }
LABEL_64:
      LODWORD(DeviceInterfaces) = TargetBaseType;
      goto LABEL_10;
    }
LABEL_275:
    if ( IsCurrentProcessAdmin() )
    {
      DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
      v14 = v135[0];
      if ( v135[0] )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v146, v135[0], 0LL);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v146) < 0 )
        {
          WdLogSingleEntry3(2LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not acquire adapter core access; adapter probably suspended. (pAdapter = 0x%I64x, pAdapter->G"
                      "etLuid() = <0x%I64x, 0x%I64x>)",
            (__int64)v14,
            *((int *)v14 + 102),
            *((unsigned int *)v14 + 101),
            0LL,
            0LL);
LABEL_283:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
          goto LABEL_12;
        }
        v109 = *(unsigned int *)(a2 + 16);
        v138[0] = 0LL;
        v110 = MonitorGetMonitorHandle((__int64)v14, v109, 0, &DxgkDisplayConfigDeviceInfo, (DXGMONITOR **)v138);
        DeviceInterfaces = v110;
        if ( v110 < 0 )
        {
          WdLogSingleEntry4(2LL, *((int *)v14 + 102), *((unsigned int *)v14 + 101), *(unsigned int *)(a2 + 16), v110);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"MonitorGetMonitorHandle() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
            *((int *)v14 + 102),
            *((unsigned int *)v14 + 101),
            *(unsigned int *)(a2 + 16),
            DeviceInterfaces,
            0LL);
          LODWORD(v8) = DeviceInterfaces;
          goto LABEL_283;
        }
        v111 = (__int64)v138[0];
        if ( !*(_QWORD *)v138 )
        {
          WdLogSingleEntry1(1LL, 6353LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 6353LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( *(_DWORD *)a2 == -23 )
        {
          v112 = *(bool **)(a2 + 40);
          p_DestinationString = &DestinationString;
          v114 = *(unsigned int *)(a2 + 36);
          v115 = v138;
          v131 = 0LL;
          DestinationString = 0LL;
          v116 = *(_OWORD *)(a2 + 20);
          LOBYTE(v130) = 0;
          v129 = v112;
        }
        else
        {
          if ( *(_DWORD *)a2 != 13 )
            goto LABEL_294;
          v138[0] = 0LL;
          if ( (int)RtlStringCbLengthW((const unsigned __int16 *)(a2 + 56), 0x100uLL, (unsigned __int64 *)v138) < 0
            || !*(_QWORD *)v138 )
          {
            WdLogSingleEntry1(2LL, 6376LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DISPLAYCONFIG_DEVICE_INFO_SET_MONITOR_SPECIALIZATION was called with an invalid app name string.",
              6376LL,
              0LL,
              0LL,
              0LL,
              0LL);
            LODWORD(DeviceInterfaces) = -1073741811;
            goto LABEL_294;
          }
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, (PCWSTR)(a2 + 56));
          v117 = *(_DWORD *)(a2 + 20);
          v116 = *(_OWORD *)(a2 + 40);
          v131 = &DestinationString;
          p_DestinationString = v138;
          LOBYTE(v130) = 1;
          v115 = SymbolicLinkList;
          *(_OWORD *)SymbolicLinkList = *(_OWORD *)(a2 + 24);
          v129 = 0LL;
          v114 = v117 & 1;
        }
        *(_OWORD *)&v138[0].LowPart = v116;
        LODWORD(DeviceInterfaces) = MonitorSetAppOverride(v111, v115, p_DestinationString, v114, v129, v130, v131);
LABEL_294:
        MonitorReleaseMonitorHandle((__int64)v14, v111, &DxgkDisplayConfigDeviceInfo);
LABEL_335:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v146);
        goto LABEL_11;
      }
LABEL_295:
      v95 = WdLogNewEntry5_WdTrace(v43, v42);
      *(_QWORD *)(v95 + 24) = *(int *)(a2 + 12);
      v96 = *(unsigned int *)(a2 + 8);
      goto LABEL_296;
    }
    LODWORD(v8) = -1073741790;
LABEL_98:
    v14 = v135[0];
    goto LABEL_12;
  }
  if ( v9 != -12 )
  {
    if ( v9 == -13 )
    {
      v54 = *(_DWORD *)(a2 + 16);
      v55 = *(struct _LUID *)(a2 + 8);
      v132[3] = 0;
      v132[0] = 0;
      v132[2] = 0;
      v136 = D3DKMDT_VOT_HD15;
      v134[0].Value = 0;
      v137[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
      LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                    v55,
                                    v54,
                                    (__int64)&v132[2],
                                    &v136,
                                    (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v134,
                                    (__int64)v137);
      if ( (int)DeviceInterfaces < 0 )
      {
        WdLogSingleEntry3(2LL, *(int *)(a2 + 12), *(unsigned int *)(a2 + 8), *(unsigned int *)(a2 + 16));
        v121 = *(unsigned int *)(a2 + 16);
        v122 = L"Failed DISPLAYCONFIG_DEVICE_INFO_GET_TARGET_INFO_INTERNAL for adapter <0x%I64x, 0x%I64x>, target:0x%I64x";
        v123 = *(unsigned int *)(a2 + 8);
        goto LABEL_339;
      }
      v56 = (v132[0] ? 2 : 0) | v132[3] | *(_DWORD *)(a2 + 32) & 0xFFFFFFFC;
      v57 = -v132[2];
      *(_DWORD *)(a2 + 20) = v136;
      *(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)(a2 + 24) = v134[0];
      LowPart = v137[0];
      *(_DWORD *)(a2 + 32) = v57 & 4 | v56 & 0xFFFFFFFB;
LABEL_79:
      *(_DWORD *)(a2 + 28) = LowPart;
      goto LABEL_10;
    }
    if ( v9 != -10 )
    {
      if ( v9 == -6 )
      {
        if ( a1 )
        {
          WdLogSingleEntry1(1LL, 5549LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!i_bGetDeviceInfo", 5549LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( !g_OSTestSigningEnabled || *(_DWORD *)(a2 + 20) )
        {
          if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1) <= 3 )
          {
            v126 = DXGGLOBAL_GetGlobal();
            if ( *(_DWORD *)(a2 + 20) != 1 )
            {
              switch ( *(_DWORD *)(a2 + 20) )
              {
                case 2:
                  v6 = 2;
                  break;
                case 3:
                  v6 = 3;
                  break;
                case 4:
                  v6 = 4;
                  break;
              }
            }
            *((_DWORD *)v126 + 346) = v6;
          }
          else
          {
            LODWORD(DeviceInterfaces) = -1073741811;
            WdLogSingleEntry2(2LL, *(int *)(a2 + 20), -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Caller specified a wrong rotataion mode 0x%I64x, returning 0x%I64x.",
              *(int *)(a2 + 20),
              -1073741811LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          *((_DWORD *)DXGGLOBAL_GetGlobal() + 346) = 0;
        }
        goto LABEL_10;
      }
      if ( v9 == -5 )
      {
        if ( !a1 )
        {
          WdLogSingleEntry1(1LL, 5539LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_bGetDeviceInfo", 5539LL, 0LL, 0LL, 0LL, 0LL);
        }
        v124 = DXGGLOBAL_GetGlobal();
        v125 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)v124 + 346));
        if ( (unsigned int)(v125 - 1) <= 3 )
          v6 = v125;
        *(_DWORD *)(a2 + 20) = v6;
        goto LABEL_10;
      }
      goto LABEL_310;
    }
LABEL_326:
    DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
    v14 = v135[0];
    if ( v135[0] )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v146, v135[0], 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v146, 0LL) >= 0 )
      {
        if ( (*((_DWORD *)v14 + 109) & 0x100) == 0 )
        {
          WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
          LODWORD(v8) = -1073741637;
          goto LABEL_283;
        }
        if ( *(_DWORD *)a2 == -10 )
        {
          if ( (int)ADAPTER_DISPLAY::DodGetRenderAdapter(
                      *((ADAPTER_DISPLAY **)v14 + 349),
                      *(_DWORD *)(a2 + 16),
                      (struct _LUID *)(a2 + 20)) >= 0 )
            goto LABEL_335;
        }
        else
        {
          if ( *(_DWORD *)a2 != 100 )
          {
            WdLogSingleEntry1(1LL, 5646LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"DISPLAYCONFIG_DEVICE_INFO type not handled",
              5646LL,
              0LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_283;
          }
          v127 = *(_DWORD *)(a2 + 16);
          v140 = 0LL;
          DestinationString = 0LL;
          if ( (int)DXGADAPTER::GetVirtualMonitorInfo(
                      v14,
                      v127,
                      (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)&DestinationString) >= 0 )
          {
            *(_DWORD *)(a2 + 20) = *(_DWORD *)(&DestinationString.MaximumLength + 1);
            goto LABEL_335;
          }
        }
      }
      WdLogSingleEntry3(3LL, v14, *((int *)v14 + 102), *((unsigned int *)v14 + 101));
      goto LABEL_283;
    }
    goto LABEL_295;
  }
  *(_DWORD *)(a2 + 20) = 0;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v135, (struct _LUID *)(a2 + 8));
  v14 = v135[0];
  if ( !v135[0] )
    goto LABEL_295;
  DestinationString.Buffer = (wchar_t *)v135[0];
  LOBYTE(v140) = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
  if ( *((_DWORD *)v14 + 50) == 1 )
  {
    v14 = v135[0];
    *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v135[0] + 534) >> 2)) & 1;
    v46 = *(_DWORD *)(a2 + 20) ^ ((unsigned __int8)*(_DWORD *)(a2 + 20) ^ (unsigned __int8)(*((_DWORD *)v14 + 534) >> 2)) & 2;
    *(_DWORD *)(a2 + 20) = v46;
    v47 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(*((_DWORD *)v14 + 534) >> 2)) & 4;
    *(_DWORD *)(a2 + 20) = v47;
    v48 = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(32 * *((_DWORD *)v14 + 534))) & 0x20;
    *(_DWORD *)(a2 + 20) = v48;
    *(_DWORD *)(a2 + 20) = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)(8 * *((_DWORD *)v14 + 534))) & 0x10;
    goto LABEL_58;
  }
LABEL_336:
  v128 = WdLogNewEntry5_WdTrace(v45, v44);
  LODWORD(v8) = -1073741130;
  v14 = v135[0];
  *(struct DXGADAPTER **)(v128 + 24) = v135[0];
  *(_QWORD *)(v128 + 32) = -1073741130LL;
  if ( (_BYTE)v140 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&DestinationString);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v142);
  if ( v144 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v142);
  if ( v14 )
    DXGADAPTER::ReleaseReference(v14);
  return (unsigned int)v8;
}
