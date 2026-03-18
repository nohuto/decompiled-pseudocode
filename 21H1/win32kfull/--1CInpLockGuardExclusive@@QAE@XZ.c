/*
 * XREFs of ??1CInpLockGuardExclusive@@QAE@XZ @ 0xF0EF5
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2 (-DelegateCapturePointersMitOn@@YGHIPAI0@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  CInpLockGuard::UnLock(this[5], (struct CRefUnRefPointerMsgId *)this);
}
