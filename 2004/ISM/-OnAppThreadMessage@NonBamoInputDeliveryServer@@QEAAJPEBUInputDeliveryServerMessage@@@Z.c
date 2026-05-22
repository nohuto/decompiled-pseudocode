/*
 * XREFs of ?OnAppThreadMessage@NonBamoInputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180035198
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x180035170 (-OnItemMessage@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ??$_Insert_unverified@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@1@@Z @ 0x180035260 (--$_Insert_unverified@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$_List_unche.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V?$_Uhash_compare@UtagMsgRoutingInfo@@U?$hash@UtagMsgRoutingInfo@@@std@@U?$equal_to@UtagMsgRoutingInfo@@@3@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@AEBUtagMsgRoutingInfo@@@Z @ 0x1800353B8 (-lower_bound@-$_Hash@V-$_Umap_traits@UtagMsgRoutingInfo@@UtagInputRoutingInfo@@V-$_Uhash_compare.c)
 *     ??$_Insert@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@Z @ 0x180035458 (--$_Insert@AEBUtagMsgRoutingInfo@@AEBUtagInputRoutingInfo@@@-$list@U-$pair@$$CBUtagMsgRoutingInf.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x180103760 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadMessage(
        NonBamoInputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  __int64 (__fastcall *v12)(__int64 *, __int128 *, __int64, __int64); // rax
  int v13; // eax
  const char *v15; // r9
  __int64 *v16; // rcx
  __int128 v17; // xmm1
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  __int64 (__fastcall *v22)(__int64 *, __int128 *, __int64, __int64); // rax
  __int64 v23; // rdx
  __int64 *v24; // rcx
  __int128 v25; // xmm1
  __int64 v26; // xmm0_8
  __int64 v27; // rax
  int v28; // eax
  const char *v29; // r9
  __int64 v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-50h]
  _BYTE v36[16]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v37; // [rsp+40h] [rbp-30h] BYREF
  __int128 v38; // [rsp+50h] [rbp-20h]
  __int64 v39; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v41; // [rsp+98h] [rbp+28h] BYREF

  switch ( *(_DWORD *)a2 )
  {
    case 0:
      std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::_Insert<tagMsgRoutingInfo const &,tagInputRoutingInfo const &>(
        (char *)this + 216,
        **((_QWORD **)this + 27),
        (char *)a2 + 16,
        (char *)a2 + 8);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::_Insert_unverified<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>(
        (char *)this + 208,
        v36,
        **((_QWORD **)this + 27) + 16LL);
      v6 = (__int64 *)*((_QWORD *)this + 4);
      v7 = *((_OWORD *)a2 + 2);
      v8 = *((unsigned int *)a2 + 15);
      v9 = *((unsigned int *)a2 + 14);
      v10 = *v6;
      v37 = *((_OWORD *)a2 + 1);
      v11 = *((_QWORD *)a2 + 6);
      v38 = v7;
      v12 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v10 + 24);
      v39 = v11;
      v13 = v12(v6, &v37, v9, v8);
      if ( v13 >= 0 )
        return 0LL;
      v23 = 313LL;
LABEL_24:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v13,
        v35);
      return 0LL;
    case 1:
      v24 = (__int64 *)*((_QWORD *)this + 4);
      v25 = *((_OWORD *)a2 + 2);
      v37 = *((_OWORD *)a2 + 1);
      v26 = *((_QWORD *)a2 + 6);
      v27 = *v24;
      v38 = v25;
      v39 = v26;
      v28 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v27 + 40))(v24, &v37);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x141,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          (const char *)(unsigned int)v28,
          v35);
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::lower_bound(
        (char *)this + 208,
        &v41,
        (char *)a2 + 16);
      v29 = (char *)this + 216;
      v30 = *((_QWORD *)this + 27);
      if ( v41 == v30 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x144,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v29);
        __debugbreak();
      }
      v31 = *(unsigned int *)(v41 + 20);
      v32 = *((_QWORD *)this + 29);
      v33 = 2 * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)));
      if ( *(_QWORD *)(v32
                     + 16 * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)))
                     + 8) == v41 )
      {
        if ( *(_QWORD *)(v32
                       + 16 * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)))) == v41 )
        {
          *(_QWORD *)(v32 + 16
                          * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)))) = v30;
          v32 = *((_QWORD *)this + 29);
          v34 = *(_QWORD *)v29;
        }
        else
        {
          v34 = *(_QWORD *)(v41 + 8);
        }
        *(_QWORD *)(v32 + 8 * v33 + 8) = v34;
      }
      else if ( *(_QWORD *)(v32
                          + 16
                          * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)))) == v41 )
      {
        *(_QWORD *)(v32 + 16 * (*((_QWORD *)this + 32) & (v31 | ((unsigned __int64)*(unsigned int *)(v41 + 16) << 32)))) = *(_QWORD *)v41;
      }
      std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::erase((char *)this + 216, &v41);
      break;
    case 2:
      std::_Hash<std::_Umap_traits<tagMsgRoutingInfo,tagInputRoutingInfo,std::_Uhash_compare<tagMsgRoutingInfo,std::hash<tagMsgRoutingInfo>,std::equal_to<tagMsgRoutingInfo>>,std::allocator<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>,0>>::lower_bound(
        (char *)this + 208,
        &v41,
        (char *)a2 + 16);
      if ( v41 == *((_QWORD *)this + 27) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x14D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
          v15);
        __debugbreak();
      }
      v16 = (__int64 *)*((_QWORD *)this + 4);
      v17 = *((_OWORD *)a2 + 2);
      v18 = *((unsigned int *)a2 + 15);
      v19 = *((unsigned int *)a2 + 14);
      v20 = *v16;
      v37 = *((_OWORD *)a2 + 1);
      v21 = *((_QWORD *)a2 + 6);
      v38 = v17;
      v22 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, __int64))(v20 + 32);
      v39 = v21;
      v13 = v22(v16, &v37, v19, v18);
      if ( v13 < 0 )
      {
        v23 = 338LL;
        goto LABEL_24;
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x159,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        a4);
      __debugbreak();
  }
  return 0LL;
}
