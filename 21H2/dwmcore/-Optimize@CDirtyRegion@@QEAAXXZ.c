/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x1800A5BA0
 * Callers:
 *     ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008DC78 (-EndPreCompute@CVisualTree@@QEAAXJ@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x180085688 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180085994 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x1800D2D0C (-AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcOvehead@@YAMAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800DC6C8 (-CalcOvehead@@YAMAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x1801B648C (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::Optimize(CDirtyRegion *this)
{
  unsigned int v2; // r12d
  __int64 v3; // rsi
  __int64 v4; // rbp
  char v5; // r14
  float *v6; // rbx
  unsigned int v7; // eax
  int v8; // edx
  bool v9; // zf
  __int64 v10; // rdx
  float *v11; // r13
  char *v12; // r8
  __int64 v13; // rdx
  float *v14; // r8
  __int64 v15; // r11
  char IsEmpty; // al
  __int64 v17; // rdx
  __m128 v18; // xmm4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int128 v41; // [rsp+30h] [rbp-58h] BYREF

  if ( *((_BYTE *)this + 4424) )
  {
    v8 = 1;
  }
  else
  {
    *(_OWORD *)((char *)this + 2660) = 0LL;
    *(_OWORD *)((char *)this + 2676) = 0LL;
    *(_OWORD *)((char *)this + 2692) = 0LL;
    v2 = 0;
    *(_OWORD *)((char *)this + 2708) = 0LL;
    v3 = 0LL;
    *(_OWORD *)((char *)this + 2724) = 0LL;
    *(_OWORD *)((char *)this + 2740) = 0LL;
    *(_OWORD *)((char *)this + 2756) = 0LL;
    *(_OWORD *)((char *)this + 2772) = 0LL;
    do
    {
      v4 = 16LL * (unsigned int)v3;
      v5 = 0;
      v6 = (float *)((char *)this + v4 + 1568);
      if ( v6[2] > *v6 && v6[3] > v6[1] )
      {
        v10 = (unsigned int)(v3 + 1);
        v39 = v10;
        if ( (unsigned int)v10 < 8 )
        {
          v11 = (float *)((char *)this + 16 * (unsigned int)v10 + 1580);
          v12 = (char *)this + 32 * v10 + 4 * v3 + 2080;
          *(_QWORD *)&v41 = v12;
          do
          {
            if ( *(v11 - 1) > *(v11 - 3) && *v11 > *(v11 - 2) )
            {
              v40 = v10;
              if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                     (float *)((char *)this + v4 + 1568),
                     (float *)this + 4 * v10 + 392)
                || *v14 >= 0.86000001
                || CalcOvehead() < 50000.0 )
              {
                v41 = *((_OWORD *)this + v3 + 98);
                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v41, v13);
                *(_OWORD *)((char *)this + 8 * v15) = v41;
                IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v41);
                *(_BYTE *)(v17 + 12) = IsEmpty;
                v19 = _mm_shuffle_ps(v18, v18, 170).m128_f32[0] - v18.m128_f32[0];
                v20 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
                v21 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0] - v20;
                v22 = 16 * v40;
                *(float *)(v17 + 8) = v21 * v19;
                *(float *)(v17 + 4) = (float)(v21 * 0.5) + v20;
                *(float *)v17 = (float)(v19 * 0.5) + v18.m128_f32[0];
                *((_DWORD *)this + 4 * v40 + 488) = 0;
                v23 = 2 * (v40 + 98);
                *((_BYTE *)this + v22 + 1964) = 1;
                *(_QWORD *)((char *)this + v22 + 1956) = 0LL;
                *((_QWORD *)this + v23 + 1) = 0LL;
                *((_QWORD *)this + v23) = 0LL;
                CDirtyRegion::UpdateAcceleration(this, v3);
                TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
                  (char *)this + v4 + 1696,
                  (char *)this + 16 * v40 + 1696);
                v24 = 2 * (v40 + 106);
                *((_QWORD *)this + v24 + 1) = 0LL;
                *((_QWORD *)this + v24) = 0LL;
                CDirtyRegion::AppendDirtyRegionLists(this, v3, v39);
                v5 = 1;
                break;
              }
              LODWORD(v10) = v39;
              v12 = (char *)v41;
            }
            v10 = (unsigned int)(v10 + 1);
            v12 += 32;
            v11 += 4;
            v39 = v10;
            *(_QWORD *)&v41 = v12;
          }
          while ( (unsigned int)v10 < 8 );
        }
      }
      v7 = v3 + 1;
      v3 = 0LL;
      if ( !v5 )
        v3 = v7;
    }
    while ( (unsigned int)v3 < 8 );
    if ( *((float *)this + 394) > *((float *)this + 392) && *((float *)this + 395) > *((float *)this + 393) )
    {
      *(_OWORD *)((char *)this + 2660) = *((_OWORD *)this + 98);
      *((_DWORD *)this + 697) = 0;
      v2 = 1;
    }
    if ( *((float *)this + 398) > *((float *)this + 396) && *((float *)this + 399) > *((float *)this + 397) )
    {
      v25 = 2LL * v2;
      v26 = v2++;
      *(_OWORD *)((char *)this + 8 * v25 + 2660) = *((_OWORD *)this + 99);
      *((_DWORD *)this + v26 + 697) = 1;
    }
    if ( *((float *)this + 402) > *((float *)this + 400) && *((float *)this + 403) > *((float *)this + 401) )
    {
      v27 = 2LL * v2;
      v28 = v2++;
      *(_OWORD *)((char *)this + 8 * v27 + 2660) = *((_OWORD *)this + 100);
      *((_DWORD *)this + v28 + 697) = 2;
    }
    if ( *((float *)this + 406) > *((float *)this + 404) && *((float *)this + 407) > *((float *)this + 405) )
    {
      v29 = 2LL * v2;
      v30 = v2++;
      *(_OWORD *)((char *)this + 8 * v29 + 2660) = *((_OWORD *)this + 101);
      *((_DWORD *)this + v30 + 697) = 3;
    }
    if ( *((float *)this + 410) > *((float *)this + 408) && *((float *)this + 411) > *((float *)this + 409) )
    {
      v31 = 2LL * v2;
      v32 = v2++;
      *(_OWORD *)((char *)this + 8 * v31 + 2660) = *((_OWORD *)this + 102);
      *((_DWORD *)this + v32 + 697) = 4;
    }
    if ( *((float *)this + 414) > *((float *)this + 412) && *((float *)this + 415) > *((float *)this + 413) )
    {
      v33 = 2LL * v2;
      v34 = v2++;
      *(_OWORD *)((char *)this + 8 * v33 + 2660) = *((_OWORD *)this + 103);
      *((_DWORD *)this + v34 + 697) = 5;
    }
    if ( *((float *)this + 418) > *((float *)this + 416) && *((float *)this + 419) > *((float *)this + 417) )
    {
      v35 = 2LL * v2;
      v36 = v2++;
      *(_OWORD *)((char *)this + 8 * v35 + 2660) = *((_OWORD *)this + 104);
      *((_DWORD *)this + v36 + 697) = 6;
    }
    if ( *((float *)this + 422) > *((float *)this + 420) && *((float *)this + 423) > *((float *)this + 421) )
    {
      v37 = 2LL * v2;
      v38 = v2++;
      *(_OWORD *)((char *)this + 8 * v37 + 2660) = *((_OWORD *)this + 105);
      *((_DWORD *)this + v38 + 697) = 7;
    }
    v8 = v2;
  }
  *((_DWORD *)this + 705) = v8;
  v9 = *((_BYTE *)this + 4428) == 0;
  *((_BYTE *)this + 4426) = 1;
  if ( v9 )
  {
    if ( *((_BYTE *)this + 4429) )
    {
      CDirtyRegion::SetFullDirty(this);
      *((_BYTE *)this + 4429) = 0;
    }
  }
  else
  {
    CDirtyRegion::SetRedrawRects(this);
    CDirtyRegion::SetFullDirty(this);
    *((_WORD *)this + 2214) = 0;
  }
  if ( g_pComposition )
    *((_QWORD *)this + 1) = *((_QWORD *)g_pComposition + 62);
  else
    *((_QWORD *)this + 1) = 0LL;
}
