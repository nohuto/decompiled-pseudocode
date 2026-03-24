/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1403AE240
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADD1C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetEnlightenmentInformation @ 0x1403AE1C0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403AE200 (HviGetHypervisorFeatures.c)
 *     HvlpTryConfigureInterface @ 0x1403AE640 (HvlpTryConfigureInterface.c)
 *     HviGetPartitionIsolationType @ 0x1403F95E0 (HviGetPartitionIsolationType.c)
 *     HviGetHypervisorVersion @ 0x1405BF040 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1405BF090 (HviGetImplementationLimits.c)
 *     HviGetIptFeatures @ 0x1405BF0D8 (HviGetIptFeatures.c)
 * Callees:
 *     HviGetHypervisorInterface @ 0x1403AE290 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  HviGetHypervisorInterface(&v1);
  return (_DWORD)v1 == 824407624;
}
