/*
 * XREFs of HalpIsHvPresent @ 0x14039EAB8
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039E97C (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A2F90 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403A6B0C (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403A8DDC (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x140996D74 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
