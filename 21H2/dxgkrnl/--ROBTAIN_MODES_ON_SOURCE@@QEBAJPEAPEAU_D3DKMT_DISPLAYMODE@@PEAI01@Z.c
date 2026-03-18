/*
 * XREFs of ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C01875D0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1C0010CA8 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001CF0C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C004F054 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     _CompareDisplayMode @ 0x1C018841C (_CompareDisplayMode.c)
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C018849C (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0188630 (-BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_P.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1C01D229C (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01D311C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01D6EB0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     _UpgradeDispModeFlags @ 0x1C01DE1C4 (_UpgradeDispModeFlags.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01DE2AC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z @ 0x1C02F75F8 (-FindMode@MODE_UNION_LIST@@QEAAPEAU_D3DKMT_DISPLAYMODE@@AEBU2@@Z.c)
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1C02F88E8 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 */

__int64 __fastcall OBTAIN_MODES_ON_SOURCE::operator()(
        OBTAIN_MODES_ON_SOURCE *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v5; // r12
  OBTAIN_MODES_ON_SOURCE *v6; // r13
  unsigned int v7; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r8
  void *v15; // rbx
  int VideoOutputTechnology; // eax
  __int64 v17; // rdi
  bool v18; // di
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64, __int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v23; // eax
  __int64 v24; // r14
  __int64 v25; // rsi
  __int64 (__fastcall *v26)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned int *v30; // r15
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *); // rax
  int v36; // eax
  unsigned int *v37; // rsi
  __int64 (__fastcall *v38)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **); // rax
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // r8
  int v42; // eax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v50; // edi
  unsigned int v51; // eax
  char v52; // cl
  unsigned int v53; // r12d
  __int64 v54; // r15
  __int64 v55; // rbx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  __int64 v60; // r15
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  unsigned int v66; // ebx
  __int64 v67; // rdx
  bool v68; // zf
  int v69; // ecx
  int v70; // eax
  unsigned int v71; // eax
  bool v72; // r8
  __int16 v73; // cx
  unsigned int v74; // edx
  int v75; // eax
  int v76; // r9d
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rsi
  int v80; // edx
  UINT Denominator; // r14d
  unsigned __int64 v82; // r15
  unsigned __int64 v83; // r9
  unsigned int *v84; // r8
  unsigned int v85; // esi
  unsigned int v86; // ecx
  __int64 v87; // r11
  unsigned __int64 v88; // r10
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // r9
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rcx
  UINT v94; // ecx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v95; // esi
  int v96; // r12d
  unsigned int v97; // esi
  unsigned int *v98; // r14
  D3DDDI_ROTATION v99; // r15d
  unsigned int v100; // ecx
  unsigned int v101; // ecx
  D3DDDIFORMAT v102; // r14d
  __int64 v103; // rsi
  MODE_UNION_LIST *v104; // r13
  __int64 v105; // r10
  __int64 v106; // r11
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // ecx
  int v110; // ecx
  int *v111; // rax
  int v112; // edx
  __int64 v113; // rcx
  struct _D3DDDI_RATIONAL v114; // rdx
  unsigned __int64 v115; // rcx
  __int64 v116; // r9
  __int64 v117; // r8
  int v118; // eax
  unsigned int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rdx
  int v122; // eax
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // r9
  struct _D3DKMT_DISPLAYMODE **v126; // rbx
  struct _D3DKMT_DISPLAYMODE *v127; // rax
  unsigned __int64 v128; // rcx
  unsigned __int64 v129; // rax
  int UniqueModes; // eax
  __int64 v131; // r9
  _QWORD *v132; // rbx
  __int64 v134; // rax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  __int64 v139; // rdi
  int v140; // eax
  unsigned int v141; // esi
  _DWORD *v142; // r15
  unsigned int v143; // r12d
  int v144; // r8d
  bool v145; // r8
  unsigned int v146; // r15d
  int v147; // eax
  __int64 v148; // rbx
  const wchar_t *v149; // r9
  unsigned int v150; // eax
  __int64 v151; // rdi
  __int64 v152; // rax
  const wchar_t *v153; // r9
  unsigned int v154; // eax
  __int64 v155; // rax
  __int64 v156; // rbx
  unsigned __int64 v157; // rcx
  unsigned __int64 v158; // rax
  struct _D3DKMT_DISPLAYMODE *v159; // rax
  int v160; // eax
  __int64 v161; // rbx
  int v162; // [rsp+20h] [rbp-E0h]
  char v163; // [rsp+50h] [rbp-B0h] BYREF
  char v164; // [rsp+51h] [rbp-AFh] BYREF
  char v165; // [rsp+52h] [rbp-AEh]
  bool v166; // [rsp+53h] [rbp-ADh]
  unsigned int v167; // [rsp+54h] [rbp-ACh]
  unsigned __int8 v168; // [rsp+58h] [rbp-A8h]
  __int16 v169; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v170; // [rsp+60h] [rbp-A0h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v171; // [rsp+64h] [rbp-9Ch] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v172; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v173; // [rsp+70h] [rbp-90h]
  __int64 v174; // [rsp+78h] [rbp-88h] BYREF
  __int64 v175; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v176; // [rsp+88h] [rbp-78h]
  unsigned int v177; // [rsp+8Ch] [rbp-74h]
  __int64 v178; // [rsp+90h] [rbp-70h] BYREF
  struct _D3DKMT_DISPLAYMODE v179; // [rsp+98h] [rbp-68h] BYREF
  int v180; // [rsp+C8h] [rbp-38h] BYREF
  D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v181; // [rsp+CCh] [rbp-34h]
  OBTAIN_MODES_ON_SOURCE *v182; // [rsp+D0h] [rbp-30h]
  char v183[8]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v184; // [rsp+E0h] [rbp-20h]
  void (__fastcall *v185)(__int64, unsigned int *); // [rsp+E8h] [rbp-18h]
  __int64 v186; // [rsp+F0h] [rbp-10h]
  int v187; // [rsp+F8h] [rbp-8h]
  char v188[8]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v189; // [rsp+108h] [rbp+8h]
  void (__fastcall *v190)(__int64, unsigned int *); // [rsp+110h] [rbp+10h]
  __int64 v191; // [rsp+118h] [rbp+18h]
  int v192; // [rsp+120h] [rbp+20h]
  D3DDDIFORMAT v193; // [rsp+128h] [rbp+28h]
  UINT v194; // [rsp+12Ch] [rbp+2Ch]
  struct _D3DDDI_RATIONAL v195; // [rsp+130h] [rbp+30h] BYREF
  UINT v196; // [rsp+138h] [rbp+38h]
  char v197[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v198; // [rsp+148h] [rbp+48h]
  void (__fastcall *v199)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v200; // [rsp+158h] [rbp+58h]
  int v201; // [rsp+160h] [rbp+60h]
  __int64 v202; // [rsp+168h] [rbp+68h] BYREF
  __int64 v203; // [rsp+170h] [rbp+70h] BYREF
  void **v204; // [rsp+178h] [rbp+78h]
  char v205[8]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v206; // [rsp+188h] [rbp+88h]
  void (__fastcall *v207)(__int64, __int64); // [rsp+190h] [rbp+90h]
  __int64 v208; // [rsp+198h] [rbp+98h]
  int v209; // [rsp+1A0h] [rbp+A0h]
  void *v210; // [rsp+1A8h] [rbp+A8h]
  struct _D3DKMT_DISPLAYMODE **v211; // [rsp+1B0h] [rbp+B0h]
  unsigned int *v212; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v213; // [rsp+1C0h] [rbp+C0h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE v214; // [rsp+1D0h] [rbp+D0h] BYREF

  LODWORD(v5) = -1;
  v213 = a5;
  v6 = a1;
  v204 = a4;
  v7 = 0;
  v212 = a3;
  v211 = a2;
  v8 = D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0;
  v182 = a1;
  v173 = -1;
  while ( 1 )
  {
    v9 = *((_QWORD *)v6 + 4);
    v10 = *((unsigned int *)v6 + 10);
    v11 = *((_QWORD *)v6 + 3);
    v170 = -1;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(v9 + 8))(v11, v10, v7, &v170);
    v13 = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry3(1LL, v12, *((unsigned int *)v6 + 10), v7);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnEnumPathTargetsFromSource. (Status = 0x%I64x, m_VidPn"
                  "SourceId = 0x%I64x, PathIndex = 0x%I64x)",
        v13,
        *((unsigned int *)v6 + 10),
        v7,
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    v14 = v170;
    if ( v170 == -1 )
      break;
    ++*((_DWORD *)v6 + 13);
    v121 = *((unsigned int *)v6 + 10);
    v169 = -1;
    v171 = D3DKMDT_VOT_HD15;
    v122 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int16 *))(*((_QWORD *)v6 + 4) + 112LL))(
             *((_QWORD *)v6 + 3),
             v121,
             v14,
             &v171,
             &v169);
    v13 = v122;
    if ( v122 < 0 )
    {
      WdLogSingleEntry3(2LL, v122, (unsigned int)v5, *((unsigned int *)v6 + 10));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnGetPathImportance. (Status = 0x%I64x, PrimVidPnTarget"
                  "Id = 0x%I64x, m_VidPnSourceId = 0x%I64x)",
        v13,
        (unsigned int)v5,
        *((unsigned int *)v6 + 10),
        0LL,
        0LL);
      return (unsigned int)v13;
    }
    if ( (_DWORD)v5 == -1 || v171 < v8 )
    {
      LODWORD(v5) = v170;
      v8 = v171;
      v173 = v170;
      *((_DWORD *)v6 + 12) = v7;
    }
    ++v7;
  }
  if ( (_DWORD)v5 == v170 && *((_DWORD *)v6 + 13) )
  {
    WdLogSingleEntry1(1LL, 693LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(PrimVidPnTargetId != D3DDDI_ID_UNINITIALIZED) || (m_CloneGroupSize == 0)",
      693LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v15 = *(void **)v6;
  v210 = *(void **)v6;
  v171 = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v210, v5, 0LL, &v171);
  v17 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v17;
  }
  if ( (unsigned int)v171 < D3DKMDT_VOT_MIRACAST
    || (v168 = 1, (unsigned int)v171 > (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED)) )
  {
    v168 = 0;
  }
  v18 = !*((_QWORD *)v15 + 350)
     && (unsigned int)ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(*((ADAPTER_DISPLAY **)v15 + 349));
  v166 = v18;
  memset(&v214, 0, sizeof(v214));
  if ( DmmGetPreferredMonitorSourceModeOnTarget(*(void **)v6, v5, &v214) < 0 )
    memset(&v214, 0, sizeof(v214));
  v19 = *((_QWORD *)v6 + 2);
  v20 = *((unsigned int *)v6 + 10);
  v21 = *((_QWORD *)v6 + 1);
  v178 = 0LL;
  v172 = 0LL;
  v22 = *(__int64 (__fastcall **)(__int64, __int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v19 + 8);
  v206 = 0LL;
  v207 = 0LL;
  v208 = 0LL;
  v209 = 0;
  v205[0] = 0;
  v23 = v22(v21, v20, &v172, &v178);
  v24 = v23;
  if ( v23 < 0 )
  {
    WdLogSingleEntry1(2LL, v23);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireSourceModeSet. (Status = 0x%I64x)",
      v24,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v24;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v205,
    (__int64)v172,
    *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL),
    *((_QWORD *)v6 + 1));
  v25 = v206;
  v172 = 0LL;
  v184 = 0LL;
  v26 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v178 + 8);
  v185 = 0LL;
  v186 = 0LL;
  v187 = 0;
  v183[0] = 0;
  v27 = v26(v206, &v172);
  v24 = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry1(2LL, v27);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)",
      v24,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_187;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
    (__int64)v183,
    (__int64)v172,
    *(_QWORD *)(v178 + 32),
    v25);
  v28 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)v6 + 1));
  v30 = v184;
  *(_BYTE *)(v28 + 296) = 1;
  if ( !v30 )
  {
LABEL_175:
    v123 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v178 + 48))(v25, 0LL);
    v24 = v123;
    if ( v123 < 0 )
    {
      if ( v30 )
        v154 = *v30;
      else
        v154 = -1;
      WdLogSingleEntry3(2LL, v24, v25, v154);
      if ( v30 )
        v155 = *v30;
      else
        v155 = 0xFFFFFFFFLL;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, spVidPnSourceModeI"
                  "nfo.GetResource() = 0x%I64x, spVidPnSourceModeInfo.GetResource()->Id = 0x%I64x)",
        v24,
        v25,
        v155,
        0LL,
        0LL);
    }
    else
    {
      v124 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(*((_QWORD *)v6 + 1));
      v126 = v211;
      *(_BYTE *)(v124 + 296) = 0;
      v127 = *v126;
      if ( *v126 )
        goto LABEL_181;
      v128 = *((unsigned int *)v6 + 20);
      v127 = 0LL;
      if ( !(_DWORD)v128 )
        goto LABEL_181;
      v129 = 44 * v128;
      if ( !is_mul_ok(v128, 0x2CuLL) )
        v129 = -1LL;
      v127 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v129, 0x4B677844u, 256LL, v125);
      *v126 = v127;
      if ( v127 )
      {
LABEL_181:
        UniqueModes = MODE_UNION_LIST::GetUniqueModes(
                        (OBTAIN_MODES_ON_SOURCE *)((char *)v6 + 64),
                        *((unsigned int *)v6 + 20),
                        v127,
                        v212);
        if ( UniqueModes < 0 )
        {
          v156 = UniqueModes;
          WdLogSingleEntry1(1LL, UniqueModes);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"GetUniqueModesFromUnionList failed. (Status = 0x%I64x)",
            v156,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v132 = v204;
        if ( v204 )
        {
          if ( *v204 )
          {
            operator delete[](*v204);
            *v132 = 0LL;
          }
          v157 = *((unsigned int *)v6 + 30);
          if ( (_DWORD)v157 )
          {
            v158 = 44 * v157;
            if ( !is_mul_ok(v157, 0x2CuLL) )
              v158 = -1LL;
            v159 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v158, 0x4B677844u, 256LL, v131);
            *v132 = v159;
            if ( v159 )
            {
              v160 = MODE_UNION_LIST::GetUniqueModes(
                       (OBTAIN_MODES_ON_SOURCE *)((char *)v6 + 104),
                       *((unsigned int *)v6 + 30),
                       v159,
                       v213);
              if ( v160 < 0 )
              {
                v161 = v160;
                WdLogSingleEntry1(1LL, v160);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"GetUniqueModesFromInvalidModesUnionList failed. (Status = 0x%I64x)",
                  v161,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
            }
            else
            {
              WdLogSingleEntry1(6LL, 1313LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262145,
                -1,
                (__int64)L"Unable to allocate mode list memory for invalid modes.",
                1313LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
        }
        LODWORD(v24) = 0;
      }
      else
      {
        WdLogSingleEntry1(6LL, 1285LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Unable to allocate mode list memory.",
          1285LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v24) = -1073741801;
      }
    }
    goto LABEL_185;
  }
  while ( 1 )
  {
    v31 = v30[1];
    if ( ((v31 - 1) & 0xFFFFFFFC) != 0 || v31 == 2 || v30[2] != v30[4] || v30[3] != v30[5] )
      goto LABEL_49;
    LOBYTE(v29) = 1;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v178 + 40))(v25, *v30, v29);
    if ( v32 < 0 )
    {
      WdLogSingleEntry2(3LL, v32, *v30);
      goto LABEL_49;
    }
    v33 = *((_QWORD *)v6 + 2);
    v34 = *((_QWORD *)v6 + 1);
    v174 = 0LL;
    v172 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **, __int64 *))(v33 + 24);
    v198 = 0LL;
    v199 = 0LL;
    v200 = 0LL;
    v201 = 0;
    v197[0] = 0;
    v36 = v35(v34, (unsigned int)v5, &v172, &v174);
    v24 = v36;
    if ( v36 < 0 )
    {
      WdLogSingleEntry1(2LL, v36);
      v153 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireTargetModeSet. (Status = 0x%I64x)";
LABEL_277:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v153, v24, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_185;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v197,
      (__int64)v172,
      *(_QWORD *)(*((_QWORD *)v6 + 2) + 32LL),
      *((_QWORD *)v6 + 1));
    v172 = 0LL;
    v37 = 0LL;
    v189 = 0LL;
    v190 = 0LL;
    v38 = *(__int64 (__fastcall **)(__int64, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v174 + 8);
    v191 = 0LL;
    v192 = 0;
    v39 = v198;
    v188[0] = 0;
    v40 = v38(v198, &v172);
    v24 = v40;
    if ( v40 < 0 )
    {
      WdLogSingleEntry1(2LL, v40);
      v149 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireFirstModeInfo. (Status = 0x%I64x)";
LABEL_268:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v149, v24, 0LL, 0LL, 0LL, 0LL);
LABEL_269:
      v151 = v198;
      goto LABEL_270;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v188,
      (__int64)v172,
      *(_QWORD *)(v174 + 32),
      v39);
    v37 = v189;
    if ( v189 )
    {
      while ( 1 )
      {
        LOBYTE(v41) = 1;
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v174 + 48))(v39, *v37, v41);
        if ( v42 >= 0 )
          break;
        WdLogSingleEntry2(3LL, v42, *v37);
