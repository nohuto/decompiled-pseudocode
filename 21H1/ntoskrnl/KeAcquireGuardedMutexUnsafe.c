/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x1403ABAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 */

void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  ExAcquireFastMutexUnsafe(FastMutex);
}
