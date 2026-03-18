/*
 * XREFs of ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800EAC4C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800EA3A0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180041B1C (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Re.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180044970 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004C7B0 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x1800C36E8 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178C04 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801BE06C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
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
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rdx
  const struct _D3DCOLORVALUE *BorderColor; // rax
  int v20; // eax
  __int64 v21; // rcx
  const struct _D3DCOLORVALUE *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  struct CShape *v26; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v27; // [rsp+38h] [rbp-C8h] BYREF
  int v28; // [rsp+40h] [rbp-C0h]
  int v29; // [rsp+44h] [rbp-BCh]
  struct _D3DCOLORVALUE v30; // [rsp+48h] [rbp-B8h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  _BYTE v32[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[96]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = *(_DWORD *)(a1 + 672);
  v7 = 0;
  if ( *(_DWORD *)(a1 + 680) - v6 > a3[2] - *a3 || *(_DWORD *)(a1 + 684) - *(_DWORD *)(a1 + 676) > a3[3] - a3[1] )
  {
    v10 = *(_DWORD *)(a1 + 692);
    v11 = *(_DWORD *)(a1 + 688);
    v12 = *(_DWORD *)(a1 + 676);
    v26 = 0LL;
    HIDWORD(v27) = v12 - v10;
    v13 = *(_DWORD *)(a1 + 680) - v11;
    LODWORD(v27) = v6 - v11;
    v28 = v13;
    v29 = *(_DWORD *)(a1 + 684) - v10;
    CRegionShape::CRegionShape((__int64)v33, (__int64)&v27);
    CRegionShape::CRegionShape((__int64)v32, (__int64)a3);
    *(_QWORD *)&v30.b = 0LL;
    *(_QWORD *)&v30.r = &v26;
    v31 = 1;
    v7 = CShape::Combine((__int64)v33, v14, (__int64)v32, 0LL, 2, &v30.b);
    if ( v31 )
    {
      v16 = *(_QWORD *)&v30.b;
      v15 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v30.r;
      **(_QWORD **)&v30.r = *(_QWORD *)&v30.b;
      if ( v15 )
        std::default_delete<CShape>::operator()(v16, v15);
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v7, 0x651u, 0LL);
    }
    else if ( a4 )
    {
      v27 = 0LL;
      *(_QWORD *)&v30.b = 0LL;
      *(_QWORD *)&v30.r = &v27;
      v31 = 1;
      v7 = CShape::Combine((__int64)v26, (__int64)v15, a4, 0LL, 1, &v30.b);
      if ( v31 )
      {
        v17 = *(_QWORD *)&v30.r;
        v18 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v30.r;
        **(_QWORD **)&v30.r = *(_QWORD *)&v30.b;
        if ( v18 )
          std::default_delete<CShape>::operator()(v17, v18);
      }
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v7, 0x65Au, 0LL);
      }
      else
      {
        BorderColor = CCompositionSurfaceBitmap::GetBorderColor(*(CCompositionSurfaceBitmap **)(a1 + 864), &v30);
        v20 = CDrawingContext::FillShapeWithSolidColor(a2, v27, BorderColor);
        v7 = v20;
        if ( v20 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x65Du, 0LL);
      }
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v27);
    }
    else
    {
      v22 = CCompositionSurfaceBitmap::GetBorderColor(*(CCompositionSurfaceBitmap **)(a1 + 864), &v30);
      v23 = CDrawingContext::FillShapeWithSolidColor(a2, v26, v22);
      v7 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x662u, 0LL);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v32);
    CRegionShape::~CRegionShape((CRegionShape *)v33);
    std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))&v26);
  }
  return (unsigned int)v7;
}
