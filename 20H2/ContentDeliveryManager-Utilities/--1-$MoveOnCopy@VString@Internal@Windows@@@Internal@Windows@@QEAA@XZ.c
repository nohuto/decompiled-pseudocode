/*
 * XREFs of ??1?$MoveOnCopy@VString@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180007678
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$3 @ 0x1800CEB54 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics--GetTriggere.c)
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$1 @ 0x1800CEB66 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$1.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_c9aa0fd23ae4b9ff361376eb433e5573____::_1_::dtor$2 @ 0x1800CF372 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x1800CF9F1 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x1800CFA03 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800CFA15 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$8 @ 0x1800D0970 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$8.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$9 @ 0x1800D0982 (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$9.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$5 @ 0x1800D0A24 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$4 @ 0x1800D0BE8 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D0BE8.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$5 @ 0x1800D0BFA (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800D0BFA.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$2 @ 0x1800D290A (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800D290A.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
