/*
 * XREFs of ?CheckDirectFlipSupport@COverlayContext@@AEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1801B7D5C
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x1801B7EE4 (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEBVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::CheckDirectFlipSupport(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rax

  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 184LL))(*a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 112LL))(
           v8,
           a2,
           a3,
           a4,
           a5);
}
