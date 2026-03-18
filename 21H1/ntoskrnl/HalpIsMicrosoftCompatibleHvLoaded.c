/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x14039EA78
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039E97C (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x14039EB7C (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403A4BA4 (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403A4D30 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403A8D20 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403A8DDC (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C1A08 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CB2D8 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404BCDCC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404BCE34 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407A2E74 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140996C4C (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A69208 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x14039EAB8 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool __fastcall HalpIsMicrosoftCompatibleHvLoaded(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( (unsigned __int8)HalpIsHvPresent(a1) )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v1;
}
