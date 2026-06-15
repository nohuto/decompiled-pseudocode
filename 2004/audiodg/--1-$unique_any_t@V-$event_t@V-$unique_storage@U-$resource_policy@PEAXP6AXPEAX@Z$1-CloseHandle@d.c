/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x140030558
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$1 @ 0x140022BAA (_CAudioDGModule--CAudioDGModule_--_1_--dtor$1.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$2 @ 0x140022BC0 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$2.c)
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$4 @ 0x140022BF2 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$4.c)
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::ProcessLocalData_::Acquire_::_1_::dtor$0 @ 0x140022C0B (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--ProcessLocalData_--Acquire_--_1_--d.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14001B52C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        wil::details **a1,
        void *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::CloseHandle(v2, a2);
}
