/*
 * XREFs of RtlpIsValidFeatureEnabledStateOptions @ 0x140589F98
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140916888 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledStateOptions(unsigned int a1)
{
  return a1 < 2;
}
