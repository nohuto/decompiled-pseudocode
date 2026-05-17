/*
 * XREFs of _RtlSubscribeForFeatureUsageNotification@8 @ 0x4B369810
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcUpdateUsageSubscriptions@12 @ 0x4B3698AF (_RtlpFcUpdateUsageSubscriptions@12.c)
 */

int __stdcall RtlSubscribeForFeatureUsageNotification(int a1, int a2)
{
  return RtlpFcUpdateUsageSubscriptions(0);
}
