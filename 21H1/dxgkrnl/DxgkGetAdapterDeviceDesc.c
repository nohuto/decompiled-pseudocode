/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C01176F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0008794 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009DA0 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C000D48C (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D5870 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00E3340 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E7C30 (MonitorReleaseMonitorHandle.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7DC4 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E8A34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00EDE64 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00EF8A0 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00EFD00 (MonitorGetMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00F0078 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C00F0224 (MonitorGetNativeFlags.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0113CE0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C0118F70 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C0127B4C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C0128708 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C012ECE0 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C014E064 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C021D790 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // r12
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  bool v24; // bl
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v29; // r12d
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rcx
  struct DXGADAPTER *v34; // r10
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v44; // rdx
  PEPROCESS v45; // rax
  unsigned __int64 *v46; // rcx
  struct DXGADAPTER **v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  DXGADAPTER *v51; // r9
  _BOOL8 v52; // rcx
  __int64 v53; // rax
  bool v54; // zf
  DXGGLOBAL **v55; // rcx
  signed __int64 v56; // rcx
  DXGADAPTER *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  _QWORD *v60; // rax
  __int64 v61; // rdx
  DXGADAPTERSTOPRESETLOCKSHARED *v62; // rcx
  struct DXGADAPTER *v63; // rcx
  __int64 v64; // r11
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // r8
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  DXGADAPTER *v72; // r15
  __int64 v73; // rax
  __int64 v74; // rdx
  int TargetUsage; // eax
  int DisplayId; // eax
  DXGSESSIONMGR *v77; // rcx
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  struct DXGADAPTER *v82; // rcx
  char v83; // al
  int AdvancedColorParams; // eax
  bool v85; // r8
  int v86; // edx
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v93; // eax
  __int64 v94; // r9
  int v95; // eax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // r9
  int v102; // edx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rdx
  unsigned int v106; // eax
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rax
  __int64 v110; // rdx
  _QWORD *v111; // rax
  __int64 v112; // rcx
  int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rbx
  __int64 v118; // rax
  unsigned __int8 v119; // [rsp+40h] [rbp-C0h] BYREF
  bool v120; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v121[6]; // [rsp+42h] [rbp-BEh] BYREF
  DXGSESSIONMGR *DisplayModeInfo; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v123; // [rsp+50h] [rbp-B0h] BYREF
  bool v124; // [rsp+54h] [rbp-ACh] BYREF
  bool v125; // [rsp+55h] [rbp-ABh] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v126; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v127; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v128; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v129; // [rsp+68h] [rbp-98h] BYREF
  int MonitorHandle; // [rsp+70h] [rbp-90h]
  struct HDXGMONITOR__ *v131; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+80h] [rbp-80h]
  struct DXGADAPTER *v133; // [rsp+88h] [rbp-78h] BYREF
  int v134; // [rsp+90h] [rbp-70h] BYREF
  __int16 v135; // [rsp+94h] [rbp-6Ch]
  int v136; // [rsp+98h] [rbp-68h] BYREF
  __int16 v137; // [rsp+9Ch] [rbp-64h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v138; // [rsp+A0h] [rbp-60h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v139; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v140; // [rsp+A8h] [rbp-58h] BYREF
  struct _LUID v141; // [rsp+B0h] [rbp-50h]
  __int64 v142; // [rsp+B8h] [rbp-48h]
  _BYTE v143[8]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v144; // [rsp+C8h] [rbp-38h]
  char v145; // [rsp+D0h] [rbp-30h]
  int v146; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v147; // [rsp+E0h] [rbp-20h]
  char v148; // [rsp+E8h] [rbp-18h]
  __int128 v149; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v150; // [rsp+100h] [rbp+0h]
  __int64 v151; // [rsp+110h] [rbp+10h]
  int v152; // [rsp+118h] [rbp+18h]
  __int128 v153; // [rsp+120h] [rbp+20h] BYREF
  __int128 v154; // [rsp+130h] [rbp+30h]
  __int64 v155; // [rsp+140h] [rbp+40h]
  int v156; // [rsp+148h] [rbp+48h]
  _BYTE v157[8]; // [rsp+150h] [rbp+50h] BYREF
  DXGADAPTER *v158; // [rsp+158h] [rbp+58h]
  char v159; // [rsp+160h] [rbp+60h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v160; // [rsp+168h] [rbp+68h] BYREF
  DXGADAPTER *v161[2]; // [rsp+178h] [rbp+78h] BYREF
  unsigned __int64 v162; // [rsp+188h] [rbp+88h] BYREF
  char v163; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v164; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v165[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v146 = -1;
  v5 = a2;
  v141 = a1;
  v147 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v148 = 1;
    v146 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v148 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v146, 2185LL);
  v129 = 0LL;
  v9 = 0LL;
  v133 = 0LL;
  LODWORD(v142) = 0;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 6213LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v162);
  if ( !SessionViewOwner )
  {
    v14 = 1144079361;
    LODWORD(v15) = -1073741811;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v16[3] = v141.HighPart;
    v16[4] = a1.LowPart;
    v16[5] = 1144079361LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  v21 = DxgkAcquireSessionModeChangeLock(0LL, v12);
  v15 = v21;
  v24 = v21 >= 0;
  if ( v21 < 0 )
  {
    v14 = 1144079362;
    v25 = WdLogNewEntry5_WdError(v23, v22);
    *(_QWORD *)(v25 + 24) = v15;
    *(_QWORD *)(v25 + 32) = 1144079362LL;
    WdLogEvent5_WdError(v25);
    if ( v24 )
      DxgkReleaseSessionModeChangeLock(v26, v17);
    goto LABEL_159;
  }
  MonitorHandle = -1;
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v34 = SessionViewOwner;
  }
  else
  {
    v29 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v126 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    DisplayModeInfo = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v28, v27) + 88);
    if ( DisplayModeInfo )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v31);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         DisplayModeInfo,
                                         CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      LODWORD(v15) = -1073741811;
      v14 = 1144079369;
      v39 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v30);
      CurrentProcess = PsGetCurrentProcess(v41, v40);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      v39[3] = ProcessSessionId;
      v45 = (PEPROCESS)PsGetCurrentProcess(ProcessSessionId, v44);
      v37 = v39;
      v39[5] = 1144079369LL;
      v39[4] = v45 != PsInitialSystemProcess;
      goto LABEL_30;
    }
    v34 = SessionViewOwner;
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)SessionViewOwner + 79)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4626) == *((_DWORD *)SessionViewOwner + 80) )
    {
      v29 = *((_DWORD *)SessionDataForSpecifiedSession + 4627);
      v126 = v29;
    }
    if ( (_DWORD)v5 != -1 && (unsigned int)v5 >= v29 )
    {
      LODWORD(v15) = -1073741811;
      v14 = 1144079363;
      v35 = (_QWORD *)WdLogNewEntry5_WdError(SessionDataForSpecifiedSession, v30);
      v36 = (unsigned int)v126;
      v35[3] = v5;
      v35[4] = v36;
      v35[5] = 1144079363LL;
LABEL_29:
      v37 = v35;
LABEL_30:
      WdLogEvent5_WdError(v37);
      goto LABEL_31;
    }
    LODWORD(v5) = -1;
  }
  v46 = (unsigned __int64 *)&v163;
  v47 = &v129;
  v48 = 0LL;
  if ( (_DWORD)v5 == -1 )
  {
    v46 = 0LL;
    v47 = 0LL;
  }
  else
  {
    v48 = (unsigned int)v5;
  }
  LODWORD(v15) = DxgkpGetPairingAdapters(v34, v48, &v133, &v164, v47, v46, 0);
  if ( (int)v15 < 0 )
  {
    LODWORD(v15) = -1073741811;
    v14 = 1144079364;
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v49, 0LL);
    v35[3] = v141.HighPart;
    v35[4] = a1.LowPart;
    v35[5] = (unsigned int)v5;
    v35[6] = 1144079364LL;
    goto LABEL_29;
  }
  if ( !v133 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v49, 0LL);
    *(_QWORD *)(v50 + 24) = 6330LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v51 = v129;
  v52 = (_DWORD)v5 == -1;
  if ( v52 != (v129 == 0LL) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v52, 0LL);
    *(_QWORD *)(v53 + 24) = 6331LL;
    WdLogEvent5_WdAssertion(v53);
    v51 = v129;
  }
  v54 = v51 == 0LL;
  if ( v51 )
  {
    if ( (*((_DWORD *)v51 + 87) & 0x100) != 0 )
    {
      v161[0] = 0LL;
      if ( DxgkpGetIndirectDisplayPairedAdapter(v51, 0, (struct DXGADAPTER_REFERENCE *)v161) >= 0 )
        v9 = *(_QWORD *)((char *)v161[0] + 316);
      DXGADAPTER_REFERENCE::Assign(v161, 0LL);
      v51 = v129;
    }
    v54 = v51 == 0LL;
  }
  if ( v54 )
    v51 = v133;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v165, v133, v51);
  v55 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v55[2], (struct DXGADAPTER *)v55);
  v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)v133 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v57 = v133;
  DisplayModeInfo = v133;
  if ( v56 == 1 )
  {
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v133 + 2), v133);
    v57 = DisplayModeInfo;
  }
  if ( v129 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v129);
    v57 = DisplayModeInfo;
  }
  else
  {
    v129 = v57;
  }
  v158 = v57;
  v159 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
  if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
  {
    LODWORD(v15) = -1073741130;
    v14 = 1144079365;
    v60 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v58, v59);
    v60[3] = v141.HighPart;
    v60[4] = a1.LowPart;
    v60[5] = (unsigned int)v5;
    v60[6] = 1144079365LL;
    WdLogEvent5_WdWarning(v60);
    if ( !v159 )
    {
LABEL_64:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v165, v61);
LABEL_31:
      if ( v24 )
        DxgkReleaseSessionModeChangeLock(v38, v17);
      goto LABEL_9;
    }
    v62 = (DXGADAPTERSTOPRESETLOCKSHARED *)v157;
