/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::QueryInterface @ 0x18001B950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = *a2
     - winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>>::value )
    v3 = a2[1] + 0x2432220159604A7ELL;
  if ( !v3 )
    goto LABEL_4;
  v5 = *a2 - winrt::impl::guid_storage<winrt::Windows::Foundation::IUnknown>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::Windows::Foundation::IUnknown>::value )
    v5 = a2[1] - 0x46000000000000C0LL;
  if ( !v5 )
    goto LABEL_4;
  v6 = *a2 - winrt::impl::guid_storage<winrt::impl::IAgileObject>::value;
  if ( *a2 == winrt::impl::guid_storage<winrt::impl::IAgileObject>::value )
    v6 = a2[1] + 0x6FA470359B110040LL;
  if ( v6 )
  {
    v7 = *a2 - winrt::impl::guid_storage<winrt::impl::IMarshal>::value;
    if ( *a2 == winrt::impl::guid_storage<winrt::impl::IMarshal>::value )
      v7 = a2[1] - 0x46000000000000C0LL;
    if ( v7 )
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
LABEL_4:
    *a3 = a1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 16), 1u);
    return 0LL;
  }
}
