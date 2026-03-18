/*
 * XREFs of ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8EF0
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?IsRectangular@CProjectedShadowCaster@@QEBA_NXZ @ 0x180201984 (-IsRectangular@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800633B4 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18006367C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

bool __fastcall CGeometry::TryGetAxisAlignedRectangle(CGeometry *a1, const struct D2D_SIZE_F *a2, _QWORD *a3)
{
  bool v3; // bl
  CShape *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v3 = 0;
  a3[1] = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (int)CGeometry::GetShapeData(a1, a2, (struct CShapePtr *)&v5) >= 0 && CShapePtr::IsAxisAlignedRectangle(&v5) )
    v3 = (int)CShapePtr::GetTightBounds((__int64 *)&v5) >= 0;
  CShapePtr::Release((CShapePtr *)&v5);
  return v3;
}
