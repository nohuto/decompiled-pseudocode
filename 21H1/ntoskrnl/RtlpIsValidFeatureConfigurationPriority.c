/*
 * XREFs of RtlpIsValidFeatureConfigurationPriority @ 0x140589888
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureConfigurationPriority(unsigned int a1)
{
  return a1 <= 0xF;
}
