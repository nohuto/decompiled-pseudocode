/*
 * XREFs of ?get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802D3580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::get_PointerActivationPolicy(
        ViewWrapperBase *this,
        enum Windows::Internal::Shell::ViewManagerInterop::PointerActivationPolicy *a2)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 280LL);
  AcquireSRWLockShared(v3);
  *(_DWORD *)a2 = *((_DWORD *)this + 126);
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
