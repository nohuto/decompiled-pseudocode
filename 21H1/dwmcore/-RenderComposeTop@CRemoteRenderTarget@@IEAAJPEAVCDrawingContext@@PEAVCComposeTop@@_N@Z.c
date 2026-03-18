/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180191960
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180188B50 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180188C9C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD3F0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD494 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FD64C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderComposeTop(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  __int64 i; // rax
  int v9; // eax
  __int64 v10; // rcx
  float v11; // xmm6_4
  float v12; // xmm7_4
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  __m128i v23; // xmm2
  float v24; // xmm3_4
  int v25; // eax
  __int64 v26; // rcx
  __int128 v28; // [rsp+38h] [rbp-39h] BYREF
  int v29[4]; // [rsp+48h] [rbp-29h] BYREF

  v4 = 0;
  if ( a4 )
  {
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v29[i] = (float)*((int *)this + i + 46);
    v9 = CComposeTop::FullRender(a3, a2, (char *)this + 232, v29);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DEu, 0LL);
      return v4;
    }
  }
  else if ( CComposeTop::HasNewContent(a3) )
  {
    v11 = (float)*((int *)this + 20);
    v12 = (float)*((int *)this + 21);
    v28 = 0LL;
    v13 = CComposeTop::Render(a3, a2, (char *)this + 232, &v28);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1ECu, 0LL);
      return v4;
    }
    v15 = *(float *)&v28;
    if ( *(float *)&v28 < 0.0 )
    {
      v15 = 0.0;
      LODWORD(v28) = 0;
    }
    v16 = *((float *)&v28 + 1);
    if ( *((float *)&v28 + 1) < 0.0 )
    {
      DWORD1(v28) = 0;
      v16 = 0.0;
    }
    v17 = *((float *)&v28 + 2);
    if ( *((float *)&v28 + 2) > v11 )
    {
      *((float *)&v28 + 2) = v11;
      v17 = v11;
    }
    v18 = *((float *)&v28 + 3);
    if ( *((float *)&v28 + 3) > v12 )
    {
      *((float *)&v28 + 3) = v12;
      v18 = v12;
    }
    if ( v17 <= v15 || v18 <= v16 )
      v28 = 0uLL;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v28) )
    {
      PixelAlign(v29, &v28);
      v19 = (float)v29[0];
      v20 = (float)v29[1];
      v21 = (float)v29[2];
      v22 = (float)v29[3];
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 20) + 16LL))(*((_QWORD *)this + 20), v29);
      v23 = _mm_cvtsi32_si128(*((_DWORD *)this + 46));
      v24 = (float)*((int *)this + 47);
      *((_BYTE *)this + 308) = 1;
      *(float *)v23.m128i_i32 = _mm_cvtepi32_ps(v23).m128_f32[0];
      *((float *)&v28 + 3) = v24 + v22;
      *((float *)&v28 + 1) = v24 + v20;
      *(float *)&v28 = *(float *)v23.m128i_i32 + v19;
      *((float *)&v28 + 2) = *(float *)v23.m128i_i32 + v21;
      v25 = CComposeTop::NewContentRendered(a3);
      v4 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1FEu, 0LL);
        return v4;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v4;
}
