/*
 * XREFs of ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FF10
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006CE20 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FE74 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FEAC (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x1800301A4 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800430E8 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BD88 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180156238 (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?reserve_region@?$vector_facade@PEAUIDXGIResource@@V?$buffer_impl@PEAUIDXGIResource@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAUIDXGIResource@@_K0@Z @ 0x180163FC4 (-reserve_region@-$vector_facade@PEAUIDXGIResource@@V-$buffer_impl@PEAUIDXGIResource@@$06$00Vlibe.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x18017A1D4 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18017B668 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18017C744 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18017CE38 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18017D42C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

char __fastcall COverlayContext::InitCheckCandidatesList(__int64 *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 *v3; // r14
  char v4; // di
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  __int64 *v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  unsigned int v10; // r15d
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // r12
  COverlayContext **v14; // r14
  __int64 v15; // rsi
  COverlayContext *v16; // r15
  char v17; // bl
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // r14d
  int v24; // esi
  unsigned int v25; // r12d
  const struct COverlayContext::OverlayPlaneInfo *v26; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v27; // rax
  __int64 v28; // r12
  __m128i **v29; // r14
  __m128i *v30; // rsi
  __int32 *v31; // rsi
  char DoesContain; // al
  char v34; // r11
  char v35; // r13
  char v36; // r10
  bool v37; // bl
  __int64 v38; // r14
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // r9
  unsigned int v43; // edx
  char v44; // al
  __int64 v45; // rcx
  __int64 v46; // r10
  __int64 v47; // r8
  _BYTE *v48; // rbx
  char v49; // [rsp+20h] [rbp-E0h]
  char v50; // [rsp+24h] [rbp-DCh]
  char v51; // [rsp+28h] [rbp-D8h]
  __int64 v53; // [rsp+38h] [rbp-C8h] BYREF
  int v54; // [rsp+40h] [rbp-C0h]
  __int16 v55; // [rsp+44h] [rbp-BCh]
  char v56; // [rsp+46h] [rbp-BAh]
  __int64 *v57; // [rsp+48h] [rbp-B8h]
  __int64 v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+58h] [rbp-A8h]
  _BYTE *v60; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v61[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v62[2]; // [rsp+78h] [rbp-88h] BYREF
  __m128i v63; // [rsp+88h] [rbp-78h]
  _BYTE v64[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v65; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v66; // [rsp+C8h] [rbp-38h]
  _BYTE **v67; // [rsp+D0h] [rbp-30h]
  _BYTE v68[128]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE *v69; // [rsp+158h] [rbp+58h] BYREF
  _BYTE *v70; // [rsp+160h] [rbp+60h]
  __int64 *v71; // [rsp+168h] [rbp+68h]
  _BYTE v72[128]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v73; // [rsp+1F0h] [rbp+F0h] BYREF

  v57 = a1;
  v50 = 0;
  v65 = v68;
  v2 = a2;
  v3 = (__int64 *)a1[1];
  v4 = 1;
  v5 = *a1;
  v6 = 0LL;
  v66 = v68;
  v67 = &v69;
  v51 = 0;
  v7 = &v3[v5];
  v53 = 0LL;
  v8 = (v5 * 8) >> 3;
  v54 = 0;
  v55 = 0;
  if ( v3 > v7 )
    v8 = 0LL;
  v56 = 0;
  if ( v8 )
  {
    do
    {
      v9 = *v3;
      v10 = 0;
      *(_QWORD *)(v9 + 11436) = 0LL;
      v11 = *(_BYTE *)(v9 + 11426);
      *(_WORD *)(v9 + 11448) = 0;
      *(_BYTE *)(v9 + 11450) = v11;
      *(_DWORD *)(v9 + 11444) = 0;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v9 + 96);
        if ( v10 >= (unsigned int)((*(_QWORD *)(v9 + 104) - v12) / 224) )
          break;
        v21 = 224LL * v10;
        *(_DWORD *)(v21 + v12 + 208) = v10;
        v22 = v21 + *(_QWORD *)(v9 + 96);
        ++v10;
        *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                     &v65,
                     (v66 - v65) >> 3) = v22;
      }
      ++v3;
      ++v6;
    }
    while ( v6 != v8 );
    v2 = a2;
  }
  while ( ((v66 - v65) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v61, &v65);
    v23 = v61[0];
    v24 = -1;
    if ( v61[0] )
    {
      v24 = 0;
      v25 = 1;
      if ( LODWORD(v61[0]) > 1 )
      {
        do
        {
          v26 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                      v61,
                                                                      v24);
          v27 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                     v61,
                                                                     v25);
          if ( COverlayContext::IsHigherProprity(*v27, v26) )
            v24 = v25;
          ++v25;
        }
        while ( v25 < v23 );
        v2 = a2;
      }
    }
    v28 = v24;
    v29 = *(__m128i ***)&v65[8 * v24];
    v30 = *v29;
    v63 = (*v29)[3];
    if ( (_mm_srli_si128(v63, 8).m128i_i32[1] & 0x2000) != 0 )
      v31 = (__int32 *)&v53;
    else
      v31 = &v30[714].m128i_i32[3];
    if ( *v31 < (unsigned int)(v63.m128i_i32[0] - 1)
      && (*((_BYTE *)v29 + 176) ? (unsigned int)v31[2] < v63.m128i_i32[2] : v31[1] < (unsigned int)(v63.m128i_i32[1] - 1)) )
    {
      v49 = COverlayContext::OverlayPlaneInfo::RequiresFrontPlane((COverlayContext::OverlayPlaneInfo *)v29);
      DoesContain = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
                      (char *)v29 + 52,
                      (char *)v29 + 68);
      v35 = DoesContain;
      if ( v36 )
      {
        v37 = DoesContain;
      }
      else if ( !DoesContain || (v37 = 1, v51 != v34) )
      {
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v62, v2);
        v37 = (unsigned __int8)COverlayContext::CheckPaddingCorrectness(v62, v29) != 0;
      }
      if ( *v57 > 1 )
      {
        v38 = *(_QWORD *)&v65[8 * v28];
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(&v58, v2);
        v39 = v59;
        v40 = v59 + 8 * v58;
        if ( v59 != v40 )
        {
          while ( *(_QWORD *)(v38 + 16) != *(_QWORD *)(*(_QWORD *)v39 + 16LL) )
          {
            v39 += 8LL;
            if ( v39 == v40 )
              goto LABEL_55;
          }
          v37 = 0;
        }
      }
LABEL_55:
      if ( v37 )
      {
        v41 = **(_QWORD **)&v65[8 * v28];
        if ( *(_BYTE *)(v41 + 11449) )
        {
          if ( v49 != *(_BYTE *)(v41 + 11448) )
            v37 = 0;
        }
        else
        {
          *(_BYTE *)(v41 + 11448) = v49;
        }
        if ( v37 )
        {
          v42 = *(__int64 **)v2;
          v43 = 0;
          v44 = v51;
          if ( !v35 )
            v44 = 1;
          v45 = (__int64)(*(_QWORD *)(v2 + 8) - (_QWORD)v42) >> 3;
          v51 = v44;
          if ( (_DWORD)v45 )
          {
            v46 = *(_QWORD *)&v65[8 * v28];
            do
            {
              v47 = v42[v43];
              if ( *(_QWORD *)v46 == *(_QWORD *)v47 && *(_DWORD *)(v46 + 208) < *(_DWORD *)(v47 + 208) )
                break;
              ++v43;
            }
            while ( v43 != (_DWORD)v45 );
          }
          v48 = v65;
          *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                       v2,
                       (8LL * v43) >> 3) = *(_QWORD *)&v48[8 * v28];
          *(_BYTE *)(**(_QWORD **)&v65[8 * v28] + 11449LL) = 1;
          ++*v31;
          if ( *(_BYTE *)(*(_QWORD *)&v65[8 * v28] + 176LL) )
            ++v31[2];
          else
            ++v31[1];
        }
      }
    }
    v60 = &v65[8 * v28];
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      &v65,
      v64,
      &v60);
  }
  COverlayContext::RemoveUnbackedSurfaces((__int64 **)v2);
  v13 = 0LL;
  v14 = (COverlayContext **)v57[1];
  v15 = *v57 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v14 > &v14[*v57] )
    v15 = 0LL;
  if ( v15 )
  {
    do
    {
      v16 = *v14;
      v69 = v72;
      v70 = v72;
      v71 = &v73;
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v62, a2);
      COverlayContext::GetContextCandidates((__int64)v16, v62, &v69);
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(&v58, &v69);
      COverlayContext::DeriveDesktopPlaneAttributes(v16);
      v17 = v50;
      if ( *((_BYTE *)v16 + 11032) )
      {
        v17 = v50;
        if ( *((_BYTE *)v16 + 11033) )
          v17 = 1;
        v50 = v17;
      }
      v18 = v69;
      if ( (v70 - v69) >> 3 )
      {
        detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v69);
        v18 = v69;
      }
      v69 = 0LL;
      if ( v18 == v72 )
        v18 = 0LL;
      operator delete(v18);
      ++v14;
      ++v13;
    }
    while ( v13 != v15 );
    v2 = a2;
  }
  else
  {
    v17 = 0;
  }
  if ( ((*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) & 0xFFFFFFFFFFFFFFF8uLL) == 0 && !v17 )
    v4 = 0;
  v19 = v65;
  if ( (v66 - v65) >> 3 )
  {
    detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(&v65);
    v19 = v65;
  }
  v65 = 0LL;
  if ( v19 == v68 )
    v19 = 0LL;
  operator delete(v19);
  return v4;
}
