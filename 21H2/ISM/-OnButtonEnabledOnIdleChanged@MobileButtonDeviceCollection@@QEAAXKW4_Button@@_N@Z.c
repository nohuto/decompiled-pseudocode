/*
 * XREFs of ?OnButtonEnabledOnIdleChanged@MobileButtonDeviceCollection@@QEAAXKW4_Button@@_N@Z @ 0x180098208
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18008ED90 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x180046380 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 *     ??$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@$$QEBIU_Not_a_node_tag@1@@Z @ 0x180097298 (--$_Insert_unverified@$$CBIU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x180098E34 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18009936C (-erase@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@_ea_18009936C.c)
 */

_QWORD *__fastcall MobileButtonDeviceCollection::OnButtonEnabledOnIdleChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  _QWORD *v4; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // r8
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-8h]
  unsigned int v15; // [rsp+60h] [rbp+30h] BYREF

  v15 = a3;
  v4 = (_QWORD *)(a1 + 2824);
  v7 = (_QWORD *)(a1 + 2824);
  if ( a4 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      v7,
      &v13,
      (const unsigned __int8 *)&v15);
    result = v13;
    v11 = 0LL;
    while ( result != v14 )
    {
      result = (_QWORD *)*result;
      ++v11;
    }
    if ( !v11 )
    {
      LOBYTE(v9) = a4;
      MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, v9);
      return (_QWORD *)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_unverified<unsigned int const,std::_Not_a_node_tag>(
                         v4,
                         (__int64)&v13,
                         (const unsigned __int8 *)&v15);
    }
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      v7,
      &v13,
      (const unsigned __int8 *)&v15);
    result = v13;
    v12 = 0LL;
    while ( result != v14 )
    {
      result = (_QWORD *)*result;
      ++v12;
    }
    if ( v12 )
    {
      MobileButtonDeviceCollection::SendIOCTLMessage(a1, a3, 0LL);
      return (_QWORD *)std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::erase(
                         v4,
                         &v15);
    }
  }
  return result;
}
