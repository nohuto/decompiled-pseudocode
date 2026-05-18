/*
 * XREFs of ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800D69EC
 * Callers:
 *     sub_18006B4C0 @ 0x18006B4C0 (sub_18006B4C0.c)
 *     sub_18006D2E0 @ 0x18006D2E0 (sub_18006D2E0.c)
 * Callees:
 *     sub_18006D3A4 @ 0x18006D3A4 (sub_18006D3A4.c)
 */

void **__fastcall std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(
        __int64 a1)
{
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilingGrapher::`vftable';
  sub_18006D3A4((__int64 **)(a1 + 8));
  result = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IGpuProfilingGrapher::`vftable';
  return result;
}
