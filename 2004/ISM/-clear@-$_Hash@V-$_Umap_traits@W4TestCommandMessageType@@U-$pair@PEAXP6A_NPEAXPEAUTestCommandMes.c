/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800BC548
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800BC66C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180175500 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BBFC8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUtagRECT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::clear(
        __int64 a1)
{
  unsigned __int64 result; // rax
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,tagRECT>,void *>>>(
    a1,
    *(_QWORD ***)(a1 + 8));
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = *(void **)(a1 + 24);
  v4 = (unsigned __int64)(*(_QWORD *)(a1 + 32) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 32) )
    v4 = 0LL;
  if ( v4 )
  {
    result = *(_QWORD *)(a1 + 8);
    memset64(v3, result, v4);
  }
  return result;
}
