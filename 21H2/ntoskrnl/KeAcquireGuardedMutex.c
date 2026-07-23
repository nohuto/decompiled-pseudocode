/*
 * XREFs of KeAcquireGuardedMutex @ 0x1402FA0B0
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 *     PnpProcessAssignResources @ 0x14074074C (PnpProcessAssignResources.c)
 *     PiUEventHandleVetoEvent @ 0x14076E8D8 (PiUEventHandleVetoEvent.c)
 *     PopRequestShutdownWait @ 0x1407AD944 (PopRequestShutdownWait.c)
 *     PopGracefulShutdown @ 0x1409B1E90 (PopGracefulShutdown.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex, (PRTL_BALANCED_NODE)v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
