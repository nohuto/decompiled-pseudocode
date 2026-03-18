/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18023A63C
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18003E2AC (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  bool v9; // cf
  __int64 v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // xmm1_8

  v6 = a3 - a2;
  v7 = a3;
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      goto LABEL_7;
    v9 = a4[1] - a4[2] < (unsigned __int64)-v6;
  }
  else
  {
    v9 = a4[2] < (unsigned __int64)v6;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v10 = *a4;
  v11 = (__int64 *)(*a4 + 8 * a4[2]);
  while ( a2 != v7 )
  {
    --v7;
    --v11;
    v12 = *v7;
    *v7 = 0LL;
    v13 = *v11;
    *v11 = v12;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  result = a1;
  a4[2] = ((__int64)v11 - v10) >> 3;
  v15 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v15;
  return result;
}
