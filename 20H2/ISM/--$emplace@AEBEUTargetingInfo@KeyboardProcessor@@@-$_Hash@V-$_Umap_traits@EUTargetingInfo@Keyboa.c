/*
 * XREFs of ??$emplace@AEBEUTargetingInfo@KeyboardProcessor@@@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBE$$QEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180047924
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180135250 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Insert@AEBEUTargetingInfo@KeyboardProcessor@@@?$list@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBE$$QEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x1800476AC (--$_Insert@AEBEUTargetingInfo@KeyboardProcessor@@@-$list@U-$pair@$$CBEUTargetingInfo@KeyboardPro.c)
 *     ??$_Insert_unverified@AEAU?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@1@@Z @ 0x18004778C (--$_Insert_unverified@AEAU-$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V-$_List_unchecked.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::emplace<unsigned char const &,KeyboardProcessor::TargetingInfo>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        _QWORD *a4)
{
  __int64 **v4; // rbx

  v4 = (__int64 **)(a1 + 8);
  std::list<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>::_Insert<unsigned char const &,KeyboardProcessor::TargetingInfo>(
    a1 + 8,
    **(_QWORD **)(a1 + 8),
    a3,
    a4);
  std::_Hash<std::_Umap_traits<unsigned char,KeyboardProcessor::TargetingInfo,std::_Uhash_compare<unsigned char,std::hash<unsigned char>,std::equal_to<unsigned char>>,std::allocator<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>,0>>::_Insert_unverified<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>(
    a1,
    a2,
    (const unsigned __int8 *)(**v4 + 16),
    **v4);
  return a2;
}
