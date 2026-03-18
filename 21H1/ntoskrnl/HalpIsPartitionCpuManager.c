/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403A4BA4
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039E97C (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A4ABC (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403A81E4 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403C1A08 (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x14077B2C0 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 *     HalpProcIsSmtDisabled @ 0x140A69494 (HalpProcIsSmtDisabled.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
