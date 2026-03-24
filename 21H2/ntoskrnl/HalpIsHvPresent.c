/*
 * XREFs of HalpIsHvPresent @ 0x1403A1FD8
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A1E9C (HalSocRequestConfigurationData.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1F98 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A6380 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403AA16C (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpArtAvailable @ 0x1403AC43C (HalpArtAvailable.c)
 *     HalpNmiReboot @ 0x1404D2C88 (HalpNmiReboot.c)
 *     HalpLbrInitialize @ 0x14099B704 (HalpLbrInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
