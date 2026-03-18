/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DC410
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A9DE0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D53DC (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NHM@Z @ 0x1801AFC58 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm1
  __m128i v4; // xmm0
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  float v16[4]; // [rsp+40h] [rbp-28h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v16[0] = 0.0;
  v16[1] = 0.0;
  LODWORD(v16[2]) = _mm_cvtepi32_ps(v2).m128_u32[0];
  LODWORD(v16[3]) = _mm_cvtepi32_ps(v4).m128_u32[0];
  if ( g_LockAndReadLayer )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1));
    v7 = *(int *)(*(_QWORD *)(v6 + 8) + 16LL) + v6 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 24LL))(
      v7,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x68u);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24);
    v12 = *((_QWORD *)this + 1);
    if ( v12 )
      v12 += *(int *)(*(_QWORD *)(v12 + 8) + 16LL) + 8LL;
    v13 = CDrawingContext::DrawBitmapRealization((__int64)a2, v12, v16, (float *)this + 30, v11 != 0, 0, (int)FLOAT_1_0);
    v10 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x6Eu);
    CDrawingContext::PopTransformInternal(a2, 1);
  }
  return v10;
}
