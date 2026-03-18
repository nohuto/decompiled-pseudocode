/*
 * XREFs of HalpIsHvPresent @ 0x1403A1718
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A15DC (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A5AC0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403B01BC (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403B248C (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x1404D12B8 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x1409A13E4 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0F34F;
  if ( byte_140C0F34F == -1 )
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
    byte_140C0F34F = v0;
  }
  return v0;
}
