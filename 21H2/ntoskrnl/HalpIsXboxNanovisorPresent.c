/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x1403A2390
 * Callers:
 *     HalpHvVpStartEnabled @ 0x1403A1AD0 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1403A1EA4 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CF798 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2644 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C2EC0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x1404D22CC (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407CECC0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
