/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18025B62C
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011304 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18000A414 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180016834 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x18004098C (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180041AC4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800444AC (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180048030 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18006D120 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18009D998 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // esi
  CRectanglesShape *v4; // rdi
  unsigned int v5; // r9d
  struct CRectanglesShape *v8; // rcx
  int v9; // r9d
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  struct CObjectCache *ObjectCache; // rax
  CRectanglesShape *v14; // rcx
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  int v20[4]; // [rsp+30h] [rbp-78h] BYREF
  char v21[64]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  while ( IsPixelAligned((const struct MilRectF *)(a1 + 16LL * v5)) )
  {
    v5 = v9 + 1;
    if ( v5 )
    {
      `vector constructor iterator'(
        v21,
        16LL,
        4LL,
        (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
      *(_OWORD *)v21 = *(_OWORD *)CMilRectLFromMilRectF(v20, a1);
      v10 = DefaultHeap::Alloc(0x60uLL);
      v12 = (__int64)v10;
      if ( v10 )
      {
        v10[1] = 0LL;
        *v10 = &CRegionShape::`vftable';
        v10[2] = v10 + 3;
        *((_DWORD *)v10 + 6) = 0;
        v10[11] = 0LL;
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
      {
        CRegionShape::BuildFromRects(v12, (__int64)v21, 1);
        *a3 = v12;
      }
      else
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x4Au, 0LL);
      }
      goto LABEL_20;
    }
  }
  ObjectCache = CThreadContext::GetObjectCache(v8);
  v14 = 0LL;
  v15 = *((_DWORD *)ObjectCache + 1);
  if ( v15 )
  {
    v14 = (CRectanglesShape *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v14;
    *((_DWORD *)ObjectCache + 1) = v15 - 1;
  }
  if ( v14 || (v14 = (CRectanglesShape *)DefaultHeap::Alloc(0x48uLL)) != 0LL )
    v4 = CRectanglesShape::CRectanglesShape(v14);
  if ( v4 )
  {
    v16 = CRectanglesShape::BuildFromRectFs(v4, a1, 1u);
    v3 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x57u, 0LL);
    }
    else
    {
      *a3 = v4;
      v4 = 0LL;
    }
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, -2147024882, 0x52u, 0LL);
  }
LABEL_20:
  operator delete(0LL);
  if ( v4 )
    CRectanglesShape::`scalar deleting destructor'(v4, 1, v18);
  return v3;
}
