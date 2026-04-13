/*
 * XREFs of ?_Move@?$_Func_impl@U?$_Callable_fun@Q6AJXZ$0A@@std@@V?$allocator@V?$_Func_class@JU_Nil@std@@U12@U12@U12@U12@U12@U12@@std@@@2@JU_Nil@2@U42@U42@U42@U42@U42@U42@@std@@UEAAPEAV?$_Func_base@JU_Nil@std@@U12@U12@U12@U12@U12@U12@@2@PEAX@Z @ 0x180041520
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800B03B8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800B05A8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Move(
        __int64 a1,
        _QWORD *a2)
{
  if ( !a2 )
  {
    a2 = operator new(0x18uLL);
    if ( !a2 )
      std::_Xbad_alloc();
  }
  *a2 = &std::_Func_impl<std::_Callable_fun<long (*const)(void),0>,std::allocator<std::_Func_class<long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,long,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  return a2;
}
