/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800293E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(__int64 a1)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::Release((ContentManagement::ContentDeliveryManagerConfigurationStatics *)(a1 - 40));
}
