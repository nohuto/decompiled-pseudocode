/*
 * XREFs of _RtlQueryFeatureConfigurationChangeStamp@0 @ 0x4B3696B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlQueryFeatureConfigurationChangeStamp()
{
  while ( MEMORY[0x7FFE0714] != MEMORY[0x7FFE0718] )
    _mm_pause();
  return MEMORY[0x7FFE0710];
}
