/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAUPrimitiveUVDesc@@@std@@V?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUPrimitiveUVDesc@@@stdext@@V?$move_iterator@PEAUPrimitiveUVDesc@@@0@0V12@@Z @ 0x1801E2B2C
 * Callers:
 *     ?reserve_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveUVDesc@@_K0@Z @ 0x1801E40E8 (-reserve_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$01$00Vlibera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move_backward<std::move_iterator<PrimitiveUVDesc *>,stdext::checked_array_iterator<PrimitiveUVDesc *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r11
  signed __int64 v5; // r10
  bool v6; // cf
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // xmm1_8

  v4 = a1;
  v5 = 0xB13B13B13B13B13BuLL * ((a3 - a2) >> 2);
  if ( v5 >= 0 )
  {
    if ( v5 <= 0 )
      goto LABEL_7;
    v6 = a4[1] - a4[2] < (unsigned __int64)v5;
  }
  else
  {
    v6 = a4[2] < (unsigned __int64)(0x4EC4EC4EC4EC4EC5LL * ((a3 - a2) >> 2));
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
    v7 -= 52LL;
    a3 -= 52LL;
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_DWORD *)(v7 + 48) = *(_DWORD *)(a3 + 48);
  }
  result = v4;
  a4[2] = 0x4EC4EC4EC4EC4EC5LL * ((v7 - *a4) >> 2);
  v9 = a4[2];
  *(_OWORD *)v4 = *(_OWORD *)a4;
  *(_QWORD *)(v4 + 16) = v9;
  return result;
}
