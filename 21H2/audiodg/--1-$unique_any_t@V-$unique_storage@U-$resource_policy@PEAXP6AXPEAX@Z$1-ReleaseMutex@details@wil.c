/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14003AD20
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140021A7C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Acquire_::_1_::dtor$1 @ 0x140021BEB (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Acq_ea_140021BEB.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x140026394 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::ProcessLocalData_::Acquire_::_1_::dtor$1 @ 0x14002D7A5 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--ProcessLocalData_--Acq_ea_14002D7A5.c)
 * Callees:
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x14001C1E4 (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,void *,0,std::nullptr_t>>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::ReleaseMutex(v2, a2);
}
