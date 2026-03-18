/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C01BD268 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C03ABC44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011E80 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C0013758 (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0013B54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C001D1D0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001EC4C (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C004F054 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x1C006AF24 (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006AF4C (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C006B008 (-GetDisplayOnlyDriverUseSmallestMode@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@@Z @ 0x1C01631B4 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     MonitorReleaseMonitorHandle @ 0x1C01A05B4 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C01A0DA4 (MonitorGetMonitorHandle.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01A48E4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1C01A5490 (-_IsVirtualModeSupportDisabled@DXGMONITOR@@QEBA_NXZ.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01A68E8 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1C01A69AC (-_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C01B205C (BmlIsSecondaryHardwareClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C01B2338 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C01B2AD0 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C01B55A0 (BmlGetNextBestTargetMode.c)
 *     BmlFillPreferredMonitorMode @ 0x1C01D0BD0 (BmlFillPreferredMonitorMode.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01D3BBC (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C01E06B4 (MonitorIsAdvancedColorEnabled.c)
 *     MonitorIsBoostRefreshRateEnabledByDefault @ 0x1C01E316C (MonitorIsBoostRefreshRateEnabledByDefault.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1C01E7CF0 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C039D530 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int16 v10; // r13
  __int64 v11; // rax
  VIDPN_MGR *v12; // rbx
  ADAPTER_DISPLAY *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 v17; // rdx
  unsigned int PreferredHdrPixelFormat; // eax
  unsigned int v19; // r10d
  _DWORD *v20; // rcx
  unsigned int v21; // r12d
  __int64 v22; // r14
  _DWORD *v23; // rbx
  __int64 v24; // rdi
  __int16 v25; // ax
  bool v26; // zf
  unsigned int v27; // r13d
  __int64 v28; // rcx
  _BYTE *v29; // rsi
  unsigned int v30; // ebx
  struct DMMVIDPNTOPOLOGY *v31; // rdi
  unsigned int v32; // eax
  unsigned int v33; // r14d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v34; // edx
  __int64 v35; // rbx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  unsigned int v40; // r13d
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  _DWORD *v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v57; // eax
  VIDPN_MGR *v58; // rbx
  __int64 v59; // rdx
  _DWORD *v60; // rcx
  __int64 v61; // rbx
  int v62; // eax
  unsigned int v63; // r10d
  __int64 v64; // rdi
  __int64 v65; // r10
  char v66; // bl
  int v67; // eax
  __int64 v68; // r13
  __int64 v69; // rdx
  char v70; // al
  __int64 v71; // rdx
  char v72; // r12
  __int64 v73; // rax
  int v74; // edi
  __int64 v75; // r8
  __int64 v76; // r9
  DXGMONITOR *v77; // r13
  DXGMONITOR *v78; // rbx
  int LinkInfo; // eax
  int v80; // r12d
  __int64 v81; // rbx
  int IsAdvancedColorEnabled; // eax
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v84; // rdx
  char v85; // dl
  unsigned int v86; // r14d
  __int64 v87; // rbx
  char v88; // al
  unsigned __int8 *v89; // rdx
  unsigned int v90; // edi
  unsigned int v91; // r12d
  unsigned int v92; // r8d
  char v93; // r14
  __int64 v94; // r9
  ADAPTER_DISPLAY *v95; // rbx
  unsigned int v96; // r13d
  unsigned int v97; // eax
  unsigned int v98; // r14d
  __int64 v99; // rdi
  __int64 v100; // rbx
  struct DMMVIDPNPRESENTPATH *v101; // r13
  __int64 v102; // r12
  __int64 v103; // rcx
  struct DMMVIDPNSOURCEMODESET *v104; // r12
  __int64 v105; // rax
  __int64 v106; // rbx
  __int64 v107; // rcx
  int v108; // eax
  __int64 v109; // r13
  __int64 v110; // rax
  struct DMMVIDPNTARGETMODESET *v111; // r13
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r12
  int v115; // eax
  __int64 v116; // rcx
  __int16 v117; // ax
  __int64 v119; // rdi
  __int64 v120; // rcx
  __int64 v121; // rax
  struct SESSION_VIEW *SessionViewOwner; // rax
  _QWORD *v123; // rax
  __int64 v124; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // rax
  _DWORD *v127; // rcx
  const struct DMMVIDPNPRESENTPATH *v128; // r13
  unsigned int v129; // r8d
  __int64 v130; // r12
  DXGMONITOR *v131; // rbx
  char IsVirtualModeSupportDisabled; // di
  bool v133; // al
  int v134; // edi
  __int64 *v135; // rbx
  __int64 v136; // rdx
  int v137; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v138; // ecx
  char IsSecondaryHardwareClonePath; // al
  __int64 v140; // rcx
  __int64 v141; // r12
  unsigned int v142; // edx
  unsigned int v143; // r8d
  bool v144; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v145; // edx
  _QWORD *v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // r8
  unsigned int i; // r9d
  __int64 v153; // r10
  unsigned int v154; // eax
  __int64 v155; // r11
  __int64 v156; // r10
  unsigned int v157; // eax
  __int64 v158; // r11
  __int64 v159; // r10
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v160[2]; // [rsp+20h] [rbp-D1h]
  char v161; // [rsp+50h] [rbp-A1h] BYREF
  char v162[3]; // [rsp+51h] [rbp-A0h] BYREF
  unsigned int v163; // [rsp+54h] [rbp-9Dh]
  __int64 v164; // [rsp+58h] [rbp-99h]
  unsigned int v165; // [rsp+60h] [rbp-91h]
  unsigned int v166; // [rsp+64h] [rbp-8Dh]
  ADAPTER_DISPLAY *v167; // [rsp+68h] [rbp-89h]
  VIDPN_MGR *v168; // [rsp+70h] [rbp-81h]
  __int64 v169; // [rsp+78h] [rbp-79h]
  int v170; // [rsp+80h] [rbp-71h] BYREF
  DMMVIDPNTOPOLOGY *v171; // [rsp+88h] [rbp-69h]
  unsigned int v172; // [rsp+90h] [rbp-61h] BYREF
  unsigned int v173; // [rsp+94h] [rbp-5Dh] BYREF
  unsigned int v174; // [rsp+98h] [rbp-59h] BYREF
  int v175; // [rsp+9Ch] [rbp-55h] BYREF
  DXGMONITOR *v176; // [rsp+A0h] [rbp-51h] BYREF
  DXGMONITOR *v177; // [rsp+A8h] [rbp-49h] BYREF
  DXGMONITOR *v178; // [rsp+B0h] [rbp-41h] BYREF
  __int64 v179; // [rsp+B8h] [rbp-39h] BYREF
  __int64 v180; // [rsp+C0h] [rbp-31h] BYREF
  struct DMMVIDPNTARGETMODESET *v181; // [rsp+C8h] [rbp-29h] BYREF
  struct DMMVIDPNSOURCEMODESET *v182; // [rsp+D0h] [rbp-21h] BYREF
  struct _DXGK_MONITORLINKINFO v183; // [rsp+D8h] [rbp-19h] BYREF
  unsigned int v184; // [rsp+140h] [rbp+4Fh] BYREF
  __int64 v185; // [rsp+148h] [rbp+57h]
  __int64 v186; // [rsp+150h] [rbp+5Fh] BYREF
  __int16 v187; // [rsp+158h] [rbp+67h]

  v187 = a4;
  v185 = a2;
  v10 = a4;
  v11 = operator new[](120LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, 256LL, a4);
  *a1 = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(6LL, a3, *(unsigned __int16 *)(a3 + 20));
    return 3221225626LL;
  }
  v12 = *(VIDPN_MGR **)(a2 + 48);
  v168 = v12;
  v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 1);
  v167 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry0(1LL);
    v13 = (ADAPTER_DISPLAY *)*((_QWORD *)v12 + 1);
    v167 = v13;
  }
  v14 = *((_QWORD *)v13 + 2);
  v164 = v14;
  v15 = *(_QWORD *)(v14 + 2792);
  if ( *(_BYTE *)(v15 + 289) && *(_BYTE *)(v15 + 290)
    || (v121 = *(_QWORD *)(v14 + 216),
        LOBYTE(v184) = 0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v121 + 64) + 40LL) + 28LL) >= 0x4003u) )
  {
    LOBYTE(v184) = 1;
  }
  if ( *(_QWORD *)(v14 + 2800) )
  {
    *(_DWORD *)(*a1 + 8) &= ~1u;
    *(_DWORD *)(*a1 + 8) &= ~4u;
    *(_DWORD *)(*a1 + 8) &= ~8u;
  }
  else
  {
    *(_DWORD *)(*a1 + 8) ^= (*(_DWORD *)(*a1 + 8) ^ ADAPTER_DISPLAY::GetDisplayOnlyDriverUseSmallestMode(v13)) & 1;
    *(_DWORD *)(*a1 + 8) = ((unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(v13) != 0 ? 4 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFFB;
    *(_DWORD *)(*a1 + 8) = (ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(v13) ? 8 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFF7;
  }
  v16 = ADAPTER_DISPLAY::ForceIHVScaling(v13);
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(v17 + 8) & 0xFFFFFFFD | (v16 != 0 ? 2 : 0);
  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(v13);
  v20 = (_DWORD *)*a1;
  v21 = v19;
  v165 = PreferredHdrPixelFormat;
  v20[2] &= 0xFu;
  *(_BYTE *)*a1 = v19;
  *(_DWORD *)(*a1 + 4) = a7;
  if ( (unsigned __int16)v19 < *(_WORD *)(a3 + 20) )
  {
    do
    {
      v22 = 296LL * v21 + a3 + 56;
      if ( (*(_QWORD *)v22 & 0x4000000000000LL) == 0 )
      {
        WdLogSingleEntry0(1LL);
        v19 = 0;
      }
      if ( *(_DWORD *)(v22 + 16) == *(_DWORD *)(v14 + 404) && *(_DWORD *)(v22 + 20) == *(_DWORD *)(v14 + 408) )
      {
        if ( (*(_QWORD *)v22 & 0x700000000000LL) != 0x700000000000LL )
        {
          WdLogSingleEntry2(2LL, v21, a3);
          return 3221225485LL;
        }
        v23 = (_DWORD *)*a1;
        v24 = 30LL * *(unsigned __int8 *)*a1;
        v25 = a5;
        *(_QWORD *)&v23[v24 + 13] = 0LL;
        HIWORD(v23[v24 + 17]) = v25;
        v26 = a6 == 2;
        *(_QWORD *)&v23[v24 + 4] = v22;
        LOWORD(v23[v24 + 8]) = v21;
        LOWORD(v23[v24 + 16]) = v19;
        LOWORD(v23[v24 + 17]) = v19;
        HIWORD(v23[v24 + 16]) = v10;
        v23[v24 + 15] = v19;
        v23[v24 + 31] = v19;
        *(_OWORD *)&v23[v24 + 18] = 0LL;
        *(_OWORD *)&v23[v24 + 22] = 0LL;
        v23[v24 + 26] = 0;
        if ( v26 )
        {
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v167, *(_DWORD *)(v22 + 24));
          v19 = 0;
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            LOBYTE(v23[v24 + 33]) |= 1u;
        }
        else
        {
          v27 = v19;
          if ( (unsigned __int16)v19 < *(_WORD *)(a3 + 20) )
          {
            do
            {
              v28 = 296LL * v27;
              v186 = v28;
              if ( (*(_QWORD *)(v28 + a3 + 56) & 0x4000000000000LL) == 0 )
              {
                WdLogSingleEntry0(1LL);
                v28 = v186;
              }
              if ( v27 != v21 && *(_DWORD *)(v28 + a3 + 240) == *(_DWORD *)(v22 + 184) )
                LOBYTE(v23[v24 + 33]) |= 1u;
              ++v27;
            }
            while ( v27 < *(unsigned __int16 *)(a3 + 20) );
            v19 = 0;
          }
          v10 = v187;
        }
        v14 = v164;
        ++*(_BYTE *)*a1;
      }
      ++v21;
    }
    while ( v21 < *(unsigned __int16 *)(a3 + 20) );
  }
  v29 = (_BYTE *)*a1;
  v30 = v19;
  v31 = (struct DMMVIDPNTOPOLOGY *)(v185 + 96);
  v171 = (DMMVIDPNTOPOLOGY *)(v185 + 96);
  LOBYTE(v32) = *v29;
  if ( *v29 )
  {
    do
    {
      v33 = v30 + 1;
      v34 = v30 + 1;
      if ( (int)(v30 + 1) > 32 )
      {
        WdLogSingleEntry2(1LL, v29, v30);
        v29 = (_BYTE *)*a1;
        v34 = 32;
      }
      v35 = 120LL * v30;
      v36 = VIDPN_MGR::AddPathToVidPnTopology(
              v168,
              v31,
              *(_DWORD *)(*(_QWORD *)&v29[v35 + 16] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v29[v35 + 16] + 28LL),
              v34,
              *(_WORD *)&v29[v35 + 32],
              1,
              D3DKMDT_MCC_ENFORCE);
      v19 = 0;
      v39 = v36;
      if ( v36 < 0 )
      {
        v123 = (_QWORD *)WdLogNewEntry5_WdTrace(v38, v37);
        v123[3] = *(unsigned int *)(*(_QWORD *)&v29[v35 + 16] + 24LL);
        v124 = *(unsigned int *)(*(_QWORD *)&v29[v35 + 16] + 28LL);
        v123[5] = v171;
        v123[4] = v124;
        v123[6] = v39;
        return (unsigned int)v39;
      }
      v29 = (_BYTE *)*a1;
      v30 = v33;
      v31 = v171;
      v32 = *(unsigned __int8 *)*a1;
    }
    while ( v33 < v32 );
  }
  v163 = v19;
  v40 = v19;
  if ( (_BYTE)v32 )
  {
    v166 = -1073741811;
    while ( 1 )
    {
      v41 = v40;
      v42 = 120LL * v40;
      v169 = v40;
      v43 = *(_QWORD *)&v29[v42 + 16];
      if ( !_bittest64((const signed __int64 *)v43, 0x32u) )
      {
        WdLogSingleEntry0(1LL);
        v43 = *(_QWORD *)&v29[v42 + 16];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v31, *(_DWORD *)(v43 + 24), *(_DWORD *)(v43 + 28));
      if ( *(_BYTE *)(v43 + 129) )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdTrace(v45, v44);
        v47[3] = *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 24LL);
        v47[4] = *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL);
        v47[5] = *(int *)(*(_QWORD *)&v29[v42 + 16] + 20LL);
        v47[6] = *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 16LL);
        v48 = *(_QWORD *)&v29[v42 + 16];
        if ( (*(_QWORD *)v48 & 0x20000LL) == 0
          && (((unsigned __int8)~BYTE1(*(_QWORD *)v48) ^ (unsigned __int8)~(*(_DWORD *)(v48 + 8) >> 8)) & 1) != 0 )
        {
          WdLogSingleEntry1(1LL, 4338LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"((pPathInfo->pPathModality->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0) == ((pPath"
                      "Info->pPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0)",
            4338LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      v49 = *((_QWORD *)Path + 11);
      v50 = *(_QWORD *)(v49 + 104);
      if ( v50 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v50 + 96));
        v51 = *(_QWORD *)(v49 + 104);
      }
      else
      {
        v51 = 0LL;
      }
      v52 = (_DWORD *)*a1;
      v179 = v51;
      v53 = BmlFillPreferredMonitorMode(v52, v40, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v56 = v53;
      if ( v53 < 0 )
      {
        v146 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v54);
        v147 = *(_QWORD *)&v29[v42 + 16];
        v166 = v56;
        v146[3] = *(unsigned int *)(v147 + 24);
        v148 = *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL);
        v146[5] = v171;
        v146[4] = v148;
        v146[6] = v56;
        v149 = 120LL * v40;
        *(_DWORD *)(*a1 + v149 + 52) = 0;
        *(_DWORD *)(*a1 + v149 + 56) = 0;
        goto LABEL_203;
      }
      if ( !_bittest64(*(const signed __int64 **)&v29[v42 + 16], 0x2Au) )
        break;
      v57 = *(_DWORD *)(*(_QWORD *)&v29[v42 + 16] + 136LL);
      if ( v57 <= D3DKMDT_VPPS_UNINITIALIZED )
        goto LABEL_143;
      if ( v57 > D3DKMDT_VPPS_CUSTOM )
      {
        if ( v57 == D3DKMDT_VPPS_RESERVED1 )
          break;
        if ( v57 != D3DKMDT_VPPS_NOTSPECIFIED )
        {
LABEL_143:
          v58 = v168;
          AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v168);
          *(_DWORD *)&v29[v42 + 24] = AdapterDefaultScaling;
          WdLogSingleEntry4(3LL, AdapterDefaultScaling, *a1, v40, *(int *)(*(_QWORD *)&v29[v42 + 16] + 136LL));
          goto LABEL_44;
        }
        if ( *(int *)(*((_QWORD *)v167 + 2) + 2692LL) < 1105 )
          v57 = D3DKMDT_VPPS_NOTSPECIFIED;
        else
          v57 = VIDPN_MGR::GetAdapterDefaultScaling(v168);
      }
      v58 = v168;
LABEL_43:
      *(_DWORD *)&v29[v42 + 24] = v57;
LABEL_44:
      if ( !_bittest64(*(const signed __int64 **)&v29[v42 + 16], 0x2Fu)
        || !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(*(_QWORD *)&v29[v42 + 16] + 88LL))
        || (*(_DWORD *)(v59 + 8) & 0x200LL) != 0 )
      {
        goto LABEL_46;
      }
      PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v58, *(_DWORD *)(v59 + 28));
      v127 = *(_DWORD **)&v29[v42 + 16];
      v128 = PathFromTargetInClientVidPn;
      v129 = v127[7];
      if ( v129 == -1 )
        goto LABEL_201;
      v130 = *(_QWORD *)(v164 + 2792);
      if ( !v130 )
      {
        WdLogSingleEntry1(2LL, 9372LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"The selected adapter is render-only",
          9372LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v127 = *(_DWORD **)&v29[v42 + 16];
LABEL_201:
        WdLogSingleEntry3(2LL, (unsigned int)v127[7], (int)v127[5], (unsigned int)v127[4]);
LABEL_203:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v179, 0LL);
        return v166;
      }
      MONITOR_MGR::AcquireMonitorShared(&v177, v164, v129);
      v131 = v177;
      if ( v177 )
      {
        if ( *((_DWORD *)v177 + 78) != 1 )
          WdLogSingleEntry0(1LL);
        IsVirtualModeSupportDisabled = DXGMONITOR::_IsVirtualModeSupportDisabled(v131);
        ExReleaseResourceLite((PERESOURCE)((char *)v131 + 24));
        KeLeaveCriticalRegion();
        if ( IsVirtualModeSupportDisabled )
        {
          v133 = 1;
          goto LABEL_154;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, -1073741632LL);
        RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v177);
      }
      v133 = *(_BYTE *)(v130 + 289) == 0;
LABEL_154:
      if ( v128 )
      {
        if ( !v133 )
        {
          v134 = *((_DWORD *)v128 + 29);
          goto LABEL_159;
        }
      }
      else if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 346) )
      {
        v134 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 346);
