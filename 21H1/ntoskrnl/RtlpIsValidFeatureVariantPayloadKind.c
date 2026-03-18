/*
 * XREFs of RtlpIsValidFeatureVariantPayloadKind @ 0x1405898C8
 * Callers:
 *     RtlpFcAreSortedFeatureUpdatesValid @ 0x140915618 (RtlpFcAreSortedFeatureUpdatesValid.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsValidFeatureVariantPayloadKind(unsigned int a1)
{
  return a1 < 4;
}
