/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLock @ 0x1409DDFC0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DE000 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLock(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockCommon(BugCheckParameter3);
}
