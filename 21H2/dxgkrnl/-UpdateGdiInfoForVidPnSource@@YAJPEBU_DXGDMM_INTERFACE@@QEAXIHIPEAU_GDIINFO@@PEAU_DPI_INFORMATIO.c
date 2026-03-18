/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C01D4920 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z @ 0x1C000F304 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAXI_N@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011E80 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C001969C (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C001980C (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C00198BC (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C00199F4 (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0019ADC (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004F2EC (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0163A38 (MonitorGetDpiInfoFromDescriptor.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C01D55FC (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C01D56AC (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C01D58F0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C01D5AB8 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C01D607C (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C01D61A4 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01D6EB0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01D7C48 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C01D7D08 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01DCD70 (DpiReadPnpRegistryValue.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C02FA2C4 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct _GDIINFO *a6,
        struct _DPI_INFORMATION *a7)
{
  char *v7; // r12
  __int64 v9; // r13
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  bool IsRemoteConnection; // al
  char v13; // r11
  __int64 v14; // rcx
  char IsAdapterSessionized; // bl
  char v16; // r11
  __int64 (__fastcall *v17)(char *, UCHAR *, UCHAR *); // rax
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r15
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  int CurrentContentResolution; // ebx
  _DWORD *v25; // rdi
  int Win32DpiValues; // eax
  __int64 v27; // rbx
  unsigned int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  int v32; // edi
  unsigned int v33; // edi
  int v34; // eax
  unsigned __int64 v35; // rcx
  int v36; // eax
  __int64 (__fastcall *v37)(_QWORD, _QWORD, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *); // rax
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  int v41; // r13d
  bool v42; // si
  int VideoOutputTechnology; // eax
  int v44; // edi
  int DpiInfoFromDescriptor; // eax
  LONG ScalingSupport; // ecx
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v47; // edx
  LONG v48; // eax
  int v49; // esi
  int v50; // r15d
  int PreferredMonitorSourceModeOnTarget; // eax
  UINT cy; // edx
  UINT cx; // ecx
  D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId; // eax
  LONG v55; // r13d
  unsigned int Scaling; // ebx
  __int64 v57; // rsi
  int v58; // edx
  int v59; // ecx
  int v60; // ecx
  int v61; // r8d
  int v62; // eax
  unsigned __int32 v63; // ecx
  int v64; // r8d
  __int64 v65; // r9
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v66; // r10d
  __int64 v67; // r8
  char v68; // dl
  bool v69; // r15
  char v70; // cl
  const struct tagSIZE *p_cy; // r9
  int v72; // ecx
  unsigned int v73; // eax
  unsigned __int8 v74; // bl
  LONG v75; // esi
  char v76; // r13
  int v77; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v79; // ebx
  struct tagSIZE v80; // rdx
  struct tagSIZE v81; // rdx
  struct tagSIZE v82; // rdx
  int v83; // eax
  int v84; // r8d
  __int64 v85; // rbx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned __int64 v91; // r9
  unsigned __int16 v92; // dx
  __int64 v93; // r10
  unsigned __int16 *v94; // r8
  __int64 v95; // r10
  __int64 v96; // rdx
  unsigned __int16 *v97; // rax
  signed int v98; // ebx
  unsigned int *v99; // r8
  __m128i v100; // xmm1
  int v101; // ecx
  unsigned int v102; // eax
  struct _DPI_INFORMATION *v103; // rax
  __int128 v104; // xmm1
  __int128 v105; // xmm0
  int CurrentProcessSessionId; // eax
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rbx
  __int64 v111; // rbx
  __int64 v112; // rbx
  int PhysicalDisplaySizeOverride; // eax
  struct tagSIZE v114; // rcx
  int v115; // eax
  unsigned __int32 v116; // r8d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v117; // ecx
  unsigned __int32 v118; // eax
  bool v119; // zf
  bool v120; // zf
  __int64 v121; // r15
  int v122; // edx
  int v123; // eax
  __int64 v124; // rdx
  int v125; // eax
  __int64 v126; // rcx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v127; // r9
  struct _D3DKMDT_2DREGION *v128; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v129; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v130; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v131; // [rsp+28h] [rbp-D8h]
  char v132; // [rsp+50h] [rbp-B0h]
  struct _D3DKMDT_2DREGION v133; // [rsp+54h] [rbp-ACh] BYREF
  bool v134; // [rsp+5Ch] [rbp-A4h]
  bool v135; // [rsp+5Dh] [rbp-A3h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY VidPnSourceId; // [rsp+60h] [rbp-A0h] BYREF
  struct tagSIZE v137; // [rsp+68h] [rbp-98h] BYREF
  struct tagSIZE v138; // [rsp+70h] [rbp-90h] BYREF
  D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v139; // [rsp+78h] [rbp-88h]
  unsigned int v140; // [rsp+7Ch] [rbp-84h] BYREF
  DpiInternal *v141; // [rsp+80h] [rbp-80h] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH v142; // [rsp+88h] [rbp-78h] BYREF
  struct _DPI_INFORMATION *v143; // [rsp+1F0h] [rbp+F0h]
  __int128 v144; // [rsp+1F8h] [rbp+F8h]
  struct tagSIZE v145[2]; // [rsp+208h] [rbp+108h] BYREF
  __int128 v146; // [rsp+218h] [rbp+118h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v147; // [rsp+230h] [rbp+130h] BYREF
  __int64 v148; // [rsp+290h] [rbp+190h] BYREF
  int v149; // [rsp+298h] [rbp+198h]
  _OWORD v150[6]; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned __int16 v151[128]; // [rsp+300h] [rbp+200h] BYREF

  v7 = (char *)a2;
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132] = a6;
  v9 = (unsigned int)a3;
  v143 = a7;
  *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[48] = a4;
  *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[140] = a3;
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[148] = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2, a3, a4);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v132 = v13;
  v140 = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v7, v11, &v140, 0LL);
  if ( v16 != IsAdapterSessionized )
  {
    WdLogSingleEntry1(1LL, 1648LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsRemote == IsAdapterSessionized",
      1648LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( IsAdapterSessionized )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    if ( v140 != CurrentProcessSessionId )
    {
      WdLogSingleEntry1(1LL, 1649LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"!IsAdapterSessionized || (TargetSession == PsGetCurrentProcessSessionId())",
        1649LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  v17 = (__int64 (__fastcall *)(char *, UCHAR *, UCHAR *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[68] = 0LL;
  memset(&v142.VidPnTargetColorCoeffDynamicRanges, 0, 28);
  LOBYTE(v142.VisibleFromActiveBROffset.cy) = 0;
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4] = 0LL;
  v18 = v17(v7, &v142.CopyProtection.OEMCopyProtection[4], &v142.CopyProtection.OEMCopyProtection[68]);
  v19 = v18;
  if ( v18 < 0 )
  {
    WdLogSingleEntry2(2LL, v7, v18);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
      (__int64)v7,
      v19,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v19;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v142.VisibleFromActiveBROffset.cy,
    *(__int64 *)&v142.CopyProtection.OEMCopyProtection[4],
    *((_QWORD *)a1 + 8),
    (__int64)v7);
  v20 = *(_QWORD *)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
  *(_QWORD *)&v142.ContentTransformation.RotationSupport = 0LL;
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[36] = 0LL;
  v21 = (**(__int64 (__fastcall ***)(_QWORD, D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *, UCHAR *))&v142.CopyProtection.OEMCopyProtection[68])(
          *(_QWORD *)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
          &v142.ContentTransformation.RotationSupport,
          &v142.CopyProtection.OEMCopyProtection[36]);
  v19 = v21;
  if ( v21 < 0 )
  {
    WdLogSingleEntry2(2LL, v20, v21);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire topology for VidPN 0x%I64x (status = 0x%I64x)",
      v20,
      v19,
      0LL,
      0LL,
      0LL);
    if ( LOBYTE(v142.VisibleFromActiveBROffset.cy) )
      (*(void (__fastcall **)(_QWORD, __int64))&v142.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
        *(_QWORD *)&v142.Content,
        v20);
    return (unsigned int)v19;
  }
  *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[60] = 0LL;
  v22 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, UCHAR *))&v142.CopyProtection.OEMCopyProtection[36])(
          *(_QWORD *)&v142.ContentTransformation.RotationSupport,
          (unsigned int)v9,
          &v142.CopyProtection.OEMCopyProtection[60]);
  v23 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry3(2LL, v9, *(_QWORD *)&v142.ContentTransformation.RotationSupport, v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
      v9,
      *(__int64 *)&v142.ContentTransformation.RotationSupport,
      v23,
      0LL,
      0LL);
    if ( LOBYTE(v142.VisibleFromActiveBROffset.cy) )
    {
      v108 = v20;
      goto LABEL_128;
    }
    return (unsigned int)v23;
  }
  else
  {
    *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[116] = 0LL;
    v140 = 0;
    *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[12] = 0LL;
    CurrentContentResolution = GetCurrentContentResolution(
                                 v7,
                                 v9,
                                 (const struct tagRECT **)&v142.CopyProtection.OEMCopyProtection[116],
                                 (struct tagRECT *)&v142.CopyProtection.OEMCopyProtection[12],
                                 &v140);
    if ( CurrentContentResolution < 0 )
    {
      if ( LOBYTE(v142.VisibleFromActiveBROffset.cy) )
      {
        v109 = v20;
LABEL_132:
        (*(void (__fastcall **)(_QWORD, __int64))&v142.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
          *(_QWORD *)&v142.Content,
          v109);
      }
      return (unsigned int)CurrentContentResolution;
    }
    else
    {
      v25 = *(_DWORD **)&v142.CopyProtection.OEMCopyProtection[116];
      if ( !*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[116] )
      {
        WdLogSingleEntry1(1LL, 1706LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContentRect != NULL", 1706LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( v25[2] - *v25 <= 0 || v25[3] - v25[1] <= 0 )
      {
        WdLogSingleEntry1(1LL, 1709LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pContentRect->right - pContentRect->left > 0) && (pContentRect->bottom - pContentRect->top > 0)",
          1709LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      LODWORD(v141) = 0;
      *(_OWORD *)&v145[0].cx = 0LL;
      v146 = 0LL;
      Win32DpiValues = QueryWin32DpiValues((unsigned int *)&v141, (struct _DPI_SCALE_FACTOR_COLLECTION *)v145);
      v27 = Win32DpiValues;
      if ( Win32DpiValues < 0 )
      {
        WdLogSingleEntry1(1LL, 1715LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(ntStatus)", 1715LL, 0LL, 0LL, 0LL, 0LL);
        WdLogSingleEntry1(2LL, v27);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Could not retrieve Win8StyleOverride and/or ScaleFactorCollection from Win32. (0x%I64x)",
          v27,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v28 = 0;
      *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[32] = 0;
      memset(&v142.CopyProtection.OEMCopyProtection[172], 0, 0x5CuLL);
      if ( *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[60] > 1uLL || (v31 = 0, v140 > 1) )
        v31 = 1;
      if ( *v25 || (v119 = v25[1] == 0, v32 = 32, !v119) )
        v32 = 0;
      v33 = v31 | v32;
      *((_DWORD *)&v142.GammaRamp.Type + 1) = v33;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
        0x13C839Fu,
        v29,
        v30,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
        0);
      v34 = dword_1C01303E4;
      v35 = 0LL;
      if ( v33 >= 0x20 )
        v34 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[48];
      dword_1C01303E4 = v34;
      *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4] = 0LL;
      v144 = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[236];
      if ( *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[60] )
      {
        *(_OWORD *)&v142.GammaRamp.DataSize = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[188];
        while ( 1 )
        {
          v134 = 0;
          v133.cx = -1;
          v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[36] + 8LL))(
                  *(_QWORD *)&v142.ContentTransformation.RotationSupport,
                  (unsigned int)v9,
                  v35,
                  &v133);
          v23 = v36;
          if ( v36 < 0 )
          {
            v121 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4];
            WdLogSingleEntry3(2LL, *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4], (unsigned int)v9, v36);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
              v121,
              (unsigned int)v9,
              v23,
              0LL,
              0LL);
            v120 = LOBYTE(v142.VisibleFromActiveBROffset.cy) == 0;
LABEL_199:
            if ( v120 )
              return (unsigned int)v23;
            v108 = *(_QWORD *)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
LABEL_128:
            (*(void (__fastcall **)(_QWORD, __int64))&v142.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
              *(_QWORD *)&v142.Content,
              v108);
            return (unsigned int)v23;
          }
          *(_QWORD *)&v142.ImportanceOrdinal = 0LL;
          v37 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE *))(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[36] + 24LL);
          memset(&v142.CopyProtection.OEMCopyProtection[84], 0, 28);
          v142.CopyProtection.OEMCopyProtection[76] = 0;
          v38 = v37(
                  *(_QWORD *)&v142.ContentTransformation.RotationSupport,
                  (unsigned int)v9,
                  v133.cx,
                  &v142.ImportanceOrdinal);
          v23 = v38;
          if ( v38 < 0 )
          {
            WdLogSingleEntry3(2LL, (unsigned int)v9, v133.cx, v38);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire info of path (0x%I64x, 0x%I64x) (status = 0x%I64x)",
              (unsigned int)v9,
              v133.cx,
              v23,
              0LL,
              0LL);
            v120 = LOBYTE(v142.VisibleFromActiveBROffset.cy) == 0;
            goto LABEL_199;
          }
          v39 = *(_QWORD *)&v142.ImportanceOrdinal;
          if ( !*(_QWORD *)&v142.ImportanceOrdinal )
          {
            WdLogSingleEntry1(1LL, 1779LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pVidPnPresentPathInfo != NULL",
              1779LL,
              0LL,
              0LL,
              0LL,
              0LL);
            v39 = *(_QWORD *)&v142.ImportanceOrdinal;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
            (__int64)&v142.CopyProtection.OEMCopyProtection[76],
            v39,
            *(_QWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[36] + 32LL),
            *(__int64 *)&v142.ContentTransformation.RotationSupport);
          v40 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84] + 20LL));
          BYTE2(v133.cy) = 0;
          VidPnSourceId = D3DKMDT_VOT_UNINITIALIZED;
          v41 = v40;
          v42 = 0;
          VideoOutputTechnology = DmmGetVideoOutputTechnology(v7, v133.cx, &VidPnSourceId, 0LL);
          if ( VideoOutputTechnology < 0 )
          {
            v110 = VideoOutputTechnology;
            WdLogSingleEntry3(2LL, v7, v133.cx, VideoOutputTechnology);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get video output technology from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)v7,
              v133.cx,
              v110,
              0LL,
              0LL);
          }
          else
          {
            v42 = IsInternalVideoOutput(VidPnSourceId);
            BYTE2(v133.cy) = v42;
          }
          *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[124] = v42;
          v137 = 0LL;
          *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[28] = 0;
          BYTE1(v133.cy) = 0;
          v135 = 0;
          v148 = 0LL;
          v149 = 0;
          v142.ContentTransformation.ScalingSupport = 0;
          *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[44] = 0;
          v44 = ((unsigned __int8)v33 ^ (unsigned __int8)(v33 | (4 * v42))) & 4 ^ v33;
          DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                                    (__int64)v7,
                                    v133.cx,
                                    (struct DISPLAY_PREFERRED_MODE_INFO *)&v148,
                                    (unsigned int *)&v142.ContentTransformation.ScalingSupport,
                                    (unsigned int *)&v142.CopyProtection.OEMCopyProtection[44],
                                    (bool *)&v133.cy + 1,
                                    &v135);
          if ( DpiInfoFromDescriptor < 0 )
            break;
          if ( !BYTE1(v133.cy) )
          {
            v111 = DpiInfoFromDescriptor;
            WdLogSingleEntry3(2LL, v7, v133.cx, DpiInfoFromDescriptor);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred mode from monitor EDID or DisplayID on adapter 0x%I64x, target 0x%I64x (s"
                        "tatus = 0x%I64x)",
              (__int64)v7,
              v133.cx,
              v111,
              0LL,
              0LL);
          }
          ScalingSupport = (LONG)v142.ContentTransformation.ScalingSupport;
          v47 = *(D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v142.CopyProtection.OEMCopyProtection[44];
          v138.cx = (LONG)v142.ContentTransformation.ScalingSupport;
          v137.cx = (LONG)v142.ContentTransformation.ScalingSupport;
          v139 = *(D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v142.CopyProtection.OEMCopyProtection[44];
          v137.cy = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[44];
          if ( ((v41 - 2) & 0xFFFFFFFD) == 0 )
          {
            ScalingSupport = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[44];
            v138.cx = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[44];
            v137.cx = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[44];
            v47 = v142.ContentTransformation.ScalingSupport;
            v139 = v142.ContentTransformation.ScalingSupport;
            v137.cy = (LONG)v142.ContentTransformation.ScalingSupport;
          }
          if ( !ScalingSupport || !*(_DWORD *)&v47 )
          {
            v48 = 0;
            ScalingSupport = 0;
            v137.cy = 0;
            v137.cx = 0;
LABEL_38:
            v138.cx = ScalingSupport;
            v139 = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)v48;
LABEL_39:
            if ( ScalingSupport )
              goto LABEL_41;
            goto LABEL_40;
          }
          if ( ScalingSupport * *(_DWORD *)&v47 > 16000 || v42 )
            goto LABEL_39;
          *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[28] = 1;
          v139 = 0;
          v137.cy = 0;
          v44 |= 0x40u;
          v138.cx = 0;
          v137.cx = 0;
LABEL_40:
          v134 = (v7[436] & 0x20) != 0;
LABEL_41:
          v49 = v148;
          v50 = HIDWORD(v148);
          *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[52] = v148;
          *(_QWORD *)&v142.VisibleFromActiveTLOffset.cy = 0LL;
          memset(&v147, 0, sizeof(v147));
          LOBYTE(v133.cy) = 0;
          PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(v7, v133.cx, &v147);
          if ( PreferredMonitorSourceModeOnTarget < 0 )
          {
            v112 = PreferredMonitorSourceModeOnTarget;
            WdLogSingleEntry3(2LL, v7, v133.cx, PreferredMonitorSourceModeOnTarget);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to get preferred monitor source mode from adapter 0x%I64x, target 0x%I64x (status = 0x%I64x)",
              (__int64)v7,
              v133.cx,
              v112,
              0LL,
              0LL);
            cx = v142.VisibleFromActiveBROffset.cx;
            cy = v142.VisibleFromActiveTLOffset.cy;
          }
          else
          {
            cy = v147.VideoSignalInfo.ActiveSize.cx;
            cx = v147.VideoSignalInfo.ActiveSize.cy;
            *(D3DKMDT_2DREGION *)&v142.VisibleFromActiveTLOffset.cy = v147.VideoSignalInfo.ActiveSize;
            LOBYTE(v133.cy) = 1;
          }
          if ( ((v41 - 2) & 0xFFFFFFFD) == 0
            && (*(_DWORD *)&v142.CopyProtection.OEMCopyProtection[52] = v50,
                *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[56] = v49,
                v49 = v50,
                v50 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[56],
                v41 == 2)
            || v41 == 4 )
          {
            v142.VisibleFromActiveTLOffset.cy = cx;
            v142.VisibleFromActiveBROffset.cx = cy;
          }
          *(_QWORD *)&v142.ImportanceOrdinal = 0LL;
          CurrentContentResolution = DpiInternal::GetCurrentSourceResolution(
                                       *(DpiInternal **)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v142.CopyProtection.OEMCopyProtection[68],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v142.CopyProtection.OEMCopyProtection[84],
                                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v142.ImportanceOrdinal,
                                       v128);
          if ( CurrentContentResolution < 0 )
          {
            if ( v142.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v142.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84]);
            v119 = LOBYTE(v142.VisibleFromActiveBROffset.cy) == 0;
            goto LABEL_195;
          }
          *(_QWORD *)&v142.VidPnSourceId = 0LL;
          HIBYTE(v133.cy) = 0;
          CurrentContentResolution = DpiInternal::GetCurrentTargetResolution(
                                       *(DpiInternal **)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel,
                                       *(struct D3DKMDT_HVIDPN__ *const *)&v142.CopyProtection.OEMCopyProtection[68],
                                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v142.CopyProtection.OEMCopyProtection[84],
                                       &v142,
                                       (struct _D3DKMDT_2DREGION *)((char *)&v133.cy + 3),
                                       v131);
          if ( CurrentContentResolution < 0 )
          {
            if ( v142.CopyProtection.OEMCopyProtection[76] )
              (*(void (__fastcall **)(_QWORD, _QWORD))&v142.CopyProtection.OEMCopyProtection[92])(
                *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[100],
                *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84]);
            v119 = LOBYTE(v142.VisibleFromActiveBROffset.cy) == 0;
