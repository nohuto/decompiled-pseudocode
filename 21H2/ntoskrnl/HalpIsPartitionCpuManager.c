/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403BAEA4
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403B36F4 (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403BDD00 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403D2BFC (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x14082481C (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char HalpIsPartitionCpuManager()
{
  char v0; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v0;
}
