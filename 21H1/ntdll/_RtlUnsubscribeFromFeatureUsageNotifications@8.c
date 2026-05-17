/*
 * XREFs of _RtlUnsubscribeFromFeatureUsageNotifications@8 @ 0x4B369830
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 */

int __stdcall RtlUnsubscribeFromFeatureUsageNotifications(int a1, int a2)
{
  return RtlpFcUpdateUsageSubscriptions(1);
}
