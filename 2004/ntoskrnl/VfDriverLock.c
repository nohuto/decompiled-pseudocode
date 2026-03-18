/*
 * XREFs of VfDriverLock @ 0x1409BF5B8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059B1E8 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409BF524 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C2F60 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409C5610 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409C57A8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409C5AF8 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409D5820 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D58A4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D68D0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409D6B88 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409D6F20 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409D6FAC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409E99B8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409E9BCC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409E9CD4 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A90EA0 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A91304 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A914C0 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
