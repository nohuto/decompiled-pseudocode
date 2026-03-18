/*
 * XREFs of ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017A4B8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B598 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangleOverlay(__int64 a1, __int64 a2)
{
  __m128 v2; // xmm1
  __int128 v3; // xmm0
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-18h] BYREF

  g_DirtyRegionColor = (g_DirtyRegionColor + 1) % 3;
  v2 = (__m128)_mm_loadu_si128(&xmmword_1802F1600[g_DirtyRegionColor]);
  LODWORD(v8) = v2.m128_i32[0];
  HIDWORD(v8) = _mm_shuffle_ps(v2, v2, 255).m128_u32[0];
  DWORD1(v8) = _mm_shuffle_ps(v2, v2, 85).m128_u32[0];
  DWORD2(v8) = _mm_shuffle_ps(v2, v2, 170).m128_u32[0];
  v3 = v8;
  *(_QWORD *)&v8 = 1LL;
  *((_QWORD *)&v8 + 1) = a2;
  v9 = v3;
  if ( !a2 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v4 = CDrawingContext::FillRectanglesWithSolidColor(a1, &v8, &v9);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1736u, 0LL);
  return v6;
}
