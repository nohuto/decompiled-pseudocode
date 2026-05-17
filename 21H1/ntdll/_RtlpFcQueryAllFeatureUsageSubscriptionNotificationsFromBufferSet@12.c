/*
 * XREFs of _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12 @ 0x4B3A130B
 * Callers:
 *     _RtlQueryFeatureUsageNotificationSubscriptions@8 @ 0x4B3696E0 (_RtlQueryFeatureUsageNotificationSubscriptions@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(int a1, void *a2, unsigned int *a3)
{
  return RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBuffer(a1 + 32, a2, a3);
}
