/*
 * XREFs of ?LeaveGuard@CInpLockGuard@@QEAAXXZ @ 0x1C01A7770
 * Callers:
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C000F2F0 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A35A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C000F340 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::LeaveGuard(CInpLockGuard *this)
{
  __int64 v2; // rcx
  LONG v3; // r8d

  if ( !(unsigned int)CInpLockGuard::isOwned((PERESOURCE *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((_DWORD *)this + 10) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( *((struct _KTHREAD **)this + 3) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( glMitInGuard <= 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  --glMitInGuard;
  v3 = *((_DWORD *)this + 4);
  if ( v3 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)this + 1), 0, v3, 0);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
