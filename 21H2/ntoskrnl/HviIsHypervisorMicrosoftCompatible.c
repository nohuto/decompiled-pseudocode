/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403C0314
 * Callers:
 *     HvlpTryConfigureInterface @ 0x1403BF6EC (HvlpTryConfigureInterface.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403C02DC (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorVersion @ 0x140647BBC (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x140647C04 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x140647C4C (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403C0360 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
