/*
 * XREFs of ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x1803F0050
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x1803EF648 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnKeyUp(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) && !*((_BYTE *)this + 436) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
