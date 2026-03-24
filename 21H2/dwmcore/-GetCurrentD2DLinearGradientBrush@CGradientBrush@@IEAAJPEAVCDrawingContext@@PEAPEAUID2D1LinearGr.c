/*
 * XREFs of ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801E6E1C
 * Callers:
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801D2C90 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1801E6C94 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x180209DB8 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 */

__int64 __fastcall CGradientBrush::GetCurrentD2DLinearGradientBrush(
        CGradientBrush *this,
        struct CDrawingContext *a2,
        struct ID2D1LinearGradientBrush **a3)
{
  unsigned int v4; // edi
  struct CD3DDevice *v7; // rbx
  bool v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  struct ID2D1LinearGradientBrush *v11; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF
  struct ID2D1LinearGradientBrush *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  v13[0] = 0LL;
  v7 = (struct CD3DDevice *)*((_QWORD *)a2 + 5);
  v8 = *((_BYTE *)this + 176) == 0;
  v13[1] = &v14;
  if ( CGradientSource::FindExistingGradient(
         (CGradientBrush *)((char *)this + 80),
         v7,
         v8,
         (const struct CGradientSource::RetrievalParams *)v13)
    || (v9 = CGradientBrush::Generate(this, v7, (const struct CGradientSource::RetrievalParams *)v13), v4 = v9, v9 >= 0) )
  {
    v11 = v14;
    v14 = 0LL;
    *a3 = v11;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1EFu, 0LL);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v4;
}
