/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18000E2B8
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x18000E37C (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E3B8 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180015658 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009759C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801C091C (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801C0B24 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247BB4 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180247D6C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // r15
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm1_4
  __int64 v24; // r8
  CLegacyRenderTarget *v25; // rbx
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  int v30; // eax
  unsigned int v31; // ecx
  _OWORD v32[4]; // [rsp+30h] [rbp-49h] BYREF
  int v33; // [rsp+70h] [rbp-9h]
  __int128 v34; // [rsp+80h] [rbp+7h] BYREF
  __int128 v35; // [rsp+90h] [rbp+17h] BYREF

  v4 = 0;
  v5 = 0;
  if ( a4 )
  {
    v10 = CComposeTop::FullRender(
            a3,
            a2,
            (char *)this + (*((_BYTE *)this + 11217) != 0 ? 18344LL : 18208LL),
            (char *)this + 18164);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x57Du, 0LL);
      return v4;
    }
  }
  else
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_3;
    if ( *((_BYTE *)this + 11217) )
    {
      v12 = *((_DWORD *)this + 4549);
      v13 = 0;
      v14 = *((_DWORD *)this + 4550);
      *(_QWORD *)&v34 = 0LL;
      *((_QWORD *)&v34 + 1) = __PAIR64__(v14, v12);
    }
    else
    {
      v34 = *(_OWORD *)((char *)this + 18180);
      v12 = DWORD2(v34);
      v13 = v34;
    }
    v5 = 1;
    *(float *)&v35 = (float)v13;
    *((float *)&v35 + 1) = (float)SDWORD1(v34);
    v15 = (float)SHIDWORD(v34);
    *((float *)&v35 + 2) = (float)v12;
    v34 = 0LL;
    *((float *)&v35 + 3) = v15;
    v16 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v35, 1LL, 0);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x58Cu, 0LL);
      return v4;
    }
    v18 = CComposeTop::Render(a3, a2, (char *)this + (*((_BYTE *)this + 11217) != 0 ? 18344LL : 18208LL), &v34);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x596u, 0LL);
      goto LABEL_33;
    }
    v20 = *(float *)&v34;
    if ( *(float *)&v35 > *(float *)&v34 )
    {
      LODWORD(v34) = v35;
      v20 = *(float *)&v35;
    }
    v21 = *((float *)&v34 + 1);
    if ( *((float *)&v35 + 1) > *((float *)&v34 + 1) )
    {
      DWORD1(v34) = DWORD1(v35);
      v21 = *((float *)&v35 + 1);
    }
    v22 = *((float *)&v34 + 2);
    if ( *((float *)&v34 + 2) > *((float *)&v35 + 2) )
    {
      DWORD2(v34) = DWORD2(v35);
      v22 = *((float *)&v35 + 2);
    }
    v23 = *((float *)&v34 + 3);
    if ( *((float *)&v34 + 3) > *((float *)&v35 + 3) )
    {
      HIDWORD(v34) = HIDWORD(v35);
      v23 = *((float *)&v35 + 3);
    }
    if ( v22 <= v20 || v23 <= v21 )
      v34 = 0uLL;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v34) )
    {
      LOBYTE(v24) = 1;
      CLegacyRenderTarget::NotifyRenderedRect(this, &v34, v24);
      v25 = *((_BYTE *)this + 11217)
          ? (CLegacyRenderTarget *)((char *)this + 18344)
          : (CLegacyRenderTarget *)((char *)this + 18208);
      v26 = *(_OWORD *)v25;
      v27 = *((_OWORD *)v25 + 1);
      v33 = *((_DWORD *)v25 + 16);
      v32[0] = v26;
      v28 = *((_OWORD *)v25 + 2);
      v32[1] = v27;
      v29 = *((_OWORD *)v25 + 3);
      v32[2] = v28;
      v32[3] = v29;
      CMILMatrix::Invert((CMILMatrix *)v32);
      v35 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v32, &v34, &v35);
      v30 = CComposeTop::NewContentRendered(a3);
      v4 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x5A8u, 0LL);
LABEL_33:
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        return v4;
      }
    }
  }
LABEL_3:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_33;
  return v4;
}
