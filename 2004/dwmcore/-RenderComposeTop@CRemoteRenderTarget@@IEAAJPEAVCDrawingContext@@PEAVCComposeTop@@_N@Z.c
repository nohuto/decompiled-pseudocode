/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018ED30
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E899C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180185D10 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180185E8C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FAA30 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FAAD4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FAC8C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
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
  float v12; // xmm8_4
  int v13; // eax
  __int64 v14; // rcx
  float v15; // xmm1_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm5_4
  int v21; // r14d
  int v22; // edx
  float v23; // xmm4_4
  int v24; // esi
  int v25; // edi
  int v26; // edx
  float v27; // xmm5_4
  int v28; // eax
  __int64 v29; // rcx
  int v30; // ebx
  __m128i v31; // xmm2
  float v32; // xmm3_4
  int v33; // eax
  __int64 v34; // rcx
  __int128 v36; // [rsp+38h] [rbp-49h] BYREF
  float v37[4]; // [rsp+48h] [rbp-39h] BYREF

  v4 = 0;
  if ( a4 )
  {
    for ( i = 0LL; i < 4; ++i )
      v37[i] = (float)*((int *)this + i + 46);
    v9 = CComposeTop::FullRender(a3, a2, (char *)this + 232, v37);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D3u, 0LL);
      return v4;
    }
  }
  else if ( CComposeTop::HasNewContent(a3) )
  {
    v11 = (float)*((int *)this + 20);
    v12 = (float)*((int *)this + 21);
    v36 = 0LL;
    v13 = CComposeTop::Render(a3, a2, (char *)this + 232, &v36);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x1E1u, 0LL);
      return v4;
    }
    v15 = *(float *)&v36;
    if ( *(float *)&v36 < 0.0 )
    {
      v15 = 0.0;
      LODWORD(v36) = 0;
    }
    v16 = *((float *)&v36 + 1);
    if ( *((float *)&v36 + 1) < 0.0 )
    {
      v16 = 0.0;
      DWORD1(v36) = 0;
    }
    v17 = *((float *)&v36 + 2);
    v18 = *((float *)&v36 + 2);
    v19 = *((float *)&v36 + 2);
    if ( *((float *)&v36 + 2) > v11 )
    {
      *((float *)&v36 + 2) = v11;
      v17 = v11;
      v18 = v11;
      v19 = v11;
    }
    v20 = *((float *)&v36 + 3);
    if ( *((float *)&v36 + 3) > v12 )
    {
      *((float *)&v36 + 3) = v12;
      v20 = v12;
      v18 = v19;
    }
    if ( v17 <= v15 || v20 <= v16 )
    {
      v15 = 0.0;
      v36 = 0uLL;
      v18 = 0.0;
    }
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v36) )
    {
      LODWORD(v36) = PixelAlign(v15, 0);
      v21 = v36;
      DWORD1(v36) = PixelAlign(v23, v22);
      v24 = DWORD1(v36);
      DWORD2(v36) = PixelAlign(v18, 1);
      v25 = DWORD2(v36);
      v28 = PixelAlign(v27, v26);
      v29 = *((_QWORD *)this + 20);
      v30 = v28;
      HIDWORD(v36) = v28;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v29 + 16LL))(v29, &v36);
      v31 = _mm_cvtsi32_si128(*((_DWORD *)this + 46));
      v32 = (float)*((int *)this + 47);
      *((_BYTE *)this + 308) = 1;
      *(float *)v31.m128i_i32 = _mm_cvtepi32_ps(v31).m128_f32[0];
      v37[0] = (float)v21 + *(float *)v31.m128i_i32;
      v37[1] = (float)v24 + v32;
      v37[2] = (float)v25 + *(float *)v31.m128i_i32;
      v37[3] = (float)v30 + v32;
      v33 = CComposeTop::NewContentRendered(a3);
      v4 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1F3u, 0LL);
        return v4;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v4;
}