LABEL_159:
        if ( v134 )
        {
          v135 = *(__int64 **)&v29[v42 + 16];
          v136 = *v135;
          if ( (*v135 & 0x200) != 0 )
          {
            if ( (((unsigned __int8)v134 ^ *((_BYTE *)v135 + 132)) & 1) != 0 && (v136 & 0x20000) != 0 )
            {
              v137 = *((_DWORD *)v135 + 38);
              v136 &= ~0x800000uLL;
              *((_DWORD *)v135 + 38) = *((_DWORD *)v135 + 39);
              *((_DWORD *)v135 + 39) = v137;
            }
          }
          else if ( (v136 & 0x20000) != 0 )
          {
            WdLogSingleEntry0(1LL);
            v136 = *v135;
          }
          *((_DWORD *)v135 + 33) = v134;
          *v135 = v136 | 0x200;
          *(_DWORD *)&v29[v42 + 28] = v134;
          goto LABEL_52;
        }
      }
      v41 = v169;
      v40 = v163;
LABEL_46:
      v60 = *(_DWORD **)&v29[v42 + 16];
      if ( (*v60 & 0x200LL) == 0 )
      {
        v119 = *a1;
        v120 = *a1;
        v173 = 0;
        if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(v120, v40, &v173) )
        {
          v141 = 120LL * v173;
          LODWORD(v61) = *(_DWORD *)(v141 + v119 + 28);
          if ( !(_DWORD)v61 )
            WdLogSingleEntry0(1LL);
          if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v61) != 1 )
            WdLogSingleEntry0(1LL);
          if ( (_BYTE)v184 )
          {
            v142 = *(_DWORD *)(v119 + v42 + 52);
            v143 = *(_DWORD *)(v119 + v42 + 56);
            if ( *(_DWORD *)(v141 + v119 + 52) < *(_DWORD *)(v141 + v119 + 56) != v142 < v143 )
            {
              v144 = v142 < v143;
              v145 = D3DKMDT_VPPR_ROTATE270;
              if ( !v144 )
                v145 = D3DKMDT_VPPR_ROTATE90;
              LODWORD(v61) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                               (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v61,
                               v145);
            }
          }
          if ( !(_DWORD)v61 )
            WdLogSingleEntry0(1LL);
        }
        else
        {
          LODWORD(v61) = 1;
        }
        goto LABEL_51;
      }
      v61 = (int)v60[33];
      v62 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v60[33]);
      v63 = 3;
      if ( (unsigned int)(v62 - 1) > 3 )
        goto LABEL_175;
      if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v61) == 1 )
      {
        v172 = 0;
        if ( (_BYTE)v184 )
        {
          v64 = *a1;
          if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v40, &v172) )
          {
            v138 = *(_DWORD *)(*(_QWORD *)(120LL * v172 + v64 + 16) + 132LL);
            if ( (unsigned int)(v138 - 1) > 0xF || (unsigned int)(v61 - 1) > 0xF )
              LODWORD(v61) = 255;
            else
              LODWORD(v61) = D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                               v138,
                               (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)(((int)v61 - v138 + 4) % 4 + 1));
          }
        }
