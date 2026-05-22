/*
 * XREFs of ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180174420
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x18017491C (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE284 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 *     ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800F7EC8 (--0-$unordered_map@K_KU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CBK_K@std@@@2@@std@@.c)
 *     ??0?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@1@@Z @ 0x180174368 (--0-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$hash@K.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall DragNDropProcessorLegacy::DragNDropProcessorLegacy(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &DragNDropProcessorLegacy::`vftable'{for `IContextualProcessor'};
  *(_QWORD *)(a1 + 8) = &DragNDropProcessorLegacy::`vftable'{for `RefCountedObject'};
  v3 = (__int64 *)(a1 + 24);
  *v3 = *a2;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v3);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v8 = (unsigned __int64)(a1 + 80) >> 32;
  v7 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>(
    a1 + 80,
    &v7);
  std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(a1 + 144);
  std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
    a1 + 208,
    v4,
    v5);
  return a1;
}
