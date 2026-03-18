/*
 * XREFs of HalpIsMicrosoftCompatibleHvLoaded @ 0x1403A16D8
 * Callers:
 *     HalSocRequestConfigurationData @ 0x1403A15DC (HalSocRequestConfigurationData.c)
 *     HalSocRequestApi @ 0x1403A17DC (HalSocRequestApi.c)
 *     HalpIsPartitionCpuManager @ 0x1403AE23C (HalpIsPartitionCpuManager.c)
 *     HalMcFinishMicrocode @ 0x1403AE3C0 (HalMcFinishMicrocode.c)
 *     HalpHvWatchdogDiscover @ 0x1403B23D0 (HalpHvWatchdogDiscover.c)
 *     HalpArtAvailable @ 0x1403B248C (HalpArtAvailable.c)
 *     HalpCmcStartPolling @ 0x1403C5038 (HalpCmcStartPolling.c)
 *     HalpHvIsFrequencyAvailable @ 0x1403CECB8 (HalpHvIsFrequencyAvailable.c)
 *     HalpIsHvIptSupported @ 0x1404C09CC (HalpIsHvIptSupported.c)
 *     HalpIsHvUsedForReboot @ 0x1404C0A34 (HalpIsHvUsedForReboot.c)
 *     HalpInterruptGetIrtInfo @ 0x1407B4814 (HalpInterruptGetIrtInfo.c)
 *     HalpLoadMicrocode @ 0x140868410 (HalpLoadMicrocode.c)
 *     HalpInitializeProfiling @ 0x1409A12BC (HalpInitializeProfiling.c)
 *     HalpMiscGetParameters @ 0x140A70008 (HalpMiscGetParameters.c)
 * Callees:
 *     HalpIsHvPresent @ 0x1403A1718 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
