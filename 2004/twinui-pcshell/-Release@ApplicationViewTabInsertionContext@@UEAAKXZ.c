/*
 * XREFs of ?Release@ApplicationViewTabInsertionContext@@UEAAKXZ @ 0x1800803D0
 * Callers:
 *     ?Release@CVisibilityChangedEventArgs@@W7EAAKXZ @ 0x1800F2120 (-Release@CVisibilityChangedEventArgs@@W7EAAKXZ.c)
 *     ?Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ @ 0x1800F2130 (-Release@ApplicationViewTabInsertionContext@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApplicationViewTabInsertionContext::Release(ApplicationViewTabInsertionContext *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::ViewManagement::IApplicationViewTabInsertionContext,Microsoft::WRL::FtmBase>::Release(this);
}
