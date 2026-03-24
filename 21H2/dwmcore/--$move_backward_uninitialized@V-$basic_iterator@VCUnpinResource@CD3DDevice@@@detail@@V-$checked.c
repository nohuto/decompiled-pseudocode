/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCUnpinResource@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCUnpinResource@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@Z @ 0x18023D60C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDevice@@_K0@Z @ 0x1802410D0 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DD.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CUnpinResource>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r15
  __int64 *v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v7 = *a3;
    do
    {
      v8 = (__int64 *)(result - 16);
      *a2 = result - 16;
      if ( !v7 || (v9 = a3[2]) == 0 || (v10 = v9 - 1, a3[2] = v10, v10 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2);
        __debugbreak();
        JUMPOUT(0x18023D6A4LL);
      }
      v11 = (_QWORD *)(v7 + 16 * v10);
      wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
        v11,
        *v8);
      v11[1] = v8[1];
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
