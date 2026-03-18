/*
 * XREFs of ?RefPointerMsgIdAndUnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1E10
 * Callers:
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D13EC (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 * Callees:
 *     ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C0023B50 (-isOwned@CInpLockGuard@@QEAAHXZ.c)
 *     ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00D1E5C (-ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuard::RefPointerMsgIdAndUnLock(PERESOURCE *this, struct CRefUnRefPointerMsgId *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _ERESOURCE *v8; // rcx

  if ( !(unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  CRefUnRefPointerMsgId::ReferenceAndThreadLock(a2);
  v8 = *this;
  this[4] = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v8);
}
