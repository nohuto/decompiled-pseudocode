/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0145660
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C0148B60 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A84C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A86C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B9E4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000BF04 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C000C074 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@HH@Z @ 0x1C000C118 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000C24C (-AvgXY@DpiInternal@@YAJUtagSIZE@@@Z.c)
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000C334 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004BA48 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_F.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0124590 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z @ 0x1C0145368 (-GetCurrentContentResolution@@YAJQEAXIPEAPEBUtagRECT@@PEAU1@PEAK@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01453F8 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C01454BC (MonitorGetDpiInfoFromDescriptor.c)
 *     ?LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z @ 0x1C0146074 (-LogScaleFactor@@YAXU_LUID@@IIPEAU_DPI_INFORMATION@@@Z.c)
 *     ?TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z @ 0x1C0146124 (-TraceLogDpiInfo@@YAXPEAU_DPI_INFORMATION@@PEBGAEBU_LUID@@II@Z.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C014660C (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C0146720 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C0146B90 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0146C98 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0147E0C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x1C016D160 (-DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01842D4 (DpiReadPnpRegistryValue.c)
 *     ?GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z @ 0x1C02A92F8 (-GetPhysicalDisplaySizeOverride@@YAJPEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall UpdateGdiInfoForVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        char *a2,
        unsigned int a3,
        int a4,
        struct _GDIINFO *a5,
        struct _DPI_INFORMATION *a6)
{
  struct _DPI_INFORMATION *v7; // r12
  __int64 v9; // r14
  DXGPROCESS *Current; // rax
  struct _LUID *v11; // rdx
  bool IsRemoteConnection; // al
  char v13; // r11
  __int64 v14; // rdx
  __int64 v15; // rcx
  char IsAdapterSessionized; // bl
  char v17; // r11
  __int64 (__fastcall *v18)(char *, _BYTE *, _BYTE *); // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _DWORD *v32; // r15
  int v33; // edi
  __int64 v34; // rcx
  int Win32DpiValues; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  unsigned int v39; // ebx
  __int64 v40; // rdx
  int v41; // eax
  unsigned int v42; // edi
  int v43; // eax
  unsigned __int64 v44; // r15
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 (__fastcall *v48)(_QWORD, _QWORD, _QWORD, _BYTE *); // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // r15d
  bool v54; // r12
  int VideoOutputTechnology; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  int v59; // edi
  int DpiInfoFromDescriptor; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v64; // esi
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v65; // r14d
  int v66; // r12d
  int v67; // r15d
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  UINT v72; // edx
  UINT cy; // ecx
  int v74; // eax
  unsigned int v75; // ebx
  unsigned int v76; // r12d
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // r8d
  __int64 v80; // r15
  int v81; // eax
  unsigned int v82; // ecx
  int v83; // r8d
  unsigned int v84; // r9d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v85; // r10d
  unsigned int v86; // r8d
  struct tagSIZE v87; // rdx
  char v88; // r14
  unsigned __int8 v89; // cl
  const struct tagSIZE *v90; // r9
  __int64 v91; // rcx
  unsigned __int8 v92; // al
  unsigned int v93; // esi
  bool v94; // r12
  int v95; // eax
  bool PreferredScaleFactorForMonitor; // al
  unsigned int v97; // ebx
  struct tagSIZE v98; // rdx
  __int64 v99; // rcx
  struct tagSIZE v100; // rdx
  int v101; // eax
  int v102; // r8d
  int MonitorDeviceInterfaceName; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  unsigned int *v106; // r8
  __int64 v107; // rbx
  __m128i v108; // xmm1
  __int64 v109; // rcx
  unsigned int v110; // eax
  __int128 v111; // xmm1
  __int128 v112; // xmm0
  _QWORD *v114; // rax
  __int64 v115; // rax
  int CurrentProcessSessionId; // eax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  _QWORD *v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // rax
  _QWORD *v131; // rax
  int PhysicalDisplaySizeOverride; // eax
  __int64 v133; // rcx
  unsigned int v134; // eax
  char v135; // al
  __int64 v136; // rax
  unsigned __int32 v137; // r8d
  unsigned int v138; // ecx
  unsigned __int32 v139; // eax
  __int64 v140; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  bool v143; // zf
  _QWORD *v144; // rax
  __int64 cx; // rcx
  int v146; // eax
  int v147; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v148; // r9
  __int64 v149; // rax
  struct _D3DKMDT_2DREGION *v150; // [rsp+20h] [rbp-E0h]
  struct _D3DKMDT_2DREGION *v151; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v152; // [rsp+28h] [rbp-D8h]
  char v153; // [rsp+40h] [rbp-C0h]
  char v154; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v155; // [rsp+42h] [rbp-BEh] BYREF
  bool v156; // [rsp+43h] [rbp-BDh]
  struct _D3DKMDT_2DREGION v157; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v158; // [rsp+4Ch] [rbp-B4h] BYREF
  _BYTE v159[368]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DPI_INFORMATION *v160; // [rsp+1C0h] [rbp+C0h]
  __int128 v161; // [rsp+1C8h] [rbp+C8h]
  struct tagSIZE v162[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int128 v163; // [rsp+1E8h] [rbp+E8h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v164; // [rsp+200h] [rbp+100h] BYREF
  _OWORD v165[6]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int16 v166[128]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v7 = a6;
  v9 = a3;
  *(_DWORD *)&v159[200] = a3;
  *(_QWORD *)&v159[216] = a5;
  v160 = a6;
  *(_DWORD *)&v159[120] = a4;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
  if ( !Current || (IsRemoteConnection = DXGPROCESS::IsRemoteConnection(Current), v13 = 1, !IsRemoteConnection) )
    v13 = 0;
  v153 = v13;
  *(_DWORD *)&v159[16] = 0;
  IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)a2, v11, (unsigned int *)&v159[16], 0LL);
  if ( v17 != IsAdapterSessionized )
  {
    v115 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v115 + 24) = 1661LL;
    WdLogEvent5_WdAssertion(v115);
  }
  if ( IsAdapterSessionized )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15, v14);
    if ( *(_DWORD *)&v159[16] != CurrentProcessSessionId )
    {
      v119 = WdLogNewEntry5_WdAssertion(v118, v117);
      *(_QWORD *)(v119 + 24) = 1662LL;
      WdLogEvent5_WdAssertion(v119);
    }
  }
  v18 = (__int64 (__fastcall *)(char *, _BYTE *, _BYTE *))*((_QWORD *)a1 + 6);
  *(_QWORD *)&v159[144] = 0LL;
  memset(&v159[48], 0, 28);
  v159[40] = 0;
  *(_QWORD *)&v159[104] = 0LL;
  v19 = v18(a2, &v159[104], &v159[144]);
  v22 = v19;
  if ( v19 < 0 )
  {
    v120 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v120 + 24) = a2;
    *(_QWORD *)(v120 + 32) = v22;
    WdLogEvent5_WdError(v120);
    return (unsigned int)v22;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v159[40],
    *(__int64 *)&v159[104],
    *((_QWORD *)a1 + 8),
    (__int64)a2);
  v23 = *(_QWORD *)&v159[48];
  *(_QWORD *)&v159[96] = 0LL;
  *(_QWORD *)&v159[136] = 0LL;
  v24 = (**(__int64 (__fastcall ***)(_QWORD, _BYTE *, _BYTE *))&v159[144])(*(_QWORD *)&v159[48], &v159[96], &v159[136]);
  v22 = v24;
  if ( v24 < 0 )
  {
    v122 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
    v122[3] = v23;
    v122[4] = v22;
LABEL_112:
    WdLogEvent5_WdError(v122);
    goto LABEL_113;
  }
  *(_QWORD *)&v159[208] = 0LL;
  v27 = (**(__int64 (__fastcall ***)(_QWORD, _QWORD, _BYTE *))&v159[136])(
          *(_QWORD *)&v159[96],
          (unsigned int)v9,
          &v159[208]);
  v22 = v27;
  if ( v27 < 0 )
  {
    v122 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
    v122[3] = v9;
    v122[4] = *(_QWORD *)&v159[96];
    v122[5] = v22;
    goto LABEL_112;
  }
  *(_QWORD *)&v159[104] = 0LL;
  *(_DWORD *)&v159[16] = 0;
  *(_OWORD *)&v159[80] = 0LL;
  LODWORD(v22) = GetCurrentContentResolution(
                   (DXGADAPTER *)a2,
                   v9,
                   (const struct tagRECT **)&v159[104],
                   (struct tagRECT *)&v159[80],
                   (unsigned int *)&v159[16]);
  if ( (int)v22 < 0 )
  {
LABEL_113:
    if ( v159[40] )
    {
      v121 = v23;
      goto LABEL_108;
    }
    return (unsigned int)v22;
  }
  v32 = *(_DWORD **)&v159[104];
  v33 = 0;
  if ( !*(_QWORD *)&v159[104] )
  {
    v123 = WdLogNewEntry5_WdAssertion(v31, v30);
    *(_QWORD *)(v123 + 24) = 1719LL;
    WdLogEvent5_WdAssertion(v123);
  }
  v34 = (unsigned int)(v32[2] - *v32);
  if ( v32[2] - *v32 <= 0 || (v34 = (unsigned int)(v32[3] - v32[1]), v32[3] - v32[1] <= 0) )
  {
    v124 = WdLogNewEntry5_WdAssertion(v34, v30);
    *(_QWORD *)(v124 + 24) = 1722LL;
    WdLogEvent5_WdAssertion(v124);
  }
  *(_DWORD *)&v159[20] = 0;
  *(_OWORD *)&v162[0].cx = 0LL;
  v163 = 0LL;
  Win32DpiValues = QueryWin32DpiValues((unsigned int *)&v159[20], (struct _DPI_SCALE_FACTOR_COLLECTION *)v162);
  v38 = Win32DpiValues;
  if ( Win32DpiValues < 0 )
  {
    v125 = WdLogNewEntry5_WdAssertion(v37, v36);
    *(_QWORD *)(v125 + 24) = 1728LL;
    WdLogEvent5_WdAssertion(v125);
    v128 = WdLogNewEntry5_WdError(v127, v126);
    *(_QWORD *)(v128 + 24) = v38;
    WdLogEvent5_WdError(v128);
  }
  v39 = 0;
  *(_DWORD *)&v159[128] = 0;
  memset(&v159[256], 0, 0x5CuLL);
  if ( *(_QWORD *)&v159[208] > 1uLL || (v41 = 0, *(_DWORD *)&v159[16] > 1u) )
    v41 = 1;
  if ( !*v32 && !v32[1] )
    v33 = 32;
  v42 = v41 | v33;
  v43 = dword_1C00B2A84;
  *(_DWORD *)&v159[348] = v42;
  if ( v42 >= 0x20 )
    v43 = *(_DWORD *)&v159[120];
  dword_1C00B2A84 = v43;
  *(_QWORD *)&v159[248] = 0LL;
  v44 = 0LL;
  v161 = *(_OWORD *)&v159[320];
  if ( *(_QWORD *)&v159[208] )
  {
    *(_OWORD *)&v159[352] = *(_OWORD *)&v159[272];
    while ( 1 )
    {
      v157.cx = -1;
      BYTE1(v157.cy) = 0;
      v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, struct _D3DKMDT_2DREGION *))(*(_QWORD *)&v159[136] + 8LL))(
              *(_QWORD *)&v159[96],
              (unsigned int)v9,
              v44,
              &v157);
      v22 = v45;
      if ( v45 < 0 )
      {
        v144 = (_QWORD *)WdLogNewEntry5_WdError(v47, v46);
        cx = (unsigned int)v9;
        v144[3] = v44;
        goto LABEL_164;
      }
      *(_QWORD *)&v159[24] = 0LL;
      v48 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)&v159[136] + 24LL);
      memset(&v159[168], 0, 28);
      v159[160] = 0;
      v49 = v48(*(_QWORD *)&v159[96], (unsigned int)v9, v157.cx, &v159[24]);
      v22 = v49;
      if ( v49 < 0 )
      {
        v144 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
        v144[3] = (unsigned int)v9;
        cx = v157.cx;
LABEL_164:
        v144[4] = cx;
        v144[5] = v22;
        WdLogEvent5_WdError(v144);
        v143 = v159[40] == 0;
        goto LABEL_165;
      }
      v52 = *(_QWORD *)&v159[24];
      if ( !*(_QWORD *)&v159[24] )
      {
        v129 = WdLogNewEntry5_WdAssertion(v51, 0LL);
        *(_QWORD *)(v129 + 24) = 1784LL;
        WdLogEvent5_WdAssertion(v129);
        v52 = *(_QWORD *)&v159[24];
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
        (__int64)&v159[160],
        v52,
        *(_QWORD *)(*(_QWORD *)&v159[136] + 32LL),
        *(__int64 *)&v159[96]);
      *(_DWORD *)&v159[112] = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(*(_QWORD *)&v159[168] + 20LL));
      v156 = 0;
      v53 = *(_DWORD *)&v159[112];
      v158 = D3DKMDT_VOT_UNINITIALIZED;
      v54 = 0;
      VideoOutputTechnology = DmmGetVideoOutputTechnology(a2, v157.cx, &v158, 0LL);
      v58 = VideoOutputTechnology;
      if ( VideoOutputTechnology < 0 )
      {
        v130 = (_QWORD *)WdLogNewEntry5_WdError(v57, v56);
        v130[3] = a2;
        v130[4] = v157.cx;
        v130[5] = v58;
        WdLogEvent5_WdError(v130);
      }
      else
      {
        v54 = IsInternalVideoOutput(v158);
        v156 = v54;
      }
      *(_DWORD *)&v159[240] = v54;
      *(_QWORD *)&v159[224] = 0LL;
      *(_DWORD *)&v159[232] = 0;
      *(_QWORD *)&v159[8] = 0LL;
      *(_DWORD *)&v159[124] = 0;
      v59 = ((unsigned __int8)v42 ^ (unsigned __int8)(v42 | (4 * v54))) & 4 ^ v42;
      v155 = 0;
      BYTE2(v157.cy) = 0;
      v158 = D3DKMDT_VOT_HD15;
      *(_DWORD *)v159 = 0;
      DpiInfoFromDescriptor = MonitorGetDpiInfoFromDescriptor(
                                (DXGADAPTER *)a2,
                                v157.cx,
                                (struct DISPLAY_PREFERRED_MODE_INFO *)&v159[224],
                                (unsigned int *)&v158,
                                (unsigned int *)v159,
                                (bool *)&v155,
                                (_BYTE *)&v157.cy + 2);
      v63 = DpiInfoFromDescriptor;
      if ( DpiInfoFromDescriptor < 0 )
        break;
      if ( !v155 )
      {
        v131 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
        v131[3] = a2;
        v131[4] = v157.cx;
        v131[5] = v63;
        WdLogEvent5_WdError(v131);
      }
      v64 = v158;
      v65 = *(_DWORD *)v159;
      *(_DWORD *)&v159[8] = v158;
      *(_DWORD *)&v159[12] = *(_DWORD *)v159;
      if ( ((v53 - 2) & 0xFFFFFFFD) == 0 )
      {
        v64 = *(_DWORD *)v159;
        *(_DWORD *)&v159[8] = *(_DWORD *)v159;
        v65 = v158;
        *(_DWORD *)&v159[12] = v158;
      }
      if ( v64 == D3DKMDT_VOT_HD15 || v65 == D3DKMDT_VOT_HD15 )
      {
        v65 = D3DKMDT_VOT_HD15;
        *(_QWORD *)&v159[8] = 0LL;
        v64 = D3DKMDT_VOT_HD15;
        goto LABEL_39;
      }
      if ( v64 * v65 > 16000 || v54 )
        goto LABEL_39;
      v59 |= 0x40u;
      *(_DWORD *)&v159[124] = 1;
      v65 = D3DKMDT_VOT_HD15;
      *(_QWORD *)&v159[8] = 0LL;
      v64 = D3DKMDT_VOT_HD15;
