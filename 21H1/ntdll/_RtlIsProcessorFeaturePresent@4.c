/*
 * XREFs of _RtlIsProcessorFeaturePresent@4 @ 0x4B2EA5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  if ( a1 >= 0x40 )
    return 0;
  else
    return ZwWow64IsProcessorFeaturePresent(a1);
}
