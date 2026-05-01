/*
 * XREFs of ??1?$producer_ref@UWindowTabHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1800C9588
 * Callers:
 *     _winrt::impl::invoke_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::UI::Shell::IWindowTabExtension_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__winrt::Windows::Internal::Shell::implementation::WindowTabHost_winrt::Windows::Internal::UI::Shell::WindowTabsChangedEventArgs__::_1_::dtor$0 @ 0x1800C7F39 (_winrt--impl--invoke_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--UI-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::producer_ref<winrt::Windows::Internal::Shell::WindowTabHost>::~producer_ref<winrt::Windows::Internal::Shell::WindowTabHost>(
        __int64 *a1)
{
  *a1 = 0LL;
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a1);
}
