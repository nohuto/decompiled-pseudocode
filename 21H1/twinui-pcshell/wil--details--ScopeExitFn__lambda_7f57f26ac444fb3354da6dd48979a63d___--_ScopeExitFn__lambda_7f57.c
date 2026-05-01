/*
 * XREFs of wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x1803DFE08
 * Callers:
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803E0E10 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___(
        IUnknown ***a1)
{
  HRESULT result; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    ((void (__fastcall *)(IUnknown *))(*a1)[19]->lpVtbl[2].AddRef)((*a1)[19]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)*a1 + 19);
    return IUnknown_SetSite(*a1[1], 0LL);
  }
  return result;
}
