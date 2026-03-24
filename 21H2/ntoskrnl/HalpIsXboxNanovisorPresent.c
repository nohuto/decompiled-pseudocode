/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1403A2240
 * Callers:
 *     HalpHvVpStartEnabled @ 0x1403A1980 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1403A1D54 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CF628 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2404 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C2C80 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x1404D208C (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407CEB50 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0F3AE;
  if ( byte_140C0F3AE == -1 )
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
    byte_140C0F3AE = v0;
  }
  return v0;
}
