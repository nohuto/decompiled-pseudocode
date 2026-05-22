/*
 * XREFs of ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x180120794
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121E14 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     powf @ 0x18003C1C4 (powf.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ControllerProcessor::CalculateNavigationDelta(ControllerProcessor *this, double a2, double a3)
{
  __m128 v4; // xmm5
  __m128 v5; // xmm5
  __m128 v6; // xmm6
  __m128 v7; // xmm3
  __m128 v8; // xmm3
  __m128 v9; // xmm6
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  ULONGLONG TickCount64; // rax
  __m128 v14; // xmm0
  __int64 v15; // rcx
  ULONGLONG v16; // rax
  __int64 result; // rax
  __m128 v18; // xmm0
  float v19; // xmm1_4

  v4 = _mm_unpacklo_ps(_mm_unpacklo_ps(*(__m128 *)&a2, (__m128)0LL), _mm_unpacklo_ps(*(__m128 *)&a3, (__m128)0LL));
  v5 = _mm_mul_ps(v4, v4);
  v5.m128_f32[0] = v5.m128_f32[0] + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0LL, *(__m128 *)&a2), _mm_unpacklo_ps(*(__m128 *)&a3, (__m128)0LL));
  v7 = _mm_sqrt_ps(_mm_shuffle_ps(v5, v5, 0));
  v8 = _mm_shuffle_ps(v7, v7, 170);
  v6.m128_f32[0] = v8.m128_f32[0];
  v9 = _mm_shuffle_ps(v6, v6, 198);
  if ( v8.m128_f32[0] > 1.0 )
  {
    v10 = v8;
    v8 = (__m128)LODWORD(FLOAT_1_0);
    v9 = _mm_div_ps(v9, _mm_shuffle_ps(v10, v10, 0));
  }
  v11 = _mm_and_ps(v8, (__m128)_xmm);
  if ( v11.m128_f32[0] > 0.00000011920929 )
  {
    v12 = v11;
    v12.m128_f32[0] = powf(v11.m128_f32[0], 1.8);
    v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v12, v12, 0));
    TickCount64 = GetTickCount64();
    v14 = 0LL;
    v15 = TickCount64 - *((_QWORD *)this + 44);
    if ( v15 < 0 )
    {
      v16 = v15 & 1 | ((TickCount64 - *((_QWORD *)this + 44)) >> 1);
      v14.m128_f32[0] = (float)(int)v16 + (float)(int)v16;
    }
    else
    {
      v14.m128_f32[0] = (float)(int)v15;
    }
    if ( v14.m128_f32[0] < 1750.0 )
    {
      v14.m128_f32[0] = (float)(powf(v14.m128_f32[0] / 1750.0, 0.60000002) * 0.89999998) + 0.1;
      v9 = _mm_mul_ps(v9, _mm_shuffle_ps(v14, v14, 0));
    }
  }
  else
  {
    *((_QWORD *)this + 44) = GetTickCount();
  }
  result = 0LL;
  v18 = _mm_mul_ps(
          _mm_mul_ps((__m128)_xmm, v9),
          _mm_shuffle_ps((__m128)*((unsigned int *)this + 1941), (__m128)*((unsigned int *)this + 1941), 0));
  v19 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] + *((float *)this + 86);
  v18.m128_f32[0] = v18.m128_f32[0] + *((float *)this + 85);
  *((float *)this + 86) = v19;
  *((_DWORD *)this + 85) = v18.m128_i32[0];
  return result;
}
