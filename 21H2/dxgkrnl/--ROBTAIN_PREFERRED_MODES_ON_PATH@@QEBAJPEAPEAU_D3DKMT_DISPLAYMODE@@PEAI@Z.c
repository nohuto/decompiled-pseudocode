/*
 * XREFs of ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C02F50F4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0013668 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C001CF0C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C01B4890 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C01BDF88 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01D311C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01D6EB0 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 *     ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01DE2AC (-AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     _PopulateDisplayModeFromPresentPath @ 0x1C02F8DC4 (_PopulateDisplayModeFromPresentPath.c)
 */

__int64 __fastcall OBTAIN_PREFERRED_MODES_ON_PATH::operator()(
        _QWORD *a1,
        struct _D3DKMT_DISPLAYMODE **a2,
        unsigned int *a3)
{
  int PreferredMonitorSourceModeOnTarget; // eax
  __int64 v5; // rdx
  DXGADAPTER *v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rbx
  DXGADAPTER *v11; // rcx
  __int64 v12; // r13
  __int64 (__fastcall *v13)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  DXGADAPTER *v18; // rcx
  int VideoOutputTechnology; // eax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(__int64, __int64, __int64 *, __int64 *); // rax
  int v22; // eax
  __int64 v23; // r15
  __int64 (__fastcall *v24)(__int64, __int64 *); // rax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  __int64 (__fastcall *v31)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *); // rax
  int v32; // eax
  __int64 v33; // r15
  __int64 (__fastcall *v34)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *); // rax
  int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v42; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v43; // eax
  int v44; // eax
  unsigned int *v45; // rbx
  int v46; // eax
  __int64 v47; // r8
  int v48; // eax
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int *v52; // r12
  unsigned int v53; // eax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // kr00_8
  struct _D3DKMT_DISPLAYMODE *v56; // rax
  const wchar_t *v57; // r9
  int UniqueModes; // eax
  __int64 v59; // rbx
  int v60; // [rsp+20h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v62; // [rsp+58h] [rbp-A8h] BYREF
  char v63[7]; // [rsp+59h] [rbp-A7h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  bool v65; // [rsp+68h] [rbp-98h]
  __int64 v66; // [rsp+70h] [rbp-90h] BYREF
  __int64 v67; // [rsp+78h] [rbp-88h] BYREF
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  char v70[8]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v71; // [rsp+98h] [rbp-68h]
  void (__fastcall *v72)(__int64, unsigned int *); // [rsp+A0h] [rbp-60h]
  __int64 v73; // [rsp+A8h] [rbp-58h]
  int v74; // [rsp+B0h] [rbp-50h]
  unsigned int *v75; // [rsp+B8h] [rbp-48h]
  char v76[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v77; // [rsp+C8h] [rbp-38h]
  void (__fastcall *v78)(__int64, __int64); // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  int v80; // [rsp+E0h] [rbp-20h]
  char v81[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h]
  void (__fastcall *v83)(__int64, __int64); // [rsp+F8h] [rbp-8h]
  __int64 v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+108h] [rbp+8h]
  char v86[8]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v87; // [rsp+118h] [rbp+18h]
  void (__fastcall *v88)(__int64, unsigned int *); // [rsp+120h] [rbp+20h]
  __int64 v89; // [rsp+128h] [rbp+28h]
  int v90; // [rsp+130h] [rbp+30h]
  struct _D3DKMT_DISPLAYMODE **v91; // [rsp+138h] [rbp+38h]
  char v92[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v93; // [rsp+148h] [rbp+48h]
  void (__fastcall *v94)(__int64, __int64); // [rsp+150h] [rbp+50h]
  __int64 v95; // [rsp+158h] [rbp+58h]
  int v96; // [rsp+160h] [rbp+60h]
  struct _D3DKMT_DISPLAYMODE v97; // [rsp+168h] [rbp+68h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE v98; // [rsp+1A0h] [rbp+A0h] BYREF

  v91 = a2;
  v75 = a3;
  memset(&v98, 0, sizeof(v98));
  PreferredMonitorSourceModeOnTarget = DmmGetPreferredMonitorSourceModeOnTarget(
                                         (DXGADAPTER *)*a1,
                                         *((_DWORD *)a1 + 3),
                                         &v98);
  if ( PreferredMonitorSourceModeOnTarget < 0 )
  {
    WdLogSingleEntry3(3LL, *a1, *((unsigned int *)a1 + 3), PreferredMonitorSourceModeOnTarget);
    return 0LL;
  }
  v7 = (DXGADAPTER *)*a1;
  v64 = 0LL;
  v8 = DxgkQueryDmmInterface(v7, v5, &v64);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v8);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to QueryDxgDmmInterface on hAdapter 0x%I64x (status = 0x%I64x).",
      *a1,
      v9,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v9;
  }
  v10 = v64;
  v11 = (DXGADAPTER *)*a1;
  v68 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v61 = 0LL;
  v13 = *(__int64 (__fastcall **)(DXGADAPTER *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v64 + 40);
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0;
  v92[0] = 0;
  v14 = v13(v11, v61, &v68);
  v9 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(2LL, *a1, v14);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to create an empty VidPN on adapter 0x%I64x (status = 0x%I64x).",
      *a1,
      v9,
      0LL,
      0LL,
      0LL);
    goto LABEL_83;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v92,
    *(__int64 *)v61,
    *(_QWORD *)(v10 + 64),
    *a1);
  v12 = v93;
  v67 = 0LL;
  v66 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))v68)(v93, &v67, &v66);
  v9 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry3(2LL, v12, *a1, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get VidPn topology from hVidPn 0x%I64x on Adapter 0x%I64x (Status=0x%I64x).",
      v12,
      *a1,
      v9,
      0LL,
      0LL);
    goto LABEL_83;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _WORD, int))(v66 + 40))(
          v67,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          1LL,
          0,
          2);
  v17 = *((_DWORD *)a1 + 3);
  v9 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry4(2LL, *((unsigned int *)a1 + 2), v17, v12, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to Add VidPn path from source 0x%I64x to target 0x%I64x on VidPn 0x%I64x (Status=0x%I64x).",
      *((unsigned int *)a1 + 2),
      *((unsigned int *)a1 + 3),
      v12,
      v9,
      0LL);
    goto LABEL_83;
  }
  v18 = (DXGADAPTER *)*a1;
  v61[0] = D3DKMDT_VOT_HD15;
  VideoOutputTechnology = DmmGetVideoOutputTechnology(v18, v17, 0LL, v61);
  v9 = VideoOutputTechnology;
  if ( VideoOutputTechnology < 0 )
  {
    WdLogSingleEntry1(2LL, VideoOutputTechnology);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed call to DmmGetVideoOutputTechnology(Status = 0x%I64x)",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_83;
  }
  v20 = *((unsigned int *)a1 + 2);
  v69 = 0LL;
  v64 = 0LL;
  v65 = (unsigned int)(v61[0] - 15) <= 2;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(v68 + 8);
  v80 = 0;
  v76[0] = 0;
  v22 = v21(v12, v20, &v64, &v69);
  v9 = v22;
  if ( v22 < 0 )
  {
    WdLogSingleEntry3(2LL, v12, *((unsigned int *)a1 + 2), v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire VidPn source mode set from VidPn 0x%I64x for VidPn source ID 0x%I64x (Status = 0x%I64x).",
      v12,
      *((unsigned int *)a1 + 2),
      v9,
      0LL,
      0LL);
    goto LABEL_83;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v76,
    v64,
    *(_QWORD *)(v68 + 16),
    v12);
  v23 = v77;
  v64 = 0LL;
  v87 = 0LL;
  v24 = *(__int64 (__fastcall **)(__int64, __int64 *))(v69 + 8);
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0;
  v86[0] = 0;
  v25 = v24(v77, &v64);
  v9 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry2(2LL, v23, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire first mode info from source mode set 0x%I64x (Status = 0x%I64x).",
      v23,
      v9,
      0LL,
      0LL,
      0LL);
    goto LABEL_81;
  }
  while ( 1 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v86,
      v64,
      *(_QWORD *)(v69 + 32),
      v23);
    v52 = v87;
    if ( !v87 )
    {
      v53 = *((_DWORD *)a1 + 10);
      if ( v53 )
      {
        v55 = v53;
        v54 = v53 * (unsigned __int64)(unsigned int)((_DWORD)v87 + 44);
        if ( !is_mul_ok(v55, (unsigned int)((_DWORD)v87 + 44)) )
          v54 = (unsigned __int64)v87 - 1;
        v56 = (struct _D3DKMT_DISPLAYMODE *)operator new[](v54, 0x4B677844u, 256LL, v51);
        *v91 = v56;
        if ( !v56 )
        {
          WdLogSingleEntry1(6LL, 1839LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Unable to allocate mode list memory.",
            1839LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v9) = -1073741801;
          goto LABEL_79;
        }
        UniqueModes = MODE_UNION_LIST::GetUniqueModes((const void **)a1 + 3, *((unsigned int *)a1 + 10), v56, v75);
        if ( UniqueModes < 0 )
        {
          v59 = UniqueModes;
          WdLogSingleEntry1(1LL, UniqueModes);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Failed to get unique modes (Status = 0x%I64x).",
            v59,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        *v75 = 0;
      }
      LODWORD(v9) = 0;
      goto LABEL_79;
    }
    v26 = v87[1];
    if ( ((v26 - 1) & 0xFFFFFFFC) == 0 && v26 != 2 )
    {
      v27 = v87[2];
      if ( v27 == v87[4] )
      {
        v28 = v87[3];
        if ( v28 == v87[5]
          && v87[7] - 21 <= 1
          && v27 == v98.VideoSignalInfo.ActiveSize.cx
          && v28 == v98.VideoSignalInfo.ActiveSize.cy )
        {
          break;
        }
      }
    }
LABEL_57:
    v64 = 0LL;
    v49 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(v69 + 16))(v23, v52, &v64);
    v9 = v49;
    if ( v49 < 0 )
    {
      WdLogSingleEntry2(2LL, v23, v49);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire next source mode info from source mode set 0x%I64x (Status = 0x%I64x).",
        v23,
        v9,
        0LL,
        0LL,
        0LL);
      goto LABEL_79;
    }
  }
  LOBYTE(v50) = 1;
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v69 + 40))(v23, *v87, v50);
  if ( v29 < 0 )
  {
    WdLogSingleEntry3(3LL, *v52, v23, v29);
    goto LABEL_57;
  }
  v30 = *((unsigned int *)a1 + 3);
  v64 = 0LL;
  *(_QWORD *)v61 = 0LL;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *, __int64 *))(v68 + 24);
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0;
  v81[0] = 0;
  v32 = v31(v12, v30, v61, &v64);
  v9 = v32;
  if ( v32 < 0 )
  {
    WdLogSingleEntry3(2LL, v12, *((unsigned int *)a1 + 3), v32);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire target mode set from VidPn 0x%I64x for Target 0x%I64x (Status = 0x%I64x).",
      v12,
      *((unsigned int *)a1 + 3),
      v9,
      0LL,
      0LL);
    goto LABEL_79;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v81,
    *(__int64 *)v61,
    *(_QWORD *)(v68 + 32),
    v12);
  v33 = v82;
  *(_QWORD *)v61 = 0LL;
  v71 = 0LL;
  v34 = *(__int64 (__fastcall **)(__int64, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v64 + 8);
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0;
  v70[0] = 0;
  v35 = v34(v82, v61);
  v9 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(2LL, v33, v35);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire first target mode info from target mode set 0x%I64x (Status = 0x%I64x).",
      v33,
      v9,
      0LL,
      0LL,
      0LL);
    goto LABEL_30;
  }
  while ( 2 )
  {
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
      (__int64)v70,
      *(__int64 *)v61,
      *(_QWORD *)(v64 + 32),
      v33);
    v45 = v71;
    if ( !v71 )
    {
      v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v64 + 56))(v33, 0LL);
      v9 = v48;
      if ( v48 >= 0 )
      {
        if ( v70[0] )
          v72(v73, 0LL);
        if ( v81[0] )
          v83(v84, v33);
        v23 = v77;
        goto LABEL_57;
      }
      WdLogSingleEntry2(2LL, v33, v48);
      v57 = L"Failed to Dunpin target mode set 0x%I64x (Status = 0x%I64x).";
      goto LABEL_69;
    }
    LOBYTE(v47) = v65;
    v62 = 0;
    if ( (*(int (__fastcall **)(unsigned int *, struct _D3DKMDT_MONITOR_SOURCE_MODE *, __int64, char *))(v64 + 80))(
           v71,
           &v98,
           v47,
           &v62) < 0
      || !v62 )
    {
LABEL_49:
      *(_QWORD *)v61 = 0LL;
      v46 = (*(__int64 (__fastcall **)(__int64, unsigned int *, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v64 + 16))(
              v33,
              v45,
              v61);
      v9 = v46;
      if ( v46 >= 0 )
        continue;
      WdLogSingleEntry2(2LL, v33, v46);
      v57 = L"Failed to acquire next target mode info on target mode set 0x%I64x (Status = 0x%I64x).";
LABEL_69:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v57, v33, v9, 0LL, 0LL, 0LL);
      goto LABEL_71;
    }
    break;
  }
  LOBYTE(v36) = 1;
  v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v64 + 48))(v33, *v45, v36);
  if ( v37 < 0 )
  {
    WdLogSingleEntry3(3LL, *v45, v33, v37);
    goto LABEL_49;
  }
  *(_QWORD *)v61 = 0LL;
  v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v66 + 24))(
          v67,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          v61);
  v9 = v38;
  if ( v38 < 0 )
  {
    WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire VidPn path info from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).",
      *((unsigned int *)a1 + 2),
      *((unsigned int *)a1 + 3),
      v9,
      0LL,
      0LL);
    goto LABEL_71;
  }
  v39 = *(_DWORD *)(*(_QWORD *)v61 + 16LL);
  (*(void (__fastcall **)(__int64))(v66 + 32))(v67);
  if ( (v39 & 1) == 0 )
  {
LABEL_48:
    v45 = v71;
    goto LABEL_49;
  }
  LOBYTE(v60) = 1;
  v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int))(v66 + 64))(
          v67,
          *((unsigned int *)a1 + 2),
          *((unsigned int *)a1 + 3),
          1LL,
          v60);
  v9 = v40;
  if ( v40 < 0 )
  {
    WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v40);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to pin D3DKMDT_VPPS_IDENTITY on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).",
      *((unsigned int *)a1 + 2),
      *((unsigned int *)a1 + 3),
      v9,
      0LL,
      0LL);
  }
  else
  {
    *(_QWORD *)v61 = 0LL;
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *))(v66 + 24))(
            v67,
            *((unsigned int *)a1 + 2),
            *((unsigned int *)a1 + 3),
            v61);
    v9 = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v41);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire path info on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).",
        *((unsigned int *)a1 + 2),
        *((unsigned int *)a1 + 3),
        v9,
        0LL,
        0LL);
    }
    else
    {
      v42 = *(struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)(*(_QWORD *)v61 + 24LL);
      (*(void (__fastcall **)(__int64))(v66 + 32))(v67);
      v43 = D3DKMDT_VOT_SVIDEO;
      v61[0] = D3DKMDT_VOT_SVIDEO;
      while ( 1 )
      {
        if ( BmlIsSupportedPathRotation(v43, v42) )
        {
          v63[0] = 0;
          memset(&v97, 0, sizeof(v97));
          PopulateDisplayModeFromPresentPath(
            (_DWORD)v52,
            (_DWORD)v71,
            1,
            v61[0],
            1,
            1,
            0,
            2,
            (__int64)&v97,
            (__int64)v63);
          LODWORD(v9) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v97);
          if ( (int)v9 < 0 )
            break;
          if ( v63[0] )
          {
            ++v97.IntegerRefreshRate;
            *(_DWORD *)&v97.Flags |= 2u;
            LODWORD(v9) = MODE_UNION_LIST::AddUniqueMode((MODE_UNION_LIST *)(a1 + 3), &v97);
            if ( (int)v9 < 0 )
              break;
          }
        }
        v43 = v61[0] + 1;
        v61[0] = v43;
        if ( v43 > D3DKMDT_VOT_DVI )
        {
          v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(v66 + 72))(
                  v67,
                  *((unsigned int *)a1 + 2),
                  *((unsigned int *)a1 + 3),
                  0LL);
          v9 = v44;
          if ( v44 >= 0 )
            goto LABEL_48;
          WdLogSingleEntry3(2LL, *((unsigned int *)a1 + 2), *((unsigned int *)a1 + 3), v44);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to unpin content scaling on path from source 0x%I64x to target 0x%I64x (Status = 0x%I64x).",
            *((unsigned int *)a1 + 2),
            *((unsigned int *)a1 + 3),
            v9,
            0LL,
            0LL);
          break;
        }
      }
    }
  }
LABEL_71:
  if ( v70[0] )
    v72(v73, v71);
LABEL_30:
  if ( v81[0] )
    v83(v84, v33);
  v23 = v77;
LABEL_79:
  if ( v86[0] )
    v88(v89, v52);
LABEL_81:
  if ( v76[0] )
    v78(v79, v23);
LABEL_83:
  if ( v92[0] )
    v94(v95, v12);
  return (unsigned int)v9;
}
