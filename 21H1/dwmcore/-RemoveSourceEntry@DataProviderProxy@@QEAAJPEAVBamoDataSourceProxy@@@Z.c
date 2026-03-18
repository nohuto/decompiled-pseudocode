/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180185E68
 * Callers:
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x1801849E0 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180185E30 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x180168C14 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801698A8 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x18018523C (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  _QWORD *v9; // rbx
  __int64 appended; // rax
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF

  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  v3 = Unique;
  v5 = *((_QWORD *)this + 16) & std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&Unique, 8uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
           (__int64)this + 80,
           &Unique,
           v5);
    if ( v8 == *v6 )
      break;
    if ( *(_QWORD *)(v8 + 16) == v3 )
      goto LABEL_6;
  }
  v8 = *((_QWORD *)this + 11);
LABEL_6:
  v9 = (_QWORD *)((char *)this + 88);
  if ( v8 == *((_QWORD *)this + 11) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v8 + 24) + 192LL) = 0LL;
    appended = std::_Fnv1a_append_bytes(v7, (const unsigned __int8 *const)(v8 + 16), 8uLL);
    v13 = *((_QWORD *)this + 13);
    v14 = 2 * (*((_QWORD *)this + 16) & appended);
    if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 16) & appended) + 8) == v12 )
    {
      if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 16) & appended)) == v12 )
      {
        *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 16) & appended)) = *v9;
        v13 = *((_QWORD *)this + 13);
        v15 = *v9;
      }
      else
      {
        v15 = *(_QWORD *)(v12 + 8);
      }
      *(_QWORD *)(v13 + 8 * v14 + 8) = v15;
    }
    else if ( *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 16) & appended)) == v12 )
    {
      *(_QWORD *)(v13 + 16 * (*((_QWORD *)this + 16) & appended)) = *(_QWORD *)v12;
    }
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(
      (__int64)this + 88,
      &Unique,
      (_QWORD **)v12);
    return 0LL;
  }
}
