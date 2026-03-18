/*
 * XREFs of ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180046890
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180046F8C (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?EnsureVisualTree@CCachedVisualImage@@IEAAJXZ @ 0x180035904 (-EnsureVisualTree@CCachedVisualImage@@IEAAJXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAPEAV1@@Z @ 0x1800369A8 (-Create@CDrawingContext@@SAJPEAPEAV1@@Z.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180037E78 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18003BFE0 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x180060FC0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18006622C (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180072960 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007B624 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800803F8 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A3C64 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AAC20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x1800C56C4 (-CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800D339C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?CalcOcclusion@CCachedVisualImage@@IEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800D3638 (-CalcOcclusion@CCachedVisualImage@@IEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ @ 0x1800D706C (-GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179A7C (-PushLinearInterpolationLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 *     McTemplateU0ppffffdd_EventWriteTransfer @ 0x1801AD59C (McTemplateU0ppffffdd_EventWriteTransfer.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::Update(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  __int64 v5; // rcx
  CDrawingContext *v6; // rbx
  unsigned int v9; // esi
  char v10; // r15
  __int64 v11; // rax
  float *v12; // r12
  struct IDeviceTarget *v13; // rdi
  __int64 v14; // r13
  float v15; // xmm6_4
  bool v16; // zf
  int v18; // eax
  __int64 v19; // rcx
  struct IDeviceTarget *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // r8d
  __int128 *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  char v29; // r13
  CCachedVisualImage *v30; // rcx
  char v31; // si
  char v32; // r12
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  bool v36; // al
  __int128 v37; // xmm0
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  float v41; // xmm1_4
  float v42; // xmm0_4
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  char *v53; // rcx
  int v54; // [rsp+20h] [rbp-E0h]
  unsigned int v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  CDrawingContext *v58; // [rsp+60h] [rbp-A0h] BYREF
  int v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+6Ch] [rbp-94h]
  struct IDeviceTarget *v61[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v62; // [rsp+80h] [rbp-80h] BYREF
  __int128 v63; // [rsp+90h] [rbp-70h]
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  int v66; // [rsp+C0h] [rbp-40h]
  __int128 v67; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  int v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h] BYREF
  __int128 v73; // [rsp+130h] [rbp+30h] BYREF
  int v74; // [rsp+140h] [rbp+40h]
  int v75; // [rsp+144h] [rbp+44h]

  v57 = a4;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  v58 = 0LL;
  v56 = 0;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    v61,
    v11);
  v12 = (float *)(a1 + 16);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a1 + 16, a2) )
  {
    v37 = *a2;
    *(_BYTE *)(a1 + 36) = 1;
    *(_OWORD *)v12 = v37;
  }
  if ( *(_DWORD *)(a1 + 32) != a3 )
  {
    *(_DWORD *)(a1 + 32) = a3;
    *(_BYTE *)(a1 + 36) = 1;
  }
  v13 = v61[0];
  v14 = v57;
  v15 = *(float *)(v57 + 16);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      *(float *)((**(__int64 (__fastcall ***)(struct IDeviceTarget *, __int128 *))v61[0])(v61[0], &v73)
                               + 16)
                    - v15) & _xmm) > 0.0000011920929 )
  {
    (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v13 + 40LL))(v13);
    *(_BYTE *)(a1 + 36) = 1;
  }
  if ( *((_BYTE *)g_pComposition + 1129) )
  {
    v38 = *(_QWORD *)(a1 + 8) + 8LL + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 16LL);
    v16 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 24LL))(v38) == 0;
  }
  else
  {
    v16 = *(_BYTE *)(a1 + 37) == 0;
  }
  if ( !v16 )
    *(_BYTE *)(a1 + 36) = 1;
  if ( *(_BYTE *)(a1 + 36) )
  {
    v18 = CCachedVisualImage::EnsureVisualTree(*(CCachedVisualImage **)a1);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v20 = (struct IDeviceTarget *)((char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8);
      (**(void (__fastcall ***)(struct IDeviceTarget *, __int64 *))v20)(v20, &v57);
      *(_QWORD *)&v73 = 0LL;
      *((float *)&v73 + 2) = (float)(int)v57;
      *((float *)&v73 + 3) = (float)SHIDWORD(v57);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      {
        v41 = *(float *)(a1 + 28) - *(float *)(a1 + 20);
        v42 = *(float *)(a1 + 24) - *v12;
        McTemplateU0ppffffdd_EventWriteTransfer(
          v57,
          HIDWORD(v57),
          *(_QWORD *)a1,
          *(_QWORD *)(*(_QWORD *)a1 + 136LL),
          *(_DWORD *)v12,
          *(_DWORD *)(a1 + 20),
          SLOBYTE(v42),
          SLOBYTE(v41),
          v57,
          SBYTE4(v57));
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 176LL) + 208LL))(*(_QWORD *)(*(_QWORD *)a1 + 176LL));
      v9 = v21;
      if ( v21 < 0 )
      {
        v55 = 1031;
      }
      else
      {
        v24 = *(_DWORD *)(a1 + 32);
        v71 = 0;
        CCachedVisualImage::CalculateViewboxToViewportMapping((unsigned int)&v73, a1 + 16, v24, v23, v54, (__int64)&v67);
        v25 = *(__int128 **)(*(_QWORD *)a1 + 160LL);
        if ( v25 )
        {
          v43 = v25[1];
          v62 = *v25;
          v44 = v25[2];
          v63 = v43;
          v45 = v25[3];
          v46 = *((_DWORD *)v25 + 16);
          v64 = v44;
          v66 = v46;
          v65 = v45;
          CMILMatrix::Multiply((CMILMatrix *)&v62, (const struct CMILMatrix *)&v67);
          v71 = v66;
          v67 = v62;
          v68 = v63;
          v69 = v64;
          v70 = v65;
        }
        v66 = 0;
        if ( !CMILMatrix::SetToInverse((CMILMatrix *)&v62, (const struct CMILMatrix *)&v67) )
        {
          v9 = -2003304441;
          MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2003304441, 0x41Eu, 0LL);
          goto LABEL_12;
        }
        v72 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v62);
        (*(void (__fastcall **)(struct IDeviceTarget *, _QWORD))(*(_QWORD *)v13 + 32LL))(
          v13,
          *(unsigned int *)(v14 + 8));
        v27 = CDrawingContext::Create(&v58);
        v9 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x42Bu, 0LL);
          v6 = v58;
          goto LABEL_12;
        }
        v6 = v58;
        v21 = CDrawingContext::BeginFrame(v58, v13, (const struct CMILMatrix *)&v67, 0LL, 0LL);
        v9 = v21;
        if ( v21 >= 0 )
        {
          ++dword_180345278;
          ++dword_18034533C;
          v29 = 1;
          if ( (float)(*(float *)(a1 + 24) - *v12) > (float)(int)v57
            || (float)(*(float *)(a1 + 28) - *(float *)(a1 + 20)) > (float)SHIDWORD(v57) )
          {
            LODWORD(v63) = 1;
            *(_QWORD *)&v62 = 0x600000003LL;
            v39 = CDrawingContext::PushRenderOptionsInternal(v6, 0LL, (const struct MilRenderOptions *)&v62, 1);
            v9 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x446u, 0LL);
              goto LABEL_44;
            }
            v10 = 1;
          }
          v30 = *(CCachedVisualImage **)a1;
          v31 = v10;
          if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 136LL) + 88LL) & 0x400) != 0
            && (*(float *)&v67 < 0.40000001 || *((float *)&v68 + 1) < 0.40000001) )
          {
            v58 = 0LL;
            v59 = PixelAlign(v30, 1LL);
            v60 = PixelAlign(v48, v47);
            v49 = CDrawingContext::PushLinearInterpolationLayer(v6);
            v9 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x45Du, 0LL);
              goto LABEL_41;
            }
            v30 = *(CCachedVisualImage **)a1;
            v32 = 1;
            v56 = 1;
            v31 = 0;
          }
          else
          {
            v32 = 0;
          }
          CCachedVisualImage::CalcOcclusion(v30, &v72);
          v74 = 0;
          v75 = 0;
          v73 = v72;
          v33 = CDrawingContext::DrawVisualTree(v6, 2, v31);
          v9 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x473u, 0LL);
          }
          else
          {
            if ( v32 )
            {
              v56 = 0;
              v51 = CDrawingContext::PopLayerInternal((__int64)v6);
              v9 = v51;
              if ( v51 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x478u, 0LL);
                goto LABEL_41;
              }
            }
            if ( v10 )
            {
              v10 = 0;
              CDrawingContext::PopRenderOptionsInternal(v6, 1);
            }
            if ( g_LockAndReadCVI )
            {
              v53 = (char *)v13 + *(int *)(*((_QWORD *)v13 + 1) + 16LL) + 8;
              (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v53 + 24LL))(
                v53,
                ((unsigned __int64)v6 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64));
            }
            if ( !CDrawingContext::GetFrameContainsMonitorSpecificContent(v6) )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(
                *(_QWORD *)(a1 + 8),
                DisplayId::None);
            LOBYTE(v35) = *((_BYTE *)v6 + 5948);
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8), v35);
            v36 = *((_BYTE *)g_pComposition + 1129) && *((_BYTE *)v6 + 5951);
            *(_BYTE *)(a1 + 37) = v36;
            *(_BYTE *)(a1 + 36) = 0;
          }
LABEL_39:
          if ( v56 )
            CDrawingContext::PopLayerInternal((__int64)v6);
LABEL_41:
          if ( v10 )
            CDrawingContext::PopRenderOptionsInternal(v6, 1);
          if ( !v29 )
            goto LABEL_12;
LABEL_44:
          CDrawingContext::EndFrame(v6);
          goto LABEL_12;
        }
        v55 = 1070;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, v55, 0LL);
      goto LABEL_12;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x3F2u, 0LL);
    v29 = 0;
    goto LABEL_39;
  }
LABEL_12:
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v61);
  if ( v6 )
    CRenderTargetBitmap::Release(v6);
  return v9;
}
