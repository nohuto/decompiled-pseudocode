/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1409D8000
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockForDpcCommon @ 0x1409D8040 (VerifierKeReleaseInStackQueuedSpinLockForDpcCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockForDpcCommon(BugCheckParameter3);
}
