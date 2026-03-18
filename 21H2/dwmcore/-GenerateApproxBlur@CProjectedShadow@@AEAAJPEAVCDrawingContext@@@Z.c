/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802334E4
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180235174 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D92A8 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DC290 (-reset@-$com_ptr_t@VCBrushRenderingGraph@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x180114836 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x180232ADC (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180232D48 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x1802330B0 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180233CD8 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEA.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x18023450C (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x18023468C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapRealization@@AEAV-$.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  int ApproxBlurIntermediate; // eax
  __int64 v7; // rcx
  struct CBrush *v8; // r14
  struct CBrush *v9; // rsi
  float v10; // xmm2_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rcx
  CSurfaceBrush **v14; // r8
  int v15; // edx
  int v16; // r8d
  int NineGridBrush; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  CSurfaceBrush **v23; // r8
  int v24; // edx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  float BlurForBoundary; // xmm0_4
  int v32; // edx
  int v33; // eax
  __int64 v34; // rcx
  CSurfaceBrush **v35; // r8
  int v36; // edx
  int v37; // r8d
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  CSurfaceBrush **v44; // r8
  int v45; // edx
  int v46; // r8d
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rbx
  int CrossFadeGraph; // eax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  CSurfaceBrush **v60; // r8
  int v61; // edx
  int v62; // r8d
  int v63; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  struct CSurfaceBrush *v67; // r8
  __int64 v68; // rdx
  char *v69; // r8
  int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rcx
  _BYTE v75[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v76[4]; // [rsp+44h] [rbp-2Ch] BYREF
  float v77; // [rsp+48h] [rbp-28h] BYREF
  __int128 v78; // [rsp+50h] [rbp-20h] BYREF

  v2 = *((_DWORD *)this + 82);
  v5 = 0;
  if ( v2 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 this,
                                 a2,
                                 64.0,
                                 &stru_18038C580,
                                 &CProjectedShadow::s_cp2xBlurAsset);
      v5 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, ApproxBlurIntermediate, 0x3A4u);
      }
      else
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
    }
    return v5;
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0.0;
  v11 = 0.0;
  v78 = _xmm;
  switch ( v2 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurAsset);
        v12 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                16.0,
                &stru_18038C580,
                &CProjectedShadow::s_cpHalfBlurAsset);
        v5 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x3BEu);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      }
      v14 = (CSurfaceBrush **)CProjectedShadow::s_cpHalfBlurNineGrid;
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
        if ( CProjectedShadow::s_cpHalfBlurAsset )
        {
          v15 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cpHalfBlurAsset + 1) + 16LL);
          v16 = v15 + (_DWORD)CProjectedShadow::s_cpHalfBlurAsset + 8;
        }
        else
        {
          v16 = 0;
        }
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v15,
                          v16,
                          (unsigned int)&v78,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v5 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, NineGridBrush, 0x3C7u);
          return v5;
        }
        v14 = (CSurfaceBrush **)CProjectedShadow::s_cpHalfBlurNineGrid;
      }
      v19 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v14);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x3CBu);
        return v5;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
        v21 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                32.0,
                &stru_18038C580,
                &CProjectedShadow::s_cp1xBlurAsset);
        v5 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x3D2u);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v23 = (CSurfaceBrush **)CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        if ( CProjectedShadow::s_cp1xBlurAsset )
        {
          v24 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 16LL);
          v25 = v24 + (_DWORD)CProjectedShadow::s_cp1xBlurAsset + 8;
        }
        else
        {
          v25 = 0;
        }
        v26 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v24,
                v25,
                (unsigned int)&v78,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, v26, 0x3DBu);
          return v5;
        }
        v23 = (CSurfaceBrush **)CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v28 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v23);
      v5 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x3DFu);
        return v5;
      }
      v8 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v9 = CProjectedShadow::s_cp1xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 0);
      v32 = 1;
      break;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurAsset);
        v33 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                32.0,
                &stru_18038C580,
                &CProjectedShadow::s_cp1xBlurAsset);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0x3EEu);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      }
      v35 = (CSurfaceBrush **)CProjectedShadow::s_cp1xBlurNineGrid;
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
        if ( CProjectedShadow::s_cp1xBlurAsset )
        {
          v36 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp1xBlurAsset + 1) + 16LL);
          v37 = v36 + (_DWORD)CProjectedShadow::s_cp1xBlurAsset + 8;
        }
        else
        {
          v37 = 0;
        }
        v38 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v36,
                v37,
                (unsigned int)&v78,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v5 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0LL, v38, 0x3F7u);
          return v5;
        }
        v35 = (CSurfaceBrush **)CProjectedShadow::s_cp1xBlurNineGrid;
      }
      v40 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v35);
      v5 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x3FBu);
        return v5;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
        v42 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                64.0,
                &stru_18038C580,
                &CProjectedShadow::s_cp2xBlurAsset);
        v5 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0LL, v42, 0x402u);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
      v44 = (CSurfaceBrush **)CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v45 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v46 = v45 + (_DWORD)CProjectedShadow::s_cp2xBlurAsset + 8;
        }
        else
        {
          v46 = 0;
        }
        v47 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v45,
                v46,
                (unsigned int)&v78,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, v47, 0x40Cu);
          return v5;
        }
        v44 = (CSurfaceBrush **)CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v49 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v44);
      v5 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0LL, v49, 0x410u);
        return v5;
      }
      v8 = CProjectedShadow::s_cp1xBlurNineGrid;
      v9 = CProjectedShadow::s_cp2xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 1);
      v32 = 2;
      break;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurAsset);
        v58 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                64.0,
                &stru_18038C580,
                &CProjectedShadow::s_cp2xBlurAsset);
        v5 = v58;
        if ( v58 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0LL, v58, 0x41Fu);
          return v5;
        }
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
      }
      v60 = (CSurfaceBrush **)CProjectedShadow::s_cp2xBlurNineGrid;
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurNineGrid);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v61 = *(_DWORD *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v62 = v61 + (_DWORD)CProjectedShadow::s_cp2xBlurAsset + 8;
        }
        else
        {
          v62 = 0;
        }
        v63 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v61,
                v62,
                (unsigned int)&v78,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v5 = v63;
        if ( v63 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0LL, v63, 0x429u);
          return v5;
        }
        v60 = (CSurfaceBrush **)CProjectedShadow::s_cp2xBlurNineGrid;
      }
      v65 = CProjectedShadow::AdjustNineGridBrush((struct CComposition **)this, a2, v60);
      v5 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0LL, v65, 0x42Du);
        return v5;
      }
      v67 = CProjectedShadow::s_cp2xBlurSurface;
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp2xBlurSurface);
        if ( CProjectedShadow::s_cp2xBlurAsset )
        {
          v68 = *(int *)(*((_QWORD *)CProjectedShadow::s_cp2xBlurAsset + 1) + 16LL);
          v69 = (char *)CProjectedShadow::s_cp2xBlurAsset + v68 + 8;
        }
        else
        {
          v69 = 0LL;
        }
        v70 = CProjectedShadow::GenerateSurfaceBrush(this, v68, v69, &v78, &CProjectedShadow::s_cp2xBlurSurface);
        v5 = v70;
        if ( v70 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0LL, v70, 0x434u);
          return v5;
        }
        v67 = CProjectedShadow::s_cp2xBlurSurface;
      }
      v72 = CProjectedShadow::AdjustSurfaceBrush((struct CComposition **)this, a2, v67);
      v5 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0LL, v72, 0x438u);
        return v5;
      }
      v8 = CProjectedShadow::s_cp2xBlurNineGrid;
      v9 = CProjectedShadow::s_cp2xBlurSurface;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary((__int64)this, 2);
      v32 = 3;
      break;
    default:
      goto LABEL_61;
  }
  v10 = BlurForBoundary;
  v11 = CProjectedShadow::GetBlurForBoundary(v30, v32);
