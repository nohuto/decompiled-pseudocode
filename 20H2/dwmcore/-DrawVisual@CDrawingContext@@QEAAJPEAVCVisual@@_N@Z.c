/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180021220 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D7C1C (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___ @ 0x1800E84F8 (CComposition--ForEachCursorVisual__lambda_f30d7ccad3626cf56a10f5441da8a523___.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180174B94 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C38BC (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180017E74 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004AC18 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18004AD5C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x18004B02C (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18004B4A0 (--0COcclusionContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18004BAF8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18004BC48 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18004DD9C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18004EFE4 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180065090 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B48 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x180077378 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180085038 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800854AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008AC90 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800979A8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800979D0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18009A544 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x18009F3D4 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B1FB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2, char a3)
{
  unsigned int v5; // edi
  CDrawingContext *v6; // rsi
  char v7; // r15
  int VisualTree; // eax
  unsigned int v9; // ecx
  struct CVisualTree *v10; // rbx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // xmm3_4
  __int64 v16; // rax
  __int64 (__fastcall *v17)(struct CVisualTree *, __int64 *, _BYTE *); // rdi
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  const struct CMILMatrix *TopByReference; // rax
  struct CVisualTree *v31; // [rsp+38h] [rbp-C8h] BYREF
  CDrawingContext *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v35[64]; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+B0h] [rbp-50h]
  _BYTE v37[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v38; // [rsp+100h] [rbp+0h]
  __int128 v39; // [rsp+110h] [rbp+10h] BYREF
  __int128 v40; // [rsp+120h] [rbp+20h] BYREF
  __int64 v41; // [rsp+130h] [rbp+30h]
  __int128 v42; // [rsp+138h] [rbp+38h] BYREF
  int v43; // [rsp+148h] [rbp+48h]
  int v44; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v45[1584]; // [rsp+150h] [rbp+50h] BYREF

  v32 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( !a2 )
    return v5;
  v31 = 0LL;
  v39 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v31);
  VisualTree = CVisual::GetVisualTree(a2, &v31);
  v5 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, VisualTree, 0xAA4u, 0LL);
LABEL_17:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v31);
    if ( !v7 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v10 = v31;
  v11 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v31 + 208LL))(v31);
  v5 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xAA6u, 0LL);
    goto LABEL_32;
  }
  v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xAA8u, 0LL);
LABEL_32:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v31);
    return v5;
  }
  CDrawingContext::GetClipBoundsWorld(this, &v39);
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v39) )
    goto LABEL_17;
  v15 = *((_DWORD *)v10 + 21);
  v43 = *((_DWORD *)v10 + 20);
  v42 = v39;
  v44 = v15;
  COcclusionContext::COcclusionContext((COcclusionContext *)v45);
  v36 = 0;
  v38 = 0;
  v41 = 0LL;
  v40 = 0LL;
  if ( a3 )
  {
    CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v35);
  }
  else
  {
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v35);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    CMILMatrix::Multiply((CMILMatrix *)v35, TopByReference);
  }
  v7 = 1;
  if ( CMILMatrix::SetToInverse((CMILMatrix *)v37, (const struct CMILMatrix *)v35) )
  {
    CMILMatrix::Transform3DBoundsHelper<0>(v37, &v42, &v40);
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v35) )
    {
      v16 = *(_QWORD *)v10;
      v33[0] = 1LL;
      v17 = *(__int64 (__fastcall **)(struct CVisualTree *, __int64 *, _BYTE *))(v16 + 216);
      v33[1] = (__int64)&v40;
      gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v34, v33);
      v17(v10, v34, v45);
    }
  }
  else
  {
    v40 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v41 = qword_1803437E8;
  }
  v18 = CDrawingContext::Create(&v32);
  v5 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xADCu, 0LL);
    COcclusionContext::~COcclusionContext((COcclusionContext *)v45);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v31);
    v6 = v32;
  }
  else
  {
    v6 = v32;
    v20 = CDrawingContext::BeginFrame(
            v32,
            *((struct IDeviceTarget **)this + 4),
            (const struct CMILMatrix *)v35,
            (const struct _D3DCOLORVALUE *)this + 5,
            0LL);
    v5 = v20;
    if ( v20 >= 0 )
    {
      v22 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v6, 0, (unsigned int)&v39, 1, 1);
      v5 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xAE4u, 0LL);
      }
      else
      {
        *((_BYTE *)v6 + 292) = *((_BYTE *)this + 292);
        *((_DWORD *)v6 + 68) = *((_DWORD *)this + 68);
        *((_DWORD *)v6 + 69) = *((_DWORD *)this + 69);
        *((_DWORD *)v6 + 75) = *((_DWORD *)this + 75);
        *((_DWORD *)v6 + 70) = *((_DWORD *)this + 70);
        *((_DWORD *)v6 + 71) = *((_DWORD *)this + 71);
        *((_DWORD *)v6 + 72) = *((_DWORD *)this + 72);
        LODWORD(v32) = (_DWORD)FLOAT_1_0;
        CWatermarkStack<float,64,2,10>::Top((char *)this + 3232, &v32);
        v24 = CWatermarkStack<float,64,2,10>::Push((char *)v6 + 3232, &v32);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xAF2u, 0LL);
        }
        else
        {
          v26 = CDrawingContext::DrawVisualTree(v6, 0, 1);
          v5 = v26;
          if ( v26 >= 0 )
          {
            *((_BYTE *)this + 5948) |= *((_BYTE *)v6 + 5948);
            *((_BYTE *)this + 5949) |= *((_BYTE *)v6 + 5949);
            *((_BYTE *)this + 5950) |= *((_BYTE *)v6 + 5950);
            *((_BYTE *)this + 5951) |= *((_BYTE *)v6 + 5951);
            CWatermarkStack<float,64,2,10>::Pop((char *)v6 + 3232);
            CDrawingContext::PopGpuClipRectInternal(v6, 0);
            COcclusionContext::~COcclusionContext((COcclusionContext *)v45);
            goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xAF8u, 0LL);
        }
      }
      COcclusionContext::~COcclusionContext((COcclusionContext *)v45);
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v31);
LABEL_18:
      CDrawingContext::EndFrame(v6);
      goto LABEL_19;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xAE0u, 0LL);
    COcclusionContext::~COcclusionContext((COcclusionContext *)v45);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v31);
  }
LABEL_19:
  if ( v6 )
    CRenderTargetBitmap::Release(v6);
  return v5;
}
