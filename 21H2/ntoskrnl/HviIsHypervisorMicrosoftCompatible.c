/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403AE390
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403AE310 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403AE350 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403AE790 (HvlpTryConfigureInterface.c)
 *     HviGetPartitionIsolationType @ 0x1403F97C0 (HviGetPartitionIsolationType.c)
 *     HviGetHypervisorVersion @ 0x1405BF270 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405BF2C0 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405BF308 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403AE3E0 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
