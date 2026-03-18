/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180261134
 * Callers:
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801FA40C (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180200188 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18020E868 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x18025AAF4 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint4F *a2, struct MilPoint4F *a3, int a4)
{
  float *v4; // rdi
  float *v5; // rsi
  __int64 v8; // rbp
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm5_4

  v4 = (float *)((char *)a3 + 12);
  v5 = (float *)((char *)a2 + 8);
  v8 = a3 - a2;
  do
  {
    v9 = *(v5 - 2);
    v10 = *(v5 - 1);
    v11 = *v5;
    v12 = v5[1];
    v13 = *v5;
    *(float *)((char *)v5 + v8 - 8) = (float)((float)((float)(v10 * *((float *)this + 4)) + (float)(v9 * *(float *)this))
                                            + (float)(*v5 * *((float *)this + 8)))
                                    + (float)(v12 * *((float *)this + 12));
    *(v4 - 2) = (float)((float)((float)(v10 * *((float *)this + 5)) + (float)(v9 * *((float *)this + 1)))
                      + (float)(v13 * *((float *)this + 9)))
              + (float)(v12 * *((float *)this + 13));
    *(v4 - 1) = (float)((float)((float)(v10 * *((float *)this + 6)) + (float)(v9 * *((float *)this + 2)))
                      + (float)(v11 * *((float *)this + 10)))
              + (float)(v12 * *((float *)this + 14));
    if ( CMILMatrix::IsAffine<1>((__int64)this, 0) )
      v15 = *(float *)&FLOAT_1_0;
    else
      v15 = (float)((float)((float)(v14 * *((float *)this + 7)) + (float)(v9 * *((float *)this + 3)))
                  + (float)(v11 * *((float *)this + 11)))
          + (float)(v12 * *((float *)this + 15));
    *v4 = v15;
    v5 += 4;
    v4 += 4;
    --a4;
  }
  while ( a4 );
}
