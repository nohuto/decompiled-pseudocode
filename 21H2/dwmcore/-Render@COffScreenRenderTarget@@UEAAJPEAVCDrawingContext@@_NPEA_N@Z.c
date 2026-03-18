/*
 * XREFs of ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C1768
 * Callers:
 *     ?Render@COffScreenRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180106ED0 (-Render@COffScreenRenderTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801070D0 (-Render@COffScreenRenderTarget@@$4PPPPPPPM@BAA@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C53B8 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C7118 (-Render@CIndirectSwapchainRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180243D50 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18003CD8C (-RestoreCursors@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800884A8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x1800D5494 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z @ 0x1800F6C4C (-SetResampleMode@CVisual@@QEAAXW4Enum@CompositionResampleMode@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x1801B2BB4 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@@Z @ 0x1801B3380 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ @ 0x1801C1CB8 (-SetNeedsFlush@COffScreenRenderTarget@@IEBAXXZ.c)
 */

__int64 __fastcall COffScreenRenderTarget::Render(
        LARGE_INTEGER *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  struct _D3DCOLORVALUE v4; // xmm0
  COffScreenRenderTarget *v5; // r14
  LARGE_INTEGER v7; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  LARGE_INTEGER v12; // rax
  char *v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rax
  int v16; // r12d
  int ResampleMode; // eax
  __int64 v18; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *QuadPart; // rcx
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rax
  struct IDeviceTarget *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  struct CVisualTree *v37; // rdx
  int v38; // eax
  int v39; // eax
  bool v40; // zf
  __int64 v41; // rax
  __int64 v42; // rcx
  char *v43; // rdx
  char v45; // [rsp+40h] [rbp-C0h]
  char v46; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+48h] [rbp-B8h]
  _DWORD v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  COcclusionContext *v49; // [rsp+58h] [rbp-A8h]
  struct _D3DCOLORVALUE v50; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v51[4]; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+C0h] [rbp-40h]
  _OWORD v53[4]; // [rsp+D0h] [rbp-30h] BYREF
  int v54; // [rsp+110h] [rbp+10h]
  __int128 v55; // [rsp+120h] [rbp+20h] BYREF
  __int64 v56; // [rsp+130h] [rbp+30h] BYREF
  __int128 *v57; // [rsp+138h] [rbp+38h]
  __int128 v58; // [rsp+140h] [rbp+40h] BYREF
  int v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+154h] [rbp+54h]

  *(struct _D3DCOLORVALUE *)&v4.r = *(struct _D3DCOLORVALUE *)((char *)&this[-224].QuadPart + 4);
  v5 = (COffScreenRenderTarget *)&this[-239];
  *a4 = 0;
  v7 = this[-239];
  *(struct _D3DCOLORVALUE *)&v50.r = *(struct _D3DCOLORVALUE *)&v4.r;
  v9 = 0;
  v45 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(LARGE_INTEGER *))(v7.QuadPart + 264))(this - 239) )
  {
    v10 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 280LL))(v5);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x10Eu);
