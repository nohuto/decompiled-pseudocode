/*
 * XREFs of HalpIsHvPresent @ 0x14039F248
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039F10C (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A36F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403ADBCC (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403AFE9C (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x1404CDD18 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x14099B2E4 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0F32F;
  if ( byte_140C0F32F == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX != 1986945624;
    }
    byte_140C0F32F = v0;
  }
  return v0;
}
