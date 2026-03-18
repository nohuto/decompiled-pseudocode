/*
 * XREFs of ?Reset@CRectanglesShape@@IEAAXXZ @ 0x18009F934
 * Callers:
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x180014A44 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D998 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800E19B0 (--1CRectanglesShape@@UEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CRectanglesShape::Reset(CRectanglesShape *this)
{
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 16LL);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 8);
}
