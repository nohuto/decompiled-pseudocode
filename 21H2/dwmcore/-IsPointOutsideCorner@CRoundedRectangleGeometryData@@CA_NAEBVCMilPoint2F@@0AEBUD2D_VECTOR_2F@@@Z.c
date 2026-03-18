/*
 * XREFs of ?IsPointOutsideCorner@CRoundedRectangleGeometryData@@CA_NAEBVCMilPoint2F@@0AEBUD2D_VECTOR_2F@@@Z @ 0x1800EF5E8
 * Callers:
 *     ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0 (--0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AAEA4 (-FillContainsRect@CRoundedRectangleGeometryData@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180191350 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleGeometryData::IsPointOutsideCorner(
        const struct CMilPoint2F *a1,
        const struct CMilPoint2F *a2,
        const struct D2D_VECTOR_2F *a3)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  bool result; // al

  v3 = (float)(*(float *)a1 - *(float *)a2) / a3->x;
  result = 0;
  if ( v3 > 0.0 )
  {
    v4 = (float)(*((float *)a1 + 1) - *((float *)a2 + 1)) / a3->y;
    if ( v4 > 0.0 && (float)((float)(v4 * v4) + (float)(v3 * v3)) > 1.0 )
      return 1;
  }
  return result;
}
