/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x14039F208
 * Callers:
 *     HalSocRequestConfigurationData @ 0x14039F10C (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x14039F30C (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403ABC6C (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403ABDF0 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403AFDE0 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403AFE9C (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C28C8 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CC098 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404BD4AC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404BD514 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407A56C4 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x1408629F0 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x14099B1BC (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A69688 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x14039F248 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