LABEL_195:
            if ( v119 )
              return (unsigned int)CurrentContentResolution;
            v109 = *(_QWORD *)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
            goto LABEL_132;
          }
          VidPnTargetId = v142.VidPnTargetId;
          if ( ((v41 - 2) & 0xFFFFFFFD) != 0 )
          {
            VidPnSourceId = v142.VidPnTargetId;
            VidPnTargetId = v142.VidPnSourceId;
          }
          else
          {
            VidPnSourceId = v142.VidPnSourceId;
          }
          v119 = *((_DWORD *)v7 + 108) == 4;
          v142.VidPnSourceId = VidPnTargetId;
          if ( v119 )
          {
            v138 = 0LL;
            PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride(&v138);
            v114 = v137;
            if ( PhysicalDisplaySizeOverride >= 0 )
              v114 = v138;
            v137 = v114;
            v55 = v114.cx;
            v139 = (D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)v114.cy;
          }
          else
          {
            v55 = v138.cx;
          }
          if ( (v44 & 1) != 0 && v140 <= 1 && v49 && v50 )
          {
            Scaling = v142.ContentTransformation.Scaling;
            if ( HIBYTE(v133.cy) )
              Scaling = (unsigned int)v142.ContentTransformation.Scaling >> 1;
            if ( v142.ImportanceOrdinal >= (unsigned int)(2 * v49) || (v115 = 0, Scaling >= 2 * v50) )
              v115 = 2;
            v44 ^= (v44 ^ (v44 | v115)) & 2;
            if ( HIBYTE(v133.cy) )
              Scaling *= 2;
          }
          else
          {
            Scaling = v142.ContentTransformation.Scaling;
          }
          memset(v150, 0, sizeof(v150));
          v57 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84];
          DWORD1(v150[5]) = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[48];
          v58 = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84] + 20LL);
          if ( v58 >= 5 )
          {
            if ( v58 > 16 )
              goto LABEL_56;
            v58 = (v58 - 1) % 4 + 1;
          }
          if ( v58 != 2 && v58 != 4 )
          {
LABEL_56:
            v59 = 0;
            goto LABEL_57;
          }
          v59 = 128;
