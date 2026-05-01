/*
 * XREFs of ?InvokeNow@CTimer@LambdaHelpers@@UEAAJXZ @ 0x18022DAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LambdaHelpers::CTimer::InvokeNow(LambdaHelpers::CTimer *this)
{
  if ( !*((_DWORD *)this + 4) )
    (*(void (__fastcall **)(LambdaHelpers::CTimer *))(*(_QWORD *)this + 40LL))(this);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
}
