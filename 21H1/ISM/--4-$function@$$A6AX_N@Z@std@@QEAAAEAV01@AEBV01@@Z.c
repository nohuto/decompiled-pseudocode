/*
 * XREFs of ??4?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x180020D38
 * Callers:
 *     ?RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180020BF8 (-RegisterFor3DHitTestingAvailabilityChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@P.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180020C98 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 * Callees:
 *     ??0?$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z @ 0x180020DE0 (--0-$function@$$A6AX_N@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800369B4 (-_Reset_move@-$_Func_class@XPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (bool)>::operator=(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // rax
  _BYTE v6[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  v2 = std::function<void (bool)>::function<void (bool)>(v8);
  v3 = *(_QWORD *)(v2 + 56);
  if ( v3 == v2 || (v5 = *(_QWORD *)(a1 + 56), v5 == a1) )
  {
    v7 = 0LL;
    std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move(v6, v2);
    std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move(v2, a1);
    std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move(a1, v6);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v6);
  }
  else
  {
    *(_QWORD *)(v2 + 56) = v5;
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v8);
  return a1;
}
