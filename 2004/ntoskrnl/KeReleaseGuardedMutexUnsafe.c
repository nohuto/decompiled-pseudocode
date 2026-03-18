/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x1403B1170
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}
