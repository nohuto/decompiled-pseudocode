/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C018AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000C448 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000C794 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000C7EC (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C018A32C (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v12; // eax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v13; // rdi
  char *v14; // rdi
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v29; // rax
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  char v32; // [rsp+30h] [rbp-10h]
  __int64 v33; // [rsp+88h] [rbp+48h] BYREF
  __int64 v34; // [rsp+90h] [rbp+50h] BYREF
  __int64 v35; // [rsp+98h] [rbp+58h]

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7038);
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, this);
    v25 = -1073741811;
    goto LABEL_38;
  }
  v7 = (__int64)*a2;
  v8 = (unsigned int)a2[1];
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
  v10 = (unsigned int)v8;
  v11 = (unsigned int)v7;
  v35 = (unsigned int)v8;
  v9[3] = v7;
  v9[4] = (unsigned int)v8;
  v9[5] = this;
  v9[6] = a2;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v25 = -1071774976;
    goto LABEL_38;
  }
  v12 = a2[83];
  if ( (*(_BYTE *)&v12 & 1) == 0 )
    a2[83] = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT)(*(_DWORD *)&v12 | 1);
  if ( *((_BYTE *)this + 76) <= 3u )
  {
    WdLogSingleEntry0(1LL);
    v10 = v8;
  }
  if ( (*((_BYTE *)this + 78) & 8) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    v25 = -1073741790;
    goto LABEL_55;
  }
  v13 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)this + 3);
  if ( v13 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
    goto LABEL_53;
  v14 = (char *)v13 - 8;
  if ( !v14 )
    goto LABEL_53;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v14 + 11) + 24LL) == (_DWORD)v7
      && *(_DWORD *)(*((_QWORD *)v14 + 12) + 24LL) == (_DWORD)v8 )
    {
      break;
    }
    v29 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v14 + 1);
    v14 = (char *)v29 - 8;
    if ( v29 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
      v14 = 0LL;
  }
  while ( v14 );
  if ( !v14 )
  {
LABEL_53:
    WdLogSingleEntry3(2LL, (unsigned int)v7, v10, this);
    v25 = -1071774937;
LABEL_55:
    WdLogSingleEntry2(2LL, a2, this);
    goto LABEL_38;
  }
  v15 = *((_QWORD *)v14 + 11);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD *)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *((_QWORD *)v14 + 12);
  v34 = v17;
  v19 = *(_QWORD *)(v18 + 104);
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v18 + 104);
  }
  else
  {
    v20 = 0LL;
  }
  v33 = v20;
  if ( *(_QWORD *)(v17 + 144) && *(_QWORD *)(v20 + 144) )
  {
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v33, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v34, 0LL);
    if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v14) )
    {
      if ( VIDPN_MGR::_bShouldLogOn1277688 && (*(_DWORD *)&a2[4] & 6) != 0 )
      {
        WdLogSingleEntry2(3LL, v11, v35);
        VIDPN_MGR::_bShouldLogOn1277688 = 0;
      }
      LODWORD(v33) = 1;
      v21 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v33;
      goto LABEL_27;
    }
  }
  else
  {
    if ( v20 )
      ReferenceCounted::Release((ReferenceCounted *)(v20 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v17 + 88));
  }
  v21 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&a2[4];
LABEL_27:
  DMMVIDPNPRESENTPATH::SetScalingSupport((struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v14, v21);
  DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v14, a2 + 6);
  *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)v14 + 42) = a2[83];
  v23 = *((_QWORD *)this + 17);
  if ( v23 <= 3 )
  {
    WdLogSingleEntry0(1LL);
    v23 = *((_QWORD *)this + 17);
  }
  v24 = *((_QWORD *)this + 18);
  if ( *(_QWORD *)(v24 + 24) != 255LL )
  {
    if ( v23 <= 3 )
    {
      WdLogSingleEntry0(1LL);
      v24 = *((_QWORD *)this + 18);
    }
    --*(_QWORD *)(v24 + 24);
  }
  if ( *((_QWORD *)this + 17) <= 3uLL )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) )
  {
    LOBYTE(v22) = 3;
    ProtectableFromChange::DisallowModifyingAction((DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 56), v22);
  }
  v25 = 0;
LABEL_38:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v30);
  }
  return v25;
}
