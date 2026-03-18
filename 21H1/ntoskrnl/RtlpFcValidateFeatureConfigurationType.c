/*
 * XREFs of RtlpFcValidateFeatureConfigurationType @ 0x140388E9C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryAllFeatureConfigurations @ 0x140914930 (RtlQueryAllFeatureConfigurations.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcValidateFeatureConfigurationType(unsigned int a1)
{
  return a1 >= 2 ? 0xC000000D : 0;
}
