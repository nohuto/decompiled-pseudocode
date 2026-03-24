/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18008F6B0
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x18008F4E8 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?CleanTree@CVisualTree@@UEAAJXZ @ 0x180090720 (-CleanTree@CVisualTree@@UEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058390 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BB30 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006BE00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800C895C (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5F10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x1800D8358 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801892A8 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180189384 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::Optimize(__m128 *this)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v4; // rbp
  char v5; // r15
  float *v6; // r14
  unsigned int v7; // eax
  int v8; // edx
  bool v9; // zf
  __int64 v10; // r10
  __int64 v11; // rdx
  float *v12; // r12
  __int8 *v13; // r8
  const struct MilRectF *v14; // rdx
  const struct MilRectF *v15; // rcx
  float *v16; // r8
  __int64 v17; // r10
  float v18; // xmm4_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  __m128 *v22; // r8
  bool v23; // cc
  __int64 v24; // r9
  bool v25; // al
  float v26; // xmm2_4
  float v27; // xmm1_4
  __int64 v28; // r11
  __int64 v29; // rax
  unsigned int v30; // r10d
  __int64 v31; // r9
  float *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  float *v35; // rdx
  float v36; // xmm1_4
  __int64 v37; // r11
  __int64 v38; // rcx
  __m128 *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  float *v54; // r10
  float *v55; // r15
  unsigned int v56; // edx
  __int64 v57; // rcx
  float v58; // xmm1_4
  char v59; // al
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  char v65; // al
  float v66; // xmm2_4
  float v67; // xmm2_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm2_4
  CDirtyRegion *v73; // rcx
  const struct CDirtyRegion::DirtyRegionCachedData *v74; // rdx
  float v75; // xmm0_4
  __int64 v76; // rdx
  float *v77; // rax
  __int64 v78; // rcx
  float *m128_f32; // rdi
  __int64 v80; // rbp
  __m128 v81; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v82; // [rsp+C0h] [rbp+8h]
  unsigned int v83; // [rsp+C8h] [rbp+10h]
  __int8 *v84; // [rsp+D0h] [rbp+18h]
  __int64 v85; // [rsp+D8h] [rbp+20h]

  if ( this[278].m128_i8[8] )
  {
    v8 = 1;
    goto LABEL_17;
  }
  v2 = 0;
  memset_0(&this[168].m128_i16[2], 0, 0x80uLL);
  if ( this[278].m128_i8[9] )
  {
    m128_f32 = this[100].m128_f32;
    v80 = 8LL;
    do
    {
      if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(m128_f32) )
        InflateRectF_InPlace();
      m128_f32 += 4;
      --v80;
    }
    while ( v80 );
  }
  v3 = 0;
  do
  {
    v4 = v3;
    v5 = 0;
    v6 = this[v4 + 100].m128_f32;
    if ( v6[2] <= *v6 )
      goto LABEL_5;
    if ( v6[3] <= v6[1] )
      goto LABEL_5;
    v10 = v3 + 1;
    v11 = (unsigned int)v10;
    v83 = v3 + 1;
    v82 = v3 + 1;
    if ( (unsigned int)v10 >= 8 )
      goto LABEL_5;
    v12 = &this[(unsigned int)v10 + 100].m128_f32[3];
    v13 = &this[2 * v10 + 132].m128_i8[4 * v3];
    v84 = v13;
    while ( 1 )
    {
      if ( *(v12 - 1) <= *(v12 - 3) || *v12 <= *(v12 - 2) )
        goto LABEL_24;
      v85 = (unsigned int)v11;
      v81.m128_u64[0] = (unsigned __int64)&this[v11 + 100];
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
             this[v4 + 100].m128_f32,
             (float *)v81.m128_u64[0])
        || *v16 >= 0.86000001 )
      {
        goto LABEL_28;
      }
      if ( CalcOvehead(v15, v14) < 50000.0 )
        break;
      LODWORD(v11) = v83;
      v13 = v84;
LABEL_24:
      v11 = (unsigned int)(v11 + 1);
      v13 += 32;
      v12 += 4;
      v83 = v11;
      v84 = v13;
      if ( (unsigned int)v11 >= 8 )
        goto LABEL_5;
    }
    v14 = (const struct MilRectF *)v81.m128_u64[0];
