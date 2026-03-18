/*
 * XREFs of ??0NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180174214
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180177848 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z @ 0x1801779D8 (-PushClipShape@CDrawingContext@@QEAAJ$$QEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x18020EF44 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 */

CDrawingContext::NodeEffects *__fastcall CDrawingContext::NodeEffects::NodeEffects(CDrawingContext::NodeEffects *this)
{
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 22) = 0;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_DWORD *)this + 41) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_QWORD *)this + 1) = 1065353216LL;
  *((_DWORD *)this + 5) = 1065353216;
  CMILMatrix::SetToZeroMatrix((CDrawingContext::NodeEffects *)((char *)this + 92));
  return this;
}