LABEL_51:
        *(_DWORD *)&v29[v42 + 28] = v61;
        goto LABEL_52;
      }
      if ( !(_BYTE)v184 )
      {
LABEL_175:
        WdLogSingleEntry3(v63, *a1, v41, v61);
        *(_DWORD *)&v29[v42 + 28] = 1;
        goto LABEL_52;
      }
      IsSecondaryHardwareClonePath = BmlIsSecondaryHardwareClonePath(*a1, v40, 0LL);
      v140 = *(_QWORD *)&v29[v42 + 16];
      if ( IsSecondaryHardwareClonePath )
      {
        *(_DWORD *)&v29[v42 + 28] = *(_DWORD *)(v140 + 132);
      }
      else
      {
        WdLogSingleEntry3(1LL, *a1, v41, *(int *)(v140 + 132));
        *(_DWORD *)&v29[v42 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(*(_QWORD *)&v29[v42 + 16] + 132LL));
      }
LABEL_52:
      v65 = *(_QWORD *)&v29[v42 + 16];
      v66 = 0;
      if ( *(_BYTE *)(v65 + 129) && (*(_DWORD *)v65 & 0x20000) != 0 )
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)&v29[v42 + 28]) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)&v29[v42 + 108] = *(_DWORD *)(v65 + 152);
          v67 = *(_DWORD *)(v65 + 156);
        }
        else
        {
          *(_DWORD *)&v29[v42 + 108] = *(_DWORD *)(v65 + 156);
          v67 = *(_DWORD *)(v65 + 152);
        }
        *(_DWORD *)&v29[v42 + 112] = v67;
        v29[v42 + 124] |= 1u;
      }
      v68 = v164;
      v69 = *(unsigned int *)(v65 + 28);
      LOBYTE(v186) = 0;
      if ( (int)MonitorIsBoostRefreshRateEnabledByDefault(v164, v69, &v186) < 0 )
      {
        WdLogSingleEntry3(
          2LL,
          *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL),
          *(int *)(*(_QWORD *)&v29[v42 + 16] + 20LL),
          *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 16LL));
        v70 = 0;
        LOBYTE(v186) = 0;
      }
      else
      {
        v70 = v186;
      }
      v71 = v163;
      *(_DWORD *)&v29[v42 + 128] = (v70 != 0) | *(_DWORD *)&v29[v42 + 128] & 0xFFFFFFFE;
      if ( (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v71, 0LL) )
        *(_WORD *)&v29[v42 + 66] = 0;
      v170 = 0;
      v72 = 0;
      v161 = 0;
      v178 = 0LL;
      v73 = *(_QWORD *)&v29[v42 + 16];
      v162[0] = 0;
      v74 = 0;
      if ( (int)MonitorGetMonitorHandle(v68, *(unsigned int *)(v73 + 28), 1u, &BmlPreparePathOrderAndVidPn, &v178) >= 0 )
      {
        v77 = v178;
        if ( v178 )
        {
          MONITOR_MGR::AcquireMonitorShared(&v176, (__int64)v178);
          v78 = v176;
          if ( !v176 )
          {
            WdLogSingleEntry1(2LL, -1073741275LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v176);
            v80 = -1073741275;
            goto LABEL_191;
          }
          *(_QWORD *)&v183.UsageHints.0 = 0LL;
          v183.DitheringSupport.Value = 0;
          LinkInfo = DXGMONITOR::_GetLinkInfo(v176, &v183);
          v80 = LinkInfo;
          if ( LinkInfo == -1073741275 )
          {
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v176);
LABEL_67:
            v81 = v185;
          }
          else
          {
            if ( LinkInfo >= 0 )
            {
              DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
                *((DxgMonitor::MonitorColorState **)v78 + 28),
                &v183,
                (union MONITOR_AND_LINK_HDR_CAPS *)&v170);
              ExReleaseResourceLite((PERESOURCE)((char *)v78 + 24));
              KeLeaveCriticalRegion();
              v74 = v170;
              goto LABEL_67;
            }
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v176);
LABEL_191:
            v74 = 0;
            v170 = 0;
            v81 = v185;
            WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL), v185, v80);
          }
          IsAdvancedColorEnabled = MonitorIsAdvancedColorEnabled(v77, &v161);
          if ( IsAdvancedColorEnabled < 0 )
          {
            v72 = 0;
            v161 = 0;
            WdLogSingleEntry3(2LL, *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL), v81, IsAdvancedColorEnabled);
          }
          else
          {
            v72 = v161;
          }
          IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable((__int64)v77, v162);
          if ( IsMonitorAndDriverWCGCapable < 0 )
          {
            v66 = 0;
            v162[0] = 0;
            WdLogSingleEntry3(
              2LL,
              *(unsigned int *)(*(_QWORD *)&v29[v42 + 16] + 28LL),
              v185,
              IsMonitorAndDriverWCGCapable);
          }
          else
          {
            v66 = v162[0];
          }
          v84 = (__int64)v77;
          v68 = v164;
          MonitorReleaseMonitorHandle(v164, v84, &BmlPreparePathOrderAndVidPn);
          goto LABEL_73;
        }
        v80 = -1073741811;
        goto LABEL_191;
      }
