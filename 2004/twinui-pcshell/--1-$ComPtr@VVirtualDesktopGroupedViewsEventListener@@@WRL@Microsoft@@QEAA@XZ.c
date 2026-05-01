/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@QEAA@XZ @ 0x18044B4C0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopGroupedViewsEventListener_VirtualDesktopGroupedViewsEventListener_ITabViewManager___&_Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter___&_IInspectable___&_IVirtualDesktopManagerPrivate___&_IVirtualDesktopPinnedAppsPrivate___&_IVirtualDesktopGroupedViewsPolicy___&_IVirtualDesktopLock___&__::_1_::dtor$1 @ 0x18044B0A7 (_Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopGroupedViewsEventListener_ea_18044B0A7.c)
 *     _VirtualDesktopGroupedViewsEventListener_CreateInstance_::_1_::dtor$0 @ 0x18044C353 (_VirtualDesktopGroupedViewsEventListener_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::~ComPtr<VirtualDesktopGroupedViewsEventListener>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease(a1);
}
