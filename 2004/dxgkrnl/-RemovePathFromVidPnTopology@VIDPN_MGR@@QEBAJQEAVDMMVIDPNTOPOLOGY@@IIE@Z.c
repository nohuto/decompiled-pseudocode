/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02E01B4
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02DBEC0 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C02E4180 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0005E84 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000619C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0007C04 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008208 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C00090F8 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C000A278 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A51C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000CA28 (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0017DF8 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A35C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0059F7C (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C005A698 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C010F944 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010FF20 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0110048 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C011F68C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0122764 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C0122A00 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01385EC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C013F3C4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DF254 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02DF7D8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 */

__int64 __fastcall VIDPN_MGR::RemovePathFromVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  __int64 v5; // rdi
  __int64 v6; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 Container; // rdi
  BOOLEAN v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // r8d
  unsigned int v44; // r8d
  __int64 v45; // rbx
  __int64 v46; // rcx
  DMMVIDPNTARGETMODESET *v47; // rbx
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rax
  DMMVIDPNTARGETMODESET *v51; // rbx
  DMMVIDPNSOURCEMODE *v52; // rcx
  UINT cx; // ecx
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  struct DMMVIDPNSOURCEMODESET *v58; // rdi
  __int64 v59; // rbx
  _QWORD *v60; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  struct DMMVIDPNTARGETMODESET *v68; // rbx
  __int64 v69; // rax
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  int v77; // eax
  __int64 v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+40h] [rbp-C0h]
  char v81; // [rsp+41h] [rbp-BFh]
  unsigned int v82; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v83; // [rsp+48h] [rbp-B8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v84; // [rsp+4Ch] [rbp-B4h]
  unsigned int v85; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v86; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v87; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTARGETMODESET *v88; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v89; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v90; // [rsp+78h] [rbp-88h] BYREF
  DXGK_ENUM_PIVOT v91; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v92[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v93; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v94[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v95[56]; // [rsp+118h] [rbp+18h] BYREF
  int v96; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v85 = a4;
  v80 = 0;
  v81 = 0;
  Path = 0LL;
  memset(&v93, 0, sizeof(v93));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v94, 0LL, 0);
  v84 = D3DKMDT_VPPS_UNPINNED;
  v13 = D3DKMDT_VPPR_UNPINNED;
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v6 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( (_DWORD)v5 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( ((unsigned __int16)((2 << *((_BYTE *)a2 + 76)) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(1LL, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v92,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v12,
    v79,
    1LL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath(a2, (unsigned int)v6, v5, 0LL);
  v23 = v18;
  if ( v18 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v92,
      v19,
      v21,
      v22);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v28);
    v33 = *((_QWORD *)this + 1);
    if ( !v33 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v30, v29);
      WdLogEvent5_WdAssertion(v34);
      v33 = *((_QWORD *)this + 1);
    }
    v35 = *(_QWORD *)(v33 + 16);
    v36 = *(_QWORD *)(v35 + 2696);
    if ( *(_BYTE *)(v36 + 249) && *(_BYTE *)(v36 + 250)
      || (v37 = *(_QWORD **)(*(_QWORD *)(v35 + 216) + 64LL), *(_DWORD *)(v37[5] + 28LL) >= 0x4003u) )
    {
      v86 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v6, &v86);
      v23 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v86 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v86 != 1 )
        goto LABEL_46;
      v82 = 0;
      v40 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)a2, (unsigned int)v6, 0LL, &v82);
      v23 = v40;
      if ( v40 < 0 )
      {
LABEL_19:
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v37, v29);
LABEL_30:
        v39[4] = Container & -(__int64)(Container != -88);
        v39[3] = v6;
        v39[5] = v23;
LABEL_84:
        WdLogEvent5_WdError(v39);
        return (unsigned int)v23;
      }
      if ( v82 == -1 )
      {
        v41 = WdLogNewEntry5_WdAssertion(v37, v29);
        WdLogEvent5_WdAssertion(v41);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v82);
      if ( !Path )
      {
        v42 = WdLogNewEntry5_WdAssertion(v37, v29);
        WdLogEvent5_WdAssertion(v42);
      }
      v43 = *((_DWORD *)Path + 29);
      if ( v43 != 254 && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v43) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !a5 )
        {
          v39 = (_QWORD *)WdLogNewEntry5_WdError(v37, v29);
          v23 = -1071774970LL;
          goto LABEL_30;
        }
        v83 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v44);
        v13 = v83;
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
        v84 = *((_DWORD *)Path + 28);
        if ( v84 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
        v45 = *((_QWORD *)Path + 12);
        v46 = *(_QWORD *)(v45 + 104);
        if ( v46 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v46 + 96), 1u);
          v47 = *(DMMVIDPNTARGETMODESET **)(v45 + 104);
          v90 = v47;
          if ( v47 )
          {
            v48 = *((_QWORD *)v47 + 18);
            if ( v48 )
            {
              v81 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v95,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v48 + 72));
              v96 = *(_DWORD *)(v48 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v47);
            }
            v13 = v83;
          }
        }
        else
        {
          v90 = 0LL;
        }
        v49 = *((_QWORD *)Path + 11);
        v50 = *(_QWORD *)(v49 + 104);
        if ( v50 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v50 + 96), 1u);
          v51 = *(DMMVIDPNTARGETMODESET **)(v49 + 104);
          v89 = v51;
          if ( v51 )
          {
            v52 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v51 + 18);
            if ( v52 )
            {
              v80 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v52, &v93);
              DMMVIDPNTARGETMODESET::UnpinMode(v51);
              if ( v93.Type != D3DKMDT_RMT_TEXT )
              {
                v93.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v93.Format.Graphics.PrimSurfSize.cx,
                                                                       v93.Format.Graphics.PrimSurfSize.cy);
                cx = v93.Format.Graphics.VisibleRegionSize.cx;
                v93.Format.Graphics.VisibleRegionSize.cx = v93.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v93.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v89 = 0LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v89, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v90, 0LL);
      }
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v91.VidPnSourceId = -1;
      v91.VidPnTargetId = -1;
      v54 = VIDPN_MGR::FormalizeVidPnChange(
              (__int64)this,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              2LL,
              1,
              &v91);
      v23 = v54;
      if ( v54 < 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v37, v29);
        v39[4] = v85;
        v39[3] = v6;
        v39[5] = Container & -(__int64)(Container != -88);
        v39[6] = v23;
        goto LABEL_84;
      }
    }
    if ( v80 )
    {
      v55 = *((_QWORD *)Path + 11);
      v56 = *(_QWORD *)(v55 + 104);
      if ( !v56 )
      {
        v87 = 0LL;
LABEL_52:
        v57 = WdLogNewEntry5_WdError(v37, v29);
        WdLogEvent5_WdError(v57);
        LODWORD(v23) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v87, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v56 + 96));
      v58 = *(struct DMMVIDPNSOURCEMODESET **)(v55 + 104);
      v87 = v58;
      if ( !v58 )
        goto LABEL_52;
      v59 = 0LL;
      v37 = (_QWORD *)*((_QWORD *)v58 + 6);
      if ( v37 != (_QWORD *)((char *)v58 + 48) )
        v59 = (__int64)(v37 - 1);
      if ( !v59 )
        goto LABEL_52;
      do
      {
        if ( v93.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v59 + 72) != 2 )
          v93.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v59)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v59, (__int64)&v93) )
          break;
        v60 = *(_QWORD **)(v59 + 8);
        v59 = (__int64)(v60 - 1);
        if ( v60 == (_QWORD *)((char *)v58 + 48) )
          v59 = 0LL;
      }
      while ( v59 );
      if ( !v59 )
        goto LABEL_52;
      v61 = VIDPN_MGR::PinVidPnSourceMode(this, v58, *(_DWORD *)(v59 + 24), 1);
      v23 = v61;
      if ( v61 < 0 )
      {
        v64 = WdLogNewEntry5_WdError(v63, v62);
        *(_QWORD *)(v64 + 24) = v23;
        WdLogEvent5_WdError(v64);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v87, 0LL);
    }
    if ( v81 )
    {
      v65 = *((_QWORD *)Path + 12);
      v66 = *(_QWORD *)(v65 + 104);
      if ( !v66 )
      {
        v88 = 0LL;
LABEL_72:
        v67 = WdLogNewEntry5_WdError(v37, v29);
        WdLogEvent5_WdError(v67);
        LODWORD(v23) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v66 + 96));
      v68 = *(struct DMMVIDPNTARGETMODESET **)(v65 + 104);
      v88 = v68;
      if ( !v68 )
        goto LABEL_72;
      v69 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v68 + 24, (__int64)v94);
      if ( !v69 )
        goto LABEL_72;
      v70 = VIDPN_MGR::PinVidPnTargetMode(this, v68, *(_DWORD *)(v69 + 24), 1);
      v23 = v70;
      if ( v70 < 0 )
      {
        v73 = WdLogNewEntry5_WdError(v72, v71);
        *(_QWORD *)(v73 + 24) = v23;
        WdLogEvent5_WdError(v73);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
    }
    if ( v84 == D3DKMDT_VPPS_UNPINNED
      || (v74 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, v84, v32), v23 = v74, v74 >= 0) )
    {
      if ( v13 == D3DKMDT_VPPR_UNPINNED
        || (v77 = VIDPN_MGR::PinPathContentRotation((ADAPTER_DISPLAY **)this, Path, v13, v32), v23 = v77, v77 >= 0) )
      {
        LODWORD(v23) = 0;
        return (unsigned int)v23;
      }
    }
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v76, v75);
    v39[3] = v23;
    goto LABEL_84;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  v24[3] = v6;
  v24[4] = v5;
  v24[5] = a2;
  v24[6] = v23;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v92, v25, v26, v27);
  return (unsigned int)v23;
}
