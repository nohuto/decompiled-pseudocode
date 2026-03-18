/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C0118150
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C00095AC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C012540C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C0125568 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C0125714 (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C01257DC (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C012588C (MonitorGetCCDMonitorID.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C0127268 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01290D0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012B11C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C0139900 (MonitorGetPseudoSpecializedState.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0140A9C (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C0143FB4 (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C016084C (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0161ACC (MonitorIsMonitorEdidless.c)
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
  MONITOR_MGR *v29; // rbx
  int MonitorInstance; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGMONITOR *v33; // rbx
  __int64 v34; // rdx
  char v35; // cl
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int CCDMonitorID; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rbx
  int AdvancedColorParams; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r12
  int v53; // edx
  char v54; // al
  int IsMonitorAndLinkHDRCapable; // eax
  int DisplayIDFromMonitor; // eax
  unsigned int v57; // edx
  int v58; // eax
  _QWORD *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rax
  int v74; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v75; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v76[7]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v77; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v78; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v79; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v80; // [rsp+60h] [rbp-A0h] BYREF
  int v81; // [rsp+68h] [rbp-98h]
  int v82; // [rsp+70h] [rbp-90h] BYREF
  __int64 v83; // [rsp+78h] [rbp-88h]
  char v84; // [rsp+80h] [rbp-80h]
  __int128 v85; // [rsp+88h] [rbp-78h] BYREF
  __int128 v86; // [rsp+98h] [rbp-68h]
  __int64 v87; // [rsp+A8h] [rbp-58h]
  int v88; // [rsp+B0h] [rbp-50h]
  unsigned int *v89; // [rsp+B8h] [rbp-48h]
  __int64 v90; // [rsp+C0h] [rbp-40h]
  _DWORD v91[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v92[8]; // [rsp+130h] [rbp+30h] BYREF
  char v93[64]; // [rsp+138h] [rbp+38h] BYREF
  char v94[72]; // [rsp+178h] [rbp+78h] BYREF

  v82 = -1;
  v6 = (unsigned int)a1;
  v89 = a4;
  v7 = a2;
  v80 = a1;
  v90 = a5;
  v83 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v84 = 1;
    v82 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v84 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v82, 2186LL);
  v79 = 0LL;
  v78 = 0;
  MonitorHandle = 0LL;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v80, (unsigned int)v7, &v79, &v78);
  v12 = v9;
  if ( v9 < 0 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v59[3] = SHIDWORD(v80);
    v60 = v6;
    v59[5] = v7;
    v59[6] = v12;
LABEL_51:
    v59[4] = v60;
    goto LABEL_52;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  LowPart = v79.LowPart;
  v17 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v79, &v77);
  if ( !v17 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    LODWORD(v12) = -1073741811;
    v59[3] = v79.HighPart;
    v59[4] = LowPart;
    v59[6] = 0LL;
    v59[5] = -1073741811LL;
LABEL_52:
    WdLogEvent5_WdError(v59);
    goto LABEL_26;
  }
  if ( !*((_QWORD *)v17 + 337) )
  {
    DXGADAPTER::ReleaseReference(v17);
    v59 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
    LODWORD(v12) = -1073741811;
    v59[3] = v79.HighPart;
    v60 = LowPart;
    v59[5] = -1073741811LL;
    v59[6] = 1LL;
    goto LABEL_51;
  }
  v92[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v93, v17);
  COREACCESS::COREACCESS((COREACCESS *)v94, v18);
  DXGADAPTER::ReleaseReference(v17);
  v19 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92, 0LL);
  v12 = v19;
  if ( v19 >= 0 )
  {
    v24 = WdLogNewEntry5_WdTrace(v21, v20, v22, v23);
    v27 = v78 == -1;
    v12 = v78;
    *(_QWORD *)(v24 + 24) = v78;
    *(_QWORD *)(v24 + 32) = v17;
    if ( !v27 )
    {
      v28 = *((_QWORD *)v17 + 337);
      if ( !v28 )
      {
        v64 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v64);
        v28 = *((_QWORD *)v17 + 337);
      }
      v29 = *(MONITOR_MGR **)(v28 + 96);
      if ( v29 )
      {
        v79 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, v78, 0, (struct DXGMONITOR **)&v79);
        LODWORD(v77) = MonitorInstance;
        if ( MonitorInstance != -1073741275 )
        {
          if ( MonitorInstance >= 0 )
          {
            v33 = (DXGMONITOR *)v79;
            if ( !*(_QWORD *)&v79 )
            {
              v68 = WdLogNewEntry5_WdAssertion(v32, v31);
              WdLogEvent5_WdAssertion(v68);
            }
            DXGMONITOR::_AddReference(v33, DxgkGetMonitorInternalInfo);
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v33, v34);
            if ( MonitorHandle )
            {
LABEL_16:
              if ( !a3 )
                goto LABEL_17;
              CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 260LL, a3 + 20);
              v47 = SHIDWORD(v80);
              v48 = v7;
              LODWORD(v77) = CCDMonitorID;
              if ( CCDMonitorID < 0 )
              {
                v71 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
                v71[4] = v6;
                v71[6] = (int)v77;
                v71[3] = v47;
                v71[5] = v7;
                WdLogEvent5_WdError(v71);
              }
              LOWORD(v77) = 0;
              v87 = 0LL;
              v88 = 0;
              v79.LowPart = 0;
              LOWORD(v79.HighPart) = 0;
              v85 = 0LL;
              v86 = 0LL;
              AdvancedColorParams = MonitorGetAdvancedColorParams(MonitorHandle, &v77, &v85, &v79);
              v52 = AdvancedColorParams;
              if ( AdvancedColorParams < 0 )
                goto LABEL_61;
              v27 = LOBYTE(v79.LowPart) == 0;
              v53 = *(_DWORD *)(a3 + 588);
              *(_OWORD *)(a3 + 540) = v85;
              *(_OWORD *)(a3 + 556) = v86;
              *(_QWORD *)(a3 + 572) = v87;
              *(_DWORD *)(a3 + 580) = v88;
              LODWORD(v77) = 0;
              v54 = BYTE2(v79.LowPart);
              *(_DWORD *)(a3 + 588) = (LOBYTE(v79.HighPart) != 0 ? 2 : 0) | !v27 | v53 & 0xFFFFFFFC;
              *(_DWORD *)(a3 + 584) = (HIBYTE(v79.LowPart) != 0 ? 4 : 0) | (v54 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
              IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(MonitorHandle);
              v52 = IsMonitorAndLinkHDRCapable;
              if ( IsMonitorAndLinkHDRCapable < 0 )
              {
LABEL_61:
                v72 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
                v72[3] = v47;
                v72[4] = v6;
                v72[5] = v48;
                v72[6] = v52;
                WdLogEvent5_WdError(v72);
              }
              else
              {
                *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (2 * v77)) & 4 ^ (*(_BYTE *)(a3 + 588) ^ (*(_BYTE *)(a3 + 588) ^ (unsigned __int8)(2 * v77)) & 4 ^ (unsigned __int8)(16 * v77)) & 0x40;
              }
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_OemPanelDriverSupport__private_reporting,
                0x801B31u,
                0LL,
                0LL,
                (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
                1,
                v74);
              if ( MonitorHandle && (v80 = 0LL, (int)MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v80) >= 0) )
                *(_DWORD *)(a3 + 936) = *((_DWORD *)v80 + 191);
              else
                *(_DWORD *)(a3 + 936) = 0;
              v75 = 0;
              LOBYTE(v77) = 0;
              v76[0] = 0;
              if ( (int)MonitorGetNativeFlags(MonitorHandle, &v75, &v77, v76) >= 0 )
                *(_DWORD *)(a3 + 588) = (v75 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
              v75 = 1;
              if ( (int)MonitorIsMonitorEdidless(MonitorHandle, &v75) >= 0 )
                *(_DWORD *)(a3 + 588) = (v75 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
              DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, 0LL, &v77, 0LL);
              v57 = v78;
              LOBYTE(v77) = 0;
              *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
              v80 = 0LL;
              v81 = 0;
              if ( (int)MonitorGetDpiInfoFromDescriptor(
                          v17,
                          v57,
                          (struct DISPLAY_PREFERRED_MODE_INFO *)&v80,
                          (unsigned int *)(a3 + 924),
                          (unsigned int *)(a3 + 928),
                          (__int64)&v77,
                          0) < 0 )
              {
                *(_DWORD *)(a3 + 924) = 0;
                *(_DWORD *)(a3 + 928) = 0;
                memset(v91, 0, sizeof(v91));
                if ( (int)MonitorGetPreferredMonitorSourceMode(MonitorHandle, v91) < 0 )
                {
                  *(_QWORD *)(a3 + 916) = 0LL;
                  goto LABEL_43;
                }
                *(_DWORD *)(a3 + 916) = v91[5];
                v58 = v91[6];
              }
              else
              {
                *(_DWORD *)(a3 + 916) = (_DWORD)v80;
                v58 = HIDWORD(v80);
              }
              *(_DWORD *)(a3 + 920) = v58;
LABEL_43:
              v76[0] = 0;
              v75 = 0;
              MonitorGetPseudoSpecializedState(MonitorHandle, &v75, v76);
              *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (v75 << 7)) & 0x80 ^ (*(_WORD *)(a3 + 588) ^ (*(_WORD *)(a3 + 588) ^ (v75 << 7)) & 0x80 ^ (unsigned __int16)(v76[0] << 8)) & 0x100;
LABEL_17:
              v78 = 0;
              LODWORD(v77) = 0;
              MonitorGetMonitorOrientationsFromMonitor(MonitorHandle, &v78, &v77);
              v35 = v78;
              v36 = v77;
              if ( v89 )
              {
                v37 = (_DWORD *)v90;
                if ( v90 )
                {
                  *v89 = v78;
                  *v37 = v36;
                }
              }
              if ( a3 )
                *(_DWORD *)(a3 + 932) = (((_BYTE)v36 - v35) & 3) + 1;
              if ( (int)MonitorReleaseMonitorHandle(v17, MonitorHandle, DxgkGetMonitorInternalInfo) < 0 )
              {
                v73 = WdLogNewEntry5_WdAssertion(v39, v38);
                *(_QWORD *)(v73 + 24) = 7233LL;
                WdLogEvent5_WdAssertion(v73);
              }
              LODWORD(v12) = 0;
              goto LABEL_25;
            }
LABEL_60:
            v70 = WdLogNewEntry5_WdAssertion(v26, v25);
            *(_QWORD *)(v70 + 24) = 7065LL;
            WdLogEvent5_WdAssertion(v70);
            goto LABEL_16;
          }
          v67 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v67 + 24) = v12;
          *(_QWORD *)(v67 + 32) = v29;
          WdLogEvent5_WdError(v67);
          LODWORD(v12) = v77;
          goto LABEL_58;
        }
        v66 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v66 + 24) = v12;
        *(_QWORD *)(v66 + 32) = v29;
        WdLogEvent5_WdDmmEvent(v66);
        LODWORD(v12) = -1073741275;
      }
      else
      {
        v65 = WdLogNewEntry5_WdError(v26, v25);
        *(_QWORD *)(v65 + 24) = v17;
        WdLogEvent5_WdError(v65);
        LODWORD(v12) = -1073741811;
      }
LABEL_59:
      v69 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v69[3] = SHIDWORD(v80);
      v69[4] = v6;
      v69[5] = v7;
      v69[6] = (int)v12;
      v69[7] = 0LL;
      WdLogEvent5_WdError(v69);
      goto LABEL_25;
    }
    LODWORD(v12) = -1073741811;
LABEL_58:
    if ( (int)v12 >= 0 )
      goto LABEL_60;
    goto LABEL_59;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
  v63[3] = v79.HighPart;
  v63[4] = LowPart;
  v63[5] = v12;
  WdLogEvent5_WdWarning(v63);
LABEL_25:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92, v38);
LABEL_26:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v82, v40);
  if ( v84 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v82);
  return (unsigned int)v12;
}
