/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18003FB3C
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F5F8 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1800AD180 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x18023A320 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18003C050 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x18003FC68 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18003FF38 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  gsl::details *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // r8
  char v15; // r9
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  _QWORD v20[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 24);
  gsl::details::extent_type<-1>::extent_type<-1>(
    (gsl::details *)v20,
    0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 25) - v3) >> 2));
  v20[1] = v3;
  if ( v20[0] == -1LL || !v3 && v20[0] )
  {
    gsl::details::terminate(v7);
    JUMPOUT(0x18003FC61LL);
  }
  v10 = *((_DWORD *)this + 40) == 4;
  LOBYTE(v8) = 1;
  *((_BYTE *)this + 225) = 1;
  v11 = *((_QWORD *)this + 24);
  LOBYTE(v9) = v10;
  v12 = *((_QWORD *)this + 25);
  if ( v11 != v12 )
  {
    while ( *(float *)(v11 + 16) >= 1.0 )
    {
      v11 += 20LL;
      if ( v11 == v12 )
        goto LABEL_6;
    }
    *((_BYTE *)this + 225) = 0;
    LOBYTE(v8) = 0;
  }
LABEL_6:
  LOBYTE(v12) = *((_BYTE *)this + 152);
  v13 = ExtendMode::ToD2D1ExtendMode(v12, v6, v8, v9);
  v16 = CGradientSource::Generate((CGradientBrush *)((char *)this + 88), a2, v15, v14, *((_BYTE *)this + 226), v13);
  v18 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x182u, 0LL);
  else
    *((_BYTE *)this + 224) = 1;
  return v18;
}
