/*
 * XREFs of ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0212490
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0211BD0 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C021267C (-InitializeInterface@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTARGETMODE.c)
 *     ?InitializeInterface@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C0212720 (-InitializeInterface@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNSOURCEMODE.c)
 *     ?InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C021278C (-InitializeInterface@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNTOPOLOGY_INTERF.c)
 *     ?InitializeInterface@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C0212868 (-InitializeInterface@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPN_INTERFACE@@@Z.c)
 *     ?InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C02128D4 (-InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENT.c)
 *     ?InitializeInterface@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE@@@Z @ 0x1C0212920 (-InitializeInterface@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENT.c)
 *     ?InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z @ 0x1C021296C (-InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_InitializeDmmClientInterfaces(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  struct _DXGDMM_INTERFACE *v6; // rdx
  void *v7; // rcx
  DXGDMM_INTERFACE_V1_IMPL *v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rax
  struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE *v11; // rdx
  void *v12; // rcx
  DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rax
  struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE *v16; // rdx
  void *v17; // rcx
  DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rax
  struct _DXGDMM_VIDPN_INTERFACE *v21; // rdx
  void *v22; // rcx
  DXGDMM_VIDPN_INTERFACE_V1_IMPL *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v26; // rdx
  void *v27; // rcx
  DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rax
  struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *v31; // rdx
  void *v32; // rcx
  DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v33; // rdi
  __int64 v34; // r9
  __int64 v35; // rax
  struct _DXGDMM_VIDPNTARGETMODESET_INTERFACE *v36; // rdx
  void *v37; // rcx
  DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v38; // rdi
  __int64 v40; // rdx

  v5 = operator new[](0x58uLL, 0x4E506456u, 256LL, a4);
  v7 = (void *)*((_QWORD *)this + 57);
  v8 = (DXGDMM_INTERFACE_V1_IMPL *)v5;
  if ( (void *)v5 != v7 )
    operator delete(v7);
  *((_QWORD *)this + 57) = v8;
  if ( v8 )
  {
    DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(v8, v6);
    v10 = operator new[](0x20uLL, 0x4E506456u, 256LL, v9);
    v12 = (void *)*((_QWORD *)this + 58);
    v13 = (DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL *)v10;
    if ( (void *)v10 != v12 )
      operator delete(v12);
    *((_QWORD *)this + 58) = v13;
    if ( !v13 )
    {
      v40 = *((_QWORD *)this + 1);
      if ( v40 )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL::InitializeInterface(v13, v11);
    v15 = operator new[](0x20uLL, 0x4E506456u, 256LL, v14);
    v17 = (void *)*((_QWORD *)this + 59);
    v18 = (DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *)v15;
    if ( (void *)v15 != v17 )
      operator delete(v17);
    *((_QWORD *)this + 59) = v18;
    if ( !v18 )
    {
      v40 = *((_QWORD *)this + 1);
      if ( v40 )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::InitializeInterface(v18, v16);
    v20 = operator new[](0x38uLL, 0x4E506456u, 256LL, v19);
    v22 = (void *)*((_QWORD *)this + 60);
    v23 = (DXGDMM_VIDPN_INTERFACE_V1_IMPL *)v20;
    if ( (void *)v20 != v22 )
      operator delete(v22);
    *((_QWORD *)this + 60) = v23;
    if ( !v23 )
    {
      v40 = *((_QWORD *)this + 1);
      if ( v40 )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPN_INTERFACE_V1_IMPL::InitializeInterface(v23, v21);
    v25 = operator new[](0x88uLL, 0x4E506456u, 256LL, v24);
    v27 = (void *)*((_QWORD *)this + 61);
    v28 = (DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v25;
    if ( (void *)v25 != v27 )
      operator delete(v27);
    *((_QWORD *)this + 61) = v28;
    if ( !v28 )
    {
      v40 = *((_QWORD *)this + 1);
      if ( v40 )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::InitializeInterface(v28, v26);
    v30 = operator new[](0x38uLL, 0x4E506456u, 256LL, v29);
    v32 = (void *)*((_QWORD *)this + 62);
    v33 = (DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *)v30;
    if ( (void *)v30 != v32 )
      operator delete(v32);
    *((_QWORD *)this + 62) = v33;
    if ( !v33 )
    {
      v40 = *((_QWORD *)this + 1);
      if ( v40 )
        goto LABEL_25;
      goto LABEL_24;
    }
    DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(v33, v31);
    v35 = operator new[](0x60uLL, 0x4E506456u, 256LL, v34);
    v37 = (void *)*((_QWORD *)this + 63);
    v38 = (DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)v35;
    if ( (void *)v35 != v37 )
      operator delete(v37);
    *((_QWORD *)this + 63) = v38;
    if ( v38 )
    {
      DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::InitializeInterface(v38, v36);
      return 0LL;
    }
    v40 = *((_QWORD *)this + 1);
    if ( !v40 )
    {
LABEL_24:
      WdLogSingleEntry0(1LL);
      v40 = *((_QWORD *)this + 1);
    }
  }
  else
  {
    v40 = *((_QWORD *)this + 1);
    if ( !v40 )
      goto LABEL_24;
  }
LABEL_25:
  WdLogSingleEntry1(6LL, *(_QWORD *)(v40 + 16));
  return 3221225495LL;
}
