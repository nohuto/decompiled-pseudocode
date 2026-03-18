/*
 * XREFs of VfDriverLock @ 0x1409BF5A8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059AAF8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409BF514 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C2F50 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C5600 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C5798 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AE8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409D57C0 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D5844 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D6870 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D6B28 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409D6EC0 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D6F4C (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409E9958 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409E9B6C (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409E9C74 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A91790 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A91BF4 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A91DB0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
