/*
 * XREFs of ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18009A590
 * Callers:
 *     <none>
 * Callees:
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18009BBA4 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 */

__int64 __fastcall CRegionShape::GetTightBounds(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  int *v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  float v9; // xmm1_4
  __int64 result; // rax
  char v11; // al
  float v12; // xmm4_4
  int v13; // xmm5_4
  int v14; // xmm0_4
  char v15; // al
  float v16; // xmm0_4
  char v17; // al
  float v18; // xmm0_4
  char v19; // al

  v3 = a2;
  v4 = a3;
  v5 = *(int **)(a1 + 16);
  v6 = *v5;
  if ( (_DWORD)v6 )
  {
    v7 = _mm_cvtsi32_si128(v5[2]);
    v8 = _mm_cvtsi32_si128(v5[2 * v6 + 1]);
    v9 = (float)v5[3];
    *(float *)v3 = (float)v5[1];
    *(float *)(v3 + 4) = v9;
    *(_DWORD *)(v3 + 8) = _mm_cvtepi32_ps(v7).m128_u32[0];
    *(_DWORD *)(v3 + 12) = _mm_cvtepi32_ps(v8).m128_u32[0];
    if ( a3 )
    {
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) * 61440.0)
                         + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 28) & _xmm) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(a3 + 60) & _xmm)) == 1.0 )
      {
        *(_BYTE *)(a3 + 65) &= ~0x20u;
        v11 = 1;
        *(_BYTE *)(a3 + 65) |= 0x10u;
      }
      else
      {
        v11 = 0;
      }
      if ( (((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 44) & _xmm) * 61440.0) == 0.0) & (unsigned __int8)v11) == 0 )
        goto LABEL_19;
      if ( *(float *)(a3 + 32) != 0.0 )
        goto LABEL_19;
      if ( *(float *)(a3 + 36) != 0.0 )
        goto LABEL_19;
      *(_BYTE *)(a3 + 65) &= ~8u;
      LOBYTE(v5) = 1;
      *(_BYTE *)(a3 + 65) |= 4u;
      if ( !(unsigned __int8)CMILMatrix::IsAffine<0>(a3, v5) )
        goto LABEL_19;
      if ( *(float *)(v4 + 8) != v12 )
        goto LABEL_19;
      if ( *(float *)(v4 + 24) != v12 )
        goto LABEL_19;
      *(_BYTE *)(v4 + 64) &= ~8u;
      v14 = *(_DWORD *)(v4 + 28);
      *(_BYTE *)(v4 + 64) |= 4u;
      v15 = *(_BYTE *)(v4 + 64);
      if ( (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(v4 + 12) & v13) * 61440.0)
                         + (float)(COERCE_FLOAT(v14 & v13) * 61440.0))
                 + COERCE_FLOAT(*(_DWORD *)(v4 + 60) & v13)) != 1.0 )
        goto LABEL_19;
      *(_BYTE *)(v4 + 65) &= ~0x20u;
      *(_BYTE *)(v4 + 65) |= 0x10u;
      if ( *(float *)(v4 + 4) != v12 )
        goto LABEL_19;
      if ( *(float *)(v4 + 16) == v12
        && (v16 = *(float *)v4, v17 = v15 & 0x3F | 0x40, *(_BYTE *)(v4 + 64) = v17, v16 == 1.0)
        && *(float *)(v4 + 20) == 1.0
        && (v18 = *(float *)(v4 + 40), v19 = v17 & 0xCF | 0x10, *(_BYTE *)(v4 + 64) = v19, v18 == 1.0)
        && *(float *)(v4 + 48) == v12
        && *(float *)(v4 + 52) == v12
        && *(float *)(v4 + 56) == v12 )
      {
        *(_BYTE *)(v4 + 64) = v19 & 0xFC | 1;
      }
      else
      {
LABEL_19:
        CMILMatrix::Transform2DBoundsHelper<0>(v4, v3, v3);
      }
    }
    return 0LL;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_QWORD *)v3 = 0LL;
  }
  return result;
}
