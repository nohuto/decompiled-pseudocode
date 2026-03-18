/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C03A3310 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0010B6C (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0010F08 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@I@Z @ 0x1C00111A8 (--0DMMVIDPNTARGETMODE@@QEAA@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0011AC8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0011B4C (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011E80 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C001CC0C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C001EC18 (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001F1E4 (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0068130 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00697AC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C01A6D08 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A7B04 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01AA47C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C039D9F8 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C039DE58 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // r12
  __int64 v7; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 Container; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int NumPathsFromSource; // eax
  int v22; // eax
  unsigned int v23; // r8d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v24; // r9d
  unsigned int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DMMVIDPNTARGETMODESET *v29; // rdx
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int64 v35; // rbx
  __int64 v36; // rax
  DMMVIDPNSOURCEMODESET *v37; // rbx
  DMMVIDPNSOURCEMODE *v38; // rcx
  __int64 v39; // rdx
  UINT cx; // ecx
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  struct DMMVIDPNSOURCEMODESET *v44; // rdi
  _QWORD *v45; // rcx
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+40h] [rbp-C0h]
  char v57; // [rsp+41h] [rbp-BFh]
  unsigned int v58[2]; // [rsp+48h] [rbp-B8h] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v59; // [rsp+50h] [rbp-B0h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v60; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v61; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v62; // [rsp+60h] [rbp-A0h] BYREF
  DMMVIDPNSOURCEMODESET *v63; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v64; // [rsp+70h] [rbp-90h] BYREF
  DXGK_ENUM_PIVOT v65; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v66[24]; // [rsp+80h] [rbp-80h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v67; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v68[72]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v69; // [rsp+108h] [rbp+8h]
  __int128 v70; // [rsp+118h] [rbp+18h]
  __int128 v71; // [rsp+128h] [rbp+28h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+140h] [rbp+40h]
  char v74; // [rsp+14Ch] [rbp+4Ch]
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int v77; // [rsp+160h] [rbp+60h]

  v5 = a4;
  v7 = a3;
  v56 = 0;
  v57 = 0;
  Path = 0LL;
  memset(&v67, 0, sizeof(v67));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v68, 0);
  v59 = D3DKMDT_VPPR_UNPINNED;
  v60 = D3DKMDT_VPPS_UNPINNED;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v7 == -1 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == -1 )
    WdLogSingleEntry0(1LL);
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
    WdLogSingleEntry0(1LL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v66,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v10,
    v55,
    1LL);
  v11 = DMMVIDPNTOPOLOGY::RemovePath(a2, v7, v5, 0LL);
  v14 = v11;
  if ( v11 < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v15[3] = v7;
    v15[4] = v5;
    v15[5] = a2;
    v15[6] = v14;
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66, v16);
    return (unsigned int)v14;
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v66, v12);
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
  v18 = *((_QWORD *)this + 1);
  if ( !v18 )
  {
    WdLogSingleEntry0(1LL);
    v18 = *((_QWORD *)this + 1);
  }
  v19 = *(_QWORD *)(v18 + 16);
  v20 = *(_QWORD *)(v19 + 2792);
  if ( *(_BYTE *)(v20 + 289) && *(_BYTE *)(v20 + 290)
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 216) + 64LL) + 40LL) + 28LL) >= 0x4003u )
  {
    v61 = 0LL;
    NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, v7, &v61);
    v14 = NumPathsFromSource;
    if ( NumPathsFromSource == -1071774919 )
    {
      v61 = 0LL;
      goto LABEL_45;
    }
    if ( NumPathsFromSource < 0 )
      goto LABEL_29;
    if ( v61 != 1 )
      goto LABEL_45;
    v58[0] = 0;
    v22 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)a2, v7, 0LL, v58);
    v14 = v22;
    if ( v22 < 0 )
    {
LABEL_29:
      WdLogSingleEntry3(2LL, v7, Container & -(__int64)(Container != -88), v14);
      return (unsigned int)v14;
    }
    if ( v58[0] == -1 )
      WdLogSingleEntry0(1LL);
    Path = DMMVIDPNTOPOLOGY::FindPath(a2, v7, v58[0]);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v23 = *((_DWORD *)Path + 29);
    v24 = D3DKMDT_VPPR_UNPINNED;
    if ( v23 == 254 || (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v23) - 2) & 0xFFFFFFFD) != 0 )
    {
      v59 = v24;
      goto LABEL_45;
    }
    if ( !a5 )
    {
      v14 = -1071774970LL;
      goto LABEL_29;
    }
    v59 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v25);
    DMMVIDPNPRESENTPATH::UnpinContentRotation(Path, v26);
    v60 = *((_DWORD *)Path + 28);
    if ( v60 != D3DKMDT_VPPS_UNPINNED )
      DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
    v27 = *((_QWORD *)Path + 12);
    v28 = *(_QWORD *)(v27 + 104);
    if ( v28 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
      v29 = *(DMMVIDPNTARGETMODESET **)(v27 + 104);
      v64 = v29;
      if ( v29 )
      {
        v30 = *((_QWORD *)v29 + 18);
        if ( v30 )
        {
          v31 = *(_OWORD *)(v30 + 72);
          v73 = *(_DWORD *)(v30 + 128);
          v32 = *(_OWORD *)(v30 + 88);
          v74 = *(_BYTE *)(v30 + 140);
          v75 = *(_QWORD *)(v30 + 144);
          v33 = *(_QWORD *)(v30 + 152);
          v69 = v31;
          v76 = v33;
          v34 = *(_OWORD *)(v30 + 104);
          LODWORD(v33) = *(_DWORD *)(v30 + 160);
          v70 = v32;
          v57 = 1;
          *(_QWORD *)&v32 = *(_QWORD *)(v30 + 120);
          v71 = v34;
          v77 = v33;
          v72 = v32;
          DMMVIDPNTARGETMODESET::UnpinMode(v29);
        }
      }
    }
    else
    {
      v64 = 0LL;
    }
    v35 = *((_QWORD *)Path + 11);
    v36 = *(_QWORD *)(v35 + 104);
    if ( v36 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 96));
      v37 = *(DMMVIDPNSOURCEMODESET **)(v35 + 104);
      v63 = v37;
      if ( v37 )
      {
        v38 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v37 + 18);
        if ( v38 )
        {
          v56 = 1;
          DMMVIDPNSOURCEMODE::Serialize(v38, &v67);
          DMMVIDPNSOURCEMODESET::UnpinMode(v37, v39);
          if ( v67.Type != D3DKMDT_RMT_TEXT )
          {
            v67.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                   v67.Format.Graphics.PrimSurfSize.cx,
                                                                   v67.Format.Graphics.PrimSurfSize.cy);
            cx = v67.Format.Graphics.VisibleRegionSize.cx;
            v67.Format.Graphics.VisibleRegionSize.cx = v67.Format.Graphics.VisibleRegionSize.cy;
            *(_QWORD *)(&v67.Format.Text + 3) = cx;
          }
        }
      }
    }
    else
    {
      v63 = 0LL;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v63, 0LL);
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v64, 0LL);
  }
