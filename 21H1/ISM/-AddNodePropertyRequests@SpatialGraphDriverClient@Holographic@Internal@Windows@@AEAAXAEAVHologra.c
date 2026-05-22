/*
 * XREFs of ?AddNodePropertyRequests@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVHolographicDriverHandleWrapper@234@AEBUSPATIAL_NODE_ID@@@Z @ 0x180159980
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162A58 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A04 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180151A08 (--$_Emplace_reallocate@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default.c)
 *     ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@2@@std@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x180155B34 (--$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@-$map@USPATIAL_NODE_ID@@V-$vector@V-$unique_ptr@VV2Prop.c)
 *     ??0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@123@AEBUSPATIAL_NODE_ID@@IAEBU_GUID@@P6AJPEBX_K@Z$$QEAV?$function@$$A6AXAEAVV2NodePropertyRequest@Holographic@Internal@Windows@@J@Z@std@@@Z @ 0x180157398 (--0V2NodePropertyRequest@Holographic@Internal@Windows@@QEAA@AEAVHolographicDriverHandleWrapper@1.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180158FA8 (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18016066C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x180160CF0 (-NodePropertyRequestAdded_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180168034 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *a2,
        const struct SPATIAL_NODE_ID *a3,
        int a4)
{
  struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *v5; // rbx
  unsigned int v7; // r14d
  const char *v8; // r9
  __int64 *v9; // rsi
  void **v10; // rdi
  int v11; // r14d
  __int64 v12; // r13
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  __int64 *v15; // rdx
  __int64 v16; // rbx
  const struct _GUID *v17; // r13
  __int64 v18; // rcx
  HolographicDriverClientTrace *v19; // rcx
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  __int128 v21; // [rsp+48h] [rbp-71h] BYREF
  struct Windows::Internal::Holographic::HolographicDriverHandleWrapper *v22; // [rsp+58h] [rbp-61h]
  void *v23; // [rsp+60h] [rbp-59h]
  char v24; // [rsp+78h] [rbp-41h]
  char v25; // [rsp+79h] [rbp-40h]
  void **v26; // [rsp+90h] [rbp-29h] BYREF
  __int128 v27; // [rsp+98h] [rbp-21h]
  char v28; // [rsp+A8h] [rbp-11h]
  char v29; // [rsp+A9h] [rbp-10h]
  Windows::Internal::Holographic::SpatialGraphDriverClient *v30; // [rsp+B0h] [rbp-9h]
  void ***v31; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v5 = a2;
  v22 = a2;
  v7 = 0;
  LODWORD(v20) = 0;
  std::map<SPATIAL_NODE_ID,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>>>::_Try_emplace<SPATIAL_NODE_ID const &,>(
    (__int64 *)this + 43,
    (__int64)&v21,
    a3,
    a4);
  v9 = (__int64 *)v21;
  if ( *(_QWORD *)(v21 + 48) != *(_QWORD *)(v21 + 56) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      538LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      v8);
    __debugbreak();
  }
  v10 = (void **)&off_1801B7EA0;
  do
  {
    v23 = operator new(0xE8uLL);
    *(_QWORD *)&v21 = Windows::Internal::Holographic::SpatialGraphDriverClient::OnNodePropertyRequestComplete;
    DWORD2(v21) = 0;
    v26 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2NodePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2NodePropertyRequest &,long>::`vftable';
    v27 = v21;
    v28 = v24;
    v29 = v25;
    v30 = this;
    v31 = &v26;
    v11 = v7 | 1;
    LODWORD(v20) = v11;
    v12 = Windows::Internal::Holographic::V2NodePropertyRequest::V2NodePropertyRequest(
            (__int64)v23,
            v5,
            a3,
            *((_DWORD *)v10 + 2),
            *v10,
            (int (*)(const void *, unsigned __int64))v10[2],
            (__int64)&v26);
    v20 = v12;
    v7 = v11 & 0xFFFFFFFE;
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)&v26, v13);
    v15 = (__int64 *)v9[7];
    if ( (__int64 *)v9[8] == v15 )
    {
      std::vector<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>::_Emplace_reallocate<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
        v9 + 6,
        (__int64)v15,
        &v20);
      v16 = v20;
    }
    else
    {
      v16 = 0LL;
      *v15 = v12;
      v9[7] += 8LL;
    }
    v17 = (const struct _GUID *)*v10;
    if ( HolographicDriverClientTrace::IsEnabled(v14, (unsigned __int64)v15) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v18,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::NodePropertyRequestAdded_(v19, (const struct _GUID *)this + 5, a3, v17);
    }
    if ( v16 )
      std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()(v18, v16);
    v10 += 3;
    v5 = v22;
  }
  while ( v10 != &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (Windows::Internal::Holographic::SpatialGraphDriverClient::*)(Windows::Internal::Holographic::V2DevicePropertyRequest &,long),Windows::Internal::Holographic::SpatialGraphDriverClient *,std::_Ph<1> const &,std::_Ph<2> const &>,void,Windows::Internal::Holographic::V2DevicePropertyRequest &,long>::`vftable' );
}
