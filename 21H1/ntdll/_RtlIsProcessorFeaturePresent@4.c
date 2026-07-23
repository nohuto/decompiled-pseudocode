/*
 * XREFs of _RtlIsProcessorFeaturePresent@4 @ 0x4B2EA5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  if ( ProcessorFeature >= 0x40 )
    return 0;
  else
    return ZwWow64IsProcessorFeaturePresent(ProcessorFeature);
}
