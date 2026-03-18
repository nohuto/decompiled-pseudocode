/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x1800E51C0
 * Callers:
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1800E5020 (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@details@wil@@QEAA_NXZ @ 0x1800E5E04 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2101c_27737997@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18017F330 (-CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV-.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        const struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-30h] BYREF

  v6 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2101c_27737997>::GetImpl'::`2'::impl) )
  {
    v7 = *((_QWORD *)this + 1412);
    if ( v7 )
    {
      if ( *(const struct CCompositionSurfaceInfo **)(v7 + 16) == a2
        && *(_QWORD *)(*((_QWORD *)this + 1412) + 24LL) == (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
      {
        return 1;
      }
    }
  }
  v8 = *(_QWORD *)a3;
  v14 = 0LL;
  if ( (*(int (__fastcall **)(struct ISwapChainRealization *, __int64 *, _QWORD))(v8 + 128))(a3, &v14, 0LL) >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    v10 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 40LL))(a3);
    v11 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 12LL) + 8;
    v12 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v11)(v11, v15);
    v6 = COverlayContext::CheckDirectFlipSupport((_DWORD)this, v14, *(_DWORD *)(v12 + 8), v10, v9);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v14);
  return v6;
}
