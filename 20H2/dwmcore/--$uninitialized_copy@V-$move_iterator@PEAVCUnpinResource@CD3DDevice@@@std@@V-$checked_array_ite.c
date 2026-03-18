/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18023A9FC
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18023E2A8 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180032770 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 *v4; // rbx
  __int64 v8; // rdx
  bool v9; // cc
  _QWORD *v10; // rsi
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = ((char *)a3 - (char *)a2) >> 4;
  v9 = v8 <= 0;
  if ( v8 < 0 )
  {
    if ( a4[2] < (unsigned __int64)-v8 )
    {
LABEL_6:
      _o__invalid_parameter_noinfo_noreturn(a1, v8);
      __debugbreak();
      goto LABEL_7;
    }
    v9 = v8 <= 0;
  }
  if ( !v9 && a4[1] - a4[2] < (unsigned __int64)v8 )
    goto LABEL_6;
LABEL_7:
  v10 = (_QWORD *)(*a4 + 16LL * a4[2]);
  while ( v4 != a3 )
  {
    wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
      v10,
      *v4);
    v10[1] = v4[1];
    v10 += 2;
    v4 += 2;
  }
  result = a1;
  a4[2] = ((__int64)v10 - *a4) >> 4;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
