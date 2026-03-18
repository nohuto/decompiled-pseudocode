/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x1409DE220
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1409DE000 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockNoReboot(ULONG_PTR a1, __int64 a2)
{
  return VerifierKeReleaseInStackQueuedSpinLockCommon(a1, a2);
}
