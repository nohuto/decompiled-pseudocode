/*
 * XREFs of ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x180162DAC
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180184F98 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x180162D78 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetFrameRate(CDebugFrameCounter *this)
{
  int FrameCountInternal; // ebx
  int *v2; // r10
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  float v5; // xmm1_4
  __int64 result; // rax
  __m128 v7; // xmm2
  float v8; // xmm1_4
  __m128 v9; // xmm2
  float v10; // [rsp+30h] [rbp+8h]
  float v11; // [rsp+30h] [rbp+8h]

  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  v3 = v2[1040];
  v4 = v2[1041] - v3;
  if ( v3 > v2[1041] )
    v4 += 60;
  v5 = (float)v2[1038] / (float)v2[1039];
  if ( COERCE_UNSIGNED_INT(fabs(v5)) > 0x497FFFF0 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = (float)(int)v5 - v5;
    result = (int)v5 - _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v10 = v5 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v10) << 10) >> 11);
  }
  if ( v4 )
  {
    v8 = (float)(FrameCountInternal * result) / (float)(int)(v4 + FrameCountInternal);
    if ( COERCE_UNSIGNED_INT(fabs(v8)) > 0x497FFFF0 )
    {
      v9 = 0LL;
      v9.m128_f32[0] = (float)(int)v8 - v8;
      return (int)v8 - _mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      v11 = v8 + 6291456.25;
      return (unsigned int)((int)(LODWORD(v11) << 10) >> 11);
    }
  }
  return result;
}
