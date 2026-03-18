/*
 * XREFs of ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x180086108
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005739C (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@@Z @ 0x180057488 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEBUVertexAAOffsetDesc@Mesh@@AEBU.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800D1D9C (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
        const struct CRoundedRectangleGeometryData *a1,
        const struct CMILMatrix *a2,
        struct CRoundedRectangleGeometryData *a3)
{
  __int64 BaseRect; // rax
  char v7; // al
  const struct CMILMatrix *v8; // rcx
  char v9; // r11
  __m128 v10; // xmm3
  __m128 v11; // xmm6
  __m128 v12; // xmm6
  __m128i v13; // xmm0
  char v14; // cl
  char v15; // al
  int v16; // eax
  __m128i *p_si128; // rcx
  __int64 v18; // r8
  unsigned __int64 *v19; // rdx
  const struct CRoundedRectangleGeometryData *v20; // rax
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  unsigned __int64 *v23; // rax
  float v24; // xmm0_4
  __m128 v25; // xmm5
  __m128 v26; // xmm4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  unsigned __int64 v31; // xmm0_8
  __int64 v32; // [rsp+20h] [rbp-50h]
  unsigned __int64 v33; // [rsp+28h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-30h] BYREF

  si128 = 0LL;
  BaseRect = CRoundedRectangleGeometryData::GetBaseRect(a1, v35);
  CMILMatrix::Transform2DBoundsHelper<0>(a2, BaseRect, &si128);
  v7 = CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(a2);
  v8 = (const struct CMILMatrix *)((char *)a2 + 4);
  v9 = v7;
  if ( !v7 )
    v8 = a2;
  v10 = _mm_and_ps((__m128)*(unsigned int *)v8, (__m128)(unsigned int)_xmm);
  if ( v7 )
    v11 = (__m128)*((unsigned int *)a2 + 4);
  else
    v11 = (__m128)*((unsigned int *)a2 + 5);
  v12 = _mm_and_ps(v11, (__m128)(unsigned int)_xmm);
  *((_BYTE *)a3 + 53) = *((_BYTE *)a1 + 53);
  if ( *((_BYTE *)a1 + 52) )
  {
    v24 = *(float *)si128.m128i_i32;
    v25 = v10;
    v25.m128_f32[0] = v10.m128_f32[0] * *((float *)a1 + 4);
    v26 = v12;
    v26.m128_f32[0] = v12.m128_f32[0] * *((float *)a1 + 5);
    *((_BYTE *)a3 + 52) = 1;
    v27 = *(float *)&si128.m128i_i32[1];
    v28 = *(float *)&si128.m128i_i32[2];
    *(float *)a3 = v24;
    v29 = v28 - v24;
    v30 = *(float *)&si128.m128i_i32[3] - v27;
    *((float *)a3 + 1) = v27;
    *((float *)a3 + 2) = v29;
    *((float *)a3 + 3) = v30;
    if ( v7 )
      v31 = _mm_unpacklo_ps(v26, v25).m128_u64[0];
    else
      v31 = __PAIR64__(v26.m128_u32[0], v25.m128_u32[0]);
    *((_QWORD *)a3 + 2) = v31;
  }
  else
  {
    v13 = si128;
    *((_BYTE *)a3 + 52) = 0;
    *(__m128i *)a3 = v13;
    if ( *(float *)a2 < 0.0 || (v14 = 0, *((float *)a2 + 1) < 0.0) )
      v14 = 1;
    if ( *((float *)a2 + 4) < 0.0 || (v15 = 0, *((float *)a2 + 5) < 0.0) )
      v15 = 1;
    if ( v14 )
    {
      if ( v15 )
      {
        v16 = 3;
        si128.m128i_i32[0] = 2;
        *(__int64 *)((char *)si128.m128i_i64 + 4) = 3LL;
        si128.m128i_i32[3] = 1;
      }
      else
      {
        v16 = 0;
        si128.m128i_i64[0] = 1LL;
        si128.m128i_i64[1] = 0x200000003LL;
      }
    }
    else if ( v15 )
    {
      v16 = 2;
      si128.m128i_i64[0] = 0x200000003LL;
      si128.m128i_i64[1] = 1LL;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v16 = si128.m128i_i32[1];
    }
    if ( v9 )
    {
      si128.m128i_i32[1] = 3;
      si128.m128i_i32[3] = v16;
    }
    p_si128 = &si128;
    v18 = 4LL;
    v19 = (unsigned __int64 *)((char *)a3 + 16);
    do
    {
      if ( *((_BYTE *)a1 + 52) )
        v20 = a1;
      else
        v20 = (const struct CRoundedRectangleGeometryData *)((char *)a1 + 8 * p_si128->m128i_u32[0]);
      v21 = v10;
      v22 = v12;
      v21.m128_f32[0] = v10.m128_f32[0] * *((float *)v20 + 4);
      v22.m128_f32[0] = v12.m128_f32[0] * *((float *)v20 + 5);
      *(float *)&v32 = v21.m128_f32[0];
      *((float *)&v32 + 1) = v22.m128_f32[0];
      if ( v9 )
      {
        v23 = &v33;
        v33 = _mm_unpacklo_ps(v22, v21).m128_u64[0];
      }
      else
      {
        v23 = v35;
        v35[0] = v32;
      }
      p_si128 = (__m128i *)((char *)p_si128 + 4);
      *v19++ = *v23;
      --v18;
    }
    while ( v18 );
  }
  *((float *)a3 + 12) = fminf(v10.m128_f32[0], v12.m128_f32[0]) * *((float *)a1 + 12);
}
