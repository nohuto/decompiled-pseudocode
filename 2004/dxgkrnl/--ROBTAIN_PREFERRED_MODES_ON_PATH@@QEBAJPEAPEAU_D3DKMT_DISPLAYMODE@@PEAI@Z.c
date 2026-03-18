/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C025B800
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0158A94 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C0007A10 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B848 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00DD14C (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C011E4F0 (_PopulateDisplayModeFromPresentPath.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0121F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C013B5BC (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     DxgkQueryDmmInterface @ 0x1C01400B0 (DxgkQueryDmmInterface.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C014459C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01593A4 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        __int64 a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  struct _D3DKMT_DISPLAYMODE **v3; // r13
  unsigned int *v4; // r14
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  _QWORD *v11; // rax
  DXGADAPTER *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  DXGADAPTER *v20; // rcx
  __int64 v21; // r12
  __int64 (__fastcall *v22)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGADAPTER *v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  DXGADAPTER *v36; // rcx
  int VideoOutputTechnology; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 (__fastcall *v41)(__int64, __int64, __int64 *, __int64 *); // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 (__fastcall *v46)(__int64, __int64 *); // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned int *v52; // r15
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // edx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdi
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 (__fastcall *v63)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r14
  __int64 (__fastcall *v68)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  unsigned int *v73; // r13
  __int64 v74; // r8
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rbx
  _QWORD *v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // ebx
  int v85; // eax
  int v86; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v87; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v88; // eax
  int v89; // eax
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  int v93; // eax
  int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // eax
  SIZE_T v98; // rax
  unsigned __int64 v99; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  int UniqueModes; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbx
  __int64 v112; // rax
  int v113; // [rsp+20h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v114[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v115; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v116[7]; // [rsp+59h] [rbp-A7h] BYREF
  __int64 v117; // [rsp+60h] [rbp-A0h] BYREF
  bool v118; // [rsp+68h] [rbp-98h]
  __int64 v119; // [rsp+70h] [rbp-90h] BYREF
  __int64 v120; // [rsp+78h] [rbp-88h] BYREF
  __int64 v121; // [rsp+80h] [rbp-80h] BYREF
  __int64 v122; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v123[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v124; // [rsp+98h] [rbp-68h]
  void (__fastcall *v125)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v126; // [rsp+A8h] [rbp-58h]
  int v127; // [rsp+B0h] [rbp-50h]
  _BYTE v128[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v129; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v130)(__int64, __int64); // [rsp+C8h] [rbp-38h]
  __int64 v131; // [rsp+D0h] [rbp-30h]
  int v132; // [rsp+D8h] [rbp-28h]
  _BYTE v133[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-18h]
  void (__fastcall *v135)(__int64, __int64); // [rsp+F0h] [rbp-10h]
  __int64 v136; // [rsp+F8h] [rbp-8h]
  int v137; // [rsp+100h] [rbp+0h]
  _BYTE v138[8]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int *v139; // [rsp+110h] [rbp+10h]
  void (__fastcall *v140)(__int64, unsigned int *); // [rsp+118h] [rbp+18h]
  __int64 v141; // [rsp+120h] [rbp+20h]
  int v142; // [rsp+128h] [rbp+28h]
  unsigned int *v143; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v144; // [rsp+138h] [rbp+38h]
  _BYTE v145[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v146; // [rsp+148h] [rbp+48h]
  void (__fastcall *v147)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v148; // [rsp+158h] [rbp+58h]
  int v149; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v150; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v151; // [rsp+1A0h] [rbp+A0h] BYREF

  v3 = a2;
  v144 = a2;
  v143 = a3;
  v4 = a3;
  memset(&v151, 0, sizeof(v151));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                         *(DXGADAPTER **)a1,
                                         *(_DWORD *)(a1 + 12),
                                         &v151);
  v10 = PreferredMonitorSourceModeOnTarget;
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v11[3] = *(_QWORD *)a1;
    v11[4] = *(unsigned int *)(a1 + 12);
    v11[5] = v10;
    WdLogEvent5_WdWarning(v11);
    return 0LL;
  }
  v13 = *(DXGADAPTER **)a1;
  v117 = 0LL;
  v14 = DxgkQueryDmmInterface(v13, v7, &v117);
  v17 = v14;
  if ( v14 < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = *(_QWORD *)a1;
    *(_QWORD *)(v18 + 32) = v17;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v17;
  }
  v19 = v117;
  v20 = *(DXGADAPTER **)a1;
  v121 = 0LL;
  v21 = 0LL;
  *(_QWORD *)v114 = 0LL;
  v22 = *(__int64 (__fastcall **)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v117 + 40);
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0;
  v145[0] = 0;
  v23 = v22(v20, v114, &v121);
  v26 = v23;
  if ( v23 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v27[3] = *(_QWORD *)a1;
    v27[4] = v26;
LABEL_13:
    WdLogEvent5_WdError(v27);
    goto LABEL_83;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v145,
    *(__int64 *)v114,
    *(_QWORD *)(v19 + 64),
    *(_QWORD *)a1);
  v21 = v146;
  v120 = 0LL;
  v119 = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v121)(v146, &v120, &v119);
  v26 = v28;
  if ( v28 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
    v27[3] = v21;
    v31 = *(DXGADAPTER **)a1;
LABEL_16:
    v27[4] = v31;
    v27[5] = v26;
    goto LABEL_13;
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v119 + 40))(
          v120,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          1LL,
          0,
          2);
  v26 = v32;
  if ( v32 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
    v27[3] = *(unsigned int *)(a1 + 8);
    v27[4] = *(unsigned int *)(a1 + 12);
    v27[5] = v21;
    v27[6] = v26;
    goto LABEL_13;
  }
  v35 = *(unsigned int *)(a1 + 12);
  v36 = *(DXGADAPTER **)a1;
  v114[0] = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v36, v35, 0LL, v114);
  v26 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
    v27[3] = v26;
    goto LABEL_13;
  }
  v40 = *(unsigned int *)(a1 + 8);
  v122 = 0LL;
  v117 = 0LL;
  v118 = (unsigned int)(v114[0] - 15) <= 2;
  v129 = 0LL;
  v130 = 0LL;
  v131 = 0LL;
  v41 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v121 + 8);
  v132 = 0;
  v128[0] = 0;
  v42 = v41(v21, v40, &v117, &v122);
  v26 = v42;
  if ( v42 < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
    v27[3] = v21;
    v31 = (DXGADAPTER *)*(unsigned int *)(a1 + 8);
    goto LABEL_16;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v128,
    v117,
    *(_QWORD *)(v121 + 16),
    v21);
  v45 = v129;
  v117 = 0LL;
  v139 = 0LL;
  v46 = *(__int64 (__fastcall **)(__int64, __int64 *))(v122 + 8);
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  v138[0] = 0;
  v47 = v46(v129, &v117);
  v26 = v47;
  if ( v47 < 0 )
  {
    v50 = WdLogNewEntry5_WdError(v49, v48);
    *(_QWORD *)(v50 + 24) = v45;
    *(_QWORD *)(v50 + 32) = v26;
    WdLogEvent5_WdError(v50);
    goto LABEL_81;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
    (__int64)v138,
    v117,
    *(_QWORD *)(v122 + 32),
    v45);
  v52 = v139;
  if ( !v139 )
  {
LABEL_58:
    v97 = *(_DWORD *)(a1 + 40);
    if ( v97 )
    {
      v99 = v97;
      v98 = 44LL * v97;
      if ( !is_mul_ok(v99, 0x2CuLL) )
        v98 = -1LL;
      v100 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v98, 0x4B677844u, PagedPool);
      *v3 = v100;
      if ( !v100 )
      {
        v104 = WdLogNewEntry5_WdLowResource(0LL, v101, v102, v103);
        *(_QWORD *)(v104 + 24) = 1740LL;
        WdLogEvent5_WdLowResource(v104);
        LODWORD(v26) = -1073741801;
        goto LABEL_79;
      }
      memset(v100, 0, 44LL * *(unsigned int *)(a1 + 40));
      UniqueModes = MODE_UNION_LIST::GetUniqueModes((const void **)(a1 + 24), *(unsigned int *)(a1 + 40), *v3, v4);
      v111 = UniqueModes;
      if ( UniqueModes < 0 )
      {
        v112 = WdLogNewEntry5_WdAssertion(v110, v109);
        *(_QWORD *)(v112 + 24) = v111;
        WdLogEvent5_WdAssertion(v112);
      }
      v45 = v129;
    }
    else
    {
      *v4 = 0;
    }
    LODWORD(v26) = 0;
    goto LABEL_79;
  }
  while ( 1 )
  {
    v53 = v52[1];
    if ( ((v53 - 1) & 0xFFFFFFFC) != 0 )
      goto LABEL_55;
    if ( v53 == 2 )
      goto LABEL_55;
    v54 = v52[2];
    if ( v54 != v52[4] )
      goto LABEL_55;
    v55 = v52[3];
    if ( v55 != v52[5]
      || v52[7] - 21 > 1
      || v54 != v151.VideoSignalInfo.ActiveSize.cx
      || v55 != v151.VideoSignalInfo.ActiveSize.cy )
    {
      goto LABEL_55;
    }
    LOBYTE(v51) = 1;
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v122 + 40))(v45, *v52, v51);
    v60 = v56;
    if ( v56 < 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
      v61[3] = *v52;
      v61[4] = v45;
      v61[5] = v60;
      WdLogEvent5_WdWarning(v61);
      goto LABEL_55;
    }
    v62 = *(unsigned int *)(a1 + 12);
    v117 = 0LL;
    *(_QWORD *)v114 = 0LL;
    v63 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v121 + 24);
    v134 = 0LL;
    v135 = 0LL;
    v136 = 0LL;
    v137 = 0;
    v133[0] = 0;
    v64 = v63(v21, v62, v114, &v117);
    v26 = v64;
    if ( v64 < 0 )
    {
      v107 = (_QWORD *)WdLogNewEntry5_WdError(v66, v65);
      v107[3] = v21;
      v107[4] = *(unsigned int *)(a1 + 12);
      v107[5] = v26;
LABEL_74:
      WdLogEvent5_WdError(v107);
      goto LABEL_79;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v133,
      *(__int64 *)v114,
      *(_QWORD *)(v121 + 32),
      v21);
    v67 = v134;
    *(_QWORD *)v114 = 0LL;
    v124 = 0LL;
    v68 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v117 + 8);
    v125 = 0LL;
    v126 = 0LL;
    v127 = 0;
    v123[0] = 0;
    v69 = v68(v134, v114);
    v26 = v69;
    if ( v69 < 0 )
    {
      v106 = WdLogNewEntry5_WdError(v71, v70);
      *(_QWORD *)(v106 + 24) = v67;
      *(_QWORD *)(v106 + 32) = v26;
      WdLogEvent5_WdError(v106);
      goto LABEL_69;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v123,
      *(__int64 *)v114,
      *(_QWORD *)(v117 + 32),
      v67);
    v73 = v124;
    if ( v124 )
      break;
