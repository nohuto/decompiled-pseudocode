/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C000F250
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this)
{
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this[1] = KeGetCurrentThread();
}
