/*
 * XREFs of ??4?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800CE458
 * Callers:
 *     ?CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CEBE0 (-CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Win.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036AD4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CDCD0 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@std@@IEAAX$$QEAV12@@Z @ 0x1800D3D74 (-_Reset_move@-$_Func_class@XPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>::operator=(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  _BYTE v9[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v4 = std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
         (__int64)v11,
         a2);
  v5 = *(_QWORD *)(v4 + 56);
  if ( v5 == v4 || (v6 = *(_QWORD *)(a1 + 56), v6 == a1) )
  {
    v10 = 0LL;
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      v9,
      v4);
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      v4,
      a1);
    std::_Func_class<void,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *>::_Reset_move(
      a1,
      v9);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v9, v7);
  }
  else
  {
    *(_QWORD *)(v4 + 56) = v6;
    *(_QWORD *)(a1 + 56) = v5;
  }
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v11, v3);
  return a1;
}
