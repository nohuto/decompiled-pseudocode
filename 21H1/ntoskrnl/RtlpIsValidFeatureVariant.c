/*
 * XREFs of RtlpIsValidFeatureVariant @ 0x1405898B8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariant(unsigned int a1)
{
  return a1 < 0x40;
}
