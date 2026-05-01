/*
 * XREFs of _lambda_f29621112cb61d54fa7d920aa1c0b80f_::__lambda_f29621112cb61d54fa7d920aa1c0b80f_ @ 0x180303178
 * Callers:
 *     _std::function_unsigned_char___cdecl(Concurrency::task_bool_)_::function_unsigned_char___cdecl(Concurrency::task_bool_)___lambda_f29621112cb61d54fa7d920aa1c0b80f__void__::_1_::dtor$0 @ 0x1803016A1 (_std--function_unsigned_char___cdecl(Concurrency--task_bool_)_--function_unsigned_char___cdecl(C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_f29621112cb61d54fa7d920aa1c0b80f_::__lambda_f29621112cb61d54fa7d920aa1c0b80f_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
