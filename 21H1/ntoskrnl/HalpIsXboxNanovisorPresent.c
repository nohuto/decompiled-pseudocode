/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14039ED20
 * Callers:
 *     HalpHvVpStartEnabled @ 0x14039E460 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x14039E834 (HalpApicSetupRegisterAccess.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CB2D8 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvUsedForReboot @ 0x1404BCE34 (HalpIsHvUsedForReboot.c)
 *     HalpHvStartVirtualProcessor @ 0x1404BD6B0 (HalpHvStartVirtualProcessor.c)
 *     HalpHvStartProcessor @ 0x1404CCC6C (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407B8E90 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
