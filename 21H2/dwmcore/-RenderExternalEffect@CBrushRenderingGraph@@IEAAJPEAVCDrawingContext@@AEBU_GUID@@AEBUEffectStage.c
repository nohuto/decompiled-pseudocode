/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180053510
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800557F8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@KAXAEBUIntermediateConfigurationIn.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180252278 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@IEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a5,
        struct EffectInput *a6)
{
  const struct EffectInput *v6; // rdi
  __int128 v10; // xmm0
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF
  char *v17; // [rsp+40h] [rbp-38h]
  _QWORD v18[2]; // [rsp+48h] [rbp-30h] BYREF
  int v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  struct D2D_VECTOR_2F v21; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6 = (const struct EffectStage *)((char *)a4 + 8);
  v18[0] = a6;
  v19 = 0;
  v10 = *(_OWORD *)a5;
  v20 = 0;
  v11 = *((_BYTE *)a4 + 52) == 0;
  v16 = v10;
  v17 = (char *)a4 + 8;
  if ( v11 || !*((_BYTE *)a4 + 109) )
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      this,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v16,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v18);
  else
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v16,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v18);
  v12 = CRenderingTechnique::ExecuteBlur(
          *(CRenderingTechnique **)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4),
          a2,
          v6,
          &v21,
          a6);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\brushrenderinggraph.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  else
  {
    v14 = *((_DWORD *)v6 + 10);
    if ( (v14 & 2) != 0 )
    {
      *((_DWORD *)a6 + 10) |= 2u;
      v14 = *((_DWORD *)v6 + 10);
    }
    if ( (v14 & 4) != 0 )
    {
      *((_DWORD *)a6 + 10) |= 4u;
      v14 = *((_DWORD *)v6 + 10);
    }
    if ( (v14 & 0x100) != 0 )
      *((_DWORD *)a6 + 10) |= 0x100u;
    return 0LL;
  }
}
