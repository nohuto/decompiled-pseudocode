/*
 * XREFs of ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0023B00
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C001B4E8 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C0023B50 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A1A10 (-LeaveGuard@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuardOnThreadTermination(CInpLockGuard *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)this);
  if ( *((_DWORD *)this + 10) && KeGetCurrentThread() == *((struct _KTHREAD **)this + 3) )
    CInpLockGuard::LeaveGuard(this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
}
