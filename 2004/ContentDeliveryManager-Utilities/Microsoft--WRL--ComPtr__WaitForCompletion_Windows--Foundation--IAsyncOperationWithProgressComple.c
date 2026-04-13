/*
 * XREFs of Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_ @ 0x18001A678
 * Callers:
 *     _WaitForCompletion_Windows::Foundation::IAsyncActionCompletedHandler_Windows::Foundation::IAsyncAction__::_1_::dtor$1 @ 0x1800CF766 (_WaitForCompletion_Windows--Foundation--IAsyncActionCompletedHandler_Windows--Found_ea_1800CF766.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::Security::Credentials::WebAccount_________::_1_::dtor$1 @ 0x1800CF911 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF911.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Core::AppListEntry_________::_1_::dtor$1 @ 0x1800CF9D2 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800CF9D2.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_bool__Windows::Foundation::IAsyncOperation_bool____::_1_::dtor$1 @ 0x1800CF9F6 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_bool__Windo_ea_1800CF9F6.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Internal::Security::WebAuthentication::UserHostIdentity____Windows::Foundation::IAsyncOperation_Windows::Internal::Security::WebAuthentication::UserHostIdentity______::_1_::dtor$1 @ 0x1800CFA1A (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--In_ea_1800CFA1A.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::AppService::AppServiceResponse____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::AppService::AppServiceResponse______::_1_::dtor$1 @ 0x1800D0A1E (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800D0A1E.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus__Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus____::_1_::dtor$1 @ 0x1800D0A42 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_enum_Window_ea_1800D0A42.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_________::_1_::dtor$1 @ 0x1800D27CC (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800D27CC.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_1_::dtor$1 @ 0x1800D27F0 (_WaitForCompletion_Windows--Foundation--IAsyncOperationWithProgressCompletedHandler_ea_1800D27F0.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_______Windows::Foundation::IAsyncOperation_Windows::Foundation::Collections::IVectorView_Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_________::_1_::dtor$1 @ 0x1800D2814 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Fo_ea_1800D2814.c)
 *     _WaitForCompletion_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult____Windows::Foundation::IAsyncOperation_Windows::ApplicationModel::Store::Preview::InstallControl::GetEntitlementResult______::_1_::dtor$1 @ 0x1800D2838 (_WaitForCompletion_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Ap_ea_1800D2838.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_::_ComPtr__WaitForCompletion_Windows::Foundation::IAsyncOperationWithProgressCompletedHandler_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress__Windows::Foundation::IAsyncOperationWithProgress_Windows::Management::Deployment::DeploymentResult___Windows::Management::Deployment::DeploymentProgress____::_2_::FTMEventDelegate_(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
