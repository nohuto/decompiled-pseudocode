/*
 * XREFs of VfIsDriverSuspect @ 0x1409BF514
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     ViSuspectDriversLookupEntry @ 0x1409BF564 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 */

_BOOL8 __fastcall VfIsDriverSuspect(PCUNICODE_STRING String2)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  VfDriverLock();
  v2 = ViSuspectDriversLookupEntry(String2);
  ViDriversLoadLockOwner = 0LL;
  v3 = v2;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v3 != 0;
}
