/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403A9CB0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A9A34 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403A9C30 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A9C70 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403AA0B0 (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1405B9370 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405B93C0 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405B9408 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403A9D00 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
