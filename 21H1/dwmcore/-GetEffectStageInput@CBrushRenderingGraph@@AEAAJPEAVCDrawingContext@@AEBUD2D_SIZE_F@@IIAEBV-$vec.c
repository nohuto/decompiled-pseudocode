/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18006E808
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18006DE6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18006E8D0 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18006F82C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *a1,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        struct EffectInput *a8)
{
  unsigned int v10; // edi
  int InputBrushParameters; // eax
  __int64 v15; // rcx

  v10 = 0;
  EffectInput::operator=(a8);
  if ( !*((_BYTE *)a8 + 68) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(a1, a2, a3, a4, a5, a8);
    v10 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, InputBrushParameters, 0x535u, 0LL);
  }
  return v10;
}
