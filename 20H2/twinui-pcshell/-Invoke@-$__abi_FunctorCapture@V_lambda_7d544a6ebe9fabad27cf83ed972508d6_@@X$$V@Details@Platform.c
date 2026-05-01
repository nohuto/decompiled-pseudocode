/*
 * XREFs of ?Invoke@?$__abi_FunctorCapture@V_lambda_7d544a6ebe9fabad27cf83ed972508d6_@@X$$V@Details@Platform@@UEAAXXZ @ 0x180303600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EBB30 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall Platform::Details::__abi_FunctorCapture<_lambda_7d544a6ebe9fabad27cf83ed972508d6_,void,>::Invoke(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16));
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    __debugbreak();
  }
  return result;
}
