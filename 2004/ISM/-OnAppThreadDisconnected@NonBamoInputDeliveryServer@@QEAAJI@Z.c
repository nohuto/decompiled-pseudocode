/*
 * XREFs of ?OnAppThreadDisconnected@NonBamoInputDeliveryServer@@QEAAJI@Z @ 0x1801033E0
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x1801035D0 (-OnPeerDisconnected@InputDeliveryServerConversationHost@NonBamoInputDeliveryServer@@UEAAJIPEBX_N.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FB28 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x180103760 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::OnAppThreadDisconnected(NonBamoInputDeliveryServer *this, int a2)
{
  _QWORD *v2; // rdi
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v16[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 216);
  i = (__int64 *)*((_QWORD *)this + 27);
LABEL_2:
  for ( i = (__int64 *)*i; i != (__int64 *)*v2; i = v20 )
  {
    if ( *((_DWORD *)i + 14) != a2 )
      goto LABEL_2;
    v6 = (__int64 *)*((_QWORD *)this + 4);
    v7 = *((_OWORD *)i + 5);
    *(_OWORD *)v16 = *((_OWORD *)i + 4);
    v8 = *v6;
    v9 = i[12];
    v17 = v7;
    v18 = v9;
    v10 = (*(__int64 (__fastcall **)(__int64 *, int *))(v8 + 40))(v6, v16);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        373LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
        (const char *)(unsigned int)v10);
    v11 = *((_QWORD *)this + 29);
    v12 = (unsigned __int64)*((unsigned int *)i + 4) << 32;
    v13 = 2 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5)));
    if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5))) + 8) == i )
    {
      if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5)))) == i )
      {
        *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5)))) = *v2;
        v11 = *((_QWORD *)this + 29);
        v14 = *v2;
      }
      else
      {
        v14 = i[1];
      }
      *(_QWORD *)(v11 + 8 * v13 + 8) = v14;
    }
    else if ( *(__int64 **)(v11 + 16 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5)))) == i )
    {
      *(_QWORD *)(v11 + 16 * (*((_QWORD *)this + 32) & (v12 | *((unsigned int *)i + 5)))) = *i;
    }
    std::list<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>::erase(v2, &v20);
  }
  return 0LL;
}
