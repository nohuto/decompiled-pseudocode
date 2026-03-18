/*
 * XREFs of RtlpIsValidFeatureEnabledState @ 0x140589898
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledState(unsigned int a1)
{
  return a1 < 3;
}
