/*
 * XREFs of ?Release@ApplicationViewTabInsertionContext@@UEAAKXZ @ 0x18007FC30
 * Callers:
 *     ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x1800CD6F0 (-Release@CVisibilityChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ @ 0x1800CD700 (-Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApplicationViewTabInsertionContext::Release(ApplicationViewTabInsertionContext *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(this);
}
