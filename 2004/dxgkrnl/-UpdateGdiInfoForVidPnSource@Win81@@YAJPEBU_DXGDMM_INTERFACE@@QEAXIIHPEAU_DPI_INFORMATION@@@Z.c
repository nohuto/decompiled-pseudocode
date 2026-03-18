/*
 * XREFs of ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFA38
 * Callers:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AF36C (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A51C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A5C4 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000B848 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000BB30 (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BBDC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C0121F80 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@PEAE@Z @ 0x1C0143320 (-GetCurrentTargetResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAU_D3DKMDT_2DREGION@@@Z @ 0x1C0143428 (-GetCurrentSourceResolution@DpiInternal@@YAJQEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@P.c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A8F3C (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C02AF14C (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z @ 0x1C02AF2FC (-DetermineViewDistance@Win81@@YA_NQEAXAEBUtagSIZE@@H1HHPEAI@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AF52C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AF64C (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C02AF818 (-HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02F379C (MonitorGetEdidBaseBlockPtr.c)
 */

__int64 __fastcall Win81::UpdateGdiInfoForVidPnSource(
        Win81 *this,
        const struct _DXGDMM_INTERFACE *a2,
        void *const a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rsi
  DpiInternal *v7; // r15
  DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _OWORD *v13; // rbx
  __int64 (__fastcall *v14)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **); // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  DpiInternal *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r14
  unsigned int v31; // edi
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 (__fastcall *v35)(__int64, _QWORD, _QWORD, __int64 *); // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // esi
  bool v42; // r14
  int VideoOutputTechnology; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rbx
  _QWORD *v47; // rax
  int v48; // edi
  unsigned __int8 *EdidBaseBlockPtr; // r14
  int PreferredMode; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbx
  _QWORD *v54; // rax
  int v55; // r13d
  int v56; // r12d
  UINT v57; // r14d
  UINT cy; // esi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  const struct _DXGDMM_VIDPN_INTERFACE *v62; // r15
  int v63; // eax
  unsigned int v64; // r15d
  unsigned int v65; // ebx
  char v66; // al
  __int64 v67; // r8
  const struct _DXGDMM_VIDPN_INTERFACE *v68; // r13
  __int64 v69; // rdx
  __int64 v70; // rax
  struct tagSIZE v71; // rdx
  int IsAudioAvailableInEdid; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  unsigned int v75; // ebx
  __int64 v76; // rax
  char cx; // si
  __int64 v78; // rax
  unsigned int v79; // ecx
  unsigned int v80; // eax
  __int64 v81; // rdx
  struct _DPI_INFORMATION *v82; // r9
  _QWORD *v83; // rax
  struct tagSIZE v84; // r8
  unsigned int v85; // eax
  __int64 v86; // rax
  __int128 v87; // xmm1
  __int128 v88; // xmm0
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  struct _D3DKMDT_2DREGION *v92; // [rsp+28h] [rbp-E0h]
  struct _D3DKMDT_2DREGION v93; // [rsp+48h] [rbp-C0h] BYREF
  void *v94; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v96; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v98; // [rsp+70h] [rbp-98h] BYREF
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  int v100; // [rsp+80h] [rbp-88h]
  int v101; // [rsp+84h] [rbp-84h]
  unsigned int v102; // [rsp+88h] [rbp-80h]
  __int64 v103; // [rsp+90h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPN__ *v104; // [rsp+98h] [rbp-70h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-68h] BYREF
  int v106; // [rsp+A8h] [rbp-60h]
  BOOL v107; // [rsp+B0h] [rbp-58h]
  int v108; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v109; // [rsp+B8h] [rbp-50h] BYREF
  char v110; // [rsp+C0h] [rbp-48h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v111; // [rsp+C8h] [rbp-40h]
  void (__fastcall *v112)(__int64, const struct _DXGDMM_VIDPN_INTERFACE *); // [rsp+D0h] [rbp-38h]
  __int64 v113; // [rsp+D8h] [rbp-30h]
  int v114; // [rsp+E0h] [rbp-28h]
  unsigned __int64 v115; // [rsp+E8h] [rbp-20h]
  DpiInternal *v116; // [rsp+F0h] [rbp-18h]
  char v117; // [rsp+F8h] [rbp-10h] BYREF
  DpiInternal *v118; // [rsp+100h] [rbp-8h]
  void (__fastcall *v119)(__int64, DpiInternal *); // [rsp+108h] [rbp+0h]
  __int64 v120; // [rsp+110h] [rbp+8h]
  int v121; // [rsp+118h] [rbp+10h]
  _OWORD v122[6]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int8 *v123; // [rsp+188h] [rbp+80h]
  __int128 v124; // [rsp+190h] [rbp+88h]
  __int128 v125; // [rsp+1A0h] [rbp+98h]
  _BYTE v126[96]; // [rsp+1B8h] [rbp+B0h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  v108 = (int)a3;
  v102 = a4;
  v116 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( Current && DXGPROCESS::IsRemoteConnection(Current) )
  {
    v12 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v13) = -1073741637;
    *(_QWORD *)(v12 + 24) = v7;
    *(_QWORD *)(v12 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v13;
  }
  v14 = (__int64 (__fastcall *)(DpiInternal *, unsigned __int64 *, struct D3DKMDT_HVIDPN__ **))*((_QWORD *)this + 6);
  v104 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0;
  v117 = 0;
  v98 = 0LL;
  v15 = v14(v7, &v98, &v104);
  v13 = (_OWORD *)v15;
  if ( v15 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v18[3] = v7;
LABEL_6:
    v18[4] = v13;
LABEL_99:
    WdLogEvent5_WdError(v18);
    goto LABEL_108;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)&v117,
    v98,
    *((_QWORD *)this + 8),
    (__int64)v7);
  v19 = v118;
  v99 = 0LL;
  v103 = 0LL;
  v20 = (*(__int64 (__fastcall **)(DpiInternal *, __int64 *, __int64 *))v104)(v118, &v99, &v103);
  v13 = (_OWORD *)v20;
  if ( v20 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v18[3] = v19;
    goto LABEL_6;
  }
  v109 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64 *))v103)(v99, (unsigned int)v6, &v109);
  v13 = (_OWORD *)v23;
  if ( v23 < 0 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v18[3] = v6;
    v26 = v99;
LABEL_98:
    v18[4] = v26;
    v18[5] = v13;
    goto LABEL_99;
  }
  memset(v126, 0, 0x5CuLL);
  v29 = v109;
  v13 = (_OWORD *)a6;
  v30 = 0LL;
  v115 = 0LL;
  v125 = *(_OWORD *)&v126[64];
  v31 = (v109 > 1) | *(_DWORD *)(a6 + 92) & 0x20;
  *(_DWORD *)&v126[92] = v31;
  if ( !v109 )
  {
    v124 = *(_OWORD *)&v126[16];
LABEL_101:
    if ( (v31 & 2) == 0
      || (v84 = (struct tagSIZE)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_load_si128((const __m128i *)&v126[80]), 4)),
          v84.cx == 1234568) )
    {
      v85 = *(_DWORD *)&v126[8];
    }
    else
    {
      v85 = Win81::AdjustDesktopScaleFactorForOverride(
              (Win81 *)0x64,
              *(__int64 *)&v126[32],
              v84,
              (const struct Win81::DPI_SCALE_FACTOR_COLLECTION *)v28);
      *(_DWORD *)&v126[8] = v85;
    }
    if ( !v85 )
    {
      v86 = WdLogNewEntry5_WdAssertion(v29, v27);
      *(_QWORD *)(v86 + 24) = 1058LL;
      WdLogEvent5_WdAssertion(v86);
    }
    v87 = v124;
    *v13 = *(_OWORD *)v126;
    v88 = *(_OWORD *)&v126[32];
    v13[1] = v87;
    v89 = *(_OWORD *)&v126[48];
    v13[2] = v88;
    v90 = v125;
    v13[3] = v89;
    v13[4] = v90;
    v13[5] = *(_OWORD *)&v126[80];
    LODWORD(v13) = 0;
    goto LABEL_108;
  }
  v124 = *(_OWORD *)&v126[16];
  while ( 1 )
  {
    LODWORD(v94) = -1;
    BYTE2(v93.cx) = 0;
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, void **))(v103 + 8))(
            v99,
            (unsigned int)v6,
            v30,
            &v94);
    v13 = (_OWORD *)v32;
    if ( v32 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
      v26 = (unsigned int)v6;
      v18[3] = v30;
      goto LABEL_98;
    }
    v97 = 0LL;
    v35 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(v103 + 24);
    v111 = 0LL;
    v112 = 0LL;
    v113 = 0LL;
    v114 = 0;
    v110 = 0;
    v36 = v35(v99, (unsigned int)v6, (unsigned int)v94, &v97);
    v13 = (_OWORD *)v36;
    if ( v36 < 0 )
      break;
    v39 = v97;
    if ( !v97 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v38, 0LL);
      *(_QWORD *)(v40 + 24) = 790LL;
      WdLogEvent5_WdAssertion(v40);
      v39 = v97;
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)&v110,
      v39,
      *(_QWORD *)(v103 + 32),
      v99);
    v100 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((_DWORD *)v111 + 5));
    LOBYTE(v93.cx) = 0;
    v41 = v100;
    v93.cy = -2;
    v42 = 0;
    VideoOutputTechnology = DmmGetVideoOutputTechnology(
                              v7,
                              (unsigned int)v94,
                              (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v93.cy,
                              0LL);
    v46 = VideoOutputTechnology;
    if ( VideoOutputTechnology >= 0 )
    {
      v42 = IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)v93.cy);
      LOBYTE(v93.cx) = v42;
    }
    else
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v45, v44);
      v47[3] = v7;
      v47[4] = (unsigned int)v94;
      v47[5] = v46;
      WdLogEvent5_WdError(v47);
    }
    v107 = v42;
    v96 = 0LL;
    v101 = 0;
    v48 = (v31 ^ (v31 | (4 * v42))) & 4 ^ v31;
    EdidBaseBlockPtr = (unsigned __int8 *)MonitorGetEdidBaseBlockPtr(v7, (unsigned int)v94);
    v123 = EdidBaseBlockPtr;
    HIBYTE(v93.cx) = 0;
    v105 = 0LL;
    v106 = 0;
    PreferredMode = EDID_V1_GetPreferredMode(EdidBaseBlockPtr, (struct DISPLAY_PREFERRED_MODE_INFO *)&v105);
    v53 = PreferredMode;
    if ( PreferredMode >= 0 )
    {
      HIBYTE(v93.cx) = 1;
    }
    else
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51);
      v54[3] = v7;
      v54[4] = (unsigned int)v94;
      v54[5] = v53;
      WdLogEvent5_WdError(v54);
    }
    v55 = v105;
    v56 = HIDWORD(v105);
    v98 = v105;
    if ( ((v41 - 2) & 0xFFFFFFFD) == 0 )
    {
      v55 = HIDWORD(v105);
      v98 = __PAIR64__(v105, HIDWORD(v105));
      v56 = v105;
    }
    if ( !EdidBaseBlockPtr )
    {
      v57 = HIDWORD(v96);
      v48 |= 8u;
      cy = v96;
LABEL_38:
      BYTE2(v93.cx) = (*((_BYTE *)v7 + 348) & 0x20) != 0;
      goto LABEL_39;
    }
    v93.cy = 0;
    LODWORD(v95) = 0;
    if ( (int)EDID_V1_GetPhysicalSize(v52, EdidBaseBlockPtr, &v93.cy, (unsigned int *)&v95) < 0 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v60, v59);
      *(_QWORD *)(v61 + 24) = 849LL;
      WdLogEvent5_WdAssertion(v61);
    }
    cy = v93.cy;
    v57 = v95;
    v96 = __PAIR64__(v95, v93.cy);
    if ( ((v100 - 2) & 0xFFFFFFFD) == 0 )
    {
      cy = v95;
      v96 = __PAIR64__(v93.cy, v95);
      v57 = v93.cy;
    }
    if ( cy && v57 )
    {
      if ( (int)(cy * v57) <= 16000 && !LOBYTE(v93.cx) )
      {
        v48 |= 0x40u;
        v101 = 1;
        v57 = 0;
        v96 = 0LL;
        cy = 0;
        goto LABEL_38;
      }
    }
    else
    {
      v57 = 0;
      v96 = 0LL;
      cy = 0;
    }
    if ( !cy )
      goto LABEL_38;
