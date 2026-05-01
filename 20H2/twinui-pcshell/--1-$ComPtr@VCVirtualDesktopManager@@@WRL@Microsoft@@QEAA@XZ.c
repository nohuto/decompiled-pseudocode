/*
 * XREFs of ??1?$ComPtr@VCVirtualDesktopManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180439198
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopManager_IVirtualDesktopCollection___&_IVirtualDesktopVisibilityPolicy___&_IVirtualDesktopNotification2___&_IVirtualDesktopForegroundPolicy___&_IVirtualDesktopPersistence2___&_IVirtualDesktopGroupedViewsPolicy___&_IVirtualDesktopLock___&__::_1_::dtor$1 @ 0x180438132 (_Microsoft--WRL--Details--MakeAndInitialize_CVirtualDesktopManager_CVirtualDesktopM_ea_180438132.c)
 *     _CVirtualDesktopManager_CreateInstance_::_1_::dtor$0 @ 0x1804394F3 (_CVirtualDesktopManager_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CVirtualDesktopManager>::~ComPtr<CVirtualDesktopManager>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CVirtualDesktopManager>::InternalRelease(a1);
}
