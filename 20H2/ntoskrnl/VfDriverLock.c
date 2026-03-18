/*
 * XREFs of VfDriverLock @ 0x1409C55C8
 * Callers:
 *     VfIsVerificationEnabledForImage @ 0x14059EC88 (VfIsVerificationEnabledForImage.c)
 *     VfIsDriverSuspect @ 0x1409C5534 (VfIsDriverSuspect.c)
 *     MmIsDriverSuspectForVerifier @ 0x1409C8F80 (MmIsDriverSuspectForVerifier.c)
 *     VfDriverEnableVerifier @ 0x1409CB630 (VfDriverEnableVerifier.c)
 *     VfDriverEnableVerifierForAll @ 0x1409CB7C8 (VfDriverEnableVerifierForAll.c)
 *     ViDriverReApplyVerifierForAll @ 0x1409CBB18 (ViDriverReApplyVerifierForAll.c)
 *     VfThunkAddDriverThunks @ 0x1409DB840 (VfThunkAddDriverThunks.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409DB8C4 (VfThunkAddSpecialDriverThunks.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409DC8F0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfSuspectDriversLoadCallback @ 0x1409DCBA8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversRemove @ 0x1409DCF40 (VfSuspectDriversRemove.c)
 *     VfSuspectDriversUnloadCallback @ 0x1409DCFCC (VfSuspectDriversUnloadCallback.c)
 *     VfAddVerifierEntry @ 0x1409EF9D8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409EFBEC (VfSetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x1409EFCF4 (VfSetVerifierInformationEx.c)
 *     VfTriageAddDrivers @ 0x140A96B04 (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x140A96F68 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x140A97124 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *VfDriverLock()
{
  struct _KTHREAD *result; // rax

  KeWaitForSingleObject(&ViDriversLoadLock, WrVirtualMemory, 0, 0, 0LL);
  result = KeGetCurrentThread();
  ViDriversLoadLockOwner = (__int64)result;
  return result;
}
