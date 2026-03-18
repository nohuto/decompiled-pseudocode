/*
 * XREFs of ??$move@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2928
 * Callers:
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801E3980 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v4 = a1;
  v5 = 0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2);
  }
  if ( v6 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
  }
LABEL_7:
  v7 = *a4 + 52LL * a4[2];
  while ( a2 != a3 )
  {
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_DWORD *)(v7 + 48) = *(_DWORD *)(a2 + 48);
    v7 += 52LL;
    a2 += 52LL;
  }
  result = v4;
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a4) >> 2);
  v9 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v9;
  return result;
}
