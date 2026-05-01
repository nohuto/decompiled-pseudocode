/*
 * XREFs of ?SetInputCallback@DragInputHandler@@UEAAJPEAUITabletModeInputCallback@@@Z @ 0x1803B6CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A148 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall DragInputHandler::SetInputCallback(DragInputHandler *this, struct ITabletModeInputCallback *a2)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 4, (__int64)a2);
  return 0LL;
}