LABEL_41:
        v202 = 0LL;
        v57 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v174 + 16))(v39, v37, &v202);
        v24 = v57;
        if ( v57 < 0 )
        {
          WdLogSingleEntry1(2LL, v57);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)",
            v24,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_269;
        }
        DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
          (__int64)v188,
          v202,
          *(_QWORD *)(v174 + 32),
          v39);
        v37 = v189;
        v18 = v166;
        if ( !v189 )
          goto LABEL_43;
      }
      v164 = 0;
      v180 = 0;
      if ( v30[1] - 3 <= 1 || v18 )
      {
        v164 = 1;
      }
      else
      {
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, int *))(v174 + 64))(v39, *v37, &v164, &v180);
        v24 = v43;
        if ( v43 == -1071774920 )
        {
          v134 = WdLogNewEntry5_WdTrace(v45, v44);
          *(_QWORD *)(v134 + 24) = (unsigned int)v5;
          *(_QWORD *)(v134 + 32) = *((unsigned int *)v6 + 10);
        }
        else if ( v43 < 0 )
        {
          WdLogSingleEntry2(2LL, v43, v37);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to determine whether mode is supported by monitor. (Status = 0x%I64x, spVidPnTargetModeInfo."
                      "GetResource() = 0x%I64x)",
            v24,
            (__int64)v37,
            0LL,
            0LL,
            0LL);
          goto LABEL_269;
        }
      }
      v163 = 0;
      if ( v214.VideoSignalInfo.ActiveSize.cx == v30[2]
        && v214.VideoSignalInfo.ActiveSize.cy == v30[3]
        && (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, _QWORD, char *))(v174 + 80))(
             v37,
             &v214,
             v168,
             &v163) < 0 )
      {
        v163 = 0;
      }
      v46 = *((_QWORD *)v6 + 4);
      v47 = *((unsigned int *)v6 + 10);
      v48 = *((_QWORD *)v6 + 3);
      v172 = 0LL;
      v49 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT **))(v46 + 24))(
              v48,
              v47,
              (unsigned int)v5,
              &v172);
      v24 = v49;
      if ( v49 < 0 )
      {
        WdLogSingleEntry1(2LL, v49);
        v149 = L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)";
        goto LABEL_268;
      }
      v50 = v172[4];
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v6 + 4) + 32LL))(*((_QWORD *)v6 + 3));
      v51 = v37[5];
      v52 = 1;
      v165 = 1;
      if ( v30[2] == v51 && v30[3] == v37[6] )
      {
        if ( (*(_BYTE *)&v50 & 1) != 0 )
        {
LABEL_35:
          v53 = 0;
          v177 = 0;
          v54 = 0LL;
          v172 = 0LL;
          while ( 1 )
          {
            if ( !v52 )
            {
LABEL_39:
              v5 = v173;
              v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v6 + 4) + 72LL))(
                      *((_QWORD *)v6 + 3),
                      *((unsigned int *)v6 + 10),
                      v173,
                      0LL);
              v24 = v56;
              if ( v56 < 0 )
              {
                WdLogSingleEntry4(2LL, v56, *((unsigned int *)v6 + 10), *((_QWORD *)v6 + 3), v5);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Unable to unpin scaling. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, m_hVidPnTopology = 0x%"
                            "I64x, PrimVidPnTargetId = 0x%I64x)",
                  v24,
                  *((unsigned int *)v6 + 10),
                  *((_QWORD *)v6 + 3),
                  v5,
                  0LL);
                goto LABEL_255;
              }
              v30 = v184;
              v39 = v198;
              goto LABEL_41;
            }
            v55 = dword_1C0094648[v54];
            v171 = dword_1C0094648[v54];
            if ( BmlIsSupportedPathScaling((enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v171, v50) )
              break;
LABEL_38:
            v52 = v165;
            ++v53;
            ++v54;
            v177 = v53;
            v172 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v54;
            if ( v53 >= 5 )
              goto LABEL_39;
          }
          v60 = v173;
          LOBYTE(v162) = 1;
          v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*((_QWORD *)v6 + 4) + 64LL))(
                  *((_QWORD *)v6 + 3),
                  *((unsigned int *)v6 + 10),
                  v173,
                  (unsigned int)v55,
                  v162);
          v24 = v61;
          if ( v61 == -1071774970 )
          {
            WdLogSingleEntry4(1LL, (int)v55, *((unsigned int *)v6 + 10), v60, -1071774970LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262147,
              -1,
              (__int64)L"Failed to pin the reported-as-supported scaling mode 0x%I64x on the path (0x%I64x, 0x%I64x) becau"
                        "se of not supported by driver, returning 0x%I64x.",
              (int)v55,
              *((unsigned int *)v6 + 10),
              v60,
              -1071774970LL,
              0LL);
            LODWORD(v24) = -1071774970;
LABEL_257:
            v30 = v184;
          }
          else
          {
            if ( v61 >= 0 )
            {
              v62 = *((_QWORD *)v6 + 4);
              v63 = *((unsigned int *)v6 + 10);
              v64 = *((_QWORD *)v6 + 3);
              v175 = 0LL;
              v65 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(v62 + 24))(
                      v64,
                      v63,
                      (unsigned int)v60,
                      &v175);
              v24 = v65;
              if ( v65 < 0 )
              {
                WdLogSingleEntry1(2LL, v65);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAcquirePathInfo. (Status = 0x%I64x)",
                  v24,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
                v30 = v184;
                goto LABEL_269;
              }
              v66 = *(_DWORD *)(v175 + 24);
              (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v6 + 4) + 32LL))(*((_QWORD *)v6 + 3));
              v67 = 1LL;
              v167 = 1;
              while ( 2 )
              {
                switch ( (_DWORD)v67 )
                {
                  case 1:
                    v68 = (v66 & 1) == 0;
                    break;
                  case 2:
                    v68 = (v66 & 2) == 0;
                    break;
                  case 3:
                    v68 = (v66 & 4) == 0;
                    break;
                  case 4:
                    v68 = (v66 & 8) == 0;
                    break;
                  default:
LABEL_213:
                    WdLogSingleEntry1(1LL, v67);
LABEL_133:
                    LODWORD(v67) = v167;
LABEL_134:
                    v67 = (unsigned int)(v67 + 1);
                    v167 = v67;
                    if ( (int)v67 > 4 )
                    {
                      if ( *((_DWORD *)v6 + 13) <= 1u
                        || (v146 = v173,
                            v147 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v6 + 4) + 88LL))(
                                     *((_QWORD *)v6 + 3),
                                     *((unsigned int *)v6 + 10),
                                     v173,
                                     0LL),
                            v24 = v147,
                            v147 >= 0) )
                      {
                        v53 = v177;
                        v54 = (__int64)v172;
                        goto LABEL_38;
                      }
                      WdLogSingleEntry4(2LL, v147, *((_QWORD *)v6 + 3), *((unsigned int *)v6 + 10), v146);
                      DxgkLogInternalTriageEvent(
                        0LL,
                        0x40000,
                        -1,
                        (__int64)L"Unable to unpin rotation. (Status = 0x%I64x, m_hVidPnTopology = 0x%I64x, m_VidPnSourceI"
                                  "d = 0x%I64x, PrimVidPnTargetId = 0x%I64x)",
                        v24,
                        *((_QWORD *)v6 + 3),
                        *((unsigned int *)v6 + 10),
                        v146,
                        0LL);
                      goto LABEL_255;
                    }
                    continue;
                }
                break;
              }
              if ( v68 )
                goto LABEL_134;
              v69 = v67 - 1;
              v70 = v67;
              if ( (unsigned int)(v67 - 1) <= 0xF )
              {
                v67 = v167;
                v70 = v69 / 4 + 1;
              }
              if ( v70 == 1 )
              {
                v71 = v66 >> 4;
              }
              else
              {
                v135 = v70 - 2;
                if ( v135 )
                {
                  v136 = v135 - 1;
                  if ( v136 )
                  {
                    if ( v136 != 1 )
                      goto LABEL_213;
                    v71 = v66 >> 7;
                  }
                  else
                  {
                    v71 = v66 >> 6;
                  }
                }
                else
                {
                  v71 = v66 >> 5;
                }
              }
              if ( (v71 & 1) == 0 )
                goto LABEL_134;
              *(_QWORD *)&v179.Width = 0LL;
              *(_QWORD *)&v179.Format = 0LL;
              *(_OWORD *)&v179.ScanLineOrdering = 0LL;
              v72 = *((_QWORD *)v210 + 350) || !*(_BYTE *)(*((_QWORD *)v210 + 349) + 289LL) || (_DWORD)v67 == 1;
              if ( v163 && v171 == D3DKMDT_VOT_SVIDEO )
                v73 = 64;
              else
                v73 = 0;
              v193 = v184[7];
              v179.Format = v193;
              v194 = v184[4];
              v179.Width = v194;
              v74 = v37[14];
              v196 = v184[5];
              v179.Height = v196;
              v181 = (int)(v74 << 29) >> 29;
              v179.ScanLineOrdering = v181;
              v176 = *(_DWORD *)&v179.Flags & 0xFFFFFFFC | v164 & 1;
              *(_DWORD *)&v179.Flags = v176;
              if ( v72 )
                v75 = 128;
              else
                v75 = 0;
              v76 = v75 | v73 & 0x17F | v180 & 0xF;
              v179.RefreshRate = *(D3DDDI_RATIONAL *)(v37 + 7);
              v77 = HIDWORD(*(_QWORD *)&v179.RefreshRate);
              v78 = HIDWORD(*(_QWORD *)&v179.RefreshRate);
              v79 = HIDWORD(*(_QWORD *)&v179.RefreshRate);
              v170 = v76;
              *((_DWORD *)&v179.Flags + 1) = v76;
              v80 = (v74 >> 3) & 0x3F;
              if ( v80 )
              {
                Denominator = v80 * v179.RefreshRate.Denominator;
                v179.RefreshRate.Denominator = Denominator;
                LODWORD(v77) = Denominator;
                LODWORD(v78) = Denominator;
                LODWORD(v79) = Denominator;
              }
              else
              {
                Denominator = v179.RefreshRate.Denominator;
              }
              if ( !(_DWORD)v77 )
              {
                WdLogSingleEntry0(1LL);
                LODWORD(v78) = v79;
              }
              LOBYTE(v169) = 0;
              v82 = (unsigned int)v78;
              if ( (_DWORD)v78 )
              {
                v83 = v179.RefreshRate.Numerator / (unsigned __int64)(unsigned int)v78 + 1;
                if ( v179.RefreshRate.Numerator % (unsigned __int64)(unsigned int)v78 < (unsigned int)v78
                                                                                      - v179.RefreshRate.Numerator
                                                                                      % (unsigned __int64)(unsigned int)v78 )
                  v83 = v179.RefreshRate.Numerator / (unsigned __int64)(unsigned int)v78;
                v175 = v83;
              }
              else
              {
                v175 = -1LL;
              }
              v84 = (unsigned int *)&unk_1C008BCC0;
              v85 = 0;
              while ( 1 )
              {
                if ( Denominator )
                {
                  v86 = v84[1];
                  if ( v86 )
                  {
                    v87 = *v84;
                    v88 = v86;
                    v89 = 99950 * v87;
                    v90 = 100000 * (unsigned __int64)v179.RefreshRate.Numerator / v82;
                    v91 = v88 == 1001 ? v89 / 0x3E9 : v89 / v88;
                    if ( v90 >= v91 )
                    {
                      v92 = 100050 * v87;
                      v93 = v88 == 1001 ? v92 / 0x3E9 : v92 / v88;
                      if ( v90 <= v93 )
                        break;
                    }
                  }
                }
                ++v85;
                v84 += 2;
                if ( v85 >= 6 )
                {
                  v94 = v175;
                  goto LABEL_92;
                }
              }
              if ( v179.RefreshRate.Numerator / Denominator != (_DWORD)v175 )
                LOBYTE(v169) = 1;
              v94 = v179.RefreshRate.Numerator / Denominator;
              v175 = v179.RefreshRate.Numerator / Denominator;
