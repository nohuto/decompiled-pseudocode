/*
 * XREFs of _RtlQueryFeatureUsageNotificationSubscriptions@8 @ 0x4B3696E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12 @ 0x4B3A130B (_RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12.c)
 */

NTSTATUS __cdecl RtlQueryFeatureUsageNotificationSubscriptions(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS Subscriptions,
        PSIZE_T SubscriptionCount)
{
  int v2; // ecx
  int AllFeatureUsageSubscriptionNotificationsFromBufferSet; // esi
  int v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = 0;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(v2, 1, &v6, &v7);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(SubscriptionCount);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v7 )
    RtlpFcBufferManagerDereferenceBuffers(v5, v6);
  return AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
