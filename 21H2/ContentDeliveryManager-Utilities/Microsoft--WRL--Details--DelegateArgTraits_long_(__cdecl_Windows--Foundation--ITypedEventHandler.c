/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::_)(Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d__&__1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::Invoke @ 0x18003EF30
 * Callers:
 *     <none>
 * Callees:
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180031C60 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceConnection____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::AppService::AppServiceClosedEventArgs___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs_____::___Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs____Microsoft::WRL::FtmBase___lambda_43d5cd0ad306fdb22566dc3fe2fed53d_____1_Windows::ApplicationModel::AppService::IAppServiceConnection___Windows::ApplicationModel::AppService::IAppServiceClosedEventArgs___::Invoke(
        __int64 a1,
        PVOID a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *(RTL_SRWLOCK **)(a1 + 64);
  if ( a2 == v2[16].Ptr )
    ContentManagement::ContentManagementService::CloseConnection(v2);
  return 0LL;
}
