/*
 * XREFs of VfDriverUnlock @ 0x1409C58DC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059B1E8 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x140A90EA0 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A91304 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A914C0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
}
