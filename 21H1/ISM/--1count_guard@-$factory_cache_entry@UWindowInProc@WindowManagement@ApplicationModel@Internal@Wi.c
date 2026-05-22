/*
 * XREFs of ??1count_guard@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA@XZ @ 0x1800BCF68
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_a0948b4265dfdd13ae56361479f20a08__&__::_1_::dtor$0 @ 0x1800516B5 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--WindowManagement--.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_a0948b4265dfdd13ae56361479f20a08__&__::_1_::dtor$4 @ 0x1800516D9 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800516D9.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_57c88d371994e6bd0831055e214b4d4d__&__::_1_::dtor$0 @ 0x1800BCDC3 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800BCDC3.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_57c88d371994e6bd0831055e214b4d4d__&__::_1_::dtor$4 @ 0x1800BCDDB (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800BCDDB.c)
 * Callees:
 *     <none>
 */

volatile signed __int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowInProc,winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>::count_guard::~count_guard(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  _InterlockedDecrement64(*a1);
  return result;
}
