/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncActionCompletedHandler::_)(Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_ @ 0x1800A9B98
 * Callers:
 *     wil::details::RunWhenCompleteAction_Microsoft::WRL::FtmBase_Windows::Foundation::IAsyncAction____lambda_a2e8b52356540255c945e7b53f94ed94__&_ @ 0x1800A9770 (wil--details--RunWhenCompleteAction_Microsoft--WRL--FtmBase_Windows--Foundation--IAsyncAction___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncActionCompletedHandler@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@QEAA@XZ @ 0x18024C27C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$01.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncActionCompletedHandler::___Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::FtmBase___lambda_1128af2452d8a6a7c7b4181d3e17205c___1_Windows::Foundation::IAsyncAction___enum_ABI::Windows::Foundation::AsyncStatus_(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::FtmBase>>();
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[8] = *a2;
  a1[9] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *a1 = off_180493A78;
  a1[1] = off_180493AA0;
  return a1;
}
