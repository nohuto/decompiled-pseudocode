/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180029350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(__int64 a1)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::Release((ContentManagement::ContentDeliveryManagerConfigurationStatics *)(a1 - 8));
}
