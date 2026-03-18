/*
 * XREFs of ??0CBlurRenderingGraph@@AEAA@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800317BC
 * Callers:
 *     ?Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@PEAPEAV1@@Z @ 0x18003183C (-Create@CBlurRenderingGraph@@SAJW4D3D_FEATURE_LEVEL@@AEBUD2D_VECTOR_2F@@W4D2D1_GAUSSIANBLUR_OPTI.c)
 * Callees:
 *     ??0CBrushRenderingGraph@@IEAA@XZ @ 0x180035A04 (--0CBrushRenderingGraph@@IEAA@XZ.c)
 */

CBlurRenderingGraph *__fastcall CBlurRenderingGraph::CBlurRenderingGraph(
        CBlurRenderingGraph *this,
        const struct D2D_VECTOR_2F *a2,
        enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3)
{
  __int64 *v3; // r9
  __int64 v4; // xmm0_8
  __int64 v5; // rcx
  CBlurRenderingGraph *result; // rax
  int v7; // r8d

  CBrushRenderingGraph::CBrushRenderingGraph(this);
  v4 = *v3;
  *(_QWORD *)(v5 + 216) = v5 + 240;
  *(_QWORD *)(v5 + 224) = v5 + 240;
  *(_QWORD *)(v5 + 232) = v5 + 512;
  *(_QWORD *)(v5 + 512) = v5 + 536;
  *(_QWORD *)(v5 + 520) = v5 + 536;
  *(_QWORD *)(v5 + 528) = v5 + 1560;
  *(_QWORD *)v5 = &CBlurRenderingGraph::`vftable';
  result = (CBlurRenderingGraph *)v5;
  *(_QWORD *)(v5 + 1560) = v4;
  *(_DWORD *)(v5 + 1568) = v7;
  return result;
}