LABEL_57:
          v33 = v59 | v44 & 0xFFFFFF7F;
          *((_DWORD *)&v142.GammaRamp.Type + 1) = v33;
          v60 = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[116] + 8LL)
              - **(_DWORD **)&v142.CopyProtection.OEMCopyProtection[116];
          LODWORD(v150[2]) = v60;
          v61 = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[116] + 12LL)
              - *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[116] + 4LL);
          DWORD1(v150[2]) = v61;
          if ( ((v58 - 2) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)&v150[2] = __PAIR64__(v60, v61);
          v62 = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84] + 12LL);
          if ( v62 <= 0 )
          {
LABEL_166:
            WdLogSingleEntry1(1LL, *(int *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84] + 12LL));
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"Invalid scaling %I64d",
              *(int *)(v57 + 12),
              0LL,
              0LL,
              0LL,
              0LL);
LABEL_167:
            v33 |= 0x100u;
            *((_DWORD *)&v142.GammaRamp.Type + 1) = v33;
            goto LABEL_61;
          }
          if ( v62 > 2 )
          {
            switch ( v62 )
            {
              case 3:
                v65 = v142.VidPnSourceId;
                v66 = VidPnSourceId;
                v63 = v142.VidPnSourceId
                    * (*(_DWORD *)&v142.CopyProtection.OEMCopyProtection[20]
                     - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[12])
                    / v142.ImportanceOrdinal;
                v118 = VidPnSourceId
                     * (*(_DWORD *)&v142.CopyProtection.OEMCopyProtection[24]
                      - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[16]);
LABEL_173:
                v64 = v118 / Scaling;
                goto LABEL_62;
              case 4:
                v66 = VidPnSourceId;
                v65 = v142.VidPnSourceId;
                if ( Scaling * v142.VidPnSourceId <= v142.ImportanceOrdinal * VidPnSourceId )
                {
                  v117 = v142.VidPnSourceId;
                  v116 = Scaling * v142.VidPnSourceId / v142.ImportanceOrdinal;
                }
                else
                {
                  v116 = VidPnSourceId;
                  v117 = v142.ImportanceOrdinal * VidPnSourceId / Scaling;
                }
                v63 = v117
                    * (*(_DWORD *)&v142.CopyProtection.OEMCopyProtection[20]
                     - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[12])
                    / v142.ImportanceOrdinal;
                v118 = v116
                     * (*(_DWORD *)&v142.CopyProtection.OEMCopyProtection[24]
                      - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[16]);
                goto LABEL_173;
              case 5:
                goto LABEL_167;
            }
            if ( v62 != 255 )
              goto LABEL_166;
          }
