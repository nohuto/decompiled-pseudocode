/*
 * XREFs of sub_18006B4C0 @ 0x18006B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800D69EC (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18006B4C0(__int64 a1, char a2)
{
  std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
