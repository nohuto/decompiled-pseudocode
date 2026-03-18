/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403AE23C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A15DC (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AE154 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403B1894 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403C5038 (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x1407916B0 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

char __fastcall HalpIsPartitionCpuManager(__int64 a1)
{
  char v1; // r10

  if ( HalpIsMicrosoftCompatibleHvLoaded(a1) )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000000LL) != 0 )
      return 1;
  }
  return v1;
}
