/*
 * XREFs of ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C011DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000DCD4 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000DE24 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000DF68 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000F784 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C011DD58 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011DE7C (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C011DED8 (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::UpdatePathSupportInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r13
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v15; // rsi
  int v16; // eax
  char *v17; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v18; // rbx
  char *v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // r8
  void (__fastcall ***v44)(_QWORD, __int64); // rcx
  int v45; // edi
  void (__fastcall ***v46)(_QWORD, __int64); // rcx
  int v47; // edi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  char *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  int v64; // [rsp+20h] [rbp-20h] BYREF
  __int64 v65; // [rsp+28h] [rbp-18h]
  char v66; // [rsp+30h] [rbp-10h]
  __int64 v67; // [rsp+88h] [rbp+48h] BYREF
  __int64 v68; // [rsp+90h] [rbp+50h] BYREF

  v64 = -1;
  v65 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 7038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7038);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 7038LL);
  if ( !a2 )
  {
    v48 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v48 + 24) = this;
    WdLogEvent5_WdError(v48);
    v40 = -1073741811;
    goto LABEL_40;
  }
  v9 = *(_DWORD *)a2;
  v10 = *((unsigned int *)a2 + 1);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v13 = 0LL;
  v14 = (unsigned int)v10;
  v11[3] = v9;
  v11[4] = v10;
  v11[5] = this;
  v11[6] = a2;
  if ( !this || (v15 = this, *((_DWORD *)this + 46) != 1833173002) )
    v15 = 0LL;
  if ( !v15 )
  {
    v49 = WdLogNewEntry5_WdError(v12, 0LL);
    *(_QWORD *)(v49 + 24) = this;
    WdLogEvent5_WdError(v49);
    v40 = -1071774976;
    goto LABEL_40;
  }
  v16 = *((_DWORD *)a2 + 83);
  if ( (v16 & 1) == 0 )
    *((_DWORD *)a2 + 83) = v16 | 1;
  if ( *((_BYTE *)v15 + 76) <= 3u )
  {
    v50 = WdLogNewEntry5_WdAssertion(v12, 0LL);
    WdLogEvent5_WdAssertion(v50);
    v13 = 0LL;
  }
  if ( (*((_BYTE *)v15 + 78) & 8) == 0 )
  {
    v51 = WdLogNewEntry5_WdError(v12, 0LL);
    *(_QWORD *)(v51 + 24) = v15;
    WdLogEvent5_WdError(v51);
    v40 = -1073741790;
LABEL_73:
    v63 = WdLogNewEntry5_WdError(v53, v52);
    *(_QWORD *)(v63 + 24) = a2;
    *(_QWORD *)(v63 + 32) = v15;
    WdLogEvent5_WdError(v63);
    goto LABEL_40;
  }
  v17 = (char *)v15 + 24;
  v18 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)*((_QWORD *)v15 + 3);
  if ( v18 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v15 + 24) )
  {
    v19 = 0LL;
  }
  else
  {
    v19 = (char *)v18 - 8;
    if ( !v19 )
    {
LABEL_72:
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v17, 0LL);
      v62[3] = (unsigned int)v9;
      v62[4] = (unsigned int)v10;
      v62[5] = v15;
      WdLogEvent5_WdError(v62);
      v40 = -1071774937;
      goto LABEL_73;
    }
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v19 + 11) + 24LL) == (_DWORD)v9
        && *(_DWORD *)(*((_QWORD *)v19 + 12) + 24LL) == (_DWORD)v10 )
      {
        break;
      }
      v54 = (char *)*((_QWORD *)v19 + 1);
      v19 = v54 - 8;
      if ( v54 == v17 )
        v19 = 0LL;
    }
    while ( v19 );
  }
  if ( !v19 )
    goto LABEL_72;
  v20 = *((_QWORD *)v19 + 11);
  v21 = *(_QWORD *)(v20 + 104);
  if ( v21 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
    v22 = *(_QWORD *)(v20 + 104);
  }
  else
  {
    v22 = 0LL;
  }
  v23 = *((_QWORD *)v19 + 12);
  v68 = v22;
  v24 = *(_QWORD *)(v23 + 104);
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
    v25 = *(_QWORD *)(v23 + 104);
  }
  else
  {
    v25 = 0LL;
  }
  v67 = v25;
  if ( *(_QWORD *)(v22 + 144) && *(_QWORD *)(v25 + 144) )
  {
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v67, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v68, 0LL);
    if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v19, v26) )
    {
      if ( VIDPN_MGR::_bShouldLogOn1277688 && ((_DWORD)a2[4] & 6) != 0 )
      {
        v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v30 + 24) = (unsigned int)v9;
        *(_QWORD *)(v30 + 32) = v14;
        WdLogEvent5_WdWarning(v30);
        VIDPN_MGR::_bShouldLogOn1277688 = 0;
      }
      *((_DWORD *)v19 + 30) = 1;
      if ( !DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported((DMMVIDPNPRESENTPATH *)v19)
        && (*((_DWORD *)v19 + 30) & 0x10) != 0 )
      {
        v55 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        WdLogEvent5_WdWarning(v55);
        *((_DWORD *)v19 + 30) &= ~0x10u;
      }
      if ( !DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported((DMMVIDPNPRESENTPATH *)v19)
        && (*((_DWORD *)v19 + 30) & 8) != 0 )
      {
        v56 = WdLogNewEntry5_WdWarning(v35, v34, v36);
        WdLogEvent5_WdWarning(v56);
        *((_DWORD *)v19 + 30) &= ~8u;
      }
      goto LABEL_29;
    }
  }
  else
  {
    if ( v25 )
    {
      v44 = (void (__fastcall ***)(_QWORD, __int64))(v25 + 88);
      v45 = _InterlockedDecrement((volatile signed __int32 *)(v25 + 96));
      if ( v45 )
      {
        if ( v45 < 0 )
        {
          v57 = WdLogNewEntry5_WdError(v44, 0LL);
          *(_QWORD *)(v57 + 24) = v45;
          WdLogEvent5_WdError(v57);
        }
      }
      else if ( v25 != -88 )
      {
        (**v44)(v44, 1LL);
      }
    }
    v46 = (void (__fastcall ***)(_QWORD, __int64))(v22 + 88);
    v47 = _InterlockedDecrement((volatile signed __int32 *)(v22 + 96));
    if ( v47 )
    {
      if ( v47 < 0 )
      {
        v58 = WdLogNewEntry5_WdError(v46, v13);
        *(_QWORD *)(v58 + 24) = v47;
        WdLogEvent5_WdError(v58);
      }
    }
    else if ( v22 != -88 )
    {
      (**v46)(v46, 1LL);
    }
  }
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v19,
    (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)a2 + 4);
LABEL_29:
  DMMVIDPNPRESENTPATH::SetRotationSupport(
    (DMMVIDPNPRESENTPATH *)v19,
    (const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)a2 + 6);
  *(_DWORD *)((struct D3DKMDT_HVIDPNTOPOLOGY__ *)v19 + 42) = a2[83];
  v38 = *((_QWORD *)v15 + 17);
  if ( v38 <= 3 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v38, v37);
    WdLogEvent5_WdAssertion(v59);
    v38 = *((_QWORD *)v15 + 17);
  }
  v39 = *((_QWORD *)v15 + 18);
  if ( *(_QWORD *)(v39 + 24) != 255LL )
  {
    if ( v38 <= 3 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v38, v37);
      WdLogEvent5_WdAssertion(v60);
      v39 = *((_QWORD *)v15 + 18);
    }
    --*(_QWORD *)(v39 + 24);
  }
  if ( *((_QWORD *)v15 + 17) <= 3uLL )
  {
    v61 = WdLogNewEntry5_WdAssertion(v38, v37);
    WdLogEvent5_WdAssertion(v61);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v15 + 18) + 24LL) )
    ProtectableFromChange::DisallowModifyingAction((DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)v15 + 56), 3u);
  v40 = 0;
LABEL_40:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v37);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v64);
  return v40;
}
