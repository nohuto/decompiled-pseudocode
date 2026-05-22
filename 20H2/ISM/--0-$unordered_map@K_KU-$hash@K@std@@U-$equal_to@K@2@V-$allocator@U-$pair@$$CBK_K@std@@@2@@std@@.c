/*
 * XREFs of ??0?$unordered_map@K_KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAA@XZ @ 0x1800F7E38
 * Callers:
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@23@@Z @ 0x1800F7E68 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$ComPt.c)
 *     ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x180174390 (--0DragNDropProcessorLegacy@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ?Initialize@TouchProcessor@@IEAAJXZ @ 0x180199214 (-Initialize@TouchProcessor@@IEAAJXZ.c)
 *     ?ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z @ 0x18019ACCC (-ValidatePointerInput@InputInfoValidator@@AEAAJPEAUPointerInputInfo@@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KUPointerCache@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@1@@Z @ 0x1800F7C98 (--0-$_Hash@V-$_Umap_traits@KUPointerCache@ResizeProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,unsigned __int64>::unordered_map<unsigned long,unsigned __int64>(
        __int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>(
    a1,
    &v3);
  return a1;
}
