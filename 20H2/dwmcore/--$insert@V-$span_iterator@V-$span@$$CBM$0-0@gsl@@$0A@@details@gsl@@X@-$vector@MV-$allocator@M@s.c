/*
 * XREFs of ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801EC1CC
 * Callers:
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x1801ECEA8 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1Uforward_iterator_tag@1@@Z @ 0x1801EC028 (--$_Insert_range@PEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAXV-$_Vector_const_iterator@V-$_Vec.c)
 */

_QWORD *__fastcall std::vector<float>::insert<gsl::details::span_iterator<gsl::span<float const,-1>,0>,void>(
        _QWORD *a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v7; // rbx

  if ( *a4 != *a5 || a4[1] > a5[1] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v7 = (__int64)&a3[-*a1] >> 2;
  std::vector<float>::_Insert_range<float const *>(
    (__int64)a1,
    a3,
    (const void *)(*(_QWORD *)(*a4 + 8LL) + 4LL * a4[1]),
    *(_QWORD *)(*a5 + 8LL) + 4LL * a5[1]);
  *a2 = *a1 + 4 * v7;
  return a2;
}
