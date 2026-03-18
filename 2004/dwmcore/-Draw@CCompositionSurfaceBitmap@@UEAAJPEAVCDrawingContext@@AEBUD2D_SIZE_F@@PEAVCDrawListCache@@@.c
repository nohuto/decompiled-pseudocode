/*
 * XREFs of ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180014F44
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EF310 (-Draw@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015468 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x180015528 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180015550 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x180046EA0 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180047970 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180049364 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180055DC0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x18005778C (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180178530 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180186514 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801BE06C (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?IsProtected@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1801BE184 (-IsProtected@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     McTemplateU0pppffff_EventWriteTransfer @ 0x1801BE1B8 (McTemplateU0pppffff_EventWriteTransfer.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F0B88 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::Draw(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CCompositionSurfaceBitmap *v5; // rsi
  unsigned int v9; // ebx
  char v10; // dl
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rcx
  unsigned int CurrentVisual; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm8_4
  int v23; // eax
  unsigned int v24; // ecx
  float v25; // xmm1_4
  int v26; // eax
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // [rsp+28h] [rbp-E0h]
  float v34; // [rsp+40h] [rbp-C8h]
  float v35; // [rsp+48h] [rbp-C0h]
  struct _D3DCOLORVALUE v36; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v37[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+A8h] [rbp-60h]
  __int128 v39; // [rsp+B8h] [rbp-50h] BYREF
  int v40; // [rsp+C8h] [rbp-40h] BYREF
  float v41; // [rsp+CCh] [rbp-3Ch]
  float v42; // [rsp+D0h] [rbp-38h]
  float v43; // [rsp+D4h] [rbp-34h]
  __int128 v44; // [rsp+D8h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v5 = (CCompositionSurfaceBitmap *)((char *)this - 224);
  v9 = 0;
  v38 = 0;
  v44 = 0LL;
  CCompositionSurfaceBitmap::CalcImageTransform(
    (CCompositionSurfaceBitmap *)((char *)this - 224),
    a3,
    (CMILMatrix *)v37);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v44) )
  {
    v39 = 0LL;
    if ( v10 )
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v37);
    else
      v39 = v44;
    CDrawingContext::EtwLogCurrentState(a2);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 24));
      v35 = *((float *)&v39 + 3) - *((float *)&v39 + 1);
      v34 = *((float *)&v39 + 2) - *(float *)&v39;
      McTemplateU0pppffff_EventWriteTransfer(
        v17,
        v16,
        CurrentVisual,
        (_DWORD)v5,
        (char)v5,
        0,
        0,
        SLOBYTE(v34),
        SLOBYTE(v35));
    }
    if ( *(_BYTE *)(*((_QWORD *)this - 26) + 1129LL) && CCompositionSurfaceBitmap::IsProtected(v5) )
    {
      v18 = CDrawingContext::DrawSolidRectangle((char *)a2 + 16, &v39, &stru_1802EE660);
      v9 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xE7u, 0LL);
        return v9;
      }
      *((_BYTE *)a2 + 5951) = 1;
    }
    else if ( !CDrawingContext::DrawAsOverlay(
                 a2,
                 (struct IBitmapResource *)(((unsigned __int64)this - 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64))) )
    {
      v11 = CContent::Draw((CCompositionSurfaceBitmap *)((char *)this - 136), a2, a3, a4);
      v9 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDEu, 0LL);
        return v9;
      }
    }
    if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v5)
      && CCompositionSurfaceBitmap::UseLayoutSizeForBounds(v5, a3) )
    {
      CCompositionSurfaceBitmap::GetBorderColor(v5, &v36);
      v20 = *((float *)&v39 + 1);
      v21 = a3->width + 0.0;
      v22 = a3->height + 0.0;
      if ( *((float *)&v39 + 1) > 0.0 )
      {
        v41 = 0.0;
        v40 = 0;
        v43 = *((float *)&v39 + 1);
        v42 = v21;
        v23 = CDrawingContext::DrawSolidRectangle((char *)a2 + 16, &v40, &v36);
        v9 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x101u, 0LL);
          return v9;
        }
        v20 = *((float *)&v39 + 1);
      }
      v25 = *((float *)&v39 + 3);
      if ( v22 > *((float *)&v39 + 3) )
      {
        v40 = 0;
        v41 = *((float *)&v39 + 3);
        v43 = v22;
        v42 = v21;
        v26 = CDrawingContext::DrawSolidRectangle((char *)a2 + 16, &v40, &v36);
        v9 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x10Cu, 0LL);
          return v9;
        }
        v25 = *((float *)&v39 + 3);
        v20 = *((float *)&v39 + 1);
      }
      if ( *(float *)&v39 > 0.0 && v25 > v20 )
      {
        v40 = 0;
        v41 = v20;
        v43 = v25;
        v42 = *(float *)&v39;
        v28 = CDrawingContext::DrawSolidRectangle((char *)a2 + 16, &v40, &v36);
        v9 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x118u, 0LL);
          return v9;
        }
        v25 = *((float *)&v39 + 3);
        v20 = *((float *)&v39 + 1);
      }
      if ( v21 > *((float *)&v39 + 2) && v25 > v20 )
      {
        v41 = v20;
        v43 = v25;
        v40 = DWORD2(v39);
        v42 = v21;
        v30 = CDrawingContext::DrawSolidRectangle((char *)a2 + 16, &v40, &v36);
        v9 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x124u, 0LL);
          return v9;
        }
      }
    }
    v13 = *((_QWORD *)this - 5);
    if ( v13 )
    {
      v32 = CSynchronousSuperWetInk::Draw((CSynchronousSuperWetInk *)(v13 + 280), a2, a3, 0LL);
      if ( v32 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12D,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
          (const char *)(unsigned int)v32,
          v33);
    }
  }
  return v9;
}