LABEL_37:
      CComposition::RestoreCursors((CComposition *)this[-237].QuadPart);
      return (unsigned int)v9;
    }
    if ( this[-16].LowPart )
    {
      QueryPerformanceCounter(this - 218);
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 296LL))(v5);
      *(_BYTE *)(this[-237].QuadPart + 1274) = 1;
      if ( this[-227].QuadPart )
      {
        v12 = this[-229];
        v54 = 0;
        v55 = 0LL;
        v49 = 0LL;
        v13 = (char *)&this[-229] + *(int *)(v12.QuadPart + 12);
        (**(void (__fastcall ***)(char *, _DWORD *))v13)(v13, v48);
        v56 = 0LL;
        v14 = *(_QWORD *)(this[-227].QuadPart + 64);
        v15 = *(_QWORD *)v5;
        *((float *)&v57 + 1) = (float)v48[1];
        *(float *)&v57 = (float)v48[0];
        (*(void (__fastcall **)(COffScreenRenderTarget *, _OWORD *))(v15 + 248))(v5, v53);
        v16 = (int)(*(_DWORD *)(v14 + 104) << 18) >> 28;
        v46 = *(_DWORD *)(v14 + 104);
        ResampleMode = CVisual::GetResampleMode(v14);
        *(_BYTE *)(v14 + 104) |= 2u;
        *(_DWORD *)(v14 + 104) &= 0xFFFFC7FF;
        *(_DWORD *)(v14 + 104) |= 0x400u;
        v47 = ResampleMode;
        CVisual::SetResampleMode(v14, this[-219].LowPart);
        v51[0] = v53[0];
        v51[1] = v53[1];
        v51[2] = v53[2];
        v51[3] = v53[3];
        v52 = v54;
        if ( CMILMatrix::Invert((CMILMatrix *)v51, v18, v19) )
        {
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v51, (__int64)&v56, (float *)&v55, v20);
          if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)v51, v21, v22, v23) )
          {
            QuadPart = (__int64 *)this[-227].QuadPart;
            v25 = *QuadPart;
            v56 = 1LL;
            v57 = &v55;
            if ( (*(int (__fastcall **)(__int64 *, __int64 *, LARGE_INTEGER *))(v25 + 192))(QuadPart, &v56, this - 214) >= 0 )
              v49 = (COcclusionContext *)&this[-214];
          }
        }
        else
        {
          v55 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        v26 = 0LL;
        if ( this[-16].LowPart )
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)v5;
            v56 = *(_QWORD *)(this[-19].QuadPart + 8 * v26);
            v27 = v56;
            (*(void (__fastcall **)(COffScreenRenderTarget *, _QWORD))(v28 + 288))(v5, (unsigned int)v26);
            v29 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 64LL))(v27);
            v30 = CDrawingContext::BeginFrame(a2, v29, (const struct CMILMatrix *)v53, &v50, 0LL);
            v9 = v30;
            if ( v30 < 0 )
              break;
            v33 = this[-221].QuadPart;
            if ( v33 )
            {
              v34 = CDrawingContext::PushColorTransformLayer(a2, v31, v33);
              v9 = v34;
              if ( v34 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0x16Bu);
LABEL_26:
                CDrawingContext::EndFrame((CD3DDevice **)a2);
                goto LABEL_30;
              }
              v45 = 1;
            }
            ++dword_1803D3148;
            v36 = (*(__int64 (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 232LL))(v5);
            v37 = (struct CVisualTree *)this[-227].QuadPart;
            v59 = 0;
            v60 = 0;
            v58 = v55;
            v38 = CDrawingContext::DrawVisualTree(a2, v37, (__int64)&v58, v49, v36, 0, 0LL);
            v9 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v38, 0x175u);
              goto LABEL_26;
            }
            if ( v45 )
            {
              v45 = 0;
              v39 = CDrawingContext::PopLayerInternal((__int64)a2);
              v9 = v39;
              if ( v39 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, v39, 0x17Au);
                CDrawingContext::EndFrame((CD3DDevice **)a2);
                goto LABEL_32;
              }
            }
            v40 = !g_LockAndReadOffscreenTarget;
            BYTE5(this[-20].QuadPart) = *((_BYTE *)a2 + 7966);
            if ( !v40 )
            {
              v41 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v56 + 64LL))(v56);
              if ( a2 )
                v43 = (char *)a2 + 24;
              else
                v43 = 0LL;
              v42 = *(int *)(*(_QWORD *)(v41 + 8) + 16LL) + v41 + 8;
              (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 24LL))(v42, v43);
            }
            CDrawingContext::EndFrame((CD3DDevice **)a2);
            v26 = (unsigned int)(v26 + 1);
            if ( (unsigned int)v26 >= this[-16].LowPart )
              goto LABEL_30;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v30, 0x162u);
LABEL_30:
          if ( v45 )
            CDrawingContext::PopLayerInternal((__int64)a2);
        }
LABEL_32:
        if ( v14 )
        {
          *(_BYTE *)(v14 + 104) = v46;
          *(_DWORD *)(v14 + 104) &= 0xFFFFC3FF;
          *(_DWORD *)(v14 + 104) |= (v16 & 0xF) << 10;
          CVisual::SetResampleMode(v14, v47);
        }
      }
      *(_BYTE *)(this[-237].QuadPart + 1274) = 0;
      (*(void (__fastcall **)(COffScreenRenderTarget *))(*(_QWORD *)v5 + 304LL))(v5);
      if ( v9 >= 0 )
        COffScreenRenderTarget::SetNeedsFlush(v5);
      goto LABEL_37;
    }
  }
  return (unsigned int)v9;
}