LABEL_73:
      v85 = v29[v42 + 132];
      *(_DWORD *)&v29[v42 + 116] = v74;
      v29[v42 + 132] = (v66 != 0 ? 4 : 0) | (v72 != 0 ? 2 : 0) | v85 & 0xF9;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_SmoothHDRDisplayModeChange__private_reporting,
        0x17A28FCu,
        v75,
        v76,
        (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
        1);
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(ADAPTER_DISPLAY **)(v68 + 2792),
                           *(_DWORD *)(*(_QWORD *)&v29[v42 + 16] + 24LL)) == 1
        && (v29[v42 + 132] & 1) == 0
        && v72 )
      {
        if ( (v74 & 1) != 0 )
        {
          *(_DWORD *)&v29[v42 + 120] = v165;
        }
        else if ( v66 && v165 == 2 )
        {
          *(_DWORD *)&v29[v42 + 120] = 2;
        }
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v179, 0LL);
      v29 = (_BYTE *)*a1;
      v40 = v163 + 1;
      v163 = v40;
      v32 = (unsigned __int8)*v29;
      if ( v40 >= v32 )
      {
        v19 = 0;
        goto LABEL_78;
      }
      v31 = v171;
    }
    v58 = v168;
    v57 = VIDPN_MGR::GetAdapterDefaultScaling(v168);
    goto LABEL_43;
  }
