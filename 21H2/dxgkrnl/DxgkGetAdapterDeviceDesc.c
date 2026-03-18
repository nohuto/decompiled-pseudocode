/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C01A3640
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000F1B0 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C015B6D4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01798C0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C01A027C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C01A03F0 (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01A04AC (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01A0570 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C01A0644 (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01A24CC (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01A4390 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C01A455C (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C01A4844 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C01A6650 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C01A67CC (MonitorGetNativeFlags.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01A876C (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0222D62 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(
        struct _LUID a1,
        unsigned int a2,
        __int64 a3,
        struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a4)
{
  unsigned int v4; // esi
  __int64 LowPart; // rbx
  DXGGLOBAL *Global; // rax
  DXGMONITOR *v9; // r15
  int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // edx
  unsigned __int64 *v13; // rcx
  struct DXGADAPTER **v14; // rax
  volatile signed __int64 *v15; // rsi
  struct DXGADAPTER *v16; // r14
  bool v17; // zf
  struct DXGADAPTER *v18; // r12
  signed __int64 v19; // rax
  struct DXGADAPTER *v20; // rsi
  struct DXGADAPTER *v21; // rsi
  char *v22; // r13
  int v23; // eax
  struct DXGADAPTER *v24; // r9
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v25; // rsi
  _WORD *v26; // rcx
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int16 v31; // ax
  unsigned __int16 *v32; // rax
  _WORD *v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int16 v38; // ax
  struct DXGADAPTER *v39; // rsi
  int v40; // eax
  struct DXGADAPTER *v41; // r12
  __int64 v42; // rax
  struct SESSION_VIEW *SessionViewOwner; // rsi
  unsigned int v44; // r13d
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v45; // rcx
  int v46; // edx
  int v47; // eax
  _WORD *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int16 v51; // ax
  unsigned __int16 *v52; // rcx
  _WORD *v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // r8
  __int16 v56; // cx
  __int64 v57; // rax
  struct DXGADAPTER *v58; // rsi
  struct DXGADAPTER *v59; // rcx
  struct DXGADAPTER *v60; // rcx
  __int64 v61; // r8
  int v63; // ecx
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v64; // r13
  unsigned int v65; // edx
  int TargetUsage; // eax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v68; // r8
  const struct _DXGK_DISPLAYMODE_INFO *v69; // r13
  int DisplayId; // eax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v71; // rdx
  int v72; // ecx
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int CurrentOrientation; // eax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v77; // rdx
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v78; // rcx
  __int64 v79; // rdx
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  MONITOR_MGR *v84; // r12
  int MonitorInstance; // eax
  DXGMONITOR *v86; // r12
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v87; // esi
  int CurrentWireFormatAndColorSpace; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v89; // ecx
  int ColorDepthFromPickedWireFormat; // eax
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // eax
  int v95; // r13d
  int v96; // ecx
  int v97; // ecx
  __int64 v98; // rdx
  __int64 v99; // rdx
  unsigned int v100; // eax
  unsigned int v101; // r12d
  __int64 v102; // rdx
  __int64 v103; // rcx
  DXGSESSIONMGR *v104; // rsi
  __int64 v105; // r8
  __int64 v106; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v109; // eax
  int v110; // ecx
  unsigned int v111; // eax
  int v112; // ecx
  int v113; // r15d
  __int64 v114; // rbx
  __int64 HighPart; // rsi
  unsigned int v116; // ecx
  __int64 v117; // rsi
  _BOOL8 v118; // rbx
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  _BOOL8 v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rax
  unsigned int v133; // eax
  int v134; // ecx
  int v135; // ecx
  int v136; // ecx
  int v137; // eax
  unsigned int v138[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _DISPLAYCONFIG_GET_DISPLAY_INFO *v139; // [rsp+60h] [rbp-A8h]
  bool v140; // [rsp+68h] [rbp-A0h] BYREF
  char v141; // [rsp+69h] [rbp-9Fh]
  _WORD v142[2]; // [rsp+6Ch] [rbp-9Ch] BYREF
  void *v143; // [rsp+70h] [rbp-98h]
  unsigned int v144[2]; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *v145; // [rsp+80h] [rbp-88h] BYREF
  struct _LUID v146; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *v147; // [rsp+90h] [rbp-78h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v148; // [rsp+98h] [rbp-70h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v149; // [rsp+9Ch] [rbp-6Ch] BYREF
  DXGMONITOR *v150; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v151; // [rsp+A8h] [rbp-60h]
  int v152; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-50h]
  char v154; // [rsp+C0h] [rbp-48h]
  __int64 v155; // [rsp+C8h] [rbp-40h] BYREF
  struct DXGADAPTER *v156; // [rsp+D0h] [rbp-38h]
  char v157; // [rsp+D8h] [rbp-30h]
  __int128 v158; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v159; // [rsp+F0h] [rbp-18h]
  __int128 v160; // [rsp+100h] [rbp-8h]
  unsigned __int64 v161; // [rsp+110h] [rbp+8h] BYREF
  DXGADAPTER *v162[2]; // [rsp+118h] [rbp+10h] BYREF
  _QWORD v163[2]; // [rsp+128h] [rbp+20h] BYREF
  char v164; // [rsp+138h] [rbp+30h]
  unsigned __int64 v165; // [rsp+140h] [rbp+38h] BYREF
  char v166; // [rsp+148h] [rbp+40h] BYREF
  char v167; // [rsp+158h] [rbp+50h] BYREF
  char v168; // [rsp+159h] [rbp+51h]
  _BYTE v169[8]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v170; // [rsp+168h] [rbp+60h]
  struct DXGADAPTER *v171; // [rsp+170h] [rbp+68h]
  char v172; // [rsp+178h] [rbp+70h]
  __int64 v173; // [rsp+180h] [rbp+78h]
  _BYTE v174[8]; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v175; // [rsp+1A8h] [rbp+A0h]
  struct DXGADAPTER *v176; // [rsp+1B0h] [rbp+A8h]
  char v177; // [rsp+1B8h] [rbp+B0h]
  __int64 v178; // [rsp+1C0h] [rbp+B8h]

  v4 = a2;
  v152 = -1;
  v139 = a4;
  v138[0] = a2;
  v146 = a1;
  v153 = 0LL;
  LowPart = a1.LowPart;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v154 = 1;
    v152 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    {
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
      LowPart = a1.LowPart;
    }
  }
  else
  {
    v154 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v152, 2185);
  v145 = 0LL;
  v147 = 0LL;
  v151 = 0LL;
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 6709LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pDisplayInfo", 6709LL, 0LL, 0LL, 0LL, 0LL);
  }
  Global = DXGGLOBAL_GetGlobal();
  v150 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v165);
  v9 = v150;
  if ( v150 )
  {
    v10 = DxgkAcquireSessionModeChangeLock(0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v113 = 1144079362;
      WdLogSingleEntry2(2LL, v10, 1144079362LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
        v11,
        1144079362LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_151;
    }
    if ( !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
      v101 = 0;
      v104 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
      if ( !v104
        || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
            (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v104,
                                                CurrentProcessSessionId)) == 0LL) )
      {
        LODWORD(v11) = -1073741811;
        v113 = 1144079369;
        v118 = PsGetCurrentProcess(v103, v102, v105, v106) != (_QWORD)PsInitialSystemProcess;
        CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, v119, v120, v121);
        ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
        WdLogSingleEntry3(2LL, ProcessSessionId, v118, 1144079369LL);
        v128 = PsGetCurrentProcess(v125, v124, v126, v127) != (_QWORD)PsInitialSystemProcess;
        v132 = PsGetCurrentProcess(PsInitialSystemProcess, v129, v130, v131);
        v133 = PsGetProcessSessionId(v132);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Remote session: No session data for session 0x%I64x!!! System Process %I64d (0x%I64x)",
          v133,
          v128,
          1144079369LL,
          0LL,
          0LL);
        goto LABEL_169;
      }
      if ( *((_DWORD *)SessionDataForSpecifiedSession + 4627) == *((_DWORD *)v150 + 101)
        && *((_DWORD *)SessionDataForSpecifiedSession + 4628) == *((_DWORD *)v150 + 102) )
      {
        v101 = *((_DWORD *)SessionDataForSpecifiedSession + 4629);
      }
      if ( v138[0] != -1 && v138[0] >= v101 )
      {
        LODWORD(v11) = -1073741811;
        v113 = 1144079363;
        WdLogSingleEntry3(2LL, v138[0], v101, 1144079363LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Remote session: VidPnSourceId 0x%I64x is not less than the number of VidPnSources 0x%I64x.  (0x%I64x)",
          v138[0],
          v101,
          1144079363LL,
          0LL,
          0LL);
        goto LABEL_169;
      }
      v4 = -1;
      v138[0] = -1;
    }
    v12 = 0;
    v13 = (unsigned __int64 *)&v166;
    if ( v4 == -1 )
      v13 = 0LL;
    v14 = &v145;
    if ( v4 == -1 )
      v14 = 0LL;
    else
      v12 = v4;
    if ( (int)DxgkpGetPairingAdapters(v150, v12, &v147, &v161, v14, v13, 0) < 0 )
    {
      LODWORD(v11) = -1073741811;
      v113 = 1144079364;
      v114 = v4;
      HighPart = v146.HighPart;
      WdLogSingleEntry4(2LL, v146.HighPart, a1.LowPart, (unsigned int)v114, 1144079364LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter (0x%I64x%08I64x) VidPn source 0x%I64x! (0x%I64x)",
        HighPart,
        a1.LowPart,
        v114,
        1144079364LL,
        0LL);
      goto LABEL_169;
    }
    v15 = (volatile signed __int64 *)v147;
    if ( !v147 )
    {
      WdLogSingleEntry1(1LL, 6826LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pRenderAdapter != NULL", 6826LL, 0LL, 0LL, 0LL, 0LL);
    }
    v16 = v145;
    if ( (v138[0] == -1) != (v145 == 0LL) )
    {
      WdLogSingleEntry1(1LL, 6827LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(VidPnSourceId == D3DDDI_ID_UNINITIALIZED) == (pDisplayAdapter == NULL)",
        6827LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v17 = v16 == 0LL;
    if ( v16 )
    {
      if ( (*((_DWORD *)v16 + 109) & 0x100) != 0 )
      {
        v162[0] = 0LL;
        if ( DxgkpGetIndirectDisplayPairedAdapter(v16, 0, (struct DXGADAPTER_REFERENCE *)v162) >= 0 )
          v151 = *(_QWORD *)((char *)v162[0] + 404);
        DXGADAPTER_REFERENCE::Assign(v162, 0LL);
      }
      v17 = v16 == 0LL;
    }
    if ( v17 )
      v16 = (struct DXGADAPTER *)v15;
    v168 = 0;
    v171 = (struct DXGADAPTER *)v15;
    v172 = 0;
    v173 = 0LL;
    if ( v15 )
    {
      _InterlockedIncrement64(v15 + 3);
      v15 = (volatile signed __int64 *)v147;
      v170 = -1LL;
    }
    v177 = 0;
    v178 = 0LL;
    if ( v16 )
    {
      v15 = (volatile signed __int64 *)v16;
      v176 = v16;
    }
    else
    {
      v176 = (struct DXGADAPTER *)v15;
      if ( !v15 )
        goto LABEL_28;
    }
    _InterlockedIncrement64(v15 + 3);
    v175 = -1LL;
LABEL_28:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v9 + 2), v9);
    v18 = v147;
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v147 + 3, 0xFFFFFFFFFFFFFFFFuLL);
    v20 = v147;
    if ( v19 == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v147 + 2), v147);
    if ( v145 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v145 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v145 + 2), v145);
      v20 = v147;
    }
    else
    {
      v145 = v20;
    }
    v163[1] = v20;
    _InterlockedIncrement64((volatile signed __int64 *)v18 + 3);
    v163[0] = -1LL;
    KeEnterCriticalRegion();
    v21 = v147;
    v22 = (char *)v147 + 136;
    ExAcquirePushLockSharedEx((char *)v147 + 136, 0LL);
    v23 = *((_DWORD *)v21 + 50);
    v164 = 1;
    if ( v23 == 1 )
    {
      v24 = v147;
      v25 = v139;
      *((_DWORD *)v139 + 208) = *((_DWORD *)v147 + 108);
      *((_DWORD *)v25 + 209) = *((_DWORD *)v24 + 103);
      *((_DWORD *)v25 + 210) = *((_DWORD *)v24 + 104);
      *((_DWORD *)v25 + 211) = *((_DWORD *)v24 + 105);
      *((_DWORD *)v25 + 212) = *((_DWORD *)v24 + 106);
      *((_DWORD *)v25 + 213) = *((_DWORD *)v24 + 107);
      *((_DWORD *)v25 + 409) = (*((_DWORD *)v24 + 109) & 0x80u) != 0;
      *((_DWORD *)v25 + 410) = *((_DWORD *)v24 + 72) > 1u;
      v26 = (_WORD *)((char *)v25 + 860);
      v27 = 128LL;
      *((_DWORD *)v25 + 214) = *((_DWORD *)v24 + 673);
      v28 = *((_QWORD *)v24 + 201);
      if ( v28 )
      {
        v29 = 128LL;
        v30 = v28 - (_QWORD)v26;
        while ( v29 != -2147483518 )
        {
          v31 = *(_WORD *)((char *)v26 + v30);
          if ( !v31 )
            break;
          *v26++ = v31;
          if ( !--v29 )
          {
            --v26;
            break;
          }
        }
      }
      else if ( v25 == (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-860LL )
      {
        goto LABEL_44;
      }
      *v26 = 0;
LABEL_44:
      v32 = (unsigned __int16 *)*((_QWORD *)v24 + 202);
      v33 = (_WORD *)((char *)v25 + 1116);
      v34 = 260LL;
      v35 = 260LL;
      v36 = ((unsigned __int64)*v32 >> 1) - 260;
      v37 = *((_QWORD *)v32 + 1) - ((_QWORD)v25 + 1116);
      while ( v36 + v35 )
      {
        v38 = *(_WORD *)((char *)v33 + v37);
        if ( !v38 )
          break;
        *v33++ = v38;
        if ( !--v35 )
        {
          --v33;
          break;
        }
      }
      *v33 = 0;
      ExReleasePushLockSharedEx(v22, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v147 + 2), v147);
      if ( !v145 )
      {
        v44 = 0;
LABEL_84:
        v17 = v168 == 0;
        *((_WORD *)v25 + 153) = 92;
        *((_WORD *)v25 + 559) = 92;
        if ( !v17 )
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v167);
        v59 = v176;
        if ( v176 )
        {
          if ( v177 )
          {
            COREACCESS::Release((COREACCESS *)v174);
            v59 = v176;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v59 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v59 + 2), v59);
        }
        v60 = v171;
        if ( v171 )
        {
          if ( v172 )
          {
            COREACCESS::Release((COREACCESS *)v169);
            v60 = v171;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v60 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v60 + 2), v60);
        }
        DxgkReleaseSessionModeChangeLock();
        *((_DWORD *)v25 + 513) &= 0xFFFFFFE7;
        if ( *(_DWORD *)v25 == -11 )
        {
          *(_WORD *)((char *)&v138[1] + 1) = 0;
          v109 = DxgkpAdapterCheckStereoMode(
                   a1,
                   v138[0],
                   (unsigned __int8 *)&v138[1] + 1,
                   (unsigned __int8 *)&v138[1] + 2);
          if ( v109 < 0 )
          {
            WdLogSingleEntry1(3LL, v109);
          }
          else
          {
            if ( BYTE1(v138[1]) )
              v110 = 16;
            else
              v110 = 0;
            v111 = v110 | *((_DWORD *)v25 + 513) & 0xFFFFFFEF;
            if ( BYTE2(v138[1]) )
              v112 = 8;
            else
              v112 = 0;
            *((_DWORD *)v25 + 513) = v112 | v111 & 0xFFFFFFF7;
          }
        }
        goto LABEL_97;
      }
      v156 = v145;
      _InterlockedIncrement64((volatile signed __int64 *)v145 + 3);
      v155 = -1LL;
      KeEnterCriticalRegion();
      v39 = v145;
      ExAcquirePushLockSharedEx((char *)v145 + 136, 0LL);
      v40 = *((_DWORD *)v39 + 50);
      v157 = 1;
      if ( v40 == 1 )
      {
        if ( v138[0] == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
        {
          v25 = v139;
          v44 = 0;
          goto LABEL_60;
        }
        v41 = v145;
        v143 = v145;
        v42 = *((_QWORD *)v145 + 349);
        if ( v42 )
        {
          if ( v138[0] < *(_DWORD *)(v42 + 96) )
          {
            SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)v150 + 349), v138[0]);
            if ( !SessionViewOwner )
            {
              v25 = v139;
              v44 = 0;
              v143 = 0LL;
              v45 = v139;
              *((_DWORD *)v139 + 479) = -1;
              *(_OWORD *)((char *)v45 + 1644) = 0LL;
              *((_OWORD *)v45 + 122) = 0LL;
              *(_QWORD *)((char *)v45 + 1924) = 0LL;
              *(_QWORD *)((char *)v45 + 1932) = 5LL;
              *((_DWORD *)v45 + 485) = 1;
              *((_QWORD *)v45 + 243) = 1LL;
              *((_QWORD *)v45 + 246) = 0LL;
              SetDisplayInfoDefaultToSDR(v45);
              goto LABEL_62;
            }
            v144[0] = -1;
            DmmGetMostImportantClientVidPnPathTargetsFromSource(v41, v138[0], v144);
            if ( (*((_DWORD *)v41 + 109) & 0x40000) != 0 )
              v63 = 0x8000;
            else
              v63 = 0;
            v64 = v139;
            v65 = v144[0];
            *((_DWORD *)v139 + 513) = v63 | *((_DWORD *)v139 + 513) & 0xFFFF7FFF;
            if ( v65 == -1 )
              TargetUsage = 0;
            else
              TargetUsage = DmmGetTargetUsage((__int64)v41, v65, 0LL);
            *((_DWORD *)v64 + 507) = TargetUsage;
            DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v41 + 349), v138[0]);
            v68 = v139;
            v69 = DisplayModeInfo;
            if ( *((_DWORD *)v139 + 507) )
            {
              *(_OWORD *)((char *)v139 + 1644) = 0LL;
              *((_OWORD *)v68 + 122) = 0LL;
            }
            else
            {
              *(_OWORD *)((char *)v139 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
              *((_OWORD *)v68 + 122) = *(_OWORD *)(4000LL * v138[0] + *(_QWORD *)(*((_QWORD *)v41 + 349) + 128LL) + 688);
            }
            *((_DWORD *)v68 + 479) = v144[0];
            DisplayId = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v41 + 349), v138[0]);
            v71 = v139;
            *((_DWORD *)v139 + 480) = DisplayId;
            *((_DWORD *)v71 + 481) = *(_DWORD *)v69;
            *((_DWORD *)v71 + 482) = *((_DWORD *)v69 + 1);
            v72 = *((_DWORD *)v69 + 2);
            if ( v72 == 21 )
              goto LABEL_107;
            v134 = v72 - 20;
            if ( !v134 )
            {
              v73 = 3;
              goto LABEL_108;
            }
            v135 = v134 - 2;
            if ( !v135 )
            {
LABEL_107:
              v73 = 4;
            }
            else
            {
              v136 = v135 - 1;
              if ( v136 )
              {
                if ( v136 == 18 )
                  v73 = 1;
                else
                  v73 = 5;
              }
              else
              {
                v73 = 2;
              }
            }
