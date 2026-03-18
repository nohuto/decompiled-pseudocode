/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7D48
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8B54 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E8CD4 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EA994 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFB60 (-Render@COffScreenRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EFE10 (-Render@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x18004AD5C (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18004D59C (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18004FFD4 (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x180085038 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800BDEAC (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800DA820 (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___ @ 0x1800E7D24 (gsl--final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___--_final_action__lambda_4dee9d74ed0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1801771EC (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x180177B9C (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x180185374 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(
        COffScreenRenderTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  struct _D3DCOLORVALUE v4; // xmm0
  unsigned int v6; // ebx
  __int64 v7; // r15
  char v8; // r14
  char v9; // r13
  int v10; // r12d
  COffScreenRenderTarget *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rax
  int ResampleMode; // eax
  int v20; // edx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rbx
  __int64 v25; // rax
  struct IDeviceTarget *v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // edx
  char v45; // [rsp+30h] [rbp-D0h]
  char v46; // [rsp+34h] [rbp-CCh]
  CDrawingContext *v47; // [rsp+38h] [rbp-C8h] BYREF
  int v48; // [rsp+40h] [rbp-C0h]
  _DWORD v49[2]; // [rsp+48h] [rbp-B8h] BYREF
  COcclusionContext *v50; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+58h] [rbp-A8h]
  struct _D3DCOLORVALUE v52; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v53[64]; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+B0h] [rbp-50h]
  _BYTE v55[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+10h] BYREF
  __int128 *v58; // [rsp+118h] [rbp+18h]
  __int128 v59; // [rsp+120h] [rbp+20h] BYREF
  __int128 v60; // [rsp+130h] [rbp+30h] BYREF
  int v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+144h] [rbp+44h]

  *(struct _D3DCOLORVALUE *)&v4.r = *(struct _D3DCOLORVALUE *)((char *)this - 1816);
  v47 = a2;
  *a4 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v45 = 0;
  v9 = 0;
  LOBYTE(v10) = 0;
  *(struct _D3DCOLORVALUE *)&v52.r = *(struct _D3DCOLORVALUE *)&v4.r;
  v48 = 0;
  if ( !*((_BYTE *)this - 156) )
    return v6;
  v11 = (COffScreenRenderTarget *)((char *)this - 1928);
  v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 241) + 280LL))((char *)this - 1928);
  v6 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE7u, 0LL);
    goto LABEL_43;
  }
  if ( !*((_DWORD *)this - 32) )
    return v6;
  (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v11 + 304LL))(v11);
  v8 = 1;
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this - 228) + 208LL))(*((_QWORD *)this - 228));
  v6 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xF3u, 0LL);
    goto LABEL_32;
  }
  *(_BYTE *)(*((_QWORD *)this - 239) + 1129LL) = 1;
  if ( *((_QWORD *)this - 228) )
  {
    v16 = *((_QWORD *)this - 232);
    v56 = 0;
    v50 = 0LL;
    v54 = 0;
    v59 = 0LL;
    v17 = (char *)this + *(int *)(v16 + 12) - 1856;
    (**(void (__fastcall ***)(char *, _DWORD *))v17)(v17, v49);
    v57 = 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)this - 228) + 56LL);
    v18 = *(_QWORD *)v11;
    *(float *)&v58 = (float)v49[0];
    *((float *)&v58 + 1) = (float)v49[1];
    (*(void (__fastcall **)(COffScreenRenderTarget *, _BYTE *))(v18 + 256))(v11, v55);
    v10 = (int)(*(_DWORD *)(v7 + 96) << 18) >> 28;
    v46 = *(_DWORD *)(v7 + 96);
    ResampleMode = CVisual::GetResampleMode(v7);
    *(_BYTE *)(v7 + 96) |= 2u;
    *(_DWORD *)(v7 + 96) &= 0xFFFFC7FF;
    *(_DWORD *)(v7 + 96) |= 0x400u;
    v20 = *((_DWORD *)this - 444);
    v48 = ResampleMode;
    CVisual::SetResampleMode(v7, v20);
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v53, (const struct CMILMatrix *)v55) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v53, (__int64)&v57, (float *)&v59);
      if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)v53) )
      {
        v21 = (__int64 *)*((_QWORD *)this - 228);
        v22 = *v21;
        v58 = &v59;
        v57 = 1LL;
        if ( (*(int (__fastcall **)(__int64 *, __int64 *, char *))(v22 + 216))(v21, &v57, (char *)this - 1744) >= 0 )
          v50 = (COffScreenRenderTarget *)((char *)this - 1744);
      }
    }
    else
    {
      v59 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    v23 = 0LL;
    if ( !*((_DWORD *)this - 32) )
    {
LABEL_27:
      v9 = v46;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v25 = *(_QWORD *)v11;
      v51 = *(_QWORD *)(*((_QWORD *)this - 19) + 8 * v23);
      v24 = v51;
      (*(void (__fastcall **)(COffScreenRenderTarget *, _QWORD))(v25 + 288))(v11, (unsigned int)v23);
      v26 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 64LL))(v24);
      v27 = CDrawingContext::BeginFrame(v47, v26, (const struct CMILMatrix *)v55, &v52, 0LL);
      v6 = v27;
      if ( v27 < 0 )
        break;
      v29 = *((_QWORD *)this - 224);
      v57 = (__int64)&v47;
      LOBYTE(v58) = 1;
      if ( v29 )
      {
        v30 = CDrawingContext::PushColorTransformLayer(v47);
        v6 = v30;
        if ( v30 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x144u, 0LL);
LABEL_25:
          gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___((__int64)&v57);
          goto LABEL_40;
        }
        v45 = 1;
      }
      ++dword_180344268;
      v32 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v11 + 232LL))(v11);
      v33 = *((_QWORD *)this - 228);
      v61 = 0;
      v62 = 0;
      v60 = v59;
      v34 = CDrawingContext::DrawVisualTree(v47, v33, (__int64)&v60, v50, v32, 0);
      v6 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x14Eu, 0LL);
        goto LABEL_25;
      }
      v36 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *, CDrawingContext *))(*(_QWORD *)v11 + 296LL))(v11, v47);
      v6 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x151u, 0LL);
        goto LABEL_25;
      }
      if ( v45 )
      {
        v45 = 0;
        v38 = CDrawingContext::PopLayerInternal((__int64)v47);
        v6 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x156u, 0LL);
          gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___((__int64)&v57);
          goto LABEL_27;
        }
      }
      v40 = !g_LockAndReadOffscreenTarget;
      *((_BYTE *)this - 155) = *((_BYTE *)v47 + 5950);
      if ( !v40 )
      {
        v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v51 + 64LL))(v51, 0LL);
        v42 = *(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 24LL))(v42);
      }
      gsl::final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___::_final_action__lambda_4dee9d74ed0de40ddb59185f1172ad6c___((__int64)&v57);
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= *((_DWORD *)this - 32) )
        goto LABEL_40;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x13Bu, 0LL);
LABEL_40:
    v9 = v46;
LABEL_43:
    if ( v45 )
      CDrawingContext::PopLayerInternal((__int64)v47);
LABEL_28:
    if ( v7 )
    {
      v43 = v48;
      *(_BYTE *)(v7 + 96) = v9;
      *(_DWORD *)(v7 + 96) &= 0xFFFFC3FF;
      *(_DWORD *)(v7 + 96) |= (v10 & 0xF) << 10;
      CVisual::SetResampleMode(v7, v43);
    }
    if ( !v8 )
      goto LABEL_33;
  }
  *(_BYTE *)(*((_QWORD *)this - 239) + 1129LL) = 0;
LABEL_32:
  (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v11 + 312LL))(v11);
LABEL_33:
  if ( (v6 & 0x80000000) == 0 )
    COffScreenRenderTarget::SetNeedsFlush(v11);
  CComposition::RestoreCursors(*((CComposition **)this - 239));
  return v6;
}
