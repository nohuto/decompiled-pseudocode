/*
 * XREFs of ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C0192810
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0192480 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C019F4BC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::DelegateImplictCaptureAndReleaseIfNeeded(struct _KTHREAD **this, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)(this + 5),
    a2);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v5 = a2[5];
  if ( !v5 || (*(_DWORD *)(v5 + 304) & 4) == 0 )
    CTouchProcessor::DelegateCapturePointerImplicit(this, (__int64)a2);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  v6 = a2[5];
  if ( v6 )
    CTouchProcessor::SetDelegateActionInt(v4, v6, 6LL);
  if ( !v9 )
    CInpLockGuard::UnLock((PERESOURCE *)v8, (struct CRefUnRefPointerMsgId *)v7);
}
