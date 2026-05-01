/*
 * XREFs of ?RuntimeClassInitialize@CPPIAllUpViewController@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@@Z @ 0x18039DB00
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x18039D7DC (--$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIM.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180014660 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x18017A148 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 */

__int64 __fastcall CPPIAllUpViewController::RuntimeClassInitialize(
        CPPIAllUpViewController *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewManagerInternal *a3,
        struct IApplicationViewSwitcher *a4,
        struct IImmersiveAppCrusher *a5,
        struct ITabletModeViewManager *a6)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 5, (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 6, (__int64)a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 7, (__int64)a5);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 17, (__int64)a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 8, (__int64)a6);
  return 0LL;
}
