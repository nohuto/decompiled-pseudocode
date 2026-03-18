/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x140389F10
 * Callers:
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x140765F54 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 *     RtlQueryAllFeatureConfigurations @ 0x14090CDC0 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
