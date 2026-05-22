/*
 * XREFs of ??$_Insert_or_assign@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@?$unordered_map@KUUsageList@MobileButtonDeviceCollection@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@MobileButtonDeviceCollection@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUUsageList@MobileButtonDeviceCollection@@@Z @ 0x180096D60
 * Callers:
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180097E80 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180099530 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x1800451F8 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@?$list@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@V?$allocator@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUUsageList@ConsumerControlDeviceCollection@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@Z @ 0x180096CAC (--$_Insert@AEBKAEAUUsageList@ConsumerControlDeviceCollection@@@-$list@U-$pair@$$CBKUUsageList@Co.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@1@@Z @ 0x180096FC4 (--$_Insert_unverified@AEAU-$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@V-$_List_unc.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,MobileButtonDeviceCollection::UsageList>::_Insert_or_assign<unsigned long const &,MobileButtonDeviceCollection::UsageList &>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _OWORD *a4)
{
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD **v11; // rbx
  __int64 *v12; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1,
           &v14,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == *(_DWORD *)a3 )
    {
      v11 = (_QWORD **)(a1 + 8);
      v12 = *(__int64 **)(a1 + 8);
      goto LABEL_6;
    }
  }
  v11 = (_QWORD **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  v12 = (__int64 *)v10;
LABEL_6:
  if ( (__int64 *)v10 == v12 )
  {
    std::list<std::pair<unsigned long const,ConsumerControlDeviceCollection::UsageList>>::_Insert<unsigned long const &,ConsumerControlDeviceCollection::UsageList &>(
      (__int64)v11,
      *v12,
      a3,
      a4);
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::_Insert_unverified<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>>>>(
      a1,
      a2,
      **v11 + 16LL);
  }
  else
  {
    *(_OWORD *)(v10 + 24) = *a4;
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
