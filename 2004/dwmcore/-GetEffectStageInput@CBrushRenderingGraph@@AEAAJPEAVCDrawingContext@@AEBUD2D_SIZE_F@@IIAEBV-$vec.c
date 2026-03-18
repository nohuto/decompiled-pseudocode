/*
 * XREFs of ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x180049034
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180049A88 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::GetEffectStageInput(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6,
        _QWORD *a7,
        struct EffectInput *a8)
{
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v15; // r10
  int InputBrushParameters; // eax
  __int64 v18; // rcx

  v11 = 0;
  v12 = 44LL * a5;
  v15 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a4);
  if ( !*(_BYTE *)(v15 + v12 + 72) )
    a7 = a6;
  EffectInput::operator=(a8, *a7 + ((unsigned __int64)*(unsigned int *)(v15 + v12 + 68) << 7));
  if ( !*((_BYTE *)a8 + 68) )
  {
    InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters((CDrawListBrush **)this, a2, a3, a4, a5, a8);
    v11 = InputBrushParameters;
    if ( InputBrushParameters < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, InputBrushParameters, 0x535u, 0LL);
  }
  return v11;
}
