/*
 * XREFs of _RtlGetEnabledExtendedFeatures@8 @ 0x4B2EC210
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWow64IsProcessorFeaturePresent@4 @ 0x4B2F4810 (_ZwWow64IsProcessorFeaturePresent@4.c)
 */

__int64 __stdcall RtlGetEnabledExtendedFeatures(__int64 a1)
{
  if ( (unsigned __int8)ZwWow64IsProcessorFeaturePresent(17) )
    return a1 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
  else
    return 0LL;
}
