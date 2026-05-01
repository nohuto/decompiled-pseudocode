/*
 * XREFs of ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C7B80
 * Callers:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@4@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C7BE4 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@imp_ea_1800C7BE4.c)
 * Callees:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C7CC4 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@imp_ea_1800C7CC4.c)
 */

__int64 __fastcall winrt::impl::interface_list<IApplicationViewChangeListener,IImmersiveSettingsCacheNotification,VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8

  v2 = *a2;
  if ( **a2 == winrt::impl::guid_storage<IApplicationViewChangeListener>::value && v2[1] == 0x5C48281337B642A9LL )
    return a1;
  if ( *v2 == winrt::impl::guid_storage<IImmersiveSettingsCacheNotification>::value && v2[1] == 0x867F291C4929849AuLL )
    return (a1 + 8) & -(__int64)(a1 != 0);
  else
    return winrt::impl::interface_list<VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>();
}
