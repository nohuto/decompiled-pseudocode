/*
 * XREFs of _RtlSubscribeForFeatureUsageNotification@8 @ 0x4B369810
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 */

NTSTATUS __cdecl RtlSubscribeForFeatureUsageNotification(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  return RtlpFcUpdateUsageSubscriptions(0);
}
