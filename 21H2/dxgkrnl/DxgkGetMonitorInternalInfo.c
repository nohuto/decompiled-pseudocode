/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C01659C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     MonitorGetDisplayHdrSupportLevel @ 0x1C01638C4 (MonitorGetDisplayHdrSupportLevel.c)
 *     MonitorIsMonitorEdidless @ 0x1C0163930 (MonitorIsMonitorEdidless.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01639A0 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0163A38 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C0163BCC (MonitorGetPseudoSpecializedState.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C0165F90 (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C01A6650 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C01A67CC (MonitorGetNativeFlags.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C01B0200 (MonitorGetCCDMonitorID.c)
 *     ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01D7B50 (-_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // r14d
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v13; // rax
  DXGADAPTER *v14; // rsi
  int v15; // eax
  __int64 v16; // r12
  int MonitorHandle; // eax
  DXGMONITOR *v18; // r12
  _DWORD *v19; // rdi
  _DWORD *v20; // rbx
  char v21; // cl
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  int CCDMonitorID; // eax
  int AdvancedColorParams; // eax
  bool v28; // zf
  int v29; // edx
  unsigned int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // ebx
  DXGMONITOR *v34; // rsi
  int LinkInfo; // eax
  int v36; // eax
  int DisplayIDFromMonitor; // eax
  __int64 v38; // rdx
  bool v39; // cf
  int v40; // eax
  int v41; // eax
  __int64 v42; // rsi
  __int64 HighPart; // rbx
  const wchar_t *v44; // r9
  __int64 v45; // r14
  __int64 v46; // r14
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rbx
  DXGMONITOR *v50; // rbx
  int v51; // eax
  int PreferredMonitorSourceMode; // edi
  char v53; // [rsp+50h] [rbp-B0h] BYREF
  bool v54[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v55; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v56; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  int v58; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v59; // [rsp+64h] [rbp-9Ch]
  DXGMONITOR *v60; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v61; // [rsp+70h] [rbp-90h] BYREF
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int64 v63; // [rsp+80h] [rbp-80h]
  _DWORD *v64; // [rsp+88h] [rbp-78h]
  unsigned __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  int v66; // [rsp+98h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h]
  char v68; // [rsp+A8h] [rbp-58h]
  _DXGK_MONITORLINKINFO v69; // [rsp+B0h] [rbp-50h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+120h] [rbp+20h] BYREF
  int v72; // [rsp+128h] [rbp+28h]
  _BYTE v73[144]; // [rsp+130h] [rbp+30h] BYREF

  v66 = -1;
  v6 = a2;
  LODWORD(v7) = a1;
  v64 = a4;
  v56 = a2;
  v8 = 1LL;
  v62 = a1;
  v63 = a5;
  v67 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v68 = 1;
    v66 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 2186);
  v61 = 0LL;
  v57 = 0;
  v60 = 0LL;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v62, v6, &v61, &v57);
  v10 = v9;
  if ( v9 < 0 )
  {
    v42 = v6;
    v7 = (unsigned int)v7;
    HighPart = SHIDWORD(v62);
    v8 = v9;
    WdLogSingleEntry4(2LL, SHIDWORD(v62), (unsigned int)v7, v42, v9);
    v44 = L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).";
LABEL_51:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v44, HighPart, v7, v42, v8, 0LL);
    goto LABEL_21;
  }
  Global = DXGGLOBAL_GetGlobal();
  LowPart = v61.LowPart;
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v61, &v65);
  v10 = 0;
  v65 = (unsigned __int64)v13;
  v14 = v13;
  if ( !v13 )
  {
    v7 = LowPart;
    HighPart = v61.HighPart;
    v10 = -1073741811;
    WdLogSingleEntry4(2LL, v61.HighPart, (unsigned int)v7, -1073741811LL, 0LL);
    v44 = L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorInternalInfo function, returning 0x%I64x.";
    v8 = 0LL;
LABEL_50:
    v42 = -1073741811LL;
    goto LABEL_51;
  }
  if ( !*((_QWORD *)v13 + 349) )
  {
    DXGADAPTER::ReleaseReference(v13);
    v7 = LowPart;
    v10 = -1073741811;
    HighPart = v61.HighPart;
    WdLogSingleEntry4(2LL, v61.HighPart, (unsigned int)v7, -1073741811LL, 1LL);
    v44 = L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x";
    goto LABEL_50;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, v13, 0LL);
  DXGADAPTER::ReleaseReference(v14);
  v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73, 0LL);
  LODWORD(v16) = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry3(3LL, v61.HighPart, LowPart, v15);
  }
  else
  {
    MonitorHandle = MonitorGetMonitorHandle(v14, v57, 0LL, DxgkGetMonitorInternalInfo, &v60);
    v16 = MonitorHandle;
    if ( MonitorHandle >= 0 )
    {
      v18 = v60;
      if ( !v60 )
      {
        WdLogSingleEntry1(1LL, 7527LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 7527LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( !a3 )
      {
        v19 = v64;
        if ( !v64 )
        {
          v20 = (_DWORD *)v63;
          if ( !v63 )
          {
LABEL_18:
            if ( (int)MonitorReleaseMonitorHandle(v14, v18, DxgkGetMonitorInternalInfo) < 0 )
            {
              WdLogSingleEntry1(1LL, 7692LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status2)", 7692LL, 0LL, 0LL, 0LL, 0LL);
            }
            goto LABEL_20;
          }
LABEL_13:
          v57 = 0;
          v56 = 0;
          MonitorGetMonitorOrientationsFromMonitor(v18, &v57, &v56);
          v21 = v57;
          v22 = v56;
          if ( v19 && v20 )
          {
            *v19 = v57;
            *v20 = v22;
          }
          if ( a3 )
            *(_DWORD *)(a3 + 932) = (((_BYTE)v22 - v21) & 3) + 1;
          goto LABEL_18;
        }
LABEL_12:
        v20 = (_DWORD *)v63;
        goto LABEL_13;
      }
      CCDMonitorID = MonitorGetCCDMonitorID(v18, 0x104u, (unsigned __int16 *)(a3 + 20));
      if ( CCDMonitorID < 0 )
      {
        v46 = SHIDWORD(v62);
        v47 = CCDMonitorID;
        WdLogSingleEntry4(2LL, SHIDWORD(v62), (unsigned int)v7, v56, CCDMonitorID);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to get monitor CCD name from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
          v46,
          (unsigned int)v7,
          v56,
          v47,
          0LL);
      }
      LOWORD(v55) = 0;
      v58 = 0;
      v59 = 0;
      memset(&v70, 0, 48);
      AdvancedColorParams = MonitorGetAdvancedColorParams(v18, &v55, &v70, &v58);
      if ( AdvancedColorParams >= 0 )
      {
        v28 = (_BYTE)v58 == 0;
        v29 = *(_DWORD *)(a3 + 588);
        *(_DWORD *)(a3 + 540) = v70.Id;
        *(_DWORD *)(a3 + 544) = *(&v70.Id + 1);
        *(_DWORD *)(a3 + 548) = v70.VideoSignalInfo.VideoStandard;
        *(D3DKMDT_2DREGION *)(a3 + 552) = v70.VideoSignalInfo.TotalSize;
        *(D3DKMDT_2DREGION *)(a3 + 560) = v70.VideoSignalInfo.ActiveSize;
        *(D3DDDI_RATIONAL *)(a3 + 568) = v70.VideoSignalInfo.VSyncFreq;
        *(D3DDDI_RATIONAL *)(a3 + 576) = v70.VideoSignalInfo.HSyncFreq;
        v30 = ((_BYTE)v59 != 0 ? 2 : 0) | !v28 | v29 & 0xFFFFFFFC;
        v31 = v30 ^ ((unsigned __int16)v30 ^ (unsigned __int16)(HIBYTE(v59) << 9)) & 0x200;
        v32 = *(_DWORD *)(a3 + 584);
        *(_DWORD *)(a3 + 588) = v31;
        *(_DWORD *)(a3 + 584) = (HIBYTE(v58) != 0 ? 4 : 0) | (BYTE2(v58) != 0 ? 2 : 0) | v32 & 0xFFFFFFF9;
        if ( v18 )
        {
          v33 = 0;
          v55 = 0;
          MONITOR_MGR::AcquireMonitorShared(&v60, (__int64)v18);
          v34 = v60;
          if ( v60 )
          {
            *(_QWORD *)&v69.UsageHints.0 = 0LL;
            v69.DitheringSupport.Value = 0;
            LinkInfo = DXGMONITOR::_GetLinkInfo(v60, &v69);
            v58 = LinkInfo;
            if ( LinkInfo == -1073741275 )
            {
              RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v60);
              goto LABEL_31;
            }
            if ( LinkInfo >= 0 )
            {
              DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
                *((DxgMonitor::MonitorColorState **)v34 + 28),
                &v69,
                (union MONITOR_AND_LINK_HDR_CAPS *)&v55);
              ExReleaseResourceLite((PERESOURCE)((char *)v34 + 24));
              KeLeaveCriticalRegion();
              v33 = v55;
LABEL_31:
              v36 = *(_DWORD *)(a3 + 588) ^ (*(_DWORD *)(a3 + 588) ^ (2 * v33)) & 4;
              *(_DWORD *)(a3 + 588) = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(16 * v33)) & 0x40;
LABEL_32:
              if ( (int)MonitorGetDisplayHdrSupportLevel((__int64)v18, (_DWORD *)(a3 + 936)) < 0 )
                *(_DWORD *)(a3 + 936) = 0;
              v53 = 0;
              v54[0] = 0;
              LOBYTE(v55) = 0;
              if ( (int)MonitorGetNativeFlags(v18, &v53, v54, &v55) >= 0 )
                *(_DWORD *)(a3 + 588) = (v53 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
              v53 = 1;
              if ( (int)MonitorIsMonitorEdidless((__int64)v18, (__int64)&v53) >= 0 )
                *(_DWORD *)(a3 + 588) = (v53 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
              v61.LowPart = 0;
              DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor((__int64)v18, 0, (unsigned int *)&v61, 0LL);
              v14 = (DXGADAPTER *)v65;
              v38 = v57;
              *(_DWORD *)(a3 + 924) = 0;
              v39 = DisplayIDFromMonitor != -1071841279;
              v53 = 0;
              v40 = *(_DWORD *)(a3 + 588);
              LOBYTE(v55) = 0;
              v71 = 0LL;
              v72 = 0;
              *(_DWORD *)(a3 + 588) = (v39 ? 0x20 : 0) | v40 & 0xFFFFFFDF;
              *(_DWORD *)(a3 + 928) = 0;
              if ( (int)MonitorGetDpiInfoFromDescriptor(
                          (__int64)v14,
                          v38,
                          (struct DISPLAY_PREFERRED_MODE_INFO *)&v71,
                          (unsigned int *)(a3 + 924),
                          (unsigned int *)(a3 + 928),
                          (bool *)&v53,
                          (bool *)&v55) >= 0
                && v53 )
              {
                v10 = 0;
                *(_QWORD *)(a3 + 916) = v71;
              }
              else
              {
                memset(&v70, 0, sizeof(v70));
                if ( v18 )
                {
                  MONITOR_MGR::AcquireMonitorShared(&v60, (__int64)v18);
                  v50 = v60;
                  v10 = 0;
                  if ( v60 )
                  {
                    PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                                   *((DxgMonitor::MonitorModes **)v60 + 29),
                                                   &v70);
                    ExReleaseResourceLite((PERESOURCE)((char *)v50 + 24));
                    KeLeaveCriticalRegion();
                    v51 = PreferredMonitorSourceMode;
                  }
                  else
                  {
                    WdLogSingleEntry1(2LL, -1073741275LL);
                    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v60);
                    v51 = -1073741275;
                  }
                }
                else
                {
                  v51 = -1073741811;
                  v10 = 0;
                }
                if ( v51 < 0 )
                  *(_QWORD *)(a3 + 916) = 0LL;
                else
                  *(D3DKMDT_2DREGION *)(a3 + 916) = v70.VideoSignalInfo.ActiveSize;
              }
              LOBYTE(v55) = 0;
              v53 = 0;
              v54[0] = 0;
              MonitorGetPseudoSpecializedState((__int64)v18, (bool *)&v53, v54, (bool *)&v55);
              if ( !v53 || (v41 = 128, !v54[0]) )
                v41 = 0;
              v19 = v64;
              *(_DWORD *)(a3 + 588) = (v41 | *(_DWORD *)(a3 + 588) & 0xFFFFFF7F) ^ ((unsigned __int16)(v41 | *(_WORD *)(a3 + 588) & 0xFF7F) ^ (unsigned __int16)((unsigned __int8)v55 << 8)) & 0x100;
              goto LABEL_12;
            }
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v60);
            AdvancedColorParams = v58;
          }
          else
          {
            WdLogSingleEntry1(2LL, -1073741275LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v60);
            AdvancedColorParams = -1073741275;
          }
        }
        else
        {
          AdvancedColorParams = -1073741811;
        }
      }
      v48 = SHIDWORD(v62);
      v49 = AdvancedColorParams;
      WdLogSingleEntry4(2LL, SHIDWORD(v62), (unsigned int)v7, v56, AdvancedColorParams);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
        v48,
        (unsigned int)v7,
        v56,
        v49,
        0LL);
      goto LABEL_32;
    }
    v45 = SHIDWORD(v62);
    WdLogSingleEntry5(2LL, SHIDWORD(v62), (unsigned int)v7, v56, MonitorHandle, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v45,
      (unsigned int)v7,
      v56,
      v16,
      0LL);
  }
  v10 = v16;
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66);
  if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v66);
  return v10;
}
