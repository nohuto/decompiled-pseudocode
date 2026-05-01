/*
 * XREFs of ?SetWindowBand@ViewWrapperBase@@UEAAJK@Z @ 0x1802D12F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ @ 0x1802CFD30 (-PushDesiredZbidToWindow@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetWindowBand(ViewWrapperBase *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 280LL);
  AcquireSRWLockExclusive(v4);
  *((_DWORD *)this + 54) = a2;
  ViewWrapperBase::PushDesiredZbidToWindow(this);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
