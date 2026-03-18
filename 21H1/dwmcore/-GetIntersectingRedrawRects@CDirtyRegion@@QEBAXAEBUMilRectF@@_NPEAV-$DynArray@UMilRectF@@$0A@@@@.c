/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18018CDDC
 * Callers:
 *     ?GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180172D60 (-GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800173C4 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z @ 0x18019D4EC (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@_N@Z.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, float *a2, char a3, __int64 a4)
{
  bool v8; // r8
  unsigned int v9; // eax
  unsigned int i; // ebx
  float v11; // xmm4_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  _QWORD **v25; // r13
  _QWORD *v26; // r15
  _QWORD *v27; // rbx
  unsigned int v28; // eax
  __m128i v29; // xmm2
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // edx
  int v40; // eax
  __int64 v41; // rcx
  unsigned int j; // ebx
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm3_4
  float *v47; // rax
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm0_4
  float v51; // xmm1_4
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // edx
  int v55; // eax
  __int64 v56; // rcx
  int v57; // [rsp+30h] [rbp-30h]
  __m128i v59; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)(a4 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a4, 0x10u);
  if ( *(_BYTE *)(a1 + 4459) )
  {
    if ( a3 && *(_QWORD *)(a1 + 32) == GetCurrentFrameId() )
    {
      v9 = *(_DWORD *)(a1 + 2528);
      for ( i = 0; i < v9; ++i )
      {
        v11 = *a2;
        v12 = a2[1];
        v13 = a2[2];
        v14 = a2[3];
        v59.m128i_i64[0] = __PAIR64__(LODWORD(v12), LODWORD(v11));
        v59.m128i_i64[1] = __PAIR64__(LODWORD(v14), LODWORD(v13));
        v15 = *(float *)(a1 + 16LL * i + 2564);
        if ( v15 > v11 )
        {
          v59.m128i_i32[0] = *(_DWORD *)(a1 + 16LL * i + 2564);
          v11 = v15;
        }
        v16 = *(float *)(a1 + 16LL * i + 2568);
        if ( v16 > v12 )
        {
          v59.m128i_i32[1] = *(_DWORD *)(a1 + 16LL * i + 2568);
          v12 = v16;
        }
        v17 = *(float *)(a1 + 16LL * i + 2572);
        if ( v13 <= v17 )
          v17 = v13;
        else
          v59.m128i_i32[2] = *(_DWORD *)(a1 + 16LL * i + 2572);
        v18 = *(float *)(a1 + 16LL * i + 2576);
        if ( v14 > v18 )
        {
          v59.m128i_i32[3] = *(_DWORD *)(a1 + 16LL * i + 2576);
          v14 = v18;
        }
        if ( v17 <= v11 || v14 <= v12 )
          v59 = 0uLL;
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
        {
          v20 = *(_DWORD *)(a4 + 24);
          v21 = v20 + 1;
          if ( v20 + 1 < v20 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else if ( v21 > *(_DWORD *)(a4 + 20) )
          {
            v22 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
            if ( v22 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xC0u, 0LL);
          }
          else
          {
            *(__m128i *)(*(_QWORD *)a4 + 16LL * v20) = v59;
            *(_DWORD *)(a4 + 24) = v21;
          }
        }
        v9 = *(_DWORD *)(a1 + 2528);
      }
      v57 = 0;
      v24 = 0;
      if ( v9 )
      {
        do
        {
          v25 = (_QWORD **)(a1 + 16 * (*(unsigned int *)(a1 + 4LL * v24 + 2532) + 116LL));
          v26 = *v25;
          if ( *v25 != v25 )
          {
            do
            {
              v27 = v26;
              v26 = (_QWORD *)*v26;
              v28 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v27, *(const struct CVisualTree **)a1, v8);
              v29 = _mm_loadu_si128((const __m128i *)(v27 + 3));
              v30 = *a2;
              v31 = a2[1];
              v32 = a2[2];
              v33 = a2[3];
              v59 = v29;
              v59.m128i_i32[0] = v29.m128i_i32[0];
              if ( v30 > *(float *)v29.m128i_i32 )
              {
                *(float *)v59.m128i_i32 = v30;
                *(float *)v29.m128i_i32 = v30;
              }
              v34 = *(float *)&v59.m128i_i32[1];
              if ( v31 > *(float *)&v59.m128i_i32[1] )
              {
                *(float *)&v59.m128i_i32[1] = v31;
                v34 = v31;
              }
              v35 = *(float *)&v59.m128i_i32[2];
              if ( *(float *)&v59.m128i_i32[2] > v32 )
              {
                *(float *)&v59.m128i_i32[2] = v32;
                v35 = v32;
              }
              v36 = *(float *)&v59.m128i_i32[3];
              if ( *(float *)&v59.m128i_i32[3] > v33 )
              {
                *(float *)&v59.m128i_i32[3] = v33;
                v36 = v33;
              }
              if ( v35 <= *(float *)v29.m128i_i32 || v36 <= v34 )
                v59 = 0uLL;
              if ( !COcclusionContext::IsOccluded(a1 + 16, (__int64)&v59, 0LL, v28) )
              {
                v38 = *(_DWORD *)(a4 + 24);
                v39 = v38 + 1;
                if ( v38 + 1 < v38 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0xB5u, 0LL);
                }
                else if ( v39 > *(_DWORD *)(a4 + 20) )
                {
                  v40 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
                  if ( v40 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xC0u, 0LL);
                }
                else
                {
                  *(__m128i *)(*(_QWORD *)a4 + 16LL * v38) = v59;
                  *(_DWORD *)(a4 + 24) = v39;
                }
              }
            }
            while ( v26 != v25 );
            v24 = v57;
          }
          v57 = ++v24;
        }
        while ( v24 < *(_DWORD *)(a1 + 2528) );
      }
    }
    else
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 2528); ++j )
      {
        v43 = *a2;
        v44 = a2[1];
        v45 = a2[2];
        v46 = a2[3];
        v59.m128i_i64[0] = __PAIR64__(LODWORD(v44), LODWORD(v43));
        v47 = (float *)(a1 + 16 * (j + 150LL));
        v59.m128i_i64[1] = __PAIR64__(LODWORD(v46), LODWORD(v45));
        v48 = *v47;
        if ( *v47 > v43 )
        {
          v59.m128i_i32[0] = *(__int32 *)v47;
          v43 = v48;
        }
        v49 = v47[1];
        if ( v49 > v44 )
        {
          v59.m128i_i32[1] = (__int32)v47[1];
          v44 = v49;
        }
        v50 = v47[2];
        if ( v45 <= v50 )
          v50 = v45;
        else
          v59.m128i_i32[2] = (__int32)v47[2];
        v51 = v47[3];
        if ( v46 > v51 )
        {
          v59.m128i_i32[3] = (__int32)v47[3];
          v46 = v51;
        }
        if ( v50 <= v43 || v46 <= v44 )
          v59 = 0uLL;
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
        {
          v53 = *(_DWORD *)(a4 + 24);
          v54 = v53 + 1;
          if ( v53 + 1 < v53 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          else if ( v54 > *(_DWORD *)(a4 + 20) )
          {
            v55 = DynArrayImpl<0>::AddMultipleAndSet(a4, 16, 1, &v59);
            if ( v55 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0xC0u, 0LL);
          }
          else
          {
            *(__m128i *)(*(_QWORD *)a4 + 16LL * v53) = v59;
            *(_DWORD *)(a4 + 24) = v54;
          }
        }
      }
    }
  }
}
