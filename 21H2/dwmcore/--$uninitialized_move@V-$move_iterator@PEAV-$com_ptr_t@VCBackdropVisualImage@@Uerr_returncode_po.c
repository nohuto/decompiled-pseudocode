/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801B4998
 * Callers:
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18003E2AC (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800DB7E4 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // r10
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v4 = a1;
  v5 = a3 - a2;
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < (unsigned __int64)-v5;
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = *a4;
  v8 = (_QWORD *)(*a4 + 8 * a4[2]);
  while ( a2 != a3 )
  {
    v9 = *a2;
    *a2 = 0LL;
    *v8++ = v9;
    ++a2;
  }
  result = v4;
  a4[2] = ((__int64)v8 - v7) >> 3;
  v11 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v11;
  return result;
}
