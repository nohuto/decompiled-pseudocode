/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0089350
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D0DC0 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1160 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1600 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CInpLockGuard::isManipulationThreadInTermination(CInpLockGuard *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v3; // ecx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( ThreadWin32Thread != gptiManipulationThread )
    return 0LL;
  v3 = *(_DWORD *)(ThreadWin32Thread + 480);
  result = 1LL;
  if ( (v3 & 1) == 0 )
    return 0LL;
  return result;
}
