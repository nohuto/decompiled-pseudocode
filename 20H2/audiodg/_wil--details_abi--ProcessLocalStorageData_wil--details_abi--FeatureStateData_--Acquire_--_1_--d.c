/*
 * XREFs of _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$0 @ 0x140021AFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(a2 + 48);
}
