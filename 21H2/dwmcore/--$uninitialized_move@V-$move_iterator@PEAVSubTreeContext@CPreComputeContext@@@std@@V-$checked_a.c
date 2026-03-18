/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@std@@V?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVSubTreeContext@CPreComputeContext@@@stdext@@V?$move_iterator@PEAVSubTreeContext@CPreComputeContext@@@0@0V12@@Z @ 0x1800167F8
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18008D964 (-ensure_extra_capacity@-$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansio.c)
 * Callees:
 *     ??0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z @ 0x1800168AC (--0SubTreeContext@CPreComputeContext@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CPreComputeContext::SubTreeContext *>,stdext::checked_array_iterator<CPreComputeContext::SubTreeContext *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // r8
  bool v8; // cf
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v7 = 0x6DB6DB6DB6DB6DB7LL * ((a3 - a2) >> 6);
  if ( v7 < 0 )
  {
    v8 = a4[2] < (unsigned __int64)-v7;
  }
  else
  {
    if ( v7 <= 0 )
      goto LABEL_5;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x18011F831LL);
  }
LABEL_5:
  v9 = *a4 + 448LL * a4[2];
  while ( a2 != a3 )
  {
    CPreComputeContext::SubTreeContext::SubTreeContext(v9);
    v9 = v10 + 448;
    a2 = v11 + 448;
  }
  result = a1;
  a4[2] = 0x6DB6DB6DB6DB6DB7LL * ((v9 - *a4) >> 6);
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
