/*
 * XREFs of ?__abi_winrt_ptrto_string_dtor@@YAXQE$ADVString@Platform@@@Z @ 0x1802EBD40
 * Callers:
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$0 @ 0x1802EB5AD (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$0.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$1 @ 0x1802EB5B9 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$1.c)
 *     _wil::details::GetPlatformExceptionMessage_::_1_::dtor$3 @ 0x1802EB5E6 (_wil--details--GetPlatformExceptionMessage_--_1_--dtor$3.c)
 *     _wil::details::MaybeGetExceptionString_::_1_::dtor$0 @ 0x1802EB703 (_wil--details--MaybeGetExceptionString_--_1_--dtor$0.c)
 *     _wil::details::ThrowPlatformException_::_1_::dtor$1 @ 0x1802EBB10 (_wil--details--ThrowPlatformException_--_1_--dtor$1.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$1 @ 0x1802F1402 (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802F1402.c)
 *     _Platform::Details::CustomBox_WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler___::ToString_::_1_::dtor$0 @ 0x1802F140E (_Platform--Details--CustomBox_WindowsInternal--ComposableShell--Desktop--XamlExplor_ea_1802F140E.c)
 *     _XamlAllUpViewController::CreateAndAppendSwitcherContextMenuItem_::_1_::dtor$0 @ 0x180318E8F (_XamlAllUpViewController--CreateAndAppendSwitcherContextMenuItem_--_1_--dtor$0.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$8 @ 0x1803195CA (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$8.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$10 @ 0x1803195F4 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$14 @ 0x180319636 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$14.c)
 *     _XamlAllUpViewController::CreateVirtualDesktopContextMenuItems_::_1_::dtor$20 @ 0x180319690 (_XamlAllUpViewController--CreateVirtualDesktopContextMenuItems_--_1_--dtor$20.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$9 @ 0x18031A166 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$9.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::GetContextMenu_::_1_::dtor$10 @ 0x18031A172 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--GetContextMenu_--_1_--dtor$10.c)
 *     _XamlAllUpViewController::GetResourceString_::_1_::dtor$1 @ 0x18031A33E (_XamlAllUpViewController--GetResourceString_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::GetTabletModeContextMenuItemString_::_1_::dtor$3 @ 0x18031A56E (_XamlAllUpViewController--GetTabletModeContextMenuItemString_--_1_--dtor$3.c)
 *     _Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop::Name::get_::_1_::dtor$0 @ 0x18031DBD3 (_Windows--Internal--ComposableShell--Multitasking--IVirtualDesktop--Name--get_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall __abi_winrt_ptrto_string_dtor(HSTRING string)
{
  return WindowsDeleteString_0(string);
}
