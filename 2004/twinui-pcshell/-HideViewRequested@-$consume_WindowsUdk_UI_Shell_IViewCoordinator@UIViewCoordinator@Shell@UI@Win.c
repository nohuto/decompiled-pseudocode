/*
 * XREFs of ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18006722C
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800660EC (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BHA@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x180095928 (--$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UIViewCoordi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801B25C8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*a1 + 104LL))(*a1, *a4, &v8);
  if ( v6 < 0 )
    winrt::throw_hresult((unsigned int)v6);
  ___make_event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BHA_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
    a2,
    a1,
    v8);
  return a2;
}
