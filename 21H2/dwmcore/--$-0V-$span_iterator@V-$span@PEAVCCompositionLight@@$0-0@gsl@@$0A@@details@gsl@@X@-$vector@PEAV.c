/*
 * XREFs of ??$?0V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@X@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@V?$span@PEAVCCompositionLight@@$0?0@gsl@@$0A@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x18019EDA8
 * Callers:
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x18019EE78 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 * Callees:
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?_Buy_nonzero@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@AEAAX_K@Z @ 0x18019F550 (-_Buy_nonzero@-$vector@PEAVCCompositionLight@@V-$allocator@PEAVCCompositionLight@@@std@@@std@@AE.c)
 */

__int64 *__fastcall std::vector<CCompositionLight *>::vector<CCompositionLight *>(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  const void *v6; // rbp
  signed __int64 v7; // rsi
  __int64 v8; // rbx

  v3 = *(_OWORD *)a3;
  v4 = *(_OWORD *)a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (_QWORD)v4 != (_QWORD)v3 || *((__int64 *)&v4 + 1) > *((__int64 *)&v3 + 1) )
  {
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD *, _QWORD *, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(
      a1,
      v4,
      a3,
      a2,
      v3);
    __debugbreak();
  }
  v6 = (const void *)(*(_QWORD *)(*a2 + 8LL) + 8LL * a2[1]);
  v7 = *(_QWORD *)(*a3 + 8LL) + 8LL * a3[1] - (_QWORD)v6;
  if ( v7 >> 3 )
  {
    std::vector<CCompositionLight *>::_Buy_nonzero(a1);
    v8 = *a1;
    memmove_0((void *)*a1, v6, v7);
    a1[1] = v7 + v8;
  }
  return a1;
}
