/*
 * XREFs of ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0196A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A84 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C0196B2C (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::GetPointerCapture(struct _KTHREAD **this, _QWORD *a2, int a3, void **a4, int *a5)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-48h] BYREF
  CInpLockGuard *v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-18h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v11,
    (struct CInpLockGuard *)(this + 5),
    a2);
  if ( this[9] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9);
  v10 = a2[5];
  if ( v10 )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            (CTouchProcessor *)this,
            (struct CPointerCaptureInfo *)(v10 + 32 + (a3 != 0 ? 0x88 : 0)),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
  if ( !v13 )
    CInpLockGuard::UnLock((PERESOURCE *)v12, (struct CRefUnRefPointerMsgId *)v11);
}
