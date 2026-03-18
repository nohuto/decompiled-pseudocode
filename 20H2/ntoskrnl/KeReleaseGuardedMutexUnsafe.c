/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x1403B3AE0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}
