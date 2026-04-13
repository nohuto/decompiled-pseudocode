/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001A640
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$1 @ 0x1800CF5A1 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800CF5A1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$1 @ 0x1800CF5D7 (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$1 @ 0x1800CF631 (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800CF655 (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800D0392 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper_::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper__::_1_::dtor$1 @ 0x1800D090E (_std--_Ref_count_obj_ContentDeliveryManager--Background--CorrelationVectorWrapper_-_ea_1800D090E.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800D143A (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800D2117 (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800D2117.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$4 @ 0x1800D49C4 (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
