/*
 * XREFs of _RtlUnsubscribeFromFeatureUsageNotifications@8 @ 0x4B369830
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 */

NTSTATUS __cdecl RtlUnsubscribeFromFeatureUsageNotifications(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  return RtlpFcUpdateUsageSubscriptions(1);
}
