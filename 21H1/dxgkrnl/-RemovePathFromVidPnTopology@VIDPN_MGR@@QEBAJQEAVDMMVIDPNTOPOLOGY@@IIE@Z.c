/*
 * XREFs of ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C02DBC34
 * Callers:
 *     ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C02D7940 (-DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z.c)
 *     ?RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z @ 0x1C02DFC00 (-RemovePath@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIE@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0009724 (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000976C (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C000D8D0 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000D9D0 (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C000E144 (-UnpinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0010CF0 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00130FC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0018388 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ @ 0x1C0018818 (-UnpinMode@DMMVIDPNTARGETMODESET@@QEAAJXZ.c)
 *     ?UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C001A41C (-UnpinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C0058F6C (--0DMMVIDPNTARGETMODE@@QEAA@IT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0059688 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C011CA6C (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C011CED4 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C0128620 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C0129B6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012A008 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DACD4 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C02DB258 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 Container; // rdi
  BOOLEAN v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  int NumPathsFromSource; // eax
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r8d
  unsigned int v42; // r8d
  __int64 v43; // rbx
  __int64 v44; // rcx
  DMMVIDPNTARGETMODESET *v45; // rbx
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // rax
  DMMVIDPNTARGETMODESET *v49; // rbx
  DMMVIDPNSOURCEMODE *v50; // rcx
  UINT cx; // ecx
  int v52; // eax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  struct DMMVIDPNSOURCEMODESET *v56; // rdi
  __int64 v57; // rbx
  _QWORD *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  struct DMMVIDPNTARGETMODESET *v66; // rbx
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v77; // [rsp+20h] [rbp-E0h]
  char v78; // [rsp+40h] [rbp-C0h]
  char v79; // [rsp+41h] [rbp-BFh]
  unsigned int v80; // [rsp+44h] [rbp-BCh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v81; // [rsp+48h] [rbp-B8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v82; // [rsp+4Ch] [rbp-B4h]
  unsigned int v83; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v84; // [rsp+58h] [rbp-A8h] BYREF
  struct DMMVIDPNSOURCEMODESET *v85; // [rsp+60h] [rbp-A0h] BYREF
  struct DMMVIDPNTARGETMODESET *v86; // [rsp+68h] [rbp-98h] BYREF
  DMMVIDPNTARGETMODESET *v87; // [rsp+70h] [rbp-90h] BYREF
  DMMVIDPNTARGETMODESET *v88; // [rsp+78h] [rbp-88h] BYREF
  DXGK_ENUM_PIVOT v89; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v90[24]; // [rsp+88h] [rbp-78h] BYREF
  _D3DKMDT_VIDPN_SOURCE_MODE v91; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v92[72]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v93[56]; // [rsp+118h] [rbp+18h] BYREF
  int v94; // [rsp+150h] [rbp+50h]

  v5 = a4;
  v6 = a3;
  v83 = a4;
  v78 = 0;
  v79 = 0;
  Path = 0LL;
  memset(&v91, 0, sizeof(v91));
  DMMVIDPNTARGETMODE::DMMVIDPNTARGETMODE((DMMVIDPNTARGETMODE *)v92, 0LL, 0);
  v82 = D3DKMDT_VPPS_UNPINNED;
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
    (__int64)v90,
    ((unsigned __int64)a2 + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    2u,
    v12,
    v77,
    1LL);
  v18 = DMMVIDPNTOPOLOGY::RemovePath(a2, (unsigned int)v6, v5, 0LL);
  v23 = v18;
  if ( v18 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v90, v19);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160, v26);
    v31 = *((_QWORD *)this + 1);
    if ( !v31 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v28, v27);
      WdLogEvent5_WdAssertion(v32);
      v31 = *((_QWORD *)this + 1);
    }
    v33 = *(_QWORD *)(v31 + 16);
    v34 = *(_QWORD *)(v33 + 2672);
    if ( *(_BYTE *)(v34 + 249) && *(_BYTE *)(v34 + 250)
      || (v35 = *(_QWORD **)(*(_QWORD *)(v33 + 216) + 64LL), *(_DWORD *)(v35[5] + 28LL) >= 0x4003u) )
    {
      v84 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(a2, (unsigned int)v6, &v84);
      v23 = NumPathsFromSource;
      if ( NumPathsFromSource == -1071774919 )
      {
        v84 = 0LL;
        goto LABEL_46;
      }
      if ( NumPathsFromSource < 0 )
        goto LABEL_19;
      if ( v84 != 1 )
        goto LABEL_46;
      v80 = 0;
      v38 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((char **)a2, (unsigned int)v6, 0LL, &v80);
      v23 = v38;
      if ( v38 < 0 )
      {
LABEL_19:
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v27);
LABEL_30:
        v37[4] = Container & -(__int64)(Container != -88);
        v37[3] = v6;
        v37[5] = v23;
LABEL_84:
        WdLogEvent5_WdError(v37);
        return (unsigned int)v23;
      }
      if ( v80 == -1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v35, v27);
        WdLogEvent5_WdAssertion(v39);
      }
      Path = DMMVIDPNTOPOLOGY::FindPath(a2, v6, v80);
      if ( !Path )
      {
        v40 = WdLogNewEntry5_WdAssertion(v35, v27);
        WdLogEvent5_WdAssertion(v40);
      }
      v41 = *((_DWORD *)Path + 29);
      if ( v41 != 254 && (((unsigned int)D3DKMDT_VPPR_GET_OFFSET_ROTATION(v41) - 2) & 0xFFFFFFFD) == 0 )
      {
        if ( !a5 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v27);
          v23 = -1071774970LL;
          goto LABEL_30;
        }
        v81 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v42);
        v13 = v81;
        DMMVIDPNPRESENTPATH::UnpinContentRotation(Path);
        v82 = *((_DWORD *)Path + 28);
        if ( v82 != D3DKMDT_VPPS_UNPINNED )
          DMMVIDPNPRESENTPATH::UnpinContentScaling(Path);
        v43 = *((_QWORD *)Path + 12);
        v44 = *(_QWORD *)(v43 + 104);
        if ( v44 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v44 + 96), 1u);
          v45 = *(DMMVIDPNTARGETMODESET **)(v43 + 104);
          v88 = v45;
          if ( v45 )
          {
            v46 = *((_QWORD *)v45 + 18);
            if ( v46 )
            {
              v79 = 1;
              DMMVIDEOSIGNALMODE::Initialize(
                (DMMVIDEOSIGNALMODE *)v93,
                (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v46 + 72));
              v94 = *(_DWORD *)(v46 + 128);
              DMMVIDPNTARGETMODESET::UnpinMode(v45);
            }
            v13 = v81;
          }
        }
        else
        {
          v88 = 0LL;
        }
        v47 = *((_QWORD *)Path + 11);
        v48 = *(_QWORD *)(v47 + 104);
        if ( v48 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v48 + 96), 1u);
          v49 = *(DMMVIDPNTARGETMODESET **)(v47 + 104);
          v87 = v49;
          if ( v49 )
          {
            v50 = (DMMVIDPNSOURCEMODE *)*((_QWORD *)v49 + 18);
            if ( v50 )
            {
              v78 = 1;
              DMMVIDPNSOURCEMODE::Serialize(v50, &v91);
              DMMVIDPNTARGETMODESET::UnpinMode(v49);
              if ( v91.Type != D3DKMDT_RMT_TEXT )
              {
                v91.Format.Graphics.PrimSurfSize = (D3DKMDT_2DREGION)__PAIR64__(
                                                                       v91.Format.Graphics.PrimSurfSize.cx,
                                                                       v91.Format.Graphics.PrimSurfSize.cy);
                cx = v91.Format.Graphics.VisibleRegionSize.cx;
                v91.Format.Graphics.VisibleRegionSize.cx = v91.Format.Graphics.VisibleRegionSize.cy;
                *(_QWORD *)(&v91.Format.Text + 3) = cx;
              }
            }
          }
        }
        else
        {
          v87 = 0LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v87, 0LL);
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v88, 0LL);
      }
    }
LABEL_46:
    if ( *((struct DMMVIDPNTOPOLOGY *const *)a2 + 3) != (struct DMMVIDPNTOPOLOGY *const)((char *)a2 + 24) )
    {
      v89.VidPnSourceId = -1;
      v89.VidPnTargetId = -1;
      v52 = VIDPN_MGR::FormalizeVidPnChange(
              (__int64)this,
              (D3DKMDT_HVIDPN)(Container & -(__int64)(Container != -88)),
              2LL,
              1,
              &v89);
      v23 = v52;
      if ( v52 < 0 )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v27);
        v37[4] = v83;
        v37[3] = v6;
        v37[5] = Container & -(__int64)(Container != -88);
        v37[6] = v23;
        goto LABEL_84;
      }
    }
    if ( v78 )
    {
      v53 = *((_QWORD *)Path + 11);
      v54 = *(_QWORD *)(v53 + 104);
      if ( !v54 )
      {
        v85 = 0LL;
LABEL_52:
        v55 = WdLogNewEntry5_WdError(v35, v27);
        WdLogEvent5_WdError(v55);
        LODWORD(v23) = -1071774958;
LABEL_53:
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v85, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v54 + 96));
      v56 = *(struct DMMVIDPNSOURCEMODESET **)(v53 + 104);
      v85 = v56;
      if ( !v56 )
        goto LABEL_52;
      v57 = 0LL;
      v35 = (_QWORD *)*((_QWORD *)v56 + 6);
      if ( v35 != (_QWORD *)((char *)v56 + 48) )
        v57 = (__int64)(v35 - 1);
      if ( !v57 )
        goto LABEL_52;
      do
      {
        if ( v91.Type != D3DKMDT_RMT_TEXT && *(_DWORD *)(v57 + 72) != 2 )
          v91.Format.Graphics.Stride = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v57)->Stride;
        if ( DMMVIDPNSOURCEMODE::operator==(v57, (__int64)&v91) )
          break;
        v58 = *(_QWORD **)(v57 + 8);
        v57 = (__int64)(v58 - 1);
        if ( v58 == (_QWORD *)((char *)v56 + 48) )
          v57 = 0LL;
      }
      while ( v57 );
      if ( !v57 )
        goto LABEL_52;
      v59 = VIDPN_MGR::PinVidPnSourceMode(this, v56, *(_DWORD *)(v57 + 24), 1);
      v23 = v59;
      if ( v59 < 0 )
      {
        v62 = WdLogNewEntry5_WdError(v61, v60);
        *(_QWORD *)(v62 + 24) = v23;
        WdLogEvent5_WdError(v62);
        goto LABEL_53;
      }
      auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v85, 0LL);
    }
    if ( v79 )
    {
      v63 = *((_QWORD *)Path + 12);
      v64 = *(_QWORD *)(v63 + 104);
      if ( !v64 )
      {
        v86 = 0LL;
LABEL_72:
        v65 = WdLogNewEntry5_WdError(v35, v27);
        WdLogEvent5_WdError(v65);
        LODWORD(v23) = -1071774958;
LABEL_73:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v86, 0LL);
        return (unsigned int)v23;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v64 + 96));
      v66 = *(struct DMMVIDPNTARGETMODESET **)(v63 + 104);
      v86 = v66;
      if ( !v66 )
        goto LABEL_72;
      v67 = Set<DMMVIDPNTARGETMODE>::FindByValue((__int64)v66 + 24, (__int64)v92);
      if ( !v67 )
        goto LABEL_72;
      v68 = VIDPN_MGR::PinVidPnTargetMode(this, v66, *(_DWORD *)(v67 + 24), 1);
      v23 = v68;
      if ( v68 < 0 )
      {
        v71 = WdLogNewEntry5_WdError(v70, v69);
        *(_QWORD *)(v71 + 24) = v23;
        WdLogEvent5_WdError(v71);
        goto LABEL_73;
      }
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v86, 0LL);
    }
    if ( v82 == D3DKMDT_VPPS_UNPINNED
      || (v72 = VIDPN_MGR::PinPathContentScaling((ADAPTER_DISPLAY **)this, Path, v82, v30), v23 = v72, v72 >= 0) )
    {
      if ( v13 == D3DKMDT_VPPR_UNPINNED
        || (v75 = VIDPN_MGR::PinPathContentRotation((ADAPTER_DISPLAY **)this, Path, v13, v30), v23 = v75, v75 >= 0) )
      {
        LODWORD(v23) = 0;
        return (unsigned int)v23;
      }
    }
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v74, v73);
    v37[3] = v23;
    goto LABEL_84;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
  v24[3] = v6;
  v24[4] = v5;
  v24[5] = a2;
  v24[6] = v23;
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v90, v25);
  return (unsigned int)v23;
}
