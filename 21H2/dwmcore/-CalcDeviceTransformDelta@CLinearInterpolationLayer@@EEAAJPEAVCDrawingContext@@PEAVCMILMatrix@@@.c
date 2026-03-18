/*
 * XREFs of ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801DC210
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001E4B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearInterpolationLayer::CalcDeviceTransformDelta(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v6[0] = 0.0;
  v6[1] = 0.0;
  LODWORD(v6[2]) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v6[3]) = _mm_cvtepi32_ps(v4).m128_u32[0];
  CMILMatrix::InferAffineMatrix((__int64)a3, (float *)this + 30, v6);
  return 0LL;
}
