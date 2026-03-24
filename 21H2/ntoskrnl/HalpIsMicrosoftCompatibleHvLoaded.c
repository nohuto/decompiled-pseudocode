/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A1F98
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A1E9C (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A209C (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403A81EC (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403A8370 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403AC380 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403AC43C (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C5798 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CF628 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404C239C (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2404 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9474 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x14099B5DC (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A6CF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403A1FD8 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
