/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180069FB8
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180069FB8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$com_ptr_t@VMPCGestureHandler@@Uerr_exc.c)
 *     ??1?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x18006ADF8 (--1-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x18006AE28 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x18006C040 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180069FB8 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$com_ptr_t@VMPCGestureHandler@@Uerr_exc.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdi
  __int64 *v6; // rbx

  v3 = a3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>,void *>>>(
      a1,
      a2,
      *(_QWORD *)(v3 + 16));
    v6 = (__int64 *)v3;
    v3 = *(_QWORD *)v3;
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v6 + 5);
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x30);
  }
}
