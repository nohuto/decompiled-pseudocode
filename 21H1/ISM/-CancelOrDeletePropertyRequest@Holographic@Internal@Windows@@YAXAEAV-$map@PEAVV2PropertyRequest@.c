/*
 * XREFs of ?CancelOrDeletePropertyRequest@Holographic@Internal@Windows@@YAXAEAV?$map@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@@std@@AEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@5@@Z @ 0x180159F90
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x180162A58 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEAVV2PropertyRequest@Holographic@Internal@Windows@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEAVV2PropertyRequest@Holographic@Internal@Windows@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180156200 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEAVV2PropertyRequest@Holographic@I.c)
 *     ??R?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRequest@Holographic@Internal@Windows@@@Z @ 0x180158FA8 (--R-$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@QEBAXPEAVV2PropertyRe.c)
 *     ?Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x180159EC0 (-Cancel@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 */

void __fastcall Windows::Internal::Holographic::CancelOrDeletePropertyRequest(
        __int64 *a1,
        Windows::Internal::Holographic::V2PropertyRequest **a2)
{
  __int64 *v3; // rsi
  Windows::Internal::Holographic::V2PropertyRequest *v4; // rdx
  const char *v5; // r9
  __int64 *v6; // rax
  Windows::Internal::Holographic::V2PropertyRequest *v7; // rdx
  __int64 v8; // r8
  Windows::Internal::Holographic::V2PropertyRequest *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  Windows::Internal::Holographic::V2PropertyRequest *v11; // [rsp+48h] [rbp+10h] BYREF
  Windows::Internal::Holographic::V2PropertyRequest **v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1;
  v4 = *a2;
  if ( *((_DWORD *)v4 + 26) != -2147023899 )
  {
    *a2 = 0LL;
LABEL_15:
    if ( v4 )
      std::default_delete<Windows::Internal::Holographic::V2PropertyRequest>::operator()((__int64)a1, (__int64)v4);
    return;
  }
  Windows::Internal::Holographic::V2PropertyRequest::Cancel(v4);
  v6 = (__int64 *)*v3;
  v7 = *a2;
  v11 = *a2;
  v8 = v6[1];
  if ( *(_BYTE *)(v8 + 25) )
    goto LABEL_9;
  do
  {
    if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)v7 )
    {
      v6 = (__int64 *)v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  while ( !*(_BYTE *)(v8 + 25) );
  if ( v6 == (__int64 *)*v3 || (unsigned __int64)v7 < v6[4] )
  {
LABEL_9:
    v12 = &v11;
    v6 = (__int64 *)*std::_Tree<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<Windows::Internal::Holographic::V2PropertyRequest * &&>,std::tuple<>>(
                       v3,
                       &v13,
                       v6,
                       (__int64)v5,
                       &v12);
  }
  a1 = v6 + 5;
  if ( v6[5] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      287LL,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\PropertyRequests.h",
      v5);
    __debugbreak();
  }
  if ( a1 != (__int64 *)a2 )
  {
    v9 = *a2;
    *a2 = 0LL;
    v4 = (Windows::Internal::Holographic::V2PropertyRequest *)*a1;
    *a1 = (__int64)v9;
    goto LABEL_15;
  }
}
