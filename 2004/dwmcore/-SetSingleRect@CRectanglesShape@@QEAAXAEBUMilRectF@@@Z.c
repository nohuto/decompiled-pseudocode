/*
 * XREFs of ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180014A44
 * Callers:
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x18003F944 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x1800419F4 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800505C0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F4E14 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D9E0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18009F934 (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

void __fastcall CRectanglesShape::SetSingleRect(CRectanglesShape *this, const struct MilRectF *a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  CRectanglesShape::Reset(this);
  v4 = *(_OWORD *)a2;
  DynArray<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
    (char *)this + 16,
    &v4,
    1LL);
}
