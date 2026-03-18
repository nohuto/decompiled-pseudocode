/*
 * XREFs of ?clear_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008E1F0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CFA78 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ?pop_back@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180194288 (-pop_back@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPr.c)
 * Callees:
 *     ??1CBspPreComputeHelper@@QEAA@XZ @ 0x18008E2A4 (--1CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x18019221C (--$move@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_iterator@.c)
 */

void __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  void **v3; // rdi
  __int64 v4; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  void **i; // rbx
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 6);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v3 = (void **)(v4 + 448 * v7);
    if ( v8 == v7 )
      goto LABEL_3;
  }
  *(_QWORD *)&v11 = v4;
  *((_QWORD *)&v11 + 1) = v7;
  if ( a2 && (!v4 || a2 < 0 || v7 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v8);
    __debugbreak();
    JUMPOUT(0x180147038LL);
  }
  v12 = a2;
  v13 = v11;
  v14 = a2;
  std::move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
    &v11,
    v4 + 448 * v8,
    v3,
    &v13);
LABEL_3:
  v9 = 448 * a3;
  for ( i = &v3[-56 * a3]; i != v3; i += 56 )
  {
    DefaultHeap::Free(i[51]);
    DefaultHeap::Free(i[47]);
    CBspPreComputeHelper::~CBspPreComputeHelper((CBspPreComputeHelper *)i);
  }
  a1[1] -= v9;
}