LABEL_61:
  v77 = (float)(*((float *)this + 24) - v10) / (float)(v11 - v10);
  if ( *((struct CBrush **)this + 42) != v8 || *((struct CBrush **)this + 43) != v9 )
  {
    v51 = *((_QWORD *)this + 47);
    if ( v51 )
    {
      *(_DWORD *)(v51 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize(v51 + 16, 0x18u);
      *(_BYTE *)(v51 + 200) = 1;
      wil::com_ptr_t<CBrushRenderingGraph,wil::err_returncode_policy>::reset((__int64 *)this + 47);
    }
  }
  if ( !*((_QWORD *)this + 47) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v8, v9);
    v5 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0LL, CrossFadeGraph, 0x450u);
      return v5;
    }
    *((_QWORD *)this + 42) = v8;
    *((_QWORD *)this + 43) = v9;
  }
  v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, _BYTE *, _BYTE *))(**((_QWORD **)this + 48) + 32LL))(
          *((_QWORD *)this + 48),
          0LL,
          69LL,
          (char *)this + 352,
          v75,
          v76);
  v5 = v54;
  if ( v54 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0LL, v54, 0x45Au);
  }
  else
  {
    v56 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, _BYTE *, _BYTE *))(**((_QWORD **)this + 48)
                                                                                         + 32LL))(
            *((_QWORD *)this + 48),
            1LL,
            18LL,
            &v77,
            v75,
            v76);
    v5 = v56;
    if ( v56 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v56, 0x45Bu);
  }
  return v5;
}
