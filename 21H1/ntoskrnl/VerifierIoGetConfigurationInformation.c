/*
 * XREFs of VerifierIoGetConfigurationInformation @ 0x1409CFAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoGetConfigurationInformation()
{
  return ((__int64 (*)(void))pXdvIoGetConfigurationInformation)();
}
