/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x14058D9B8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x14091C4B8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
