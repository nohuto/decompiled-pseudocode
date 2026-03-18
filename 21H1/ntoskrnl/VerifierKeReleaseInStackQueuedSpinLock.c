/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x1409D7F40
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409D7F80 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockCommon(BugCheckParameter3);
}
