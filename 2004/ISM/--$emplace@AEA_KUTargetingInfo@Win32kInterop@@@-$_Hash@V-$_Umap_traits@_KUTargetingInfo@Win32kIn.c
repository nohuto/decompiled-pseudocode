/*
 * XREFs of ??$emplace@AEA_KUTargetingInfo@Win32kInterop@@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x1800242CC
 * Callers:
 *     ?DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000B550 (-DoConvergedHitTestCallback@Win32kInterop@@AEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResul.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800AFC80 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 * Callees:
 *     ??$_Insert_unverified@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@@Z @ 0x180024324 (--$_Insert_unverified@U-$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V-$_List_unchecked_itera.c)
 *     ??$_Insert@AEA_KUTargetingInfo@Win32kInterop@@@?$list@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEA_K$$QEAUTargetingInfo@Win32kInterop@@@Z @ 0x180024DE0 (--$_Insert@AEA_KUTargetingInfo@Win32kInterop@@@-$list@U-$pair@$$CB_KUTargetingInfo@Win32kInterop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::emplace<unsigned __int64 &,Win32kInterop::TargetingInfo>(
        __int64 a1,
        __int64 a2)
{
  _QWORD **v2; // rbx

  v2 = (_QWORD **)(a1 + 8);
  std::list<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>::_Insert<unsigned __int64 &,Win32kInterop::TargetingInfo>(
    a1 + 8,
    **(_QWORD **)(a1 + 8));
  std::_Hash<std::_Umap_traits<unsigned __int64,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>,0>>::_Insert_unverified<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Win32kInterop::TargetingInfo>>>>>(
    a1,
    a2,
    **v2 + 16LL);
  return a2;
}
