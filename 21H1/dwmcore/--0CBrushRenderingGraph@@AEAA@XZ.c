/*
 * XREFs of ??0CBrushRenderingGraph@@AEAA@XZ @ 0x18009CA98
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001EF08 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 *     ?Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z @ 0x18009C9F8 (-Build@CBrushRenderingGraphBuilder@@SAJPEAVCBrush@@PEAPEAVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     <none>
 */

CBrushRenderingGraph *__fastcall CBrushRenderingGraph::CBrushRenderingGraph(CBrushRenderingGraph *this)
{
  CBrushRenderingGraph *result; // rax

  *(_QWORD *)this = &CBrushRenderingGraph::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = (char *)this + 48;
  *((_QWORD *)this + 3) = (char *)this + 48;
  *((_DWORD *)this + 8) = 4;
  *(_QWORD *)((char *)this + 36) = 4LL;
  *((_QWORD *)this + 18) = (char *)this + 176;
  *((_QWORD *)this + 19) = (char *)this + 176;
  *((_DWORD *)this + 40) = 1;
  *(_QWORD *)((char *)this + 164) = 1LL;
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  return result;
}
