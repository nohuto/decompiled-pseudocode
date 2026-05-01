/*
 * XREFs of ?VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x1802B11C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rbp

  v6 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 280LL);
  AcquireSRWLockExclusive(v6);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 8) + 200LL))(a1 - 8, a2, a3);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
