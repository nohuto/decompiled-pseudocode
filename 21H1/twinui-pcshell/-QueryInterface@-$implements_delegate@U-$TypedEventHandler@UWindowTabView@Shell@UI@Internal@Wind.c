/*
 * XREFs of ?QueryInterface@?$implements_delegate@U?$TypedEventHandler@UWindowTabView@Shell@UI@Internal@Windows@winrt@@UWindowTabViewPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@V_lambda_183baf27b090b4cfecd741efea205505_@@@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C2FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>,_lambda_183baf27b090b4cfecd741efea205505_>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Shell::WindowTabView,winrt::Windows::Internal::UI::Shell::WindowTabViewPropertyChangedEventArgs>>::value
    && a2[1] == 0xB4032615DDE0A598uLL
    || *a2 == winrt::impl::guid_storage<IUnknown>::value && a2[1] == 0x46000000000000C0LL
    || *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value && a2[1] == 0x905B8FCA64EEFFC0uLL )
  {
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), 1u);
    return 0LL;
  }
  else if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value && a2[1] == 0x46000000000000C0LL )
  {
    return winrt::impl::make_marshaler(a1, a3);
  }
  else
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
}