LABEL_63:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v62);
    goto LABEL_64;
  }
  v63 = v133;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v133 + 86);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v63 + 81);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v63 + 82);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v63 + 83);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v63 + 84);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v63 + 85);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v63 + 87) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v63 + 70) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v63 + 643);
  DXGADAPTER::GetDeviceDescriptor(v63, 0x100u, (unsigned __int16 *)(a4 + 860));
  RtlStringCbCopyNW(
    (char *)(a4 + 1116),
    v65,
    *(char **)(*(_QWORD *)(v64 + 1496) + 8LL),
    **(unsigned __int16 **)(v64 + 1496));
  if ( v159 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
  DisplayModeInfo = v129;
  if ( v129 )
  {
    v145 = 0;
    v144 = v129;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
    if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
    {
      LODWORD(v15) = -1073741130;
      v14 = 1144079366;
      v69 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v67, v68);
      v69[3] = v141.HighPart;
      v69[4] = a1.LowPart;
      v69[5] = (unsigned int)v5;
      v69[6] = 1144079366LL;
      WdLogEvent5_WdWarning(v69);
LABEL_70:
      if ( !v145 )
        goto LABEL_64;
      v62 = (DXGADAPTERSTOPRESETLOCKSHARED *)v143;
      goto LABEL_63;
    }
    if ( (_DWORD)v5 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
LABEL_144:
      v72 = v129;
      goto LABEL_145;
    }
    v72 = v129;
    v73 = *((_QWORD *)v129 + 334);
    if ( !v73 || (unsigned int)v5 >= *(_DWORD *)(v73 + 80) )
    {
      v14 = 1144079367;
      LODWORD(v15) = -1073741811;
      if ( v73 )
        MonitorHandle = *(_DWORD *)(v73 + 80);
      v111 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70);
      v111[3] = (unsigned int)v5;
      v111[4] = (unsigned int)MonitorHandle;
      v111[5] = v141.HighPart;
      v111[6] = a1.LowPart;
      v111[7] = 1144079367LL;
      WdLogEvent5_WdError(v111);
      goto LABEL_70;
    }
    SessionViewOwner = (struct DXGADAPTER *)ADAPTER_DISPLAY::GetSessionViewOwner(
                                              *((ADAPTER_DISPLAY **)SessionViewOwner + 334),
                                              (unsigned int)v5);
    if ( !SessionViewOwner )
    {
      *(_DWORD *)(a4 + 1916) = -1;
      DisplayModeInfo = 0LL;
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
      *(_DWORD *)(a4 + 1940) = 1;
      *(_QWORD *)(a4 + 1944) = 1LL;
      *(_QWORD *)(a4 + 1924) = 0LL;
      *(_QWORD *)(a4 + 1968) = 0LL;
      *(_QWORD *)(a4 + 1932) = 5LL;
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
LABEL_145:
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v72 + 86);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v72 + 81);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v72 + 82);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v72 + 83);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v72 + 84);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v72 + 85);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v72 + 87) >> 7) & 1;
      *(_DWORD *)(a4 + 828) = *((_DWORD *)v72 + 70) > 1u;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v72 + 643);
      DXGADAPTER::GetDeviceDescriptor(v72, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v110,
        *(char **)(*((_QWORD *)v72 + 187) + 8LL),
        **((unsigned __int16 **)v72 + 187));
      *(_QWORD *)(a4 + 2044) = v9 & -(__int64)((*((_DWORD *)v72 + 87) & 0x100) != 0);
      if ( v145 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v143);
      goto LABEL_152;
    }
    v123 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v72, v5, &v123);
    v74 = v123;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v72 + 87) >> 3)) & 0x8000;
    if ( (_DWORD)v74 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v72, v74, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v72 + 334), (unsigned int)v5);
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(3968LL * (unsigned int)v5 + *(_QWORD *)(*((_QWORD *)v72 + 334) + 112LL) + 652);
    }
    *(_DWORD *)(a4 + 1916) = v123;
    DisplayId = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v72 + 334), (unsigned int)v5);
    v77 = DisplayModeInfo;
    *(_DWORD *)(a4 + 1920) = DisplayId;
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)v77;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)v77 + 1);
    v78 = *((_DWORD *)v77 + 2);
    if ( v78 == 20 )
    {
      v79 = 3;
    }
    else
    {
      if ( v78 > 20 )
      {
        if ( v78 <= 22 )
        {
          v79 = 4;
          goto LABEL_93;
        }
        if ( v78 == 23 )
        {
          v79 = 2;
          goto LABEL_93;
        }
        if ( v78 == 41 )
        {
          v79 = 1;
          goto LABEL_93;
        }
      }
      v79 = 5;
    }
