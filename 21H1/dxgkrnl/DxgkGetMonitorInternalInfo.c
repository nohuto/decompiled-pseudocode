/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C01223A0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0009E0C (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009FB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C00E0840 (MonitorGetPseudoSpecializedState.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00E7C30 (MonitorReleaseMonitorHandle.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00EDE64 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C00EFF1C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C00F0078 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C00F0224 (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C00F02EC (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C00F039C (MonitorGetCCDMonitorID.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0116E44 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C0117180 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01372D0 (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C013BB98 (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C0150F14 (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C015318C (MonitorIsMonitorEdidless.c)
 */

__int64 __fastcall DxgkGetMonitorInternalInfo(
        struct DXGMONITOR *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v6; // edi
  __int64 v7; // r12
  struct HDXGMONITOR__ *MonitorHandle; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // r13
  struct DXGADAPTER *const v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rbx
  struct _FAST_MUTEX *v29; // rbx
  int MonitorInstance; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGMONITOR *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r9
  char v36; // cl
  int v37; // eax
  _DWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int CCDMonitorID; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rbx
  int AdvancedColorParams; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r12
  int v54; // edx
  char v55; // al
  int IsMonitorAndLinkHDRCapable; // eax
  int DisplayIDFromMonitor; // eax
  unsigned int v58; // edx
  int v59; // eax
  _QWORD *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  int v75; // [rsp+30h] [rbp-D0h]
  char v76; // [rsp+40h] [rbp-C0h] BYREF
  bool v77[7]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v78; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v79; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v80; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v81; // [rsp+60h] [rbp-A0h] BYREF
  int v82; // [rsp+68h] [rbp-98h]
  int v83; // [rsp+70h] [rbp-90h] BYREF
  __int64 v84; // [rsp+78h] [rbp-88h]
  char v85; // [rsp+80h] [rbp-80h]
  __int128 v86; // [rsp+88h] [rbp-78h] BYREF
  __int128 v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A8h] [rbp-58h]
  int v89; // [rsp+B0h] [rbp-50h]
  unsigned int *v90; // [rsp+B8h] [rbp-48h]
  __int64 v91; // [rsp+C0h] [rbp-40h]
  _DWORD v92[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v93[8]; // [rsp+130h] [rbp+30h] BYREF
  char v94[64]; // [rsp+138h] [rbp+38h] BYREF
  char v95[72]; // [rsp+178h] [rbp+78h] BYREF

  v83 = -1;
  v6 = (unsigned int)a1;
  v90 = a4;
  v7 = a2;
  v81 = a1;
  v91 = a5;
  v84 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v85 = 1;
    v83 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v85 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v83, 2186LL);
  v80 = 0LL;
  v79 = 0;
  MonitorHandle = 0LL;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v81, (unsigned int)v7, &v80, &v79);
  v12 = v9;
  if ( v9 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v60[3] = SHIDWORD(v81);
    v61 = v6;
    v60[5] = v7;
    v60[6] = v12;
LABEL_51:
    v60[4] = v61;
    goto LABEL_52;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  LowPart = v80.LowPart;
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v80, &v78);
  if ( !v17 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    LODWORD(v12) = -1073741811;
    v60[3] = v80.HighPart;
    v60[4] = LowPart;
    v60[6] = 0LL;
    v60[5] = -1073741811LL;
LABEL_52:
    WdLogEvent5_WdError(v60);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v17 + 334) )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v17);
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v63, v62);
    LODWORD(v12) = -1073741811;
    v60[3] = v80.HighPart;
    v61 = LowPart;
    v60[5] = -1073741811LL;
    v60[6] = 1LL;
    goto LABEL_51;
  }
  v93[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v94, v17);
  COREACCESS::COREACCESS((COREACCESS *)v95, v18);
  DXGADAPTER::ReleaseReferenceNoTracking(v17);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v93, 0LL);
  v12 = v19;
  if ( v19 >= 0 )
  {
    v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    v27 = v79 == -1;
    v12 = v79;
    *(_QWORD *)(v24 + 24) = v79;
    *(_QWORD *)(v24 + 32) = v17;
    if ( !v27 )
    {
      v28 = *((_QWORD *)v17 + 334);
      if ( !v28 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v65);
        v28 = *((_QWORD *)v17 + 334);
      }
      v29 = *(struct _FAST_MUTEX **)(v28 + 96);
      if ( v29 )
      {
        v80 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, v79, 0, (struct DXGMONITOR **)&v80);
        LODWORD(v78) = MonitorInstance;
        if ( MonitorInstance != -1073741275 )
        {
          if ( MonitorInstance >= 0 )
          {
            v33 = (DXGMONITOR *)v80;
            if ( !*(_QWORD *)&v80 )
            {
              v69 = WdLogNewEntry5_WdAssertion(v32, v31);
              WdLogEvent5_WdAssertion(v69);
            }
            DXGMONITOR::_AddReference(v33, DxgkGetMonitorInternalInfo);
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v33, v34);
            if ( MonitorHandle )
            {
LABEL_16:
              if ( !a3 )
                goto LABEL_17;
              CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 0x104u, (unsigned __int16 *)(a3 + 20));
              v48 = SHIDWORD(v81);
              v49 = v7;
              LODWORD(v78) = CCDMonitorID;
              if ( CCDMonitorID < 0 )
              {
                v72 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
                v72[4] = v6;
                v72[6] = (int)v78;
                v72[3] = v48;
                v72[5] = v7;
                WdLogEvent5_WdError(v72);
              }
              LOWORD(v78) = 0;
              v88 = 0LL;
              v89 = 0;
              v80.LowPart = 0;
              LOWORD(v80.HighPart) = 0;
              v86 = 0LL;
              v87 = 0LL;
              AdvancedColorParams = MonitorGetAdvancedColorParams(MonitorHandle, &v78, (__int64)&v86, (__int64)&v80);
              v53 = AdvancedColorParams;
              if ( AdvancedColorParams < 0 )
                goto LABEL_61;
              v27 = LOBYTE(v80.LowPart) == 0;
              v54 = *(_DWORD *)(a3 + 588);
              *(_OWORD *)(a3 + 540) = v86;
              *(_OWORD *)(a3 + 556) = v87;
              *(_QWORD *)(a3 + 572) = v88;
              *(_DWORD *)(a3 + 580) = v89;
              LODWORD(v78) = 0;
              v55 = BYTE2(v80.LowPart);
              *(_DWORD *)(a3 + 588) = (LOBYTE(v80.HighPart) != 0 ? 2 : 0) | !v27 | v54 & 0xFFFFFFFC;
              *(_DWORD *)(a3 + 584) = (HIBYTE(v80.LowPart) != 0 ? 4 : 0) | (v55 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
              IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(MonitorHandle, (unsigned int *)&v78);
              v53 = IsMonitorAndLinkHDRCapable;
              if ( IsMonitorAndLinkHDRCapable < 0 )
              {
LABEL_61:
                v73 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
                v73[3] = v48;
                v73[4] = v6;
                v73[5] = v49;
                v73[6] = v53;
                WdLogEvent5_WdError(v73);
              }
              else
              {
                *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (2 * v78)) & 4 ^ (*(_BYTE *)(a3 + 588) ^ (*(_BYTE *)(a3 + 588) ^ (unsigned __int8)(2 * v78)) & 4 ^ (unsigned __int8)(16 * v78)) & 0x40;
              }
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_OemPanelDriverSupport__private_reporting,
                0x801B31u,
                0LL,
                0LL,
                (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
                1,
                v75);
              if ( MonitorHandle && (v81 = 0LL, (int)MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v81) >= 0) )
                *(_DWORD *)(a3 + 936) = *((_DWORD *)v81 + 191);
              else
                *(_DWORD *)(a3 + 936) = 0;
              v76 = 0;
              LOBYTE(v78) = 0;
              v77[0] = 0;
              if ( (int)MonitorGetNativeFlags(MonitorHandle, (unsigned __int8 *)&v76, (bool *)&v78, v77) >= 0 )
                *(_DWORD *)(a3 + 588) = (v76 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
              v76 = 1;
              if ( (int)MonitorIsMonitorEdidless(MonitorHandle, &v76) >= 0 )
                *(_DWORD *)(a3 + 588) = (v76 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
              DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, 0LL, &v78, 0LL);
              v58 = v79;
              LOBYTE(v78) = 0;
              *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
              v81 = 0LL;
              v82 = 0;
              if ( (int)MonitorGetDpiInfoFromDescriptor(
                          v17,
                          v58,
                          (struct DISPLAY_PREFERRED_MODE_INFO *)&v81,
                          (unsigned int *)(a3 + 924),
                          (unsigned int *)(a3 + 928),
                          (__int64)&v78,
                          0) < 0 )
              {
                *(_DWORD *)(a3 + 924) = 0;
                *(_DWORD *)(a3 + 928) = 0;
                memset(v92, 0, sizeof(v92));
                if ( (int)MonitorGetPreferredMonitorSourceMode(MonitorHandle, v92) < 0 )
                {
                  *(_QWORD *)(a3 + 916) = 0LL;
                  goto LABEL_43;
                }
                *(_DWORD *)(a3 + 916) = v92[5];
                v59 = v92[6];
              }
              else
              {
                *(_DWORD *)(a3 + 916) = (_DWORD)v81;
                v59 = HIDWORD(v81);
              }
              *(_DWORD *)(a3 + 920) = v59;
LABEL_43:
              v77[0] = 0;
              v76 = 0;
              MonitorGetPseudoSpecializedState(MonitorHandle, (bool *)&v76, v77);
              *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ ((unsigned __int8)v76 << 7)) & 0x80 ^ (*(_WORD *)(a3 + 588) ^ (*(_WORD *)(a3 + 588) ^ ((unsigned __int8)v76 << 7)) & 0x80 ^ (v77[0] << 8)) & 0x100;
LABEL_17:
              v79 = 0;
              LODWORD(v78) = 0;
              MonitorGetMonitorOrientationsFromMonitor(MonitorHandle, &v79, (unsigned int *)&v78);
              v36 = v79;
              v37 = v78;
              if ( v90 )
              {
                v38 = (_DWORD *)v91;
                if ( v91 )
                {
                  *v90 = v79;
                  *v38 = v37;
                }
              }
              if ( a3 )
                *(_DWORD *)(a3 + 932) = (((_BYTE)v37 - v36) & 3) + 1;
              if ( (int)MonitorReleaseMonitorHandle(
                          (__int64)v17,
                          (__int64)MonitorHandle,
                          DxgkGetMonitorInternalInfo,
                          v35) < 0 )
              {
                v74 = WdLogNewEntry5_WdAssertion(v40, v39);
                *(_QWORD *)(v74 + 24) = 7157LL;
                WdLogEvent5_WdAssertion(v74);
              }
              LODWORD(v12) = 0;
              goto LABEL_25;
            }
LABEL_60:
            v71 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v71 + 24) = 6989LL;
            WdLogEvent5_WdAssertion(v71);
            goto LABEL_16;
          }
          v68 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v68 + 24) = v12;
          *(_QWORD *)(v68 + 32) = v29;
          WdLogEvent5_WdError(v68);
          LODWORD(v12) = v78;
          goto LABEL_58;
        }
        v67 = WdLogNewEntry5_WdDmmEvent(v32);
        *(_QWORD *)(v67 + 24) = v12;
        *(_QWORD *)(v67 + 32) = v29;
        WdLogEvent5_WdDmmEvent(v67);
        LODWORD(v12) = -1073741275;
      }
      else
      {
        v66 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v66 + 24) = v17;
        WdLogEvent5_WdError(v66);
        LODWORD(v12) = -1073741811;
      }
LABEL_59:
      v70 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v70[3] = SHIDWORD(v81);
      v70[4] = v6;
      v70[5] = v7;
      v70[6] = (int)v12;
      v70[7] = 0LL;
      WdLogEvent5_WdError(v70);
      goto LABEL_25;
    }
    LODWORD(v12) = -1073741811;
LABEL_58:
    if ( (int)v12 >= 0 )
      goto LABEL_60;
    goto LABEL_59;
  }
  v64 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
  v64[3] = v80.HighPart;
  v64[4] = LowPart;
  v64[5] = v12;
  WdLogEvent5_WdWarning(v64);
LABEL_25:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v93, v39);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v83, v41);
  if ( v85 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v83);
  return (unsigned int)v12;
}
