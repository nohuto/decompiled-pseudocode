/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082980
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008A040 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A0060 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@W4.c)
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C564C (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C569C (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180059EE0 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x18006A7DC (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006BE00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800949F0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800C27E8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800C2974 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5F10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ceilf_0 @ 0x1800F4757 (ceilf_0.c)
 *     floorf_0 @ 0x1800F476F (floorf_0.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x180185320 (McTemplateU0qdffff_EventWriteTransfer.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, float *a4)
{
  unsigned int v4; // edi
  float v9; // xmm11_4
  float v10; // xmm8_4
  float v11; // xmm12_4
  float v12; // xmm9_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  __m128 v16; // xmm13
  __m128 v17; // xmm13
  unsigned int v18; // edx
  char *v19; // rdi
  _QWORD *v20; // rsi
  bool v21; // al
  float v22; // xmm1_4
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm1_4
  float *v27; // r10
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  unsigned int v35; // r9d
  unsigned int v36; // edi
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // r8d
  __int64 v40; // rsi
  float *v41; // rsi
  float v42; // xmm1_4
  float v43; // xmm2_4
  float v44; // xmm3_4
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rsi
  char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r11
  float v51; // xmm4_4
  float v52; // xmm5_4
  float v53; // xmm2_4
  float v54; // xmm3_4
  float v55; // xmm1_4
  __int64 v56; // rcx
  float v57; // xmm2_4
  __int64 v58; // r9
  float v59; // xmm2_4
  float *v60; // rax
  float v61; // xmm1_4
  float v62; // xmm1_4
  __int64 v63; // rdi
  __int64 v64; // r10
  float *v65; // rdx
  float *v66; // r8
  __int64 v67; // rax
  float v68; // xmm1_4
  char v69; // r9
  float *v71; // rax
  float v72; // xmm1_4
  float v73; // xmm2_4
  float v74; // xmm3_4
  unsigned int v75; // r14d
  float v76; // xmm5_4
  unsigned int v77; // edi
  float v78; // xmm1_4
  bool v79; // cc
  unsigned int v80; // r9d
  float v81; // xmm1_4
  float v82; // xmm2_4
  unsigned int v83; // r14d
  unsigned int v84; // r15d
  unsigned int v85; // r12d
  float v86; // xmm1_4
  float v87; // xmm3_4
  float v88; // xmm2_4
  float v89; // xmm2_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm2_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  float *v96; // rdx
  float *v97; // r8
  unsigned int v98; // eax
  __int64 v99; // r10
  unsigned int v100; // r14d
  float v101; // xmm2_4
  char v102; // al
  float v103; // xmm1_4
  float v104; // xmm1_4
  float v105; // xmm2_4
  char v106; // al
  float v107; // xmm1_4
  float v108; // xmm1_4
  float *v109; // r8
  float *v110; // r9
  __int64 v111; // rdx
  __int64 v112; // r14
  float v113; // xmm1_4
  char v114; // al
  float v115; // xmm1_4
  float v116; // xmm2_4
  float v117; // xmm1_4
  float v118; // xmm1_4
  char v119; // al
  __int64 v120; // rcx
  char *v121; // rsi
  __int64 v122; // rax
  float v123; // xmm2_4
  float v124; // xmm2_4
  float v125; // xmm2_4
  float v126; // xmm2_4
  float v127; // xmm2_4
  float v128; // xmm2_4
  float v129; // xmm1_4
  float v130; // xmm1_4
  float v131; // xmm2_4
  float v132; // xmm2_4
  float v133; // xmm2_4
  float v134; // xmm2_4
  _QWORD *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rax
  int v138; // ecx
  _DWORD *v139; // r9
  __int64 v140; // rcx
  __m128 X; // [rsp+40h] [rbp-59h] BYREF
  __int64 v142; // [rsp+100h] [rbp+67h]

  v4 = 0;
  v142 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0
    && !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
  {
    McTemplateU0qdffff_EventWriteTransfer(
      v138,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v139,
      *v139,
      v139[1],
      v139[2],
      v139[3]);
  }
  X = *(__m128 *)a4;
  if ( !*((_BYTE *)this + 4456) )
  {
    v9 = X.m128_f32[2];
    v10 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] || (v11 = X.m128_f32[3], v12 = X.m128_f32[1], X.m128_f32[3] < X.m128_f32[1]) )
    {
      CDirtyRegion::SetFullDirty(this);
      return v4;
    }
    if ( *((float *)this + 1109) > X.m128_f32[0] )
      v10 = *((float *)this + 1109);
    v13 = X.m128_f32[1];
    if ( *((float *)this + 1110) > X.m128_f32[1] )
    {
      v12 = *((float *)this + 1110);
      v13 = v12;
    }
    v14 = X.m128_f32[2];
    if ( X.m128_f32[2] > *((float *)this + 1111) )
    {
      v9 = *((float *)this + 1111);
      v14 = v9;
    }
    v15 = X.m128_f32[3];
    if ( X.m128_f32[3] > *((float *)this + 1112) )
    {
      v11 = *((float *)this + 1112);
      v15 = v11;
    }
    if ( v14 > v10 && v15 > v13 && v14 > v10 && v15 > v12 )
    {
      if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
        v10 = (float)(int)floorf_0(v10);
      X.m128_f32[0] = v10;
      if ( COERCE_FLOAT(LODWORD(v12) & _xmm) < 8388608.0 )
        v12 = (float)(int)floorf_0(v12);
      X.m128_f32[1] = v12;
      if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
        v9 = (float)(int)ceilf_0(v9);
      X.m128_f32[2] = v9;
      if ( COERCE_FLOAT(LODWORD(v11) & _xmm) < 8388608.0 )
        v11 = (float)(int)ceilf_0(v11);
      v16 = _mm_shuffle_ps(X, X, 147);
      v16.m128_f32[0] = v11;
      v17 = _mm_shuffle_ps(v16, v16, 57);
      X = v17;
      if ( a2 )
      {
        v18 = *((_DWORD *)this + 1106);
        v19 = (char *)this + 2856;
        if ( v18 == 32 )
        {
          v135 = DefaultHeap::Alloc(0x610uLL);
          v20 = v135;
          if ( !v135 )
          {
            v4 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v136, 0LL, 0, -2147024882, 0x1Bu, 0LL);
            MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, -2147024882, 0x1AEu, 0LL);
            return v4;
          }
          memset_0(v135, 0, 0x610uLL);
          `vector constructor iterator'(
            v20 + 2,
            0x30uLL,
            0x20uLL,
            (void *(*)(void *))CDirtyRegionAnnotation::CDirtyRegionAnnotation);
          v137 = *(_QWORD *)v19;
          if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 )
            goto LABEL_200;
          *v20 = v137;
          v18 = 0;
          v20[1] = v19;
          *(_QWORD *)(v137 + 8) = v20;
          *(_QWORD *)v19 = v20;
        }
        else
        {
          v20 = *(_QWORD **)v19;
        }
        *((_DWORD *)this + 1106) = v18 + 1;
        v142 = (__int64)&v20[6 * v18 + 2];
        *(_QWORD *)(v142 + 16) = a2;
        *(_BYTE *)(v142 + 40) = a3;
        *(__m128 *)(v142 + 24) = v17;
        *(_QWORD *)(v142 + 8) = 0LL;
        *(_QWORD *)v142 = 0LL;
      }
      v21 = v9 <= v10 || v11 <= v12;
      v22 = 0.0;
      v23 = (float)(v9 - v10) * (float)(v11 - v12);
      v24 = (float)((float)(v9 - v10) * 0.5) + v10;
      v25 = (float)((float)(v11 - v12) * 0.5) + v12;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 1996) )
        {
          v22 = FLOAT_3_4028235e38;
        }
        else
        {
          v88 = (float)((float)(*((float *)this + 496) - v24) * (float)(*((float *)this + 496) - v24))
              + (float)((float)(*((float *)this + 497) - v25) * (float)(*((float *)this + 497) - v25));
          if ( v88 != 0.0 )
            v22 = (float)(v23 + *((float *)this + 498)) / v88;
        }
      }
      *((float *)this + 592) = v22;
      v26 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2012) )
        {
          v26 = FLOAT_3_4028235e38;
        }
        else
        {
          v89 = (float)((float)(*((float *)this + 500) - v24) * (float)(*((float *)this + 500) - v24))
              + (float)((float)(*((float *)this + 501) - v25) * (float)(*((float *)this + 501) - v25));
          if ( v89 != 0.0 )
            v26 = (float)(v23 + *((float *)this + 502)) / v89;
        }
      }
      v27 = (float *)((char *)this + 2372);
      v28 = 0.0;
      *((float *)this + 593) = v26;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2028) )
        {
          v28 = FLOAT_3_4028235e38;
        }
        else
        {
          v90 = (float)((float)(*((float *)this + 504) - v24) * (float)(*((float *)this + 504) - v24))
              + (float)((float)(*((float *)this + 505) - v25) * (float)(*((float *)this + 505) - v25));
          if ( v90 != 0.0 )
            v28 = (float)(v23 + *((float *)this + 506)) / v90;
        }
      }
      *((float *)this + 594) = v28;
      v29 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2044) )
        {
          v29 = FLOAT_3_4028235e38;
        }
        else
        {
          v91 = (float)((float)(*((float *)this + 508) - v24) * (float)(*((float *)this + 508) - v24))
              + (float)((float)(*((float *)this + 509) - v25) * (float)(*((float *)this + 509) - v25));
          if ( v91 != 0.0 )
            v29 = (float)(v23 + *((float *)this + 510)) / v91;
        }
      }
      *((float *)this + 595) = v29;
      v30 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2060) )
        {
          v30 = FLOAT_3_4028235e38;
        }
        else
        {
          v92 = (float)((float)(*((float *)this + 512) - v24) * (float)(*((float *)this + 512) - v24))
              + (float)((float)(*((float *)this + 513) - v25) * (float)(*((float *)this + 513) - v25));
          if ( v92 != 0.0 )
            v30 = (float)(v23 + *((float *)this + 514)) / v92;
        }
      }
      *((float *)this + 596) = v30;
      v31 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2076) )
        {
          v31 = FLOAT_3_4028235e38;
        }
        else
        {
          v93 = (float)((float)(*((float *)this + 516) - v24) * (float)(*((float *)this + 516) - v24))
              + (float)((float)(*((float *)this + 517) - v25) * (float)(*((float *)this + 517) - v25));
          if ( v93 != 0.0 )
            v31 = (float)(v23 + *((float *)this + 518)) / v93;
        }
      }
      *((float *)this + 597) = v31;
      v32 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2092) )
        {
          v32 = FLOAT_3_4028235e38;
        }
        else
        {
          v94 = (float)((float)(*((float *)this + 520) - v24) * (float)(*((float *)this + 520) - v24))
              + (float)((float)(*((float *)this + 521) - v25) * (float)(*((float *)this + 521) - v25));
          if ( v94 != 0.0 )
            v32 = (float)(v23 + *((float *)this + 522)) / v94;
        }
      }
      *((float *)this + 598) = v32;
      v33 = 0.0;
      if ( !v21 )
      {
        if ( *((_BYTE *)this + 2108) )
        {
          v33 = FLOAT_3_4028235e38;
        }
        else
        {
          v95 = (float)((float)(*((float *)this + 524) - v24) * (float)(*((float *)this + 524) - v24))
              + (float)((float)(*((float *)this + 525) - v25) * (float)(*((float *)this + 525) - v25));
          if ( v95 != 0.0 )
            v33 = (float)(v23 + *((float *)this + 526)) / v95;
        }
      }
      v34 = FLOAT_N1_0;
      v35 = 0;
      *((float *)this + 599) = v33;
      v36 = 0;
      v37 = 8;
      v38 = 592LL;
      while ( 1 )
      {
        v39 = 0;
        if ( v37 >= 4 )
        {
          v40 = 0LL;
          v71 = v27;
          do
          {
            v72 = *(v71 - 1);
            v73 = v34;
            v74 = v34;
            if ( v72 > v34 )
              v34 = *(v71 - 1);
            v75 = v39;
            v76 = v34;
            if ( v72 <= v73 )
              v75 = v36;
            v77 = v37;
            v79 = v72 <= v74;
            v78 = *v71;
            if ( v79 )
              v77 = v35;
            if ( v78 > v34 )
              v34 = *v71;
            v79 = v78 <= v76;
            v80 = v39 + 1;
            v81 = v71[1];
            v82 = v34;
            if ( v79 )
              v80 = v75;
            v83 = v37;
            if ( v79 )
              v83 = v77;
            if ( v81 > v34 )
              v34 = v71[1];
            v79 = v81 <= v82;
            v84 = v39 + 2;
            v85 = v37;
            v86 = v71[2];
            v87 = v34;
            if ( v79 )
            {
              v84 = v80;
              v85 = v83;
            }
            if ( v86 > v34 )
              v34 = v71[2];
            v36 = v39 + 3;
            v35 = v37;
            if ( v86 <= v87 )
            {
              v36 = v84;
              v35 = v85;
            }
            v40 += 4LL;
            v71 += 4;
            v39 += 4;
          }
          while ( v39 < v37 - 3 );
          if ( v39 >= v37 )
            goto LABEL_67;
        }
        else
        {
          v40 = 0LL;
        }
        v41 = (float *)((char *)this + 4 * v38 + 4 * v40);
        do
        {
          v42 = *v41;
          v43 = v34;
          v44 = v34;
          if ( *v41 > v34 )
            v34 = *v41;
          v45 = v39;
          if ( v42 <= v43 )
            v45 = v36;
          v36 = v45;
          v46 = v37;
          if ( v42 <= v44 )
            v46 = v35;
          ++v41;
          ++v39;
          v35 = v46;
        }
        while ( v39 < v37 );
LABEL_67:
        v38 -= 8LL;
        v27 -= 8;
        if ( !--v37 )
        {
          v47 = v36;
          if ( v35 == 8 )
          {
            if ( !v142 )
            {
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                (float *)this + 4 * v36 + 432,
                X.m128_f32);
              v11 = X.m128_f32[3];
              v9 = X.m128_f32[2];
              v12 = X.m128_f32[1];
              v10 = X.m128_f32[0];
              goto LABEL_72;
            }
            v48 = (char *)this + 16 * v36 + 1856;
            v49 = *(_QWORD *)v48;
            if ( *(char **)(*(_QWORD *)v48 + 8LL) == v48 )
            {
              *(_QWORD *)v142 = v49;
              *(_QWORD *)(v142 + 8) = v48;
              *(_QWORD *)(v49 + 8) = v142;
              *(_QWORD *)v48 = v142;
LABEL_72:
              X.m128_u64[0] = __PAIR64__(LODWORD(v12), LODWORD(v10));
              X.m128_u64[1] = __PAIR64__(LODWORD(v11), LODWORD(v9));
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                X.m128_f32,
                (float *)this + 4 * v36 + 400);
              v52 = X.m128_f32[0];
              if ( X.m128_f32[2] > X.m128_f32[0] )
              {
                v53 = X.m128_f32[3];
                v54 = X.m128_f32[1];
                if ( X.m128_f32[3] > X.m128_f32[1]
                  && (X.m128_f32[0] < *((float *)this + 4 * v36 + 400)
                   || X.m128_f32[1] < *((float *)this + 4 * v36 + 401)
                   || *((float *)this + 4 * v36 + 402) < X.m128_f32[2]
                   || *((float *)this + 4 * v36 + 403) < X.m128_f32[3]) )
                {
                  v55 = X.m128_f32[2] - X.m128_f32[0];
                  *((__m128 *)this + v36 + 100) = X;
                  v56 = 2 * (v36 + 124LL);
                  v57 = v53 - v54;
                  *((_BYTE *)this + 8 * v56 + 12) = 0;
                  *((float *)this + 2 * v56 + 2) = v55 * v57;
                  *((float *)this + 2 * v56) = (float)(v55 * 0.5) + v52;
                  *((float *)this + 2 * v56 + 1) = (float)(v57 * 0.5) + v54;
                  if ( v36 >= 2 )
                  {
                    v96 = (float *)((char *)this + 1988);
                    v97 = (float *)((char *)this + 32 * v36 + 2116);
                    v98 = ((v36 - 2) >> 1) + 1;
                    v99 = v98;
                    v58 = 2LL * v98;
                    v100 = 2 * v98;
                    do
                    {
                      v101 = v51;
                      v102 = *((_BYTE *)this + 16 * v36 + 1996);
                      if ( *((_BYTE *)v96 + 8) )
                      {
                        if ( !v102 )
                          v101 = FLOAT_3_4028235e38;
                      }
                      else if ( !v102 )
                      {
                        v103 = *v96 - *((float *)this + 4 * v36 + 497);
                        v104 = (float)(v103 * v103)
                             + (float)((float)(*(v96 - 1) - *((float *)this + 4 * v36 + 496))
                                     * (float)(*(v96 - 1) - *((float *)this + 4 * v36 + 496)));
                        if ( v104 != v51 )
                          v101 = (float)(*((float *)this + 4 * v36 + 498) + v96[1]) / v104;
                      }
                      *(v97 - 1) = v101;
                      v105 = v51;
                      v106 = *((_BYTE *)this + 16 * v36 + 1996);
                      if ( *((_BYTE *)v96 + 24) )
                      {
                        if ( !v106 )
                          v105 = FLOAT_3_4028235e38;
                      }
                      else if ( !v106 )
                      {
                        v107 = v96[4] - *((float *)this + 4 * v36 + 497);
                        v108 = (float)(v107 * v107)
                             + (float)((float)(v96[3] - *((float *)this + 4 * v36 + 496))
                                     * (float)(v96[3] - *((float *)this + 4 * v36 + 496)));
                        if ( v108 != v51 )
                          v105 = (float)(*((float *)this + 4 * v36 + 498) + v96[5]) / v108;
                      }
                      *v97 = v105;
                      v96 += 8;
                      v97 = (float *)((char *)v97 + v50);
                      --v99;
                    }
                    while ( v99 );
                    if ( v100 < v36 )
                    {
LABEL_80:
                      v59 = v51;
                      v60 = (float *)((char *)this + 16 * v58 + 1984);
                      if ( !*((_BYTE *)this + 16 * v36 + 1996) )
                      {
                        if ( *((_BYTE *)v60 + 12) )
                        {
                          v59 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v61 = v60[1] - *((float *)this + 4 * v36 + 497);
                          v62 = (float)(v61 * v61)
                              + (float)((float)(*v60 - *((float *)this + 4 * v36 + 496))
                                      * (float)(*v60 - *((float *)this + 4 * v36 + 496)));
                          if ( v62 != v51 )
                            v59 = (float)(v60[2] + *((float *)this + 4 * v36 + 498)) / v62;
                        }
                      }
                      *((float *)this + 8 * v36 + v58 + 528) = v59;
                    }
                  }
                  else if ( v36 )
                  {
                    v58 = 0LL;
                    goto LABEL_80;
                  }
                  v63 = v36 + 1;
                  if ( (unsigned int)v63 < (unsigned int)v50 )
                  {
                    v64 = (unsigned int)v63;
                    if ( (unsigned int)(v50 - v63) < 5 )
                      goto LABEL_87;
                    v109 = (float *)((char *)this + 16 * (unsigned int)v63 + 1988);
                    v110 = (float *)((char *)this + 32 * v63 + 4 * v47 + 2144);
                    v111 = (3 - (int)v63) / 5u + 1;
                    v112 = v111;
                    v64 = v111 + v63 + 4 * v111;
                    LODWORD(v63) = v111 + v63 + 4 * v111;
                    do
                    {
                      v113 = v51;
                      v114 = *((_BYTE *)this + 16 * v47 + 1996);
                      if ( *((_BYTE *)v109 + 8) )
                      {
                        if ( !v114 )
                          v113 = FLOAT_3_4028235e38;
                      }
                      else if ( !v114 )
                      {
                        v125 = *v109 - *((float *)this + 4 * v47 + 497);
                        v126 = (float)(v125 * v125)
                             + (float)((float)(*(v109 - 1) - *((float *)this + 4 * v47 + 496))
                                     * (float)(*(v109 - 1) - *((float *)this + 4 * v47 + 496)));
                        if ( v126 != v51 )
                          v113 = (float)(v109[1] + *((float *)this + 4 * v47 + 498)) / v126;
                      }
                      *(v110 - 8) = v113;
                      v115 = v51;
                      if ( !*((_BYTE *)this + 16 * v47 + 1996) )
                      {
                        if ( *((_BYTE *)v109 + 24) )
                        {
                          v115 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v127 = v109[4] - *((float *)this + 4 * v47 + 497);
                          v128 = (float)(v127 * v127)
                               + (float)((float)(v109[3] - *((float *)this + 4 * v47 + 496))
                                       * (float)(v109[3] - *((float *)this + 4 * v47 + 496)));
                          if ( v128 != v51 )
                            v115 = (float)(v109[5] + *((float *)this + 4 * v47 + 498)) / v128;
                        }
                      }
                      *v110 = v115;
                      v116 = v51;
                      if ( !*((_BYTE *)this + 16 * v47 + 1996) )
                      {
                        if ( *((_BYTE *)v109 + 40) )
                        {
                          v116 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v129 = v109[8] - *((float *)this + 4 * v47 + 497);
                          v130 = (float)(v129 * v129)
                               + (float)((float)(v109[7] - *((float *)this + 4 * v47 + 496))
                                       * (float)(v109[7] - *((float *)this + 4 * v47 + 496)));
                          if ( v130 != v51 )
                            v116 = (float)(v109[9] + *((float *)this + 4 * v47 + 498)) / v130;
                        }
                      }
                      v110[8] = v116;
                      v117 = v51;
                      if ( !*((_BYTE *)this + 16 * v47 + 1996) )
                      {
                        if ( *((_BYTE *)v109 + 56) )
                        {
                          v117 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v131 = v109[12] - *((float *)this + 4 * v47 + 497);
                          v132 = (float)(v131 * v131)
                               + (float)((float)(v109[11] - *((float *)this + 4 * v47 + 496))
                                       * (float)(v109[11] - *((float *)this + 4 * v47 + 496)));
                          if ( v132 != v51 )
                            v117 = (float)(v109[13] + *((float *)this + 4 * v47 + 498)) / v132;
                        }
                      }
                      v110[16] = v117;
                      v118 = v51;
                      v119 = *((_BYTE *)this + 16 * v47 + 1996);
                      if ( *((_BYTE *)v109 + 72) )
                      {
                        if ( !v119 )
                          v118 = FLOAT_3_4028235e38;
                      }
                      else if ( !v119 )
                      {
                        v133 = v109[16] - *((float *)this + 4 * v47 + 497);
                        v134 = (float)(v133 * v133)
                             + (float)((float)(v109[15] - *((float *)this + 4 * v47 + 496))
                                     * (float)(v109[15] - *((float *)this + 4 * v47 + 496)));
                        if ( v134 != v51 )
                          v118 = (float)(v109[17] + *((float *)this + 4 * v47 + 498)) / v134;
                      }
                      v110[24] = v118;
                      v109 += 20;
                      v110 += 40;
                      --v112;
                    }
                    while ( v112 );
                    if ( (unsigned int)v63 < (unsigned int)v50 )
                    {
LABEL_87:
                      v65 = (float *)((char *)this + 16 * v64 + 1988);
                      v66 = (float *)((char *)this + 32 * v64 + 4 * v47 + 2112);
                      v67 = (unsigned int)(v50 - v63);
                      do
                      {
                        v68 = v51;
                        v69 = *((_BYTE *)this + 16 * v47 + 1996);
                        if ( *((_BYTE *)v65 + 8) )
                        {
                          if ( !v69 )
                            v68 = FLOAT_3_4028235e38;
                        }
                        else if ( !v69 )
                        {
                          v123 = *v65 - *((float *)this + 4 * v47 + 497);
                          v124 = (float)(v123 * v123)
                               + (float)((float)(*(v65 - 1) - *((float *)this + 4 * v47 + 496))
                                       * (float)(*(v65 - 1) - *((float *)this + 4 * v47 + 496)));
                          if ( v124 != v51 )
                            v68 = (float)(v65[1] + *((float *)this + 4 * v47 + 498)) / v124;
                        }
                        *v66 = v68;
                        v65 += 4;
                        v66 += 8;
                        --v67;
                      }
                      while ( v67 );
                      return 0;
                    }
                  }
                }
              }
              return 0;
            }
          }
          else
          {
            CDirtyRegion::Merge(this, v35, v36);
            *((__m128 *)this + v36 + 100) = v17;
            CDirtyRegion::CalcDirtyRegionCachedData(v120, X.m128_f32);
            CDirtyRegion::UpdateAcceleration(this, v36);
            if ( !v142 )
            {
              v4 = 0;
              *((__m128 *)this + v47 + 108) = v17;
              return v4;
            }
            v121 = (char *)this + 16 * v36 + 1856;
            v122 = *(_QWORD *)v121;
            if ( *(char **)(*(_QWORD *)v121 + 8LL) == v121 )
            {
              *(_QWORD *)v142 = v122;
              *(_QWORD *)(v142 + 8) = v121;
              *(_QWORD *)(v122 + 8) = v142;
              *(_QWORD *)v121 = v142;
              return 0;
            }
          }
LABEL_200:
          __fastfail(3u);
        }
      }
    }
  }
  return v4;
}
