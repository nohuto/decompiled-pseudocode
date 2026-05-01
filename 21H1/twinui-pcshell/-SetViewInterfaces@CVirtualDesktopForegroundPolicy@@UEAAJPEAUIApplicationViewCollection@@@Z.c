/*
 * XREFs of ?SetViewInterfaces@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180414BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000FAAC (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

__int64 __fastcall CVirtualDesktopForegroundPolicy::SetViewInterfaces(
        CVirtualDesktopForegroundPolicy *this,
        struct IApplicationViewCollection *a2)
{
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 5, (__int64)a2);
  return 0LL;
}
