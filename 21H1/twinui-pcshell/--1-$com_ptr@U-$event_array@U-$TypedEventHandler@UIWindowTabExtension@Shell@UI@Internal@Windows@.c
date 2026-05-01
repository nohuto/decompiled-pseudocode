/*
 * XREFs of ??1?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800B4A8C
 * Callers:
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::operator()_winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::dtor$0 @ 0x1800B10D1 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI--Shell-.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::WindowTabHost_::_1_::dtor$15 @ 0x1800B4795 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--WindowTabHost_--_1_--dtor$15.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::add_::_1_::dtor$0 @ 0x1800BB44B (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1800BB44B.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::remove_::_1_::dtor$0 @ 0x1800BC52B (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1800BC52B.c)
 *     _winrt::event_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs___::remove_::_1_::dtor$2 @ 0x1800BC543 (_winrt--event_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Interna_ea_1800BC543.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UWindowTabsChangedEventArgs@23456@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800BC9B8 (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@UIWindowTabExtension@Sh.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::~com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::IWindowTabExtension,winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs>>>::unconditional_release_ref(a1);
  return result;
}
