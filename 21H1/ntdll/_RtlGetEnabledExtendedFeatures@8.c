/*
 * XREFs of _RtlGetEnabledExtendedFeatures@8 @ 0x4B2EC210
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWow64IsProcessorFeaturePresent@4 @ 0x4B2F4810 (_ZwWow64IsProcessorFeaturePresent@4.c)
 */

ULONG64 __cdecl RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  if ( ZwWow64IsProcessorFeaturePresent(0x11u) )
    return FeatureMask & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
  else
    return 0LL;
}
