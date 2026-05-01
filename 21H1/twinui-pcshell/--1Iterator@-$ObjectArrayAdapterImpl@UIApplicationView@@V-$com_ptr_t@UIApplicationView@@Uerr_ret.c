/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@details@@QEAA@XZ @ 0x1800A9A24
 * Callers:
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1800A9E8D (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 *     _AgileRegistrationList::Register_::_1_::dtor$0 @ 0x18012AF12 (_AgileRegistrationList--Register_--_1_--dtor$0.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_______::COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults_________lambda_98ae2f8acbcd0270b071efd378e5a46f____::_1_::dtor$1 @ 0x18020A2A4 (_Windows--Internal--COperationLambdaVar_0__lambda_98ae2f8acbcd0270b071efd378e5a46f__ea_18020A2A4.c)
 *     _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x18020F38C (_TaskFlowImmersiveShellBroker--GetCurrentActivityForAllViewsAsync_--_1_--dtor$1.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$3 @ 0x180225A35 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$3.c)
 *     _HolographicViewHostItemLedger::GetLastActiveItem_::_1_::dtor$4 @ 0x180225A41 (_HolographicViewHostItemLedger--GetLastActiveItem_--_1_--dtor$4.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$3 @ 0x180265802 (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$3.c)
 *     _TitleBarController::EnsureTitleBarFactoryStatics_::_1_::dtor$7 @ 0x180265826 (_TitleBarController--EnsureTitleBarFactoryStatics_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(
        __int64 a1)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
