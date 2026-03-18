/*
 * XREFs of VfDriverUnlock @ 0x1409CB8FC
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059EC88 (VfIsVerificationEnabledForImage.c)
 *     VfTriageAddDrivers @ 0x140A96B04 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A96F68 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A97124 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 */

LONG VfDriverUnlock()
{
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
}
