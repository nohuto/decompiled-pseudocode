/*
 * XREFs of KeAcquireGuardedMutex @ 0x1402EF360
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406C4890 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406E6FA0 (PnpNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x1406E78D0 (PnpDeviceEventWorker.c)
 *     PnpProcessAssignResources @ 0x14074058C (PnpProcessAssignResources.c)
 *     PiUEventHandleVetoEvent @ 0x14076E718 (PiUEventHandleVetoEvent.c)
 *     PopRequestShutdownWait @ 0x1407AD744 (PopRequestShutdownWait.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402F2BC0 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
