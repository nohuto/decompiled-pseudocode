/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@M@detail@@V?$checked_array_iterator@PEAM@stdext@@@detail@@YAXV?$basic_iterator@M@0@0V?$checked_array_iterator@PEAM@stdext@@@Z @ 0x180042DA4
 * Callers:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x180042CD4 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<float>,stdext::checked_array_iterator<float *>>(
        unsigned __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r9
  __int64 v5; // r10
  _DWORD *v6; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (_DWORD *)(result - 4);
      *a2 = (__int64)v6;
      if ( !v5 || (a1 = a3[2]) == 0 || (--a1, a3[2] = a1, a1 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2);
        __debugbreak();
        JUMPOUT(0x18010EBE2LL);
      }
      *(_DWORD *)(v5 + 4 * a1) = *v6;
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
