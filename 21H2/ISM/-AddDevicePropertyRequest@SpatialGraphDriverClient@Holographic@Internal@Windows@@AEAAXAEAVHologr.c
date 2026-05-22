/*
 * XREFs of ?AddDevicePropertyRequest@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBU_GUID@@W4SpatialGraphPropertyFlags@234@P6AJPEBX_K@Z@Z @ 0x18015927C
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1801629B8 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1801519A8 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 *     ??0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@KIAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2DevicePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180157230 (--0V2DevicePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180158F48 (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@Z @ 0x18015BCD8 (-DevicePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@1@.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016060C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F94 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddDevicePropertyRequest(
        __int64 a1,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        _OWORD *a3,
        unsigned int a4,
        int (*a5)(const void *, unsigned __int64))
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // rbx
  char result; // al
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // [rsp+40h] [rbp-41h] BYREF
  char v18; // [rsp+50h] [rbp-31h]
  char v19; // [rsp+51h] [rbp-30h]
  void *v20; // [rsp+60h] [rbp-21h]
  void **v21; // [rsp+70h] [rbp-11h] BYREF
  __int128 v22; // [rsp+78h] [rbp-9h]
  char v23; // [rsp+88h] [rbp+7h]
  char v24; // [rsp+89h] [rbp+8h]
  __int64 v25; // [rsp+90h] [rbp+Fh]
  void ***v26; // [rsp+A8h] [rbp+27h]

  v20 = operator new(0xD8uLL);
  *(_QWORD *)&v17 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnDevicePropertyRequestComplete;
  DWORD2(v17) = 0;
  v21 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable';
  v22 = v17;
  v23 = v18;
  v24 = v19;
  v25 = a1;
  v26 = &v21;
  v9 = Windows::Internal::Holographic::V2DevicePropertyRequest::V2DevicePropertyRequest(
         (__int64)v20,
         a2,
         (__int64)v20,
         a4,
         a3,
         a5,
         (__int64)&v21);
  *(_QWORD *)&v17 = v9;
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v21, v10);
  v11 = (__int64 *)(a1 + 320);
  v12 = *(__int64 **)(a1 + 328);
  if ( *(__int64 **)(a1 + 336) == v12 )
  {
    std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
      v11,
      (__int64)v12,
      (__int64 *)&v17);
    v13 = v17;
  }
  else
  {
    v13 = 0LL;
    *v12 = v9;
    *(_QWORD *)(a1 + 328) += 8LL;
  }
  result = HolographicDriverClientTrace::IsEnabled((unsigned __int8)v11, (unsigned __int64)v12);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v15,
      _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    result = HolographicDriverClientTrace::DevicePropertyRequestAdded_(v16, 1LL, a1 + 80, a3);
  }
  if ( v13 )
    return std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(v15, v13);
  return result;
}
