/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x1800E6094
 * Callers:
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1800E5EF4 (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapCh.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18017C730 (-CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV-.c)
 */

char __fastcall COverlayContext::IsDirectFlipSupportedOnTarget(
        COverlayContext *this,
        const struct CCompositionSurfaceInfo *a2,
        struct ISwapChainRealization *a3)
{
  __int64 v3; // rax
  char v4; // bl
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_QWORD *)this + 1412);
  v4 = 0;
  if ( v3
    && *(const struct CCompositionSurfaceInfo **)(v3 + 16) == a2
    && *(_QWORD *)(*((_QWORD *)this + 1412) + 24LL) == (*(__int64 (__fastcall **)(const struct CCompositionSurfaceInfo *))(*(_QWORD *)a2 + 64LL))(a2) )
  {
    return 1;
  }
  v7 = *(_QWORD *)a3;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(struct ISwapChainRealization *, __int64 *, _QWORD))(v7 + 128))(a3, &v13, 0LL) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    v9 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)a3 + 40LL))(a3);
    v10 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 12LL) + 8;
    v11 = (**(__int64 (__fastcall ***)(char *, _BYTE *))v10)(v10, v14);
    v4 = COverlayContext::CheckDirectFlipSupport((_DWORD)this, v13, *(_DWORD *)(v11 + 8), v9, v8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return v4;
}
