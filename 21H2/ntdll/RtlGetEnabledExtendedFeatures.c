/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x180082590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG64 __cdecl RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
}
