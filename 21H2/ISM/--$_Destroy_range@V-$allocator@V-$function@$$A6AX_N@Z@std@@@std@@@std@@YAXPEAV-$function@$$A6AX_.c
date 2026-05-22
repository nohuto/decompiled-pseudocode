/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AX_N@Z@0@0AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180068EC8
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x180068F00 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&__::_1_::catch$39 @ 0x18006913B (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void____ea_18006913B.c)
 *     ??1?$_Uninitialized_backout_al@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x1800693F0 (--1-$_Uninitialized_backout_al@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@.c)
 *     ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180069434 (--1-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@X.c)
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180069530 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AX_N@Z@2@_K1@Z @ 0x180069AE8 (-_Change_array@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@2@.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::function<void (bool)>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v3, a2);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
