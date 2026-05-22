/*
 * XREFs of ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@ZPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x180037968
 * Callers:
 *     ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x18003781C (--0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     ?_Reset_move@?$_Func_class@XPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@std@@IEAAX$$QEAV12@@Z @ 0x1800369B4 (-_Reset_move@-$_Func_class@XPEBU_MIT_POINTER_INPUT_DOWN_MESSAGE@@@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (DeviceInfo *)>::operator=<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void>(
        __int64 a1,
        __int128 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  void **v6; // [rsp+20h] [rbp-39h] BYREF
  __int128 v7; // [rsp+28h] [rbp-31h]
  char v8; // [rsp+38h] [rbp-21h]
  __int64 v9; // [rsp+40h] [rbp-19h]
  void ***v10; // [rsp+58h] [rbp-1h]
  _BYTE v11[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  v6 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GameInputProcessor::*)(DeviceInfo *),GameInputProcessor *,std::_Ph<1> const &>,void,DeviceInfo *>::`vftable';
  v7 = *a2;
  v8 = *((_BYTE *)a2 + 16);
  v9 = *((_QWORD *)a2 + 3);
  v10 = &v6;
  v12 = 0LL;
  std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move((__int64)v11, (__int64)&v6);
  std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move((__int64)&v6, a1);
  std::_Func_class<void,_MIT_POINTER_INPUT_DOWN_MESSAGE const *>::_Reset_move(a1, (__int64)v11);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v11, v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v6, v4);
  return a1;
}
