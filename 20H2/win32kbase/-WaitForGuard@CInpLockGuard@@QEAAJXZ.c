/*
 * XREFs of ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C019F740
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CInpLockGuard::WaitForGuard(PVOID *this)
{
  return KeWaitForSingleObject(this[1], UserRequest, 0, 0, 0LL);
}
