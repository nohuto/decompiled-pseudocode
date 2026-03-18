/*
 * XREFs of ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E80BC
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801D3C10 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801E8D80 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1801E7D9C (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180209028 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentSurface(CGradientBrush *this, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  struct CD3DDevice *v9; // rbx
  bool v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  v18[1] = 0LL;
  v9 = *(struct CD3DDevice **)(a2 + 40);
  v10 = *((_BYTE *)this + 176) == 0;
  v18[0] = &v17;
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 80),
         v9,
         v10,
         (const struct CGradientSource::RetrievalParams *)v18)
    || (v11 = CGradientBrush::Generate(this, v9, (const struct CGradientSource::RetrievalParams *)v18),
        v5 = v11,
        v11 >= 0) )
  {
    v13 = v17;
    v14 = *(_DWORD *)(v17 + 64);
    v15 = v17 + 16;
    *(_DWORD *)a4 = 0;
    v17 = 0LL;
    *(_DWORD *)(a4 + 8) = 1157627904;
    *(float *)(a4 + 4) = (float)v14;
    *a3 = v15 & -(__int64)(v13 != 0);
    *(float *)(a4 + 12) = (float)(v14 + 1);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1CEu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v5;
}
