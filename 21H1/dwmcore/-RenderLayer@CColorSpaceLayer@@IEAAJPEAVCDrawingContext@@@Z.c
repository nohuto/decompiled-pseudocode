/*
 * XREFs of ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180193F2C
 * Callers:
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180193FF0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801791AC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CColorSpaceLayer::RenderLayer(CColorSpaceLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  __int64 v5; // r8
  int v6; // r9d
  struct IBitmapRealization *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  float v12[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v12[0] = 0.0;
  v12[1] = 0.0;
  v5 = *((_QWORD *)this + 1);
  v6 = *((_DWORD *)a2 + 1486);
  LODWORD(v12[2]) = _mm_cvtepi32_ps(v2).m128_u32[0];
  LODWORD(v12[3]) = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( v5 )
    v7 = (struct IBitmapRealization *)(v5 + *(int *)(*(_QWORD *)(v5 + 8) + 16LL) + 8LL);
  else
    v7 = 0LL;
  v8 = CDrawingContext::DrawBitmapRealization(a2, v7, v12, v12, 0, v6);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x56u, 0LL);
  return v10;
}
