/*
 * XREFs of ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E885C (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018ED90 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180258AB4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18006DA94 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A8EE0 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x1800DC3D0 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180187B34 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180187C44 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18018D268 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

float *__fastcall CDirtyRegion::GetUnOccludedDirtyRect(
        _BYTE *a1,
        float *a2,
        int a3,
        float *a4,
        char a5,
        _QWORD *a6,
        __int64 a7)
{
  float *v7; // rdi
  float *v8; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  float v13; // xmm15_4
  _QWORD *v14; // rdx
  struct _LIST_ENTRY *v15; // rsi
  _QWORD *v16; // r14
  CVisual *v17; // rdi
  struct _LIST_ENTRY *v18; // rdi
  _DWORD *Flink; // rcx
  signed int v20; // r12d
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __m128 v23; // xmm6
  float v24; // xmm7_4
  float v25; // xmm9_4
  float v26; // xmm8_4
  bool v27; // zf
  __int64 v28; // rdi
  __m128 *v29; // rdx
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v36; // xmm13_4
  float v37; // xmm12_4
  float v38; // xmm11_4
  float v39; // xmm10_4
  int v40; // r10d
  int v41; // r14d
  __int64 v42; // r8
  float v43; // xmm14_4
  __int64 v44; // r11
  int v45; // esi
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rcx
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm2_4
  float v53; // xmm1_4
  bool v54; // cc
  __int64 v55; // rsi
  _BYTE *v56; // rdi
  __int64 v57; // r8
  int v58; // edx
  float *v59; // rcx
  unsigned int v60; // r8d
  char v61; // r11
  float v62; // xmm3_4
  float v63; // xmm4_4
  float v64; // xmm1_4
  float v65; // xmm5_4
  float v66; // xmm2_4
  float v67; // xmm0_4
  float v68; // xmm1_4
  char DoesIntersectUnsafe; // al
  unsigned int v70; // r10d
  int v71; // r9d
  int v72; // r8d
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int64 v75; // rax
  _QWORD *v77; // [rsp+48h] [rbp-C0h]
  _QWORD *v78; // [rsp+50h] [rbp-B8h]
  float *v79; // [rsp+58h] [rbp-B0h]
  __int128 v80; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v81; // [rsp+70h] [rbp-98h] BYREF
  __m128 v82; // [rsp+80h] [rbp-88h] BYREF
  __int128 v83; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v84[64]; // [rsp+A8h] [rbp-60h] BYREF

  *a2 = 0.0;
  v7 = a4;
  a2[1] = 0.0;
  v8 = a2;
  a2[2] = 0.0;
  a2[3] = 0.0;
  v10 = a7;
  v79 = a4;
  if ( a1[4456] )
  {
    *(_OWORD *)a2 = *(_OWORD *)a4;
    return v8;
  }
  if ( !a7 )
    v10 = (__int64)(a1 + 16);
  v11 = 0LL;
  if ( g_pComposition )
    v11 = *((_QWORD *)g_pComposition + 44);
  if ( *(_QWORD *)(v10 + 16) != v11 )
  {
    *(_OWORD *)a2 = *(_OWORD *)&a1[16 * a3 + 2692];
    goto LABEL_29;
  }
  v12 = *(unsigned int *)&a1[4 * a3 + 2820];
  v13 = (float)((float)(*(float *)&a1[16 * a3 + 2704] - *(float *)&a1[16 * a3 + 2696])
              * (float)(*(float *)&a1[16 * a3 + 2700] - *(float *)&a1[16 * a3 + 2692]))
      * 0.5;
  *(_OWORD *)a2 = *(_OWORD *)&a1[16 * v12 + 1728];
  v14 = *(_QWORD **)&a1[16 * v12 + 1856];
  v78 = &a1[16 * v12 + 1856];
  if ( v14 == v78 )
    goto LABEL_25;
  do
  {
    v15 = *(struct _LIST_ENTRY **)a1;
    v16 = v14;
    v17 = (CVisual *)v14[2];
    v77 = (_QWORD *)*v14;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)a1 + 200LL))(*(_QWORD *)a1) )
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v17);
      if ( TreeDataListHead )
      {
        for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
        {
          v18 = i - 18;
          if ( i[2].Flink == v15 )
            goto LABEL_10;
        }
      }
LABEL_105:
      v20 = 0;
      goto LABEL_14;
    }
    v18 = (struct _LIST_ENTRY *)((char *)v17 + 320);
LABEL_10:
    if ( !v18 )
      goto LABEL_105;
    Flink = v18[2].Flink;
    if ( !Flink )
    {
      v75 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v18[1].Blink->Flink[22].Flink)(v18[1].Blink);
      v18[2].Flink = (struct _LIST_ENTRY *)v75;
      Flink = (_DWORD *)v75;
      if ( !v75 )
        goto LABEL_105;
    }
    if ( *((_BYTE *)v16 + 40) )
      v20 = Flink[3];
    else
      v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)Flink + 24LL))(Flink);
LABEL_14:
    v21 = (_QWORD *)a6[1];
    v22 = &v21[*a6];
    if ( v21 == v22 )
    {
LABEL_15:
      v23 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 3));
      v24 = _mm_shuffle_ps(v23, v23, 170).m128_f32[0];
      v82 = v23;
      if ( v24 > v23.m128_f32[0] )
      {
        v25 = v82.m128_f32[3];
        v26 = v82.m128_f32[1];
        if ( v82.m128_f32[3] > v82.m128_f32[1] )
        {
          v27 = *(_BYTE *)(v10 + 1244) == 0;
          v81 = 0LL;
          if ( v27 )
          {
            *(_QWORD *)&v81 = __PAIR64__(v82.m128_u32[1], v23.m128_u32[0]);
            *((_QWORD *)&v81 + 1) = __PAIR64__(v82.m128_u32[3], LODWORD(v24));
          }
          else
          {
            COcclusionContext::PageInPixelsRectToDeviceRect(v10, &v82, &v81);
            v25 = v82.m128_f32[3];
            v24 = v82.m128_f32[2];
            v26 = v82.m128_f32[1];
            v23.m128_i32[0] = v82.m128_i32[0];
          }
          v28 = v10 + 408;
          if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered(v10 + 408, &v81, (unsigned int)v20) )
          {
            v80 = 0LL;
            if ( (float)((float)(v24 - v23.m128_f32[0]) * (float)(v25 - v26)) >= v13 )
            {
              v27 = *(_BYTE *)(v10 + 1244) == 0;
              v81 = 0LL;
              if ( v27 )
              {
                *(_QWORD *)&v81 = __PAIR64__(LODWORD(v26), v23.m128_u32[0]);
                v36 = v23.m128_f32[0];
                v37 = v26;
                *((_QWORD *)&v81 + 1) = __PAIR64__(LODWORD(v25), LODWORD(v24));
                v38 = v24;
                v39 = v25;
              }
              else
              {
                COcclusionContext::PageInPixelsRectToDeviceRect(v10, &v82, &v81);
                v25 = v82.m128_f32[3];
                v24 = v82.m128_f32[2];
                v26 = v82.m128_f32[1];
                v23.m128_i32[0] = v82.m128_i32[0];
                v39 = *((float *)&v81 + 3);
                v38 = *((float *)&v81 + 2);
                v37 = *((float *)&v81 + 1);
                v36 = *(float *)&v81;
              }
              v40 = *(_DWORD *)(v10 + 824);
              v41 = 0;
              v42 = 0LL;
              v43 = 0.0;
              v83 = 0LL;
              if ( v40 )
              {
                v44 = *(_QWORD *)(v10 + 800);
                do
                {
                  v45 = v41;
                  v46 = v44 + 36 * v42;
                  if ( *(_DWORD *)(v46 + 16) > v20 )
                    break;
                  DoesIntersectUnsafe = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                          v46,
                                          &v81);
                  v41 = v71;
                  v42 = (unsigned int)(v72 + 1);
                  if ( !DoesIntersectUnsafe )
                    v41 = v45;
                }
                while ( (unsigned int)v42 < v70 );
                v8 = a2;
                v28 = v10 + 408;
              }
              v47 = 0LL;
              if ( *(_DWORD *)(v28 + 24) )
              {
                v48 = *(_QWORD *)v28;
                do
                {
                  v49 = v48 + 36 * v47;
                  if ( *(_DWORD *)(v49 + 16) >= v20 )
                    break;
                  if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v49)
                    && (!v61 || *((_DWORD *)v59 + 4) > v41) )
                  {
                    v62 = v36;
                    v63 = v37;
                    v64 = v38;
                    if ( *v59 > v36 )
                      v62 = *v59;
                    v65 = v37;
                    if ( v59[1] > v37 )
                    {
                      v63 = v59[1];
                      v65 = v63;
                    }
                    v66 = v38;
                    if ( v38 > v59[2] )
                    {
                      v64 = v59[2];
                      v66 = v64;
                    }
                    v67 = v39;
                    if ( v39 > v59[3] )
                      v67 = v59[3];
                    if ( v66 > v62 && v67 > v65 )
                    {
                      v68 = (float)(v64 - v62) * (float)(v67 - v63);
                      if ( v68 > v43 )
                      {
                        v43 = v68;
                        v83 = *(_OWORD *)v59;
                      }
                    }
                  }
                  v47 = (unsigned int)(v58 + 1);
                }
                while ( (unsigned int)v47 < v60 );
                v8 = a2;
                if ( v43 > 0.0 )
                {
                  if ( *(_BYTE *)(v10 + 1244) )
                  {
                    COcclusionContext::DeviceRectToPageInPixelsRect(v10, &v83, &v80);
                    v53 = *((float *)&v80 + 3);
                    v52 = *((float *)&v80 + 2);
                    v51 = *((float *)&v80 + 1);
                    v50 = *(float *)&v80;
                  }
                  else
                  {
                    v50 = *(float *)&v83;
                    v51 = *((float *)&v83 + 1);
                    v52 = *((float *)&v83 + 2);
                    v53 = *((float *)&v83 + 3);
                    v80 = v83;
                  }
                  if ( v26 >= v51 && v53 >= v25 )
                  {
                    v54 = v23.m128_f32[0] <= v50;
                    if ( v23.m128_f32[0] < v50 )
                    {
                      if ( v52 < v24 )
                        goto LABEL_53;
LABEL_57:
                      v54 = v23.m128_f32[0] <= v50;
                    }
                    if ( !v54 )
                    {
                      LODWORD(v80) = v23.m128_i32[0];
                      v50 = v23.m128_f32[0];
                    }
                    if ( v26 > v51 )
                    {
                      *((float *)&v80 + 1) = v26;
                      v51 = v26;
                    }
                    if ( v52 > v24 )
                    {
                      *((float *)&v80 + 2) = v24;
                      v52 = v24;
                    }
                    if ( v53 > v25 )
                    {
                      *((float *)&v80 + 3) = v25;
                      v53 = v25;
                    }
                    if ( v52 <= v50 || v53 <= v51 )
                      v80 = 0uLL;
                    v55 = 4LL;
                    v56 = v84;
                    do
                    {
                      TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v56);
                      v56 += 16;
                      --v55;
                    }
                    while ( v55 );
                    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                      &v82,
                      &v80,
                      v57,
                      v84);
                    v8 = a2;
                    v29 = (__m128 *)v84;
LABEL_22:
                    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, v29);
                    goto LABEL_23;
                  }
LABEL_53:
                  if ( v23.m128_f32[0] >= v50 && v52 >= v24 && (v26 >= v51 || v53 >= v25) )
                    goto LABEL_57;
                }
              }
            }
            v29 = &v82;
            goto LABEL_22;
          }
        }
      }
    }
    else
    {
      while ( *v21 != v16[2] )
      {
        if ( ++v21 == v22 )
          goto LABEL_15;
      }
    }
LABEL_23:
    v14 = v77;
  }
  while ( v77 != v78 );
  v7 = v79;
LABEL_25:
  if ( v8[2] > *v8 && v8[3] > v8[1] && a5 )
    InflateRectF_InPlace(v8);
LABEL_29:
  if ( *v7 > *v8 )
    *v8 = *v7;
  v30 = v7[1];
  if ( v30 > v8[1] )
    v8[1] = v30;
  v31 = v7[2];
  v32 = v8[2];
  if ( v32 > v31 )
  {
    v8[2] = v31;
    v32 = v31;
  }
  v33 = v7[3];
  v34 = v8[3];
  if ( v34 > v33 )
  {
    v8[3] = v33;
    v34 = v33;
    v32 = v8[2];
  }
  if ( v32 <= *v8 || v34 <= v8[1] )
  {
    v8[3] = 0.0;
    v8[2] = 0.0;
    v8[1] = 0.0;
    *v8 = 0.0;
  }
  return v8;
}
