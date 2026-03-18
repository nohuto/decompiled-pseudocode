/*
 * XREFs of ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x18007FDB0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18004FCDC (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18006B530 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18009BD18 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7D48 (-Render@COffScreenRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E939C (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E9CB4 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x180186334 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018A400 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018C3DC (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802551F4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18004BB94 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18004BD60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004E130 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x1800816A8 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800854AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180085A80 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B1FB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800B3A10 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EE947 (ceilf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175BD8 (-DrawRectangleOverlay@CDrawingContext@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     McTemplateU0xqdddd_EventWriteTransfer @ 0x18023E6B8 (McTemplateU0xqdddd_EventWriteTransfer.c)
 */

__int64 __fastcall CDrawingContext::DrawVisualTree(
        CDrawingContext *this,
        __int64 a2,
        __int64 a3,
        COcclusionContext *a4,
        int a5,
        char a6)
{
  __int128 v6; // xmm13
  int v7; // esi
  char v8; // r13
  __int64 v9; // xmm14_8
  char v10; // r12
  char v11; // r14
  COcclusionContext *v12; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128 v17; // xmm6
  __m128 v18; // xmm7
  __m128 v19; // xmm8
  __m128 v20; // xmm9
  void (__fastcall ***v21)(_QWORD, int *); // rcx
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  float v33; // xmm9_4
  float v34; // xmm6_4
  float v35; // xmm8_4
  float v36; // xmm7_4
  __int64 v37; // rcx
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm9_4
  float v41; // xmm8_4
  __int64 v42; // r14
  __int64 v43; // rdi
  int v44; // edx
  int v45; // ecx
  int v46; // r9d
  __int64 v47; // r10
  __int64 v48; // rdx
  float *v49; // rdx
  int v50; // ecx
  unsigned int v51; // eax
  int v52; // eax
  __int64 v53; // rcx
  bool v54; // zf
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  __int64 result; // rax
  int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rcx
  __m128 v65; // xmm2
  __m128 v66; // rt1
  __m128 v67; // xmm1
  __m128 v68; // xmm2
  __m128 v69; // rt1
  __m128 v70; // xmm1
  __m128 v71; // xmm2
  __m128 v72; // rt1
  __m128 v73; // xmm0
  __m128 v74; // xmm2
  __m128 v75; // rt1
  __m128 v76; // xmm0
  int v77; // eax
  __int64 v78; // rcx
  float v79; // [rsp+48h] [rbp-C0h]
  float v80; // [rsp+48h] [rbp-C0h]
  float v81; // [rsp+48h] [rbp-C0h]
  float v82; // [rsp+48h] [rbp-C0h]
  int v83; // [rsp+50h] [rbp-B8h] BYREF
  int v84; // [rsp+54h] [rbp-B4h]
  __int64 v85; // [rsp+58h] [rbp-B0h]
  _BYTE v86[36]; // [rsp+60h] [rbp-A8h] BYREF
  int v87; // [rsp+84h] [rbp-84h]

  v6 = *((_OWORD *)this + 370);
  v7 = 0;
  v8 = 0;
  v9 = *((_QWORD *)this + 742);
  v10 = 0;
  v11 = 0;
  v85 = a3;
  v12 = a4;
  if ( a4 )
  {
    v15 = 0LL;
    if ( g_pComposition )
      v15 = *((_QWORD *)g_pComposition + 44);
    if ( *((_QWORD *)a4 + 2) == v15 )
      COcclusionContext::SetDeviceTransform(a4, (CDrawingContext *)((char *)this + 96));
    else
      v12 = 0LL;
  }
  v16 = v85;
  *((_BYTE *)this + 5922) = a6;
  *(_OWORD *)v86 = 0LL;
  *((_WORD *)this + 2960) = 1;
  *((_QWORD *)this + 741) = a2;
  *((_QWORD *)this + 742) = v12;
  *(_QWORD *)&v86[16] = 0LL;
  CMILMatrix::Transform3DBoundsHelper<0>((char *)this + 96, v16, v86);
  v17 = (__m128)*(unsigned int *)v86;
  v18 = (__m128)*(unsigned int *)&v86[4];
  v19.m128_i32[0] = *(_DWORD *)&v86[8];
  v20.m128_i32[0] = *(_DWORD *)&v86[12];
  v21 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 4)
                                             + 8LL
                                             + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  (**v21)(v21, &v83);
  if ( v17.m128_f32[0] < 0.0 )
    v17 = 0LL;
  v22 = v18.m128_f32[0];
  if ( v18.m128_f32[0] < 0.0 )
  {
    v18 = 0LL;
    v22 = 0.0;
  }
  v23 = v19.m128_f32[0];
  if ( v19.m128_f32[0] > (float)v83 )
  {
    v19.m128_f32[0] = (float)v83;
    v23 = (float)v83;
  }
  v24 = v20.m128_f32[0];
  if ( v20.m128_f32[0] > (float)v84 )
  {
    v20.m128_f32[0] = (float)v84;
    v24 = (float)v84;
  }
  if ( v23 <= v17.m128_f32[0] || v24 <= v22 )
  {
    v20.m128_i32[0] = 0;
    v19.m128_i32[0] = 0;
    v18 = 0LL;
    v17 = 0LL;
  }
  if ( (v17.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v65 = 0LL;
    v65.m128_f32[0] = (float)(int)v17.m128_f32[0] - v17.m128_f32[0];
    v66.m128_f32[0] = FLOAT_N0_5;
    v25 = (int)v17.m128_f32[0] - _mm_cmple_ss(v65, v66).m128_u32[0];
  }
  else
  {
    v79 = v17.m128_f32[0] + 6291456.25;
    v25 = (int)(LODWORD(v79) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v17.m128_f32[0] - (float)v25) & _xmm) > 0.00390625 )
  {
    v67.m128_f32[0] = (float)(int)v17.m128_f32[0];
    v25 = (int)v17.m128_f32[0] + _mm_cmplt_ss(v17, v67).m128_u32[0];
  }
  if ( (v18.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v68 = 0LL;
    v68.m128_f32[0] = (float)(int)v18.m128_f32[0] - v18.m128_f32[0];
    v69.m128_f32[0] = FLOAT_N0_5;
    v26 = (int)v18.m128_f32[0] - _mm_cmple_ss(v68, v69).m128_u32[0];
  }
  else
  {
    v80 = v18.m128_f32[0] + 6291456.25;
    v26 = (int)(LODWORD(v80) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v18.m128_f32[0] - (float)v26) & _xmm) > 0.00390625 )
  {
    v70.m128_f32[0] = (float)(int)v18.m128_f32[0];
    v26 = (int)v18.m128_f32[0] + _mm_cmplt_ss(v18, v70).m128_u32[0];
  }
  if ( (v19.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v71 = 0LL;
    v71.m128_f32[0] = (float)(int)v19.m128_f32[0] - v19.m128_f32[0];
    v72.m128_f32[0] = FLOAT_N0_5;
    v27 = (int)v19.m128_f32[0] - _mm_cmple_ss(v71, v72).m128_u32[0];
  }
  else
  {
    v81 = v19.m128_f32[0] + 6291456.25;
    v27 = (int)(LODWORD(v81) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v19.m128_f32[0] - (float)v27) & _xmm) > 0.00390625 )
  {
    v73 = 0LL;
    v73.m128_f32[0] = (float)(int)v19.m128_f32[0];
    v27 = (int)v19.m128_f32[0] - _mm_cmplt_ss(v73, v19).m128_u32[0];
  }
  if ( (v20.m128_i32[0] & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v74 = 0LL;
    v74.m128_f32[0] = (float)(int)v20.m128_f32[0] - v20.m128_f32[0];
    v75.m128_f32[0] = FLOAT_N0_5;
    v28 = (int)v20.m128_f32[0] - _mm_cmple_ss(v74, v75).m128_u32[0];
  }
  else
  {
    v82 = v20.m128_f32[0] + 6291456.25;
    v28 = (int)(LODWORD(v82) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v20.m128_f32[0] - (float)v28) & _xmm) > 0.00390625 )
  {
    v76 = 0LL;
    v76.m128_f32[0] = (float)(int)v20.m128_f32[0];
    v28 = (int)v20.m128_f32[0] - _mm_cmplt_ss(v76, v20).m128_u32[0];
  }
  *(float *)v86 = (float)v25;
  *(float *)&v86[4] = (float)v26;
  *(float *)&v86[8] = (float)v27;
  *(float *)&v86[12] = (float)v28;
  if ( (float)v27 > (float)v25 && (float)v28 > (float)v26 )
  {
    v29 = CDrawingContext::PushTransformInternal(this, 0LL, (CDrawingContext *)((char *)this + 96), 1, 1);
    v7 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1296u, 0LL);
    }
    else
    {
      v8 = 1;
      v31 = CDrawingContext::PushGpuClipRectInternal((_DWORD)this, 0, (unsigned int)v86, 1, 0);
      v7 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1299u, 0LL);
      }
      else
      {
        v10 = 1;
        if ( a5 == 1 )
        {
          v33 = *(float *)&v86[8];
          v34 = *(float *)v86;
          if ( *(float *)&v86[8] > *(float *)v86 )
          {
            v35 = *(float *)&v86[12];
            v36 = *(float *)&v86[4];
            if ( *(float *)&v86[12] > *(float *)&v86[4] )
            {
              v37 = *((_QWORD *)this + 742);
              if ( v37 )
              {
                if ( (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v37 + 408, v86, 0x7FFFFFFFLL) )
                {
                  v38 = v34 - 0.5;
                  if ( v38 < -2147483600.0 )
                  {
                    *(_DWORD *)v86 = 0x80000000;
                  }
                  else if ( v38 >= 2147483600.0 )
                  {
                    *(_DWORD *)v86 = 0x7FFFFFFF;
                  }
                  else
                  {
                    *(_DWORD *)v86 = (int)ceilf_0(v38);
                  }
                  v39 = v36 - 0.5;
                  if ( v39 < -2147483600.0 )
                  {
                    *(_DWORD *)&v86[4] = 0x80000000;
                  }
                  else if ( v39 >= 2147483600.0 )
                  {
                    *(_DWORD *)&v86[4] = 0x7FFFFFFF;
                  }
                  else
                  {
                    *(_DWORD *)&v86[4] = (int)ceilf_0(v39);
                  }
                  v40 = v33 - 0.5;
                  if ( v40 < -2147483600.0 )
                  {
                    *(_DWORD *)&v86[8] = 0x80000000;
                  }
                  else if ( v40 >= 2147483600.0 )
                  {
                    *(_DWORD *)&v86[8] = 0x7FFFFFFF;
                  }
                  else
                  {
                    *(_DWORD *)&v86[8] = (int)ceilf_0(v40);
                  }
                  v41 = v35 - 0.5;
                  if ( v41 < -2147483600.0 )
                  {
                    *(_DWORD *)&v86[12] = 0x80000000;
                  }
                  else if ( v41 >= 2147483600.0 )
                  {
                    *(_DWORD *)&v86[12] = 0x7FFFFFFF;
                  }
                  else
                  {
                    *(_DWORD *)&v86[12] = (int)ceilf_0(v41);
                  }
                  v42 = *((_QWORD *)this + 5);
                  v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4));
                  if ( v43 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**(_QWORD **)(v42 + 600) + 1064LL))(
                      *(_QWORD *)(v42 + 600),
                      v43,
                      v86,
                      1LL);
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                      McTemplateU0xqdddd_EventWriteTransfer(v45, v44, v43, v46, v86[0], v86[4], v86[8], v86[12]);
                  }
                  v11 = 0;
                }
              }
            }
          }
        }
        else if ( a5 == 2 )
        {
          v61 = CDrawingContext::Clear((CDrawingContext *)((char *)this + 16), (const struct _D3DCOLORVALUE *)this + 5);
          v7 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x12A3u, 0LL);
            goto LABEL_67;
          }
        }
        v47 = *((_QWORD *)this + 741);
        v48 = *(_QWORD *)(v47 + 56);
        if ( v48 == *(_QWORD *)(a2 + 56) )
          v49 = (float *)(a2 + 64);
        else
          v49 = (float *)(v48 + 140);
        v50 = (v49[5] <= v49[4]) + 1;
        if ( v49[2] > *v49 )
          v50 = v49[5] <= v49[4];
        v51 = v50 + 1;
        if ( v49[3] > v49[1] )
          v51 = v50;
        if ( v51 <= 1 )
        {
          *((_DWORD *)this + 1486) = 0;
          if ( a6 )
          {
            *(_DWORD *)v86 = 3;
            memset(&v86[4], 0, 32);
            *(_DWORD *)&v86[4] = 6;
            *(_DWORD *)&v86[16] = 1;
            v87 = 0;
            v63 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)v86, 1);
            v7 = v63;
            if ( v63 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x12BDu, 0LL);
              goto LABEL_67;
            }
            v47 = *((_QWORD *)this + 741);
            v11 = 1;
          }
          *((_BYTE *)this + 5921) = 1;
          *((_QWORD *)this + 420) = v47;
          v52 = CVisualTreeIterator::WalkSubtree<CDrawingContext>((char *)this + 3296, *(_QWORD *)(v47 + 56), this, 3LL);
          v7 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x12C6u, 0LL);
          }
          else
          {
            v54 = !g_ShowDirtyRegions;
            *((_BYTE *)this + 5921) = 0;
            if ( !v54 )
            {
              v77 = CDrawingContext::DrawRectangleOverlay(this, v85);
              v7 = v77;
              if ( v77 >= 0 )
              {
LABEL_68:
                if ( v11 )
                  CDrawingContext::PopRenderOptionsInternal(this, 1);
                if ( v10 )
                {
                  v55 = *((_DWORD *)this + 800);
                  if ( v55 )
                    *((_DWORD *)this + 800) = v55 - 1;
                  v56 = 84LL * (unsigned int)(*((_DWORD *)this + 240) - 1);
                  --*(_DWORD *)(v56 + *((_QWORD *)this + 117));
                  *((_BYTE *)this + 5954) = 1;
                }
                if ( v8 )
                {
                  v57 = *((_DWORD *)this + 94);
                  if ( v57 )
                    *((_DWORD *)this + 94) = v57 - 1;
                  v58 = *((_DWORD *)this + 102);
                  if ( v58 )
                    *((_DWORD *)this + 102) = v58 - 1;
                  v59 = *((_DWORD *)this + 110);
                  if ( v59 )
                    *((_DWORD *)this + 110) = v59 - 1;
                  *((_BYTE *)this + 5953) = 1;
                }
                goto LABEL_82;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x12CDu, 0LL);
            }
          }
        }
      }
    }
LABEL_67:
    if ( v7 < 0 )
      goto LABEL_82;
    goto LABEL_68;
  }
LABEL_82:
  *((_OWORD *)this + 370) = v6;
  result = (unsigned int)v7;
  *((_QWORD *)this + 742) = v9;
  return result;
}
