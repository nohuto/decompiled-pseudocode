/*
 * XREFs of ?SetVirtualDesktopItems@CMultitaskingViewFrame@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x18037A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::SetVirtualDesktopItems(
        CMultitaskingViewFrame *this,
        struct IObservableObjectArray *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 304, (__int64)a2);
  return 0LL;
}
