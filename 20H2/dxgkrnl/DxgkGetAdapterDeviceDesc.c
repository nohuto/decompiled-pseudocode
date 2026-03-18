/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C0110140
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x1C00064A4 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0009540 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000B910 (-GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D0F0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00DC1F4 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F6230 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DxgIsSessionUsingWddmMonitors@@YAHXZ @ 0x1C01119C0 (-DxgIsSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1C011E6DC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C011E798 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C011EE20 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0120EE4 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1C0122A9C (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 *     ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C0124D90 (-DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C01251F0 (MonitorGetMonitorHandle.c)
 *     MonitorGetAdvancedColorParams @ 0x1C0125568 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C0125714 (MonitorGetNativeFlags.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C0127268 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01315B4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0136458 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015BD40 (-SetDisplayInfoDefaultToSDR@@YAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z @ 0x1C0220830 (-DxgkpGetIndirectDisplayPairedAdapter@@YAJPEAVDXGADAPTER@@EAEAVDXGADAPTER_REFERENCE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v28; // r12d
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rcx
  struct DXGADAPTER *v33; // r10
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rcx
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v42; // rdx
  PEPROCESS v43; // rax
  unsigned __int64 *v44; // rcx
  struct DXGADAPTER **v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  DXGADAPTER *v49; // r9
  _BOOL8 v50; // rcx
  __int64 v51; // rax
  bool v52; // zf
  DXGGLOBAL **v53; // rcx
  signed __int64 v54; // rcx
  DXGADAPTER *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int64 v59; // rdx
  DXGADAPTERSTOPRESETLOCKSHARED *v60; // rcx
  DXGADAPTER *v61; // rcx
  __int64 v62; // r11
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  DXGADAPTER *v70; // r15
  __int64 v71; // rax
  __int64 v72; // rdx
  int TargetUsage; // eax
  int DisplayId; // eax
  DXGSESSIONMGR *v75; // rcx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  struct DXGADAPTER *v80; // rcx
  char v81; // al
  int AdvancedColorParams; // eax
  char v83; // r8
  int v84; // edx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // eax
  __int64 v95; // rax
  int v96; // edx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned int v100; // eax
  __int64 v101; // r8
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rax
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // rbx
  __int64 v111; // rax
  unsigned __int8 v112; // [rsp+40h] [rbp-C0h] BYREF
  char v113; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int8 v114[6]; // [rsp+42h] [rbp-BEh] BYREF
  DXGSESSIONMGR *DisplayModeInfo; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v116; // [rsp+50h] [rbp-B0h] BYREF
  char v117; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v118[3]; // [rsp+55h] [rbp-ABh] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v119; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v120; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v121; // [rsp+60h] [rbp-A0h] BYREF
  DXGADAPTER *v122; // [rsp+68h] [rbp-98h] BYREF
  int MonitorHandle; // [rsp+70h] [rbp-90h]
  struct HDXGMONITOR__ *v124; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *SessionViewOwner; // [rsp+80h] [rbp-80h]
  DXGADAPTER *v126; // [rsp+88h] [rbp-78h] BYREF
  int v127; // [rsp+90h] [rbp-70h] BYREF
  __int16 v128; // [rsp+94h] [rbp-6Ch]
  int v129; // [rsp+98h] [rbp-68h] BYREF
  __int16 v130; // [rsp+9Ch] [rbp-64h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v131; // [rsp+A0h] [rbp-60h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v132; // [rsp+A4h] [rbp-5Ch] BYREF
  int v133; // [rsp+A8h] [rbp-58h]
  struct _LUID v134; // [rsp+B0h] [rbp-50h]
  __int64 v135; // [rsp+B8h] [rbp-48h]
  _BYTE v136[8]; // [rsp+C0h] [rbp-40h] BYREF
  DXGADAPTER *v137; // [rsp+C8h] [rbp-38h]
  char v138; // [rsp+D0h] [rbp-30h]
  int v139; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v140; // [rsp+E0h] [rbp-20h]
  char v141; // [rsp+E8h] [rbp-18h]
  __int128 v142; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v143; // [rsp+100h] [rbp+0h]
  __int64 v144; // [rsp+110h] [rbp+10h]
  int v145; // [rsp+118h] [rbp+18h]
  __int128 v146; // [rsp+120h] [rbp+20h] BYREF
  __int128 v147; // [rsp+130h] [rbp+30h]
  __int64 v148; // [rsp+140h] [rbp+40h]
  int v149; // [rsp+148h] [rbp+48h]
  _BYTE v150[8]; // [rsp+150h] [rbp+50h] BYREF
  DXGADAPTER *v151; // [rsp+158h] [rbp+58h]
  char v152; // [rsp+160h] [rbp+60h]
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v153; // [rsp+168h] [rbp+68h] BYREF
  DXGADAPTER *v154[2]; // [rsp+178h] [rbp+78h] BYREF
  unsigned __int64 v155; // [rsp+188h] [rbp+88h] BYREF
  char v156; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v157; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v158[144]; // [rsp+1A0h] [rbp+A0h] BYREF

  v139 = -1;
  v5 = a2;
  v134 = a1;
  v140 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v141 = 1;
    v139 = 2185;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2185);
  }
  else
  {
    v141 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v139, 2185LL);
  v122 = 0LL;
  v9 = 0LL;
  v126 = 0LL;
  LODWORD(v135) = 0;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 6289LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  SessionViewOwner = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v155);
  if ( !SessionViewOwner )
  {
    v14 = 1144079361;
    LODWORD(v15) = -1073741811;
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
    v16[3] = v134.HighPart;
    v16[4] = a1.LowPart;
    v16[5] = 1144079361LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  v21 = DxgkAcquireSessionModeChangeLock(0LL);
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
      DxgkReleaseSessionModeChangeLock();
    goto LABEL_159;
  }
  MonitorHandle = -1;
  if ( (unsigned int)DxgIsSessionUsingWddmMonitors() )
  {
    v33 = SessionViewOwner;
  }
  else
  {
    v28 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v119 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    DisplayModeInfo = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v27, v26) + 102);
    if ( DisplayModeInfo )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29);
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
      v37 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v29);
      CurrentProcess = PsGetCurrentProcess(v39, v38);
      ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
      v37[3] = ProcessSessionId;
      v43 = (PEPROCESS)PsGetCurrentProcess(ProcessSessionId, v42);
      v36 = v37;
      v37[5] = 1144079369LL;
      v37[4] = v43 != PsInitialSystemProcess;
      goto LABEL_30;
    }
    v33 = SessionViewOwner;
    if ( *((_DWORD *)SessionDataForSpecifiedSession + 4625) == *((_DWORD *)SessionViewOwner + 79)
      && *((_DWORD *)SessionDataForSpecifiedSession + 4626) == *((_DWORD *)SessionViewOwner + 80) )
    {
      v28 = *((_DWORD *)SessionDataForSpecifiedSession + 4627);
      v119 = v28;
    }
    if ( (_DWORD)v5 != -1 && (unsigned int)v5 >= v28 )
    {
      LODWORD(v15) = -1073741811;
      v14 = 1144079363;
      v34 = (_QWORD *)WdLogNewEntry5_WdError(SessionDataForSpecifiedSession, v29);
      v35 = (unsigned int)v119;
      v34[3] = v5;
      v34[4] = v35;
      v34[5] = 1144079363LL;
LABEL_29:
      v36 = v34;
LABEL_30:
      WdLogEvent5_WdError(v36);
      goto LABEL_31;
    }
    LODWORD(v5) = -1;
  }
  v44 = (unsigned __int64 *)&v156;
  v45 = &v122;
  v46 = 0LL;
  if ( (_DWORD)v5 == -1 )
  {
    v44 = 0LL;
    v45 = 0LL;
  }
  else
  {
    v46 = (unsigned int)v5;
  }
  LODWORD(v15) = DxgkpGetPairingAdapters(v33, v46, &v126, &v157, v45, v44, 0);
  if ( (int)v15 < 0 )
  {
    LODWORD(v15) = -1073741811;
    v14 = 1144079364;
    v34 = (_QWORD *)WdLogNewEntry5_WdError(v47, 0LL);
    v34[3] = v134.HighPart;
    v34[4] = a1.LowPart;
    v34[5] = (unsigned int)v5;
    v34[6] = 1144079364LL;
    goto LABEL_29;
  }
  if ( !v126 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v47, 0LL);
    *(_QWORD *)(v48 + 24) = 6406LL;
    WdLogEvent5_WdAssertion(v48);
  }
  v49 = v122;
  v50 = (_DWORD)v5 == -1;
  if ( v50 != (v122 == 0LL) )
  {
    v51 = WdLogNewEntry5_WdAssertion(v50, 0LL);
    *(_QWORD *)(v51 + 24) = 6407LL;
    WdLogEvent5_WdAssertion(v51);
    v49 = v122;
  }
  v52 = v49 == 0LL;
  if ( v49 )
  {
    if ( (*((_DWORD *)v49 + 87) & 0x100) != 0 )
    {
      v154[0] = 0LL;
      if ( DxgkpGetIndirectDisplayPairedAdapter(v49, 0, (struct DXGADAPTER_REFERENCE *)v154) >= 0 )
        v9 = *(_QWORD *)((char *)v154[0] + 316);
      DXGADAPTER_REFERENCE::Assign(v154, 0LL);
      v49 = v122;
    }
    v52 = v49 == 0LL;
  }
  if ( v52 )
    v49 = v126;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v158, v126, v49);
  v53 = (DXGGLOBAL **)SessionViewOwner;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)SessionViewOwner + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(v53[2], (struct DXGADAPTER *)v53);
  v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)v126 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v55 = v126;
  DisplayModeInfo = v126;
  if ( v54 == 1 )
  {
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v126 + 2), v126);
    v55 = DisplayModeInfo;
  }
  if ( v122 )
  {
    DXGADAPTER::ReleaseReference(v122);
    v55 = DisplayModeInfo;
  }
  else
  {
    v122 = v55;
  }
  v151 = v55;
  v152 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v150);
  if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
  {
    LODWORD(v15) = -1073741130;
    v14 = 1144079365;
    v58 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v56, v57);
    v58[3] = v134.HighPart;
    v58[4] = a1.LowPart;
    v58[5] = (unsigned int)v5;
    v58[6] = 1144079365LL;
    WdLogEvent5_WdWarning(v58);
    if ( !v152 )
    {
LABEL_64:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v158, v59);
LABEL_31:
      if ( v24 )
        DxgkReleaseSessionModeChangeLock();
      goto LABEL_9;
    }
    v60 = (DXGADAPTERSTOPRESETLOCKSHARED *)v150;
