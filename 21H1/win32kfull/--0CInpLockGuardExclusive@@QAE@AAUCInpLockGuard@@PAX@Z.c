/*
 * XREFs of ??0CInpLockGuardExclusive@@QAE@AAUCInpLockGuard@@PAX@Z @ 0xF0ED2
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE (-_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z.c)
 *     ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2 (-DelegateCapturePointersMitOn@@YGHIPAI0@Z.c)
 * Callees:
 *     <none>
 */

CInpLockGuardExclusive *__thiscall CInpLockGuardExclusive::CInpLockGuardExclusive(
        CInpLockGuardExclusive *this,
        struct CInpLockGuard *a2,
        void *a3)
{
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 16) = 0;
  *((_DWORD *)this + 5) = a2;
  CInpLockGuard::LockExclusive(a2, this);
  return this;
}
