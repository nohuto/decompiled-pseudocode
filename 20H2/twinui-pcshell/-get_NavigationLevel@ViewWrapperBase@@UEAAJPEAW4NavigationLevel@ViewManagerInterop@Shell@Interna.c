/*
 * XREFs of ?get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802D34F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::get_NavigationLevel(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v4);
  *(_DWORD *)a2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 128LL))((char *)this - 8);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
