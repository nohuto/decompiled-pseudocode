/*
 * XREFs of ?IsContactInBuffer@ContextualProcessorBuffer@@UEAA_NK@Z @ 0x18014C210
 * Callers:
 *     <none>
 * Callees:
 *     ?equal_range@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@std@@@std@@@std@@V12@@2@AEBK@Z @ 0x1800454F0 (-equal_range@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash.c)
 */

char __fastcall ContextualProcessorBuffer::IsContactInBuffer(ContextualProcessorBuffer *this, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_QWORD *)this + 4);
  v3 = *((_QWORD *)this + 5);
  while ( 1 )
  {
    if ( v2 == v3 )
      return 0;
    std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::ResultInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>>,0>>::equal_range(
      (_QWORD *)(v2 + 8),
      v7,
      (const unsigned __int8 *)&v8);
    v4 = (_QWORD *)v7[0];
    v5 = 0LL;
    while ( v4 != (_QWORD *)v7[1] )
    {
      v4 = (_QWORD *)*v4;
      ++v5;
    }
    if ( v5 )
      break;
    v2 += 160LL;
  }
  return 1;
}