LABEL_50:
    v93 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v117 + 56))(v67, 0LL);
    v26 = v93;
    if ( v93 < 0 )
    {
LABEL_64:
      v105 = (_QWORD *)WdLogNewEntry5_WdError(v92, v91);
      v105[4] = v26;
      v105[3] = v67;
LABEL_65:
      WdLogEvent5_WdError(v105);
      goto LABEL_66;
    }
    if ( v123[0] )
      v125(v126, v73);
    if ( v133[0] )
      v135(v136, v67);
LABEL_55:
    v117 = 0LL;
    v94 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v122 + 16))(v45, v52, &v117);
    v26 = v94;
    if ( v94 < 0 )
    {
      v107 = (_QWORD *)WdLogNewEntry5_WdError(v96, v95);
      v107[3] = v45;
      v107[4] = v26;
      goto LABEL_74;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v138,
      v117,
      *(_QWORD *)(v122 + 32),
      v45);
    v52 = v139;
    if ( !v139 )
    {
      v4 = v143;
      v3 = v144;
      goto LABEL_58;
    }
  }
  while ( 1 )
  {
    LOBYTE(v72) = v118;
    v115 = 0;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v117 + 80))(
           v73,
           &v151,
           v72,
           &v115) < 0
      || !v115 )
    {
      goto LABEL_47;
    }
    LOBYTE(v74) = 1;
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v117 + 48))(v67, *v73, v74);
    v79 = v75;
    if ( v75 >= 0 )
      break;
    v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v77, v76, v78);
    v80[3] = *v73;
    v80[4] = v67;
    v80[5] = v79;
    WdLogEvent5_WdWarning(v80);
