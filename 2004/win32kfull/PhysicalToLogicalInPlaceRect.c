/*
 * XREFs of PhysicalToLogicalInPlaceRect @ 0x1C0073934
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0071CC0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C007237C (IntersectWithParents.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0072DC0 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PhysicalToLogicalInPlaceRect(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  float *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  __m128i v13; // xmm0
  __m128i v14; // xmm1

  v2 = 0;
  if ( *(_QWORD *)(a1 + 216) && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v6 = *(_QWORD *)(a1 + 216);
    v2 = 1;
    v7 = (int)*(float *)(v6 + 52);
    v8 = (int)*(float *)(v6 + 48);
    a2[3] -= v7;
    *a2 -= v8;
    a2[2] -= v8;
    a2[1] -= v7;
    v9 = *(float **)(a1 + 216);
    v10 = 1.0 / *v9;
    v11 = 1.0 / v9[5];
    v12 = (float)a2[1];
    v13 = _mm_cvtsi32_si128(a2[2]);
    *a2 = (int)(float)((float)*a2 * v10);
    LODWORD(v9) = (int)(float)(v12 * v11);
    v14 = _mm_cvtsi32_si128(a2[3]);
    a2[1] = (int)v9;
    a2[2] = (int)(float)(_mm_cvtepi32_ps(v13).m128_f32[0] * v10);
    a2[3] = (int)(float)(_mm_cvtepi32_ps(v14).m128_f32[0] * v11);
  }
  return v2;
}
