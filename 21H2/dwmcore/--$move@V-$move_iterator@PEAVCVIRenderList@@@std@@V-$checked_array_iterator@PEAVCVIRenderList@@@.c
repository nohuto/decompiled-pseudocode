/*
 * XREFs of ??$move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x180169CE4
 * Callers:
 *     ?clear_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800CE1A8 (-clear_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_ex.c)
 * Callees:
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall std::move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int64 *a4)
{
  const void *v4; // r10
  size_t v5; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdi
  void *v11; // rbx
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a2;
  v5 = a3 - (_QWORD)a2;
  v8 = (__int64)((unsigned __int128)((a3 - (__int64)a2) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v9 = (v8 >> 63) + v8;
  if ( v9 < 0 && a4[2] < (unsigned __int64)-v9 || v9 > 0 && a4[1] - a4[2] < (unsigned __int64)v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1, v9);
    __debugbreak();
  }
  v10 = *a4;
  v11 = (void *)(*a4 + 40 * a4[2]);
  memmove_0(v11, v4, v5);
  result = a1;
  a4[2] = (__int64)((__int64)v11 + v5 - v10) / 40;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
