/*
 * XREFs of RtlpIsValidFeatureConfigurationPriority @ 0x14058D9A8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x14091C4B8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureConfigurationPriority(unsigned int a1)
{
  return a1 <= 0xF;
}
