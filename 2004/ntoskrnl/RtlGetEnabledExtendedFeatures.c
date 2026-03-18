/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1403A4780
 * Callers:
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1403E8A2C (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
}
