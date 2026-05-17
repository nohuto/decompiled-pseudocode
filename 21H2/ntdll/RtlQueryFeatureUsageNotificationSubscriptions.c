/*
 * XREFs of RtlQueryFeatureUsageNotificationSubscriptions @ 0x180101C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005E074 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005E1AC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet @ 0x18011B400 (RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet.c)
 */

__int64 __fastcall RtlQueryFeatureUsageNotificationSubscriptions(__int64 a1, __int64 a2)
{
  int AllFeatureUsageSubscriptionNotificationsFromBufferSet; // ebx
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v7, &v6);
  if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
  {
    AllFeatureUsageSubscriptionNotificationsFromBufferSet = RtlpFcQueryAllFeatureUsageSubscriptionNotificationsFromBufferSet(
                                                              v6,
                                                              a1,
                                                              a2);
    if ( AllFeatureUsageSubscriptionNotificationsFromBufferSet >= 0 )
      AllFeatureUsageSubscriptionNotificationsFromBufferSet = 0;
  }
  if ( v6 )
    RtlpFcBufferManagerDereferenceBuffers(qword_18016AB48, v6);
  return (unsigned int)AllFeatureUsageSubscriptionNotificationsFromBufferSet;
}
