/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800798F8
 * Callers:
 *     ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x1800797C8 (--$insert@V-$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@-$vector_facade@PEAVCOverlayCont.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x180111B30 (--$uninitialized_move@V-$move_iterator@PEAPEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v3; // rsi
  __int64 v5; // rdx
  _QWORD *v7; // r15
  char *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  char *v13; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  LPVOID v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  LPVOID v21; // rbx
  char *v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r10
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-10h]

  v3 = (char *)a1[1];
  v5 = a1[2];
  v7 = a1;
  if ( (v5 - (__int64)v3) >> 3 < a3 )
  {
    v15 = (__int64)&v3[-*a1] >> 3;
    v16 = v15 + a3;
    if ( v16 < v15 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v17 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, (v5 - *a1) >> 3, v16);
    v18 = operator new(saturated_mul(v17, 8uLL));
    v19 = v7[1];
    v20 = (char *)*v7;
    *(_QWORD *)&v28 = v18;
    v21 = v18;
    *((_QWORD *)&v28 + 1) = v15;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<COverlayContext::OverlayPlaneInfo * *>,stdext::checked_array_iterator<COverlayContext::OverlayPlaneInfo * *>>)(
      &v28,
      v20,
      v19,
      &v30);
    v22 = (char *)*v7;
    v23 = *v7 == (_QWORD)(v7 + 3);
    *v7 = v21;
    if ( v23 )
      v22 = 0LL;
    DefaultHeap::Free(v22);
    v3 = (char *)(*v7 + 8 * v15);
    v24 = *v7 + 8 * v17;
    v7[1] = v3;
    v7[2] = v24;
  }
  v8 = (char *)*v7;
  v9 = (__int64)&v3[-*v7];
  *((_QWORD *)&v28 + 1) = a3;
  v10 = v9 >> 3;
  v11 = v10 - a2;
  *(_QWORD *)&v28 = &v8[8 * v10];
  if ( a3 && (!&v8[8 * v10] || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_25:
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
LABEL_26:
    v31 = v10;
    v28 = v30;
    v29 = v10;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v30,
      &v8[8 * a2],
      &v8[8 * (v10 - a3)],
      &v28);
    goto LABEL_9;
  }
  v29 = a3;
  v12 = a3;
  if ( a3 >= v11 )
    v12 = v10 - a2;
  v30 = v28;
  a1 = (_QWORD *)(8 * v12);
  v13 = (char *)(v3 - (char *)a1);
  v31 = a3;
  if ( v3 != (char *)(v3 - (char *)a1) )
  {
    v25 = v30;
    v26 = a3;
    v27 = v31;
    do
    {
      v3 -= 8;
      if ( !v25 )
        goto LABEL_25;
      if ( !v26 )
        goto LABEL_25;
      v26 = v27 - 1;
      v27 = v26;
      if ( v26 >= *((_QWORD *)&v30 + 1) )
        goto LABEL_25;
      a1 = *(_QWORD **)v3;
      *(_QWORD *)(v25 + 8 * v26) = *(_QWORD *)v3;
    }
    while ( v3 != v13 );
  }
  if ( v11 > a3 )
  {
    *(_QWORD *)&v30 = v8;
    *((_QWORD *)&v30 + 1) = v10;
    if ( !v10 || v8 && v10 >= 0 )
      goto LABEL_26;
    goto LABEL_25;
  }
LABEL_9:
  v7[1] += 8 * a3;
  return &v8[8 * a2];
}
