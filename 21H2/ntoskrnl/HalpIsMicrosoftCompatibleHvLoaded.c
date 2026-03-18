/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403B37B0
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403B36F4 (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403BAEA4 (HalpIsPartitionCpuManager.c)
 *     HalpWdatDiscover @ 0x1403BE570 (HalpWdatDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x1403BE8A0 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403BE95C (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403D2BFC (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403DE864 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvIsX2ApicRecommended @ 0x14050E5E8 (HalpHvIsX2ApicRecommended.c)
 *     HalpIsHvIptSupported @ 0x14050E7EC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x14050E854 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x14084476C (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x14090A1A0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x140A54FB4 (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140B27364 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HalpIsMicrosoftCompatibleHvLoaded()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)HalpIsHvPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX == 824407624;
  }
  return v0;
}
