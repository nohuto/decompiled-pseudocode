/*
 * XREFs of ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C0138800
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C013DB84 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C02EC678 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007EE0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A84C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A86C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A8B4 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000B424 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001A2FC (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001ACFC (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C0043D58 (-GetDisplayOnlyDriverUseRawModes@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z @ 0x1C005DC2C (-D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@0@Z.c)
 *     ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C005DC54 (-GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0121C9C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01242A0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0125010 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C012A2E8 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0135E04 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     BmlIsSecondaryClonePath @ 0x1C01390FC (BmlIsSecondaryClonePath.c)
 *     BmlGetNextBestSourceMode @ 0x1C01393E0 (BmlGetNextBestSourceMode.c)
 *     ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C0139A40 (-BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z.c)
 *     BmlGetNextBestTargetMode @ 0x1C013B14C (BmlGetNextBestTargetMode.c)
 *     BmlFillPreferredMonitorMode @ 0x1C013BEB8 (BmlFillPreferredMonitorMode.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C014A2E0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 *     ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02DF344 (-GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall BmlPreparePathOrderAndVidPn(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        int a6,
        int a7)
{
  __int64 v9; // r14
  __int16 v10; // r13
  unsigned __int8 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  VIDPN_MGR *v16; // rdi
  VIDPN_MGR *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int8 *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int8 v25; // al
  unsigned int v26; // r11d
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdi
  unsigned int v35; // r13d
  __int64 v36; // rcx
  unsigned int v37; // eax
  struct DMMVIDPNTOPOLOGY *v38; // r12
  unsigned int v39; // ebx
  unsigned int v40; // r14d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v41; // ecx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  unsigned int v48; // r13d
  __int64 v49; // r12
  __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  struct DMMVIDPNPRESENTPATH *Path; // r14
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _DWORD *v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  __int64 v71; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING AdapterDefaultScaling; // eax
  VIDPN_MGR *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rdx
  _DWORD *v76; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v77; // ebx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  unsigned int v81; // r10d
  __int64 v82; // r10
  __int64 v83; // r10
  int v84; // eax
  unsigned int v85; // r12d
  __int64 v86; // rbx
  char IsSecondaryClonePath; // al
  __int64 v88; // r8
  unsigned int v89; // esi
  unsigned int v90; // r14d
  unsigned int v91; // r9d
  __int64 v92; // r10
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned __int64 v95; // rbx
  unsigned int v96; // eax
  unsigned int v97; // r13d
  unsigned int v98; // r14d
  __int64 v99; // rsi
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r12
  __int64 v104; // rcx
  struct DMMVIDPNSOURCEMODESET *v105; // r12
  __int64 v106; // rcx
  int v107; // eax
  DMMVIDPNPRESENTPATH *v108; // r13
  __int64 v109; // rbx
  __int64 v110; // rax
  struct DMMVIDPNTARGETMODESET *v111; // rbx
  __int64 v112; // rcx
  __int16 v113; // ax
  __int64 v115; // rax
  __int64 v116; // r14
  __int64 v117; // rcx
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rbx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rbx
  __int64 v131; // rax
  __int64 v132; // rax
  int DisplayOnlyDriverUseRawModes; // eax
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rax
  BOOL v139; // eax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // r13
  __int64 v144; // rax
  __int64 v145; // rax
  int **SessionViewOwner; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  _QWORD *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  const struct DMMVIDPNPRESENTPATH *PathFromTargetInClientVidPn; // r13
  __int64 v164; // rbx
  __int64 v165; // r14
  __int64 v166; // rax
  __int64 v167; // r14
  __int64 v168; // r12
  __int64 v169; // rax
  struct _FAST_MUTEX *v170; // rcx
  char IsVirtualModeSuportDisabled; // r13
  __int64 v172; // rax
  int MonitorInstance; // eax
  __int64 v174; // rax
  __int64 v175; // rax
  struct DXGMONITOR *v176; // r14
  __int64 v177; // rax
  __int64 v178; // rax
  bool v179; // al
  int v180; // r14d
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 *v183; // rbx
  __int64 v184; // rdx
  int v185; // ecx
  int v186; // eax
  __int64 v187; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v188; // ecx
  __int64 v189; // rdx
  __int64 v190; // rcx
  _QWORD *v191; // rax
  _QWORD *v192; // rax
  __int64 v193; // r12
  __int64 v194; // rax
  __int64 v195; // rax
  unsigned int v196; // r8d
  bool v197; // cf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v198; // edx
  __int64 v199; // rax
  __int64 v200; // rax
  _QWORD *v201; // rax
  _QWORD *v202; // rax
  __int64 v203; // rdx
  __int64 *v204; // rcx
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  _QWORD *v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rax
  unsigned __int8 *v211; // r8
  unsigned int i; // r9d
  __int64 v213; // r10
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 v216; // r8
  _QWORD *v217; // rax
  unsigned int v218; // eax
  __int64 v219; // r10
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  _QWORD *v223; // rax
  unsigned int v224; // eax
  __int64 v225; // r10
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  _QWORD *v229; // rax
  bool v230; // [rsp+40h] [rbp-71h]
  unsigned int v231; // [rsp+44h] [rbp-6Dh]
  unsigned int v232; // [rsp+44h] [rbp-6Dh]
  __int64 v233; // [rsp+50h] [rbp-61h]
  unsigned __int64 v234; // [rsp+50h] [rbp-61h]
  VIDPN_MGR *v235; // [rsp+58h] [rbp-59h]
  const struct DMMVIDPNPRESENTPATH *v236; // [rsp+60h] [rbp-51h]
  unsigned int v237; // [rsp+68h] [rbp-49h] BYREF
  unsigned int v238; // [rsp+6Ch] [rbp-45h] BYREF
  unsigned int v239; // [rsp+70h] [rbp-41h] BYREF
  unsigned int v240; // [rsp+74h] [rbp-3Dh]
  unsigned int v241; // [rsp+78h] [rbp-39h] BYREF
  __int64 v242; // [rsp+80h] [rbp-31h]
  DMMVIDPNTOPOLOGY *v243; // [rsp+88h] [rbp-29h]
  struct DXGMONITOR *v244; // [rsp+90h] [rbp-21h] BYREF
  __int64 v245; // [rsp+98h] [rbp-19h] BYREF
  struct DMMVIDPNTARGETMODESET *v246; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v247[9]; // [rsp+A8h] [rbp-9h] BYREF
  char v248; // [rsp+100h] [rbp+4Fh]
  struct DMMVIDPNPRESENTPATH *v249; // [rsp+100h] [rbp+4Fh]
  __int64 v251; // [rsp+110h] [rbp+5Fh]
  bool v252; // [rsp+110h] [rbp+5Fh]
  unsigned int v253; // [rsp+110h] [rbp+5Fh]

  v9 = a2;
  v10 = a4;
  v11 = (unsigned __int8 *)operator new[](104LL * *(unsigned __int16 *)(a3 + 20) + 16, 0x63644356u, PagedPool);
  *a1 = (__int64)v11;
  if ( !v11 )
  {
    v120 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
    *(_QWORD *)(v120 + 24) = a3;
    *(_QWORD *)(v120 + 32) = *(unsigned __int16 *)(a3 + 20);
    WdLogEvent5_WdLowResource(v120);
    return 3221225626LL;
  }
  v16 = *(VIDPN_MGR **)(v9 + 48);
  v235 = v16;
  v17 = v16;
  v18 = *((_QWORD *)v16 + 1);
  if ( !v18 )
  {
    v121 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v121);
    v18 = *((_QWORD *)v16 + 1);
    v17 = *(VIDPN_MGR **)(v9 + 48);
  }
  v19 = *(_QWORD **)(v18 + 16);
  v20 = v19[337];
  if ( *(_BYTE *)(v20 + 249) && *(_BYTE *)(v20 + 250)
    || (v248 = 0, v19 = *(_QWORD **)(v19[27] + 64LL), *(_DWORD *)(v19[5] + 28LL) >= 0x4003u) )
  {
    v248 = 1;
  }
  v21 = *((_QWORD *)v17 + 1);
  if ( !v21 )
  {
    v122 = WdLogNewEntry5_WdAssertion(v19, v12);
    WdLogEvent5_WdAssertion(v122);
    v21 = *((_QWORD *)v17 + 1);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v21 + 16) + 2704LL) )
  {
    v22 = (unsigned __int8 *)*a1;
    *(_DWORD *)(*a1 + 8) &= 0xFFFFFFF2;
  }
  else
  {
    v123 = *(_QWORD *)(v9 + 48);
    v124 = *(_QWORD *)(v123 + 8);
    if ( !v124 )
    {
      v125 = WdLogNewEntry5_WdAssertion(v19, v12);
      WdLogEvent5_WdAssertion(v125);
      v124 = *(_QWORD *)(v123 + 8);
    }
    v126 = *(_QWORD *)(*(_QWORD *)(v124 + 16) + 2696LL);
    if ( *(_QWORD *)(*(_QWORD *)(v126 + 16) + 2704LL) )
    {
      v127 = WdLogNewEntry5_WdAssertion(v19, v12);
      *(_QWORD *)(v127 + 24) = 6640LL;
      WdLogEvent5_WdAssertion(v127);
    }
    v128 = *a1;
    v129 = (*(_DWORD *)(*a1 + 8) ^ *(_DWORD *)(v126 + 376)) & 1;
    *(_DWORD *)(*a1 + 8) ^= v129;
    v130 = *(_QWORD *)(v9 + 48);
    v131 = *(_QWORD *)(v130 + 8);
    if ( !v131 )
    {
      v132 = WdLogNewEntry5_WdAssertion(v129, v128);
      WdLogEvent5_WdAssertion(v132);
      v131 = *(_QWORD *)(v130 + 8);
    }
    DisplayOnlyDriverUseRawModes = ADAPTER_DISPLAY::GetDisplayOnlyDriverUseRawModes(
                                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(v131 + 16) + 2696LL),
                                     v128);
    v134 = *a1;
    v135 = DisplayOnlyDriverUseRawModes != 0 ? 4 : 0;
    *(_DWORD *)(*a1 + 8) = v135 | *(_DWORD *)(*a1 + 8) & 0xFFFFFFFB;
    v136 = *(_QWORD *)(v9 + 48);
    v137 = *(_QWORD *)(v136 + 8);
    if ( !v137 )
    {
      v138 = WdLogNewEntry5_WdAssertion(v134, v135);
      WdLogEvent5_WdAssertion(v138);
      v137 = *(_QWORD *)(v136 + 8);
    }
    v139 = ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(
             *(DXGADAPTER ***)(*(_QWORD *)(v137 + 16) + 2696LL),
             v135);
    v22 = (unsigned __int8 *)*a1;
    *(_DWORD *)(*a1 + 8) = (v139 ? 8 : 0) | *(_DWORD *)(*a1 + 8) & 0xFFFFFFF7;
  }
  v23 = *(_QWORD *)(v9 + 48);
  v24 = *(_QWORD *)(v23 + 8);
  if ( !v24 )
  {
    v140 = WdLogNewEntry5_WdAssertion(0LL, v12);
    WdLogEvent5_WdAssertion(v140);
    v24 = *(_QWORD *)(v23 + 8);
    v22 = (unsigned __int8 *)*a1;
  }
  v25 = ADAPTER_DISPLAY::ForceIHVScaling(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 16) + 2696LL));
  v27 = v26;
  v28 = 0x4000000000000LL;
  *((_DWORD *)v22 + 2) = *((_DWORD *)v22 + 2) & 0xD | (v25 != 0 ? 2 : 0);
  *v22 = v26;
  *((_DWORD *)v22 + 1) = a7;
  if ( (unsigned __int16)v26 < *(_WORD *)(a3 + 20) )
  {
    while ( 1 )
    {
      v29 = 272LL * v27;
      v30 = v29 + a3 + 48;
      if ( (*(_QWORD *)v30 & 0x4000000000000LL) == 0 )
      {
        v141 = WdLogNewEntry5_WdAssertion(v29, 0x4000000000000LL);
        WdLogEvent5_WdAssertion(v141);
        v26 = 0;
      }
      v31 = *((_QWORD *)v235 + 1);
      if ( !v31 )
      {
        v142 = WdLogNewEntry5_WdAssertion(v29, v28);
        WdLogEvent5_WdAssertion(v142);
        v31 = *((_QWORD *)v235 + 1);
        v26 = 0;
      }
      v32 = *(_QWORD *)(v31 + 16);
      if ( *(_DWORD *)(v30 + 16) == *(_DWORD *)(v32 + 316) && *(_DWORD *)(v30 + 20) == *(_DWORD *)(v32 + 320) )
      {
        if ( (*(_QWORD *)v30 & 0x700000000000LL) != 0x700000000000LL )
        {
          v148 = WdLogNewEntry5_WdError(v32, v28);
          *(_QWORD *)(v148 + 24) = v27;
          *(_QWORD *)(v148 + 32) = a3;
          WdLogEvent5_WdError(v148);
          return 3221225485LL;
        }
        v33 = *a1;
        v34 = 104LL * *(unsigned __int8 *)*a1;
        *(_QWORD *)(v34 + v33 + 52) = 0LL;
        *(_WORD *)(v34 + v33 + 70) = a5;
        *(_QWORD *)(v34 + v33 + 16) = v30;
        *(_WORD *)(v34 + v33 + 32) = v27;
        *(_WORD *)(v34 + v33 + 64) = v26;
        *(_WORD *)(v34 + v33 + 68) = v26;
        *(_WORD *)(v34 + v33 + 66) = v10;
        *(_DWORD *)(v34 + v33 + 60) = v26;
        *(_DWORD *)(v34 + v33 + 116) = v26;
        *(_OWORD *)(v34 + v33 + 72) = 0LL;
        *(_OWORD *)(v34 + v33 + 88) = 0LL;
        *(_DWORD *)(v34 + v33 + 104) = 0;
        if ( a6 == 2 )
        {
          v143 = *(_QWORD *)(a2 + 48);
          v144 = *(_QWORD *)(v143 + 8);
          if ( !v144 )
          {
            v145 = WdLogNewEntry5_WdAssertion(v32, v28);
            WdLogEvent5_WdAssertion(v145);
            v144 = *(_QWORD *)(v143 + 8);
          }
          SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(
                               *(ADAPTER_DISPLAY **)(*(_QWORD *)(v144 + 16) + 2696LL),
                               *(unsigned int *)(v30 + 24));
          v26 = 0;
          if ( SessionViewOwner && *((_DWORD *)SessionViewOwner + 10) > 1u )
            *(_DWORD *)(v34 + v33 + 116) |= 2u;
        }
        else
        {
          v35 = v26;
          if ( (unsigned __int16)v26 < *(_WORD *)(a3 + 20) )
          {
            v28 = 0x4000000000000LL;
            do
            {
              v36 = 272LL * v35;
              v251 = v36;
              if ( (*(_QWORD *)(v36 + a3 + 48) & 0x4000000000000LL) == 0 )
              {
                v147 = WdLogNewEntry5_WdAssertion(v36, 0x4000000000000LL);
                WdLogEvent5_WdAssertion(v147);
                v36 = v251;
                v28 = 0x4000000000000LL;
              }
              if ( v35 != v27 && *(_DWORD *)(v36 + a3 + 232) == *(_DWORD *)(v30 + 184) )
                *(_DWORD *)(v34 + v33 + 116) |= 2u;
              ++v35;
            }
            while ( v35 < *(unsigned __int16 *)(a3 + 20) );
            v26 = 0;
          }
        }
        v10 = a4;
        ++*(_BYTE *)*a1;
      }
      if ( ++v27 >= *(unsigned __int16 *)(a3 + 20) )
        break;
      v28 = 0x4000000000000LL;
    }
    v22 = (unsigned __int8 *)*a1;
    v9 = a2;
  }
  LOBYTE(v37) = *v22;
  v38 = (struct DMMVIDPNTOPOLOGY *)(v9 + 96);
  v243 = (DMMVIDPNTOPOLOGY *)(v9 + 96);
  v39 = v26;
  if ( (_BYTE)v37 )
  {
    do
    {
      v40 = v39 + 1;
      v41 = v39 + 1;
      if ( (int)(v39 + 1) > 32 )
      {
        v149 = WdLogNewEntry5_WdAssertion(v40, v28);
        *(_QWORD *)(v149 + 24) = *a1;
        *(_QWORD *)(v149 + 32) = v39;
        WdLogEvent5_WdAssertion(v149);
        v22 = (unsigned __int8 *)*a1;
        v41 = 32;
      }
      v42 = 104LL * v39;
      v43 = VIDPN_MGR::AddPathToVidPnTopology(
              v235,
              v38,
              *(_DWORD *)(*(_QWORD *)&v22[v42 + 16] + 24LL),
              *(_DWORD *)(*(_QWORD *)&v22[v42 + 16] + 28LL),
              v41,
              *(_WORD *)&v22[v42 + 32],
              1u,
              D3DKMDT_MCC_ENFORCE);
      v26 = 0;
      v47 = v43;
      if ( v43 < 0 )
      {
        v150 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v28, v45, v46);
        v150[3] = *(unsigned int *)(*(_QWORD *)&v22[v42 + 16] + 24LL);
        v150[4] = *(unsigned int *)(*(_QWORD *)&v22[v42 + 16] + 28LL);
        v150[5] = v38;
        v150[6] = v47;
        return (unsigned int)v47;
      }
      v22 = (unsigned __int8 *)*a1;
      v39 = v40;
      v37 = *(unsigned __int8 *)*a1;
    }
    while ( v40 < v37 );
  }
  v231 = v26;
  v252 = v26;
  v48 = v26;
  v230 = v26;
  if ( (_BYTE)v37 )
  {
    while ( 1 )
    {
      v49 = v48;
      v50 = 104LL * v48;
      v233 = v48;
      v51 = *(_QWORD *)&v22[v50 + 16];
      if ( (*(_QWORD *)v51 & 0x4000000000000LL) == 0 )
      {
        v151 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v28);
        WdLogEvent5_WdAssertion(v151);
        v51 = *(_QWORD *)&v22[v50 + 16];
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(v243, *(_DWORD *)(v51 + 24), *(_DWORD *)(v51 + 28));
      if ( *(_BYTE *)(v51 + 129) )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v52, v54, v55);
        v57[3] = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 24LL);
        v57[4] = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 28LL);
        v57[5] = *(int *)(*(_QWORD *)&v22[v50 + 16] + 20LL);
        v58 = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 16LL);
        v57[6] = v58;
        v59 = *(_DWORD **)&v22[v50 + 16];
        if ( (*v59 & 0x20108) == 0x20100LL )
        {
          v60 = *(_QWORD *)&v22[v50 + 16];
          if ( v59[29] != 21 )
          {
            v152 = WdLogNewEntry5_WdAssertion(v59, v58);
            *(_QWORD *)(v152 + 24) = 4023LL;
            WdLogEvent5_WdAssertion(v152);
            v60 = *(_QWORD *)&v22[v50 + 16];
          }
          v59 = (_DWORD *)v60;
          if ( *(_BYTE *)(v60 + 128) )
          {
            v153 = WdLogNewEntry5_WdAssertion(v60, 0LL);
            *(_QWORD *)(v153 + 24) = 4024LL;
            WdLogEvent5_WdAssertion(v153);
            v59 = *(_DWORD **)&v22[v50 + 16];
          }
        }
        if ( (*(_QWORD *)v59 & 0x20000LL) == 0
          && (((unsigned __int8)~BYTE1(*(_QWORD *)v59) ^ (unsigned __int8)~(v59[2] >> 8)) & 1) != 0 )
        {
          v154 = WdLogNewEntry5_WdAssertion(v59, (unsigned int)~(*(_QWORD *)v59 >> 8));
          *(_QWORD *)(v154 + 24) = 4038LL;
          WdLogEvent5_WdAssertion(v154);
        }
      }
      v61 = *((_QWORD *)Path + 11);
      v62 = *(_QWORD *)(v61 + 104);
      if ( v62 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v62 + 96));
        v63 = *(_QWORD *)(v61 + 104);
        v252 = v230;
      }
      else
      {
        v63 = 0LL;
      }
      v64 = *a1;
      v245 = v63;
      v65 = BmlFillPreferredMonitorMode(v64, v48, *(_QWORD *)(*((_QWORD *)Path + 12) + 96LL));
      v70 = v65;
      if ( v65 < 0 )
      {
        v202 = (_QWORD *)WdLogNewEntry5_WdTrace(v67, v66, v68, v69);
        v202[3] = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 24LL);
        v203 = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 28LL);
        v202[5] = v243;
        v202[4] = v203;
        v202[6] = v70;
        *(_QWORD *)(104LL * v48 + *a1 + 52) = 0LL;
        goto LABEL_213;
      }
      v71 = *(_QWORD *)&v22[v50 + 16];
      if ( (*(_QWORD *)v71 & 0x40000000000LL) == 0 )
        goto LABEL_114;
      AdapterDefaultScaling = *(_DWORD *)(v71 + 136);
      if ( AdapterDefaultScaling <= D3DKMDT_VPPS_UNINITIALIZED )
        goto LABEL_149;
      if ( AdapterDefaultScaling > D3DKMDT_VPPS_CUSTOM )
        break;
      v73 = v235;
LABEL_54:
      *(_DWORD *)&v22[v50 + 24] = AdapterDefaultScaling;
LABEL_55:
      v74 = *(_QWORD *)&v22[v50 + 16];
      if ( (*(_QWORD *)v74 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v74 + 88))
        && (*(_DWORD *)(v75 + 8) & 0x200LL) == 0 )
      {
        PathFromTargetInClientVidPn = VIDPN_MGR::GetPathFromTargetInClientVidPn(v73, *(_DWORD *)(v75 + 28));
        v236 = PathFromTargetInClientVidPn;
        v164 = *(_QWORD *)(a2 + 48);
        v165 = *(_QWORD *)(v164 + 8);
        if ( !v165 )
        {
          v166 = WdLogNewEntry5_WdAssertion(v162, v161);
          WdLogEvent5_WdAssertion(v166);
          v165 = *(_QWORD *)(v164 + 8);
        }
        v167 = *(_QWORD *)(v165 + 16);
        if ( !v167 || (v168 = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 28LL), (_DWORD)v168 == -1) )
        {
          LODWORD(v70) = -1073741811;
        }
        else
        {
          v169 = *(_QWORD *)(v167 + 2696);
          v242 = v169;
          if ( !v169 )
          {
            v200 = WdLogNewEntry5_WdError(v162, v161);
            *(_QWORD *)(v200 + 24) = 9262LL;
            WdLogEvent5_WdError(v200);
            LODWORD(v70) = -1073741811;
LABEL_211:
            v201 = (_QWORD *)WdLogNewEntry5_WdError(v162, v161);
            v201[3] = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 28LL);
            v201[4] = *(int *)(*(_QWORD *)&v22[v50 + 16] + 20LL);
            v201[5] = *(unsigned int *)(*(_QWORD *)&v22[v50 + 16] + 16LL);
            WdLogEvent5_WdError(v201);
LABEL_213:
            v204 = &v245;
            goto LABEL_216;
          }
          v170 = *(struct _FAST_MUTEX **)(v169 + 96);
          IsVirtualModeSuportDisabled = 0;
          if ( !v170 )
          {
            v172 = WdLogNewEntry5_WdError(0LL, v161);
            *(_QWORD *)(v172 + 24) = v167;
            WdLogEvent5_WdError(v172);
            LODWORD(v70) = -1073741811;
            goto LABEL_164;
          }
          v244 = 0LL;
          MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v170, (unsigned int)v168, 1, &v244);
          LODWORD(v70) = MonitorInstance;
          if ( MonitorInstance == -1073741275 )
          {
            v174 = WdLogNewEntry5_WdDmmEvent(v162, v161);
            *(_QWORD *)(v174 + 24) = v168;
            *(_QWORD *)(v174 + 32) = v167;
            WdLogEvent5_WdDmmEvent(v174);
            goto LABEL_162;
          }
          if ( MonitorInstance >= 0 )
          {
            v176 = v244;
            if ( !v244 || *((_DWORD *)v244 + 108) != 1 )
            {
              v177 = WdLogNewEntry5_WdAssertion(v162, v161);
              WdLogEvent5_WdAssertion(v177);
            }
            if ( !v176 )
            {
              v178 = WdLogNewEntry5_WdAssertion(v162, v161);
              WdLogEvent5_WdAssertion(v178);
            }
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)((char *)v176 + 296), 1u);
            IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v176);
            ExReleaseResourceLite((PERESOURCE)((char *)v176 + 296));
            KeLeaveCriticalRegion();
            LODWORD(v70) = 0;
          }
          else
          {
            if ( MonitorInstance == -1073741632 )
LABEL_162:
              LODWORD(v70) = 0;
            if ( (int)v70 < 0 )
            {
LABEL_164:
              v175 = WdLogNewEntry5_WdAssertion(v162, v161);
              *(_QWORD *)(v175 + 24) = (int)v70;
              WdLogEvent5_WdAssertion(v175);
              goto LABEL_175;
            }
          }
          if ( IsVirtualModeSuportDisabled )
            v179 = 1;
          else
            v179 = *(_BYTE *)(v242 + 249) == 0;
          v252 = v179;
          v230 = v179;
LABEL_175:
          PathFromTargetInClientVidPn = v236;
        }
        if ( (int)v70 < 0 )
          goto LABEL_211;
        if ( PathFromTargetInClientVidPn )
        {
          if ( !v252 )
          {
            v180 = *((_DWORD *)PathFromTargetInClientVidPn + 29);
LABEL_183:
            if ( v180 )
            {
              v183 = *(__int64 **)&v22[v50 + 16];
              v184 = *v183;
              if ( (*v183 & 0x200) != 0 )
              {
                if ( (((unsigned __int8)v180 ^ *((_BYTE *)v183 + 132)) & 1) != 0 && (v184 & 0x20000) != 0 )
                {
                  v185 = *((_DWORD *)v183 + 38);
                  v186 = *((_DWORD *)v183 + 39);
                  *v183 &= ~0x800000uLL;
                  *((_DWORD *)v183 + 38) = v186;
                  *((_DWORD *)v183 + 39) = v185;
                }
              }
              else if ( (v184 & 0x20000) != 0 )
              {
                v187 = WdLogNewEntry5_WdAssertion(v162, v184);
                WdLogEvent5_WdAssertion(v187);
              }
              *v183 |= 0x200uLL;
              *((_DWORD *)v183 + 33) = v180;
              *(_DWORD *)&v22[v50 + 28] = v180;
              goto LABEL_63;
            }
          }
        }
        else if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v162, v161) + 310) )
        {
          v180 = *((_DWORD *)DXGGLOBAL::GetGlobal(v182, v181) + 310);
          goto LABEL_183;
        }
        v49 = v233;
        v48 = v231;
      }
      v76 = *(_DWORD **)&v22[v50 + 16];
      if ( (*v76 & 0x200LL) == 0 )
      {
        v116 = *a1;
        v117 = *a1;
        v239 = 0;
        if ( (unsigned __int8)BmlIsSecondaryClonePath(v117, v48, &v239) )
        {
          v193 = 104LL * v239;
          v77 = *(_DWORD *)(v193 + v116 + 28);
          if ( v77 == D3DKMDT_VPPR_UNINITIALIZED )
          {
            v194 = WdLogNewEntry5_WdAssertion(v119, v118);
            WdLogEvent5_WdAssertion(v194);
          }
          if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v77) != 1 )
          {
            v195 = WdLogNewEntry5_WdAssertion(v119, v118);
            WdLogEvent5_WdAssertion(v195);
          }
          if ( v248 )
          {
            v118 = *(unsigned int *)(v50 + v116 + 52);
            v196 = *(_DWORD *)(v50 + v116 + 56);
            LOBYTE(v119) = *(_DWORD *)(v193 + v116 + 52) < *(_DWORD *)(v193 + v116 + 56);
            if ( (_BYTE)v119 != (unsigned int)v118 < v196 )
            {
              v197 = (unsigned int)v118 < v196;
              v198 = D3DKMDT_VPPR_ROTATE270;
              if ( !v197 )
                v198 = D3DKMDT_VPPR_ROTATE90;
              v77 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(v77, v198);
            }
          }
        }
        else
        {
          v77 = D3DKMDT_VPPR_IDENTITY;
        }
        if ( v77 == D3DKMDT_VPPR_UNINITIALIZED )
        {
          v199 = WdLogNewEntry5_WdAssertion(v119, v118);
          WdLogEvent5_WdAssertion(v199);
        }
        goto LABEL_62;
      }
      v77 = v76[33];
      if ( (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v77) - 1 <= 3 )
      {
        if ( (unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v77) == 1 )
        {
          v238 = v81;
          if ( v248 != (_BYTE)v81 && (unsigned __int8)BmlIsSecondaryClonePath(*a1, v48, &v238) )
          {
            v188 = *(_DWORD *)(*(_QWORD *)(104LL * v238 + *a1 + 16) + 132LL);
            if ( (unsigned int)(v188 - 1) > 0xF || (unsigned int)(v77 - 1) > 0xF )
              v77 = D3DKMDT_VPPR_NOTSPECIFIED;
            else
              v77 = (unsigned int)D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET(
                                    v188,
                                    (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)((v77 - v188 + 4) % 4 + 1));
          }
LABEL_62:
          *(_DWORD *)&v22[v50 + 28] = v77;
          goto LABEL_63;
        }
        if ( v248 != (_BYTE)v81 )
        {
          if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v48, 0LL) )
          {
            *(_DWORD *)&v22[v50 + 28] = *(_DWORD *)(*(_QWORD *)&v22[v50 + 16] + 132LL);
          }
          else
          {
            v191 = (_QWORD *)WdLogNewEntry5_WdAssertion(v190, v189);
            v191[3] = *a1;
            v191[4] = v49;
            v191[5] = *(int *)(*(_QWORD *)&v22[v50 + 16] + 132LL);
            WdLogEvent5_WdAssertion(v191);
            *(_DWORD *)&v22[v50 + 28] = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)(*(_QWORD *)&v22[v50 + 16] + 132LL));
          }
          goto LABEL_63;
        }
      }
      v192 = (_QWORD *)WdLogNewEntry5_WdWarning(v79, v78, v80);
      v192[3] = *a1;
      v192[4] = v49;
      v192[5] = *(int *)(*(_QWORD *)&v22[v50 + 16] + 132LL);
      WdLogEvent5_WdWarning(v192);
      *(_DWORD *)&v22[v50 + 28] = 1;
LABEL_63:
      v82 = *(_QWORD *)&v22[v50 + 16];
      if ( *(_BYTE *)(v82 + 129) && (*(_DWORD *)v82 & 0x20000LL) != 0 )
      {
        if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(*(_DWORD *)&v22[v50 + 28]) - 2) & 0xFFFFFFFD) != 0 )
        {
          *(_DWORD *)&v22[v50 + 108] = *(_DWORD *)(v83 + 152);
          v84 = *(_DWORD *)(v83 + 156);
        }
        else
        {
          *(_DWORD *)&v22[v50 + 108] = *(_DWORD *)(v83 + 156);
          v84 = *(_DWORD *)(v83 + 152);
        }
        *(_DWORD *)&v22[v50 + 112] = v84;
        *(_DWORD *)&v22[v50 + 116] |= 1u;
      }
      if ( (unsigned __int8)BmlIsSecondaryClonePath(*a1, v231, 0LL) )
        *(_WORD *)&v22[v50 + 66] = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v245, 0LL);
      v22 = (unsigned __int8 *)*a1;
      v48 = v231 + 1;
      v231 = v48;
      v37 = *(unsigned __int8 *)*a1;
      if ( v48 >= v37 )
      {
        v26 = 0;
        goto LABEL_72;
      }
    }
    if ( AdapterDefaultScaling == D3DKMDT_VPPS_RESERVED1 )
    {
LABEL_114:
      v73 = v235;
    }
    else
    {
      if ( AdapterDefaultScaling != D3DKMDT_VPPS_NOTSPECIFIED )
      {
LABEL_149:
        v73 = v235;
        *(_DWORD *)&v22[v50 + 24] = VIDPN_MGR::GetAdapterDefaultScaling(v235);
        v160 = (_QWORD *)WdLogNewEntry5_WdWarning(v158, v157, v159);
        v160[3] = *(int *)&v22[v50 + 24];
        v160[4] = *a1;
        v160[5] = v48;
        v160[6] = *(int *)(*(_QWORD *)&v22[v50 + 16] + 136LL);
        WdLogEvent5_WdWarning(v160);
        goto LABEL_55;
      }
      v73 = v235;
      v155 = *((_QWORD *)v235 + 1);
      if ( !v155 )
      {
        v156 = WdLogNewEntry5_WdAssertion(v71, 0x40000000000LL);
        WdLogEvent5_WdAssertion(v156);
        v155 = *((_QWORD *)v235 + 1);
      }
      if ( *(int *)(*(_QWORD *)(v155 + 16) + 2596LL) < 1105 )
      {
        AdapterDefaultScaling = D3DKMDT_VPPS_NOTSPECIFIED;
        goto LABEL_54;
      }
    }
    AdapterDefaultScaling = VIDPN_MGR::GetAdapterDefaultScaling(v73);
    goto LABEL_54;
  }
LABEL_72:
  v240 = v26;
  v85 = v26;
  if ( (_BYTE)v37 )
  {
    do
    {
      v86 = 104LL * v85;
      v242 = v86;
      IsSecondaryClonePath = BmlIsSecondaryClonePath(v22, v85, 0LL);
      v26 = 0;
      if ( !IsSecondaryClonePath )
      {
        v88 = *a1;
        v89 = 0;
        v234 = 0LL;
        v90 = 0;
        v91 = v85;
        v232 = v85;
        if ( v85 < *(unsigned __int8 *)*a1 )
        {
          do
          {
            v92 = 104LL * v91;
            v93 = *(_QWORD *)(v92 + v88 + 16);
            v94 = *(unsigned int *)(*(_QWORD *)&v22[v86 + 16] + 24LL);
            if ( *(_DWORD *)(v93 + 24) == (_DWORD)v94 )
            {
              v95 = *(_QWORD *)(v92 + v88 + 44);
              if ( v248
                && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(*(_DWORD *)(v92 + v88 + 28)) - 2) & 0xFFFFFFFD) == 0 )
              {
                v96 = v95;
                v97 = HIDWORD(v95);
                v95 = __PAIR64__(v95, HIDWORD(v95));
              }
              else
              {
                v96 = HIDWORD(v95);
                v97 = v95;
              }
              v253 = v96;
              if ( !v97 || !v96 )
              {
                v115 = WdLogNewEntry5_WdAssertion(v94, v93);
                WdLogEvent5_WdAssertion(v115);
                v96 = v253;
                v91 = v232;
              }
              if ( v89 && v90 )
              {
                if ( v89 > v97 )
                  v89 = v97;
                LODWORD(v234) = v89;
                if ( v90 > v96 )
                  v90 = v96;
                HIDWORD(v234) = v90;
              }
              else
              {
                v234 = v95;
                v89 = v95;
                v90 = HIDWORD(v95);
              }
              v86 = v242;
            }
            v88 = *a1;
            v232 = ++v91;
          }
          while ( v91 < *(unsigned __int8 *)*a1 );
          v85 = v240;
        }
        *(_QWORD *)&v22[v86 + 36] = v234;
        *(_DWORD *)&v22[v86 + 60] = BmlGetScaledAspectRatio((const struct _D3DKMDT_2DREGION *)&v22[v86 + 52]);
        v26 = 0;
      }
      v22 = (unsigned __int8 *)*a1;
      v240 = ++v85;
      v37 = *v22;
    }
    while ( v85 < v37 );
  }
  v98 = v26;
  if ( !(_BYTE)v37 )
    return 0LL;
  while ( 1 )
  {
    v99 = 104LL * v98;
    v100 = *(_QWORD *)&v22[v99 + 16];
    v249 = DMMVIDPNTOPOLOGY::FindPath(v243, *(_DWORD *)(v100 + 24), *(_DWORD *)(v100 + 28));
    v103 = *((_QWORD *)v249 + 11);
    v104 = *(_QWORD *)(v103 + 104);
    if ( v104 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v104 + 96));
      v105 = *(struct DMMVIDPNSOURCEMODESET **)(v103 + 104);
      v100 = *(_QWORD *)&v22[v99 + 16];
    }
    else
    {
      v105 = 0LL;
    }
    v106 = *(_QWORD *)(v100 + 8);
    v247[0] = (__int64)v105;
    if ( (v106 & 0x18000820B8FLL) == 0 )
    {
      v108 = v249;
      goto LABEL_106;
    }
    if ( (v106 & *(_QWORD *)v100 & 0x100) == 0 || (unsigned __int8)BmlIsSecondaryClonePath(*a1, v98, 0LL) )
    {
      v210 = WdLogNewEntry5_WdWarning(v106, v101, v102);
      *(_QWORD *)(v210 + 24) = *a1;
      *(_QWORD *)(v210 + 32) = v98;
      WdLogEvent5_WdWarning(v210);
      v108 = v249;
LABEL_106:
      if ( DMMVIDPNPRESENTPATH::IsFunctional(v108) )
      {
        v211 = (unsigned __int8 *)*a1;
        for ( i = 0; i < *v211; ++i )
        {
          v213 = 104LL * i;
          if ( *(_DWORD *)(*(_QWORD *)&v211[v213 + 16] + 24LL) == *(_DWORD *)(*(_QWORD *)&v22[v99 + 16] + 24LL) )
            *(_WORD *)&v211[v213 + 66] = 0;
        }
        *(_WORD *)&v22[v99 + 70] = 0;
      }
      goto LABEL_107;
    }
    v237 = -1;
    if ( (int)BmlGetNextBestSourceMode(*a1, a2, (unsigned __int16)v98, (_DWORD)v105, -1, (__int64)&v237) >= 0 )
      break;
    v209 = *(_QWORD *)&v22[v99 + 16];
    if ( (*(_QWORD *)v209 & 0x40000000000000LL) == 0 )
    {
      DxgkLogCodePointPacket(
        0x13u,
        *(_DWORD *)(v209 + 96),
        *(_DWORD *)(v209 + 100),
        *(_DWORD *)(v209 + 116),
        *(_QWORD *)(v209 + 16));
      v217 = (_QWORD *)WdLogNewEntry5_WdWarning(v215, v214, v216);
      v217[3] = *a1;
      v217[5] = v98;
      v217[6] = v237;
      v217[4] = a2;
      WdLogEvent5_WdWarning(v217);
      LODWORD(v70) = -1071774970;
      goto LABEL_215;
    }
    *(_QWORD *)(v209 + 8) &= 0xFFFFFFFFFFFFFE78uLL;
LABEL_107:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(v247, 0LL);
    v22 = (unsigned __int8 *)*a1;
    if ( ++v98 >= *(unsigned __int8 *)*a1 )
      return 0LL;
  }
  v107 = VIDPN_MGR::PinVidPnSourceMode(v235, v105, v237, 1);
  v70 = v107;
  if ( v107 < 0 )
  {
    DxgkLogCodePointPacket(
      0x15u,
      *(_DWORD *)(*(_QWORD *)&v22[v99 + 16] + 96LL),
      *(_DWORD *)(*(_QWORD *)&v22[v99 + 16] + 100LL),
      *(_DWORD *)(*(_QWORD *)&v22[v99 + 16] + 116LL),
      *(_QWORD *)(*(_QWORD *)&v22[v99 + 16] + 16LL));
    v208 = (_QWORD *)WdLogNewEntry5_WdWarning(v206, v205, v207);
    v208[4] = *a1;
    v208[6] = v98;
    v208[3] = v70;
    v208[5] = a2;
    WdLogEvent5_WdWarning(v208);
    goto LABEL_215;
  }
  v108 = v249;
  *(_WORD *)&v22[v99 + 66] = 0;
  v109 = *((_QWORD *)v249 + 12);
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
  v112 = *(_QWORD *)&v22[v99 + 16];
  v246 = v111;
  if ( (*(_BYTE *)v112 & 0x87) != 0x87
    || (*(_BYTE *)(v112 + 8) & 0x87) != 0x87
    || !*(_DWORD *)(v112 + 56)
    || !*(_DWORD *)(v112 + 52) )
  {
    v113 = -1;
LABEL_105:
    *(_WORD *)&v22[v99 + 70] = v113;
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v246, 0LL);
    goto LABEL_106;
  }
  v241 = -1;
  if ( (int)BmlGetNextBestTargetMode(*a1, a2, (unsigned __int16)v98, v111, v105, -1, &v241) >= 0 )
  {
    v70 = (int)VIDPN_MGR::PinVidPnTargetMode(v235, v111, v241, 1);
    v113 = 0;
    if ( (int)v70 < 0 )
    {
      v218 = DMMVIDEOSIGNALMODE::DivideAndRound(
               *(unsigned int *)(*(_QWORD *)&v22[v99 + 16] + 52LL),
               *(unsigned int *)(*(_QWORD *)&v22[v99 + 16] + 56LL));
      DxgkLogCodePointPacket(0x16u, *(_DWORD *)(v219 + 44), *(_DWORD *)(v219 + 48), v218, *(_QWORD *)(v219 + 16));
      v223 = (_QWORD *)WdLogNewEntry5_WdWarning(v221, v220, v222);
      v223[4] = *a1;
      v223[6] = v98;
      v223[3] = v70;
      v223[5] = a2;
      WdLogEvent5_WdWarning(v223);
      goto LABEL_236;
    }
    goto LABEL_105;
  }
  v224 = DMMVIDEOSIGNALMODE::DivideAndRound(
           *(unsigned int *)(*(_QWORD *)&v22[v99 + 16] + 52LL),
           *(unsigned int *)(*(_QWORD *)&v22[v99 + 16] + 56LL));
  DxgkLogCodePointPacket(0x14u, *(_DWORD *)(v225 + 44), *(_DWORD *)(v225 + 48), v224, *(_QWORD *)(v225 + 16));
  v229 = (_QWORD *)WdLogNewEntry5_WdWarning(v227, v226, v228);
  v229[3] = *a1;
  v229[5] = v98;
  v229[4] = a2;
  WdLogEvent5_WdWarning(v229);
  LODWORD(v70) = -1071774970;
LABEL_236:
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v246, 0LL);
LABEL_215:
  v204 = v247;
LABEL_216:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(v204, 0LL);
  return (unsigned int)v70;
}
