/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x14003AC30
 * Callers:
 *     ??_G?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z @ 0x1400215D8 (--_G-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAXI@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14002199C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$0 @ 0x140021AFF (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Acquire_--_1_--d.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::ProcessLocalData_::Acquire_::_1_::dtor$0 @ 0x14002D6C3 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--ProcessLocalData_--Acquire_--_1_--d.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B7E0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
