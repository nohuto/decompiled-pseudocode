/*
 * XREFs of ??1?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x1800BD9E4
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs___lambda_3f1824dc1e3f74f4dd6d5479c590fd1e___::Invoke_::_1_::dtor$11 @ 0x180050330 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_180050330.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_95b2e7e0ed422bec234fdc177c39fe17___::Invoke_::_1_::dtor$11 @ 0x1800503D0 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800503D0.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B26C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

__int64 __fastcall std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::~pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 8);
  if ( *v1 )
    return winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v1);
  return result;
}
