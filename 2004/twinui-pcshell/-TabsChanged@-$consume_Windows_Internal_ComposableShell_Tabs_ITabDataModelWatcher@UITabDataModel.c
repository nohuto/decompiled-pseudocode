/*
 * XREFs of ?TabsChanged@?$consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@$MP8type@?$abi@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@Z1??_97896@$BJA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@winrt@@UTabDataModelTabsChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18044C230
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@@Z @ 0x18044BCA8 (-RuntimeClassInitialize@VirtualDesktopGroupedViewsEventListener@@QEAAJPEAUITabViewManager@@PEAUI.c)
 * Callees:
 *     ??$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x180095928 (--$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UIViewCoordi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Tabs_ITabDataModelWatcher<winrt::Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::TabsChanged(
        __int64 (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2,
        __int64 a3,
        __int64 **a4)
{
  signed int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = (**a1)[17](*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  ___make_event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
