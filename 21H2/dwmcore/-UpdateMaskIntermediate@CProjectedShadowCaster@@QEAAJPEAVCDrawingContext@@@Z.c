/*
 * XREFs of ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180201E44
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x18020114C (--$_Try_emplace@PEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadow.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x180201384 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9A0C (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802A9CA0 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // eax
  __m128 v10; // xmm2
  int v11; // eax
  __m128 v12; // xmm2
  CGeometry *v13; // rcx
  int ShapeData; // eax
  __int64 v15; // rcx
  char v16; // cl
  int v17; // eax
  __int64 v18; // rcx
  const struct D2D_SIZE_F *v19; // r9
  int WhiteColorIntermediate; // eax
  __int64 v21; // rcx
  struct IRenderTargetBitmap **v23; // [rsp+28h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-30h] BYREF
  char v25; // [rsp+48h] [rbp-28h]
  const char *v26; // [rsp+50h] [rbp-20h] BYREF
  int v27; // [rsp+58h] [rbp-18h]
  _BYTE v28[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+40h] BYREF
  struct D2D_SIZE_F v30; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int64 v31; // [rsp+C0h] [rbp+50h] BYREF

  v31 = *((_QWORD *)a2 + 991);
  v4 = 0;
  v5 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
                    (__int64 *)this + 10,
                    (__int64)v28,
                    &v31);
  v6 = (__int64 *)(v5 + 80);
  if ( !*(_QWORD *)(v5 + 80) )
  {
    v7 = *((_QWORD *)this + 16);
    if ( !v7 )
      v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 328LL);
    v8 = *((_QWORD *)this + 8);
    v30 = *(struct D2D_SIZE_F *)(v8 + 140);
    *(FLOAT *)&v29 = v30.width;
    if ( (LODWORD(v30.width) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v10 = 0LL;
      v10.m128_f32[0] = (float)(int)v30.width - v30.width;
      v9 = (int)v30.width - _mm_cmple_ss(v10, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
    }
    else
    {
      *(float *)&v29 = v30.width + 6291456.25;
      v9 = (int)((_DWORD)v29 << 10) >> 11;
    }
    *(FLOAT *)&v29 = v30.height;
    v30.width = (float)v9;
    if ( (LODWORD(v30.height) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v12 = 0LL;
      v12.m128_f32[0] = (float)(int)v30.height - v30.height;
      LODWORD(v29) = _mm_cmple_ss(v12, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      v11 = (int)v30.height - v29;
    }
    else
    {
      *(float *)&v29 = v30.height + 6291456.25;
      v11 = (int)((_DWORD)v29 << 10) >> 11;
    }
    v24 = 0LL;
    v25 = 0;
    v30.height = (float)v11;
    v13 = *(CGeometry **)(v8 + 248);
    if ( v13
      && (ShapeData = CGeometry::GetShapeData(v13, &v30, (struct CShapePtr *)&v24), v4 = ShapeData, ShapeData < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, ShapeData, 0x194u);
    }
    else
    {
      Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v6);
      v16 = *(_BYTE *)(v5 + 76);
      v26 = "DWM ProjectedShadow Mask";
      LOBYTE(v23) = v16;
      v27 = 24;
      v17 = ShadowHelpers::GenerateMaskIntermediate(&v26, a2, &v30, v7, v24);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x1A0u);
      }
      else if ( v7 != *(_QWORD *)(*((_QWORD *)this + 2) + 328LL) )
      {
        v29 = 0LL;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v29);
        if ( *v6 )
          v19 = (const struct D2D_SIZE_F *)(*(int *)(*(_QWORD *)(*v6 + 8) + 16LL) + *v6 + 8);
        else
          v19 = 0LL;
        v27 = 25;
        v26 = "DWM ProjectedShadow Color";
        WhiteColorIntermediate = ShadowHelpers::GenerateWhiteColorIntermediate(
                                   (ShadowHelpers *)&v26,
                                   a2,
                                   (struct CDrawingContext *)&v30,
                                   v19,
                                   (struct IBitmapRealization *)&v29,
                                   v23);
        v4 = WhiteColorIntermediate;
        if ( WhiteColorIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, WhiteColorIntermediate, 0x1ABu);
        else
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(v6, v29);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v29);
      }
    }
    CShapePtr::Release((CShapePtr *)&v24);
  }
  return v4;
}
