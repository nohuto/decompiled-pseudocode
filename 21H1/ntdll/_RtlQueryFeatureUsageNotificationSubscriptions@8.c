/*
 * XREFs of _RtlQueryFeatureUsageNotificationSubscriptions@8 @ 0x4B3696E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12 @ 0x4B3A130B (_RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet@12.c)
 */

int __thiscall RtlQueryFeatureUsageNotificationSubscriptions(void *this, int a2, int a3)
{
  int AllFeatureUsageSubscriptionNotificationsFromBufferSet; // esi
  int v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+4h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-4h] BYREF

  v7 = 0;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(
                                                            (int)this,
                                                            1,
                                                            &v6,
                                                            &v7);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(a3);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v7 )
    RtlpFcBufferManagerDereferenceBuffers(v5, v6);
  return AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
