/*
 * XREFs of ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x1800446B4 (-UpdateObservationState@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 *     ??F?$SafeInt@KUSafeIntErrorPolicy_SafeIntException@utilities@msl@@@utilities@msl@@QEAA?AV012@H@Z @ 0x1800F48B0 (--F-$SafeInt@KUSafeIntErrorPolicy_SafeIntException@utilities@msl@@@utilities@msl@@QEAA-AV012@H@Z.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x1800F4B48 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@std@@@std@@@2@@Z @ 0x1800F501C (-erase@-$list@U-$pair@$$CB_KUInputObserverClient@-$CBaseInputObserverServer@$0M@@@@std@@V-$alloc.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@_KUtagRECT@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUtagRECT@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUtagRECT@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1800F5090 (-lower_bound@-$_Hash@V-$_Umap_traits@_KUtagRECT@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::UnregisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 appended; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  ClientId = GetClientId(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,tagRECT,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,tagRECT>>,0>>::lower_bound(
    a1 + 152,
    &v13,
    &ClientId);
  v5 = v13;
  v6 = (_QWORD *)(a1 + 160);
  if ( v13 != *(_QWORD *)(a1 + 160) )
  {
    if ( *(_DWORD *)(v13 + 32) == 4 )
      msl::utilities::SafeInt<unsigned long,msl::utilities::SafeIntErrorPolicy_SafeIntException>::operator--(
        (int *)(a1 + 216),
        &ClientId);
    appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)(v5 + 16), 8uLL);
    v8 = *(_QWORD *)(a1 + 176);
    v9 = 2 * (*(_QWORD *)(a1 + 200) & appended);
    if ( *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 200) & appended) + 8) == v5 )
    {
      if ( *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 200) & appended)) == v5 )
      {
        *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 200) & appended)) = *v6;
        v8 = *(_QWORD *)(a1 + 176);
        v10 = *v6;
      }
      else
      {
        v10 = *(_QWORD *)(v5 + 8);
      }
      *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
    }
    else if ( *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 200) & appended)) == v5 )
    {
      *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 200) & appended)) = *(_QWORD *)v5;
    }
    std::list<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>::erase(
      a1 + 160,
      &ClientId,
      v5);
    CBaseInputObserverServer<12>::UpdateObservationState(a1);
  }
  return 0LL;
}
