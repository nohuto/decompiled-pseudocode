/*
 * XREFs of ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x1800B94D4
 * Callers:
 *     ??$find_index@$$CBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@USurfaceDescription@CRenderingTechniqueFragment@@@ranges@@YA_JAEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800B8050 (--$find_index@$$CBV-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_im.c)
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x1800B8CB0 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B92B0 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRenderingTechniqueFragment::SurfaceDescription::operator==(__int64 a1, __int64 a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *(_BYTE *)(a1 + 4) == *(_BYTE *)(a2 + 4)
      && *(_BYTE *)(a1 + 8) == *(_BYTE *)(a2 + 8)
      && *(_BYTE *)(a1 + 9) == *(_BYTE *)(a2 + 9);
}
