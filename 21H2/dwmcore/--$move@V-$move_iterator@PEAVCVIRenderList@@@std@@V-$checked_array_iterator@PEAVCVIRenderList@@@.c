/*
 * XREFs of ??$move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18019C120
 * Callers:
 *     ?clear_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E8B8C (-clear_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_ex.c)
 * Callees:
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  size_t v4; // rbp
  signed __int64 v7; // r10
  bool v8; // cf
  __int64 v9; // rdi
  void *v10; // rbx
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a3 - (_QWORD)a2;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a3 - (__int64)a2) >> 3);
  if ( v7 >= 0 )
  {
    if ( v7 <= 0 )
      goto LABEL_7;
    v8 = a4[1] - a4[2] < (unsigned __int64)v7;
  }
  else
  {
    v8 = a4[2] < (unsigned __int64)(0x3333333333333333LL * ((a3 - (__int64)a2) >> 3));
  }
  if ( v8 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v9 = *a4;
  v10 = (void *)(*a4 + 40 * a4[2]);
  memmove_0(v10, a2, v4);
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)((__int64)v10 + v4 - v9) >> 3);
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