LABEL_28:
    v81 = this[v3 + 100];
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v81.m128_f32, (float *)v14);
    v18 = v81.m128_f32[0];
    v19 = v81.m128_f32[3];
    v20 = v81.m128_f32[1];
    v21 = _mm_shuffle_ps(v81, v81, 170).m128_f32[0];
    v22 = &this[v3 + 124];
    v23 = v21 <= v81.m128_f32[0];
    *(__m128 *)((char *)this + 8 * v24) = v81;
    v25 = v23 || v19 <= v20;
    v22->m128_i8[12] = v25;
    v26 = v21 - v18;
    v27 = v19 - v20;
    v28 = v17;
    v22->m128_f32[2] = v26 * v27;
    v22->m128_f32[0] = (float)(v26 * 0.5) + v18;
    v22->m128_f32[1] = (float)(v27 * 0.5) + v20;
    this[v17 + 124].m128_i32[0] = 0;
    v29 = v17 + 100;
    this[v28 + 124].m128_i8[12] = 1;
    *(unsigned __int64 *)((char *)this[v28 + 124].m128_u64 + 4) = 0LL;
    this[v29].m128_u64[1] = 0LL;
    this[v29].m128_u64[0] = 0LL;
    if ( v3 )
    {
      v73 = (CDirtyRegion *)v3;
      v74 = (const struct CDirtyRegion::DirtyRegionCachedData *)&this[124];
      do
      {
        v75 = CDirtyRegion::CalcAcceleration(v73, v74, (const struct CDirtyRegion::DirtyRegionCachedData *)v22);
        v74 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v76 + 16);
        *v77 = v75;
        v73 = (CDirtyRegion *)(v78 - 1);
      }
      while ( v73 );
    }
    v30 = v3 + 1;
    v31 = v82;
    if ( 8 - v82 < 6 )
      goto LABEL_33;
    v54 = &this[v82 + 124].m128_f32[1];
    v55 = &this[2 * v82 + 134].m128_f32[v3];
    v56 = (2 - v82) / 6 + 1;
    v57 = v56;
    v31 = v82 + 6LL * v56;
    do
    {
      v58 = 0.0;
      v59 = v22->m128_i8[12];
      if ( *((_BYTE *)v54 + 8) )
      {
        if ( !v59 )
          v58 = FLOAT_3_4028235e38;
      }
      else if ( !v59 )
      {
        v67 = (float)((float)(*v54 - v22->m128_f32[1]) * (float)(*v54 - v22->m128_f32[1]))
            + (float)((float)(*(v54 - 1) - v22->m128_f32[0]) * (float)(*(v54 - 1) - v22->m128_f32[0]));
        if ( v67 != 0.0 )
          v58 = (float)(v54[1] + v22->m128_f32[2]) / v67;
      }
      *(v55 - 8) = v58;
      v60 = 0.0;
      if ( !v22->m128_i8[12] )
      {
        if ( *((_BYTE *)v54 + 24) )
        {
          v60 = FLOAT_3_4028235e38;
        }
        else
        {
          v68 = (float)((float)(v54[4] - v22->m128_f32[1]) * (float)(v54[4] - v22->m128_f32[1]))
              + (float)((float)(v54[3] - v22->m128_f32[0]) * (float)(v54[3] - v22->m128_f32[0]));
          if ( v68 != 0.0 )
            v60 = (float)(v54[5] + v22->m128_f32[2]) / v68;
        }
      }
      *v55 = v60;
      v61 = 0.0;
      if ( !v22->m128_i8[12] )
      {
        if ( *((_BYTE *)v54 + 40) )
        {
          v61 = FLOAT_3_4028235e38;
        }
        else
        {
          v69 = (float)((float)(v54[8] - v22->m128_f32[1]) * (float)(v54[8] - v22->m128_f32[1]))
              + (float)((float)(v54[7] - v22->m128_f32[0]) * (float)(v54[7] - v22->m128_f32[0]));
          if ( v69 != 0.0 )
            v61 = (float)(v54[9] + v22->m128_f32[2]) / v69;
        }
      }
      v55[8] = v61;
      v62 = 0.0;
      if ( !v22->m128_i8[12] )
      {
        if ( *((_BYTE *)v54 + 56) )
        {
          v62 = FLOAT_3_4028235e38;
        }
        else
        {
          v70 = (float)((float)(v54[12] - v22->m128_f32[1]) * (float)(v54[12] - v22->m128_f32[1]))
              + (float)((float)(v54[11] - v22->m128_f32[0]) * (float)(v54[11] - v22->m128_f32[0]));
          if ( v70 != 0.0 )
            v62 = (float)(v54[13] + v22->m128_f32[2]) / v70;
        }
      }
      v55[16] = v62;
      v63 = 0.0;
      if ( !v22->m128_i8[12] )
      {
        if ( *((_BYTE *)v54 + 72) )
        {
          v63 = FLOAT_3_4028235e38;
        }
        else
        {
          v71 = (float)((float)(v54[16] - v22->m128_f32[1]) * (float)(v54[16] - v22->m128_f32[1]))
              + (float)((float)(v54[15] - v22->m128_f32[0]) * (float)(v54[15] - v22->m128_f32[0]));
          if ( v71 != 0.0 )
            v63 = (float)(v54[17] + v22->m128_f32[2]) / v71;
        }
      }
      v55[24] = v63;
      v64 = 0.0;
      v65 = v22->m128_i8[12];
      if ( *((_BYTE *)v54 + 88) )
      {
        if ( !v65 )
          v64 = FLOAT_3_4028235e38;
      }
      else if ( !v65 )
      {
        v72 = (float)((float)(v54[20] - v22->m128_f32[1]) * (float)(v54[20] - v22->m128_f32[1]))
            + (float)((float)(v54[19] - v22->m128_f32[0]) * (float)(v54[19] - v22->m128_f32[0]));
        if ( v72 != 0.0 )
          v64 = (float)(v54[21] + v22->m128_f32[2]) / v72;
      }
      v55[32] = v64;
      v54 += 24;
      v55 += 48;
      --v57;
    }
    while ( v57 );
    v30 = v82 + 6 * v56;
    if ( v30 < 8 )
    {
LABEL_33:
      v32 = &this[v31 + 124].m128_f32[1];
      v33 = v3 + 8 * v31 + 528;
      v34 = 8 - v30;
      v35 = &this->m128_f32[v33];
      do
      {
        v36 = 0.0;
        if ( *((_BYTE *)v32 + 8) )
        {
          if ( !v22->m128_i8[12] )
            v36 = FLOAT_3_4028235e38;
        }
        else if ( !v22->m128_i8[12] )
        {
          v66 = (float)((float)(*v32 - v22->m128_f32[1]) * (float)(*v32 - v22->m128_f32[1]))
              + (float)((float)(*(v32 - 1) - v22->m128_f32[0]) * (float)(*(v32 - 1) - v22->m128_f32[0]));
          if ( v66 != 0.0 )
            v36 = (float)(v32[1] + v22->m128_f32[2]) / v66;
        }
        *v35 = v36;
        v32 += 4;
        v35 += 8;
        --v34;
      }
      while ( v34 );
    }
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
      this[v4 + 108].m128_f32,
      this[v28 + 108].m128_f32);
    v38 = v85 + 108;
    v39 = &this[v85 + 116];
    this[v38].m128_u64[1] = 0LL;
    this[v38].m128_u64[0] = 0LL;
    if ( (__m128 *)v39->m128_u64[0] != v39 )
    {
      *(_QWORD *)this[v4 + 116].m128_u64[1] = v39->m128_u64[0];
      *(_QWORD *)(v39->m128_u64[0] + 8) = this[v4 + 116].m128_u64[1];
      **(_QWORD **)((char *)&this[116].m128_u64[1] + v37) = &this[v4 + 116];
      this[v4 + 116].m128_u64[1] = *(unsigned __int64 *)((char *)&this[116].m128_u64[1] + v37);
      v39->m128_u64[1] = (unsigned __int64)v39;
      v39->m128_u64[0] = (unsigned __int64)v39;
    }
    v5 = 1;
