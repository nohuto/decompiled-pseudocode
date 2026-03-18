/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x180014524
 * Callers:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x1800144D4 (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUD2D_POINT_2F@@U2@@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D870 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 * Callees:
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x1800930C8 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18009F1C8 (-IsCloseRealZero@@YA_NMM@Z.c)
 */

float *__fastcall Matrix3x3::TransformHomogeneousPoint(float *a1, __int64 a2, __int64 a3)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float *v5; // rdx
  float v6; // xmm4_4
  float v7; // xmm4_4
  float *result; // rax

  v3 = (float)((float)(*((float *)&a3 + 1) * a1[3]) + (float)(*(float *)&a3 * *a1)) + a1[6];
  v4 = (float)((float)(*((float *)&a3 + 1) * a1[4]) + (float)(*(float *)&a3 * a1[1])) + a1[7];
  if ( !IsCloseRealZero(
          (float)((float)(*((float *)&a3 + 1) * a1[5]) + (float)(*(float *)&a3 * a1[2])) + a1[8],
          0.000081380211)
    && !IsCloseRealOne(v6, 0.000081380211) )
  {
    v3 = v3 / v7;
    v4 = v4 / v7;
  }
  *v5 = v3;
  result = v5;
  v5[1] = v4;
  return result;
}
