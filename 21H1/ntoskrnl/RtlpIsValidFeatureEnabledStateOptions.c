/*
 * XREFs of RtlpIsValidFeatureEnabledStateOptions @ 0x1405898A8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureEnabledStateOptions(unsigned int a1)
{
  return a1 < 2;
}
