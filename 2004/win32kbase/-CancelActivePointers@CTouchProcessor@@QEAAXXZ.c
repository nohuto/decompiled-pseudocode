/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C005E630
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D12F4 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1ED0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018952C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  CTouchProcessor *v5; // rdi
  struct CInputPointerNode *v6; // rdx
  _BYTE v7[40]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v8; // [rsp+48h] [rbp-10h]

  if ( this[9] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v7, (struct CInpLockGuard *)(this + 5), 0LL);
  v5 = this[20];
  while ( v5 != (CTouchProcessor *)(this + 20) )
  {
    v6 = (CTouchProcessor *)((char *)v5 - 16);
    v5 = *(CTouchProcessor **)v5;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v6);
  }
  CInpLockGuard::UnLock(v8, (struct CRefUnRefPointerMsgId *)v7);
}
