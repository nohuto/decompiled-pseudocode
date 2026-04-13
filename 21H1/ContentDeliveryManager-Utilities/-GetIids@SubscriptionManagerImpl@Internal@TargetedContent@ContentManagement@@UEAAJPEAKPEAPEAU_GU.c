/*
 * XREFs of ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800404A0
 * Callers:
 *     ?GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180047AC0 (-GetIids@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::GetIids(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
