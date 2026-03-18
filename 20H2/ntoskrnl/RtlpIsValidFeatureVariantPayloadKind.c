/*
 * XREFs of RtlpIsValidFeatureVariantPayloadKind @ 0x14058D9E8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x14091C4B8 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariantPayloadKind(unsigned int a1)
{
  return a1 < 4;
}
