/*
 * XREFs of ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800B3404
 * Callers:
 *     ??$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@?$interface_list@UIApplicationViewChangeListener@@UIImmersiveSettingsCacheNotification@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIWindowTabHostInternal@Shell@Internal@Windows@@@impl@winrt@@SAPEAXPEBUWindowTabHost@implementation@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800B32C0 (--$find@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@Uiid_finder@impl@6@@-$interf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::interface_list<VirtualDesktopNotificationBase<IVirtualDesktopNotification>,Windows::Internal::Shell::IWindowTabHostInternal>::find<winrt::Windows::Internal::Shell::implementation::WindowTabHost,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD **a2)
{
  _QWORD *v2; // r8

  v2 = *a2;
  if ( **a2 == winrt::impl::guid_storage<VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::value
    && v2[1] == 0x5A6065D954C6A1BELL )
  {
    return (a1 + 16) & -(__int64)(a1 != 0);
  }
  if ( *v2 == winrt::impl::guid_storage<Windows::Internal::Shell::IWindowTabHostInternal>::value
    && v2[1] == 0xED9C7F3DDF3E2E99uLL )
  {
    return (a1 + 24) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