LABEL_39:
    v62 = v111;
    v97 = 0LL;
    LODWORD(v13) = DpiInternal::GetCurrentSourceResolution(
                     v118,
                     v104,
                     v111,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v97);
    if ( (int)v13 < 0 )
      goto LABEL_95;
    v95 = 0LL;
    BYTE1(v93.cx) = 0;
    LODWORD(v13) = DpiInternal::GetCurrentTargetResolution(
                     v118,
                     v104,
                     v62,
                     (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)&v95,
                     (struct _D3DKMDT_2DREGION *)((char *)&v93 + 1));
    if ( (int)v13 < 0 )
      goto LABEL_95;
    v63 = HIDWORD(v95);
    if ( ((v100 - 2) & 0xFFFFFFFD) != 0 )
    {
      v93.cy = HIDWORD(v95);
      v63 = v95;
    }
    else
    {
      v93.cy = v95;
    }
    v64 = v97;
    LODWORD(v95) = v63;
    if ( (v48 & 1) != 0 && v55 && v56 )
    {
      v65 = HIDWORD(v97);
      if ( BYTE1(v93.cx) )
        v65 = HIDWORD(v97) >> 1;
      if ( (unsigned int)v97 >= 2 * v55 || v65 >= 2 * v56 )
        v66 = 2;
      else
        v66 = 0;
      v48 ^= ((unsigned __int8)v48 ^ (unsigned __int8)(v48 | v66)) & 2;
      if ( BYTE1(v93.cx) )
        v65 *= 2;
    }
    else
    {
      v65 = HIDWORD(v97);
    }
    memset(v122, 0, sizeof(v122));
    v68 = v111;
    DWORD1(v122[5]) = a5;
    *(_QWORD *)&v122[2] = __PAIR64__(v65, v97);
    v69 = *((unsigned int *)v111 + 3);
    if ( *((_DWORD *)v111 + 3) != 1 )
    {
      switch ( *((_DWORD *)v111 + 3) )
      {
        case 2:
          goto LABEL_84;
        case 3:
          break;
        case 4:
LABEL_84:
          v67 = v93.cy;
          if ( (_DWORD)v69 == 4 )
          {
            v79 = v95;
            if ( cy * v65 <= v57 * (unsigned int)v97 )
            {
              v64 = v95;
              v65 = v65 * (unsigned int)v95 / (unsigned int)v97;
            }
            else
            {
              v80 = (int)v97 * v93.cy / v65;
              v65 = v93.cy;
              v64 = v80;
            }
          }
          else
          {
            v79 = v95;
          }
          cy = cy * v64 / v79;
          v57 = v57 * v65 / v93.cy;
          break;
        default:
          if ( *((_DWORD *)v111 + 3) != 5 )
          {
            if ( *((_DWORD *)v111 + 3) == 255 )
              break;
            v70 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)v111 + 3) - 5), v69);
            *(_QWORD *)(v70 + 24) = *((int *)v68 + 3);
            WdLogEvent5_WdAssertion(v70);
          }
          v48 |= 0x100u;
          break;
      }
    }
    v71 = (struct tagSIZE)*((unsigned int *)v68 + 5);
    *((_QWORD *)&v122[1] + 1) = __PAIR64__(v57, cy);
    if ( (unsigned int)(v71.cx - 5) <= 0xB )
      v71 = (struct tagSIZE)(unsigned int)((v71.cx - 1) % 4 + 1);
    v31 = (((v71.cx - 2) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | v48 & 0xFFFFFF7F;
    *(_DWORD *)&v126[92] = v31;
    if ( !BYTE2(v93.cx) && !v101 && v123 && HIBYTE(v93.cx) )
    {
      IsAudioAvailableInEdid = DpiInternal::IsAudioAvailableInEdid(v116, (void *)(unsigned int)v94, v67, 4LL);
      LODWORD(v92) = (unsigned __int8)v106;
      v31 = v31 & 0xFFFFFFEF | (16
                              * (unsigned __int8)Win81::DetermineViewDistance(
                                                   v116,
                                                   &v96,
                                                   (const struct tagSIZE *)v107,
                                                   (int)&v98,
                                                   (const struct tagSIZE *)v92,
                                                   IsAudioAvailableInEdid,
                                                   (unsigned int *)&v122[4]));
      v75 = v122[4];
      *(_DWORD *)&v126[92] = v31;
      if ( !LODWORD(v122[4]) )
      {
        v76 = WdLogNewEntry5_WdAssertion(v74, v73);
        *(_QWORD *)(v76 + 24) = 1014LL;
        WdLogEvent5_WdAssertion(v76);
      }
LABEL_72:
      cx = v93.cx;
      goto LABEL_73;
    }
    v75 = 0;
    LODWORD(v122[4]) = 0;
    if ( !BYTE2(v93.cx) )
      goto LABEL_72;
    cx = v93.cx;
    if ( LOBYTE(v93.cx) )
    {
      Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        *(Win81 **)&v122[2],
        v71,
        (__int64)v122,
        (struct _DPI_INFORMATION *)4);
      Win81::FillOverridesAndAdjustedScaleFactor((Win81 *)v102, v81, (__int64)v122, v82);
      v31 |= 0x400u;
      *(_DWORD *)&v126[92] = v31;
      goto LABEL_74;
    }
LABEL_73:
    Win81::FillDpiInfo(
      (Win81 *)((char *)&v122[1] + 8),
      (const struct tagSIZE *)&v122[2],
      (const struct tagSIZE *)v75,
      v102,
      (unsigned int)v92,
      (__int64)v122);
LABEL_74:
    if ( HIDWORD(v122[5]) )
    {
      v78 = WdLogNewEntry5_WdAssertion(v29, v27);
      *(_QWORD *)(v78 + 24) = 1031LL;
      WdLogEvent5_WdAssertion(v78);
    }
    HIDWORD(v122[5]) = v31;
    if ( cx
      || (v31 & 4) == 0
      && (v28 = 2LL,
          v27 = (unsigned int)((*(_DWORD *)&v126[56] + *(_DWORD *)&v126[60]) >> 31),
          LODWORD(v27) = (*(_DWORD *)&v126[56] + *(_DWORD *)&v126[60]) % 2,
          (*(_DWORD *)&v126[56] + *(_DWORD *)&v126[60]) / 2 <= (DWORD2(v122[3]) + HIDWORD(v122[3])) / 2) )
    {
      *(_OWORD *)v126 = v122[0];
      v124 = v122[1];
      *(_OWORD *)&v126[32] = v122[2];
      v125 = v122[4];
      *(_OWORD *)&v126[80] = v122[5];
      v31 = HIDWORD(v122[5]);
      *(_OWORD *)&v126[48] = v122[3];
    }
    if ( v110 )
      v112(v113, v68);
    v7 = v116;
    v30 = v115 + 1;
    LODWORD(v6) = v108;
    v115 = v30;
    if ( v30 >= v109 )
    {
      v13 = (_OWORD *)a6;
      goto LABEL_101;
    }
  }
  v83 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37);
  v83[3] = (unsigned int)v6;
  v83[4] = (unsigned int)v94;
  v83[5] = v13;
  WdLogEvent5_WdError(v83);
  v62 = v111;
LABEL_95:
  if ( v110 )
    v112(v113, v62);
LABEL_108:
  if ( v117 )
    v119(v120, v118);
  return (unsigned int)v13;
}
