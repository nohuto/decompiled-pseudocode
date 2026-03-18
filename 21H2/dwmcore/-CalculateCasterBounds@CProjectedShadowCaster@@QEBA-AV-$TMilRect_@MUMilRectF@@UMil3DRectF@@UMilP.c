/*
 * XREFs of ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z @ 0x1802020F4 (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180089BBC (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800AD824 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F8EF0 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 */

__int64 __fastcall CProjectedShadowCaster::CalculateCasterBounds(
        __int64 a1,
        __int64 a2,
        const struct CVisualTree *a3,
        char *a4)
{
  __int64 v4; // rax
  float v5; // xmm6_4
  float v6; // xmm7_4
  int v10; // xmm1_4
  int v12; // xmm0_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  __int64 v15; // rbx
  char v16; // si
  CGeometry *v17; // rcx
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm0_4
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  bool v26; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v27[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+80h] [rbp-80h]
  _BYTE v29[64]; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+D0h] [rbp-30h]
  float v31; // [rsp+E0h] [rbp-20h] BYREF
  float v32; // [rsp+E4h] [rbp-1Ch]
  float v33; // [rsp+E8h] [rbp-18h]
  float v34; // [rsp+ECh] [rbp-14h]
  __int128 v35; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0.0;
  v6 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v10 = *(_DWORD *)(v4 + 144);
  v12 = *(_DWORD *)(v4 + 140);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = v12;
  *(_DWORD *)(a2 + 12) = v10;
  v13 = *(float *)(v4 + 140);
  v14 = *(float *)(v4 + 144);
  v28 = 0;
  v15 = *(_QWORD *)(a1 + 64);
  v27[0] = _xmm;
  v16 = 0;
  v27[1] = _xmm;
  v33 = v13;
  v34 = v14;
  v27[2] = _xmm;
  v27[3] = _xmm;
  LOWORD(v28) = 5973;
  while ( v15 )
  {
    v17 = *(CGeometry **)(v15 + 248);
    if ( v17 )
    {
      v35 = 0LL;
      if ( CGeometry::TryGetAxisAlignedRectangle(v17, (const struct D2D_SIZE_F *)(v15 + 140), &v35) )
      {
        if ( *(float *)&v35 > v5 )
        {
          v31 = *(float *)&v35;
          v5 = *(float *)&v35;
        }
        v18 = v6;
        if ( *((float *)&v35 + 1) > v6 )
        {
          v32 = *((float *)&v35 + 1);
          v6 = *((float *)&v35 + 1);
          v18 = *((float *)&v35 + 1);
        }
        v19 = v13;
        if ( v13 > *((float *)&v35 + 2) )
        {
          v33 = *((float *)&v35 + 2);
          v13 = *((float *)&v35 + 2);
          v19 = *((float *)&v35 + 2);
        }
        v20 = v14;
        if ( v14 > *((float *)&v35 + 3) )
        {
          v34 = *((float *)&v35 + 3);
          v14 = *((float *)&v35 + 3);
          v20 = *((float *)&v35 + 3);
        }
        if ( v19 <= v5 || v20 <= v18 )
        {
          v14 = 0.0;
          v13 = 0.0;
          v6 = 0.0;
          v34 = 0.0;
          v5 = 0.0;
          v33 = 0.0;
          v32 = 0.0;
          v31 = 0.0;
        }
        v16 = 1;
      }
    }
    if ( !*(_QWORD *)(a1 + 72) || CVisual::GetTransformParent((CVisual *)v15, a3, 0LL) )
      break;
    v30 = 0;
    CVisual::CalcTransform((CVisual *)v15, (CVisual **)a3, 0LL, &v26, (struct CMILMatrix *)v29, 0LL);
    if ( v26 )
    {
      if ( !CMILMatrix::IsTranslateAndScale<1>((__int64)v29) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v29, (__int64)&v31, &v31, v21);
      CMILMatrix::Multiply((CMILMatrix *)v27, (const struct CMILMatrix *)v29, v22, v23);
      v14 = v34;
      v13 = v33;
      v6 = v32;
      v5 = v31;
    }
    v15 = *(_QWORD *)(v15 + 88);
  }
  if ( CMILMatrix::Invert((CMILMatrix *)v27, a2, a3) )
  {
    *a4 = v16;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v27, (__int64)&v31, (float *)a2, v24);
  }
  return a2;
}
