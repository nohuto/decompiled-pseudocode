/*
 * XREFs of ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18020E450
 * Callers:
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020ED80 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040968 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800554DC (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x180058350 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18008EEE4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z @ 0x180094BD4 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCCpuClip@@@Z.c)
 *     ?Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z @ 0x1800CCFF0 (-Begin@CDrawListEntryBuilder@@QEAAXAEBUDrawListEntryBuilderSetupParams@@PEAVCRenderingEffect@@@Z.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800D361C (--0CCpuClip@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800DD36C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?End@CDrawListEntryBuilder@@QEAAJXZ @ 0x1800EC17C (-End@CDrawListEntryBuilder@@QEAAJXZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1801E308C (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@@Z @ 0x1801E8BF0 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18020BADC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18020BD90 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ??4?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@Z @ 0x18020E31C (--4-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCubeMapRenderingEffect@@@.c)
 *     ?CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x18020E79C (-CreateDummyRect@CCompositionSkyBoxBrush@@AEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18020E868 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?InternalRelease@?$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18020EECC (-InternalRelease@-$ComPtr@VCCubeMapRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView@@@Z @ 0x1802AAA24 (--0CCubeMapRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@PEAUID3D11ShaderResourceView.c)
 */

__int64 __fastcall CCompositionSkyBoxBrush::BuildDrawList(
        CCompositionSkyBoxBrush *this,
        struct CBrushDrawListGenerator *a2,
        __int64 **a3)
{
  char v4; // bl
  CDrawingContext *v6; // r14
  CCompositionCubeMap *v8; // rcx
  __int64 v9; // rcx
  int SkyBoxPrimitive; // edi
  __int64 v11; // rdx
  struct IBitmapResource *v12; // r12
  LPVOID v13; // rdi
  CDrawListBitmap *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  struct CRenderingEffect *v17; // rbx
  int CpuClip; // eax
  __int64 v19; // rcx
  bool v20; // zf
  CCompositionSkyBoxBrush *v21; // rcx
  int DummyRect; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, __int64); // rdx
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int128 v31; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE *v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h]
  int v34; // [rsp+4Ch] [rbp-B4h]
  struct ID3D11ShaderResourceView *v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[64]; // [rsp+D0h] [rbp-30h] BYREF
  int v39; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall ***v40)(_QWORD, __int64); // [rsp+160h] [rbp+60h] BYREF
  __int64 (__fastcall ***v41)(_QWORD, __int64); // [rsp+168h] [rbp+68h] BYREF
  struct CRenderingEffect *v42; // [rsp+178h] [rbp+78h] BYREF

  v4 = 0;
  LODWORD(v40) = 0;
  v6 = *(CDrawingContext **)a2;
  v35 = 0LL;
  v42 = 0LL;
  CBrushDrawListGenerator::Reset(a2);
  *(_OWORD *)((char *)a2 + 20) = 0LL;
  v8 = (CCompositionCubeMap *)*((_QWORD *)this + 11);
  if ( !v8 )
  {
LABEL_23:
    SkyBoxPrimitive = 0;
    goto LABEL_24;
  }
  SkyBoxPrimitive = CCompositionCubeMap::GetOrCreateD3DCubeMap(
                      v8,
                      (struct ID2DContextOwner *)(((unsigned __int64)v6 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64)),
                      &v35);
  if ( SkyBoxPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, SkyBoxPrimitive, 0x9Fu);
    goto LABEL_32;
  }
  CCompositionCubeMap::FlushToD3DCubeMap(
    *((CCompositionCubeMap **)this + 11),
    (struct ID2DContextOwner *)(((unsigned __int64)v6 + 24) & -(__int64)(v6 != 0LL)));
  v11 = *(_QWORD *)(32LL * *(unsigned int *)(*((_QWORD *)this + 11) + 120LL)
                  + *(_QWORD *)(*((_QWORD *)this + 11) + 88LL)
                  + 8);
  v12 = (struct IBitmapResource *)((v11 + 72) & -(__int64)(v11 != 0));
  if ( v12 )
  {
    v13 = DefaultHeap::Alloc(0x38uLL);
    if ( v13 )
    {
      v14 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v31, v12);
      LOWORD(v40) = 513;
      BYTE2(v40) = 2;
      v15 = CCubeMapRenderingEffect::CCubeMapRenderingEffect(v13, v14, &v40, v35);
      v4 = 1;
    }
    else
    {
      v15 = 0LL;
    }
    Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::operator=((__int64 *)&v42, v15);
    if ( (v4 & 1) != 0 )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31 + 8);
      wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v31);
    }
    v17 = v42;
    if ( !v42 )
    {
      SkyBoxPrimitive = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, -2147024882, 0xB2u);
