/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403A5FE0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A5D64 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403A5F60 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A5FA0 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A63E0 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1405B9A90 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405B9AE0 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405B9B28 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403A6030 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
