/*
 * XREFs of _RtlpFcValidateFeatureConfigurationType@4 @ 0x4B2E5376
 * Callers:
 *     _RtlpFcQueryFeatureConfigurationFromBufferSet@16 @ 0x4B3A1121 (_RtlpFcQueryFeatureConfigurationFromBufferSet@16.c)
 *     _RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16 @ 0x4B3A1246 (_RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 < 2 ? 0 : -1073741811;
}
