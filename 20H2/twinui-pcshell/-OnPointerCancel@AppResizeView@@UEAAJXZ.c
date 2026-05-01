/*
 * XREFs of ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x1804129B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelResize@AppResizeView@@AEAAXXZ @ 0x180411E50 (-CancelResize@AppResizeView@@AEAAXXZ.c)
 */

__int64 __fastcall AppResizeView::OnPointerCancel(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 64) )
    AppResizeView::CancelResize((AppResizeView *)((char *)this - 32));
  return 0LL;
}
