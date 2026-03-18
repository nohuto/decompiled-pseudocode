/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1800120E0
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003E4E4 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18003ED4C (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v5; // rdx
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // r10
  __int64 v25; // rdx
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v2 = (_QWORD *)*((_QWORD *)a1 + 1);
  v5 = *((_QWORD *)a1 + 2);
  if ( !((v5 - (__int64)v2) >> 3) )
  {
    v14 = ((__int64)v2 - *(_QWORD *)a1) >> 3;
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand(a1, (v5 - *(_QWORD *)a1) >> 3, v15);
    v17 = operator new(saturated_mul(v16, 8uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    *(_QWORD *)&v26 = v17;
    v20 = v17;
    *((_QWORD *)&v26 + 1) = v14;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v26,
      v19,
      v18,
      &v28);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    DefaultHeap::Free(v21);
    v2 = (_QWORD *)(*(_QWORD *)a1 + 8 * v14);
    v23 = *(_QWORD *)a1 + 8 * v16;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v23;
  }
  v6 = *(char **)a1;
  v7 = (__int64)v2 - *(_QWORD *)a1;
  *((_QWORD *)&v26 + 1) = 1LL;
  v8 = v7 >> 3;
  v9 = v8 - a2;
  *(_QWORD *)&v26 = &v6[8 * v8];
  if ( !(_QWORD)v26 )
    goto LABEL_23;
  v27 = 1LL;
  v10 = v8 - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v28 = v26;
  v11 = 8 * v10;
  v12 = &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL];
  v29 = 1LL;
  if ( v2 != &v2[v11 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v24 = v28;
    v25 = v29;
    do
    {
      --v2;
      if ( !v24 )
        goto LABEL_23;
      if ( !v25 )
        goto LABEL_23;
      if ( (unsigned __int64)--v25 >= *((_QWORD *)&v28 + 1) )
        goto LABEL_23;
      *(_QWORD *)(v24 + 8 * v25) = *v2;
    }
    while ( v2 != v12 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = v8;
    if ( !v8 || v6 && v8 >= 0 )
    {
      v29 = v8;
      v26 = v28;
      v27 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v28,
        &v6[8 * a2],
        &v6[8 * v8 - 8],
        &v26);
      goto LABEL_7;
    }
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x18010DFBFLL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  return &v6[8 * a2];
}
