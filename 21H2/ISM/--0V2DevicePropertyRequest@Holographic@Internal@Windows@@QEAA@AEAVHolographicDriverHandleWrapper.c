/*
 * XREFs of ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180157230
 * Callers:
 *     ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x18015927C (-AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHologr.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@KIPEBX_KAEAU_LUID@@P6AJ1_K@Z@Z @ 0x180157450 (--0V2PropertyRequest@Holographic@Internal@Windows@@IEAA@AEAVHolographicDriverHandleWrapper@123@K.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
        __int64 a1,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        __int64 a3,
        unsigned int a4,
        _OWORD *a5,
        int (*a6)(const void *, unsigned __int64),
        __int64 a7)
{
  _DWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdx

  v8 = (_DWORD *)(a1 + 128);
  Windows::Internal::Holographic::V2PropertyRequest::V2PropertyRequest(
    (Windows::Internal::Holographic::V2PropertyRequest *)a1,
    a2,
    0x5B8430u,
    a4,
    (const void *)(a1 + 128),
    0x18uLL,
    (struct _LUID *)(a1 + 144),
    a6);
  *(_QWORD *)a1 = &Windows::Internal::Holographic::V2DevicePropertyRequest::`vftable';
  *v8 = 0;
  *(_OWORD *)(a1 + 132) = 0LL;
  *(_DWORD *)(a1 + 148) = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  v9 = *(_QWORD *)(a7 + 56);
  if ( v9 )
  {
    if ( v9 == a7 )
    {
      *(_QWORD *)(a1 + 208) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, a1 + 152);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a7, v10);
    }
    else
    {
      *(_QWORD *)(a1 + 208) = v9;
      *(_QWORD *)(a7 + 56) = 0LL;
    }
  }
  *(_OWORD *)v8 = *a5;
  return a1;
}
