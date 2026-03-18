/*
 * XREFs of ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x18011539A
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800068A4 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18006356C (--1CRegionShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D18A0 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180114F2A (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Re.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801B2028 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18021011C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 */

__int64 __fastcall CWindowNode::RenderRevealBorder(
        __int64 a1,
        CDrawingContext *a2,
        const struct tagRECT *a3,
        __int64 a4)
{
  int v4; // ebx
  CCompositionSurfaceBitmap *v9; // rsi
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64); // rdx
  const struct _D3DCOLORVALUE *BorderColor; // rax
  int v16; // eax
  __int64 v17; // rcx
  const struct _D3DCOLORVALUE *v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct CShape *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct CShape *v24; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+40h] [rbp-C0h] BYREF
  char v26; // [rsp+50h] [rbp-B0h]
  _BYTE v27[96]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[96]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 920) )
    v9 = (CCompositionSurfaceBitmap *)CPtrArrayBase::operator[]((__int64 *)(a1 + 808), 0LL);
  else
    v9 = 0LL;
  if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v9) == 1
    && (*(_DWORD *)(a1 + 776) - *(_DWORD *)(a1 + 768) > a3->right - a3->left
     || *(_DWORD *)(a1 + 780) - *(_DWORD *)(a1 + 772) > a3->bottom - a3->top) )
  {
    v23 = 0LL;
    CRegionShape::CRegionShape((__int64)v28, (const struct tagRECT *)(a1 + 768));
    CRegionShape::CRegionShape((__int64)v27, a3);
    *(_QWORD *)&v25.b = 0LL;
    *(_QWORD *)&v25.r = &v23;
    v26 = 1;
    v4 = CShape::Combine((__int64)v28, v10, (__int64)v27, 0LL, 2, &v25.b);
    if ( v26 )
    {
      v12 = *(_QWORD *)&v25.b;
      v11 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v25.r;
      **(_QWORD **)&v25.r = *(_QWORD *)&v25.b;
      if ( v11 )
        std::default_delete<CShape>::operator()(v12, v11);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v4, 0x580u);
    }
    else if ( a4 )
    {
      v24 = 0LL;
      *(_QWORD *)&v25.b = 0LL;
      *(_QWORD *)&v25.r = &v24;
      v26 = 1;
      v4 = CShape::Combine((__int64)v23, (__int64)v11, a4, 0LL, 1, &v25.b);
      if ( v26 )
      {
        v13 = *(_QWORD *)&v25.r;
        v14 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v25.r;
        **(_QWORD **)&v25.r = *(_QWORD *)&v25.b;
        if ( v14 )
          std::default_delete<CShape>::operator()(v13, v14);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v4, 0x589u);
      }
      else
      {
        BorderColor = CCompositionSurfaceBitmap::GetBorderColor(v9, &v25);
        v16 = CDrawingContext::FillShapeWithSolidColor(a2, v24, BorderColor);
        v4 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x58Cu);
      }
      if ( v24 )
        std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v24);
    }
    else
    {
      v18 = CCompositionSurfaceBitmap::GetBorderColor(v9, &v25);
      v19 = CDrawingContext::FillShapeWithSolidColor(a2, v23, v18);
      v4 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x591u);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v27);
    CRegionShape::~CRegionShape((CRegionShape *)v28);
    if ( v23 )
      std::default_delete<CShape>::operator()(v21, (__int64 (__fastcall ***)(_QWORD, __int64))v23);
  }
  return (unsigned int)v4;
}
