/*
 * XREFs of ?Release@HomeGestureReadyChangedEventArgs@@UEAAKXZ @ 0x18010A790
 * Callers:
 *     ?Release@HomeGestureReadyChangedEventArgs@@W7EAAKXZ @ 0x18004B9C0 (-Release@HomeGestureReadyChangedEventArgs@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HomeGestureReadyChangedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureReadyChangedEventArgs>::Release(this);
}
