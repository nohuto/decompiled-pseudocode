/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface @ 0x18044BBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs___lambda_0b192ff2ee59a0e56115e85b2e997556___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = *a2
     - winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher,winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs>>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher,winrt::Windows::Internal::ComposableShell::Tabs::TabDataModelTabsChangedEventArgs>>::value )
    v3 = a2[1] - 0xC5FD4B384D629BBLL;
  if ( !v3 )
    goto LABEL_15;
  v4 = *a2 - winrt::impl::guid_storage<IUnknown>::value;
  if ( *a2 == winrt::impl::guid_storage<IUnknown>::value )
    v4 = a2[1] - 0x46000000000000C0LL;
  if ( !v4 )
    goto LABEL_15;
  v5 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
    v5 = a2[1] + 0x6FA470359B110040LL;
  if ( v5 )
  {
    v6 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
      v6 = a2[1] - 0x46000000000000C0LL;
    if ( v6 )
    {
      *a3 = 0LL;
      return 2147500034LL;
    }
    else
    {
      return winrt::impl::make_marshaler(a1, a3);
    }
  }
  else
  {
LABEL_15:
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), 1u);
    return 0LL;
  }
}