LABEL_40:
      BYTE1(v157.cy) = (a2[348] & 0x20) != 0;
LABEL_41:
      v66 = *(_DWORD *)&v159[224];
      v67 = *(_DWORD *)&v159[228];
      *(_QWORD *)&v159[152] = *(_QWORD *)&v159[224];
      *(_QWORD *)&v159[32] = 0LL;
      memset(&v164, 0, sizeof(v164));
      v154 = 0;
      PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(a2, v157.cx, &v164);
      v71 = PreferredMonitorSourceModeOnTarget;
      if ( PreferredMonitorSourceModeOnTarget < 0 )
      {
        v114 = (_QWORD *)WdLogNewEntry5_WdError(v70, v69);
        v114[3] = a2;
        v114[4] = v157.cx;
        v114[5] = v71;
        WdLogEvent5_WdError(v114);
        cy = *(_DWORD *)&v159[36];
        v72 = *(_DWORD *)&v159[32];
      }
      else
      {
        v72 = v164.VideoSignalInfo.ActiveSize.cx;
        cy = v164.VideoSignalInfo.ActiveSize.cy;
        *(D3DKMDT_2DREGION *)&v159[32] = v164.VideoSignalInfo.ActiveSize;
        v154 = 1;
      }
      if ( ((*(_DWORD *)&v159[112] - 2) & 0xFFFFFFFD) == 0 )
      {
        v66 = v67;
        *(_DWORD *)&v159[152] = v67;
        v67 = *(_DWORD *)&v159[224];
        *(_DWORD *)&v159[156] = *(_DWORD *)&v159[224];
        *(_QWORD *)&v159[32] = __PAIR64__(v72, cy);
      }
      *(_QWORD *)&v159[24] = 0LL;
      LODWORD(v22) = DpiInternal::GetCurrentSourceResolution(
                       *(DpiInternal **)&v159[48],
                       *(struct D3DKMDT_HVIDPN__ *const *)&v159[144],
                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v159[168],
                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v159[24],
                       v150);
      if ( (int)v22 < 0 )
      {
        if ( v159[160] )
          (*(void (__fastcall **)(_QWORD, _QWORD))&v159[176])(*(_QWORD *)&v159[184], *(_QWORD *)&v159[168]);
        v143 = v159[40] == 0;
LABEL_165:
        if ( !v143 )
        {
          v121 = *(_QWORD *)&v159[48];
LABEL_108:
          (*(void (__fastcall **)(_QWORD, __int64))&v159[56])(*(_QWORD *)&v159[64], v121);
        }
        return (unsigned int)v22;
      }
      *(_QWORD *)v159 = 0LL;
      LOBYTE(v157.cy) = 0;
      LODWORD(v22) = DpiInternal::GetCurrentTargetResolution(
                       *(DpiInternal **)&v159[48],
                       *(struct D3DKMDT_HVIDPN__ *const *)&v159[144],
                       *(const struct _DXGDMM_VIDPN_INTERFACE **)&v159[168],
                       (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)v159,
                       (struct _D3DKMDT_2DREGION *)&v157.cy,
                       v152);
      if ( (int)v22 < 0 )
      {
        if ( v159[160] )
          (*(void (__fastcall **)(_QWORD, _QWORD))&v159[176])(*(_QWORD *)&v159[184], *(_QWORD *)&v159[168]);
        v143 = v159[40] == 0;
        goto LABEL_165;
      }
      v74 = *(_DWORD *)&v159[4];
      if ( ((*(_DWORD *)&v159[112] - 2) & 0xFFFFFFFD) != 0 )
      {
        v158 = *(_DWORD *)&v159[4];
        v74 = *(_DWORD *)v159;
      }
      else
      {
        v158 = *(_DWORD *)v159;
      }
      v143 = *((_DWORD *)a2 + 86) == 4;
      *(_DWORD *)v159 = v74;
      if ( v143 )
      {
        *(_QWORD *)&v159[112] = 0LL;
        PhysicalDisplaySizeOverride = GetPhysicalDisplaySizeOverride((struct tagSIZE *)&v159[112]);
        v133 = *(_QWORD *)&v159[8];
        if ( PhysicalDisplaySizeOverride >= 0 )
          v133 = *(_QWORD *)&v159[112];
        *(_QWORD *)&v159[8] = v133;
        v64 = (int)v133;
        v65 = HIDWORD(v133);
      }
      if ( (v59 & 1) != 0 && *(_DWORD *)&v159[16] <= 1u && v66 && v67 )
      {
        v75 = *(_DWORD *)&v159[28];
        if ( LOBYTE(v157.cy) )
          v75 = *(_DWORD *)&v159[28] >> 1;
        v134 = 2 * v66;
        v76 = *(_DWORD *)&v159[24];
        if ( *(_DWORD *)&v159[24] >= v134 || (v135 = 0, v75 >= 2 * v67) )
          v135 = 2;
        v59 ^= ((unsigned __int8)v59 ^ (unsigned __int8)(v59 | v135)) & 2;
        if ( LOBYTE(v157.cy) )
          v75 *= 2;
      }
      else
      {
        v75 = *(_DWORD *)&v159[28];
        v76 = *(_DWORD *)&v159[24];
      }
      memset(v165, 0, sizeof(v165));
      DWORD1(v165[5]) = *(_DWORD *)&v159[120];
      v77 = *(unsigned int *)(*(_QWORD *)&v159[168] + 20LL);
      if ( (unsigned int)(v77 - 5) <= 0xB )
        v77 = (unsigned int)(((int)v77 - 1) % 4 + 1);
      v42 = ((((_DWORD)v77 - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v59 & 0xFFFFFF7F;
      v78 = (unsigned int)(*(_DWORD *)(*(_QWORD *)&v159[104] + 8LL) - **(_DWORD **)&v159[104]);
      LODWORD(v165[2]) = *(_DWORD *)(*(_QWORD *)&v159[104] + 8LL) - **(_DWORD **)&v159[104];
      v79 = *(_DWORD *)(*(_QWORD *)&v159[104] + 12LL) - *(_DWORD *)(*(_QWORD *)&v159[104] + 4LL);
      *(_DWORD *)&v159[348] = v42;
      DWORD1(v165[2]) = v79;
      if ( (((_DWORD)v77 - 2) & 0xFFFFFFFD) == 0 )
        *(_QWORD *)&v165[2] = __PAIR64__(v78, v79);
      v80 = *(_QWORD *)&v159[168];
      v81 = *(_DWORD *)(*(_QWORD *)&v159[168] + 12LL);
      if ( v81 <= 0 )
        goto LABEL_140;
      if ( v81 <= 2 )
        goto LABEL_58;
      switch ( v81 )
      {
        case 3:
          v84 = *(_DWORD *)v159;
          v85 = v158;
          v82 = *(_DWORD *)v159 * (*(_DWORD *)&v159[88] - *(_DWORD *)&v159[80]) / v76;
          v139 = v158 * (*(_DWORD *)&v159[92] - *(_DWORD *)&v159[84]);
          break;
        case 4:
          v85 = v158;
          v84 = *(_DWORD *)v159;
          if ( v75 * *(_DWORD *)v159 <= v76 * v158 )
          {
            v138 = *(_DWORD *)v159;
            v137 = v75 * *(_DWORD *)v159 / v76;
          }
          else
          {
            v137 = v158;
            v138 = v76 * v158 / v75;
          }
          v82 = v138 * (*(_DWORD *)&v159[88] - *(_DWORD *)&v159[80]) / v76;
          v139 = v137 * (*(_DWORD *)&v159[92] - *(_DWORD *)&v159[84]);
          break;
        case 5:
          goto LABEL_141;
        default:
          if ( v81 != 255 )
          {
LABEL_140:
            v136 = WdLogNewEntry5_WdAssertion(v78, v77);
            *(_QWORD *)(v136 + 24) = *(int *)(v80 + 12);
            WdLogEvent5_WdAssertion(v136);
LABEL_141:
            v42 |= 0x100u;
            *(_DWORD *)&v159[348] = v42;
          }
LABEL_58:
          v82 = *(_DWORD *)&v159[88] - *(_DWORD *)&v159[80];
          v83 = *(_DWORD *)&v159[92] - *(_DWORD *)&v159[84];
          v84 = *(_DWORD *)v159;
          v85 = v158;
          goto LABEL_59;
      }
      v83 = v139 / v75;
LABEL_59:
      v86 = v65 * v83;
      DWORD2(v165[1]) = v64 * v82 / v84;
      v87 = (struct tagSIZE)(v86 % v85);
      HIDWORD(v165[1]) = v86 / v85;
      if ( (v42 & 2) != 0 || (LOBYTE(v87.cx) = 0, !v154) )
        LOBYTE(v87.cx) = 1;
      v88 = BYTE1(v157.cy);
      if ( BYTE1(v157.cy) || !BYTE2(v157.cy) || *(_DWORD *)&v159[124] )
        goto LABEL_104;
      v89 = v154;
      if ( LOBYTE(v87.cx) )
        v89 = v155;
      if ( !v89 )
      {
LABEL_104:
        LODWORD(v165[4]) = 0;
      }
      else
      {
        v90 = (const struct tagSIZE *)&v159[32];
        if ( LOBYTE(v87.cx) )
          v90 = (const struct tagSIZE *)&v159[152];
        v91 = 16
            * (unsigned int)DetermineViewDistance(
                              a2,
                              (const struct tagSIZE *)&v159[8],
                              *(int *)&v159[240],
                              v90,
                              (unsigned int *)&v165[4]);
        v42 = v42 & 0xFFFFFFEF | v91;
        *(_DWORD *)&v159[348] = v42;
        if ( !LODWORD(v165[4]) )
        {
          v140 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v91, v87);
          *(_QWORD *)(v140 + 24) = 2052LL;
          WdLogEvent5_WdAssertion(v140);
        }
      }
      v92 = v153;
      v93 = 0;
      *(_DWORD *)v159 = 0;
      if ( v153 && *(_DWORD *)&v159[20] )
      {
        v94 = v156;
      }
      else
      {
        v94 = v156;
        if ( v156
          && (LODWORD(v151) = 2,
              (int)DpiReadPnpRegistryValue(*((_QWORD *)a2 + 27), L"PreferredScaleFactor", v159, 4LL) >= 0) )
        {
          v93 = *(_DWORD *)v159;
          v95 = 4096;
        }
        else
        {
          *(_DWORD *)v159 = 0;
          v95 = 0;
        }
        v42 = v95 | v42 & 0xFFFFEFFF;
        *(_DWORD *)&v159[348] = v42;
        if ( (v42 & 0x1000) == 0 )
        {
          PreferredScaleFactorForMonitor = DpiInternal::GetPreferredScaleFactorForMonitor(
                                             (DpiInternal *)a2,
                                             (void *const)v157.cx,
                                             (v42 >> 5) & 1,
                                             (int)v159,
                                             (unsigned int *)v151);
          v93 = *(_DWORD *)v159;
          v97 = v42 & 0xFFFFF7FF;
          v42 = v42 & 0xFFFFF7FF | (PreferredScaleFactorForMonitor << 11);
          *(_DWORD *)&v159[348] = v97 | (PreferredScaleFactorForMonitor << 11);
        }
        v92 = v153;
      }
      if ( v88 && v94 && !v93 )
      {
        DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
          *(DpiInternal **)&v165[2],
          v87,
          (__int64)v162,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v165);
        LODWORD(v151) = 0;
        DpiInternal::FillOverridesAndAdjustedScaleFactor(
          (DpiInternal *)*(unsigned int *)&v159[20],
          0LL,
          (int *)v162,
          (const struct _DPI_SCALE_FACTOR_COLLECTION *)v165,
          (struct _DPI_INFORMATION *)v151);
        v42 |= 0x400u;
        *(_DWORD *)&v159[348] = v42;
      }
      else
      {
        LODWORD(v151) = *(_DWORD *)&v159[20];
        FillDpiInfo(
          (const struct tagSIZE *)&v165[1] + 1,
          (struct tagSIZE *)&v165[2],
          v162,
          v165[4],
          (DpiInternal *)v151,
          v93,
          v92,
          (struct _DPI_INFORMATION *)v165);
      }
      if ( HIDWORD(v165[5]) )
      {
        v141 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v99, v98);
        *(_QWORD *)(v141 + 24) = 2092LL;
        WdLogEvent5_WdAssertion(v141);
      }
      HIDWORD(v165[5]) = v42;
      if ( v94
        || (v42 & 4) == 0
        && (DpiInternal::AvgXY(*((DpiInternal **)&v165[3] + 1), v98),
            v101 = DpiInternal::AvgXY(*(DpiInternal **)&v159[312], v100),
            v101 <= v102) )
      {
        *(_OWORD *)&v159[256] = v165[0];
        *(_OWORD *)&v159[352] = v165[1];
        *(_OWORD *)&v159[288] = v165[2];
        v161 = v165[4];
        *(_OWORD *)&v159[336] = v165[5];
        v42 = HIDWORD(v165[5]);
        *(_OWORD *)&v159[304] = v165[3];
      }
      memset(v166, 0, sizeof(v166));
      MonitorDeviceInterfaceName = MonitorGetMonitorDeviceInterfaceName(a2, v157.cx, 128LL, v166);
      v107 = MonitorDeviceInterfaceName;
      if ( MonitorDeviceInterfaceName < 0 )
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v105, v104);
        v142[3] = a2;
        v142[4] = v157.cx;
        v142[5] = v107;
        WdLogEvent5_WdError(v142);
        v166[0] = 0;
      }
      else
      {
        ScaleOverrideTestHook((DpiInternal *)v166, (const unsigned __int16 *)&v159[128], v106);
      }
      LODWORD(v9) = *(_DWORD *)&v159[200];
      TraceLogDpiInfo(
        (struct _DPI_INFORMATION *)v165,
        v166,
        (const struct _LUID *)(a2 + 316),
        *(unsigned int *)&v159[200],
        v93);
      LogScaleFactor(*(struct _LUID *)(a2 + 316), v9, *(unsigned int *)&v159[20], (struct _DPI_INFORMATION *)v165);
      if ( v159[160] )
        (*(void (__fastcall **)(_QWORD, __int64))&v159[176])(*(_QWORD *)&v159[184], v80);
      v44 = *(_QWORD *)&v159[248] + 1LL;
      *(_QWORD *)&v159[248] = v44;
      if ( v44 >= *(_QWORD *)&v159[208] )
      {
        v39 = *(_DWORD *)&v159[128];
        v108 = *(__m128i *)&v159[352];
        v23 = *(_QWORD *)&v159[48];
        v7 = v160;
        goto LABEL_91;
      }
    }
    v59 |= 8u;
    v65 = *(_DWORD *)&v159[12];
    v64 = *(_DWORD *)&v159[8];
    *(_DWORD *)&v159[288] = *(_DWORD *)(*(_QWORD *)&v159[216] + 16LL);
    *(_DWORD *)&v159[292] = *(_DWORD *)(*(_QWORD *)&v159[216] + 20LL);
