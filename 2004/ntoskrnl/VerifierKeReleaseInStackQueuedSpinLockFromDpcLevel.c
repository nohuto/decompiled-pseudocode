/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409D8130
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon @ 0x1409D8170 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel(ULONG_PTR BugCheckParameter3)
{
  VfDeadlockReleaseResource(*(_DWORD *)(BugCheckParameter3 + 8) & 0xFFFFFFFC);
  return VerifierKeReleaseInStackQueuedSpinLockFromDpcLevelCommon(BugCheckParameter3);
}