LABEL_45:
  if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
  {
    v65.VidPnSourceId = -1;
    v65.VidPnTargetId = -1;
    v41 = VIDPN_MGR::FormalizeVidPnChange(
            (__int64)this,
            (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
            2LL,
            1,
            &v65);
    LODWORD(v14) = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry4(2LL, v7, v5, Container & -(__int64)(Container != -88), v41);
      return (unsigned int)v14;
    }
  }
  if ( v56 )
  {
    v42 = *((_QWORD *)Path + 11);
    v43 = *(_QWORD *)(v42 + 104);
    if ( !v43 )
    {
      v62 = 0LL;
LABEL_51:
      WdLogSingleEntry0(2LL);
      LODWORD(v14) = -1071774958;
LABEL_52:
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v62, 0LL);
      return (unsigned int)v14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 96));
    v44 = *(struct DMMVIDPNSOURCEMODESET **)(v42 + 104);
    v62 = v44;
    if ( !v44 )
      goto LABEL_51;
    v14 = 0LL;
    v45 = (_QWORD *)*((_QWORD *)v44 + 6);
    if ( v45 != (_QWORD *)((char *)v44 + 48) )
      v14 = (__int64)(v45 - 1);
    if ( !v14 )
      goto LABEL_51;
    do
    {
      if ( v67.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v14 + 72) != 2 )
        v67.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v14)->Stride;
      if ( DMMVIDPNSOURCEMODE::operator==(v14, (__int64)&v67) )
        break;
      v46 = *(_QWORD **)(v14 + 8);
      v14 = (__int64)(v46 - 1);
      if ( v46 == (_QWORD *)((char *)v44 + 48) )
        v14 = 0LL;
    }
    while ( v14 );
    if ( !v14 )
      goto LABEL_51;
    v47 = VIDPN_MGR::PinVidPnSourceMode(this, v44, *(_DWORD *)(v14 + 24), 1);
    LODWORD(v14) = v47;
    if ( v47 < 0 )
    {
      WdLogSingleEntry1(2LL, v47);
      goto LABEL_52;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v62, 0LL);
  }
  if ( v57 )
  {
    v48 = *((_QWORD *)Path + 12);
    v49 = *(_QWORD *)(v48 + 104);
    if ( !v49 )
    {
      *(_QWORD *)v58 = 0LL;
LABEL_71:
      WdLogSingleEntry0(2LL);
      LODWORD(v14) = -1071774958;
LABEL_72:
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)v58, 0LL);
      return (unsigned int)v14;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v49 + 96));
    v14 = *(_QWORD *)(v48 + 104);
    *(_QWORD *)v58 = v14;
    if ( !v14 )
      goto LABEL_71;
    v50 = Set<DMMVIDPNTARGETMODE>::FindByValue(v14 + 24, (__int64)v68);
    if ( !v50 )
      goto LABEL_71;
    v51 = VIDPN_MGR::PinVidPnTargetMode(this, (struct DMMVIDPNTARGETMODESET *const)v14, *(_DWORD *)(v50 + 24), 1);
    LODWORD(v14) = v51;
    if ( v51 < 0 )
    {
      WdLogSingleEntry1(2LL, v51);
      goto LABEL_72;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)v58, 0LL);
  }
  if ( (v60 == D3DKMDT_VPPS_UNPINNED || (v52 = VIDPN_MGR::PinPathContentScaling(this, Path, v60), v14 = v52, v52 >= 0))
    && (v59 == D3DKMDT_VPPR_UNPINNED || (v53 = VIDPN_MGR::PinPathContentRotation(this, Path, v59), v14 = v53, v53 >= 0)) )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    WdLogSingleEntry1(2LL, v14);
  }
  return (unsigned int)v14;
}
