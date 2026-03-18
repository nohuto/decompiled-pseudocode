/*
 * XREFs of ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212A00
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0011764 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0212B8C (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C0212C04 (-InitializeInterface@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTARGETMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0212C7C (-InitializeInterface@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNSOURCEMODESET_.c)
 *     ?InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C0212CF4 (-InitializeInterface@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPNTOPOLOGY_INTERFACE@.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C0212D98 (-InitializeInterface@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C0212E2C (-InitializeInterface@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGK_VIDPN_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeVidPnMiniportInterfaces(void **this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rax
  struct _DXGK_VIDPN_INTERFACE *v6; // rdx
  DXGK_VIDPN_INTERFACE_V1_IMPL *v7; // rcx
  __int64 v8; // r9
  void *v9; // rax
  struct _DXGK_VIDPN_INTERFACE *v10; // rdx
  DXGK_VIDPN_INTERFACE_V2_IMPL *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  struct _DXGK_VIDPNTOPOLOGY_INTERFACE *v14; // rdx
  void *v15; // rcx
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rax
  struct _DXGK_VIDPNSOURCEMODESET_INTERFACE *v19; // rdx
  void *v20; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v21; // rbx
  __int64 v22; // r9
  void *v23; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v24; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v25; // rcx
  __int64 v26; // r9
  void *v27; // rax
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v28; // rdx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *v29; // rcx
  _QWORD *v31; // rdx

  v5 = (void *)operator new[](0x58uLL, 0x4E506456u, 256LL, a4);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 51, v5);
  v7 = (DXGK_VIDPN_INTERFACE_V1_IMPL *)this[51];
  if ( v7 )
  {
    DXGK_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v7, v6);
    v9 = (void *)operator new[](0x58uLL, 0x4E506456u, 256LL, v8);
    auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 52, v9);
    v11 = (DXGK_VIDPN_INTERFACE_V2_IMPL *)this[52];
    if ( !v11 )
    {
      v31 = this[1];
      if ( v31 )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPN_INTERFACE_V2_IMPL::InitializeInterface(v11, v10);
    v13 = operator new[](0x60uLL, 0x4E506456u, 256LL, v12);
    v15 = this[53];
    v16 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v13;
    if ( (void *)v13 != v15 )
      operator delete(v15);
    this[53] = v16;
    if ( !v16 )
    {
      v31 = this[1];
      if ( v31 )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v16, v14);
    v18 = operator new[](0x40uLL, 0x4E506456u, 256LL, v17);
    v20 = this[54];
    v21 = (DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v18;
    if ( (void *)v18 != v20 )
      operator delete(v20);
    this[54] = v21;
    if ( !v21 )
    {
      v31 = this[1];
      if ( v31 )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v21, v19);
    v23 = (void *)operator new[](0x40uLL, 0x4E506456u, 256LL, v22);
    auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 55, v23);
    v25 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)this[55];
    if ( !v25 )
    {
      v31 = this[1];
      if ( v31 )
        goto LABEL_14;
      goto LABEL_13;
    }
    DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v25, v24);
    v27 = (void *)operator new[](0x40uLL, 0x4E506456u, 256LL, v26);
    auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(this + 56, v27);
    v29 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL *)this[56];
    if ( v29 )
    {
      DXGK_VIDPNTARGETMODESET_INTERFACE_V2_IMPL::InitializeInterface(v29, v28);
      return 0LL;
    }
    v31 = this[1];
    if ( !v31 )
    {
LABEL_13:
      WdLogSingleEntry0(1LL);
      v31 = this[1];
    }
  }
  else
  {
    v31 = this[1];
    if ( !v31 )
      goto LABEL_13;
  }
LABEL_14:
  WdLogSingleEntry1(6LL, v31[2]);
  return 3221225495LL;
}
