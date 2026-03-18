/*
 * XREFs of KeAcquireGuardedMutex @ 0x14029ECC0
 * Callers:
 *     PnpProcessDeferredRegistrations @ 0x14070A064 (PnpProcessDeferredRegistrations.c)
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078B7C4 (PnpNotifyTargetDeviceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x14078D5D8 (PnpNotifyDeviceClassChange.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
 *     PopGracefulShutdown @ 0x140A6AEC0 (PopGracefulShutdown.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire(Mutex, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended(Mutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
