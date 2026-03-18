/*
 * XREFs of RtlpIsValidFeatureVariant @ 0x140589FA8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140916888 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariant(unsigned int a1)
{
  return a1 < 0x40;
}
