/*
 * XREFs of ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B2028
 * Callers:
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x18011539A (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802445C0 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180004548 (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUMilRectF@@$0-0@gsl@@AEBU_D3D.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithSolidColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const __m128i *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  char *v8; // rax
  __int64 v9; // rcx
  char *v10; // rdi
  __m128 v11; // xmm1
  gsl::details *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(*(_QWORD *)a2 + 64LL))(a2, &v19) )
  {
    v7 = v19;
    v8 = (char *)DefaultHeap::Alloc(saturated_mul((unsigned int)v19, 0x10uLL));
    v10 = v8;
    if ( v8 )
    {
      `vector constructor iterator'(
        v8,
        16LL,
        v7,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
      (*(void (__fastcall **)(const struct CShape *, char *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, v10, (unsigned int)v19);
      v11 = (__m128)_mm_loadu_si128(a3);
      LODWORD(v17) = v11.m128_i32[0];
      HIDWORD(v17) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
      DWORD2(v17) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
      DWORD1(v17) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
      v18 = v17;
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v17, (unsigned int)v19);
      *((_QWORD *)&v17 + 1) = v10;
      if ( (_QWORD)v17 == -1LL )
      {
        gsl::details::terminate(v12);
        __debugbreak();
      }
      v13 = CDrawingContext::FillRectanglesWithSolidColor(this, (__int64)&v17, (__int64)&v18);
      v15 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x882u);
      DefaultHeap::Free(v10);
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024882, 0x87Du);
    }
  }
  else
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024809, 0x886u);
  }
  return v15;
}
