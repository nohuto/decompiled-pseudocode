/*
 * XREFs of RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005CC2C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x18005CB70 (RtlQueryFeatureConfiguration.c)
 *     RtlNotifyFeatureUsage @ 0x180101790 (RtlNotifyFeatureUsage.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180101820 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x1801018E0 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005C7DC (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005CAF4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x18005CCEC (RtlpFcBufferManagerReferenceBuffers.c)
 */

__int64 __fastcall RtlpFcReferenceFeatureConfigurationBuffers(__int64 a1, char a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  RtlpFcBufferManagerReferenceBuffers(qword_180168B48, v10, &v11);
  v7 = MEMORY[0x7FFE0710];
  v8 = v10[0];
  if ( v10[0] >= MEMORY[0x7FFE0710] )
    goto LABEL_2;
  RtlpFcBufferManagerDereferenceBuffers(qword_180168B48, v11);
  v11 = 0LL;
  result = RtlpFcUpdateLocalConfiguration(&RtlpFcProcessManager, v7, a2);
  if ( (int)result >= 0 )
  {
    RtlpFcBufferManagerReferenceBuffers(qword_180168B48, v10, &v11);
    v8 = v10[0];
LABEL_2:
    *a3 = v8;
    *a4 = v11;
    return 0LL;
  }
  return result;
}
