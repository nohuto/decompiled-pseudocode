/*
 * XREFs of ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000C330
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x18000C308 (-GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000E454 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000C3A0 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 */

__int64 __fastcall std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // r9

  v2 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         a1,
         a2);
  if ( v2 == *v4 || *v3 < *(_QWORD *)(v2 + 32) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x1800F97ECLL);
  }
  return v2 + 40;
}
