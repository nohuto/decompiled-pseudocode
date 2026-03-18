/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x14038C1B0
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140774F84 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x14091B7F0 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