LABEL_61:
          v63 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[20]
              - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[12];
          v64 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[24]
              - *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[16];
          v65 = v142.VidPnSourceId;
          v66 = VidPnSourceId;
LABEL_62:
          v67 = (unsigned int)(*(_DWORD *)&v139 * v64);
          DWORD2(v150[1]) = v55 * v63 / (unsigned int)v65;
          HIDWORD(v150[1]) = (unsigned int)v67 / v66;
          if ( (v33 & 2) != 0 || (v68 = 0, !LOBYTE(v133.cy)) )
            v68 = 1;
          v69 = v134;
          if ( v134 || *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[28] || !v135 )
            goto LABEL_175;
          v70 = v133.cy;
          if ( v68 )
            v70 = BYTE1(v133.cy);
          if ( !v70 )
          {
LABEL_175:
            v7 = *(char **)&v142.CopyProtection.OEMCopyProtection[148];
            LODWORD(v150[4]) = 0;
          }
          else
          {
            v7 = *(char **)&v142.CopyProtection.OEMCopyProtection[148];
            p_cy = (const struct tagSIZE *)&v142.VisibleFromActiveTLOffset.cy;
            if ( v68 )
              p_cy = (const struct tagSIZE *)&v142.CopyProtection.OEMCopyProtection[52];
            v72 = 16
                * DetermineViewDistance(
                    *(void *const *)&v142.CopyProtection.OEMCopyProtection[148],
                    &v137,
                    *(int *)&v142.CopyProtection.OEMCopyProtection[124],
                    p_cy,
                    (unsigned int *)&v150[4]);
            v73 = v33 & 0xFFFFFFEF;
            v33 = v33 & 0xFFFFFFEF | v72;
            *((_DWORD *)&v142.GammaRamp.Type + 1) = v73 | v72;
            if ( !LODWORD(v150[4]) )
            {
              WdLogSingleEntry1(1LL, 2047LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"CurrentDpiInfo.ViewDistTenthsOfInch != 0",
                2047LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          v74 = v132;
          v75 = 0;
          v138.cx = 0;
          if ( v132 && (_DWORD)v141 )
          {
            v76 = BYTE2(v133.cy);
          }
          else
          {
            v76 = BYTE2(v133.cy);
            if ( BYTE2(v133.cy)
              && (int)DpiReadPnpRegistryValue(*((_QWORD *)v7 + 27), L"PreferredScaleFactor", &v138, 4LL, 2) >= 0 )
            {
              v75 = v138.cx;
              v77 = 4096;
            }
            else
            {
              v75 = 0;
              v138.cx = 0;
              v77 = 0;
            }
            v33 = v77 | v33 & 0xFFFFEFFF;
            *((_DWORD *)&v142.GammaRamp.Type + 1) = v33;
            if ( (v33 & 0x1000) == 0 )
            {
              PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                                 (DpiInternal *)v7,
                                                 (void *const)v133.cx,
                                                 (v33 >> 5) & 1,
                                                 (int)&v138,
                                                 (unsigned int *)v129);
              v75 = v138.cx;
              v79 = v33 & 0xFFFFF7FF;
              v33 = v33 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
              *((_DWORD *)&v142.GammaRamp.Type + 1) = v79 | (PreferredScaleFactorForMonitor << 11);
            }
            v74 = v132;
          }
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_UniformDpiProgrammingModel__private_reporting,
            0x13C839Fu,
            v67,
            v65,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
            0);
          if ( v69 && v76 && !v75 )
          {
            DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
              *(DpiInternal **)&v150[2],
              v80,
              (__int64)v145,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v150);
            LODWORD(v130) = 0;
            DpiInternal::FillOverridesAndAdjustedScaleFactor(
              (DpiInternal *)(unsigned int)v141,
              0,
              (int *)v145,
              (const struct _DPI_SCALE_FACTOR_COLLECTION *)v150,
              (struct _DPI_INFORMATION *)v130);
            v33 |= 0x400u;
            *((_DWORD *)&v142.GammaRamp.Type + 1) = v33;
          }
          else
          {
            LODWORD(v130) = (_DWORD)v141;
            FillDpiInfo(
              (const struct tagSIZE *)&v150[1] + 1,
              (struct tagSIZE *)&v150[2],
              v145,
              v150[4],
              (DpiInternal *)v130,
              v75,
              v74,
              (struct _DPI_INFORMATION *)v150);
          }
          if ( HIDWORD(v150[5]) )
          {
            WdLogSingleEntry1(1LL, 2093LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"CurrentDpiInfo.FlagsUnion.AllFlags == 0",
              2093LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          HIDWORD(v150[5]) = v33;
          if ( v76
            || (v33 & 4) == 0
            && (DpiInternal::AvgXY(*(DpiInternal **)&v142.CopyProtection.OEMCopyProtection[228], v81),
                v83 = DpiInternal::AvgXY(*((DpiInternal **)&v150[3] + 1), v82),
                v84 <= v83) )
          {
            *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[172] = v150[0];
            *(_OWORD *)&v142.GammaRamp.DataSize = v150[1];
            *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[204] = v150[2];
            v144 = v150[4];
            *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[252] = v150[5];
            v33 = HIDWORD(v150[5]);
            *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[220] = v150[3];
          }
          memset(v151, 0, sizeof(v151));
          v85 = v133.cx;
          v88 = WdLogNewEntry5_WdTrace(v87, v86);
          *(_QWORD *)(v88 + 24) = v85;
          *(_QWORD *)(v88 + 32) = v7;
          if ( (_DWORD)v85 == -1 )
          {
            v98 = -1073741811;
            goto LABEL_188;
          }
          MONITOR_MGR::AcquireMonitorShared(
            (struct DXGMONITOR **)&v142.CopyProtection.OEMCopyProtection[156],
            (__int64)v7,
            v85);
          v89 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[156];
          if ( !*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[156] )
          {
            v98 = -1073741632;
            WdLogSingleEntry1(2LL, -1073741632LL);
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>((__int64 *)&v142.CopyProtection.OEMCopyProtection[156]);
LABEL_188:
            WdLogSingleEntry3(2LL, v7, v133.cx, v98);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"MonitorGetMonitorDeviceInterfaceName failed for adapter: 0x%I64x, target: 0x%I64x, with status: 0x%I64x",
              (__int64)v7,
              v133.cx,
              v98,
              0LL,
              0LL);
            v151[0] = 0;
            goto LABEL_104;
          }
          v90 = *(_QWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[156] + 200LL);
          v91 = *(unsigned __int16 *)(v90 + 48);
          if ( (v91 & 1) != 0
            || (v92 = *(_WORD *)(v90 + 50), (v92 & 1) != 0)
            || (unsigned __int16)v91 > v92
            || v92 == 0xFFFF
            || (v93 = *(_QWORD *)(v90 + 56)) == 0 && ((_WORD)v91 || v92) )
          {
            v98 = -1073741811;
            v151[0] = 0;
          }
          else
          {
            v94 = v151;
            v95 = v93 - (_QWORD)v151;
            v96 = 128LL;
            do
            {
              if ( !(v96 + (v91 >> 1) - 128) )
                break;
              *v94 = *(unsigned __int16 *)((char *)v94 + v95);
              ++v94;
              --v96;
            }
            while ( v96 );
            v97 = v94 - 1;
            if ( v96 )
              v97 = v94;
            *v97 = 0;
            v98 = v96 == 0 ? 0x80000005 : 0;
            if ( v96 )
              v151[1] = 92;
          }
          ExReleaseResourceLite((PERESOURCE)(v89 + 24));
          KeLeaveCriticalRegion();
          if ( v98 < 0 )
            goto LABEL_188;
          ScaleOverrideTestHook(
            (DpiInternal *)v151,
            (unsigned __int16 *)&v142.CopyProtection.OEMCopyProtection[32],
            v99);
LABEL_104:
          LODWORD(v9) = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[140];
          TraceLogDpiInfo(
            (struct _DPI_INFORMATION *)v150,
            v151,
            (const struct _LUID *)(v7 + 404),
            *(unsigned int *)&v142.CopyProtection.OEMCopyProtection[140],
            v75);
          LogScaleFactor(*(struct _LUID *)(v7 + 404), v9, (unsigned int)v141, (struct _DPI_INFORMATION *)v150);
          if ( v142.CopyProtection.OEMCopyProtection[76] )
            (*(void (__fastcall **)(_QWORD, _QWORD))&v142.CopyProtection.OEMCopyProtection[92])(
              *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[100],
              *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[84]);
          v35 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4] + 1LL;
          *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[4] = v35;
          if ( v35 >= *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[60] )
          {
            v28 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[32];
            v100 = *(__m128i *)&v142.GammaRamp.DataSize;
            v20 = *(_QWORD *)&v142.VidPnTargetColorCoeffDynamicRanges.FirstChannel;
            goto LABEL_108;
          }
        }
        v44 |= 8u;
        *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[204] = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132]
                                                                           + 16LL);
        ScalingSupport = v137.cx;
        *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[208] = *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132]
                                                                           + 20LL);
        v48 = v137.cy;
        goto LABEL_38;
      }
      v100 = *(__m128i *)&v142.CopyProtection.OEMCopyProtection[188];
      *(_OWORD *)&v142.GammaRamp.DataSize = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[188];
