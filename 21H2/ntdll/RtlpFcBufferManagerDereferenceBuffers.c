/*
 * XREFs of RtlpFcBufferManagerDereferenceBuffers @ 0x18005E074
 * Callers:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005DD5C (RtlpFcUpdateLocalConfiguration.c)
 *     RtlQueryFeatureConfiguration @ 0x18005E0F0 (RtlQueryFeatureConfiguration.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005E1AC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlNotifyFeatureUsage @ 0x180101B00 (RtlNotifyFeatureUsage.c)
 *     RtlQueryAllFeatureConfigurations @ 0x180101B90 (RtlQueryAllFeatureConfigurations.c)
 *     RtlQueryFeatureUsageNotificationSubscriptions @ 0x180101C50 (RtlQueryFeatureUsageNotificationSubscriptions.c)
 * Callees:
 *     RtlBackoff @ 0x18005E2E8 (RtlBackoff.c)
 */

__int64 __fastcall RtlpFcBufferManagerDereferenceBuffers(volatile signed __int64 *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r9
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  volatile signed __int64 v8; // rtt
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  v3 = (__int64)((unsigned __int128)((a2 - (__int64)a1 - 24) * (__int128)0xE38E38E38E38E39LL) >> 64) >> 2;
  v10 = 0;
  v4 = (unsigned int)v3 + (v3 >> 63);
  while ( 1 )
  {
    _m_prefetchw((const void *)v2);
    v5 = *v2;
    v6 = *v2 & 1;
    if ( v6 != v4 )
      break;
    if ( !(v5 >> 1) )
      __fastfail(0xEu);
    v8 = *v2;
    result = _InterlockedCompareExchange64(v2, v6 | (2 * (v5 >> 1) - 2), v5);
    if ( v8 == result )
      return result;
    RtlBackoff(&v10);
  }
  result = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    _InterlockedOr(v9, 0);
    LOBYTE(v6) = 1;
    return RtlpWakeByAddress(v2 + 1, v6);
  }
  return result;
}