LABEL_108:
            *((_DWORD *)v71 + 483) = v73;
            v74 = *((_DWORD *)v69 + 4);
            if ( v74 == -2 && *((_DWORD *)v69 + 5) == -2 )
            {
              *((_DWORD *)v71 + 484) = 64;
              v75 = 1;
            }
            else
            {
              *((_DWORD *)v71 + 484) = v74;
              v75 = *((_DWORD *)v69 + 5);
            }
            *((_DWORD *)v71 + 485) = v75;
            CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v41 + 349), v138[0], 2);
            v77 = v139;
            *((_DWORD *)v139 + 486) = CurrentOrientation;
            *((_DWORD *)v77 + 487) = *((_DWORD *)v69 + 6);
            DxgkpCopyMonitorLinkInfoToFlags(v41, v77);
            v78 = v139;
            *((_QWORD *)v139 + 246) = *((_QWORD *)SessionViewOwner + 8);
            SetDisplayInfoDefaultToSDR(v78);
            if ( *((_DWORD *)SessionViewOwner + 10) != 1 )
            {
              v25 = v80;
              goto LABEL_202;
            }
            v81 = v144[0];
            v82 = WdLogNewEntry5_WdTrace(v80, v79);
            *(_QWORD *)(v82 + 24) = v81;
            *(_QWORD *)(v82 + 32) = v41;
            if ( (_DWORD)v81 != -1 )
            {
              v83 = *((_QWORD *)v41 + 349);
              if ( !v83 )
              {
                WdLogSingleEntry0(1LL);
                v83 = *((_QWORD *)v41 + 349);
              }
              v84 = *(MONITOR_MGR **)(v83 + 112);
              if ( v84 )
              {
                v150 = 0LL;
                MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v84, v81, 0, &v150);
                if ( MonitorInstance == -1073741275 )
                {
                  WdLogSingleEntry2(7LL, v81, v84);
                  v41 = (struct DXGADAPTER *)v143;
                  v25 = v139;
                }
                else
                {
                  if ( MonitorInstance >= 0 )
                  {
                    v86 = v150;
                    if ( !v150 )
                      WdLogSingleEntry0(1LL);
                    DXGMONITOR::_AddReference(v86, DxgkGetAdapterDeviceDesc);
                    if ( !v86 )
                      WdLogSingleEntry0(1LL);
                    v87 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                    v148.Value = 0;
                    v149 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                    CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                                       v143,
                                                       v138[0],
                                                       v144[0],
                                                       &v148,
                                                       &v149);
                    v89.0 = v148.0;
                    if ( CurrentWireFormatAndColorSpace < 0 )
                    {
                      v149 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
                      v89.Value = v148.Value & 0xFFFFFF03 | 8;
                      v148.0 = v89.0;
                    }
                    else
                    {
                      v87 = v149;
                    }
                    ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v89);
                    v91 = v139;
                    *((_DWORD *)v139 + 494) = ColorDepthFromPickedWireFormat;
                    *((_DWORD *)v91 + 495) = v87;
                    wil_details_FeatureReporting_ReportUsageToService(
                      (__int64)&Feature_StaticDWMHdrPixelFormat__private_reporting,
                      0x1C4A711u,
                      v92,
                      v93,
                      (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
                      1);
                    v94 = *((_DWORD *)v69 + 19);
                    v158 = 0LL;
                    v159 = 0LL;
                    *((_DWORD *)v139 + 510) = v94;
                    v146.LowPart = 0;
                    LOWORD(v146.HighPart) = 0;
                    v160 = 0LL;
                    v140 = v87 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
                        || v87 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL;
                    v95 = 512;
                    if ( v87 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL )
                    {
                      v141 = 1;
                      v137 = *((_DWORD *)v143 + 109);
                      if ( (v137 & 0x200) == 0 && (v137 & 8) == 0 )
                      {
                        WdLogSingleEntry1(1LL, 7065LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          262146,
                          -1,
                          (__int64)L"(PickedColorSpace != D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) || pDisplayAdap"
                                    "ter->GetAdapter()->IsXBoxOneDevice() || pDisplayAdapter->GetAdapter()->IsSoftGPU()",
                          7065LL,
                          0LL,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                    else
                    {
                      v141 = 0;
                    }
                    v25 = v139;
                    if ( (int)MonitorGetAdvancedColorParams(v86, &v140, &v158, &v146) >= 0 )
                    {
                      v17 = LOBYTE(v146.LowPart) == 0;
                      *((_OWORD *)v139 + 124) = v158;
                      *((_OWORD *)v25 + 125) = v159;
                      *((_QWORD *)v25 + 252) = v160;
                      *((_DWORD *)v25 + 506) = DWORD2(v160);
                      if ( v17 )
                        v95 = 0;
                      if ( BYTE1(v146.LowPart) )
                        v96 = 4096;
                      else
                        v96 = 0;
                      *((_DWORD *)v25 + 513) = v96 | v95 & 0xFFFFEFFF | *((_DWORD *)v25 + 513) & 0xFFFFEDFF;
                    }
                    LOBYTE(v138[1]) = 0;
                    v142[0] = 0;
                    if ( (int)MonitorGetNativeFlags(v86, &v138[1], (char *)v142 + 1, v142) < 0 )
                    {
                      *((_DWORD *)v25 + 513) &= ~0x2000u;
                      v44 = 0;
                    }
                    else
                    {
                      v44 = 0;
                      if ( LOBYTE(v138[1]) )
                        v97 = 0x2000;
                      else
                        v97 = 0;
                      *((_DWORD *)v25 + 513) = v97 | *((_DWORD *)v25 + 513) & 0xFFFFDFFF;
                    }
                    v98 = (__int64)v86;
                    v41 = (struct DXGADAPTER *)v143;
                    MonitorReleaseMonitorHandle((__int64)v143, v98, DxgkGetAdapterDeviceDesc);
                    goto LABEL_139;
                  }
                  WdLogSingleEntry2(2LL, v81, v84);
                  v41 = (struct DXGADAPTER *)v143;
                  v25 = v139;
                }
LABEL_202:
                v44 = 0;
LABEL_139:
                *((_DWORD *)v25 + 513) &= ~0x400u;
                v99 = 4000LL * v138[0];
                v100 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v41 + 349) + 128LL) + v99 + 3780);
                *((_QWORD *)v25 + 254) = v100;
                if ( !v100 )
                  goto LABEL_61;
                _mm_lfence();
                if ( *(_DWORD *)(*((_QWORD *)v41 + 349)
                               + 80LL * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v41 + 349) + 128LL) + v99 + 3780)
                               + 872) == 1 )
                {
                  v41 = v145;
                  v46 = 1;
                  *((_DWORD *)v25 + 509) = 1;
LABEL_62:
                  *((_DWORD *)v25 + 5) = *((_DWORD *)v41 + 108);
                  *((_DWORD *)v25 + 6) = *((_DWORD *)v41 + 103);
                  *((_DWORD *)v25 + 7) = *((_DWORD *)v41 + 104);
                  *((_DWORD *)v25 + 8) = *((_DWORD *)v41 + 105);
                  *((_DWORD *)v25 + 9) = *((_DWORD *)v41 + 106);
                  *((_DWORD *)v25 + 10) = *((_DWORD *)v41 + 107);
                  if ( (*((_DWORD *)v41 + 109) & 0x80u) != 0 )
                    v47 = v46;
                  else
                    v47 = 0;
                  *((_DWORD *)v25 + 206) = v47;
                  if ( *((_DWORD *)v41 + 72) <= 1u )
                    v46 = 0;
                  *((_DWORD *)v25 + 207) = v46;
                  v48 = (_WORD *)((char *)v25 + 48);
                  *((_DWORD *)v25 + 11) = *((_DWORD *)v41 + 673);
                  v49 = *((_QWORD *)v41 + 201);
                  if ( v49 )
                  {
                    v50 = v49 - (_QWORD)v48;
                    while ( v27 != -2147483518 )
                    {
                      v51 = *(_WORD *)((char *)v48 + v50);
                      if ( !v51 )
                        break;
                      *v48++ = v51;
                      if ( !--v27 )
                      {
                        --v48;
                        break;
                      }
                    }
                  }
                  else if ( v25 == (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)-48LL )
                  {
LABEL_73:
                    v52 = (unsigned __int16 *)*((_QWORD *)v41 + 202);
                    v53 = (_WORD *)((char *)v25 + 304);
                    v54 = ((unsigned __int64)*v52 >> 1) - 260;
                    v55 = *((_QWORD *)v52 + 1) - ((_QWORD)v25 + 304);
                    while ( v34 + v54 )
                    {
                      v56 = *(_WORD *)((char *)v53 + v55);
                      if ( !v56 )
                        break;
                      *v53++ = v56;
                      if ( !--v34 )
                      {
                        --v53;
                        break;
                      }
                    }
                    *v53 = 0;
                    if ( (*((_DWORD *)v41 + 109) & 0x100) != 0 )
                      v57 = v151;
                    else
                      v57 = 0LL;
                    *(_QWORD *)((char *)v25 + 2044) = v57;
                    if ( v157 )
                    {
                      v58 = v156;
                      ExReleasePushLockSharedEx((char *)v156 + 136, 0LL);
                      KeLeaveCriticalRegion();
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
                      v25 = v139;
                    }
                    goto LABEL_84;
                  }
                  *v48 = 0;
                  goto LABEL_73;
                }
                WdLogSingleEntry1(1LL, 7127LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"Invalid DXGK_SYNC_LOCK_STYLE, fallback to disable the output SyncLock.",
                  7127LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                *((_DWORD *)v25 + 508) = 0;
LABEL_60:
                v41 = v145;
LABEL_61:
                v46 = 1;
                goto LABEL_62;
              }
              v41 = (struct DXGADAPTER *)v143;
              WdLogSingleEntry1(2LL, v143);
            }
            v25 = v139;
            goto LABEL_202;
          }
          v116 = *(_DWORD *)(v42 + 96);
        }
        else
        {
          v116 = -1;
        }
        v117 = v146.HighPart;
        v11 = v116;
        WdLogSingleEntry5(2LL, v138[0], v116, v146.HighPart, a1.LowPart, 1144079367LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified VidPnSourceId 0x%I64x is bigger than the total number of VidPnSources 0x%I64x on ada"
                    "pter (0x%I64x%08I64x). (0x%I64x)",
          v138[0],
          v11,
          v117,
          a1.LowPart,
          1144079367LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v167);
        LODWORD(v11) = -1073741811;
        v113 = 1144079367;
      }
      else
      {
        LODWORD(v11) = -1073741130;
        v113 = 1144079366;
        WdLogSingleEntry4(3LL, v146.HighPart, a1.LowPart, v138[0], 1144079366LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v155);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v167);
      }
      goto LABEL_169;
    }
    LODWORD(v11) = -1073741130;
    v113 = 1144079365;
    WdLogSingleEntry4(3LL, v146.HighPart, a1.LowPart, v138[0], 1144079365LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v163);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v167);
LABEL_169:
    DxgkReleaseSessionModeChangeLock();
    goto LABEL_151;
  }
  LODWORD(v11) = -1073741811;
  v113 = 1144079361;
  WdLogSingleEntry3(2LL, v146.HighPart, LowPart, 1144079361LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetAdapterDeviceDesc function.",
    v146.HighPart,
    LowPart,
    1144079361LL,
    0LL,
    0LL);
LABEL_151:
  if ( *(_DWORD *)v139 == -21 )
    *((_DWORD *)v139 + 506) = v113;
  v44 = v11;
LABEL_97:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v152);
  if ( v154 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v61, v152);
  return v44;
}
