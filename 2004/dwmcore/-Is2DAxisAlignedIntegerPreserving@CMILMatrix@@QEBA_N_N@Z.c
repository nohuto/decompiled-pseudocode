/*
 * XREFs of ?Is2DAxisAlignedIntegerPreserving@CMILMatrix@@QEBA_N_N@Z @ 0x18001CF94
 * Callers:
 *     CanCombineToRegion @ 0x180018AF8 (CanCombineToRegion.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BE1EC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::Is2DAxisAlignedIntegerPreserving(CMILMatrix *this)
{
  char v1; // al
  float *v2; // r11
  char v3; // cl
  float v4; // xmm3_4
  int v5; // eax
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm3_4
  int v11; // eax
  float v12; // xmm3_4
  int v13; // eax
  float v14; // xmm3_4
  int v15; // eax
  __m128 v17; // xmm2
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  __m128 v21; // xmm2
  __m128 v22; // xmm2
  float v23; // [rsp+58h] [rbp+10h]
  float v24; // [rsp+58h] [rbp+10h]
  float v25; // [rsp+58h] [rbp+10h]
  float v26; // [rsp+58h] [rbp+10h]
  float v27; // [rsp+58h] [rbp+10h]
  float v28; // [rsp+58h] [rbp+10h]

  v1 = CMILMatrix::Is2DAxisAlignedPreserving<1>(this);
  v3 = 0;
  if ( v1 )
  {
    v4 = *v2;
    if ( (*(_DWORD *)v2 & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v17 = 0LL;
      v17.m128_f32[0] = (float)(int)v4 - v4;
      v5 = (int)v4 - _mm_cmple_ss(v17, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v23 = v4 + 6291456.25;
      v5 = (int)(LODWORD(v23) << 10) >> 11;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - (float)v5) & _xmm) <= 0.000081380211 )
    {
      v6 = v2[1];
      if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v18 = 0LL;
        v18.m128_f32[0] = (float)(int)v6 - v6;
        v7 = (int)v6 - _mm_cmple_ss(v18, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      }
      else
      {
        v24 = v6 + 6291456.25;
        v7 = (int)(LODWORD(v24) << 10) >> 11;
      }
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v6 - (float)v7) & _xmm) <= 0.000081380211 )
      {
        v8 = v2[4];
        if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          v19 = 0LL;
          v19.m128_f32[0] = (float)(int)v8 - v8;
          v9 = (int)v8 - _mm_cmple_ss(v19, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
        }
        else
        {
          v25 = v8 + 6291456.25;
          v9 = (int)(LODWORD(v25) << 10) >> 11;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - (float)v9) & _xmm) <= 0.000081380211 )
        {
          v10 = v2[5];
          if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v20 = 0LL;
            v20.m128_f32[0] = (float)(int)v10 - v10;
            v11 = (int)v10 - _mm_cmple_ss(v20, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
          }
          else
          {
            v26 = v10 + 6291456.25;
            v11 = (int)(LODWORD(v26) << 10) >> 11;
          }
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - (float)v11) & _xmm) <= 0.000081380211 )
          {
            v12 = v2[12];
            if ( (LODWORD(v12) & 0x7FFFFFFFu) > 0x497FFFF0 )
            {
              v21 = 0LL;
              v21.m128_f32[0] = (float)(int)v12 - v12;
              v13 = (int)v12 - _mm_cmple_ss(v21, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
            }
            else
            {
              v27 = v12 + 6291456.25;
              v13 = (int)(LODWORD(v27) << 10) >> 11;
            }
            if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - (float)v13) & _xmm) <= 0.00390625 )
            {
              v14 = v2[13];
              if ( (LODWORD(v14) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                v22 = 0LL;
                v22.m128_f32[0] = (float)(int)v14 - v14;
                v15 = (int)v14 - _mm_cmple_ss(v22, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
              }
              else
              {
                v28 = v14 + 6291456.25;
                v15 = (int)(LODWORD(v28) << 10) >> 11;
              }
              if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - (float)v15) & _xmm) <= 0.00390625 )
                return 1;
            }
          }
        }
      }
    }
  }
  return v3;
}
