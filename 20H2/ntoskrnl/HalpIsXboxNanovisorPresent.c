/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1403A1980
 * Callers:
 *     HalpHvVpStartEnabled @ 0x1403A10C0 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1403A1494 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CECB8 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1404C0A34 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C12B0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x1404D06BC (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407CA890 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0F34E;
  if ( byte_140C0F34E == -1 )
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
    byte_140C0F34E = v0;
  }
  return v0;
}
