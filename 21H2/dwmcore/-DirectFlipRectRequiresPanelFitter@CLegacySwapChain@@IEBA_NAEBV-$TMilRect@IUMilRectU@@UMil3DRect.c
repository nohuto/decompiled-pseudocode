/*
 * XREFs of ?DirectFlipRectRequiresPanelFitter@CLegacySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18028B2D4
 * Callers:
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18028AB2C (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18028B78C (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CLegacySwapChain::DirectFlipRectRequiresPanelFitter(__int64 a1, _DWORD *a2)
{
  char v3; // bl
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v3 = 0;
  v4 = (void (__fastcall ***)(_QWORD, int *))(*(_QWORD *)(a1 + 80)
                                            + 8LL
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) + 16LL));
  (**v4)(v4, &v6);
  if ( *a2 || a2[1] || a2[2] - *a2 != v6 || a2[3] - a2[1] != v7 )
    return 1;
  return v3;
}
