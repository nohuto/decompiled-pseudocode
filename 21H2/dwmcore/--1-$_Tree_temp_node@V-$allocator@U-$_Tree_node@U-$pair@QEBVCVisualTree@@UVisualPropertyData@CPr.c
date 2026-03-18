/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802012AC
 * Callers:
 *     ??$_Try_emplace@AEBQEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@AEBQEBVCVisualTree@@@Z @ 0x180201090 (--$_Try_emplace@AEBQEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedSha.c)
 *     ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x18020114C (--$_Try_emplace@PEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadow.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)(v2 + 80));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x58uLL);
  }
}
