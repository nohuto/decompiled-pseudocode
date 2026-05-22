/*
 * XREFs of ??1count_guard@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA@XZ @ 0x1800BCA08
 * Callers:
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_a0948b4265dfdd13ae56361479f20a08__&__::_1_::dtor$0 @ 0x180051075 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--WindowManagement--.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_a0948b4265dfdd13ae56361479f20a08__&__::_1_::dtor$4 @ 0x180051099 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_180051099.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_57c88d371994e6bd0831055e214b4d4d__&__::_1_::dtor$0 @ 0x1800BC863 (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800BC863.c)
 *     _winrt::impl::factory_cache_entry_winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewInProc_winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics_::call__lambda_57c88d371994e6bd0831055e214b4d4d__&__::_1_::dtor$4 @ 0x1800BC87B (_winrt--impl--factory_cache_entry_winrt--Windows--Internal--ApplicationModel--Windo_ea_1800BC87B.c)
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