LABEL_63:
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v60);
    goto LABEL_64;
  }
  v61 = v126;
  *(_DWORD *)(a4 + 832) = *((_DWORD *)v126 + 86);
  *(_DWORD *)(a4 + 836) = *((_DWORD *)v61 + 81);
  *(_DWORD *)(a4 + 840) = *((_DWORD *)v61 + 82);
  *(_DWORD *)(a4 + 844) = *((_DWORD *)v61 + 83);
  *(_DWORD *)(a4 + 848) = *((_DWORD *)v61 + 84);
  *(_DWORD *)(a4 + 852) = *((_DWORD *)v61 + 85);
  *(_DWORD *)(a4 + 1636) = (*((_DWORD *)v61 + 87) >> 7) & 1;
  *(_DWORD *)(a4 + 1640) = *((_DWORD *)v61 + 70) > 1u;
  *(_DWORD *)(a4 + 856) = *((_DWORD *)v61 + 649);
  DXGADAPTER::GetDeviceDescriptor(v61, 0x100u, (unsigned __int16 *)(a4 + 860));
  RtlStringCbCopyNW(
    (char *)(a4 + 1116),
    v63,
    *(char **)(*(_QWORD *)(v62 + 1520) + 8LL),
    **(unsigned __int16 **)(v62 + 1520));
  if ( v152 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v150);
  DisplayModeInfo = v122;
  if ( v122 )
  {
    v138 = 0;
    v137 = v122;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
    if ( *((_DWORD *)DisplayModeInfo + 50) != 1 )
    {
      LODWORD(v15) = -1073741130;
      v14 = 1144079366;
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(DisplayModeInfo, v65, v66);
      v67[3] = v134.HighPart;
      v67[4] = a1.LowPart;
      v67[5] = (unsigned int)v5;
      v67[6] = 1144079366LL;
      WdLogEvent5_WdWarning(v67);
LABEL_70:
      if ( !v138 )
        goto LABEL_64;
      v60 = (DXGADAPTERSTOPRESETLOCKSHARED *)v136;
      goto LABEL_63;
    }
    if ( (_DWORD)v5 == -1 || !(unsigned int)DxgIsSessionUsingWddmMonitors() )
    {
LABEL_144:
      v70 = v122;
      goto LABEL_145;
    }
    v70 = v122;
    v71 = *((_QWORD *)v122 + 337);
    if ( !v71 || (unsigned int)v5 >= *(_DWORD *)(v71 + 80) )
    {
      v14 = 1144079367;
      LODWORD(v15) = -1073741811;
      if ( v71 )
        MonitorHandle = *(_DWORD *)(v71 + 80);
      v105 = (_QWORD *)WdLogNewEntry5_WdError(v69, v68);
      v105[3] = (unsigned int)v5;
      v105[4] = (unsigned int)MonitorHandle;
      v105[5] = v134.HighPart;
      v105[6] = a1.LowPart;
      v105[7] = 1144079367LL;
      WdLogEvent5_WdError(v105);
      goto LABEL_70;
    }
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(*((ADAPTER_DISPLAY **)SessionViewOwner + 337), v5);
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
      *(_DWORD *)(a4 + 20) = *((_DWORD *)v70 + 86);
      *(_DWORD *)(a4 + 24) = *((_DWORD *)v70 + 81);
      *(_DWORD *)(a4 + 28) = *((_DWORD *)v70 + 82);
      *(_DWORD *)(a4 + 32) = *((_DWORD *)v70 + 83);
      *(_DWORD *)(a4 + 36) = *((_DWORD *)v70 + 84);
      *(_DWORD *)(a4 + 40) = *((_DWORD *)v70 + 85);
      *(_DWORD *)(a4 + 824) = (*((_DWORD *)v70 + 87) >> 7) & 1;
      *(_DWORD *)(a4 + 828) = *((_DWORD *)v70 + 70) > 1u;
      *(_DWORD *)(a4 + 44) = *((_DWORD *)v70 + 649);
      DXGADAPTER::GetDeviceDescriptor(v70, 0x100u, (unsigned __int16 *)(a4 + 48));
      RtlStringCbCopyNW(
        (char *)(a4 + 304),
        v104,
        *(char **)(*((_QWORD *)v70 + 190) + 8LL),
        **((unsigned __int16 **)v70 + 190));
      *(_QWORD *)(a4 + 2044) = v9 & -(__int64)((*((_DWORD *)v70 + 87) & 0x100) != 0);
      if ( v138 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v136);
      goto LABEL_152;
    }
    v116 = -1;
    DmmGetMostImportantClientVidPnPathTargetsFromSource(v70, v5, &v116);
    v72 = v116;
    *(_DWORD *)(a4 + 2052) ^= (*(_DWORD *)(a4 + 2052) ^ (*((_DWORD *)v70 + 87) >> 3)) & 0x8000;
    if ( (_DWORD)v72 == -1 )
      TargetUsage = 0;
    else
      TargetUsage = DmmGetTargetUsage(v70, v72, 0LL);
    *(_DWORD *)(a4 + 2028) = TargetUsage;
    DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v70 + 337), (unsigned int)v5);
    if ( *(_DWORD *)(a4 + 2028) )
    {
      *(_OWORD *)(a4 + 1644) = 0LL;
      *(_OWORD *)(a4 + 1952) = 0LL;
    }
    else
    {
      *(_OWORD *)(a4 + 1644) = *(_OWORD *)((char *)SessionViewOwner + 24);
      *(_OWORD *)(a4 + 1952) = *(_OWORD *)(3968LL * (unsigned int)v5 + *(_QWORD *)(*((_QWORD *)v70 + 337) + 112LL) + 652);
    }
    *(_DWORD *)(a4 + 1916) = v116;
    DisplayId = ADAPTER_DISPLAY::GetDisplayId(*((ADAPTER_DISPLAY **)v70 + 337), (unsigned int)v5);
    v75 = DisplayModeInfo;
    *(_DWORD *)(a4 + 1920) = DisplayId;
    *(_DWORD *)(a4 + 1924) = *(_DWORD *)v75;
    *(_DWORD *)(a4 + 1928) = *((_DWORD *)v75 + 1);
    v76 = *((_DWORD *)v75 + 2);
    if ( v76 == 20 )
    {
      v77 = 3;
    }
    else
    {
      if ( v76 > 20 )
      {
        if ( v76 <= 22 )
        {
          v77 = 4;
          goto LABEL_93;
        }
        if ( v76 == 23 )
        {
          v77 = 2;
          goto LABEL_93;
        }
        if ( v76 == 41 )
        {
          v77 = 1;
          goto LABEL_93;
        }
      }
      v77 = 5;
    }
