/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403A8560
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403A84E0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A8520 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403A881C (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorVersion @ 0x1405BD5F0 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405BD640 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405BD688 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403A85B0 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