LABEL_39:
    if ( v64 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v108 = *(__m128i *)&v159[272];
  *(_OWORD *)&v159[352] = *(_OWORD *)&v159[272];
LABEL_91:
  v109 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v108, 8));
  if ( (_DWORD)v109 )
  {
    v40 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v108, 12));
    if ( (_DWORD)v40 )
    {
      if ( (v42 & 0x80u) == 0 )
      {
        v147 = 1000 * v109;
        v109 = *(_QWORD *)&v159[216];
        *(_DWORD *)(*(_QWORD *)&v159[216] + 8LL) = v147;
        *(_DWORD *)(v109 + 12) = 1000 * v40;
      }
      else
      {
        v146 = 1000 * v40;
        v40 = *(_QWORD *)&v159[216];
        *(_DWORD *)(*(_QWORD *)&v159[216] + 8LL) = v146;
        *(_DWORD *)(v40 + 12) = 1000 * v109;
      }
    }
  }
  if ( (v42 & 2) == 0
    || (v148 = (const struct _DPI_SCALE_FACTOR_COLLECTION *)(unsigned int)_mm_cvtsi128_si32(
                                                                            _mm_srli_si128(
                                                                              _mm_load_si128((const __m128i *)&v159[336]),
                                                                              4)),
        (_DWORD)v148 == 1234568) )
  {
    v110 = *(_DWORD *)&v159[264];
  }
  else
  {
    v110 = DpiInternal::AdjustDesktopScaleFactorForOverride(
             (DpiInternal *)0x64,
             *(__int64 *)&v159[288],
             (struct tagSIZE)v162,
             v148,
             0);
    *(_DWORD *)&v159[264] = v110;
  }
  if ( v39 )
  {
    v110 = v39;
    *(_DWORD *)&v159[264] = v39;
    *(_DWORD *)&v159[340] = 1234567;
  }
  if ( !v110 )
  {
    v149 = WdLogNewEntry5_WdAssertion(v109, v40);
    *(_QWORD *)(v149 + 24) = 2160LL;
    WdLogEvent5_WdAssertion(v149);
  }
  v111 = *(_OWORD *)&v159[304];
  *(_DWORD *)&v159[256] = 100;
  *(_DWORD *)&v159[260] = 100;
  *(_OWORD *)v7 = *(_OWORD *)&v159[256];
  *((_OWORD *)v7 + 1) = *(_OWORD *)&v159[352];
  *((_OWORD *)v7 + 2) = *(_OWORD *)&v159[288];
  v112 = v161;
  *((_OWORD *)v7 + 3) = v111;
  *((_OWORD *)v7 + 4) = v112;
  *((_OWORD *)v7 + 5) = *(_OWORD *)&v159[336];
  if ( v159[40] )
    (*(void (__fastcall **)(_QWORD, __int64))&v159[56])(*(_QWORD *)&v159[64], v23);
  return 0LL;
}
