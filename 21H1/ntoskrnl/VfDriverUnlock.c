/*
 * XREFs of VfDriverUnlock @ 0x1409C58CC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059AAF8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x140A91790 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A91BF4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A91DB0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
