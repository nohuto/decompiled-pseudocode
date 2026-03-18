/*
 * XREFs of ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x1800797C8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1800798F8 (-reserve_region@-$vector_facade@PEAVCOverlayContext@@V-$buffer_impl@PEAVCOverlayContext@@$0BA@$0.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<COverlayContext *>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4,
        gsl::details **a5)
{
  __int64 v7; // rbx
  gsl::details *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int128 v16; // [rsp+40h] [rbp-20h]
  gsl::details *v17; // [rsp+50h] [rbp-10h]

  v7 = *a3 - *a1;
  v9 = *a5;
  v10 = v7 >> 3;
  if ( *(_OWORD *)a5 != *(_OWORD *)a4 )
  {
LABEL_11:
    gsl::details::terminate(v9);
    JUMPOUT(0x1800798F0LL);
  }
  v11 = detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
          a1,
          v10,
          ((__int64)a5[2] - *(_QWORD *)(a4 + 16)) >> 3);
  v17 = a5[2];
  v16 = *(_OWORD *)a5;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = *(_QWORD *)a4;
  v9 = *(gsl::details **)(a4 + 16);
  v14 = v11 - (_QWORD)v9;
  while ( 1 )
  {
    if ( __PAIR128__(v12, v13) != v16 )
      goto LABEL_11;
    if ( v9 == v17 )
      break;
    if ( !v13 || !v12 || v13 > (unsigned __int64)v9 || (unsigned __int64)v9 >= v12 )
      goto LABEL_11;
    *(_QWORD *)((char *)v9 + v14) = *(_QWORD *)v9;
    v9 = (gsl::details *)((char *)v9 + 8);
  }
  *a2 = *a1 + 8 * v10;
  return a2;
}
