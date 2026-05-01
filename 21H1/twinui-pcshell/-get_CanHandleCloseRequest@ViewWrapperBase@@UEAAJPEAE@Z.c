/*
 * XREFs of ?get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1802B1AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_CanHandleCloseRequest(ViewWrapperBase *this, unsigned __int8 *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v4);
  *a2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 20) + 504LL) + 136LL))(
          *(_QWORD *)(*((_QWORD *)this + 20) + 504LL),
          *((_QWORD *)this + 23));
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
