/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_bb99315a2e04bb315428571541c06609__void_ @ 0x18014DDB4
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1801648E8 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800D3D74 (-_Reset_move@-$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_bb99315a2e04bb315428571541c06609__void_(
        __int64 a1,
        __int128 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+20h] [rbp-98h] BYREF
  __int128 v7; // [rsp+28h] [rbp-90h]
  __int64 (__fastcall ***v8)(); // [rsp+58h] [rbp-60h]
  _BYTE v9[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v10; // [rsp+98h] [rbp-20h]

  v6 = off_1801B6E88;
  v7 = *a2;
  v8 = &v6;
  v10 = 0LL;
  std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
    (__int64)v9,
    (__int64)&v6);
  std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
    (__int64)&v6,
    a1);
  std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
    a1,
    (__int64)v9);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v9, v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v6, v4);
  return a1;
}
