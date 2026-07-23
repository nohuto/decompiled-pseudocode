/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A20E8
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A1FEC (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403A8F7C (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403A9100 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403AD110 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403AD1CC (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C5BC8 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CF798 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404C25DC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404C2644 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B9994 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x14099C5DC (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A6DF88 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
