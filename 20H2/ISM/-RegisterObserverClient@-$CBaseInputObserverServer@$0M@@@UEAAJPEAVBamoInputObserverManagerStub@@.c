/*
 * XREFs of ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4C30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0InputObserverClient@?$CBaseInputObserverServer@$0M@@@QEAA@PEAVBamoInputObserverClientProxy@@W4_MIT_INPUT_OBSERVATION_STATE@@@Z @ 0x1800445A4 (--0InputObserverClient@-$CBaseInputObserverServer@$0M@@@QEAA@PEAVBamoInputObserverClientProxy@@W.c)
 *     ?CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180044600 (-CheckClientCapability@@YAJPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x1800446B4 (-UpdateObservationState@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x1800F454C (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4B48 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F5090 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUtagRECT@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseInputObserverServer<12>::RegisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  const unsigned __int16 *v5; // rdx
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 ClientId; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::lower_bound(
    a1 + 152,
    &v17,
    &ClientId);
  if ( v17 == *(_QWORD *)(a1 + 160) )
  {
    v6 = CheckClientCapability(a3, v5);
    if ( v6 >= 0 )
    {
      *((_DWORD *)a3 + 14) = *(_DWORD *)(a1 + 220);
      v7 = CBaseInputObserverServer<12>::InputObserverClient::InputObserverClient(
             &v13,
             (__int64 (__fastcall ***)(_QWORD))a3);
      std::unordered_map<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>>::_Try_emplace<unsigned __int64 const &,>(
        a1 + 152,
        (__int64)v14,
        (const unsigned __int8 *)&ClientId);
      v8 = v14[0];
      v9 = 0LL;
      if ( &v17 != v7 )
      {
        v9 = *v7;
        *v7 = 0LL;
      }
      v10 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 24) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      *(_DWORD *)(v8 + 32) = *((_DWORD *)v7 + 2);
      v11 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      CBaseInputObserverServer<12>::UpdateObservationState(a1);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        67LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\inputobservers\\server\\BaseInputObserverServer.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  return 0LL;
}
