/*
 * XREFs of ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x1800B8558
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1800B8DF8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800FE630 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyRegion@@PEAW4ProtectionMode@1@@Z @ 0x1801C3404 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCDirtyR.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801C93C0 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E1378 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x18029A220 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?AddToTightDirtyRegion@@YAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBVCMILMatrix@@PEAVCRegion@@@Z @ 0x18003F9A8 (-AddToTightDirtyRegion@@YAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180082054 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x1800857DC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800892B0 (-CalcSubtractionRectangles@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18008ED70 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18009A3CC (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AgeOutOcclusionInfos@CTreeData@@IEAAXXZ @ 0x1800B8C4C (-AgeOutOcclusionInfos@CTreeData@@IEAAXXZ.c)
 *     ?GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ @ 0x1800B8CDC (-GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ.c)
 *     ?GetLargestOccluder@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAV2@@Z @ 0x1800B8D00 (-GetLargestOccluder@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C9230 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?SubtractionIsSingleRect@@YA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800E9C74 (-SubtractionIsSingleRect@@YA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C0460 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C0588 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDirtyRegion::GetOptimizedRect(
        struct CComposition **a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        FastRegion::CRegion *a5,
        __int64 a6,
        char a7,
        _QWORD *a8,
        struct CComposition **a9)
{
  __int64 v9; // rdi
  struct CComposition **v10; // r13
  __int64 v11; // r15
  __int64 v13; // r14
  __int64 v15; // rcx
  char v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  float v19; // xmm10_4
  struct CComposition *v20; // r8
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  const struct CBackdropVisualImageKey *BVIKeyForCurrentWalk; // rax
  struct _LIST_ENTRY *v24; // r15
  const struct CBackdropVisualImageKey *v25; // r13
  __int64 v26; // r8
  CVisual *v27; // r14
  CTreeData *v28; // rdx
  __int64 v29; // rax
  _DWORD *v30; // r14
  _DWORD *v31; // r8
  unsigned int v32; // r14d
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm9_4
  float v36; // xmm6_4
  bool v37; // zf
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm5_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  float v48; // xmm2_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm3_4
  __int64 v52; // r8
  int v53; // eax
  __int128 *v54; // rdx
  __int64 v55; // r11
  __int128 *v56; // r14
  __int64 v57; // r15
  struct tagRECT *v58; // rdx
  struct tagRECT *v59; // rcx
  int v60; // eax
  LONG right; // r10d
  LONG left; // r11d
  __int64 v63; // r9
  __int64 v64; // rax
  _DWORD *v65; // rdx
  LONG *v66; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *i; // rcx
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int64 v73; // r9
  COcclusionContext *v74; // [rsp+30h] [rbp-D0h]
  struct CComposition *v75; // [rsp+38h] [rbp-C8h]
  struct CComposition **v76; // [rsp+40h] [rbp-C0h]
  __int128 v78; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v79; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v80; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v81; // [rsp+80h] [rbp-80h] BYREF
  __int128 v82; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v83[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v84; // [rsp+E0h] [rbp-20h]
  void *retaddr; // [rsp+198h] [rbp+98h]

  v9 = a6;
  v10 = a9;
  v11 = a4;
  v13 = a3;
  v74 = (COcclusionContext *)a9;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v81 = 0LL;
  if ( a6 && CMILMatrix::IsIdentity<0>(a6, a2, 0LL, a4) )
    v9 = 0LL;
  if ( a5 )
  {
    v58 = (struct tagRECT *)v11;
    if ( v9 )
    {
      v81 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>(v9, v11, (float *)&v81.left, a4);
      v58 = &v81;
      v59 = (struct tagRECT *)&v80;
    }
    else
    {
      v59 = &v81;
    }
    v81 = *(struct tagRECT *)PixelAlign(v59, (__int64)v58);
  }
  if ( !*((_BYTE *)a1 + 4424) )
  {
    if ( !a9 )
    {
      v10 = a1 + 2;
      v74 = (COcclusionContext *)(a1 + 2);
    }
    if ( v10[3] == GetCurrentFrameId() )
    {
      v18 = *((unsigned int *)a1 + v13 + 697);
      v19 = (float)((float)(*(float *)&a1[v15 + 334] - *(float *)&a1[v15 + 333])
                  * (float)(*((float *)&a1[v15 + 333] + 1) - *((float *)&a1[v15 + 332] + 1)))
          * 0.25;
      *(_OWORD *)a2 = *(_OWORD *)&a1[2 * v18 + 212];
      if ( a5 )
        AddToTightDirtyRegion((__int128 *)a2, a7, v9, a5);
      v20 = a1[2 * v18 + 228];
      v75 = v20;
      v76 = &a1[2 * v18 + 228];
      if ( v20 != (struct CComposition *)v76 )
      {
        while ( 1 )
        {
          v21 = (_QWORD *)a8[1];
          v22 = &v21[*a8];
          if ( v21 != v22 )
          {
            while ( *v21 != *((_QWORD *)v20 + 2) )
            {
              if ( ++v21 == v22 )
                goto LABEL_13;
            }
            goto LABEL_33;
          }
LABEL_13:
          v79 = *(_OWORD *)((char *)v20 + 24);
          BVIKeyForCurrentWalk = COcclusionContext::GetBVIKeyForCurrentWalk((COcclusionContext *)v10);
          v24 = (struct _LIST_ENTRY *)*a1;
          v25 = BVIKeyForCurrentWalk;
          v27 = *(CVisual **)(v26 + 16);
          if ( (*(unsigned __int8 (__fastcall **)(struct CComposition *))(*(_QWORD *)*a1 + 184LL))(*a1) )
          {
            v28 = (CVisual *)((char *)v27 + 336);
LABEL_15:
            if ( v28 )
            {
              v29 = *((_QWORD *)v28 + 28);
              v30 = 0LL;
              while ( v29 != *((_QWORD *)v28 + 29) )
              {
                v31 = *(_DWORD **)v29;
                if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) == *(_QWORD *)v25 && *((_QWORD *)v31 + 2) == *((_QWORD *)v25 + 1) )
                {
                  v30 = *(_DWORD **)v29;
                  if ( v31 )
                    *((_BYTE *)v31 + 25) = 10;
                  break;
                }
                v29 += 8LL;
              }
              CTreeData::AgeOutOcclusionInfos(v28);
              if ( v30 )
              {
                if ( *((_BYTE *)v75 + 40) )
                  v32 = v30[7];
                else
                  v32 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 16LL))(v30);
                goto LABEL_25;
              }
            }
          }
          else
          {
            TreeDataListHead = CVisual::GetTreeDataListHead(v27);
            if ( TreeDataListHead )
            {
              for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
              {
                v28 = (CTreeData *)&i[-24];
                if ( i[2].Flink == v24 )
                  goto LABEL_15;
              }
            }
          }
          v32 = 0;
LABEL_25:
          v33 = *((float *)&v79 + 2);
          LODWORD(v34) = v79;
          v10 = (struct CComposition **)v74;
          if ( *((float *)&v79 + 2) > *(float *)&v79 )
          {
            v35 = *((float *)&v79 + 3);
            v36 = *((float *)&v79 + 1);
            if ( *((float *)&v79 + 3) > *((float *)&v79 + 1) )
            {
              v37 = *((_BYTE *)v74 + 1204) == 0;
              v78 = 0LL;
              if ( v37 )
              {
                v78 = v79;
              }
              else
              {
                COcclusionContext::PageInPixelsRectToDeviceRect(v74, &v79, &v78);
                v35 = *((float *)&v79 + 3);
                v33 = *((float *)&v79 + 2);
                v36 = *((float *)&v79 + 1);
                LODWORD(v34) = v79;
              }
              if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered((char *)v74 + 448, &v78, v32) )
              {
                v78 = 0LL;
                if ( (float)((float)(v33 - v34) * (float)(v35 - v36)) <= v19 )
                  goto LABEL_31;
                v37 = *((_BYTE *)v74 + 1204) == 0;
                v82 = 0LL;
                if ( v37 )
                {
                  *(_QWORD *)&v82 = __PAIR64__(LODWORD(v36), LODWORD(v34));
                  *((_QWORD *)&v82 + 1) = __PAIR64__(LODWORD(v35), LODWORD(v33));
                }
                else
                {
                  COcclusionContext::PageInPixelsRectToDeviceRect(v74, &v79, &v82);
                  v35 = *((float *)&v79 + 3);
                  v33 = *((float *)&v79 + 2);
                  v36 = *((float *)&v79 + 1);
                  LODWORD(v34) = v79;
                }
                v80 = 0LL;
                if ( !(unsigned __int8)CArrayBasedCoverageSet::GetLargestOccluder((char *)v74 + 448, &v82, v32, &v80) )
                  goto LABEL_31;
                if ( *((_BYTE *)v74 + 1204) )
                {
                  COcclusionContext::DeviceRectToPageInPixelsRect(v74, &v80, &v78);
                  v51 = *((float *)&v78 + 3);
                  v50 = *((float *)&v78 + 2);
                  v49 = *((float *)&v78 + 1);
                  v48 = *(float *)&v78;
                }
                else
                {
                  v48 = *(float *)&v80;
                  v49 = *((float *)&v80 + 1);
                  v50 = *((float *)&v80 + 2);
                  v51 = *((float *)&v80 + 3);
                  v78 = v80;
                }
                if ( a5 || (unsigned __int8)SubtractionIsSingleRect(&v78, &v79) )
                {
                  if ( v34 > v48 )
                  {
                    v48 = v34;
                    *(float *)&v78 = v34;
                  }
                  if ( v36 > v49 )
                  {
                    *((float *)&v78 + 1) = v36;
                    v49 = v36;
                  }
                  if ( v50 > v33 )
                  {
                    *((float *)&v78 + 2) = v33;
                    v50 = v33;
                  }
                  if ( v51 > v35 )
                  {
                    *((float *)&v78 + 3) = v35;
                    v51 = v35;
                  }
                  if ( v50 <= v48 || v51 <= v49 )
                    v78 = 0uLL;
                  `vector constructor iterator'(
                    (char *)v83,
                    16LL,
                    4LL,
                    (void (__fastcall *)(char *))TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
                  v53 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
                          (float *)&v79,
                          (__int64)&v78,
                          v52,
                          (__int64)v83);
                  v54 = v83;
                  if ( v53 != 1 )
                    v54 = &v79;
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, v54);
                  if ( a5 && (_DWORD)v55 )
                  {
                    v56 = v83;
                    v57 = v55;
                    do
                    {
                      AddToTightDirtyRegion(v56++, a7, v9, a5);
                      --v57;
                    }
                    while ( v57 );
                  }
                }
                else
                {
LABEL_31:
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, &v79);
                  if ( a5 )
                    AddToTightDirtyRegion(&v79, a7, v9, a5);
                }
              }
            }
          }
LABEL_33:
          v75 = *(struct CComposition **)v75;
          v20 = v75;
          if ( v75 == (struct CComposition *)v76 )
          {
            v11 = a4;
            break;
          }
        }
      }
    }
    else
    {
      *(_OWORD *)a2 = *(_OWORD *)((char *)&a1[v15 + 332] + 4);
      if ( !a5 )
        goto LABEL_36;
      AddToTightDirtyRegion((__int128 *)a2, a7, v9, a5);
    }
    v16 = 0;
LABEL_36:
    if ( a7 != v16 )
    {
      v80 = 0LL;
      if ( v9 )
        CMILMatrix::Transform2DBoundsHelper<0>(v9, a2, (float *)&v80, v17);
      else
        v80 = *(_OWORD *)a2;
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v80) )
      {
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)a2 = 0LL;
      }
      else
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate((float *)&v80, 1.0, 1.0);
        if ( v9 )
        {
          v69 = *(_OWORD *)v9;
          v70 = *(_OWORD *)(v9 + 16);
          v84 = *(_DWORD *)(v9 + 64);
          v83[0] = v69;
          v71 = *(_OWORD *)(v9 + 32);
          v83[1] = v70;
          v72 = *(_OWORD *)(v9 + 48);
          v83[2] = v71;
          v83[3] = v72;
          CMILMatrix::Invert((CMILMatrix *)v83);
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v83, (__int64)&v80, (float *)a2, v73);
        }
        else
        {
          *(_OWORD *)a2 = v80;
        }
      }
    }
    v38 = *(float *)v11;
    v39 = *(float *)a2;
    if ( *(float *)v11 > *(float *)a2 )
    {
      *(float *)a2 = v38;
      v39 = v38;
    }
    v40 = *(float *)(v11 + 4);
    v41 = *(float *)(a2 + 4);
    if ( v40 > v41 )
    {
      *(float *)(a2 + 4) = v40;
      v41 = v40;
    }
    v42 = *(float *)(a2 + 8);
    v43 = *(float *)(v11 + 8);
    v44 = v42;
    if ( v42 > v43 )
    {
      *(float *)(a2 + 8) = v43;
      v42 = v43;
      v44 = v43;
    }
    v45 = *(float *)(v11 + 12);
    v46 = *(float *)(a2 + 12);
    if ( v46 > v45 )
    {
      *(float *)(a2 + 12) = v45;
      v42 = v44;
      v46 = v45;
    }
    if ( v42 <= v39 || v46 <= v41 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    if ( a5 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v83, &v81);
      v60 = FastRegion::CRegion::Intersect(
              (const struct FastRegion::Internal::CRgnData **)a5,
              (const struct FastRegion::Internal::CRgnData **)v83);
      if ( v60 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v60, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v83);
    }
    return a2;
  }
  *(_OWORD *)a2 = *(_OWORD *)v11;
  if ( a5 )
  {
    right = v81.right;
    left = v81.left;
    v63 = HIDWORD(*(_QWORD *)&v81.right);
    v64 = HIDWORD(*(_QWORD *)&v81.left);
    if ( v81.left >= v81.right || v81.top >= v81.bottom )
    {
      **(_DWORD **)a5 = 0;
    }
    else
    {
      v65 = *(_DWORD **)a5;
      v66 = (LONG *)(*(_QWORD *)a5 + 28LL);
      *v65 = 2;
      *v66 = left;
      v65[3] = v64;
      v66[1] = right;
      v65[4] = (_DWORD)v66 - ((_DWORD)v65 + 12);
      v65[1] = left;
      v65[2] = right;
      v65[6] = (_DWORD)v66 - ((_DWORD)v65 + 20) + 8;
      v65[5] = v63;
    }
  }
  return a2;
}
