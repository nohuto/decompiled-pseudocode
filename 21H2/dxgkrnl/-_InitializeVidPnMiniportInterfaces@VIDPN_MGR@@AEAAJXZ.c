/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0194AEC
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0193CC0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0194C0C (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0194C84 (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0194CFC (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C0194DA0 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(VIDPN_MGR *this)
{
  DXGK_VIDPN_INTERFACE_V1_IMPL *v2; // rax
  struct _DXGK_VIDPN_INTERFACE *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  DXGK_VIDPN_INTERFACE_V1_IMPL *v6; // rcx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v7; // rdi
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v8; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v9; // rdi
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v10; // rax
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rdi
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rax
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v13; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)operator new[](0x58uLL, 0x4E506456u, PagedPool);
  v6 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 46);
  v7 = v2;
  if ( v2 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 46) = v7;
  if ( !v7 )
    goto LABEL_14;
  DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v7, v3);
  v8 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)operator new[](0x60uLL, 0x4E506456u, PagedPool);
  v6 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 47);
  v9 = v8;
  if ( v8 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 47) = v9;
  if ( !v9 )
    goto LABEL_14;
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v9, (struct _DXGK_VIDPNTOPOLOGY_INTERFACE *)v3);
  v10 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v6 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 48);
  v11 = v10;
  if ( v10 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 48) = v11;
  if ( !v11 )
    goto LABEL_14;
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v11, (struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *)v3);
  v12 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)operator new[](0x40uLL, 0x4E506456u, PagedPool);
  v6 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)*((_QWORD *)this + 49);
  v13 = v12;
  if ( v12 != v6 )
    operator delete(v6);
  *((_QWORD *)this + 49) = v13;
  if ( v13 )
  {
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v13, (struct _DXGK_VIDPNTARGETMODESET_INTERFACE *)v3);
    return 0LL;
  }
  else
  {
LABEL_14:
    v17 = WdLogNewEntry5_WdLowResource(v6, v3, v4, v5);
    v18 = *((_QWORD *)this + 1);
    if ( !v18 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v19);
      v18 = *((_QWORD *)this + 1);
    }
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v18 + 16);
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
