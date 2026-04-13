/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18001A244
 * Callers:
 *     _ContentManagement::IdentityManager::TryGetUpgradeOfferedStateAsync_::_1_::dtor$1 @ 0x1800CF02D (_ContentManagement--IdentityManager--TryGetUpgradeOfferedStateAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ResolveLayoutBindingsOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_986e623d0ce256a5f32fdc507965e6c2____::_1_::dtor$1 @ 0x1800CF360 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymo_ea_1800CF360.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CHSTRINGResult_HSTRING_____Windows::Internal::ComTaskPoolHandler__lambda_eb8e642fd6379236047631f6462c9202____::_1_::dtor$1 @ 0x1800CF4D3 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CHSTRINGResult_HSTRING_____Windows--In.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$3 @ 0x1800CFCBC (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_1800CFCBC.c)
 *     _Windows::Internal::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_b59dbdfd0007f2d89c20db91cc7697cd____::_1_::dtor$0 @ 0x1800D2CE2 (_Windows--Internal--COperationLambdaVar_0__lambda_b59dbdfd0007f2d89c20db91cc7697cd__Windows--Int.c)
 *     _UnlockActionHelper::Execute_::_1_::dtor$4 @ 0x1800D4473 (_UnlockActionHelper--Execute_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
