/*
 * XREFs of ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800D42C4
 * Callers:
 *     ??4?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800CE9A8 (--4-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Interna.c)
 *     std::function_void___cdecl(void)_::operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_ @ 0x18014E260 (std--function_void___cdecl(void)_--operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_.c)
 *     std::function_void___cdecl(void)_::operator___lambda_bb99315a2e04bb315428571541c06609__void_ @ 0x18014E304 (std--function_void___cdecl(void)_--operator___lambda_bb99315a2e04bb315428571541c06609__void_.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z @ 0x180156A1C (--0-$function@$$A6AXXZ@std@@QEAA@$$QEAV01@@Z.c)
 *     ??4?$function@$$A6AXE@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016A230 (--4-$function@$$A6AXE@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
}