LABEL_92:
              if ( (unsigned int)(v181 - 2) <= 1 )
              {
                v94 >>= 1;
                v175 = v94;
              }
              v95 = v171;
              v179.IntegerRefreshRate = v94;
              switch ( v171 )
              {
                case D3DKMDT_VOT_SVIDEO:
                case D3DKMDT_VOT_DVI:
                case D3DKMDT_VOT_HDMI:
                case D3DKMDT_VOT_BNC|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0:
                  goto LABEL_95;
                case D3DKMDT_VOT_COMPOSITE_VIDEO:
                  v96 = 2;
                  v179.DisplayFixedOutput = 2;
                  break;
                case D3DKMDT_VOT_COMPONENT_VIDEO:
                  v96 = 1;
                  v179.DisplayFixedOutput = 1;
                  break;
                default:
                  WdLogSingleEntry1(3LL, v171);
                  if ( v95 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED|D3DKMDT_VOT_UDI_EXTERNAL|0xE0) )
                  {
                    WdLogSingleEntry1(1LL, 158LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"DmmScaling != D3DKMDT_VPPS_PREFERRED",
                      158LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
LABEL_95:
                  v96 = 0;
                  v179.DisplayFixedOutput = 0;
                  break;
              }
              v97 = v167;
              switch ( v167 )
              {
                case 1u:
                  v98 = v184;
                  goto LABEL_156;
                case 2u:
                  v98 = v184;
                  v99 = D3DDDI_ROTATION_90;
                  break;
                case 3u:
                  v98 = v184;
                  v99 = D3DDDI_ROTATION_180;
                  break;
                case 4u:
                  v98 = v184;
                  v99 = D3DDDI_ROTATION_270;
                  break;
                default:
                  v98 = v184;
                  WdLogSingleEntry3(3LL, v167, *v184, *v189);
LABEL_156:
                  v99 = D3DDDI_ROTATION_IDENTITY;
                  break;
              }
              v100 = v98[1];
              v179.DisplayOrientation = v99;
              v101 = v100 - 3;
              if ( v101 )
              {
                if ( v101 != 1 )
                  goto LABEL_103;
                v137 = v170 | 0x20;
              }
              else
              {
                v137 = v170;
              }
              v170 = v137 | 0x10;
              *((_DWORD *)&v179.Flags + 1) = v137 | 0x10;
              v176 |= 1u;
              *(_DWORD *)&v179.Flags = v176;
LABEL_103:
              v6 = v182;
              if ( *((_DWORD *)v182 + 13) > 1u )
              {
                LOBYTE(v162) = 0;
                v138 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(*((_QWORD *)v182 + 4) + 80LL))(
                         *((_QWORD *)v182 + 3),
                         *((unsigned int *)v182 + 10),
                         v173,
                         v97,
                         v162);
                v24 = v138;
                if ( v138 == -1071774970 )
                {
                  v148 = v173;
                  WdLogSingleEntry4(1LL, v97, *((unsigned int *)v6 + 10), v173, -1071774970LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262147,
                    -1,
                    (__int64)L"Failed to pin the reported-as-supported rotation mode 0x%I64x on the path (0x%I64x, 0x%I64x"
                              ") because of not supported by driver, returning 0x%I64x.",
                    v97,
                    *((unsigned int *)v6 + 10),
                    v148,
                    -1071774970LL,
                    0LL);
                  v37 = v189;
                  LODWORD(v24) = -1071774970;
                  v30 = v184;
                  goto LABEL_269;
                }
                if ( v138 < 0 )
                {
                  v139 = v173;
                  WdLogSingleEntry5(2LL, v138, *((unsigned int *)v6 + 10), v173, *((_QWORD *)v6 + 3), v97);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Unable to set rotation on the path. (Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPn"
                              "TargetId = 0x%I64x, m_hVidPnTopology = 0x%I64x, PathRotation = 0x%I64x)",
                    v24,
                    *((unsigned int *)v6 + 10),
                    v139,
                    *((_QWORD *)v6 + 3),
                    v97);
                  goto LABEL_254;
                }
              }
              v102 = v193;
              if ( v193 != D3DDDIFMT_A8R8G8B8 && *((_BYTE *)v6 + 44)
                || (unsigned int)v193 <= D3DDDIFMT_P8 && (v120 = 0x20003900000LL, _bittest64(&v120, v193)) )
              {
                if ( v204 )
                {
                  v140 = MODE_UNION_LIST::AddUniqueMode((OBTAIN_MODES_ON_SOURCE *)((char *)v6 + 104), &v179);
                  v37 = v189;
                  LODWORD(v24) = v140;
                  if ( v140 < 0 )
                    goto LABEL_257;
                  goto LABEL_133;
                }
LABEL_245:
                v37 = v189;
                goto LABEL_133;
              }
              LODWORD(v103) = *((_DWORD *)v6 + 20);
              v104 = (OBTAIN_MODES_ON_SOURCE *)((char *)v6 + 64);
              if ( !(_DWORD)v103
                || (int)CompareDisplayMode(
                          &v179,
                          *((_QWORD *)v104 + 1)
                        + 44LL * *(unsigned int *)(*((_QWORD *)v104 + 4) + 4LL * (unsigned int)(v103 - 1)),
                          v84) > 0 )
              {
                goto LABEL_123;
              }
              v107 = (unsigned int)(v103 - 1);
              v108 = 0LL;
              v103 = 0LL;
              v109 = 0;
              while ( (int)v108 <= (int)v107 )
              {
                v103 = (unsigned int)(((int)v107 + (int)v108) >> 1);
                v110 = v194;
                v111 = (int *)(v106 + 44LL * *(unsigned int *)(v105 + 4LL * (int)v103));
                v112 = *v111;
                if ( v194 == *v111 )
                {
                  v112 = v111[1];
                  v110 = v196;
                  if ( v196 == v112 )
                  {
                    v112 = v111[2];
                    if ( v102 == v112 )
                    {
                      v112 = ((unsigned int)v111[10] >> 4) & 1;
                      v110 = (v170 >> 4) & 1;
                      if ( v110 == v112 )
                      {
                        v110 = v175;
                        v112 = v111[3];
                        if ( (_DWORD)v175 == v112 )
                        {
                          v112 = v111[6];
                          v110 = v181;
                          if ( v181 == v112 )
                          {
                            v112 = v111[8];
                            if ( v96 == v112 )
                            {
                              v112 = v111[7];
                              if ( v99 == v112 )
                                goto LABEL_157;
                              v110 = v99;
                            }
                            else
                            {
                              v110 = v96;
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v110 = v102;
                    }
                  }
                }
                v109 = v110 - v112;
                if ( !v109 )
                  break;
                if ( v109 < 0 )
                  v107 = (unsigned int)(v103 - 1);
                else
                  v108 = (unsigned int)(v103 + 1);
              }
              if ( v109 > 0 )
                v103 = (unsigned int)(v103 + 1);
              if ( v109 )
                v113 = 0LL;
              else
LABEL_157:
                v113 = v106 + 44LL * *(unsigned int *)(v105 + 4 * v103);
              if ( v113 )
              {
                if ( (*(_DWORD *)(v113 + 36) & 2) != 0 )
                {
                  MODE_UNION_LIST::RemoveMode(v104, v103);
                  MODE_UNION_LIST::AddMode(v104, &v179, v103);
                }
                else
                {
                  UpgradeDispModeFlags(v113, &v179, v107, v108);
                }
              }
              else
              {
LABEL_123:
                LODWORD(v24) = MODE_UNION_LIST::AddMode(v104, &v179, v103);
                if ( (int)v24 < 0 )
                  goto LABEL_254;
              }
              if ( (_BYTE)v169 )
              {
                v179.IntegerRefreshRate = v175 + 1;
                *(_DWORD *)&v179.Flags = v176 | 2;
                LODWORD(v24) = MODE_UNION_LIST::AddUniqueMode(v104, &v179);
                if ( (int)v24 < 0 )
                  goto LABEL_254;
              }
              v37 = v189;
              v114 = *(struct _D3DDDI_RATIONAL *)(v189 + 7);
              v195 = v114;
              v115 = HIDWORD(*(unsigned __int64 *)&v114);
              v116 = HIDWORD(*(unsigned __int64 *)&v114);
              v117 = HIDWORD(*(unsigned __int64 *)&v114);
              v118 = (v189[14] >> 3) & 0x3F;
              if ( v118 )
              {
                v195.Denominator = v118 * v114.Denominator;
                LODWORD(v115) = v118 * v114.Denominator;
                v116 = v118 * v114.Denominator;
                v117 = v116;
              }
              v119 = v189[17];
              if ( v119 == -2 )
              {
                if ( v189[18] != -2 )
                  goto LABEL_235;
              }
              else
              {
                LODWORD(v115) = v117;
                if ( v119 == -1 )
                {
                  LODWORD(v115) = v116;
                  if ( v189[18] == -1 )
                    goto LABEL_130;
                }
LABEL_235:
                if ( v119 != v195.Numerator || v189[18] != (_DWORD)v115 )
                {
                  v141 = 0;
                  v142 = &unk_1C00CA18C;
                  v143 = v170;
                  do
                  {
                    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
                            &v195,
                            (const struct _D3DDDI_RATIONAL *)&unk_1C00CA188 + v141,
                            0)
                      && (*(int (__fastcall **)(__int64, _QWORD, char *, _QWORD))(v174 + 88))(
                           v198,
                           *v189,
                           (char *)&unk_1C00CA188 + 8 * v141,
                           (unsigned int)(v144 + 1)) >= 0 )
                    {
                      v179.RefreshRate = *(D3DDDI_RATIONAL *)(v142 - 1);
                      v179.IntegerRefreshRate = v179.RefreshRate.Numerator / *v142;
                      if ( !MODE_UNION_LIST::FindMode(v104, &v179) )
                      {
                        *((_DWORD *)&v179.Flags + 1) = v143 | 0x100;
                        LODWORD(v24) = OBTAIN_MODES_ON_SOURCE::_AddMode(v182, &v179, v145, 0);
                        if ( (int)v24 < 0 )
                          goto LABEL_254;
                        v143 = *((_DWORD *)&v179.Flags + 1);
                      }
                    }
                    ++v141;
                    v142 += 2;
                  }
                  while ( v141 < 6 );
                  v6 = v182;
                  goto LABEL_245;
                }
              }
LABEL_130:
              if ( g_OSTestSigningEnabled )
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_VirtualRefreshRateTest__private_reporting,
                  0x1A59657u,
                  v117,
                  v116,
                  (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
                  0);
              v6 = v182;
              goto LABEL_133;
            }
            WdLogSingleEntry5(2LL, v61, *((unsigned int *)v6 + 10), v60, *((_QWORD *)v6 + 3), v55);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Unable to set scaling on the path. ( Status = 0x%I64x, m_VidPnSourceId = 0x%I64x, PrimVidPnTarget"
                        "Id = 0x%I64x, m_hVidPnTopology = 0x%I64x, PathScaling = 0x%I64x)",
              v24,
              *((unsigned int *)v6 + 10),
              v60,
              *((_QWORD *)v6 + 3),
              v55);
LABEL_254:
            v37 = v189;
LABEL_255:
            v30 = v184;
          }
          goto LABEL_269;
        }
      }
      else if ( (*(_BYTE *)&v50 & 0x1E) != 0 )
      {
        goto LABEL_35;
      }
      v52 = 0;
      v165 = 0;
      goto LABEL_35;
    }
