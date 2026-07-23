/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x180010870
 * Callers:
 *     LdrpGenRandom @ 0x18001082C (LdrpGenRandom.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return *(_BYTE *)(ProcessorFeature + 0x7FFE0274LL);
}