LABEL_78:
  v163 = v19;
  v86 = v19;
  if ( (_BYTE)v32 )
  {
    do
    {
      v87 = 120LL * v86;
      v169 = v87;
      v88 = BmlIsSecondaryHardwareClonePath(v29, v86, 0LL);
      v19 = 0;
      if ( !v88 )
      {
        v89 = (unsigned __int8 *)*a1;
        v90 = 0;
        v164 = 0LL;
        v91 = 0;
        v92 = v86;
        v165 = v86;
        if ( v86 < *v89 )
        {
          v93 = v184;
          do
          {
            v94 = 120LL * v92;
            if ( *(_DWORD *)(*(_QWORD *)&v89[v94 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v29[v87 + 16] + 24LL) )
            {
              v95 = *(ADAPTER_DISPLAY **)&v89[v94 + 44];
              v167 = v95;
              if ( v93
                && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)&v89[v94 + 28]) - 2) & 0xFFFFFFFD) == 0 )
              {
                v96 = (unsigned int)v167;
                v97 = HIDWORD(v167);
                v167 = (ADAPTER_DISPLAY *)__PAIR64__((unsigned int)v167, HIDWORD(v167));
                v95 = v167;
              }
              else
              {
                v96 = HIDWORD(v167);
                v97 = (unsigned int)v167;
              }
              v166 = v97;
              if ( !v97 || !v96 )
              {
                WdLogSingleEntry0(1LL);
                v97 = v166;
                v92 = v165;
              }
              if ( v90 && v91 )
              {
                v87 = v169;
                if ( v90 > v97 )
                  v90 = v97;
                LODWORD(v164) = v90;
                if ( v91 > v96 )
                {
                  v91 = v96;
                  HIDWORD(v164) = v96;
                }
              }
              else
              {
                v164 = (__int64)v95;
                v90 = (unsigned int)v95;
                v91 = HIDWORD(v95);
                v87 = v169;
              }
            }
            v89 = (unsigned __int8 *)*a1;
            v165 = ++v92;
          }
          while ( v92 < *v89 );
          v86 = v163;
        }
        *(_QWORD *)&v29[v87 + 36] = v164;
        *(_DWORD *)&v29[v87 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v29[v87 + 52]);
        v19 = 0;
      }
      v29 = (_BYTE *)*a1;
      v163 = ++v86;
      v32 = (unsigned __int8)*v29;
    }
    while ( v86 < v32 );
  }
  v98 = v19;
  if ( !(_BYTE)v32 )
    return 0LL;
  while ( 1 )
  {
    v99 = 120LL * v98;
    v100 = *(_QWORD *)&v29[v99 + 16];
    v101 = DMMVIDPNTOPOLOGY::FindPath(v171, *(_DWORD *)(v100 + 24), *(_DWORD *)(v100 + 28));
    v169 = (__int64)v101;
    v102 = *((_QWORD *)v101 + 11);
    v103 = *(_QWORD *)(v102 + 104);
    if ( v103 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v103 + 96));
      v104 = *(struct DMMVIDPNSOURCEMODESET **)(v102 + 104);
      v100 = *(_QWORD *)&v29[v99 + 16];
    }
    else
    {
      v104 = 0LL;
    }
    v105 = *(_QWORD *)(v100 + 8);
    v182 = v104;
    if ( (v105 & 0x18001820B8FLL) == 0 )
      goto LABEL_113;
    if ( (*(_QWORD *)v100 & v105 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryHardwareClonePath(*a1, v98, 0LL) )
    {
      WdLogSingleEntry2(3LL, *a1, v98);
LABEL_113:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v101) )
      {
        v151 = *a1;
        for ( i = 0; i < *(unsigned __int8 *)*a1; ++i )
        {
          v153 = 120LL * i;
          if ( *(_DWORD *)(*(_QWORD *)(v153 + v151 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)&v29[v99 + 16] + 24LL) )
            *(_WORD *)(v153 + v151 + 66) = 0;
          v151 = *a1;
        }
        *(_WORD *)&v29[v99 + 70] = 0;
      }
      goto LABEL_114;
    }
    v106 = v185;
    v107 = *a1;
    v184 = -1;
    if ( (int)BmlGetNextBestSourceMode(v107, v185, (unsigned __int16)v98, (_DWORD)v104, -1, (__int64)&v184) >= 0 )
      break;
    v150 = *(_QWORD *)&v29[v99 + 16];
    if ( !_bittest64((const signed __int64 *)v150, 0x36u) )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v150 + 96),
        *(_DWORD *)(v150 + 100),
        *(_DWORD *)(v150 + 116),
        *(_QWORD *)(v150 + 16));
      WdLogSingleEntry4(3LL, *a1, v106, v98, v184);
      LODWORD(v106) = -1071774970;
      goto LABEL_224;
    }
    *(_QWORD *)(v150 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_114:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v182, 0LL);
    v29 = (_BYTE *)*a1;
    if ( ++v98 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  v108 = VIDPN_MGR::PinVidPnSourceMode(v168, v104, v184, 1);
  v106 = v108;
  if ( v108 >= 0 )
  {
    *(_WORD *)&v29[v99 + 66] = 0;
    v109 = *((_QWORD *)v101 + 12);
    v110 = *(_QWORD *)(v109 + 104);
    if ( v110 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v110 + 96));
      v111 = *(struct DMMVIDPNTARGETMODESET **)(v109 + 104);
    }
    else
    {
      v111 = 0LL;
    }
    v112 = *(_QWORD *)&v29[v99 + 16];
    v181 = v111;
    if ( (*(_BYTE *)v112 & 0x87) == 0x87
      && (*(_BYTE *)(v112 + 8) & 0x87) == 0x87
      && *(_DWORD *)(v112 + 56)
      && *(_DWORD *)(v112 + 52) )
    {
      v113 = *a1;
      v174 = -1;
      v180 = 0LL;
      *(_QWORD *)v160 = v104;
      v114 = v185;
      v175 = 1;
      if ( (int)BmlGetNextBestTargetMode(
                  v113,
                  v185,
                  (unsigned __int16)v98,
                  v111,
                  *(_QWORD *)v160,
                  -1,
                  &v174,
                  &v180,
                  &v175) < 0 )
      {
        v157 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v29[v99 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v29[v99 + 16] + 56LL));
        DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v158 + 44), *(_DWORD *)(v158 + 48), v157, v159);
        WdLogSingleEntry3(3LL, *a1, v114, v98);
        LODWORD(v106) = -1071774970;
        goto LABEL_222;
      }
      v115 = VIDPN_MGR::PinVidPnTargetMode(v168, v111, v174, 1);
      v106 = v115;
      if ( v115 < 0 )
      {
        v154 = DMMVIDEOSIGNALMODE::DivideAndRound(
                 *(unsigned int *)(*(_QWORD *)&v29[v99 + 16] + 52LL),
                 *(unsigned int *)(*(_QWORD *)&v29[v99 + 16] + 56LL));
        DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v155 + 44), *(_DWORD *)(v155 + 48), v154, v156);
        WdLogSingleEntry4(3LL, v106, *a1, v114, v98);
LABEL_222:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v181, 0LL);
        goto LABEL_224;
      }
      v116 = *((_QWORD *)v111 + 18);
      *(_QWORD *)(v116 + 152) = v180;
      *(_DWORD *)(v116 + 160) = v175;
      v117 = 0;
    }
    else
    {
      v117 = -1;
    }
    *(_WORD *)&v29[v99 + 70] = v117;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v181, 0LL);
    v101 = (struct DMMVIDPNPRESENTPATH *)v169;
    goto LABEL_113;
  }
  DxgkLogCodePointPacket(
    0x15u,
    *(_DWORD *)(*(_QWORD *)&v29[v99 + 16] + 96LL),
    *(_DWORD *)(*(_QWORD *)&v29[v99 + 16] + 100LL),
    *(_DWORD *)(*(_QWORD *)&v29[v99 + 16] + 116LL),
    *(_QWORD *)(*(_QWORD *)&v29[v99 + 16] + 16LL));
  WdLogSingleEntry4(3LL, v106, *a1, v185, v98);
LABEL_224:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v182, 0LL);
  return (unsigned int)v106;
}
