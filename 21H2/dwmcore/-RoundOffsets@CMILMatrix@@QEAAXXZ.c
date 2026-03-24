/*
 * XREFs of ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x180211564
 * Callers:
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006C068 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::RoundOffsets(CMILMatrix *this)
{
  float v1; // xmm0_4
  int v2; // eax
  __m128 v3; // xmm2
  float v4; // xmm1_4
  int v5; // eax
  __m128 v6; // xmm2
  float v7; // xmm1_4
  int v8; // eax
  __m128 v9; // xmm2
  float v10; // [rsp+8h] [rbp+8h]
  float v11; // [rsp+8h] [rbp+8h]
  float v12; // [rsp+8h] [rbp+8h]

  v1 = *((float *)this + 12);
  if ( (LODWORD(v1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3 = 0LL;
    v3.m128_f32[0] = (float)(int)v1 - v1;
    v2 = (int)v1 - _mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v10 = v1 + 6291456.25;
    v2 = (int)(LODWORD(v10) << 10) >> 11;
  }
  v4 = *((float *)this + 13);
  *((float *)this + 12) = (float)v2;
  if ( (LODWORD(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v6 = 0LL;
    v6.m128_f32[0] = (float)(int)v4 - v4;
    v5 = (int)v4 - _mm_cmple_ss(v6, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v11 = v4 + 6291456.25;
    v5 = (int)(LODWORD(v11) << 10) >> 11;
  }
  v7 = *((float *)this + 14);
  *((float *)this + 13) = (float)v5;
  if ( (LODWORD(v7) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v9 = 0LL;
    v9.m128_f32[0] = (float)(int)v7 - v7;
    v8 = (int)v7 - _mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v12 = v7 + 6291456.25;
    v8 = (int)(LODWORD(v12) << 10) >> 11;
  }
  *((float *)this + 14) = (float)v8;
}
