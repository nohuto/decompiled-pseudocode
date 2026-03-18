/*
 * XREFs of KeReleaseGuardedMutexUnsafe @ 0x1403AB4F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 */

void __stdcall KeReleaseGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExReleaseFastMutexUnsafe(FastMutex);
}
