/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0158ADC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00942A0 (xxxRealInternalGetMessage.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F6AA4 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CInpLockGuard::UnLock(this[5], (struct CRefUnRefPointerMsgId *)this);
}