LABEL_47:
    *(_QWORD *)v114 = 0LL;
    v90 = (*(__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v117 + 16))(
            v67,
            v73,
            v114);
    v26 = v90;
    if ( v90 < 0 )
      goto LABEL_64;
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v123,
      *(__int64 *)v114,
      *(_QWORD *)(v117 + 32),
      v67);
    v73 = v124;
    if ( !v124 )
    {
      v45 = v129;
      goto LABEL_50;
    }
  }
  *(_QWORD *)v114 = 0LL;
  v81 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v119 + 24))(
          v120,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          v114);
  v26 = v81;
  if ( v81 < 0 )
    goto LABEL_63;
  v84 = *(_DWORD *)(*(_QWORD *)v114 + 16LL);
  (*(void (__fastcall **)(__int64))(v119 + 32))(v120);
  if ( (v84 & 1) == 0 )
    goto LABEL_47;
  LOBYTE(v113) = 1;
  v85 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v119 + 64))(
          v120,
          *(unsigned int *)(a1 + 8),
          *(unsigned int *)(a1 + 12),
          1LL,
          v113);
  v26 = v85;
  if ( v85 < 0
    || (*(_QWORD *)v114 = 0LL,
        v86 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v119 + 24))(
                v120,
                *(unsigned int *)(a1 + 8),
                *(unsigned int *)(a1 + 12),
                v114),
        v26 = v86,
        v86 < 0) )
  {
LABEL_63:
    v105 = (_QWORD *)WdLogNewEntry5_WdError(v83, v82);
    v105[3] = *(unsigned int *)(a1 + 8);
    v105[4] = *(unsigned int *)(a1 + 12);
    v105[5] = v26;
    goto LABEL_65;
  }
  v87 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v114 + 24LL);
  (*(void (__fastcall **)(__int64))(v119 + 32))(v120);
  v88 = D3DKMDT_VOT_SVIDEO;
  v114[0] = D3DKMDT_VOT_SVIDEO;
  while ( 1 )
  {
    if ( BmlIsSupportedPathRotation(v88, v87) )
    {
      v116[0] = 0;
      memset(&v150, 0, sizeof(v150));
      PopulateDisplayModeFromPresentPath(v52, v73, 1, v114[0], 1, 1, 0, 2, (__int64)&v150, v116);
      LODWORD(v26) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 24), &v150);
      if ( (int)v26 < 0 )
        break;
      if ( v116[0] )
      {
        ++v150.IntegerRefreshRate;
        *(_DWORD *)&v150.Flags |= 2u;
        LODWORD(v26) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 24), &v150);
        if ( (int)v26 < 0 )
          break;
      }
    }
    v88 = v114[0] + 1;
    v114[0] = v88;
    if ( v88 > D3DKMDT_VOT_DVI )
    {
      v89 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v119 + 72))(
              v120,
              *(unsigned int *)(a1 + 8),
              *(unsigned int *)(a1 + 12),
              0LL);
      v26 = v89;
      if ( v89 < 0 )
        goto LABEL_63;
      goto LABEL_47;
    }
  }
LABEL_66:
  if ( v123[0] )
    v125(v126, v73);
  v45 = v129;
LABEL_69:
  if ( v133[0] )
    v135(v136, v67);
LABEL_79:
  if ( v138[0] )
    v140(v141, v52);
LABEL_81:
  if ( v128[0] )
    v130(v131, v45);
LABEL_83:
  if ( v145[0] )
    v147(v148, v21);
  return (unsigned int)v26;
}
