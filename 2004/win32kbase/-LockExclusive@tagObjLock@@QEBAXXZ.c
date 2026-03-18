/*
 * XREFs of ?LockExclusive@tagObjLock@@QEBAXXZ @ 0x1C0023A60
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall tagObjLock::LockExclusive(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( this[1] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  this[1] = KeGetCurrentThread();
}
