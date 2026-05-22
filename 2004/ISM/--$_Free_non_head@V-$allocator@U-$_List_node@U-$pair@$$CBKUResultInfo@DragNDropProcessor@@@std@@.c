/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F6510
 * Callers:
 *     ??1?$list@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@2@@std@@QEAA@XZ @ 0x1800F80FC (--1-$list@U-$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUResultIn.c)
 *     ??1?$unordered_map@KUResultInfo@DragNDropProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@@std@@QEAA@XZ @ 0x1800F81BC (--1-$unordered_map@KUResultInfo@DragNDropProcessor@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x1800F8258 (--1DragNDropProcessor@@UEAA@XZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@KUResultInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUResultInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x1800FC06C (-clear@-$_Hash@V-$_Umap_traits@KUResultInfo@DragNDropProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::ResultInfo>,void *>>>(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  _QWORD *v4; // rdi

  **((_QWORD **)a2 + 1) = 0LL;
  v2 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v3 = (void *)v2[3];
      v4 = (_QWORD *)*v2;
      if ( v3 )
        operator delete(v3, a2);
      std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)0x30);
      v2 = v4;
    }
    while ( v4 );
  }
}
