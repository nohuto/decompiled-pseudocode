/*
 * XREFs of ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B814
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800E9DE4 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F77D4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B598 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithSolidColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const __m128i *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  char *v8; // rax
  __int64 v9; // rcx
  char *v10; // rbx
  unsigned int v11; // edi
  __m128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v19) )
  {
    v7 = v19;
    v8 = (char *)DefaultHeap::Alloc(saturated_mul((unsigned int)v19, 0x10uLL));
    v10 = v8;
    if ( v8 )
      `vector constructor iterator'(
        v8,
        16LL,
        v7,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
    else
      v10 = 0LL;
    if ( v10 )
    {
      (*(void (__fastcall **)(const struct CShape *, char *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v10, (unsigned int)v19);
      v12 = (__m128)_mm_loadu_si128(a3);
      LODWORD(v17) = v12.m128_i32[0];
      HIDWORD(v17) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
      DWORD1(v17) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
      DWORD2(v17) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
      v13 = v17;
      *(_QWORD *)&v17 = (unsigned int)v19;
      *((_QWORD *)&v17 + 1) = v10;
      v18 = v13;
      v14 = CDrawingContext::FillRectanglesWithSolidColor(this, &v17, (__int64)&v18);
      v11 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x803u, 0LL);
      operator delete(v10);
    }
    else
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x7FEu, 0LL);
    }
  }
  else
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x807u, 0LL);
  }
  return v11;
}
