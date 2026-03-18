/*
 * XREFs of ?isManipulationThreadInTermination@CInpLockGuard@@QEAAHXZ @ 0x1C0040BD0
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1640 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D19E0 (-LockShared@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 *     ?UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z @ 0x1C00D1EB0 (-UnRefPointerMsgIdAndLockExclusive@CInpLockGuard@@QEAAXAEAVCRefUnRefPointerMsgId@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CInpLockGuard::isManipulationThreadInTermination(CInpLockGuard *this)
{
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v3; // ecx

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 0LL;
  if ( ThreadWin32Thread != gptiManipulationThread )
    return 0LL;
  v3 = *(_DWORD *)(ThreadWin32Thread + 488);
  result = 1LL;
  if ( (v3 & 1) == 0 )
    return 0LL;
  return result;
}
