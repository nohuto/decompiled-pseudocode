/*
 * XREFs of ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18017C98C
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180078130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CA64 (-RemoveUnbackedSurfaces@COverlayContext@@CAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayCon.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003CA9C (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18003CD94 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ??$?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@X@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18004FC88 (--$-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo@.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?clear_region@?$vector_facade@PEAVCDesktopTree@@V?$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180155B3C (-clear_region@-$vector_facade@PEAVCDesktopTree@@V-$buffer_impl@PEAVCDesktopTree@@$00$00Vliberal_.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18017BC84 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?erase@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@@Z @ 0x18017CF5C (-erase@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal.c)
 */

char __fastcall COverlayContext::TrimCheckCandidatesList(_QWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 *v5; // rcx
  __int64 *v6; // rdx
  __int64 v7; // rax
  COverlayContext **v8; // r12
  char v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  COverlayContext *v12; // rbx
  char v13; // r8
  COverlayContext *v14; // rbx
  gsl::details *v15; // rcx
  __int64 v16; // r8
  COverlayContext *v18; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v19[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-91h] BYREF
  gsl::details *v21; // [rsp+48h] [rbp-81h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-79h]
  __int64 *v23; // [rsp+58h] [rbp-71h]
  _BYTE v24[128]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v25; // [rsp+E0h] [rbp+17h] BYREF

  v2 = 0;
  if ( ((*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
  {
    gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
      v19,
      (gsl::details **)a2);
    v18 = (COverlayContext *)(*(_QWORD *)a2
                            + 8LL
                            * (int)COverlayContext::FindLowestPriorityOverlayCandidateIndex((unsigned __int64 *)v19));
    detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::erase(
      a2,
      v19,
      &v18);
    COverlayContext::RemoveUnbackedSurfaces((__int64 **)a2);
LABEL_10:
    v8 = (COverlayContext **)a1[1];
    v9 = 0;
    v10 = 0LL;
    v11 = *a1 & 0x1FFFFFFFFFFFFFFFLL;
    if ( v8 > &v8[*a1] )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = *v8;
        v21 = (gsl::details *)v24;
        v18 = v12;
        v22 = v24;
        v23 = &v25;
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(
          v19,
          (gsl::details **)a2);
        COverlayContext::GetContextCandidates((__int64)v12, v19, &v21);
        LOBYTE(v12) = *((_BYTE *)v12 + 11450);
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v20, &v21);
        v13 = (char)v12;
        v14 = v18;
        COverlayContext::DeriveDesktopPlaneAttributes(v18, v20, v13);
        if ( *((_BYTE *)v14 + 11032) && *((_BYTE *)v14 + 11033) )
          v9 = 1;
        v15 = v21;
        v16 = (v22 - (_BYTE *)v21) >> 3;
        if ( v16 )
        {
          detail::vector_facade<CDesktopTree *,detail::buffer_impl<CDesktopTree *,1,1,detail::liberal_expansion_policy>>::clear_region(
            (__int64 *)&v21,
            0LL,
            v16);
          v15 = v21;
        }
        v21 = 0LL;
        if ( v15 == (gsl::details *)v24 )
          v15 = 0LL;
        operator delete(v15);
        ++v8;
        ++v10;
      }
      while ( v10 != v11 );
    }
    if ( ((*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 || v9 )
      return 1;
  }
  else
  {
    v5 = (__int64 *)a1[1];
    v6 = &v5[*a1];
    while ( v5 != v6 )
    {
      v7 = *v5;
      if ( *(_BYTE *)(*v5 + 11032) && *(_BYTE *)(v7 + 11033) )
      {
        *(_BYTE *)(v7 + 11450) = 0;
        goto LABEL_10;
      }
      ++v5;
    }
  }
  return v2;
}
