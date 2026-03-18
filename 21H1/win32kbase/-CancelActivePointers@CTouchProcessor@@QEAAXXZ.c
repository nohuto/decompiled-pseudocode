/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0050BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00D0A44 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D15B0 (-UnLock@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C018F22C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this)
{
  CTouchProcessor *v2; // rdi
  struct CInputPointerNode *v3; // rdx
  _BYTE v4[40]; // [rsp+20h] [rbp-38h] BYREF
  CInpLockGuard *v5; // [rsp+48h] [rbp-10h]

  if ( this[9] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v4, (struct CInpLockGuard *)(this + 5), 0LL);
  v2 = this[20];
  while ( v2 != (CTouchProcessor *)(this + 20) )
  {
    v3 = (CTouchProcessor *)((char *)v2 - 16);
    v2 = *(CTouchProcessor **)v2;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v3);
  }
  CInpLockGuard::UnLock(v5, (struct CRefUnRefPointerMsgId *)v4);
}
