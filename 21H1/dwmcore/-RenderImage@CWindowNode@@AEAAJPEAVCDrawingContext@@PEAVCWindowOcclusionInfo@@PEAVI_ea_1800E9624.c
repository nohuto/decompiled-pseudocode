/*
 * XREFs of ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800480E0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180016320 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1800172E4 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180017334 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x180017B2C (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ @ 0x18001A438 (-ShouldUseGDIAlphaMarginsLinearInterpolation@CDrawingContext@@QEBA_NXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18002A790 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV3@2@Z @ 0x180047BEC (-GetAlphaMarginsRects@CWindowNode@@AEAA_NPEAU_MARGINS@@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSi.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048958 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180048A9C (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800497D4 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180050A2C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800950D4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180095D9C (--1CRegionShape@@UEAA@XZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x1800B81C0 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800BAB48 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800CB60C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800E9DE4 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180170034 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180178AAC (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180178B88 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ??0CRegionShape@@QEAA@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801F7108 (--0CRegionShape@@QEAA@AEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@Re.c)
 */

__int64 __fastcall CWindowNode::RenderImage(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CWindowOcclusionInfo *a3,
        struct IBitmapResource *a4,
        const struct CShape *a5,
        struct _MARGINS *a6,
        int a7)
{
  int v9; // ebx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edi
  int EffectiveBounds; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct IBitmapResource *v18; // rdx
  _DWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char AlphaMarginsRects; // al
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  int v32; // r9d
  int v33; // eax
  __int64 v34; // rcx
  CCompositionSurfaceBitmap *v35; // rcx
  _DWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  unsigned int v40; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+20h] [rbp-E0h]
  bool v42; // [rsp+30h] [rbp-D0h]
  char v43; // [rsp+31h] [rbp-CFh]
  struct CShape *v44; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape *v45; // [rsp+40h] [rbp-C0h] BYREF
  char v46; // [rsp+48h] [rbp-B8h] BYREF
  char v47[7]; // [rsp+49h] [rbp-B7h] BYREF
  struct _MARGINS *v48; // [rsp+50h] [rbp-B0h]
  float v49[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v50; // [rsp+B0h] [rbp-50h] BYREF
  char v51; // [rsp+C0h] [rbp-40h]
  struct tagRECT v52; // [rsp+C8h] [rbp-38h] BYREF
  char v53; // [rsp+D8h] [rbp-28h]
  __int128 v54; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v55; // [rsp+F0h] [rbp-10h] BYREF
  int v56; // [rsp+100h] [rbp+0h] BYREF
  int v57; // [rsp+104h] [rbp+4h]
  int v58; // [rsp+114h] [rbp+14h]
  _BYTE v59[80]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v60[96]; // [rsp+1A0h] [rbp+A0h] BYREF

  v48 = a6;
  v43 = 0;
  v42 = *((_BYTE *)this + 836) & 1;
  v9 = 0;
  v49[16] = 0.0;
  v56 = 0;
  v55 = 0LL;
  v50 = 0LL;
  v11 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x69Bu, 0LL);
LABEL_74:
    if ( v43 )
      CDrawingContext::PopRenderOptionsInternal(a2, 1);
    return (unsigned int)v13;
  }
  EffectiveBounds = CWindowNode::GetEffectiveBounds(this, a5, &v55, v47, &v46);
  v13 = EffectiveBounds;
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, EffectiveBounds, 0x6A0u, 0LL);
    return (unsigned int)v13;
  }
  v16 = CWindowNode::ApplyTextureToLocalTransform((__int64)this, (__int64 *)a4, (CMILMatrix *)v49, &v50);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x6A4u, 0LL);
    return (unsigned int)v13;
  }
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v55)
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v50.left) )
  {
    v54 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v49, (__int64)&v50, (float *)&v54);
    if ( !CDrawingContext::IsOccluded((__int64)a2, (__int64)&v54, a7) )
    {
      v44 = 0LL;
      CRectanglesShape::CRectanglesShape((CRectanglesShape *)v59, (const struct MilRectF *)&v54);
      CRegionShape::CRegionShape(v60, &v55);
      v18 = (struct IBitmapResource *)((*((_QWORD *)this + 108) + 64LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 108) >> 64));
      if ( a4 == v18 )
      {
        if ( CDrawingContext::DrawAsOverlay((COverlayContext **)a2, a4) )
        {
          if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(*((CCompositionSurfaceBitmap **)this + 108)) != 1 )
            goto LABEL_17;
          v19 = PixelAlign(&v50.left, &v54);
          v20 = CWindowNode::RenderRevealBorder(this, a2, v19, a5);
          v13 = v20;
          if ( v20 >= 0 )
            goto LABEL_17;
          v40 = 1731;
          goto LABEL_15;
        }
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49[0] - 1.0) & _xmm) >= 0.0000011920929
          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v49[5] - 1.0) & _xmm) >= 0.0000011920929 )
        {
          v9 = 2;
          v57 = 1;
          v56 = 2;
        }
      }
      *(_QWORD *)&v50.right = 0LL;
      v51 = 1;
      if ( a5 )
      {
        if ( v46 )
        {
          v45 = 0LL;
          *(_QWORD *)&v50.left = &v45;
          v13 = CShape::Combine((__int64)a5, (__int64)v18, (__int64)v60, 0LL, 1, &v50.right);
          wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v50);
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v13, 0x6E5u, 0LL);
          }
          else
          {
            *(_QWORD *)&v50.right = 0LL;
            *(_QWORD *)&v50.left = &v44;
            v51 = 1;
            v13 = CShape::Combine((__int64)v59, v23, (__int64)v45, 0LL, 1, &v50.right);
            wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v50);
            if ( v13 >= 0 )
            {
              std::unique_ptr<CShape>::~unique_ptr<CShape>(&v45);
              goto LABEL_28;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v13, 0x6EAu, 0LL);
          }
          std::unique_ptr<CShape>::~unique_ptr<CShape>(&v45);
          goto LABEL_17;
        }
        *(_QWORD *)&v50.left = &v44;
        v13 = CShape::Combine((__int64)v59, (__int64)v18, (__int64)a5, 0LL, 1, &v50.right);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v50);
        if ( v13 < 0 )
        {
          v40 = 1754;
          goto LABEL_21;
        }
      }
      else
      {
        *(_QWORD *)&v50.left = &v44;
        v13 = CShape::Combine((__int64)v59, (__int64)v18, (__int64)v60, 0LL, 1, &v50.right);
        wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v50);
        if ( v13 < 0 )
        {
          v40 = 1745;
LABEL_21:
          v22 = v13;
          goto LABEL_16;
        }
      }
