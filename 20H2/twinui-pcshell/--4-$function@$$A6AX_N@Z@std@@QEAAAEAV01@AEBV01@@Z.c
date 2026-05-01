/*
 * XREFs of ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802DB5D4
 * Callers:
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x1802DB77C (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z @ 0x18004CD58 (-_Reset_move@-$_Func_class@X_N@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X_N@std@@IEAAXXZ @ 0x180079CC0 (-_Tidy@-$_Func_class@X_N@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::function<void (bool)>::operator=(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  _BYTE *v4; // rax
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v8 = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v3 )
  {
    v4 = (_BYTE *)(**v3)(v3, v7);
    v8 = v4;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,bool>::_Reset_move((__int64)v9, (__int64)v7);
    std::_Func_class<void,bool>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,bool>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,bool>::_Tidy((__int64)v9, v5);
  }
  else
  {
    v8 = *(_BYTE **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  std::_Func_class<void,bool>::_Tidy((__int64)v7, a2);
  return a1;
}
