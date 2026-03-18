/*
 * XREFs of RtlpIsValidFeatureVariant @ 0x14058D9D8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x14091C4B8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariant(unsigned int a1)
{
  return a1 < 0x40;
}
