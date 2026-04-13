/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180019A60
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$1 @ 0x1800CCDEB (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_1800CCDEB.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$1 @ 0x1800CCE21 (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$1 @ 0x1800CCE7B (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$0 @ 0x1800CCE9F (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::QueueActionAfterUnlock_::_1_::dtor$1 @ 0x1800CDB67 (_ContentManagement--ContentManagementService--QueueActionAfterUnlock_--_1_--dtor$1.c)
 *     _std::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper_::_Ref_count_obj_ContentDeliveryManager::Background::CorrelationVectorWrapper__::_1_::dtor$1 @ 0x1800CE0E3 (_std--_Ref_count_obj_ContentDeliveryManager--Background--CorrelationVectorWrapper_-_ea_1800CE0E3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$0 @ 0x1800CEC0F (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Internal--Subscr.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$2 @ 0x1800CF8EC (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_1800CF8EC.c)
 *     _UniqueExtendedExecutionSession::GetSharedExtendedExecutionSession_::_1_::dtor$4 @ 0x1800D2199 (_UniqueExtendedExecutionSession--GetSharedExtendedExecutionSession_--_1_--dtor$4.c)
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
