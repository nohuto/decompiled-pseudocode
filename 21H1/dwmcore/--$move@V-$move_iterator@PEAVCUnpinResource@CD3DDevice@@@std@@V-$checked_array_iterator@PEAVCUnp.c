/*
 * XREFs of ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDevice@@@0@0V12@@Z @ 0x18023E134
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDevice@@V?$buffer_impl@VCUnpinResource@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180241B80 (-clear_region@-$vector_facade@VCUnpinResource@CD3DDevice@@V-$buffer_impl@VCUnpinResource@CD3DDev.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move<std::move_iterator<CD3DDevice::CUnpinResource *>,stdext::checked_array_iterator<CD3DDevice::CUnpinResource *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  __int64 v8; // rdx
  bool v9; // cc
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v4 = a2;
  v8 = (a3 - a2) >> 4;
  v9 = v8 <= 0;
  if ( v8 >= 0 )
  {
LABEL_4:
    if ( v9 || a4[1] - a4[2] >= (unsigned __int64)v8 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( a4[2] >= (unsigned __int64)-v8 )
  {
    v9 = v8 <= 0;
    goto LABEL_4;
  }
LABEL_6:
  _o__invalid_parameter_noinfo_noreturn(a1, v8);
  __debugbreak();
LABEL_7:
  v10 = (__int64 *)(*a4 + 16LL * a4[2]);
  while ( v4 != a3 )
  {
    v11 = *(_QWORD *)v4;
    v12 = *v10;
    *v10 = *(_QWORD *)v4;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10[1] = *((_QWORD *)v4 + 1);
    v10 += 2;
    v4 += 16;
  }
  result = a1;
  a4[2] = ((__int64)v10 - *a4) >> 4;
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
