/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x140589F88
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140916888 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