LABEL_5:
    v7 = v3 + 1;
    v3 = 0;
    if ( !v5 )
      v3 = v7;
  }
  while ( v3 < 8 );
  if ( this[100].m128_f32[2] > this[100].m128_f32[0] && this[100].m128_f32[3] > this[100].m128_f32[1] )
  {
    *(__m128 *)((char *)this + 2692) = this[100];
    this[176].m128_i32[1] = 0;
    v2 = 1;
  }
  if ( this[101].m128_f32[2] > this[101].m128_f32[0] && this[101].m128_f32[3] > this[101].m128_f32[1] )
  {
    v40 = v2;
    v41 = v2++;
    *(__m128 *)((char *)&this[v40 + 168] + 4) = this[101];
    this[176].m128_i32[v41 + 1] = 1;
  }
  if ( this[102].m128_f32[2] > this[102].m128_f32[0] && this[102].m128_f32[3] > this[102].m128_f32[1] )
  {
    v42 = v2;
    v43 = v2++;
    *(__m128 *)((char *)&this[v42 + 168] + 4) = this[102];
    this[176].m128_i32[v43 + 1] = 2;
  }
  if ( this[103].m128_f32[2] > this[103].m128_f32[0] && this[103].m128_f32[3] > this[103].m128_f32[1] )
  {
    v44 = v2;
    v45 = v2++;
    *(__m128 *)((char *)&this[v44 + 168] + 4) = this[103];
    this[176].m128_i32[v45 + 1] = 3;
  }
  if ( this[104].m128_f32[2] > this[104].m128_f32[0] && this[104].m128_f32[3] > this[104].m128_f32[1] )
  {
    v46 = v2;
    v47 = v2++;
    *(__m128 *)((char *)&this[v46 + 168] + 4) = this[104];
    this[176].m128_i32[v47 + 1] = 4;
  }
  if ( this[105].m128_f32[2] > this[105].m128_f32[0] && this[105].m128_f32[3] > this[105].m128_f32[1] )
  {
    v48 = v2;
    v49 = v2++;
    *(__m128 *)((char *)&this[v48 + 168] + 4) = this[105];
    this[176].m128_i32[v49 + 1] = 5;
  }
  if ( this[106].m128_f32[2] > this[106].m128_f32[0] && this[106].m128_f32[3] > this[106].m128_f32[1] )
  {
    v50 = v2;
    v51 = v2++;
    *(__m128 *)((char *)&this[v50 + 168] + 4) = this[106];
    this[176].m128_i32[v51 + 1] = 6;
  }
  if ( this[107].m128_f32[2] > this[107].m128_f32[0] && this[107].m128_f32[3] > this[107].m128_f32[1] )
  {
    v52 = v2;
    v53 = v2++;
    *(__m128 *)((char *)&this[v52 + 168] + 4) = this[107];
    this[176].m128_i32[v53 + 1] = 7;
  }
  v8 = v2;
LABEL_17:
  this[178].m128_i32[1] = v8;
  v9 = this[278].m128_i8[12] == 0;
  this[278].m128_i8[10] = 1;
  if ( v9 )
  {
    if ( this[278].m128_i8[13] )
    {
      CDirtyRegion::SetFullDirty((CDirtyRegion *)this);
      this[278].m128_i8[13] = 0;
    }
  }
  else
  {
    CDirtyRegion::SetRedrawRects((CDirtyRegion *)this);
    CDirtyRegion::SetFullDirty((CDirtyRegion *)this);
    this[278].m128_i16[6] = 0;
  }
}
