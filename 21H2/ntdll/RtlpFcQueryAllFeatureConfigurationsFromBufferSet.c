/*
 * XREFs of RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18011B364
 * Callers:
 *     RtlQueryAllFeatureConfigurations @ 0x180101B90 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x18005E198 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBuffers @ 0x18011B3AC (RtlpFcQueryAllFeatureConfigurationsFromBuffers.c)
 */

__int64 __fastcall RtlpFcQueryAllFeatureConfigurationsFromBufferSet(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  _DWORD v7[6]; // [rsp+20h] [rbp-18h]

  result = RtlpFcValidateFeatureConfigurationType(a2);
  if ( (int)result >= 0 )
  {
    v7[0] = 0;
    v7[1] = 1;
    return RtlpFcQueryAllFeatureConfigurationsFromBuffers(v4 + 24LL * (unsigned int)v7[v3], v6, v5);
  }
  return result;
}
