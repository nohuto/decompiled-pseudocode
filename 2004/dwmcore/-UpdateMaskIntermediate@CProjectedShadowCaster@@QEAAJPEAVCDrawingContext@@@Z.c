/*
 * XREFs of ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E569C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000E454 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Lbound@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x18000C3A0 (--$_Lbound@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProje.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAPEBVCVisualTree@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAPEBVCVisualTree@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000F7C8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAPEBVCVisualTree@@@2@V-$tuple@$$V@2@.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011304 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CC20 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x1801E5458 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180267850 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 *v6; // r9
  unsigned __int64 v7; // r10
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  __m128 v13; // xmm2
  int v14; // eax
  __m128 v15; // xmm2
  CGeometry *v16; // rcx
  int ShapeData; // eax
  __int64 v18; // rcx
  char v19; // al
  int MaskIntermediate; // eax
  __int64 v21; // rcx
  const struct D2D_SIZE_F *v22; // r9
  int WhiteColorIntermediate; // eax
  __int64 v24; // rcx
  struct IRenderTargetBitmap **v26; // [rsp+28h] [rbp-38h]
  struct CShape *v27; // [rsp+40h] [rbp-20h] BYREF
  char v28; // [rsp+48h] [rbp-18h]
  const char *v29; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+58h] [rbp-8h]
  __int64 *v31; // [rsp+A0h] [rbp+40h] BYREF
  struct D2D_SIZE_F v32; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF
  char v34; // [rsp+B8h] [rbp+58h] BYREF

  v33 = *((_QWORD *)a2 + 741);
  v4 = 0;
  v5 = std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Lbound<CVisualTree const *>(
         (__int64 *)this + 9,
         &v33);
  v8 = v5;
  if ( v5 == (__int64 *)*v6 || v7 < v5[4] )
  {
    v31 = &v33;
    v8 = *(__int64 **)std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<CVisualTree const * &&>,std::tuple<>>(
                        v6,
                        (__int64)&v34,
                        (int)v5,
                        (__int64)v6,
                        &v31);
  }
  v9 = v8 + 10;
  if ( !v8[10] )
  {
    v10 = *((_QWORD *)this + 15);
    if ( !v10 )
      v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 176LL);
    v11 = *((_QWORD *)this + 7);
    v32 = *(struct D2D_SIZE_F *)(v11 + 132);
    *(FLOAT *)&v31 = v32.width;
    if ( (LODWORD(v32.width) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v13 = 0LL;
      v13.m128_f32[0] = (float)(int)v32.width - v32.width;
      LODWORD(v31) = _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      v12 = (int)v32.width - (_DWORD)v31;
    }
    else
    {
      *(float *)&v31 = v32.width + 6291456.25;
      v12 = (int)((_DWORD)v31 << 10) >> 11;
    }
    *(FLOAT *)&v31 = v32.height;
    v32.width = (float)v12;
    if ( (LODWORD(v32.height) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      v15 = 0LL;
      v15.m128_f32[0] = (float)(int)v32.height - v32.height;
      LODWORD(v31) = _mm_cmple_ss(v15, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
      v14 = (int)v32.height - (_DWORD)v31;
    }
    else
    {
      *(float *)&v31 = v32.height + 6291456.25;
      v14 = (int)((_DWORD)v31 << 10) >> 11;
    }
    v27 = 0LL;
    v28 = 0;
    v32.height = (float)v14;
    v16 = *(CGeometry **)(v11 + 240);
    if ( v16
      && (ShapeData = CGeometry::GetShapeData(v16, &v32, (struct CShapePtr *)&v27), v4 = ShapeData, ShapeData < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, ShapeData, 0x195u, 0LL);
    }
    else
    {
      Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(v8 + 10);
      v19 = *((_BYTE *)v8 + 76);
      v29 = "DWM ProjectedShadow Mask";
      v30 = 24;
      MaskIntermediate = ShadowHelpers::GenerateMaskIntermediate(
                           (__int64)&v29,
                           a2,
                           (__int64)&v32,
                           v10,
                           v27,
                           v19,
                           (float *)v8 + 15,
                           v8 + 10);
      v4 = MaskIntermediate;
      if ( MaskIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, MaskIntermediate, 0x1A1u, 0LL);
      }
      else if ( v10 != *(_QWORD *)(*((_QWORD *)this + 2) + 176LL) )
      {
        v31 = 0LL;
        if ( *v9 )
          v22 = (const struct D2D_SIZE_F *)(*(int *)(*(_QWORD *)(*v9 + 8) + 16LL) + *v9 + 8);
        else
          v22 = 0LL;
        v30 = 25;
        v29 = "DWM ProjectedShadow Color";
        WhiteColorIntermediate = ShadowHelpers::GenerateWhiteColorIntermediate(
                                   (ShadowHelpers *)&v29,
                                   a2,
                                   (struct CDrawingContext *)&v32,
                                   v22,
                                   (struct IBitmapRealization *)&v31,
                                   v26);
        v4 = WhiteColorIntermediate;
        if ( WhiteColorIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, WhiteColorIntermediate, 0x1ACu, 0LL);
        else
          Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(v9, (__int64)v31);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
      }
    }
    CShapePtr::Release((CShapePtr *)&v27);
  }
  return v4;
}
