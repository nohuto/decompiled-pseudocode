/*
 * XREFs of RtlpIsValidFeatureConfigurationPriority @ 0x140589F78
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140916888 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureConfigurationPriority(unsigned int a1)
{
  return a1 <= 0xF;
}