LABEL_93:
    *(_DWORD *)(a4 + 1932) = v77;
    v78 = *((_DWORD *)v75 + 4);
    if ( v78 == -2 && *((_DWORD *)v75 + 5) == -2 )
    {
      *(_DWORD *)(a4 + 1936) = 64;
      v79 = 1;
    }
    else
    {
      *(_DWORD *)(a4 + 1936) = v78;
      v79 = *((_DWORD *)v75 + 5);
    }
    *(_DWORD *)(a4 + 1940) = v79;
    *(_DWORD *)(a4 + 1944) = ADAPTER_DISPLAY::GetCurrentOrientation(*((_QWORD *)v70 + 337), (unsigned int)v5, 2LL);
    *(_DWORD *)(a4 + 1948) = *((_DWORD *)DisplayModeInfo + 6);
    DxgkpCopyMonitorLinkInfoToFlags(v70, (struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    v80 = SessionViewOwner;
    *(_QWORD *)(a4 + 1968) = *((_QWORD *)SessionViewOwner + 8);
    if ( *((_DWORD *)v80 + 10) != 1 )
      goto LABEL_140;
    v124 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v70, v116, 0LL, DxgkGetAdapterDeviceDesc, &v124);
    v120 = 0;
    v144 = 0LL;
    v145 = 0;
    v127 = 0;
    v128 = 0;
    v119 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    v142 = 0LL;
    v143 = 0LL;
    if ( DmmGetCurrentWireFormatAndColorSpace(v70, v5, v116, &v153, &v119) < 0 )
    {
      v81 = 0;
    }
    else if ( v119 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020
           || (v81 = 0, v119 == D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL) )
    {
      v81 = 1;
    }
    LOBYTE(v120) = v81;
    if ( MonitorHandle < 0
      || (AdvancedColorParams = MonitorGetAdvancedColorParams(v124, &v120, &v142, &v127),
          v83 = 0,
          AdvancedColorParams < 0) )
    {
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
    }
    else
    {
      *(_OWORD *)(a4 + 1984) = v142;
      *(_OWORD *)(a4 + 2000) = v143;
      v84 = *(_DWORD *)(a4 + 2052);
      *(_QWORD *)(a4 + 2016) = v144;
      *(_DWORD *)(a4 + 2024) = v145;
      *(_DWORD *)(a4 + 2052) = (BYTE1(v127) != 0 ? 0x1000 : 0) | ((_BYTE)v127 != 0 ? 0x200 : 0) | v84 & 0xFFFFEDFF;
    }
    v113 = v83;
    v118[0] = v83;
    v117 = v83;
    if ( (int)MonitorGetNativeFlags(v124, &v113, v118, &v117) < 0 )
      *(_DWORD *)(a4 + 2052) &= ~0x2000u;
    else
      *(_DWORD *)(a4 + 2052) = (v113 != 0 ? 0x2000 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFDFFF;
    if ( v124 && (int)MonitorReleaseMonitorHandle(v70, v124, DxgkGetAdapterDeviceDesc) < 0 )
    {
      v87 = WdLogNewEntry5_WdAssertion(v86, v85);
      *(_QWORD *)(v87 + 24) = 6658LL;
      WdLogEvent5_WdAssertion(v87);
    }
    v131.Value = 0;
    v132 = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
    if ( DmmGetCurrentWireFormatAndColorSpace(v70, v5, v116, &v131, &v132) < 0 )
    {
LABEL_140:
      SetDisplayInfoDefaultToSDR((struct _DISPLAYCONFIG_GET_DISPLAY_INFO *)a4);
      goto LABEL_141;
    }
    *(_DWORD *)(a4 + 1976) = GetColorDepthFromPickedWireFormat(v131);
    v89 = v132;
    *(_DWORD *)(a4 + 1980) = v132;
    *(_DWORD *)(a4 + 2040) = 0;
    switch ( v89 )
    {
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020:
        if ( (int)MonitorGetMonitorHandle(v70, v116, 0LL, DxgkGetAdapterDeviceDesc, &v124) >= 0 )
        {
          v133 = 0;
          if ( (int)MonitorIsMonitorAndLinkHDRCapable(v124) >= 0 && (v133 & 1) != 0 )
          {
            if ( *((int *)v70 + 649) < 2500 )
            {
              *(_DWORD *)(a4 + 2040) = (*((_DWORD *)v70 + 81) != 32902) + 1;
            }
            else
            {
              v90 = *((_DWORD *)v70 + 644);
              if ( (v90 & 4) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 2;
              }
              else if ( (v90 & 8) != 0 )
              {
                *(_DWORD *)(a4 + 2040) = 1;
              }
            }
          }
        }
        if ( !v124 || (int)MonitorReleaseMonitorHandle(v70, v124, DxgkGetAdapterDeviceDesc) >= 0 )
          goto LABEL_141;
        v93 = WdLogNewEntry5_WdAssertion(v92, v91);
        *(_QWORD *)(v93 + 24) = 6724LL;
        break;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG:
        *(_DWORD *)(a4 + 2040) = 3;
LABEL_141:
        *(_DWORD *)(a4 + 2052) &= ~0x400u;
        v99 = 3968LL * (unsigned int)v5;
        v100 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v70 + 337) + 112LL) + v99 + 3756);
        *(_QWORD *)(a4 + 2032) = v100;
        if ( !v100 )
          goto LABEL_145;
        _mm_lfence();
        v101 = *((_QWORD *)v70 + 337);
        v102 = *(unsigned int *)(*(_QWORD *)(v101 + 112) + v99 + 3756);
        if ( *(_DWORD *)(v101 + 80 * v102 + 768) == 1 )
        {
          *(_DWORD *)(a4 + 2036) = 1;
        }
        else
        {
          v103 = WdLogNewEntry5_WdAssertion(v102, 10 * v102);
          *(_QWORD *)(v103 + 24) = 6812LL;
          WdLogEvent5_WdAssertion(v103);
          *(_DWORD *)(a4 + 2032) = 0;
        }
        goto LABEL_144;
      case D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL:
        v94 = *((_DWORD *)v70 + 87);
        if ( (v94 & 0x200) == 0 && (v94 & 8) == 0 )
        {
          v95 = WdLogNewEntry5_WdAssertion(0LL, v88);
          *(_QWORD *)(v95 + 24) = 6734LL;
          WdLogEvent5_WdAssertion(v95);
        }
        v121 = 256;
        DisplayModeInfo = 0LL;
        v148 = 0LL;
        v149 = 0;
        v129 = 0;
        v130 = 0;
        v146 = 0LL;
        v147 = 0LL;
        if ( (int)MonitorGetMonitorHandle(v70, v116, 0LL, DxgkGetAdapterDeviceDesc, &DisplayModeInfo) >= 0
          && (int)MonitorGetAdvancedColorParams(DisplayModeInfo, &v121, &v146, &v129) >= 0 )
        {
          *(_OWORD *)(a4 + 1984) = v146;
          *(_OWORD *)(a4 + 2000) = v147;
          v96 = *(_DWORD *)(a4 + 2052);
          *(_QWORD *)(a4 + 2016) = v148;
          *(_DWORD *)(a4 + 2024) = v149;
          *(_DWORD *)(a4 + 2052) = (BYTE1(v129) != 0 ? 0x1000 : 0) | ((_BYTE)v129 != 0 ? 0x200 : 0) | v96 & 0xFFFFEDFF;
        }
        if ( !DisplayModeInfo || (int)MonitorReleaseMonitorHandle(v70, DisplayModeInfo, DxgkGetAdapterDeviceDesc) >= 0 )
          goto LABEL_141;
        v93 = WdLogNewEntry5_WdAssertion(v98, v97);
        *(_QWORD *)(v93 + 24) = 6776LL;
        break;
      default:
        goto LABEL_141;
    }
    WdLogEvent5_WdAssertion(v93);
    goto LABEL_141;
  }
LABEL_152:
  *(_WORD *)(a4 + 306) = 92;
  *(_WORD *)(a4 + 1118) = 92;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v158, v64);
  if ( v24 )
    DxgkReleaseSessionModeChangeLock();
  *(_DWORD *)(a4 + 2052) &= 0xFFFFFFE7;
  if ( *(_DWORD *)a4 == -11 )
  {
    v112 = 0;
    v114[0] = 0;
    v106 = DxgkpAdapterCheckStereoMode(a1, (unsigned int)v5, v114, &v112);
    v110 = v106;
    if ( v106 < 0 )
    {
      v111 = WdLogNewEntry5_WdWarning(v108, v107, v109);
      *(_QWORD *)(v111 + 24) = v110;
      WdLogEvent5_WdWarning(v111);
    }
    else
    {
      v17 = (v112 != 0 ? 8 : 0) | (v114[0] != 0 ? 0x10 : 0) | *(_DWORD *)(a4 + 2052) & 0xFFFFFFE7;
      *(_DWORD *)(a4 + 2052) = v17;
    }
  }
  v14 = v135;
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v139, v17);
  if ( v141 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v139);
  return (unsigned int)v15;
}
