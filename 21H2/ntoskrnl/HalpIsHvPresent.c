/*
 * XREFs of HalpIsHvPresent @ 0x1403A2128
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A1FEC (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A64D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403AAEFC (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403AD1CC (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x1404D2EC8 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x14099C704 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char HalpIsHvPresent()
{
  char v0; // r8

  v0 = byte_140C0F3AF;
  if ( byte_140C0F3AF == -1 )
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
    byte_140C0F3AF = v0;
  }
  return v0;
}
