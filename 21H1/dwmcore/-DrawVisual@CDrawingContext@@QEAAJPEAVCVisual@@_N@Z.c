/*
 * XREFs of ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180021AE0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008F160 (-Draw@CRedirectedVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     CComposition::ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___ @ 0x1800E6D34 (CComposition--ForEachCursorVisual__lambda_f82c9a5b3bad524e48fa5f81f23450e9___.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180179474 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C80BC (-Draw@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180011C78 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180028DD0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18002B000 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18002F788 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x18002FE8C (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18003A468 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18004C758 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18004D8A0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18004EDE4 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18005A300 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006A6C4 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18008F5A8 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008F6EC (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18008F790 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Top@?$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z @ 0x18008FB60 (-Top@-$CWatermarkStack@M$0EA@$01$09@@QEBAJPEAMI@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x180090C04 (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ??0COcclusionContext@@QEAA@XZ @ 0x18009110C (--0COcclusionContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180093A80 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawVisual(CDrawingContext *this, struct CVisual *a2, char a3)
{
  COcclusionContext *v3; // r13
  unsigned int v6; // edi
  CDrawingContext *v7; // rsi
  char v8; // r15
  int VisualTree; // eax
  __int64 v10; // rcx
  struct CVisualTree *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // xmm3_4
  __int64 v17; // rax
  int (__fastcall *v18)(struct CVisualTree *, __int64 *, _BYTE *); // rdi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  const struct CMILMatrix *TopByReference; // rax
  struct CVisualTree *v32; // [rsp+38h] [rbp-C8h] BYREF
  CDrawingContext *v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v36[64]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+B0h] [rbp-50h]
  __m128 v38[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+100h] [rbp+0h]
  __int128 v40; // [rsp+110h] [rbp+10h] BYREF
  __int128 v41; // [rsp+120h] [rbp+20h] BYREF
  __int64 v42; // [rsp+130h] [rbp+30h]
  __int128 v43; // [rsp+138h] [rbp+38h] BYREF
  int v44; // [rsp+148h] [rbp+48h]
  int v45; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v46[1584]; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0LL;
  v33 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( !a2 )
    return v6;
  v32 = 0LL;
  v40 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v32);
  VisualTree = CVisual::GetVisualTree(a2, &v32);
  v6 = VisualTree;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, VisualTree, 0xA90u, 0LL);
LABEL_18:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v32);
    if ( !v8 )
      goto LABEL_20;
    goto LABEL_19;
  }
  v11 = v32;
  v12 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v32 + 208LL))(v32);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xA92u, 0LL);
    goto LABEL_33;
  }
  v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xA94u, 0LL);
LABEL_33:
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v32);
    return v6;
  }
  CDrawingContext::GetClipBoundsWorld((__int64)this, (__int64)&v40);
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v40) )
    goto LABEL_18;
  v16 = *((_DWORD *)v11 + 21);
  v44 = *((_DWORD *)v11 + 20);
  v43 = v40;
  v45 = v16;
  COcclusionContext::COcclusionContext((COcclusionContext *)v46);
  v37 = 0;
  v39 = 0;
  v42 = 0LL;
  v41 = 0LL;
  if ( a3 )
  {
    CMatrixStack::Top((CDrawingContext *)((char *)this + 408), (struct CMILMatrix *)v36);
  }
  else
  {
    CVisual::GetRootTransform(a2, (struct CMILMatrix *)v36);
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 408));
    CMILMatrix::Multiply((CMILMatrix *)v36, TopByReference);
  }
  v8 = 1;
  if ( CMILMatrix::SetToInverse(v38, (const struct CMILMatrix *)v36) )
  {
    CMILMatrix::Transform3DBoundsHelper<0>(v38, &v43, &v41);
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v36) )
    {
      v17 = *(_QWORD *)v11;
      v34[0] = 1LL;
      v18 = *(int (__fastcall **)(struct CVisualTree *, __int64 *, _BYTE *))(v17 + 216);
      v34[1] = (__int64)&v41;
      gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v35, v34);
      if ( v18(v11, v35, v46) >= 0 )
        v3 = (COcclusionContext *)v46;
    }
  }
  else
  {
    v41 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v42 = qword_1803487E8;
  }
  v19 = CDrawingContext::Create(&v33);
  v6 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xAC8u, 0LL);
    COcclusionContext::~COcclusionContext((COcclusionContext *)v46);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v32);
    v7 = v33;
  }
  else
  {
    v7 = v33;
    v21 = CDrawingContext::BeginFrame(
            v33,
            *((struct IDeviceTarget **)this + 4),
            (const struct CMILMatrix *)v36,
            (const struct _D3DCOLORVALUE *)this + 5,
            0LL);
    v6 = v21;
    if ( v21 >= 0 )
    {
      v23 = CDrawingContext::PushGpuClipRectInternal((__int64)v7, 0LL, (float *)&v40, 1, 1);
      v6 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0xAD0u, 0LL);
      }
      else
      {
        *((_BYTE *)v7 + 292) = *((_BYTE *)this + 292);
        *((_DWORD *)v7 + 68) = *((_DWORD *)this + 68);
        *((_DWORD *)v7 + 69) = *((_DWORD *)this + 69);
        *((_DWORD *)v7 + 75) = *((_DWORD *)this + 75);
        *((_DWORD *)v7 + 70) = *((_DWORD *)this + 70);
        *((_DWORD *)v7 + 71) = *((_DWORD *)this + 71);
        *((_DWORD *)v7 + 72) = *((_DWORD *)this + 72);
        LODWORD(v33) = (_DWORD)FLOAT_1_0;
        CWatermarkStack<float,64,2,10>::Top((char *)this + 3232, &v33);
        v25 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)v7 + 808, &v33);
        v6 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xADEu, 0LL);
        }
        else
        {
          v27 = CDrawingContext::DrawVisualTree(v7, (__int64)v11, (__int64)&v41, v3, 0, 1);
          v6 = v27;
          if ( v27 >= 0 )
          {
            *((_BYTE *)this + 5948) |= *((_BYTE *)v7 + 5948);
            *((_BYTE *)this + 5949) |= *((_BYTE *)v7 + 5949);
            *((_BYTE *)this + 5950) |= *((_BYTE *)v7 + 5950);
            *((_BYTE *)this + 5951) |= *((_BYTE *)v7 + 5951);
            CWatermarkStack<float,64,2,10>::Pop((_DWORD *)v7 + 808);
            CDrawingContext::PopGpuClipRectInternal(v7, 0);
            COcclusionContext::~COcclusionContext((COcclusionContext *)v46);
            goto LABEL_18;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xAE4u, 0LL);
        }
      }
      COcclusionContext::~COcclusionContext((COcclusionContext *)v46);
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_19:
      CDrawingContext::EndFrame((CD3DDevice **)v7);
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xACCu, 0LL);
    COcclusionContext::~COcclusionContext((COcclusionContext *)v46);
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v32);
  }
LABEL_20:
  if ( v7 )
    CRenderTargetBitmap::Release(v7);
  return v6;
}