LABEL_32:
      CBrushDrawListGenerator::Reset(a2);
      goto LABEL_24;
    }
    CCpuClip::CCpuClip((CCpuClip *)v36);
    CpuClip = CDrawingContext::GetCpuClip(v6, (struct CCpuClip *)v36);
    SkyBoxPrimitive = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, CpuClip, 0xB5u);
    }
    else
    {
      v39 = 0;
      CMatrixStack::Top((__int64)v6 + 368, (__int64)v38);
      v20 = *((_DWORD *)v6 + 76) == 0;
      *(_QWORD *)((char *)&v31 + 4) = 0LL;
      v33 = 0;
      HIDWORD(v31) = !v20;
      v34 = 1;
      v32 = v36;
      LODWORD(v31) = 2;
      CMILMatrix::Get2DScaleDimensionsWithPerspective((CMILMatrix *)v38, (float *)&v31 + 1, (float *)&v31 + 2, 0LL);
      CDrawListEntryBuilder::Begin(
        (CDrawListEntryBuilder *)a3,
        (const struct DrawListEntryBuilderSetupParams *)&v31,
        v17);
      DummyRect = CCompositionSkyBoxBrush::CreateDummyRect(v21, (struct CDrawListEntryBuilder *)a3);
      SkyBoxPrimitive = DummyRect;
      if ( DummyRect < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, DummyRect, 0xC3u);
      }
      else
      {
        v24 = CDrawListEntryBuilder::End((CDrawListEntryBuilder *)a3);
        SkyBoxPrimitive = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0xC4u);
        }
        else
        {
          v41 = 0LL;
          *(_QWORD *)&v31 = &v41;
          *((_QWORD *)&v31 + 1) = 0LL;
          LOBYTE(v32) = 1;
          SkyBoxPrimitive = CCompositionSkyBoxBrush::CreateSkyBoxPrimitive(
                              this,
                              a2,
                              (struct CDrawListPrimitive **)&v31 + 1);
          if ( (_BYTE)v32 )
          {
            v26 = v31;
            v27 = *(__int64 (__fastcall ****)(_QWORD, __int64))v31;
            *(_QWORD *)v31 = *((_QWORD *)&v31 + 1);
            if ( v27 )
              std::default_delete<CDrawListPrimitive>::operator()(v26, v27);
          }
          if ( SkyBoxPrimitive >= 0 )
          {
            CHWDrawListEntry::ReplacePrimitive(*a3[5], (__int64 *)&v40, (__int64 *)&v41);
            if ( v40 )
              std::default_delete<CDrawListPrimitive>::operator()(v28, v40);
            if ( v41 )
              std::default_delete<CDrawListPrimitive>::operator()(v28, v41);
            CShapePtr::Release((CShapePtr *)v37);
            goto LABEL_23;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, SkyBoxPrimitive, 0xC9u);
          if ( v41 )
            std::default_delete<CDrawListPrimitive>::operator()(v30, v41);
        }
      }
    }
    CShapePtr::Release((CShapePtr *)v37);
    goto LABEL_32;
  }
LABEL_24:
  Microsoft::WRL::ComPtr<CCubeMapRenderingEffect>::InternalRelease(&v42);
  return (unsigned int)SkyBoxPrimitive;
}
