/*
 * XREFs of ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x1802CF040
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802DB6AC (-HandleShellHook@WindowReadyState@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::HandlePresentationReadinessChange(ViewWrapperBase *this, unsigned __int64 a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockExclusive(v4);
  WindowReadyState::HandleShellHook((ViewWrapperBase *)((char *)this + 352), a2);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
