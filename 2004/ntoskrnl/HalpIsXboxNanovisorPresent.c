/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14039F4B0
 * Callers:
 *     HalpHvVpStartEnabled @ 0x14039EBF0 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x14039EFC4 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CC098 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1404BD514 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x1404BDD90 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x1404CD11C (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407BC000 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140C0F32E;
  if ( byte_140C0F32E == -1 )
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
    byte_140C0F32E = v0;
  }
  return v0;
}
