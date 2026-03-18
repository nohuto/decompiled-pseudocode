/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403ABC6C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039F10C (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403ABB84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403AF2A4 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403C28C8 (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x140783CC0 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 *     HalpProcIsSmtDisabled @ 0x140A69914 (HalpProcIsSmtDisabled.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
