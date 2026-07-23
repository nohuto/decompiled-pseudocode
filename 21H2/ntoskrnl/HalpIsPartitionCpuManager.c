/*
 * XREFs of HalpIsPartitionCpuManager @ 0x1403A8F7C
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A1FEC (HalSocRequestConfigurationData.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1403AC5D4 (HalpInterruptRegisterController.c)
 *     HalpCmcStartPolling @ 0x1403C5BC8 (HalpCmcStartPolling.c)
 *     HalpMcUpdateInitialize @ 0x1407923D0 (HalpMcUpdateInitialize.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8 (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
