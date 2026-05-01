/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@@Z @ 0x1800BB81C
 * Callers:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@1@V21@@Z @ 0x1800B31C0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBUguid@winrt@@_K@std@@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@@2@0@Z @ 0x1800BB770 (-erase@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt.c)
 * Callees:
 *     ??R?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@QEBA_KAEBUguid@winrt@@@Z @ 0x1800B5178 (--R-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@@std@@QE.c)
 *     ?erase@?$list@U?$pair@$$CB_KUguid@winrt@@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@@Z @ 0x1800BBD40 (-erase@-$list@U-$pair@$$CB_KUguid@winrt@@@std@@V-$allocator@U-$pair@$$CB_KUguid@winrt@@@std@@@2@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::erase(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // rax

  v5 = std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>::operator()(
         (__int64)a1,
         a3 + 16);
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  std::list<std::pair<unsigned __int64 const,winrt::guid>>::erase(a1 + 1, a2, v6);
  return a2;
}
