/*
 * XREFs of ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x18009AF94
 * Callers:
 *     ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18009BE44 (-MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA-AW4ShaderLinkingArgument@@W42@IAEBV.c)
 * Callees:
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18009C484 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int64 __fastcall ranges::find_index<detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>> const,CRenderingTechniqueFragment::SurfaceDescription>(
        _QWORD *a1)
{
  __int64 v1; // r10
  _QWORD *v2; // r8
  __int64 v3; // rcx
  __int64 i; // r9

  v1 = *a1;
  v2 = a1;
  v3 = v1;
  for ( i = v1; i != v2[1] && !(unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(v3); i += 12LL )
    v3 = i + 12;
  return (i - v1) / 12;
}
