/*
 * XREFs of RtlNotifyFeatureUsage @ 0x180101790
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009B9C0 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005CAF4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005CC2C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x18010DB24 (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( byte_18016A508 )
  {
    return (unsigned int)-1073741058;
  }
  else
  {
    v3 = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v7, &v6);
    v4 = v6;
    v2 = v3;
    if ( v3 >= 0 )
      v2 = RtlpFcSendFeatureUsageNotifications(a1, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
    if ( v4 )
      RtlpFcBufferManagerDereferenceBuffers(qword_180168B48, v4);
  }
  return v2;
}
