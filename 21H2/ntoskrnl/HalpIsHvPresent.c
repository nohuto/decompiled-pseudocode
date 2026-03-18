/*
 * XREFs of HalpIsHvPresent @ 0x1403B37F0
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403B36F4 (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403B58F0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403BC758 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403BE95C (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x140A550E0 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0978F;
  if ( byte_140C0978F == -1 )
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
    byte_140C0978F = v0;
  }
  return v0;
}
