/*
 * XREFs of ??0SharedData@CRoundedRectangleShape@@IEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800862A0
 * Callers:
 *     ??0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800866CC (--0FlattenedShapeSharedData@CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800A6180 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD920 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DEE54 (--0CRoundedRectangleShape@@QEAA@AEBUCRoundedRectangleGeometryData@@@Z.c)
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x18006C09C (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800864D4 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?IsPointOutsideCorner@CRoundedRectangleGeometryData@@CA_NAEBVCMilPoint2F@@0AEBUD2D_VECTOR_2F@@@Z @ 0x1800EF5E8 (-IsPointOutsideCorner@CRoundedRectangleGeometryData@@CA_NAEBVCMilPoint2F@@0AEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CRoundedRectangleShape::SharedData::SharedData(
        CRoundedRectangleShape::SharedData *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned int v4; // r11d
  float v5; // xmm5_4
  float v6; // xmm4_4
  unsigned int v7; // ebx
  __int64 v8; // rax
  const struct D2D_VECTOR_2F *v9; // r8
  float v10; // xmm1_4
  unsigned __int64 *v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int64 *v14; // rax
  __int64 result; // rax
  float y; // xmm0_4
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-18h] BYREF
  float v20; // [rsp+30h] [rbp-10h]
  float v21; // [rsp+34h] [rbp-Ch]

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &CRoundedRectangleShape::SharedData::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  CRoundedRectangleGeometryData::GetBaseRect(a2, &v19);
  if ( (float)(v20 - 0.0000011920929) > *(float *)&v19 && (float)(v21 - 0.0000011920929) > *((float *)&v19 + 1) )
  {
    v4 = 0;
    v5 = v20 - *(float *)&v19;
    v6 = v21 - *((float *)&v19 + 1);
    v7 = *(_BYTE *)(v3 + 52) != 0 ? 1 : 4;
    while ( 1 )
    {
      v8 = *(_BYTE *)(v3 + 52) ? 16LL : 8LL * v4 + 16;
      v9 = (const struct D2D_VECTOR_2F *)(v3 + v8);
      v10 = *(float *)(v3 + v8);
      if ( v10 > v5 )
      {
        y = v9->y;
        if ( y > v6 )
        {
          v18 = 0LL;
          *(float *)&v19 = v10 - v5;
          *((float *)&v19 + 1) = y - v6;
          if ( CRoundedRectangleGeometryData::IsPointOutsideCorner(
                 (const struct CMilPoint2F *)&v19,
                 (const struct CMilPoint2F *)&v18,
                 v9) )
          {
            break;
          }
        }
      }
      if ( ++v4 >= v7 )
      {
        *(_BYTE *)(v2 + 69) = *(_BYTE *)(v3 + 53);
        if ( *(_BYTE *)(v3 + 52) )
        {
          *(_BYTE *)(v2 + 68) = 1;
          *(_QWORD *)(v2 + 16) = *(_QWORD *)v3;
          *(_QWORD *)(v2 + 24) = *(_QWORD *)(v3 + 8);
          if ( CRoundedRectangleGeometryData::IsRoundedCorner(v3, 0) )
            v17 = *(_QWORD *)(v3 + 16);
          else
            v17 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          v19 = v17;
          *(_QWORD *)(v2 + 32) = v17;
        }
        else
        {
          *(_BYTE *)(v2 + 68) = 0;
          v11 = (unsigned __int64 *)(v2 + 32);
          *(_DWORD *)(v2 + 16) = *(_DWORD *)v3;
          v12 = 0;
          *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 4);
          *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 8);
          *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 12);
          do
          {
            if ( *(_BYTE *)(v3 + 52) )
              v13 = 16LL;
            else
              v13 = 8LL * v12 + 16;
            if ( *(float *)(v3 + v13) <= 0.0 || *(float *)(v3 + v13 + 4) <= 0.0 )
            {
              v14 = &v18;
              v18 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            }
            else
            {
              v14 = &v19;
              v19 = *(unsigned __int64 *)((char *)v11 + v3 - v2 - 16);
            }
            ++v12;
            *v11++ = *v14;
          }
          while ( v12 < 4 );
        }
        goto LABEL_16;
      }
    }
  }
  *(_WORD *)(v2 + 68) = 1;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_DWORD *)(v2 + 64) = 0;
LABEL_16:
  result = v2;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(v3 + 48);
  return result;
}
