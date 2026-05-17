/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x18005CC68
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18011C050 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlpFcQueryAllFeatureConfigurationsFromBufferSet @ 0x18011C204 (RtlpFcQueryAllFeatureConfigurationsFromBufferSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
