/*
 * XREFs of ?GetEffectiveAlpha@CProjectedShadowCaster@@QEBAMPEBVCVisualTree@@PEA_N@Z @ 0x1800087C8
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x180008224 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180008540 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 * Callees:
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x1800087F0 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 */

float __fastcall CProjectedShadowCaster::GetEffectiveAlpha(
        CProjectedShadowCaster *this,
        const struct CVisualTree *a2,
        bool *a3)
{
  const struct CVisualTree *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  return *(float *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at((char *)this + 72, &v4);
}
