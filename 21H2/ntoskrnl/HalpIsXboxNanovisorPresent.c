/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1403B3A6C
 * Callers:
 *     HalpHvVpStartEnabled @ 0x1403B32E8 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1403B3594 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403DE864 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x14050E854 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x14050F0A0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x14051E90C (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x14085E510 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0978E;
  if ( byte_140C0978E == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140C0978E = v0;
  }
  return v0;
}