LABEL_108:
      v101 = _mm_cvtsi128_si32(_mm_srli_si128(v100, 8));
      if ( v101 )
      {
        v122 = _mm_cvtsi128_si32(_mm_srli_si128(v100, 12));
        if ( v122 )
        {
          if ( (v33 & 0x80u) == 0 )
          {
            v125 = 1000 * v101;
            v126 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132];
            *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132] + 8LL) = v125;
            *(_DWORD *)(v126 + 12) = 1000 * v122;
          }
          else
          {
            v123 = 1000 * v122;
            v124 = *(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132];
            *(_DWORD *)(*(_QWORD *)&v142.CopyProtection.OEMCopyProtection[132] + 8LL) = v123;
            *(_DWORD *)(v124 + 12) = 1000 * v101;
          }
        }
      }
      if ( (v33 & 2) == 0
        || (v127 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                                _mm_srli_si128(
                                                                                  _mm_load_si128((const __m128i *)&v142.CopyProtection.OEMCopyProtection[252]),
                                                                                  4)),
            (_DWORD)v127 == 1234568) )
      {
        v102 = *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[180];
      }
      else
      {
        v102 = DpiInternal::AdjustDesktopScaleFactorForOverride(
                 (DpiInternal *)0x64,
                 *(int *)&v142.CopyProtection.OEMCopyProtection[204],
                 (struct tagSIZE)v145,
                 v127,
                 0);
        *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[180] = v102;
      }
      if ( v28 )
      {
        v102 = v28;
        *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[180] = v28;
        v142.CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1234567;
      }
      if ( !v102 )
      {
        WdLogSingleEntry1(1LL, 2161LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"DpiInfo.DesktopScaleFactor != DESKTOP_SCALE_INVALID",
          2161LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v103 = v143;
      v104 = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[220];
      *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[172] = 100;
      *(_DWORD *)&v142.CopyProtection.OEMCopyProtection[176] = 100;
      *(_OWORD *)v143 = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[172];
      *((_OWORD *)v103 + 1) = *(_OWORD *)&v142.GammaRamp.DataSize;
      *((_OWORD *)v103 + 2) = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[204];
      v105 = v144;
      *((_OWORD *)v103 + 3) = v104;
      *((_OWORD *)v103 + 4) = v105;
      *((_OWORD *)v103 + 5) = *(_OWORD *)&v142.CopyProtection.OEMCopyProtection[252];
      if ( LOBYTE(v142.VisibleFromActiveBROffset.cy) )
        (*(void (__fastcall **)(_QWORD, __int64))&v142.VidPnTargetColorCoeffDynamicRanges.ThirdChannel)(
          *(_QWORD *)&v142.Content,
          v20);
      return 0LL;
    }
  }
}
