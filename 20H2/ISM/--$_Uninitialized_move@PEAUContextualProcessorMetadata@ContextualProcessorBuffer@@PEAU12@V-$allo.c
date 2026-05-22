/*
 * XREFs of ??$_Uninitialized_move@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x18014A55C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013470 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@0AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@@Z @ 0x180149D60 (--$_Destroy_range@V-$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@st.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014A998 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha_ea_18014A998.c)
 *     ??0?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014AA8C (--0-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@_ea_18014AA8C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Uninitialized_move<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rcx

  if ( a1 != a2 )
  {
    v5 = a1 + 144;
    do
    {
      *(_QWORD *)a3 = 0LL;
      v6 = (_QWORD *)(v5 - 144);
      if ( a3 != v5 - 144 )
      {
        *(_QWORD *)a3 = *v6;
        *v6 = 0LL;
      }
      std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>(
        a3 + 8,
        v5 - 136);
      *(_DWORD *)(a3 + 72) = *(_DWORD *)(v5 - 72);
      std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>(
        a3 + 80,
        v5 - 64);
      *(_QWORD *)(a3 + 144) = 0LL;
      if ( a3 + 144 != v5 )
      {
        *(_QWORD *)(a3 + 144) = *(_QWORD *)v5;
        *(_QWORD *)v5 = 0LL;
      }
      *(_BYTE *)(a3 + 152) = *(_BYTE *)(v5 + 8);
      a3 += 160LL;
      v5 += 160LL;
    }
    while ( v5 - 144 != a2 );
  }
  std::_Destroy_range<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
    (ContextualProcessorBuffer::ContextualProcessorMetadata *)a3,
    (ContextualProcessorBuffer::ContextualProcessorMetadata *)a3);
  return a3;
}
