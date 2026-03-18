/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180188CCC
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E619C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?GetDeviceClipBox@CLegacyRenderTarget@@UEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800BD3F0 (-GetDeviceClipBox@CLegacyRenderTarget@@UEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180188B50 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180188C08 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180188C9C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801891AC (-RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD3F0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD494 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD64C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r15
  float v9; // xmm1_4
  char *v10; // r8
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm1_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-40h] BYREF
  __int128 v29; // [rsp+40h] [rbp-30h] BYREF
  int v30[4]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_25;
    CLegacyRenderTarget::GetDeviceClipBox((__int64)this + 136, (__int64)&v28);
    v5 = 1;
    *(float *)&v29 = (float)(int)v28;
    *((float *)&v29 + 1) = (float)SDWORD1(v28);
    v15 = (float)SHIDWORD(v28);
    *((float *)&v29 + 2) = (float)SDWORD2(v28);
    v28 = 0LL;
    *((float *)&v29 + 3) = v15;
    v16 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, (float *)&v29, 1, 0);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x51Bu, 0LL);
      return v4;
    }
    v18 = CComposeTop::Render(a3, a2, (char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL), &v28);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x525u, 0LL);
    }
    else
    {
      v20 = *(float *)&v28;
      if ( *(float *)&v29 > *(float *)&v28 )
      {
        LODWORD(v28) = v29;
        v20 = *(float *)&v29;
      }
      v21 = *((float *)&v28 + 1);
      if ( *((float *)&v29 + 1) > *((float *)&v28 + 1) )
      {
        DWORD1(v28) = DWORD1(v29);
        v21 = *((float *)&v29 + 1);
      }
      v22 = *((float *)&v28 + 2);
      if ( *((float *)&v28 + 2) > *((float *)&v29 + 2) )
      {
        DWORD2(v28) = DWORD2(v29);
        v22 = *((float *)&v29 + 2);
      }
      v23 = *((float *)&v28 + 3);
      if ( *((float *)&v28 + 3) > *((float *)&v29 + 3) )
      {
        HIDWORD(v28) = HIDWORD(v29);
        v23 = *((float *)&v29 + 3);
      }
      if ( v22 <= v20 || v23 <= v21 )
        v28 = 0uLL;
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v28) )
        goto LABEL_25;
      PixelAlign(v30, &v28);
      v29 = 0LL;
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, &v28, 0);
      CLegacyRenderTarget::RenderTargetRectToDesktopRect(this, v24, v30, &v29);
      v25 = CComposeTop::NewContentRendered(a3);
      v4 = v25;
      if ( v25 >= 0 )
        goto LABEL_25;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x537u, 0LL);
    }
LABEL_28:
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v4;
  }
  v9 = (float)*((int *)this + 47);
  v10 = (char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL);
  *(float *)&v29 = (float)*((int *)this + 46);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 48));
  *((float *)&v29 + 1) = v9;
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 49));
  DWORD2(v29) = _mm_cvtepi32_ps(v11).m128_u32[0];
  HIDWORD(v29) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v13 = CComposeTop::FullRender(a3, a2, v10, &v29);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x50Cu, 0LL);
    return v4;
  }
LABEL_25:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_28;
  return v4;
}
