/*
 * XREFs of wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___ @ 0x180401A90
 * Callers:
 *     _TabletModeViewManager::ShowWindowArrangementView_::_1_::dtor$3 @ 0x180403424 (_TabletModeViewManager--ShowWindowArrangementView_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___(
        IUnknown ***a1)
{
  IUnknown *v2; // rcx
  HRESULT result; // eax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    v2 = (*a1)[19];
    if ( v2 )
    {
      ((void (__fastcall *)(IUnknown *))v2->lpVtbl[2].AddRef)(v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)*a1 + 19);
    }
    return IUnknown_SetSite(*a1[1], 0LL);
  }
  return result;
}
