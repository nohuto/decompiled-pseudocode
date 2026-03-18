/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B5FF0
 * Callers:
 *     ?GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A02E0 (-GetIntersectingRedrawRects@CDesktopTree@@UEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ @ 0x1800B8CDC (-GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800DF6AC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1801DED5C (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(__int64 a1, float *a2, char a3, unsigned __int64 a4)
{
  unsigned int v8; // eax
  unsigned int i; // ebx
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r15d
  _QWORD *v24; // r12
  _QWORD *v25; // r14
  __m128i v26; // xmm0
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  const struct CBackdropVisualImageKey *BVIKeyForCurrentWalk; // rax
  bool v35; // r9
  int v36; // eax
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
  if ( *(_BYTE *)(a1 + 4427) )
  {
    if ( a3 && *(struct CComposition **)(a1 + 40) == GetCurrentFrameId() )
    {
      v8 = *(_DWORD *)(a1 + 2496);
      for ( i = 0; i < v8; ++i )
      {
        v10 = *a2;
        v11 = a2[1];
        v12 = a2[2];
        v13 = a2[3];
        v59.m128i_i64[0] = __PAIR64__(LODWORD(v11), LODWORD(v10));
        v59.m128i_i64[1] = __PAIR64__(LODWORD(v13), LODWORD(v12));
        v14 = *(float *)(a1 + 16LL * i + 2532);
        if ( v14 > v10 )
        {
          v59.m128i_i32[0] = *(_DWORD *)(a1 + 16LL * i + 2532);
          v10 = v14;
        }
        v15 = *(float *)(a1 + 16LL * i + 2536);
        if ( v15 > v11 )
        {
          v59.m128i_i32[1] = *(_DWORD *)(a1 + 16LL * i + 2536);
          v11 = v15;
        }
        v16 = *(float *)(a1 + 16LL * i + 2540);
        if ( v12 <= v16 )
          v16 = v12;
        else
          v59.m128i_i32[2] = *(_DWORD *)(a1 + 16LL * i + 2540);
        v17 = *(float *)(a1 + 16LL * i + 2544);
        if ( v13 > v17 )
        {
          v59.m128i_i32[3] = *(_DWORD *)(a1 + 16LL * i + 2544);
          v13 = v17;
        }
        if ( v16 <= v10 || v13 <= v11 )
          v59 = 0uLL;
        if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
        {
          v19 = *(_DWORD *)(a4 + 24);
          v20 = v19 + 1;
          if ( v19 + 1 >= v19 )
          {
            if ( v20 > *(_DWORD *)(a4 + 20) )
            {
              v21 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x10u, 1, &v59);
              if ( v21 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xC0u);
            }
            else
            {
              *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
              *(_DWORD *)(a4 + 24) = v20;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
        v8 = *(_DWORD *)(a1 + 2496);
      }
      v57 = 0;
      v23 = 0;
      if ( v8 )
      {
        do
        {
          v24 = (_QWORD *)(a1 + 16 * (*(unsigned int *)(a1 + 4LL * v23 + 2500) + 114LL));
          v25 = (_QWORD *)*v24;
          if ( (_QWORD *)*v24 != v24 )
          {
            do
            {
              v26 = _mm_loadu_si128((const __m128i *)(v25 + 3));
              v27 = *a2;
              v28 = a2[1];
              v29 = a2[2];
              v30 = a2[3];
              v59 = v26;
              v59.m128i_i32[0] = v26.m128i_i32[0];
              if ( v27 > *(float *)v26.m128i_i32 )
              {
                *(float *)v59.m128i_i32 = v27;
                *(float *)v26.m128i_i32 = v27;
              }
              v31 = *(float *)&v59.m128i_i32[1];
              if ( v28 > *(float *)&v59.m128i_i32[1] )
              {
                *(float *)&v59.m128i_i32[1] = v28;
                v31 = v28;
              }
              v32 = *(float *)&v59.m128i_i32[2];
              if ( *(float *)&v59.m128i_i32[2] > v29 )
              {
                *(float *)&v59.m128i_i32[2] = v29;
                v32 = v29;
              }
              v33 = *(float *)&v59.m128i_i32[3];
              if ( *(float *)&v59.m128i_i32[3] > v30 )
              {
                *(float *)&v59.m128i_i32[3] = v30;
                v33 = v30;
              }
              if ( v32 <= *(float *)v26.m128i_i32 || v33 <= v31 )
                v59 = 0uLL;
              if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v59.m128i_i32) )
              {
                BVIKeyForCurrentWalk = COcclusionContext::GetBVIKeyForCurrentWalk((COcclusionContext *)(a1 + 16));
                v36 = CDirtyRegionAnnotation::GetZ(
                        (CDirtyRegionAnnotation *)v25,
                        *(const struct CVisualTree **)a1,
                        BVIKeyForCurrentWalk,
                        v35);
                if ( !COcclusionContext::IsOccluded(a1 + 16, (float *)v59.m128i_i32, v36) )
                {
                  v38 = *(_DWORD *)(a4 + 24);
                  v39 = v38 + 1;
                  if ( v38 + 1 >= v38 )
                  {
                    if ( v39 > *(_DWORD *)(a4 + 20) )
                    {
                      v40 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x10u, 1, &v59);
                      if ( v40 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0xC0u);
                    }
                    else
                    {
                      *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
                      *(_DWORD *)(a4 + 24) = v39;
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, -2147024362, 0xB5u);
                  }
                }
              }
              v25 = (_QWORD *)*v25;
            }
            while ( v25 != v24 );
            v23 = v57;
          }
          v57 = ++v23;
        }
        while ( v23 < *(_DWORD *)(a1 + 2496) );
      }
    }
    else
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 2496); ++j )
      {
        v43 = *a2;
        v44 = a2[1];
        v45 = a2[2];
        v46 = a2[3];
        v59.m128i_i64[0] = __PAIR64__(LODWORD(v44), LODWORD(v43));
        v47 = (float *)(a1 + 16 * (j + 148LL));
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
          if ( v53 + 1 >= v53 )
          {
            if ( v54 > *(_DWORD *)(a4 + 20) )
            {
              v55 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0x10u, 1, &v59);
              if ( v55 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0LL, v55, 0xC0u);
            }
            else
            {
              *(__m128i *)(*(_QWORD *)a4 + 16LL * *(unsigned int *)(a4 + 24)) = v59;
              *(_DWORD *)(a4 + 24) = v54;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0LL, -2147024362, 0xB5u);
          }
        }
      }
    }
  }
}
