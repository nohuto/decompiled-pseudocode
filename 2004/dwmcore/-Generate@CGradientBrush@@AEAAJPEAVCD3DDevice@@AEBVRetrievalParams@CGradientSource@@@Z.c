/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1801E7D9C
 * Callers:
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801E7F24 (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801E7FF0 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E80BC (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18019F208 (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180209174 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  char v9; // r8
  char v10; // r9
  struct CD3DDevice *v11; // r11
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi

  v4 = *((_QWORD *)this + 18);
  v5 = (*((_QWORD *)this + 19) - v4) / 20;
  if ( v5 < 0 || !v4 && v5 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v6 = v4;
  *((_BYTE *)this + 177) = 1;
  v7 = *((_QWORD *)this + 19);
  if ( v6 != v7 )
  {
    while ( *(float *)(v6 + 16) >= 1.0 )
    {
      v6 += 20LL;
      if ( v6 == v7 )
        goto LABEL_9;
    }
    *((_BYTE *)this + 177) = 0;
  }
LABEL_9:
  v8 = ExtendMode::ToD2D1ExtendMode(*((_BYTE *)this + 104));
  v12 = CGradientSource::Generate((CGradientBrush *)((char *)this + 80), v11, v10, v9, *((_BYTE *)this + 178), v8);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x187u, 0LL);
  else
    *((_BYTE *)this + 176) = 1;
  return v14;
}
