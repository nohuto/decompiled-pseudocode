/*
 * XREFs of ?clear_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800F12B8
 * Callers:
 *     AppendCustomSamplerShaderBody @ 0x1800F0F2C (AppendCustomSamplerShaderBody.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1802AC128 (--$move@V-$move_iterator@PEAD@std@@V-$checked_array_iterator@PEAD@stdext@@@std@@YA-AV-$checked_a.c)
 */

__int64 __fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  __int64 v7; // rcx
  bool v9; // zf
  __int64 v10; // r8
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v7 = a2 + a3;
  v9 = a2 + a3 == v6;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v10 = v5 + v6;
    if ( v9 )
      goto LABEL_3;
  }
  *(_QWORD *)&v12 = v5;
  *((_QWORD *)&v12 + 1) = v6;
  if ( a2 && (!v5 || a2 < 0 || v6 < a2) )
  {
    _o__invalid_parameter_noinfo_noreturn(v7);
    __debugbreak();
    JUMPOUT(0x18017465ELL);
  }
  v13 = a2;
  v14 = v12;
  v15 = a2;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>)(
    &v12,
    v5 + v7,
    v10,
    &v14);
  v3 = a1[1];
LABEL_3:
  result = v3 - a3;
  a1[1] = result;
  return result;
}
