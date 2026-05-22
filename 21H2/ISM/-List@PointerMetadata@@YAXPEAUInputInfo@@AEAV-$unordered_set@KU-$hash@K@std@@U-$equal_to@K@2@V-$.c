/*
 * XREFs of ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x1801A4E40
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180099274 (-clear@-$_Hash@V-$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V-$_Uhash_compare@GU-$.c)
 *     ??$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEBKU_Not_a_node_tag@1@@Z @ 0x1800F6D34 (--$_Insert_unverified@$$CBKU_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-.c)
 */

unsigned __int64 __fastcall PointerMetadata::List(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 i; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  result = std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::clear(a2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 212); i = (unsigned int)(i + 1) )
  {
    v7 = *(_DWORD *)(a1 + 144 * i + 220);
    result = std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Insert_unverified<unsigned long const,std::_Not_a_node_tag>(
               a2,
               (__int64)v6,
               (const unsigned __int8 *)&v7);
  }
  return result;
}
