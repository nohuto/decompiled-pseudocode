/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C015B130
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F5C34 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CInpLockGuard::UnLock(this[5], (struct CRefUnRefPointerMsgId *)this);
}
