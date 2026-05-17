/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x18005CC18
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18011A1A4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18011A364 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
