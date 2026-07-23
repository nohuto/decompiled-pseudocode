/*
 * XREFs of KeAcquireGuardedMutex @ 0x140241970
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     sub_140689640 @ 0x140689640 (sub_140689640.c)
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     PnpProcessAssignResources @ 0x14073859C (PnpProcessAssignResources.c)
 *     PiUEventHandleVetoEvent @ 0x14076A438 (PiUEventHandleVetoEvent.c)
 *     PopRequestShutdownWait @ 0x1407A4994 (PopRequestShutdownWait.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x140241B40 (ExpAcquireFastMutexContended.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
