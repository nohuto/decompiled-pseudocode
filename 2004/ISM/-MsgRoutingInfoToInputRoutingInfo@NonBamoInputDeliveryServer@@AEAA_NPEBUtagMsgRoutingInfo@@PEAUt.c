/*
 * XREFs of ?MsgRoutingInfoToInputRoutingInfo@NonBamoInputDeliveryServer@@AEAA_NPEBUtagMsgRoutingInfo@@PEAUtagInputRoutingInfo@@@Z @ 0x18003558C
 * Callers:
 *     ?Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x180035510 (-Deliver@NonBamoInputDeliveryServer@@UEAAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1800353B8 (-lower_bound@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035638 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

bool __fastcall NonBamoInputDeliveryServer::MsgRoutingInfoToInputRoutingInfo(
        NonBamoInputDeliveryServer *this,
        const struct tagMsgRoutingInfo *a2,
        struct tagInputRoutingInfo *a3)
{
  char *v5; // r9
  __int64 v6; // rax
  __int128 v7; // xmm0
  bool result; // al
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v10[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v11 = 0LL;
  memset(v10, 0, sizeof(v10));
  if ( (unsigned __int8)operator==(a2, v10) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xAB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v5);
    JUMPOUT(0x180060D0ALL);
  }
  std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::lower_bound(
    (__int64)this + 208,
    (__int64)&v9,
    (unsigned int *)v5);
  v6 = v9;
  if ( v9 == *((_QWORD *)this + 27) )
    return 0;
  *(_OWORD *)a3 = *(_OWORD *)(v9 + 56);
  *((_OWORD *)a3 + 1) = *(_OWORD *)(v6 + 72);
  v7 = *(_OWORD *)(v6 + 88);
  result = 1;
  *((_OWORD *)a3 + 2) = v7;
  return result;
}
