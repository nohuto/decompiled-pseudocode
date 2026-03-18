/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801903EC
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18001E644 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063748 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x18008B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800A7EE0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800D3334 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E1E84 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(void *a1, __int64 a2, CRectanglesShape **a3)
{
  unsigned int v5; // edi
  CRectanglesShape *v6; // rbx
  struct CRectanglesShape *v7; // rcx
  CRectanglesShape *v8; // rax
  __int64 v9; // rcx
  CRectanglesShape *v10; // rsi
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v12; // rcx
  int v13; // r8d
  CRectanglesShape *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v18[4]; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v19[4]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( IsPixelAligned((const struct MilRectF *)a1) )
  {
    `vector constructor iterator'(
      (char *)v19,
      16LL,
      4LL,
      (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
    v19[0] = *(struct tagRECT *)CMilRectLFromMilRectF(v18, (__int64)a1);
    v8 = (CRectanglesShape *)DefaultHeap::Alloc(0x60uLL);
    v10 = v8;
    if ( v8 )
    {
      *((_QWORD *)v8 + 1) = 0LL;
      *(_QWORD *)v8 = &CRegionShape::`vftable';
      *((_QWORD *)v8 + 2) = (char *)v8 + 24;
      *((_DWORD *)v8 + 6) = 0;
      *((_QWORD *)v8 + 11) = 0LL;
      CRegionShape::BuildFromRects((__int64)v8, v19, 1u);
      *a3 = v10;
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024882, 0x4Au);
    }
  }
  else
  {
    ObjectCache = CThreadContext::GetObjectCache(v7);
    v12 = 0LL;
    v13 = *((_DWORD *)ObjectCache + 1);
    if ( v13 )
    {
      v12 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v12;
      *((_DWORD *)ObjectCache + 1) = v13 - 1;
    }
    if ( (v12 || (v12 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL)
      && (v14 = CRectanglesShape::CRectanglesShape(v12), (v6 = v14) != 0LL) )
    {
      v15 = CRectanglesShape::BuildFromRectFs(v14, a1, 1u);
      v5 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x57u);
      }
      else
      {
        *a3 = v6;
        v6 = 0LL;
      }
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v12, 0LL, 0LL, -2147024882, 0x52u);
    }
  }
  DefaultHeap::Free(0LL);
  if ( v6 )
    CRectanglesShape::`scalar deleting destructor'(v6, 1);
  return v5;
}
