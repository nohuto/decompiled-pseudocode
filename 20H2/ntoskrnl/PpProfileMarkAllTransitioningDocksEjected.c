/*
 * XREFs of PpProfileMarkAllTransitioningDocksEjected @ 0x1408AE11C
 * Callers:
 *     PnpProcessCompletedEject @ 0x1408A4EE0 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 */

void PpProfileMarkAllTransitioningDocksEjected()
{
  __int64 *i; // rax

  ExAcquireFastMutex(&PiProfileDeviceListLock);
  for ( i = (__int64 *)PiProfileDeviceListHead; i != &PiProfileDeviceListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) != 1 )
      *((_DWORD *)i - 2) = 4;
  }
  KeReleaseGuardedMutex(&PiProfileDeviceListLock);
}
