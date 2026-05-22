/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$unordered_map@KUMessageInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800FD6EC
 * Callers:
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FF16C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FF3CC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800FD4A0 (--$_Insert@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$list@U-_ea_1800FD4A0.c)
 *     ??$_Insert_unverified@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBKUMessageInfo@ResizeProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@1@@Z @ 0x1800FD558 (--$_Insert_unverified@U-$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@V-$_List_unchecked_iterat.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,ResizeProcessor::MessageInfo>::_Try_emplace<unsigned long const &,>(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v6; // r11
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 ***v10; // rdi
  __int64 *v11; // rdx
  __int64 v12; // rdx
  const unsigned __int8 *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 48) & std::_Fnv1a_append_bytes(a1, a3, 4uLL);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
           a1,
           &v14,
           v6);
    if ( v9 == *v7 )
      break;
    if ( *(_DWORD *)(v9 + 16) == *(_DWORD *)a3 )
    {
      v10 = (__int64 ***)(a1 + 8);
      v11 = *(__int64 **)(a1 + 8);
      goto LABEL_6;
    }
  }
  v10 = (__int64 ***)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  v11 = (__int64 *)v9;
LABEL_6:
  if ( (__int64 *)v9 == v11 )
  {
    v12 = *v11;
    v14 = a3;
    std::list<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>::_Insert<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
      (__int64)v10,
      v12,
      v8,
      (_DWORD **)&v14);
    std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Insert_unverified<std::pair<unsigned long const,ResizeProcessor::MessageInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>(
      a1,
      a2,
      (const unsigned __int8 *)**v10 + 16,
      **v10);
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