LABEL_28:
      v52 = 0LL;
      v50 = 0LL;
      AlphaMarginsRects = CWindowNode::GetAlphaMarginsRects((__int64)this, v48, &v55, &v52, &v50);
      v27 = *((_DWORD *)a2 + 75);
      if ( v27 != *((_DWORD *)a2 + 70) && v27 != 5 )
      {
        v9 |= 0x10u;
        v58 = *((_DWORD *)a2 + 75);
        v56 = v9;
      }
      if ( AlphaMarginsRects && v42 )
      {
        if ( a4 != (struct IBitmapResource *)((*((_QWORD *)this + 108) + 64LL) & -(__int64)(*((_QWORD *)this + 108) != 0LL))
          && CDrawingContext::ShouldUseGDIAlphaMarginsLinearInterpolation(a2) )
        {
          v9 |= 2u;
          v57 = -16777215;
          v56 = v9;
        }
        if ( !v9 )
        {
LABEL_40:
          if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v52)
            && !(unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v52) )
          {
            v45 = 0LL;
            CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v56, &v52);
            *(_QWORD *)&v52.left = &v45;
            *(_QWORD *)&v52.right = 0LL;
            v53 = 1;
            v13 = CShape::Combine((__int64)&v56, v28, (__int64)v44, 0LL, 1, &v52.right);
            wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v52);
            if ( v13 < 0 )
            {
              v41 = 1841;
              goto LABEL_53;
            }
            v30 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v49, v45, 0, a7);
            v13 = v30;
            if ( v30 < 0 )
            {
              v41 = 1849;
LABEL_51:
              v32 = v30;
LABEL_54:
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v32, v41, 0LL);
              goto LABEL_55;
            }
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v56);
            std::unique_ptr<CShape>::~unique_ptr<CShape>(&v45);
          }
          if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v50)
            || (unsigned __int8)CDrawingContext::IsOccluded((__int64)a2, (__int64)&v50) )
          {
            goto LABEL_67;
          }
          v45 = 0LL;
          CRectanglesShape::CRectanglesShape((CRectanglesShape *)&v56, &v50);
          *(_QWORD *)&v50.left = &v45;
          *(_QWORD *)&v50.right = 0LL;
          v51 = 1;
          v13 = CShape::Combine((__int64)&v56, v31, (__int64)v44, 0LL, 1, &v50.right);
          wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v50);
          if ( v13 >= 0 )
          {
            v30 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v49, v45, v42, a7);
            v13 = v30;
            if ( v30 >= 0 )
            {
LABEL_55:
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v56);
              std::unique_ptr<CShape>::~unique_ptr<CShape>(&v45);
LABEL_67:
              CRegionShape::~CRegionShape((CRegionShape *)v60);
              CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v59);
              std::unique_ptr<CShape>::~unique_ptr<CShape>(&v44);
              goto LABEL_74;
            }
            v41 = 1869;
            goto LABEL_51;
          }
          v41 = 1862;
LABEL_53:
          v32 = v13;
          goto LABEL_54;
        }
        v20 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v56, 1);
        v13 = v20;
        if ( v20 >= 0 )
        {
          v43 = 1;
          goto LABEL_40;
        }
        v40 = 1827;
LABEL_15:
        v22 = v20;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v22, v40, 0LL);
LABEL_17:
        CRegionShape::~CRegionShape((CRegionShape *)v60);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v59);
        std::unique_ptr<CShape>::~unique_ptr<CShape>(&v44);
        return (unsigned int)v13;
      }
      if ( v9 )
      {
        v20 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v56, 1);
        v13 = v20;
        if ( v20 < 0 )
        {
          v40 = 1793;
          goto LABEL_15;
        }
        v43 = 1;
      }
      v33 = CDrawingContext::FillShapeWithBitmap(a2, a4, (const struct CMILMatrix *)v49, v44, v42, a7);
      v13 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x709u, 0LL);
      }
      else
      {
        v35 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 108);
        if ( a4 == (struct IBitmapResource *)(((unsigned __int64)v35 + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)v35 >> 64))
          && (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(v35) == 1 )
        {
          v36 = PixelAlign(&v50.left, &v54);
          v37 = CWindowNode::RenderRevealBorder(this, a2, v36, a5);
          v13 = v37;
          if ( v37 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x710u, 0LL);
        }
      }
      goto LABEL_67;
    }
  }
  return (unsigned int)v13;
}
