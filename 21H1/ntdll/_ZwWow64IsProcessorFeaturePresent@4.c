/*
 * XREFs of _ZwWow64IsProcessorFeaturePresent@4 @ 0x4B2F4810
 * Callers:
 *     _LdrpGenRandom@0 @ 0x4B2D085D (_LdrpGenRandom@0.c)
 *     _RtlIsProcessorFeaturePresent@4 @ 0x4B2EA5A0 (_RtlIsProcessorFeaturePresent@4.c)
 *     _RtlGetEnabledExtendedFeatures@8 @ 0x4B2EC210 (_RtlGetEnabledExtendedFeatures@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwWow64IsProcessorFeaturePresent(int a1)
{
  return Wow64SystemServiceCall();
}