LABEL_93:
    *(_DWORD *)(a4 + 1932) = v79;
    v80 = *((_DWORD *)v77 + 4);
    if ( v80 == -2 && *((_DWORD *)v77 + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v81 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v80;
      v81 = *((_DWORD *)v77 + 5);
    }
    *(_DWORD *)(a4 + 1940) = v81;
    *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v72 + 334), (unsigned int)v5, 2LL);
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    DxgkpCopyMonitorLinkInfoToFlags(v72, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    v82 = SessionViewOwner;
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)SessionViewOwner + 8);
    if ( *((_DWORD *)v82 + 10) != 1 )
      goto LABEL_140;
    v131 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle((__int64)v72, v123, 0LL, DxgkGetAdapterDeviceDesc, &v131);
    v127 = 0;
    v151 = 0LL;
    v152 = 0;
    v134 = 0;
    v135 = 0;
    v126 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v149 = 0LL;
    v150 = 0LL;
    if ( (int)DmmGetCurrentWireFormatAndColorSpace(v72, (unsigned int)v5, v123, &v160, &v126) < 0 )
    {
      v83 = 0;
    }
    else if ( v126 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
           || (v83 = 0, v126 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
    {
      v83 = 1;
    }
    LOBYTE(v127) = v83;
    if ( MonitorHandle < 0
      || (AdvancedColorParams = MonitorGetAdvancedColorParams(v131, &v127, (__int64)&v149, (__int64)&v134),
          v85 = 0,
          AdvancedColorParams < 0) )
    {
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    }
    else
    {
      *(_OWORD *)(a4 + 1984) = v149;
      *(_OWORD *)(a4 + 2000) = v150;
      v86 = *(_DWORD *)(a4 + 2052);
      *(_QWORD *)(a4 + 2016) = v151;
      *(_DWORD *)(a4 + 2024) = v152;
      *(_DWORD *)(a4 + 2052) = (BYTE1(v134) != 0 ? 0x1000 : 0) | ((_BYTE)v134 != 0 ? 0x200 : 0) | v86 & 0xFFFFEDFF;
    }
    v120 = v85;
    v125 = v85;
    v124 = v85;
    if ( (int)MonitorGetNativeFlags(v131, (unsigned __int8 *)&v120, &v125, &v124) < 0 )
      *(_DWORD *)(a4 + 2052) &= ~0x2000u;
    else
      *(_DWORD *)(a4 + 2052) = (v120 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
    if ( v131 && (int)MonitorReleaseMonitorHandle((__int64)v72, (__int64)v131, DxgkGetAdapterDeviceDesc, v87) < 0 )
    {
      v90 = WdLogNewEntry5_WdAssertion(v89, v88);
      *(_QWORD *)(v90 + 24) = 6582LL;
      WdLogEvent5_WdAssertion(v90);
    }
    v138.Value = 0;
    v139 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    if ( (int)DmmGetCurrentWireFormatAndColorSpace(v72, (unsigned int)v5, v123, &v138, &v139) < 0 )
    {
LABEL_140:
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
      goto LABEL_141;
    }
    *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v138.Value, v91);
    v93 = v139;
    *(_DWORD *)(a4 + 1980) = v139;
    *(_DWORD *)(a4 + 2040) = 0;
    switch ( v93 )
    {
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020:
        if ( (int)MonitorGetMonitorHandle((__int64)v72, v123, 0LL, DxgkGetAdapterDeviceDesc, &v131) >= 0 )
        {
          v140 = 0;
          if ( (int)MonitorIsMonitorAndLinkHDRCapable(v131, &v140) >= 0 && (v140 & 1) != 0 )
          {
            if ( *((int *)v72 + 643) < 2500 )
            {
              *(_DWORD *)(a4 + 2040) = (*((_DWORD *)v72 + 81) != 32902) + 1;
            }
            else
            {
              v95 = *((_DWORD *)v72 + 638);
              if ( (v95 & 4) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 2;
              }
              else if ( (v95 & 8) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 1;
              }
            }
          }
        }
        if ( !v131 || (int)MonitorReleaseMonitorHandle((__int64)v72, (__int64)v131, DxgkGetAdapterDeviceDesc, v94) >= 0 )
          goto LABEL_141;
        v98 = WdLogNewEntry5_WdAssertion(v97, v96);
        *(_QWORD *)(v98 + 24) = 6648LL;
        break;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG:
        *(_DWORD *)(a4 + 2040) = 3;
LABEL_141:
        *(_DWORD *)(a4 + 2052) &= ~0x400u;
        v105 = 3968LL * (unsigned int)v5;
        v106 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v72 + 334) + 112LL) + v105 + 3756);
        *(_QWORD *)(a4 + 2032) = v106;
        if ( !v106 )
          goto LABEL_145;
        _mm_lfence();
        v107 = *((_QWORD *)v72 + 334);
        v108 = *(unsigned int *)(*(_QWORD *)(v107 + 112) + v105 + 3756);
        if ( *(_DWORD *)(v107 + 80 * v108 + 768) == 1 )
        {
          *(_DWORD *)(a4 + 2036) = 1;
        }
        else
        {
          v109 = WdLogNewEntry5_WdAssertion(v108, 10 * v108);
          *(_QWORD *)(v109 + 24) = 6736LL;
          WdLogEvent5_WdAssertion(v109);
          *(_DWORD *)(a4 + 2032) = 0;
        }
        goto LABEL_144;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL:
        v99 = *((_DWORD *)v72 + 87);
        if ( (v99 & 0x200) == 0 && (v99 & 8) == 0 )
        {
          v100 = WdLogNewEntry5_WdAssertion(0LL, v92);
          *(_QWORD *)(v100 + 24) = 6658LL;
          WdLogEvent5_WdAssertion(v100);
        }
        v128 = 256;
        DisplayModeInfo = 0LL;
        v155 = 0LL;
        v156 = 0;
        v136 = 0;
        v137 = 0;
        v153 = 0LL;
        v154 = 0LL;
        if ( (int)MonitorGetMonitorHandle((__int64)v72, v123, 0LL, DxgkGetAdapterDeviceDesc, &DisplayModeInfo) >= 0
          && (int)MonitorGetAdvancedColorParams(DisplayModeInfo, &v128, (__int64)&v153, (__int64)&v136) >= 0 )
        {
          *(_OWORD *)(a4 + 1984) = v153;
          *(_OWORD *)(a4 + 2000) = v154;
          v102 = *(_DWORD *)(a4 + 2052);
          *(_QWORD *)(a4 + 2016) = v155;
          *(_DWORD *)(a4 + 2024) = v156;
          *(_DWORD *)(a4 + 2052) = (BYTE1(v136) != 0 ? 0x1000 : 0) | ((_BYTE)v136 != 0 ? 0x200 : 0) | v102 & 0xFFFFEDFF;
        }
        if ( !DisplayModeInfo
          || (int)MonitorReleaseMonitorHandle((__int64)v72, (__int64)DisplayModeInfo, DxgkGetAdapterDeviceDesc, v101) >= 0 )
        {
          goto LABEL_141;
        }
        v98 = WdLogNewEntry5_WdAssertion(v104, v103);
        *(_QWORD *)(v98 + 24) = 6700LL;
        break;
      default:
        goto LABEL_141;
    }
    WdLogEvent5_WdAssertion(v98);
    goto LABEL_141;
  }
LABEL_152:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v165, v66);
  if ( v24 )
    DxgkReleaseSessionModeChangeLock(v112, v17);
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v119 = 0;
    v121[0] = 0;
    v113 = DxgkpAdapterCheckStereoMode(a1, (unsigned int)v5, v121, &v119);
    v117 = v113;
    if ( v113 < 0 )
    {
      v118 = WdLogNewEntry5_WdWarning(v115, v114, v116);
      *(_QWORD *)(v118 + 24) = v117;
      WdLogEvent5_WdWarning(v118);
    }
    else
    {
      v17 = (v119 != 0 ? 8 : 0) | (v121[0] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
      *(_DWORD *)(a4 + 2052) = v17;
    }
  }
  v14 = v142;
LABEL_159:
  if ( (int)v15 >= 0 )
  {
    LODWORD(v15) = 0;
    goto LABEL_11;
  }
LABEL_9:
  if ( *(_DWORD *)a4 == -21 )
    *(_DWORD *)(a4 + 2024) = v14;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v146, v17);
  if ( v148 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v146);
  return (unsigned int)v15;
}
