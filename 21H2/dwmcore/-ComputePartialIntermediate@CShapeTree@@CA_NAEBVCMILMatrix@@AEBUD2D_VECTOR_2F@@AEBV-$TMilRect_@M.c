/*
 * XREFs of ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x18025BE78
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z @ 0x1800D6240 (-GetPointInLocalSpace@CHitTestContext@@SA_NAEBUD2D_POINT_2F@@AEBVCMILMatrix@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBVCMilPoint2F@@$0?0@gsl@@@Z @ 0x18025BCB0 (--$SetToBoundsOfUnorderedPointSet@VCMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@.c)
 */

char __fastcall CShapeTree::ComputePartialIntermediate(struct CMILMatrix *a1, float *a2, float *a3, int *a4, float *a5)
{
  int v6; // xmm2_4
  int v8; // xmm0_4
  const struct CMILMatrix *v9; // rdx
  int v10; // xmm1_4
  signed int v11; // r9d
  int v12; // r9d
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm8_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm3_4
  char result; // al
  unsigned __int64 v23[2]; // [rsp+28h] [rbp-51h] BYREF
  __int128 v24; // [rsp+38h] [rbp-41h] BYREF
  int v25; // [rsp+48h] [rbp-31h] BYREF
  int v26; // [rsp+4Ch] [rbp-2Dh]
  int v27; // [rsp+50h] [rbp-29h]
  int v28; // [rsp+54h] [rbp-25h]
  int v29; // [rsp+58h] [rbp-21h]
  int v30; // [rsp+5Ch] [rbp-1Dh]
  int v31; // [rsp+60h] [rbp-19h]
  int v32; // [rsp+64h] [rbp-15h]

  v6 = *a4;
  v8 = a4[2];
  v9 = a1;
  v26 = a4[1];
  v28 = v26;
  v10 = a4[3];
  v11 = 0;
  v30 = v10;
  v32 = v10;
  v25 = v6;
  v27 = v8;
  v29 = v8;
  v31 = v6;
  do
  {
    if ( !CHitTestContext::GetPointInLocalSpace(
            (const struct D2D_POINT_2F *)&v25 + v11,
            v9,
            (struct D2D_POINT_2F *)&v25 + v11) )
      return 0;
    v11 = v12 + 1;
  }
  while ( (unsigned int)v11 < 4 );
  v23[0] = 4LL;
  v23[1] = (unsigned __int64)&v25;
  v24 = 0LL;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<CMilPoint2F>(
    (float *)&v24,
    v23);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v24, 1.0, 1.0);
  v13 = *(float *)&v24;
  v14 = *a3;
  if ( *a3 > *(float *)&v24 )
    v13 = *a3;
  v15 = *((float *)&v24 + 1);
  v16 = a3[1];
  v17 = *((float *)&v24 + 1);
  if ( v16 > *((float *)&v24 + 1) )
  {
    v15 = a3[1];
    v17 = v15;
  }
  v18 = *((float *)&v24 + 2);
  v19 = *((float *)&v24 + 2);
  v20 = *((float *)&v24 + 2);
  if ( *((float *)&v24 + 2) > a3[2] )
  {
    v18 = a3[2];
    v19 = v18;
    v20 = v18;
  }
  v21 = *((float *)&v24 + 3);
  if ( *((float *)&v24 + 3) > a3[3] )
  {
    v21 = a3[3];
    v19 = v20;
  }
  if ( v18 <= v13 || v21 <= v17 )
  {
    v13 = 0.0;
    v15 = 0.0;
    v21 = 0.0;
    v19 = 0.0;
  }
  result = 1;
  *a5 = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v13) * *a2;
  a5[1] = (float)(COERCE_FLOAT(LODWORD(v16) ^ _xmm) + v15) * a2[1];
  a5[2] = (float)(COERCE_FLOAT(LODWORD(v14) ^ _xmm) + v19) * *a2;
  a5[3] = (float)(v21 + COERCE_FLOAT(LODWORD(v16) ^ _xmm)) * a2[1];
  return result;
}
