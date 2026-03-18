/*
 * XREFs of ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x1800B8E94
 * Callers:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800B7928 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800B8544 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 * Callees:
 *     ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800B8050 (--$find_index@$$CBV-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_im.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x1800B93A8 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        _QWORD **a4,
        _QWORD *a5)
{
  __int16 v5; // bx
  __int64 v6; // r11
  _QWORD *i; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (__int16)a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * a3 + 8);
  if ( v6 )
  {
    for ( i = *a4; i != a4[1] && *i != v6; ++i )
      ;
    return (unsigned __int16)((i - *a4) | 0x500);
  }
  else
  {
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      a3,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)v10);
    return (unsigned __int16)(v5 | ranges::find_index<detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>> const,CRenderingTechniqueFragment::SurfaceDescription>(a5));
  }
}
