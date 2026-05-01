/*
 * XREFs of ?CancelResize@AppResizeView@@AEAAXXZ @ 0x180412770
 * Callers:
 *     ?OnPointerCancel@AppResizeView@@UEAAJXZ @ 0x1804130F0 (-OnPointerCancel@AppResizeView@@UEAAJXZ.c)
 *     ?OnKeyDown@AppResizeView@@UEAAJK@Z @ 0x180413120 (-OnKeyDown@AppResizeView@@UEAAJK@Z.c)
 *     ?OnKeyUp@AppResizeView@@UEAAJK@Z @ 0x180413210 (-OnKeyUp@AppResizeView@@UEAAJK@Z.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1804127B4 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x1804129F0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180413A28 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

void __fastcall AppResizeView::CancelResize(AppResizeView *this)
{
  if ( !*((_BYTE *)this + 96) )
  {
    *((_BYTE *)this + 96) = 1;
    AppResizeView::Hide((AppResizeView *)((char *)this + 24), 1);
    AppResizeView::Cleanup(this);
    TabletModeTelemetry::TMAppResize::Stop((char *)this + 152, 0xFFFFFFFFLL);
  }
}
