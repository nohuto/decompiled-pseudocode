/*
 * XREFs of DxgkGetMonitorInternalInfo @ 0x1C011B670
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007300 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000985C (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027E80 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011F70C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddReference@DXGMONITOR@@QEAAXPEAX@Z @ 0x1C0129C3C (-_AddReference@DXGMONITOR@@QEAAXPEAX@Z.c)
 *     MonitorGetAdvancedColorParams @ 0x1C0129D98 (MonitorGetAdvancedColorParams.c)
 *     MonitorGetNativeFlags @ 0x1C0129F44 (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorOrientationsFromMonitor @ 0x1C012A00C (MonitorGetMonitorOrientationsFromMonitor.c)
 *     MonitorGetCCDMonitorID @ 0x1C012A0BC (MonitorGetCCDMonitorID.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C012BAB8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C012D920 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     MonitorReleaseMonitorHandle @ 0x1C012F96C (MonitorReleaseMonitorHandle.c)
 *     MonitorGetPseudoSpecializedState @ 0x1C013E10C (MonitorGetPseudoSpecializedState.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01454BC (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C01489D4 (MonitorGetPreferredMonitorSourceMode.c)
 *     MonitorGetDisplayIDFromMonitor @ 0x1C01669AC (MonitorGetDisplayIDFromMonitor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0167C2C (MonitorIsMonitorEdidless.c)
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
  _QWORD *v13; // rcx
  __int64 v14; // rax
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGADAPTER *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  struct DXGADAPTER *const v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rbx
  __int64 v36; // rax
  MONITOR_MGR *v37; // rbx
  __int64 v38; // rax
  int MonitorInstance; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  DXGMONITOR *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  int CCDMonitorID; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rbx
  _QWORD *v53; // rax
  int AdvancedColorParams; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r12
  int v58; // edx
  char v59; // al
  int IsMonitorAndLinkHDRCapable; // eax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  int DisplayIDFromMonitor; // eax
  unsigned int v64; // edx
  int v65; // eax
  char v66; // cl
  int v67; // eax
  _DWORD *v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned __int8 v74; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v75[7]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v76; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v77; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v78; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGMONITOR *v79; // [rsp+60h] [rbp-A0h] BYREF
  int v80; // [rsp+68h] [rbp-98h]
  int v81; // [rsp+70h] [rbp-90h] BYREF
  __int64 v82; // [rsp+78h] [rbp-88h]
  char v83; // [rsp+80h] [rbp-80h]
  __int128 v84; // [rsp+88h] [rbp-78h] BYREF
  __int128 v85; // [rsp+98h] [rbp-68h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+B0h] [rbp-50h]
  unsigned int *v88; // [rsp+B8h] [rbp-48h]
  __int64 v89; // [rsp+C0h] [rbp-40h]
  _DWORD v90[24]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v91[8]; // [rsp+130h] [rbp+30h] BYREF
  char v92[64]; // [rsp+138h] [rbp+38h] BYREF
  char v93[72]; // [rsp+178h] [rbp+78h] BYREF

  v81 = -1;
  v6 = (unsigned int)a1;
  v88 = a4;
  v7 = a2;
  v79 = a1;
  v89 = a5;
  v82 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v83 = 1;
    v81 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v83 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v81, 2186LL);
  v78 = 0LL;
  v77 = 0;
  MonitorHandle = 0LL;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v79, (unsigned int)v7, &v78, &v77);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v13[3] = SHIDWORD(v79);
    v14 = v6;
    v13[5] = v7;
    v13[6] = v12;
LABEL_11:
    v13[4] = v14;
    goto LABEL_12;
  }
  Global = DXGGLOBAL::GetGlobal(v11, v10);
  LowPart = v78.LowPart;
  v19 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v78, &v76);
  if ( v19 )
  {
    if ( !*((_QWORD *)v19 + 337) )
    {
      DXGADAPTER::ReleaseReference(v19);
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      LODWORD(v12) = -1073741811;
      v13[3] = v78.HighPart;
      v14 = LowPart;
      v13[5] = -1073741811LL;
      v13[6] = 1LL;
      goto LABEL_11;
    }
    v91[1] = 0;
    COREACCESS::COREACCESS((COREACCESS *)v92, v19);
    COREACCESS::COREACCESS((COREACCESS *)v93, v23);
    DXGADAPTER::ReleaseReference(v19);
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v91, 0LL);
    v12 = v24;
    if ( v24 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v29[3] = v78.HighPart;
      v29[4] = LowPart;
      v29[5] = v12;
      WdLogEvent5_WdWarning(v29);
LABEL_61:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v91, v30);
      goto LABEL_62;
    }
    v31 = WdLogNewEntry5_WdTrace(v26, v25, v27, v28);
    v34 = v77 == -1;
    v12 = v77;
    *(_QWORD *)(v31 + 24) = v77;
    *(_QWORD *)(v31 + 32) = v19;
    if ( v34 )
    {
      LODWORD(v12) = -1073741811;
    }
    else
    {
      v35 = *((_QWORD *)v19 + 337);
      if ( !v35 )
      {
        v36 = WdLogNewEntry5_WdAssertion(v33, v32);
        WdLogEvent5_WdAssertion(v36);
        v35 = *((_QWORD *)v19 + 337);
      }
      v37 = *(MONITOR_MGR **)(v35 + 96);
      if ( !v37 )
      {
        v38 = WdLogNewEntry5_WdError(v33, v32);
        *(_QWORD *)(v38 + 24) = v19;
        WdLogEvent5_WdError(v38);
        LODWORD(v12) = -1073741811;
LABEL_36:
        v62 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
        v62[3] = SHIDWORD(v79);
        v62[4] = v6;
        v62[5] = v7;
        v62[6] = (int)v12;
        v62[7] = 0LL;
        WdLogEvent5_WdError(v62);
        goto LABEL_61;
      }
      v78 = 0LL;
      MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v37, v77, 0, (struct DXGMONITOR **)&v78);
      LODWORD(v76) = MonitorInstance;
      if ( MonitorInstance == -1073741275 )
      {
        v42 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v42 + 24) = v12;
        *(_QWORD *)(v42 + 32) = v37;
        WdLogEvent5_WdDmmEvent(v42);
        LODWORD(v12) = -1073741275;
        goto LABEL_36;
      }
      if ( MonitorInstance >= 0 )
      {
        v44 = (DXGMONITOR *)v78;
        if ( !*(_QWORD *)&v78 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v41, v40);
          WdLogEvent5_WdAssertion(v45);
        }
        DXGMONITOR::_AddReference(v44, DxgkGetMonitorInternalInfo);
        MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v44, v46);
        if ( MonitorHandle )
        {
LABEL_28:
          if ( !a3 )
            goto LABEL_53;
          CCDMonitorID = MonitorGetCCDMonitorID(MonitorHandle, 260LL, a3 + 20);
          v51 = SHIDWORD(v79);
          v52 = v7;
          LODWORD(v76) = CCDMonitorID;
          if ( CCDMonitorID < 0 )
          {
            v53 = (_QWORD *)WdLogNewEntry5_WdError(v50, v49);
            v53[4] = v6;
            v53[6] = (int)v76;
            v53[3] = v51;
            v53[5] = v7;
            WdLogEvent5_WdError(v53);
          }
          LOWORD(v76) = 0;
          v86 = 0LL;
          v87 = 0;
          v78.LowPart = 0;
          LOWORD(v78.HighPart) = 0;
          v84 = 0LL;
          v85 = 0LL;
          AdvancedColorParams = MonitorGetAdvancedColorParams(MonitorHandle, &v76, &v84, &v78);
          v57 = AdvancedColorParams;
          if ( AdvancedColorParams < 0 )
            goto LABEL_33;
          v34 = LOBYTE(v78.LowPart) == 0;
          v58 = *(_DWORD *)(a3 + 588);
          *(_OWORD *)(a3 + 540) = v84;
          *(_OWORD *)(a3 + 556) = v85;
          *(_QWORD *)(a3 + 572) = v86;
          *(_DWORD *)(a3 + 580) = v87;
          LODWORD(v76) = 0;
          v59 = BYTE2(v78.LowPart);
          *(_DWORD *)(a3 + 588) = (LOBYTE(v78.HighPart) != 0 ? 2 : 0) | !v34 | v58 & 0xFFFFFFFC;
          *(_DWORD *)(a3 + 584) = (HIBYTE(v78.LowPart) != 0 ? 4 : 0) | (v59 != 0 ? 2 : 0) | *(_DWORD *)(a3 + 584) & 0xFFFFFFF9;
          IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(MonitorHandle);
          v57 = IsMonitorAndLinkHDRCapable;
          if ( IsMonitorAndLinkHDRCapable >= 0 )
          {
            *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (2 * v76)) & 4 ^ (*(_BYTE *)(a3 + 588) ^ (*(_BYTE *)(a3 + 588) ^ (unsigned __int8)(2 * v76)) & 4 ^ (unsigned __int8)(16 * v76)) & 0x40;
          }
          else
          {
LABEL_33:
            v61 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
            v61[3] = v51;
            v61[4] = v6;
            v61[5] = v52;
            v61[6] = v57;
            WdLogEvent5_WdError(v61);
          }
          Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
          if ( MonitorHandle && (v79 = 0LL, (int)MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v79) >= 0) )
            *(_DWORD *)(a3 + 936) = *((_DWORD *)v79 + 191);
          else
            *(_DWORD *)(a3 + 936) = 0;
          v74 = 0;
          LOBYTE(v76) = 0;
          v75[0] = 0;
          if ( (int)MonitorGetNativeFlags(MonitorHandle, &v74, &v76, v75) >= 0 )
            *(_DWORD *)(a3 + 588) = (v74 != 0 ? 8 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFF7;
          v74 = 1;
          if ( (int)MonitorIsMonitorEdidless(MonitorHandle, &v74) >= 0 )
            *(_DWORD *)(a3 + 588) = (v74 == 0 ? 0x10 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFEF;
          DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, 0LL, &v76, 0LL);
          v64 = v77;
          LOBYTE(v76) = 0;
          *(_DWORD *)(a3 + 588) = (DisplayIDFromMonitor != -1071841279 ? 0x20 : 0) | *(_DWORD *)(a3 + 588) & 0xFFFFFFDF;
          v79 = 0LL;
          v80 = 0;
          if ( (int)MonitorGetDpiInfoFromDescriptor(
                      v19,
                      v64,
                      (struct DISPLAY_PREFERRED_MODE_INFO *)&v79,
                      (unsigned int *)(a3 + 924),
                      (unsigned int *)(a3 + 928),
                      (__int64)&v76,
                      0) < 0 )
          {
            *(_DWORD *)(a3 + 924) = 0;
            *(_DWORD *)(a3 + 928) = 0;
            memset(v90, 0, sizeof(v90));
            if ( (int)MonitorGetPreferredMonitorSourceMode(MonitorHandle, v90) < 0 )
            {
              *(_QWORD *)(a3 + 916) = 0LL;
              goto LABEL_52;
            }
            *(_DWORD *)(a3 + 916) = v90[5];
            v65 = v90[6];
          }
          else
          {
            *(_DWORD *)(a3 + 916) = (_DWORD)v79;
            v65 = HIDWORD(v79);
          }
          *(_DWORD *)(a3 + 920) = v65;
LABEL_52:
          v75[0] = 0;
          v74 = 0;
          MonitorGetPseudoSpecializedState(MonitorHandle, &v74, v75);
          *(_DWORD *)(a3 + 588) ^= (*(_DWORD *)(a3 + 588) ^ (v74 << 7)) & 0x80 ^ (*(_WORD *)(a3 + 588) ^ (*(_WORD *)(a3 + 588) ^ (v74 << 7)) & 0x80 ^ (unsigned __int16)(v75[0] << 8)) & 0x100;
LABEL_53:
          v77 = 0;
          LODWORD(v76) = 0;
          MonitorGetMonitorOrientationsFromMonitor(MonitorHandle, &v77, &v76);
          v66 = v77;
          v67 = v76;
          if ( v88 )
          {
            v68 = (_DWORD *)v89;
            if ( v89 )
            {
              *v88 = v77;
              *v68 = v67;
            }
          }
          if ( a3 )
            *(_DWORD *)(a3 + 932) = (((_BYTE)v67 - v66) & 3) + 1;
          if ( (int)MonitorReleaseMonitorHandle(v19, MonitorHandle, DxgkGetMonitorInternalInfo) < 0 )
          {
            v70 = WdLogNewEntry5_WdAssertion(v69, v30);
            *(_QWORD *)(v70 + 24) = 7248LL;
            WdLogEvent5_WdAssertion(v70);
          }
          LODWORD(v12) = 0;
          goto LABEL_61;
        }
LABEL_27:
        v47 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v47 + 24) = 7080LL;
        WdLogEvent5_WdAssertion(v47);
        goto LABEL_28;
      }
      v43 = WdLogNewEntry5_WdError(v41, v40);
      *(_QWORD *)(v43 + 24) = v12;
      *(_QWORD *)(v43 + 32) = v37;
      WdLogEvent5_WdError(v43);
      LODWORD(v12) = v76;
    }
    if ( (int)v12 < 0 )
      goto LABEL_36;
    goto LABEL_27;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
  LODWORD(v12) = -1073741811;
  v13[3] = v78.HighPart;
  v13[4] = LowPart;
  v13[6] = 0LL;
  v13[5] = -1073741811LL;
LABEL_12:
  WdLogEvent5_WdError(v13);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v81, v22);
  if ( v83 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v71, &EventProfilerExit, v72, v81);
  return (unsigned int)v12;
}
