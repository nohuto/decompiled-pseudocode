/*
 * XREFs of ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180010C70
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18001067C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x1800116B8 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011AC8 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001625C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041AC8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x180081420 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectedShadowCaster::CalculateCasterBounds(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // rax
  float v5; // xmm6_4
  float v6; // xmm9_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  char v13; // si
  float v14; // xmm7_4
  CVisual *v15; // rbx
  float v16; // xmm8_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  char v22; // [rsp+40h] [rbp-C0h]
  _OWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+90h] [rbp-70h]
  _BYTE v25[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+E0h] [rbp-20h]
  float v27; // [rsp+F0h] [rbp-10h]
  float v28; // [rsp+F4h] [rbp-Ch]
  float v29; // [rsp+F8h] [rbp-8h]
  float v30; // [rsp+FCh] [rbp-4h]
  __int128 v31; // [rsp+100h] [rbp+0h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v24 = 0;
  v5 = 0.0;
  v6 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v9 = *(float *)(v4 + 132);
  v10 = *(float *)(v4 + 136) + 0.0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  LOWORD(v24) = 32085;
  v13 = 0;
  *(float *)(a2 + 12) = v10;
  *(float *)(a2 + 8) = v9 + 0.0;
  v14 = *(float *)(v4 + 132) + 0.0;
  v15 = *(CVisual **)(a1 + 56);
  v16 = *(float *)(v4 + 136) + 0.0;
  v23[0] = _xmm;
  v23[1] = _xmm;
  v29 = v14;
  v30 = v16;
  v23[2] = _xmm;
  v23[3] = _xmm;
  while ( v15 )
  {
    v17 = *((_QWORD *)v15 + 30);
    if ( v17 )
    {
      v31 = 0LL;
      if ( (unsigned __int8)CGeometry::TryGetAxisAlignedRectangle(v17, (char *)v15 + 132, &v31) )
      {
        if ( *(float *)&v31 > v5 )
        {
          v27 = *(float *)&v31;
          v5 = *(float *)&v31;
        }
        v18 = v6;
        if ( *((float *)&v31 + 1) > v6 )
        {
          v28 = *((float *)&v31 + 1);
          v6 = *((float *)&v31 + 1);
          v18 = *((float *)&v31 + 1);
        }
        v19 = v14;
        if ( v14 > *((float *)&v31 + 2) )
        {
          v29 = *((float *)&v31 + 2);
          v14 = *((float *)&v31 + 2);
          v19 = *((float *)&v31 + 2);
        }
        v20 = v16;
        if ( v16 > *((float *)&v31 + 3) )
        {
          v30 = *((float *)&v31 + 3);
          v16 = *((float *)&v31 + 3);
          v20 = *((float *)&v31 + 3);
        }
        if ( v19 <= v5 || v20 <= v18 )
        {
          v14 = 0.0;
          v30 = 0.0;
          v5 = 0.0;
          v29 = 0.0;
          v27 = 0.0;
          v16 = 0.0;
          v28 = 0.0;
          v6 = 0.0;
        }
        v13 = 1;
      }
    }
    if ( !*(_QWORD *)(a1 + 64) || CVisual::GetTransformParentNoRef(v15) )
      break;
    v26 = 0;
    CVisual::CalcCpuClippingTransform(v15, 5LL, a3);
    if ( v22 )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v25) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v25);
      CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v25);
      v16 = v30;
      v14 = v29;
      v6 = v28;
      v5 = v27;
    }
    v15 = (CVisual *)*((_QWORD *)v15 + 10);
  }
  if ( CMILMatrix::Invert((CMILMatrix *)v23) )
  {
    *a4 = v13;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v23);
  }
  return a2;
}
