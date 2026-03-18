/*
 * XREFs of ?GetMPORects@CBitmapRealization@@QEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18000CFD4
 * Callers:
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18000CFC0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x1802A5A90 (-GetMPORects@CDxHandleYUVBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?CalcSourceRect@CBitmapRealization@@QEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18000D0C4 (-CalcSourceRect@CBitmapRealization@@QEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectU.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z @ 0x18000E044 (-GetScaledLetterboxingMargins@CBitmapRealization@@QEBA_NPEAUMilRectF@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBitmapRealization::GetMPORects(
        CBitmapRealization *this,
        __int64 a2,
        float *a3,
        _OWORD *a4,
        _OWORD *a5)
{
  __m128i *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // xmm1_8
  __int64 result; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16[4]; // [rsp+20h] [rbp-58h] BYREF
  float v17[4]; // [rsp+30h] [rbp-48h] BYREF

  v9 = (__m128i *)CBitmapRealization::CalcSourceRect();
  v10 = v9->m128i_i64[0];
  v11 = _mm_srli_si128(*v9, 8).m128i_u64[0];
  *a3 = (float)v9->m128i_i32[0];
  a3[1] = (float)SHIDWORD(v10);
  a3[2] = (float)(int)v11;
  a3[3] = (float)SHIDWORD(v11);
  CMILMatrix::Transform2DBoundsHelper<0>(a2, a3, a5);
  result = *((_DWORD *)this + 58) & 0xC000;
  if ( (_DWORD)result == 49152 )
  {
    CBitmapRealization::GetScaledLetterboxingMargins(this, (struct MilRectF *)v16);
    v13 = a3[1] - v16[1];
    v17[0] = *a3 - v16[0];
    v14 = v16[2] + a3[2];
    v17[1] = v13;
    v15 = v16[3] + a3[3];
    v17[2] = v14;
    v17[3] = v15;
    return CMILMatrix::Transform2DBoundsHelper<0>(a2, v17, a4);
  }
  else
  {
    *a4 = *a5;
  }
  return result;
}
