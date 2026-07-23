/*
 * XREFs of RtlNotifyFeatureUsage @ 0x180101B00
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x18009C090 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005E074 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005E1AC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x18010DE94 (RtlpFcSendFeatureUsageNotifications.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  NTSTATUS v2; // ebx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( byte_18016C508 )
    return -1073741058;
  v3 = RtlpFcReferenceFeatureConfigurationBuffers((__int64)FeatureUsageReport, 1, &v7, &v6);
  v4 = v6;
  v2 = v3;
  if ( v3 >= 0 )
    v2 = RtlpFcSendFeatureUsageNotifications(FeatureUsageReport, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
  if ( v4 )
    RtlpFcBufferManagerDereferenceBuffers(qword_18016AB48, v4);
  return v2;
}
