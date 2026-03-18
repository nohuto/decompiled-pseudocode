/*
 * XREFs of EtwpTimeProfileStart @ 0x1409E3B04
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x1408644E0 (EtwTimeProfileReset.c)
 * Callees:
 *     KeStartProfile @ 0x14057158C (KeStartProfile.c)
 *     KeSetIntervalProfile @ 0x1407F8914 (KeSetIntervalProfile.c)
 *     KeInitializeProfileCallback @ 0x1409620D4 (KeInitializeProfileCallback.c)
 */

char EtwpTimeProfileStart()
{
  KeSetIntervalProfile(EtwpProfileInterval, 0);
  KeInitializeProfileCallback(EtwpProfileObject, (__int64)EtwpProfileInterrupt, 0LL, 0);
  return KeStartProfile((ULONG_PTR)EtwpProfileObject);
}
