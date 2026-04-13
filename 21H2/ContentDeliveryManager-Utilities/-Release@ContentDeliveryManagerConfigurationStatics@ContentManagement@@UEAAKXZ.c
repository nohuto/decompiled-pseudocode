/*
 * XREFs of ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x180025950
 * Callers:
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180029B10 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x180029BA0 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
