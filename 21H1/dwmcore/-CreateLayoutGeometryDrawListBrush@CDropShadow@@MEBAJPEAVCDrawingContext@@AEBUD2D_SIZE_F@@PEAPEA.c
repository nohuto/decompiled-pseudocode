/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CDropShadow@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18001C9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180010428 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??_GCNineGridDrawListBrush@@UEAAPEAXI@Z @ 0x1800104E0 (--_GCNineGridDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18003666C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800BCD60 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CDropShadow::CreateLayoutGeometryDrawListBrush(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  FLOAT width; // xmm1_4
  FLOAT height; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm8_4
  float v15; // xmm6_4
  float v16; // xmm7_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  int v19; // ebx
  CGeometryOnlyDrawListBrush *v21; // rcx
  CGeometryOnlyDrawListBrush *v22; // rax
  __int128 v23; // xmm0
  CGeometryOnlyDrawListBrush *v24; // rax
  CNineGridDrawListBrush *v25; // rcx
  struct CDrawListBrush *v26; // rax
  CGeometryOnlyDrawListBrush *v27; // rcx
  CGeometryOnlyDrawListBrush **v28; // [rsp+38h] [rbp-29h] BYREF
  struct CGeometryOnlyDrawListBrush *v29; // [rsp+40h] [rbp-21h] BYREF
  char v30; // [rsp+48h] [rbp-19h]
  __m128 v31; // [rsp+50h] [rbp-11h] BYREF
  __int128 v32; // [rsp+60h] [rbp-1h] BYREF
  char v33; // [rsp+70h] [rbp+Fh]
  CGeometryOnlyDrawListBrush *v34; // [rsp+C8h] [rbp+67h] BYREF
  CNineGridDrawListBrush *v35; // [rsp+E0h] [rbp+7Fh] BYREF

  *a4 = 0LL;
  if ( COERCE_FLOAT(*((_DWORD *)this + 28) & _xmm) >= 0.0000011920929 )
    return 0;
  width = a3->width;
  height = a3->height;
  v31.m128_u64[0] = 0LL;
  LODWORD(v7) = *((_DWORD *)this + 26) ^ _xmm;
  LODWORD(v8) = *((_DWORD *)this + 27) ^ _xmm;
  v9 = v7 + *((float *)this + 29);
  v10 = v7 + *((float *)this + 31);
  v31.m128_u64[1] = __PAIR64__(LODWORD(height), LODWORD(width));
  v11 = v8 + *((float *)this + 30);
  v12 = v8 + *((float *)this + 32);
  v13 = *((float *)this + 24);
  v28 = (CGeometryOnlyDrawListBrush **)__PAIR64__(LODWORD(v11), LODWORD(v9));
  v14 = _mm_shuffle_ps(v31, v31, 85).m128_f32[0] - v13;
  v15 = _mm_shuffle_ps(v31, v31, 255).m128_f32[0] + v13;
  v29 = (struct CGeometryOnlyDrawListBrush *)__PAIR64__(LODWORD(v12), LODWORD(v10));
  v16 = _mm_shuffle_ps(v31, v31, 170).m128_f32[0] + v13;
  *((float *)&v32 + 1) = v14;
  *(float *)&v32 = 0.0 - v13;
  *((_QWORD *)&v32 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v16));
  if ( v9 < (float)(0.0 - v13) )
  {
    *(float *)&v28 = 0.0 - v13;
    v9 = 0.0 - v13;
  }
  if ( v11 < v14 )
  {
    v11 = v14;
    *((float *)&v28 + 1) = v14;
  }
  if ( v16 < v10 )
    *(float *)&v29 = v16;
  if ( v15 < v12 )
  {
    *((float *)&v29 + 1) = v15;
    v12 = v15;
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v28) )
    return 0;
  v34 = 0LL;
  v29 = 0LL;
  v30 = 1;
  v31.m128_f32[0] = v9 - v18;
  v31.m128_f32[1] = v11 - v14;
  v31.m128_f32[2] = v16 - v17;
  v31.m128_f32[3] = v15 - v12;
  v28 = &v34;
  v19 = CGeometryOnlyDrawListBrush::Create(&v29);
  if ( v30 )
  {
    v21 = *v28;
    *v28 = v29;
    if ( v21 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v21, 1u);
  }
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v21, 0LL, 0, v19, 0x22Au, 0LL);
  }
  else
  {
    v22 = v34;
    v23 = v32;
    *((_QWORD *)&v32 + 1) = 0LL;
    v33 = 1;
    *((_BYTE *)v34 + 52) = 1;
    *((_OWORD *)v22 + 2) = v23;
    *((_DWORD *)v22 + 12) = 50529027;
    v35 = 0LL;
    *(_QWORD *)&v32 = &v35;
    v24 = v34;
    v34 = 0LL;
    v28 = (CGeometryOnlyDrawListBrush **)v24;
    v19 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v28,
            (int)&v31,
            (int)&v31,
            1,
            (CNineGridDrawListBrush **)&v32 + 1);
    if ( v28 )
      std::default_delete<CShape>::operator()((__int64)v25, (__int64 (__fastcall ***)(_QWORD, __int64))v28);
    if ( v33 )
    {
      v25 = *(CNineGridDrawListBrush **)v32;
      *(_QWORD *)v32 = *((_QWORD *)&v32 + 1);
      if ( v25 )
        CNineGridDrawListBrush::`scalar deleting destructor'(v25, 1);
    }
    if ( v19 >= 0 )
    {
      v26 = v35;
      v35 = 0LL;
      v27 = v34;
      *a4 = v26;
      if ( v27 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v27, 1u);
      return 0;
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v25, 0LL, 0, v19, 0x233u, 0LL);
    if ( v35 )
      CNineGridDrawListBrush::`scalar deleting destructor'(v35, 1);
  }
  if ( v34 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v34, 1u);
  return (unsigned int)v19;
}
