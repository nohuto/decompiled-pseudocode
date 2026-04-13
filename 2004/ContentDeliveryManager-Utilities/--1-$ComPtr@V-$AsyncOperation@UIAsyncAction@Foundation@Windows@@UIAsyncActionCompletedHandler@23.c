/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001E898
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetUpgradeOfferedStateAsync_::_1_::dtor$3 @ 0x1800CF48F (_ContentManagement--IdentityManager--TryGetUpgradeOfferedStateAsync_--_1_--dtor$3.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_c9aa0fd23ae4b9ff361376eb433e5573____::_1_::dtor$4 @ 0x1800CF7D8 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentM_ea_1800CF7D8.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_eb8e642fd6379236047631f6462c9202____::_1_::dtor$4 @ 0x1800CF94B (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING____ea_1800CF94B.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$7 @ 0x1800D0134 (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$7 @ 0x1800D016E (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$7 @ 0x1800D01A8 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800D01A8.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$7 @ 0x1800D01E2 (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$7.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_b4e7505319051468c039db95bcc1cb18____::_1_::dtor$1 @ 0x1800D0883 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800D0883.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$4 @ 0x1800D08EA (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800D08EA.c)
 *     _Windows::Internal::MakeAsyncActionHelper_Windows::Internal::ComTaskPoolHandler_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2____::_1_::dtor$0 @ 0x1800D23DD (_Windows--Internal--MakeAsyncActionHelper_Windows--Internal--ComTaskPoolHandler_Microsoft--WRL--.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_b59dbdfd0007f2d89c20db91cc7697cd____::_1_::dtor$1 @ 0x1800D30EA (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_ea_1800D30EA.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$8 @ 0x1800D48EB (_UnlockActionHelper--Execute_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
