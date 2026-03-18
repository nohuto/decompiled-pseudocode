/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C000F2F0
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C000F340 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A7770 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(CInpLockGuard *this)
{
  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == *((struct _KTHREAD **)this + 3) )
    CInpLockGuard::LeaveGuard(this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
