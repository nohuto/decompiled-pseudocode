/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800369B4
 * Callers:
 *     ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180020D38 (--4-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002D7FC (--4-$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x180037968 (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU-$_Ph@$00@.c)
 *     ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x180069160 (--$_Emplace_reallocate@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$a.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
