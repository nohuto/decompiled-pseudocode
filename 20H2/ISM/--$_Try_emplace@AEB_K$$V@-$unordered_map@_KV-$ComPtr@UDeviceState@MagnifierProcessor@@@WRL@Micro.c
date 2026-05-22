/*
 * XREFs of ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@U?$hash@_K@std@@U?$equal_to@_K@5@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18017C4F0
 * Callers:
 *     ?GetDeviceState@MagnifierProcessor@@AEAA?AV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@PEBUHitTestInfo@@@Z @ 0x18017CCCC (-GetDeviceState@MagnifierProcessor@@AEAA-AV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Micros.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18017C59C (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Hash@_ea_18017C59C.c)
 */

__int64 __fastcall std::unordered_map<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>::_Try_emplace<unsigned __int64 const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  __int64 v6; // r11
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  __int64 v11; // rax
  const unsigned __int8 *v13; // [rsp+40h] [rbp+8h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v7 = *(_QWORD *)(v6 + 48) & appended;
  while ( 1 )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           v6,
           &v13,
           v7);
    if ( v10 == *v8 )
      break;
    if ( *(_QWORD *)(v10 + 16) == *(_QWORD *)a3 )
    {
      v11 = *(_QWORD *)(v6 + 8);
      goto LABEL_6;
    }
  }
  v10 = *(_QWORD *)(v6 + 8);
  v11 = v10;
LABEL_6:
  if ( v10 == v11 )
  {
    v13 = a3;
    std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<unsigned __int64 const &>,std::tuple<>>(
      v6,
      a2,
      v9,
      &v13);
  }
  else
  {
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
