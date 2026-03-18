/*
 * XREFs of ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800E9DE4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180170034 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180178B88 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B814 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801C098C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801F7108 (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Re.c)
 */

__int64 __fastcall CWindowNode::RenderRevealBorder(__int64 a1, CDrawingContext *a2, _DWORD *a3, __int64 a4)
{
  int v6; // r9d
  int v7; // ebx
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const struct _D3DCOLORVALUE *BorderColor; // rax
  int v19; // eax
  __int64 v20; // rcx
  const struct _D3DCOLORVALUE *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  struct CShape *v25; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+44h] [rbp-BCh]
  struct _D3DCOLORVALUE v29; // [rsp+48h] [rbp-B8h] BYREF
  char v30; // [rsp+58h] [rbp-A8h]
  _BYTE v31[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v32[96]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a1 + 672);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 680) - v6 > a3[2] - *a3 || *(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676) > a3[3] - a3[1] )
  {
    v10 = *(_DWORD *)(a1 + 692);
    v11 = *(_DWORD *)(a1 + 688);
    v12 = *(_DWORD *)(a1 + 676);
    v25 = 0LL;
    HIDWORD(v26) = v12 - v10;
    v13 = *(_DWORD *)(a1 + 680) - v11;
    LODWORD(v26) = v6 - v11;
    v27 = v13;
    v28 = *(_DWORD *)(a1 + 684) - v10;
    CRegionShape::CRegionShape(v32, &v26);
    CRegionShape::CRegionShape(v31, a3);
    *(_QWORD *)&v29.b = 0LL;
    *(_QWORD *)&v29.r = &v25;
    v30 = 1;
    v7 = CShape::Combine((__int64)v32, v14, (__int64)v31, 0LL, 2, &v29.b);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v29);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v7, 0x66Au, 0LL);
    }
    else if ( a4 )
    {
      v26 = 0LL;
      *(_QWORD *)&v29.b = 0LL;
      *(_QWORD *)&v29.r = &v26;
      v30 = 1;
      v7 = CShape::Combine((__int64)v25, v15, a4, 0LL, 1, &v29.b);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v29);
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v7, 0x673u, 0LL);
      }
      else
      {
        BorderColor = CCompositionSurfaceBitmap::GetBorderColor(*(CCompositionSurfaceBitmap **)(a1 + 864), &v29);
        v19 = CDrawingContext::FillShapeWithSolidColor(a2, v26, BorderColor);
        v7 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x676u, 0LL);
      }
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v26);
    }
    else
    {
      v21 = CCompositionSurfaceBitmap::GetBorderColor(*(CCompositionSurfaceBitmap **)(a1 + 864), &v29);
      v22 = CDrawingContext::FillShapeWithSolidColor(a2, v25, v21);
      v7 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x67Bu, 0LL);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v31);
    CRegionShape::~CRegionShape((CRegionShape *)v32);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v25);
  }
  return (unsigned int)v7;
}
