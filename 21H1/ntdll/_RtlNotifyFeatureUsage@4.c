/*
 * XREFs of _RtlNotifyFeatureUsage@4 @ 0x4B3695D0
 * Callers:
 *     _wil_RtlStagingConfig_RecordFeatureUsage@12 @ 0x4B306208 (_wil_RtlStagingConfig_RecordFeatureUsage@12.c)
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcSendFeatureUsageNotifications@12 @ 0x4B375C97 (_RtlpFcSendFeatureUsageNotifications@12.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  int v1; // ecx
  NTSTATUS v2; // esi
  NTSTATUS v3; // eax
  int v4; // edi
  int v6; // [esp+0h] [ebp-1Ch]
  int v7; // [esp+4h] [ebp-18h]
  _DWORD v8[3]; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  v9 = 0;
  if ( byte_4B3A5DA8 )
    return -1073741058;
  v3 = RtlpFcReferenceFeatureConfigurationBuffers(v1, 1, v8, &v9);
  v4 = v9;
  v2 = v3;
  if ( v3 >= 0 )
    v2 = RtlpFcSendFeatureUsageNotifications(*(_DWORD *)(v9 + 44));
  if ( v4 )
    RtlpFcBufferManagerDereferenceBuffers(v6, v7);
  return v2;
}
