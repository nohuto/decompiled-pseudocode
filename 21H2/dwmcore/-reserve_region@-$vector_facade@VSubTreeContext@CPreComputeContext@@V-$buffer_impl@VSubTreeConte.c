/*
 * XREFs of ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x18008D84C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1800168AC (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 *     ??1SubTreeContext@CPreComputeContext@@QEAA@XZ @ 0x18001959C (--1SubTreeContext@CPreComputeContext@@QEAA@XZ.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18008D964 (-ensure_extra_capacity@-$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansio.c)
 *     ??$move_backward@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x180193FA4 (--$move_backward@V-$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V-$checked_array_.c)
 */

void **__fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  unsigned __int64 v12; // rdi
  void **v13; // rsi
  void **i; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int128 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 v22; // [rsp+70h] [rbp-10h]

  v2 = a2;
  detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  *((_QWORD *)&v18 + 1) = 1LL;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((v6 - *a1) >> 6);
  v8 = v7 - v2;
  *(_QWORD *)&v18 = *a1 + ((v6 - *a1) >> 6 << 6);
  if ( !(_QWORD)v18 )
    goto LABEL_22;
  v9 = v7 - v2;
  if ( v8 > 1 )
    v9 = 1LL;
  v19 = v18;
  v10 = 448 * v9;
  v20 = 1LL;
  v11 = v6 - v10;
  if ( v6 != v6 - v10 )
  {
    v16 = v20;
    do
    {
      if ( !(_QWORD)v19 )
        goto LABEL_22;
      if ( !v16 )
        goto LABEL_22;
      if ( (unsigned __int64)--v16 >= *((_QWORD *)&v19 + 1) )
        goto LABEL_22;
      CPreComputeContext::SubTreeContext::SubTreeContext((CBspPreComputeHelper *)(v19 + 448 * v16));
    }
    while ( v17 != v11 );
    v2 = a2;
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v19 = v5;
    *((_QWORD *)&v19 + 1) = v7;
    if ( !v7 || v5 && v7 >= 0 )
    {
      v20 = v7;
      v21 = v19;
      v22 = v7;
      std::move_backward<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        &v19,
        v5 + 448 * v2,
        448 * v7 + v5 - 448,
        &v21);
      goto LABEL_6;
    }
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v4);
    __debugbreak();
    JUMPOUT(0x1801468BDLL);
  }
LABEL_6:
  v12 = v5 + 448 * (v2 + 1);
  if ( (unsigned __int64)v18 < v12 )
    v12 = v18;
  v13 = (void **)(448 * v2 + v5);
  for ( i = v13; i != (void **)v12; i += 56 )
    CPreComputeContext::SubTreeContext::~SubTreeContext(i);
  a1[1] += 448LL;
  return v13;
}