LABEL_43:
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v174 + 56))(v39, 0LL);
    v24 = v58;
    if ( v58 < 0 )
      break;
    if ( v188[0] )
      v190(v191, v37);
    if ( v197[0] )
      v199(v200, v39);
    v25 = v206;
LABEL_49:
    v203 = 0LL;
    v59 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v178 + 16))(v25, v30, &v203);
    v24 = v59;
    if ( v59 < 0 )
    {
      WdLogSingleEntry1(2LL, v59);
      v153 = L"Failed call to DXGDMM_VIDPNSOURCEMODESET_INTERFACE::pfnAcquireNextModeInfo. (Status = 0x%I64x)";
      goto LABEL_277;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v183,
      v203,
      *(_QWORD *)(v178 + 32),
      v25);
    v30 = v184;
    if ( !v184 )
      goto LABEL_175;
    v18 = v166;
  }
  if ( v37 )
    v150 = *v37;
  else
    v150 = -1;
  v151 = v198;
  WdLogSingleEntry3(2LL, v24, v198, v150);
  if ( v37 )
    v152 = *v37;
  else
    v152 = 0xFFFFFFFFLL;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnpinMode. (Status = 0x%I64x, shVidPnTargetModeSet.G"
              "etResource() = 0x%I64x, spVidPnTargetModeInfo.GetResource()->Id = 0x%I64x)",
    v24,
    v151,
    v152,
    0LL,
    0LL);
LABEL_270:
  if ( v188[0] )
    v190(v191, v37);
  if ( v197[0] )
    v199(v200, v151);
  v25 = v206;
LABEL_185:
  if ( v183[0] )
    v185(v186, v30);
LABEL_187:
  if ( v205[0] )
    v207(v208, v25);
  return (unsigned int)v24;
}
